//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t input_1[N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1],
    layer16_t layer16_out[N_LAYER_16],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_1 complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_1,layer16_out 
    #pragma HLS PIPELINE 

    const_size_in_1 = N_INPUT_1_1*N_INPUT_2_1*N_INPUT_3_1;
    const_size_out_1 = N_LAYER_16;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<weight4_t, 57600>(w4, "w4.txt");
        nnet::load_weights_from_txt<bias4_t, 64>(b4, "b4.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(s6, "s6.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b6, "b6.txt");
        nnet::load_weights_from_txt<weight8_t, 2048>(w8, "w8.txt");
        nnet::load_weights_from_txt<bias8_t, 32>(b8, "b8.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(s10, "s10.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b10, "b10.txt");
        nnet::load_weights_from_txt<weight12_t, 512>(w12, "w12.txt");
        nnet::load_weights_from_txt<bias12_t, 16>(b12, "b12.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(s14, "s14.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(b14, "b14.txt");
        nnet::load_weights_from_txt<weight16_t, 96>(w16, "w16.txt");
        nnet::load_weights_from_txt<bias16_t, 6>(b16, "b16.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers

    layer2_t layer2_out[OUT_HEIGHT_2*OUT_WIDTH_2*N_FILT_2];
    #pragma HLS ARRAY_PARTITION variable=layer2_out complete dim=0
    nnet::pooling2d_cl<input_t, layer2_t, config2>(input_1, layer2_out); // average_pooling2d

    layer4_t layer4_out[N_LAYER_4];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::dense<layer2_t, layer4_t, config4>(layer2_out, layer4_out, w4, b4); // q_dense

    layer6_t layer6_out[N_LAYER_4];
    #pragma HLS ARRAY_PARTITION variable=layer6_out complete dim=0
    nnet::normalize<layer4_t, layer6_t, config6>(layer4_out, layer6_out, s6, b6); // batch_normalization

    layer7_t layer7_out[N_LAYER_4];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::relu<layer6_t, layer7_t, relu_config7>(layer6_out, layer7_out); // q_activation

    layer8_t layer8_out[N_LAYER_8];
    #pragma HLS ARRAY_PARTITION variable=layer8_out complete dim=0
    nnet::dense<layer7_t, layer8_t, config8>(layer7_out, layer8_out, w8, b8); // q_dense_1

    layer10_t layer10_out[N_LAYER_8];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    nnet::normalize<layer8_t, layer10_t, config10>(layer8_out, layer10_out, s10, b10); // batch_normalization_1

    layer11_t layer11_out[N_LAYER_8];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::relu<layer10_t, layer11_t, relu_config11>(layer10_out, layer11_out); // q_activation_1

    layer12_t layer12_out[N_LAYER_12];
    #pragma HLS ARRAY_PARTITION variable=layer12_out complete dim=0
    nnet::dense<layer11_t, layer12_t, config12>(layer11_out, layer12_out, w12, b12); // q_dense_2

    layer14_t layer14_out[N_LAYER_12];
    #pragma HLS ARRAY_PARTITION variable=layer14_out complete dim=0
    nnet::normalize<layer12_t, layer14_t, config14>(layer12_out, layer14_out, s14, b14); // batch_normalization_2

    layer15_t layer15_out[N_LAYER_12];
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0
    nnet::relu<layer14_t, layer15_t, relu_config15>(layer14_out, layer15_out); // q_activation_2

    nnet::dense<layer15_t, layer16_t, config16>(layer15_out, layer16_out, w16, b16); // q_dense_3

}
