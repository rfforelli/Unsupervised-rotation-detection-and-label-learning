// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_H__
#define __dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 19;
  static const unsigned AddressRange = 48;
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


   SC_CTOR(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_ram) {
        ram[0] = "0b0000000111111111110";
        ram[1] = "0b0000000111111110100";
        ram[2] = "0b0000000111111100110";
        ram[3] = "0b0000000000000000111";
        ram[4] = "0b0000000000000000100";
        ram[5] = "0b0000000000000000011";
        ram[6] = "0b0000000000000001010";
        ram[7] = "0b0000000000000011001";
        ram[8] = "0b0000000000000010101";
        ram[9] = "0b0000000111111101101";
        ram[10] = "0b0000000111111111010";
        ram[11] = "0b0000000000000100100";
        ram[12] = "0b0000000111111000010";
        ram[13] = "0b0000000111111111010";
        ram[14] = "0b0000000111111011110";
        ram[15] = "0b0000000000000000010";
        ram[16] = "0b0000000000000000001";
        ram[17] = "0b0000000000000000111";
        ram[18] = "0b0000000000000010100";
        ram[19] = "0b0000000000000000000";
        ram[20] = "0b0000000111111111010";
        ram[21] = "0b0000000111111111111";
        ram[22] = "0b0000000111111111010";
        ram[23] = "0b0000000111111100110";
        ram[24] = "0b0000000111111110100";
        ram[25] = "0b0000000000000001010";
        ram[26] = "0b0000000000000001000";
        ram[27] = "0b0000000111111000000";
        ram[28] = "0b0000000000000011000";
        ram[29] = "0b0000000111111111101";
        ram[30] = "0b0000000000000010011";
        ram[31] = "0b0000000111111111101";
        ram[32] = "0b1001110000000100001";
        ram[33] = "0b1111000000000000111";
        ram[34] = "0b1110101000000001101";
        ram[35] = "0b1111111111111100111";
        ram[36] = "0b0010011111111011110";
        ram[37] = "0b0100101000000001111";
        ram[38] = "0b0001100000000011101";
        ram[39] = "0b1111000000000000000";
        ram[40] = "0b1110000000000001100";
        ram[41] = "0b1110111000000010011";
        ram[42] = "0b1111110111111101000";
        ram[43] = "0b1110100000000001100";
        ram[44] = "0b1111110000000000000";
        ram[45] = "0b0000001111111100111";
        ram[46] = "0b0000000000000000000";
        ram[47] = "0b0111001000000000101";


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


SC_MODULE(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi) {
meminst = new dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_ram("dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi() {
    delete meminst;
}


};//endmodule
#endif
