// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _shift_line_buffer_array_ap_fixed_1u_config2_s_HH_
#define _shift_line_buffer_array_ap_fixed_1u_config2_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb.h"

namespace ap_rtl {

struct shift_line_buffer_array_ap_fixed_1u_config2_s : public sc_module {
    // Port declarations 36
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > in_elem_data_V_read;
    sc_in< sc_lv<16> > kernel_window_1_V_read;
    sc_in< sc_lv<16> > kernel_window_2_V_read;
    sc_in< sc_lv<16> > kernel_window_3_V_read;
    sc_in< sc_lv<16> > kernel_window_5_V_read;
    sc_in< sc_lv<16> > kernel_window_6_V_read;
    sc_in< sc_lv<16> > kernel_window_7_V_read;
    sc_in< sc_lv<16> > kernel_window_9_V_read;
    sc_in< sc_lv<16> > kernel_window_10_V_read;
    sc_in< sc_lv<16> > kernel_window_11_V_read;
    sc_in< sc_lv<16> > kernel_window_13_V_read;
    sc_in< sc_lv<16> > kernel_window_14_V_read;
    sc_in< sc_lv<16> > kernel_window_15_V_read;
    sc_out< sc_lv<16> > ap_return_0;
    sc_out< sc_lv<16> > ap_return_1;
    sc_out< sc_lv<16> > ap_return_2;
    sc_out< sc_lv<16> > ap_return_3;
    sc_out< sc_lv<16> > ap_return_4;
    sc_out< sc_lv<16> > ap_return_5;
    sc_out< sc_lv<16> > ap_return_6;
    sc_out< sc_lv<16> > ap_return_7;
    sc_out< sc_lv<16> > ap_return_8;
    sc_out< sc_lv<16> > ap_return_9;
    sc_out< sc_lv<16> > ap_return_10;
    sc_out< sc_lv<16> > ap_return_11;
    sc_out< sc_lv<16> > ap_return_12;
    sc_out< sc_lv<16> > ap_return_13;
    sc_out< sc_lv<16> > ap_return_14;
    sc_out< sc_lv<16> > ap_return_15;
    sc_in< sc_logic > ap_ce;
    sc_signal< sc_lv<7> > ap_var_for_const0;


    // Module declarations
    shift_line_buffer_array_ap_fixed_1u_config2_s(sc_module_name name);
    SC_HAS_PROCESS(shift_line_buffer_array_ap_fixed_1u_config2_s);

    ~shift_line_buffer_array_ap_fixed_1u_config2_s();

    sc_trace_file* mVcdFile;

    shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb* line_buffer_Array_V_0_0_U;
    shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb* line_buffer_Array_V_1_0_U;
    shift_line_buffer_array_ap_fixed_1u_config2_s_line_bufferbkb* line_buffer_Array_V_2_0_U;
    sc_signal< sc_lv<1> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > line_buffer_Array_V_0_0_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_0_0_we0;
    sc_signal< sc_lv<16> > line_buffer_Array_V_0_0_q0;
    sc_signal< sc_logic > line_buffer_Array_V_1_0_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_1_0_we0;
    sc_signal< sc_lv<16> > line_buffer_Array_V_1_0_q0;
    sc_signal< sc_logic > line_buffer_Array_V_2_0_ce0;
    sc_signal< sc_logic > line_buffer_Array_V_2_0_we0;
    sc_signal< sc_lv<16> > line_buffer_Array_V_2_0_q0;
    sc_signal< sc_lv<1> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<1> ap_ST_fsm_state1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_77;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_2();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_line_buffer_Array_V_0_0_ce0();
    void thread_line_buffer_Array_V_0_0_we0();
    void thread_line_buffer_Array_V_1_0_ce0();
    void thread_line_buffer_Array_V_1_0_we0();
    void thread_line_buffer_Array_V_2_0_ce0();
    void thread_line_buffer_Array_V_2_0_we0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif