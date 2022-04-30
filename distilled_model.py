import keras
from keras import layers
from keras import activations
from keras.layers import Conv2D, Dense, BatchNormalization, MaxPooling2D, Activation, Flatten
from qkeras.qlayers import QDense, QActivation
from qkeras.qconvolutional import QConv2D
from qkeras.qconv2d_batchnorm import QConv2DBatchnorm
from qkeras.qpooling import QAveragePooling2D
from qkeras import QDenseBatchnorm
from qkeras.quantizers import quantized_bits, quantized_relu


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
    x = Activation(activations.relu)(x)
    x = Dense(84,)(x)
    x = BatchNormalization()(x)
    x = Activation(activations.relu)(x)
    x = Dense(6, kernel_initializer="zeros")(x) # 6 elements to describe the transformation
    return keras.Model(inputs, x)

def create_quantized_distilled_model(precision):


    bits = precision
    int_bits = int(precision/2)

    kwargs = {'kernel_quantizer': quantized_bits(bits,int_bits,alpha=1),
              'bias_quantizer': quantized_bits(bits,int_bits,alpha=1), 
              'kernel_initializer': 'lecun_uniform', 
          }
    inputs = keras.Input(shape=(120,120, 1), name='input')

    x = QConv2DBatchnorm(14, (5,5),padding='valid', **kwargs)(inputs)
    x = QActivation(activation='quantized_relu')(x)
    
    x = MaxPooling2D((2, 2), strides=2)(x)
    x = QConv2DBatchnorm(32, (5,5), padding='valid', **kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    
    x = MaxPooling2D((2, 2),strides=2)(x)
    x = Flatten()(x)    
    x = QDenseBatchnorm(120,**kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = QDenseBatchnorm(84,**kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = QDense(6, **kwargs)(x) # 6 elements to describe the transformation
    return keras.Model(inputs, x)
    
def create_smaller_quantized_distilled_model(precision):

    bits = precision
    int_bits = int(precision/2)

    kwargs = {'kernel_quantizer': quantized_bits(bits,int_bits,alpha=1),
              'bias_quantizer': quantized_bits(bits,int_bits,alpha=1), 
              'kernel_initializer': 'lecun_uniform', 
          }
    inputs = keras.Input(shape=(120,120, 1), name='input')

    x = QConv2DBatchnorm(4, (5,5),padding='valid', **kwargs)(inputs)
    x = QActivation(activation='quantized_relu')(x)
    
    x = MaxPooling2D((4, 4), strides=2)(x)
    x = QConv2DBatchnorm(8, (5,5), padding='valid', **kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = MaxPooling2D((4, 4),strides=2)(x)
    x = Flatten()(x)
    x = QDenseBatchnorm(16,**kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = QDense(6, **kwargs)(x) # 6 elements to describe the transformation
    return keras.Model(inputs, x)

def create_extra_small_quantized_distilled_model(precision):

    bits = precision
    int_bits = int(precision/2)

    kwargs = {'kernel_quantizer': quantized_bits(bits,int_bits,alpha=1),
              'bias_quantizer': quantized_bits(bits,int_bits,alpha=1), 
              'kernel_initializer': 'lecun_uniform', 
          }
    inputs = keras.Input(shape=(120,120, 1), name='input')

    x = QConv2DBatchnorm(4, (5,5),padding='valid', **kwargs)(inputs)
    x = QActivation(activation='quantized_relu')(x)
    x = MaxPooling2D((4, 4), strides=2)(x)

    x = QConv2DBatchnorm(8, (5,5), padding='valid', **kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = MaxPooling2D((4, 4),strides=2)(x)

    x = QConv2DBatchnorm(8, (5,5), padding='valid', **kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = MaxPooling2D((4, 4),strides=2)(x)

    x = QConv2DBatchnorm(8, (5,5), padding='valid', **kwargs)(x)
    x = QActivation(activation='quantized_relu')(x)
    x = MaxPooling2D((4, 4),strides=2)(x)

    x = Flatten()(x)

    # x = QDenseBatchnorm(16,**kwargs)(x)
    x = QDense(16,**kwargs)(x)
    x = BatchNormalization()(x)
    x = QActivation(activation='quantized_relu')(x)
    x = QDense(6, **kwargs)(x) # 6 elements to describe the transformation
    return keras.Model(inputs, x)