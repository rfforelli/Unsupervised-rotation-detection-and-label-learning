import hls4ml
import keras
import os

os.environ['CUDA_VISIBLE_DEVICES'] = '-1'

from qkeras.utils import _add_supported_quantized_objects
import argparse
import yaml
from post_process import post_process
from build import build


def yaml_load(config):
    with open(config, 'r') as stream:
        param = yaml.safe_load(stream)
    return param

def print_dict(d, indent=0):
    align = 20
    for key, value in d.items():
        print('  ' * indent + str(key), end='')
        if isinstance(value, dict):
            print()
            print_dict(value, indent+1)
        else:
            print(':' + ' ' * (20 - len(key) - 2 * indent) + str(value))

def main(args):

    param = yaml_load(args.config)
    co = {}
    _add_supported_quantized_objects(co)

    # load keras model
    MODEL = keras.models.load_model(param['model'], custom_objects=co)
    MODEL.summary()
    OUTPUT_DIR = param['output_dir']
    HLS_OUTPUT_DIR = param['output_dir']
    REUSE_FACTOR = param['reuse_factor']

    isExist = os.path.exists(OUTPUT_DIR)
    if not isExist:
        os.makedirs(OUTPUT_DIR)

    post_process(MODEL, OUTPUT_DIR)
    
    os.environ['PATH'] = "/tools/Xilinx/Vivado/2019.2/bin:" + os.environ['PATH']

    config = hls4ml.utils.config_from_keras_model(MODEL, granularity='name')
    config['Model']['ReuseFactor'] = REUSE_FACTOR
    # config['SkipOptimizers'] = ['reshape_stream']
    config['SkipOptimizers']= ['relu_merge']
    config['Model']['Strategy'] = 'Latency'
    
    
    for layer in config['LayerName'].keys():
        config['LayerName'][layer]['Trace'] = True
        config['LayerName'][layer]['ReuseFactor'] = REUSE_FACTOR
        
    #config['LayerName']['q_dense']['ReuseFactor'] = 32 #added
    #config['LayerName']['q_dense']['Strategy'] = 'Latency' #added
    #config['LayerName']['q_dense_1']['ReuseFactor'] = 32 #added
    #config['LayerName']['q_dense_1']['Strategy'] = 'Latency' #added
    #config['LayerName']['q_dense_2']['ReuseFactor'] = 32 #added
    #config['LayerName']['q_dense_2']['Strategy'] = 'Latency' #added
    #config['LayerName']['q_dense_3']['ReuseFactor'] = 32 #added
    #config['LayerName']['q_dense_3']['Strategy'] = 'Latency' #added


    print_dict(config)
    hls_model = hls4ml.converters.convert_from_keras_model(MODEL,
                                                        hls_config=config,
                                                        output_dir=HLS_OUTPUT_DIR,
                                                        part='xcu200-fsgd2104-2-e',
                                                        io_type='io_stream')

    build(hls_model)
    

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('-c', '--config', type=str, default='float_model.yml', help="specify model file")

    args = parser.parse_args()

    main(args)
