// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_H__
#define __dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1;
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


   SC_CTOR(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_ram) {
        for (unsigned i = 0; i < 32 ; i = i + 1) {
            ram[i] = "0b0";
        }
        for (unsigned i = 32; i < 64 ; i = i + 1) {
            ram[i] = "0b1";
        }


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


SC_MODULE(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_ram* meminst;


SC_CTOR(dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg) {
meminst = new dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_ram("dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config12_s_oueOg() {
    delete meminst;
}


};//endmodule
#endif
