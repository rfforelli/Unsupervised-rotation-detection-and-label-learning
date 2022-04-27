import keras
from keras import layers
from keras import activations
from keras.layers import Conv2D, Dense, BatchNormalization, MaxPooling2D, Activation, Flatten


def create_distilled_model():
    inputs = keras.Input(shape=(120,120, 1), name='input')
    x = Conv2D(14, (5,5),padding='valid')(inputs)
    x = BatchNormalization()(x)
    x = Activation(activations.relu)(x)
    
    x = MaxPooling2D((2, 2), strides=2)(x)
    x = Conv2D(32, (5,5), padding='valid')(x)
    x = BatchNormalization()(x)
    x = Activation(activations.relu)(x)
    
    x = MaxPooling2D((2, 2),strides=2)(x)
    x = Flatten()(x)    
    x = Dense(120,)(x)
    x = BatchNormalization()(x)
    x = Dense(84,)(x)
    x = Dense(6, kernel_initializer="zeros")(x) # 6 elements to describe the transformation
    return keras.Model(inputs, x)