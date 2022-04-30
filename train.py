import os
from random import shuffle
if os.system('nvidia-smi') == 0:
    import setGPU
os.environ['HDF5_USE_FILE_LOCKING']='FALSE'
import tensorflow as tf
import matplotlib.pyplot as plt
import numpy as np
import h5py
import argparse
from distilled_model import create_distilled_model, create_quantized_distilled_model, create_smaller_quantized_distilled_model, create_extra_small_quantized_distilled_model
from sklearn.model_selection import train_test_split
import yaml


def yaml_load(config):
    with open(config, 'r') as stream:
        param = yaml.safe_load(stream)
    return param

def main(args):

    # get yaml config of model
    config = yaml_load(args.config)


    # generate training data
    img = np.load('02_scan_x256_y256_raw.npy')
    img = np.transpose(img,(2,3,0,1))
    data_r = np.copy(img)
    data_r[data_r>1e3]=1e3
    min_ = np.min(data_r)
    max_ = np.max(data_r)
    data_r = 1.0*(data_r-min_)/(max_-min_)
    data_r = data_r.reshape(-1,1,124,124)
    data_r_cut = data_r[:,:,2:122,2:122]
    data_r_cut = data_r_cut.reshape(256,256,120,120)
    data_r_cut = np.rot90(data_r_cut)
    X = data_r_cut.reshape(-1, 120,120)

    # generate outputs/targets
    dataset_h5 = h5py.File('unbinned_results.h5','r+')
    rots = np.array(dataset_h5['rotation'])
    scal = np.array(dataset_h5['scale'])
    y = np.concatenate((rots, scal), axis=1)


    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.1, random_state=1)
    np.save('x_test.npy',X_test)
    np.save('x_test.npy',y_test)
    #using random state = 1 so we keep the test set consistant for verifying the model performance

    # define model
    print(config['name'])
    model = create_distilled_model() if 'float' in config['name'] \
        else create_quantized_distilled_model(config['precision']) if 'quant' in config['name']  \
        else create_smaller_quantized_distilled_model(config['precision']) if 'small' in config['name'] \
        else create_extra_small_quantized_distilled_model(config['precision']) if 'extra' in config['name'] \
        else None
    optimizer = 'adam'
    loss = 'mse'
    model.compile(optimizer=optimizer,
                    loss=loss,)

    model.summary()

    history = model.fit(X_train, y_train, 
                    epochs=25,
                    batch_size = 128,
                    shuffle=True,
                    validation_split=0.2,)

    model.save('{}/model.h5'.format(config['model_save_dir']))

    # get predictions
    y_pred = model.predict(X_test)

    # plot history
    plt.plot(history.history['loss'])
    plt.plot(history.history['val_loss'])
    plt.title('model accuracy')
    plt.ylabel('loss')
    plt.xlabel('epoch')
    plt.legend(['train', 'val'], loc='upper left')
    plt.savefig('{}/model.png'.format(config['model_save_dir']))

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('-c', '--config', type=str, default='float_model.yml', help="specify yaml config")

    args = parser.parse_args()

    main(args)