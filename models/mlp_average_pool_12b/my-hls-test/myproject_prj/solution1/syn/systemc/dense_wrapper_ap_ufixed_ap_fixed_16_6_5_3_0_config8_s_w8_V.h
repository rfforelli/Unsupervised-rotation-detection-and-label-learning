// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_H__
#define __dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 380;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_ram) {
        ram[0] = "0b11110110000000000101111111111000000000000000111111111001000000000111000000000110000000010001111111101101111111010110111111111000000000000010111111111101111111111001000000010000111111111110000000001001000000000100000000000111111111101111000000000110000000100001111111110101111111110111111111011110111111110001111111111000111111011111111111111000111111110110000000000010111111101110";
        ram[1] = "0b00000101111111111101000000000001000000000010000000000101111111111011000000000011000000010001000000000111111111110110000000000010111111111010111111110000000000000010000000000000111111111111000000000110111111111101000000000010000000000110111111110001111111111110000000000001111111101111111111011110111111111110000000000110000000010010111111111100111111101101000000000001000000000111";
        ram[2] = "0b00000000111111011000000000001010000000000100111111101010000000001101000000010010111111110011000000010100000000001011111111011011000000001110111111111011000000011100111111110000111111110110111111111001111111101011111111111011111111110110000000001111000000001111111111111001111111111100000000001101111111110100111111111011000000000011111111010010000000000110000000000001111111111110";
        ram[3] = "0b11110011000000000111111111110011111111111110000000000110000000000000000000000110111111111011111111101101000000000011000000001001000000000010000000010010000000001101000000001011111111111100111111110100111111111101000000000010111111101111000000000010111111111100000000000011000000001111000000000000000000001100000000001010111111101010000000001000111111111100111111111000111111111010";
        ram[4] = "0b11111100000000000001111111110101000000011000111111111000000000000110111111111011111111110101111111111101000000011010111111111011000000000010000000000101111111011010000000000010000000000110111111111111111111110001000000000001000000000011111111111100111111110110111111110010000000001000111111111011111111011100000000001001000000001011000000001010000000001110000000001011000000000110";
        ram[5] = "0b00001100111111111101000000001011000000000110111111111111111111111001000000001000000000001110000000010001111111110010000000000011111111111101111111110010111111111001111111111001111111111100000000000001111111111100000000000011000000001010111111111010000000000010111111111111111111101011111111110011111111111011111111111101000000001100111111111111111111101101000000000101111111110110";
        ram[6] = "0b11111011000000000000111111101111111111111100000000001010000000001000111111110011000000010011111111011011111111101110111111111011000000001001111111111101000000010000000000000011111111111000000000010010111111101111000000000001111111111111111111101001000000001000000000001010111111110100111110111000000000010000000000000001000000000001111111111011111111011100000000000101000000001111";
        ram[7] = "0b11101110111111111110000000000110111111111011111111111100000000001100000000011001000000001110000000000011000000010001000000001010111111110000000000001000000000000100111111101111111111111010111111111100000000000100111111110010111111111111111111111101111111111111111111100111111111110011111111000011000000001110111111110110111111100100000000000000111111101101000000000101111111101111";
        ram[8] = "0b11111101111111111000000000010000111111111001000000000101111111111000000000000010000000000100000000001101111111110111111111111011000000000000111111111011000000001101000000000110111111110000000000000101111111111100111111111001000000001011111111110110000000000110000000000101111111100001000000000111000000001000111111111010000000000000111111111011111111110001111111111100000000000100";
        ram[9] = "0b11111100111111111001111111110100000000000100000000001000000000010110000000010100000000001100111111100100111111111100000000000010000000000111000000000000000000011001000000000000111111101111000000001001000000000100000000001001111111100011000000001010111111111110000000000001000000010111111111111100000000011110111111111111111111101010000000010101111111100011111111110101000000000010";
        ram[10] = "0b00000000000000010000111111111110111111011110111111101100111111111101111111111001111111110001111111111010000000010000000000001010000000001100111111111111111111111101000000010111000000000101111111101101111111111101000000101111111111110110111111111101000001000010000000101001111111101110111111111110111111110111000000001001111111100011111111000011111111110001000000100000111111111011";
        ram[11] = "0b11111001000000001011111111110011000000010000111111111100111111100111111111111101000000001000111111101111111111111101000000000111000000001011111111111111000000000101000000000011111111101111000000000100000000001100111111111100111111001000111111001111111111111110111111111100000000000000111111111011111111111010000000000110111111111010111111111110000000001001000000000001111111111000";
        ram[12] = "0b00000010000000000000000000000011000000000010111111111110111111110100111111111101000000000110000000000111111111110010111111111111000000000101111111110000000000000100111111111111111111111001000000001011000000000001000000000001000000001101111111111001000000000100111111111101111111011010111111111101111111110111000000000001000000000000111111111011111111110011000000000011000000000110";
        ram[13] = "0b11111001111111111010111111110100111111101110111111111001000000001010111111110001111111110110000000000000111111111011111111111011000000000010000000001110000000000100000000000011111111110101111111110000000000000000000000000100000000001000000000001011000000000110000000000011000000000110000000001010111111101001111111100011111111110001000000000001000000001010000000001110111111110001";
        ram[14] = "0b11110100000000000111000000011000000000011111111111110100111111010011000000001010000000000111000000000000111111111100000000011000000000011000000000000110111111111000111111110000111111110110111111110101000000010010111111110011111111100011111111011111000000010011111111110010000000001011111111111111000000010001000000000111111111110100000000000011111111111000000000000000111111011110";
        ram[15] = "0b11111110000000010000000000000111000000001011000000000011111111111001111111111101111111100100111111111011000000001011000000001010111111110010000000010110111111111010000000001011111111111011111111101110111111110101111111110100111111110011000000010001111111111101000000000000111111111001000000000000111111110100000000000110111111101110000000001001000000001111000000001010111111110100";
        ram[16] = "0b11110111000000010100111111100010111111111001000000001110000000001100111111111100111111110110111111100010111111101001000000000111111111111010000000011000000000001101000000000010111111110010111111110000111111111100000000000100111111110001000000000100000000000001111111111110111111110101111111111001000000000001111111101110111111111010000000000111111111110110111111111011111111111100";
        ram[17] = "0b11110110000000010110000000000110000000000010111111100001111111110100111111111110111111111111000000001000000000010010111111111010000000000010000000001111000000000110000000000110111111101010000000000010111111111111111111111100111111100111111111101101000000000001111111101101111111110111111111100010000000000001000000000000111111110101111111111111000000000001000000000110111111110100";
        ram[18] = "0b11101110111111111000111111011100111111100000111111111001000000000100000000000101000000000111111111110110111111110000111111111111111111111110111111110001000000001101000000000111000000001000111111111011111111110100000000010010000000001011000000000010111111111110000000000100111111111101111111110101000000001111111111110001111111110101000000000001000000000110000000011101000000000000";
        ram[19] = "0b00001110000000000011111111101100111111110111000000010000000000000010111111111010111111101010000000000111111111111110000000001000111111111110111111111110111111100110111111111111000000000000000000001001000000000100111111110111000000000000000000000111111111110100000000010011000000000000000000011000111111101010111111111011111111111110111111110111000000001000000000010000000000001000";
        ram[20] = "0b11111001111111111110111111111111000000000101111110111000000000000010111111011000000000000101111111110111000000010100111111111011000000001110000000010001000000001010111111111110111111111011111111100011111111111001000000001100000000000000000000001011111111110101111111011111111111111101111111110111111111110000111111101001000000001110000000000011111111110001111111110110000000000010";
        ram[21] = "0b11111011000000000000111111110001000000000000111111111110000000000101000000000110111111110010111111110100000000001101000000000111111111111101000000010000111111111101000000000001000000000111111111111001000000000000000000000101111111110100000000000010111111111101111111111110000000000111000000000000000000001000000000001010111111111011111111111110000000001001111111111100000000000001";
        ram[22] = "0b00000010000000000001111111111111000000000101111111101100111111100000111111111000000000010101111111111100111111111001000000000010000000000001000000000011000000001000111111111000000000001001000000000010111111111110000000000000111111011011111111001111111111110101111111110101000000011100111111111111111111111011111111111111000000000101000000000100111111111111000000001000111111101000";
        ram[23] = "0b11110001111111111011111111110001111111110011111111110010000000001010000000000101111111111001000000000011111111111001111111110010000000000111111111110001111111101000000000000110000000001100111111111100111111110110111111111001111111111011000000001010111111111111111111110100000000001000111111110110111111011110111111111111111111111110111111111010000000000011000000010010111111111111";
        ram[24] = "0b11110011000000001011000000000001111111101111000000000010111111101111111111111001111111110111111111111101000000010000111111110110111111000111000000010011111111101101111111111111000000000000000000000111000000010100111111101011111111101111000000000010111111111011000000001100111111101011000000010000000000001100000000011011111111110111000000000000111111110100000000000111111111111000";
        ram[25] = "0b11111101000000000001111111101100000000000110000000000000000000000001000000010011000000010011111111101100111111110100000000000111111111111101111111111111000000000111000000001100000000000110111111110111111111111100111111111100111111101110111111111100111111111001111111110000000000010001111111000110000000000100000000000101111111110011000000001000000000000011000000000100000000000011";
        ram[26] = "0b11111010111111111101111111111111111111110010000000000111111111101011111111101001000000010111000000000101000000001001111111110100000000001101111111110000000000000000000000101011111111110101111111101001000000001010111111111100000000000000000000000111000000000101000000001010111111111110000000000001111111100111111111110100111111111010111111111011111111111000000000000000000000000010";
        ram[27] = "0b11101111000000000010000000000101000000000111000000000111111111110101000000001110111111110001000000001100000000000010000000000111111111111011000000000111000000001001000000001101111111001011000000001110111111111101111111111011111111110101111111110001111111111110000000000111111111111000000000000011111111111111000000000110111111001001111111110111111111111111111111100010111111000101";
        ram[28] = "0b11111110000000000101000000011001111111111100111111110111111111101101000000000001111111111101000000000110111111111100000000000010111111111110111111111110111111111010111111111111111111110011000000000100000000000010111111110110000000000011111111111110000000001010111111110100111111101000111111111000000000000001000000001000111111111110111111110101111111110011111111111011111111111101";
        ram[29] = "0b11111101111111111000000000001000000000000111000000000000000000000110000000000000111111101010111111110111111111110110111111111000000000000001111111111000000000000110000000000011111111110001000000010000111111111110111111111001000000001000111111110110000000000101000000000101111111011111000000000101000000000101000000000000000000000110111111110011111111100010111111111100000000001010";
        ram[30] = "0b00000001000000000010111111110001000000000000000000001101000000001110111111101010111111110101000000001001111111101010000000001001111111110110000000000101111111110100000000000011111111111000111111100100111111111100111111110010111111111101000000001100000000000010000000001000111111111011000000000100111111100111111111100101111111111010111111110111000000000101111111111000111111110011";
        ram[31] = "0b00000110111111110100000000001101111111111101111111110100111111110101000000000001000000001110000000001100111111111110111111111110000000000010111111101110000000000010000000000010111111111111000000001010000000000100111111111100000000001100111111101110000000000100111111110110111111110011111111110110111111111110111111111101000000001011111111111011111111110011000000000100111111111100";
        ram[32] = "0b11100000000000010011111111111011111111110000111111111101111111101011111111110110000000000000000000001110000000000001111111110101000000000101111111100001111111111001000000000111000000001101111111011001111111110100000000000101000000001010000000000000111111111100111111111110111111110100111111110010111111111101111111110100000000001101111111110110111111111011000000001000111111111110";
        ram[33] = "0b00011000111111111111000000001001000000010001000000011001000000010011111111111011111111011101000000000110000000010011000000011011111111010101000000010011111111010100111110101101111111111101111111111111111111110111111111010001000000000111000000101100000000000101111111111000000000000110000000011000111111011111111111111111000000011110111111010110000000010100111111110110000000001101";
        ram[34] = "0b11111100000000000100111111000110111111111110000000001101000000001000111111111101111111110010111111010101111111111001111111111111000000001000111111101011111111111010000000000001111111111111000000000111000000001010000000000111000000000011000000001000000000001011000000001011000000000100000000000110000000000111000000000011000000001101000000001010111111111001111111111100111111111110";
        ram[35] = "0b00010010000000001001111111111000000000001011000000000010111111110111000000001100111111111101111111110101000000001100111111111010000000001100111111110101000000000111000000011011000000000011111111110111111111111011111111110110111111110011111111110110000000000010000000000000000000001101111111111010000000001101000000001000111111100000000000000010111111010011000000000000111111101111";
        ram[36] = "0b11111000000000000000111111111001000000000101000000000001000000001010000000000001111111101101111111111101000000001010111111111101000000000011000000001101000000000001000000000101000000011000000000000101111111110110111111101010111111110110111111111111111111111101111111111111000000000111111111111100000000010111000000000010111111100110111111111001000000001111000000000110111111111010";
        ram[37] = "0b00010010111111101101000000010000111111111000000000001100111111111111000000001000000000001101000000001000000000001111111111101111111111101010111111110111111111100111111111011110000000010000000000001001111111110100111111101010000000001001000000011110000000000101111111111110000000000100000000000111111111011010000000001101000000000110111111100011000000010001111111111011000000000100";
        ram[38] = "0b00000100111111110011000000001000000000010001111111110101111111110100111111110001111111110111000000000000000000000011000000000100000000000001111111111100111111111000111111111101000000000101000000000100000000000111000000000111111111011001111111100100111111111000111111111100111111111100111111110111000000010111000000001001111111111010000000010001111111111010000000000111000000000011";
        ram[39] = "0b00011001000000000001000000000101111111111111000000000101111111101011111111111011000000000110000000001101000000001010111111111010111111110001111111101100111111110011000000001111111111111001111111110111111111100010000000000011000000000001000000000000000000010100111111111000111111101100111111101101000000001101111111110111111111110110000000010000000000000101111111110111111111111111";
        ram[40] = "0b11111000000000000110000000000011111111111000000000001000111111110011000000001010111111111011000000000111000000001111111111111000000000000010000000000001000000001111111111110011111111011000000000001111000000011011000000001110111111111001000000000011000000000001000000000100111111100101000000000001000000000111111111111011111111111100000000001010111111100001111111100010111111011111";
        ram[41] = "0b00000100000000000010111111111110000000001010000000000011000000000100000000011000000000001001111111111111111111100100111111110110111111100011000000000011000000001001000000001001111111001101111111111110111111101010000000010100000000001010111111110111111111111111000000000010111111100111000000000010000000100100000000001101111111111101000000000011111111010100111111110111111111010110";
        ram[42] = "0b11000110000000000001111111101101111111100011000000000111000000000100000000010000111111101111000000000011111111100011111111100010000000001110111111000001111111101010111111101111111111111010000000000000000000100001000000010001111111101011000000001010000000000010111111111110111111101000111111111011000000000001000000001101000000000000111111111111111111101110111111111101111111111100";
        ram[43] = "0b11110011000000001000111111111010000000001001111111111111000000000000111111101110111111101011000000000101000000001011000000001110111111111100000000001101111111101101111111110110000000000110111111110111111111111111000000000100111111110101111111111110111111110101111111111111111111111011000000000001111111110111000000001001111111111001000000000110000000001110000000000111111111111000";
        ram[44] = "0b11111010111111111111111111111101111111111100000000000101111111111011000000000010000000000111111111111111111111110001000000000010000000000100000000000010000000001010000000001111111111001011111111110100000000000101111111111101111111110100000000000001000000000000000000001101000000100100000000010000111111111111111111111100000000001010111111101101000000000000111111110001111111010100";
        ram[45] = "0b00001000111111101100000000001001000000000000000000000001111111111001000000000110111111110100000000000111111111110011111111110111111111110011111111110001000000000011000000000000111111111101000000001100111111111010111111111011000000001000111111111110000000000101000000000000111111011111111111111101000000000111111111111010000000000001000000000010111111110010000000000011000000000011";
        ram[46] = "0b00001101000000001011111111101101000000000100111111101110111111011011111111111100000000000100000000000110000000010001111111110000000000001011111111011011000000000101000000010011000000000110000000000011000000000001000000000100111111101111111111110101111111111011000000000110000000000011000000000000111111111101000000101001111111110111000000001000111111110110000000010010000000001100";
        ram[47] = "0b11111111000000001011000000010100000000001011111111110111111111101101111111111101111111010000000000001110111111111110000000000110111111111110111111110100111111110101111111110100111111111110111111111110000000000001111111111001000000010010000000000011000000000010111111111101111111101101000000000100111111111101000000000011000000000001111111110101111111111100111111111101111111111101";
        ram[48] = "0b00001100111111011011000000010001111111110111111111110101111111011001000000000110111111110011111111111011000000001111111111111110111111111100000000000001000000010011111111110001000000000001000000000100000000000000111111111110000000000010000000000110111111111110000000001010111111101111000000000111000000000101000000010010000000001001111111110111000000010010000000010011000000001001";
        ram[49] = "0b11101100111111111001111111101001000000000001000000000100000000001011000000011010111111110100111111110001111111111110111111011111111111111101000000000110000000001111000000000011111111111010000000011000111111110001000000001110111111111001000000000001000000000011000000000000000000001100111111111111000000001011000000000010111111110101000000010010000000001000111111111101000000000011";
        ram[50] = "0b11111010000000011000111111110110111111111100111111110000000000001011111111101101111111100111000000000111000000000110111111011111000000001000111111110001000000010000111111101010000000010010000000000000111111100000000000001100000000000010000000010100000000000010000000000100000000011000000000000100000000010010111111111100111111110100000000001101000000000101111111111010000000000111";
        ram[51] = "0b00000110111111111111111111111100000000000010111111111111111111111110111111111010111111100000000000000011000000010100111111111100111111111000111111111011111111011010111111111111000000001100111111111100111111100110111111111000000000000110000000000100111111111100000000000010000000000010000000000001111111010000000000001110000000000110111111110110000000010110000000000101000000000110";
        ram[52] = "0b11110110000000010001111111111100111111001111000000001001111111111100111111111011111111101001000000000101111111111001111111101001111111100011000000000001000000010110111111100110000000000001111111001010111111010101111111111011000000000001111111110110000000001110111111110010000000000000000000001011000000001011000000001010111111111111111111100100000000000001111111110101111111111110";
        ram[53] = "0b00000110000000000000000000000101000000000000000000000010111111110111000000000010000000000010000000001100111111111111000000000001111111111111111111110100111111111100000000000100111111111001000000000010000000000000000000000001000000001011111111111010111111111101000000001101111111101000111111111110111111111111111111111010000000010010111111111010111111110011111111111101111111111111";
        ram[54] = "0b11110101000000010100000000000101111111110110000000000110000000000110000000000001000000000001111111100110111111110000000000000110000000000011000000000111111111111011000000000001111111111101000000000111000000000011000000101111000000000100111111111011000001000101000000011000111111100101111111100100000000010000000000001000111111100000111111110011111111111101000000010100000000000100";
        ram[55] = "0b11101101000000000011111111111101000000000010111111110010000000000011111111110100000000000001111111111000111111110000111111101100000000011100000000000001111111100001000000000011111111110111111111011100111111110100000000001111000000010100111111111011000000000100111111110011000000001101111111111001000000010000111111011100111111110000000000000100111111111011000000001100111111110101";
        ram[56] = "0b00010110111111101111000000001101111111110111000000100000111111111101111111110100111111111010111111111101000000001100000000010011111111010010000000000010111111101011111111001111000000010101111111111010111111110010111111100011000000000111111111111111111111111111111111100111000000000110000000011011000000010010000000100010000000010100111111011101000000011011111111110111000000010011";
        ram[57] = "0b11110100000000000000000000000001000000000001111111110110000000000101000000000100000000001111111111111111000000001011000000000000000000000111000000001100111111111100000000000000000000000000000000000100000000000100111111110101111111111001111111111100000000000111111111111001000000010000111111111111111111111110111111111101111111011110111111110110000000001011000000000000111111110001";
        ram[58] = "0b11111001000000000011111111011110000000001011111111111001111111111100111111100011000000001100111111100000111111111011111111111010111111111111111111110001000000001010000000001101000000001110000000001000111111111110000000000000111111011011111111100101111111110001111111111011000000000100111111110110111111110111000000001001111111111100000000001100111111111011000000001001111111110000";
        ram[59] = "0b10110111000000001001000000001010000000010011000000001001111111101001000000001001000000001101000000010000111111111110111111011000000000001101111111110001000000001100111111111010000000000111111111100010000000011010000000000100000000001101000000010000111111111111111111110111111111111011111111110101000000000011111111110000000000000110000000001100111111111100000000000011111111101011";
        ram[60] = "0b11110010000000001011111111111101111111110101111111011110111111111001111111100000111111111011111111111100000000000000111111111100111111110010111111110100111111101010111111110110000000010000111111110000000000000001000000001111111111101101111111100111111111110110111111101101000000001100111111101001111111110000000000001101111111111011000000001111000000000100111111111001000000000101";
        ram[61] = "0b11110011111111111111111111110001000000001000000000001010000000001001000000001010111111111000111111001100111111111111111111111111111111111111000000010011000000001111000000001110111111111011111111111010000000000101111111111110111111110001111111111010111111111001000000000000000000010010000000001000000000010000000000000101111111101011000000001010111111110101111111111011000000001001";
        ram[62] = "0b11110111000000000011000000000110111111100101000000001010111111101000000000010010111111111110111111111101000000000101000000011010111111100010111111111101111111111010000000001110111111100011000000011001111111101000000000001000111111100001111111101110111111111110111111110110111111110110111111101110000000000001111111111011111111111101000000010101111111110001111110110101111111101101";
        ram[63] = "0b00000111111111011100000000000111111111111010111111001100000000000000111111010101111111111001000000001101000000001011000000011111111111111111111111111110111111111001111111110010000000001101111111101111111111111011111111111011000000000101000000000010000000000111111111100001111111111100111111111101000000001000111111101111000000001111111111110010000000001001111111111010000000000100";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V) {


static const unsigned DataWidth = 380;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V) {
meminst = new dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_ram("dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config8_s_w8_V() {
    delete meminst;
}


};//endmodule
#endif