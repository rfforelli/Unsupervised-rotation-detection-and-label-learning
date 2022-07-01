#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_batchnorm_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
 
//hls-fpga-machine-learning insert weights
#include "weights/w4.h"
#include "weights/b4.h"
#include "weights/s6.h"
#include "weights/b6.h"
#include "weights/w8.h"
#include "weights/b8.h"
#include "weights/s10.h"
#include "weights/b10.h"
#include "weights/w12.h"
#include "weights/b12.h"
#include "weights/s14.h"
#include "weights/b14.h"
#include "weights/w16.h"
#include "weights/b16.h"

//hls-fpga-machine-learning insert layer-config
// average_pooling2d
struct config2 : nnet::pooling2d_config {
    static const unsigned in_height = 120;
    static const unsigned in_width = 120;
    static const unsigned n_filt = 1;
    static const unsigned stride_height = 4;
    static const unsigned stride_width = 4;
    static const unsigned pool_height = 4;
    static const unsigned pool_width = 4;

    static const unsigned filt_height = pool_height;
    static const unsigned filt_width = pool_width;
    static const unsigned n_chan = n_filt;

    static const unsigned out_height = 30;
    static const unsigned out_width = 30;
    static const unsigned pad_top = 0;
    static const unsigned pad_bottom = 0;
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const nnet::Pool_Op pool_op = nnet::Average;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::linebuffer;
    static const unsigned reuse = 64;
    typedef average_pooling2d_default_t accum_t;
};

// q_dense
struct config4 : nnet::dense_config {
    static const unsigned n_in = 900;
    static const unsigned n_out = 64;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 60;
    static const unsigned n_zeros = 1868;
    static const unsigned n_nonzeros = 55732;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias4_t bias_t;
    typedef weight4_t weight_t;
    typedef layer4_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// batch_normalization
struct config6 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_4;
    static const unsigned n_filt = -1;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    static const bool store_weights_in_bram = false;
    typedef batch_normalization_bias_t bias_t;
    typedef batch_normalization_scale_t scale_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// q_activation
struct relu_config7 : nnet::activ_config {
    static const unsigned n_in = 64;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef q_activation_table_t table_t;
};

// q_dense_1
struct config8 : nnet::dense_config {
    static const unsigned n_in = 64;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 64;
    static const unsigned n_zeros = 74;
    static const unsigned n_nonzeros = 1974;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias8_t bias_t;
    typedef weight8_t weight_t;
    typedef layer8_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// batch_normalization_1
struct config10 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_8;
    static const unsigned n_filt = -1;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    static const bool store_weights_in_bram = false;
    typedef batch_normalization_1_bias_t bias_t;
    typedef batch_normalization_1_scale_t scale_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// q_activation_1
struct relu_config11 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef q_activation_1_table_t table_t;
};

// q_dense_2
struct config12 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 16;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 64;
    static const unsigned n_zeros = 13;
    static const unsigned n_nonzeros = 499;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias12_t bias_t;
    typedef weight12_t weight_t;
    typedef layer12_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// batch_normalization_2
struct config14 : nnet::batchnorm_config {
    static const unsigned n_in = N_LAYER_12;
    static const unsigned n_filt = -1;
    static const unsigned n_scale_bias = (n_filt == -1) ? n_in : n_filt;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    static const bool store_weights_in_bram = false;
    typedef batch_normalization_2_bias_t bias_t;
    typedef batch_normalization_2_scale_t scale_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// q_activation_2
struct relu_config15 : nnet::activ_config {
    static const unsigned n_in = 16;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned reuse_factor = 64;
    typedef q_activation_2_table_t table_t;
};

// q_dense_3
struct config16 : nnet::dense_config {
    static const unsigned n_in = 16;
    static const unsigned n_out = 6;
    static const unsigned io_type = nnet::io_stream;
    static const unsigned strategy = nnet::resource;
    static const unsigned reuse_factor = 48;
    static const unsigned n_zeros = 37;
    static const unsigned n_nonzeros = 59;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias16_t bias_t;
    typedef weight16_t weight_t;
    typedef layer16_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};


#endif
