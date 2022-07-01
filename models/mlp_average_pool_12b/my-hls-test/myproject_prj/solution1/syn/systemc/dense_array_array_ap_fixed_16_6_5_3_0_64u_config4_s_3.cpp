#include "dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, data_stream_V_data_V_empty_n.read()));
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_logic_0, data_stream_V_data_V_empty_n.read()));
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = esl_seteq<1,1,1>(ap_const_logic_0, data_stream_V_data_V_empty_n.read());
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln41_fu_6694_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_phi_mux_i_in_0_phi_fu_5780_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln41_reg_20526.read(), ap_const_lv1_0))) {
        ap_phi_mux_i_in_0_phi_fu_5780_p4 = i_in_reg_20530.read();
    } else {
        ap_phi_mux_i_in_0_phi_fu_5780_p4 = i_in_0_reg_5776.read();
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_data_stream_V_data_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        data_stream_V_data_V_blk_n = data_stream_V_data_V_empty_n.read();
    } else {
        data_stream_V_data_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_data_stream_V_data_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        data_stream_V_data_V_read = ap_const_logic_1;
    } else {
        data_stream_V_data_V_read = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_start() {
    grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_start = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_start_reg.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_i_in_fu_6700_p2() {
    i_in_fu_6700_p2 = (!ap_phi_mux_i_in_0_phi_fu_5780_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(ap_phi_mux_i_in_0_phi_fu_5780_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_icmp_ln41_fu_6694_p2() {
    icmp_ln41_fu_6694_p2 = (!ap_phi_mux_i_in_0_phi_fu_5780_p4.read().is_01() || !ap_const_lv10_384.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_in_0_phi_fu_5780_p4.read() == ap_const_lv10_384);
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_io_acc_block_signal_op3751() {
    io_acc_block_signal_op3751 = (res_stream_V_data_0_V_full_n.read() & res_stream_V_data_1_V_full_n.read() & res_stream_V_data_2_V_full_n.read() & res_stream_V_data_3_V_full_n.read() & res_stream_V_data_4_V_full_n.read() & res_stream_V_data_5_V_full_n.read() & res_stream_V_data_6_V_full_n.read() & res_stream_V_data_7_V_full_n.read() & res_stream_V_data_8_V_full_n.read() & res_stream_V_data_9_V_full_n.read() & res_stream_V_data_10_V_full_n.read() & res_stream_V_data_11_V_full_n.read() & res_stream_V_data_12_V_full_n.read() & res_stream_V_data_13_V_full_n.read() & res_stream_V_data_14_V_full_n.read() & res_stream_V_data_15_V_full_n.read() & res_stream_V_data_16_V_full_n.read() & res_stream_V_data_17_V_full_n.read() & res_stream_V_data_18_V_full_n.read() & res_stream_V_data_19_V_full_n.read() & res_stream_V_data_20_V_full_n.read() & res_stream_V_data_21_V_full_n.read() & res_stream_V_data_22_V_full_n.read() & res_stream_V_data_23_V_full_n.read() & res_stream_V_data_24_V_full_n.read() & res_stream_V_data_25_V_full_n.read() & res_stream_V_data_26_V_full_n.read() & res_stream_V_data_27_V_full_n.read() & res_stream_V_data_28_V_full_n.read() & res_stream_V_data_29_V_full_n.read() & res_stream_V_data_30_V_full_n.read() & res_stream_V_data_31_V_full_n.read() & res_stream_V_data_32_V_full_n.read() & res_stream_V_data_33_V_full_n.read() & res_stream_V_data_34_V_full_n.read() & res_stream_V_data_35_V_full_n.read() & res_stream_V_data_36_V_full_n.read() & res_stream_V_data_37_V_full_n.read() & res_stream_V_data_38_V_full_n.read() & res_stream_V_data_39_V_full_n.read() & res_stream_V_data_40_V_full_n.read() & res_stream_V_data_41_V_full_n.read() & res_stream_V_data_42_V_full_n.read() & res_stream_V_data_43_V_full_n.read() & res_stream_V_data_44_V_full_n.read() & res_stream_V_data_45_V_full_n.read() & res_stream_V_data_46_V_full_n.read() & res_stream_V_data_47_V_full_n.read() & res_stream_V_data_48_V_full_n.read() & res_stream_V_data_49_V_full_n.read() & res_stream_V_data_50_V_full_n.read() & res_stream_V_data_51_V_full_n.read() & res_stream_V_data_52_V_full_n.read() & res_stream_V_data_53_V_full_n.read() & res_stream_V_data_54_V_full_n.read() & res_stream_V_data_55_V_full_n.read() & res_stream_V_data_56_V_full_n.read() & res_stream_V_data_57_V_full_n.read() & res_stream_V_data_58_V_full_n.read() & res_stream_V_data_59_V_full_n.read() & res_stream_V_data_60_V_full_n.read() & res_stream_V_data_61_V_full_n.read() & res_stream_V_data_62_V_full_n.read() & res_stream_V_data_63_V_full_n.read());
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_0_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_0_V_blk_n = res_stream_V_data_0_V_full_n.read();
    } else {
        res_stream_V_data_0_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_0_V_din() {
    res_stream_V_data_0_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_0.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_0_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_0_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_0_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_10_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_10_V_blk_n = res_stream_V_data_10_V_full_n.read();
    } else {
        res_stream_V_data_10_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_10_V_din() {
    res_stream_V_data_10_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_10.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_10_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_10_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_10_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_11_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_11_V_blk_n = res_stream_V_data_11_V_full_n.read();
    } else {
        res_stream_V_data_11_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_11_V_din() {
    res_stream_V_data_11_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_11.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_11_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_11_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_11_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_12_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_12_V_blk_n = res_stream_V_data_12_V_full_n.read();
    } else {
        res_stream_V_data_12_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_12_V_din() {
    res_stream_V_data_12_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_12.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_12_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_12_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_12_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_13_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_13_V_blk_n = res_stream_V_data_13_V_full_n.read();
    } else {
        res_stream_V_data_13_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_13_V_din() {
    res_stream_V_data_13_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_13.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_13_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_13_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_13_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_14_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_14_V_blk_n = res_stream_V_data_14_V_full_n.read();
    } else {
        res_stream_V_data_14_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_14_V_din() {
    res_stream_V_data_14_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_14.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_14_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_14_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_14_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_15_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_15_V_blk_n = res_stream_V_data_15_V_full_n.read();
    } else {
        res_stream_V_data_15_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_15_V_din() {
    res_stream_V_data_15_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_15.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_15_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_15_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_15_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_16_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_16_V_blk_n = res_stream_V_data_16_V_full_n.read();
    } else {
        res_stream_V_data_16_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_16_V_din() {
    res_stream_V_data_16_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_16.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_16_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_16_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_16_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_17_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_17_V_blk_n = res_stream_V_data_17_V_full_n.read();
    } else {
        res_stream_V_data_17_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_17_V_din() {
    res_stream_V_data_17_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_17.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_17_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_17_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_17_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_18_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_18_V_blk_n = res_stream_V_data_18_V_full_n.read();
    } else {
        res_stream_V_data_18_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_18_V_din() {
    res_stream_V_data_18_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_18.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_18_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_18_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_18_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_19_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_19_V_blk_n = res_stream_V_data_19_V_full_n.read();
    } else {
        res_stream_V_data_19_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_19_V_din() {
    res_stream_V_data_19_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_19.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_19_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_19_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_19_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_1_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_1_V_blk_n = res_stream_V_data_1_V_full_n.read();
    } else {
        res_stream_V_data_1_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_1_V_din() {
    res_stream_V_data_1_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_1.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_1_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_1_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_1_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_20_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_20_V_blk_n = res_stream_V_data_20_V_full_n.read();
    } else {
        res_stream_V_data_20_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_20_V_din() {
    res_stream_V_data_20_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_20.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_20_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_20_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_20_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_21_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_21_V_blk_n = res_stream_V_data_21_V_full_n.read();
    } else {
        res_stream_V_data_21_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_21_V_din() {
    res_stream_V_data_21_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_21.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_21_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_21_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_21_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_22_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_22_V_blk_n = res_stream_V_data_22_V_full_n.read();
    } else {
        res_stream_V_data_22_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_22_V_din() {
    res_stream_V_data_22_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_22.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_22_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_22_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_22_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_23_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_23_V_blk_n = res_stream_V_data_23_V_full_n.read();
    } else {
        res_stream_V_data_23_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_23_V_din() {
    res_stream_V_data_23_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_23.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_23_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_23_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_23_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_24_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_24_V_blk_n = res_stream_V_data_24_V_full_n.read();
    } else {
        res_stream_V_data_24_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_24_V_din() {
    res_stream_V_data_24_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_24.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_24_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_24_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_24_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_25_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_25_V_blk_n = res_stream_V_data_25_V_full_n.read();
    } else {
        res_stream_V_data_25_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_25_V_din() {
    res_stream_V_data_25_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_25.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_25_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_25_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_25_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_26_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_26_V_blk_n = res_stream_V_data_26_V_full_n.read();
    } else {
        res_stream_V_data_26_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_26_V_din() {
    res_stream_V_data_26_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_26.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_26_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_26_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_26_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_27_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_27_V_blk_n = res_stream_V_data_27_V_full_n.read();
    } else {
        res_stream_V_data_27_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_27_V_din() {
    res_stream_V_data_27_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_27.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_27_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_27_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_27_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_28_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_28_V_blk_n = res_stream_V_data_28_V_full_n.read();
    } else {
        res_stream_V_data_28_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_28_V_din() {
    res_stream_V_data_28_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_28.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_28_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_28_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_28_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_29_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_29_V_blk_n = res_stream_V_data_29_V_full_n.read();
    } else {
        res_stream_V_data_29_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_29_V_din() {
    res_stream_V_data_29_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_29.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_29_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_29_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_29_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_2_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_2_V_blk_n = res_stream_V_data_2_V_full_n.read();
    } else {
        res_stream_V_data_2_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_2_V_din() {
    res_stream_V_data_2_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_2.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_2_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_2_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_2_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_30_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_30_V_blk_n = res_stream_V_data_30_V_full_n.read();
    } else {
        res_stream_V_data_30_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_30_V_din() {
    res_stream_V_data_30_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_30.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_30_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_30_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_30_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_31_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_31_V_blk_n = res_stream_V_data_31_V_full_n.read();
    } else {
        res_stream_V_data_31_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_31_V_din() {
    res_stream_V_data_31_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_31.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_31_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_31_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_31_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_32_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_32_V_blk_n = res_stream_V_data_32_V_full_n.read();
    } else {
        res_stream_V_data_32_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_32_V_din() {
    res_stream_V_data_32_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_32.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_32_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_32_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_32_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_33_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_33_V_blk_n = res_stream_V_data_33_V_full_n.read();
    } else {
        res_stream_V_data_33_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_33_V_din() {
    res_stream_V_data_33_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_33.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_33_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_33_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_33_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_34_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_34_V_blk_n = res_stream_V_data_34_V_full_n.read();
    } else {
        res_stream_V_data_34_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_34_V_din() {
    res_stream_V_data_34_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_34.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_34_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_34_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_34_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_35_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_35_V_blk_n = res_stream_V_data_35_V_full_n.read();
    } else {
        res_stream_V_data_35_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_35_V_din() {
    res_stream_V_data_35_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_35.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_35_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_35_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_35_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_36_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_36_V_blk_n = res_stream_V_data_36_V_full_n.read();
    } else {
        res_stream_V_data_36_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_36_V_din() {
    res_stream_V_data_36_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_36.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_36_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_36_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_36_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_37_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_37_V_blk_n = res_stream_V_data_37_V_full_n.read();
    } else {
        res_stream_V_data_37_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_37_V_din() {
    res_stream_V_data_37_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_37.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_37_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_37_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_37_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_38_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_38_V_blk_n = res_stream_V_data_38_V_full_n.read();
    } else {
        res_stream_V_data_38_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_38_V_din() {
    res_stream_V_data_38_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_38.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_38_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_38_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_38_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_39_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_39_V_blk_n = res_stream_V_data_39_V_full_n.read();
    } else {
        res_stream_V_data_39_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_39_V_din() {
    res_stream_V_data_39_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_39.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_39_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_39_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_39_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_3_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_3_V_blk_n = res_stream_V_data_3_V_full_n.read();
    } else {
        res_stream_V_data_3_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_3_V_din() {
    res_stream_V_data_3_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_3.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_3_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_3_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_3_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_40_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_40_V_blk_n = res_stream_V_data_40_V_full_n.read();
    } else {
        res_stream_V_data_40_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_40_V_din() {
    res_stream_V_data_40_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_40.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_40_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_40_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_40_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_41_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_41_V_blk_n = res_stream_V_data_41_V_full_n.read();
    } else {
        res_stream_V_data_41_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_41_V_din() {
    res_stream_V_data_41_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_41.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_41_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_41_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_41_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_42_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_42_V_blk_n = res_stream_V_data_42_V_full_n.read();
    } else {
        res_stream_V_data_42_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_42_V_din() {
    res_stream_V_data_42_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_42.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_42_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_42_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_42_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_43_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_43_V_blk_n = res_stream_V_data_43_V_full_n.read();
    } else {
        res_stream_V_data_43_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_43_V_din() {
    res_stream_V_data_43_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_43.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_43_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_43_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_43_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_44_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_44_V_blk_n = res_stream_V_data_44_V_full_n.read();
    } else {
        res_stream_V_data_44_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_44_V_din() {
    res_stream_V_data_44_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_44.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_44_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_44_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_44_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_45_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_45_V_blk_n = res_stream_V_data_45_V_full_n.read();
    } else {
        res_stream_V_data_45_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_45_V_din() {
    res_stream_V_data_45_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_45.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_45_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_45_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_45_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_46_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_46_V_blk_n = res_stream_V_data_46_V_full_n.read();
    } else {
        res_stream_V_data_46_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_46_V_din() {
    res_stream_V_data_46_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_46.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_46_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_46_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_46_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_47_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_47_V_blk_n = res_stream_V_data_47_V_full_n.read();
    } else {
        res_stream_V_data_47_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_47_V_din() {
    res_stream_V_data_47_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_47.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_47_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_47_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_47_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_48_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_48_V_blk_n = res_stream_V_data_48_V_full_n.read();
    } else {
        res_stream_V_data_48_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_48_V_din() {
    res_stream_V_data_48_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_48.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_48_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_48_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_48_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_49_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_49_V_blk_n = res_stream_V_data_49_V_full_n.read();
    } else {
        res_stream_V_data_49_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_49_V_din() {
    res_stream_V_data_49_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_49.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_49_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_49_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_49_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_4_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_4_V_blk_n = res_stream_V_data_4_V_full_n.read();
    } else {
        res_stream_V_data_4_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_4_V_din() {
    res_stream_V_data_4_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_4.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_4_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_4_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_4_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_50_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_50_V_blk_n = res_stream_V_data_50_V_full_n.read();
    } else {
        res_stream_V_data_50_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_50_V_din() {
    res_stream_V_data_50_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_50.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_50_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_50_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_50_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_51_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_51_V_blk_n = res_stream_V_data_51_V_full_n.read();
    } else {
        res_stream_V_data_51_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_51_V_din() {
    res_stream_V_data_51_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_51.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_51_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_51_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_51_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_52_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_52_V_blk_n = res_stream_V_data_52_V_full_n.read();
    } else {
        res_stream_V_data_52_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_52_V_din() {
    res_stream_V_data_52_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_52.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_52_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_52_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_52_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_53_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_53_V_blk_n = res_stream_V_data_53_V_full_n.read();
    } else {
        res_stream_V_data_53_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_53_V_din() {
    res_stream_V_data_53_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_53.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_53_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_53_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_53_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_54_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_54_V_blk_n = res_stream_V_data_54_V_full_n.read();
    } else {
        res_stream_V_data_54_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_54_V_din() {
    res_stream_V_data_54_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_54.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_54_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_54_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_54_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_55_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_55_V_blk_n = res_stream_V_data_55_V_full_n.read();
    } else {
        res_stream_V_data_55_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_55_V_din() {
    res_stream_V_data_55_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_55.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_55_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_55_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_55_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_56_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_56_V_blk_n = res_stream_V_data_56_V_full_n.read();
    } else {
        res_stream_V_data_56_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_56_V_din() {
    res_stream_V_data_56_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_56.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_56_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_56_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_56_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_57_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_57_V_blk_n = res_stream_V_data_57_V_full_n.read();
    } else {
        res_stream_V_data_57_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_57_V_din() {
    res_stream_V_data_57_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_57.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_57_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_57_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_57_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_58_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_58_V_blk_n = res_stream_V_data_58_V_full_n.read();
    } else {
        res_stream_V_data_58_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_58_V_din() {
    res_stream_V_data_58_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_58.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_58_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_58_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_58_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_59_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_59_V_blk_n = res_stream_V_data_59_V_full_n.read();
    } else {
        res_stream_V_data_59_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_59_V_din() {
    res_stream_V_data_59_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_59.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_59_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_59_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_59_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_5_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_5_V_blk_n = res_stream_V_data_5_V_full_n.read();
    } else {
        res_stream_V_data_5_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_5_V_din() {
    res_stream_V_data_5_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_5.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_5_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_5_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_5_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_60_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_60_V_blk_n = res_stream_V_data_60_V_full_n.read();
    } else {
        res_stream_V_data_60_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_60_V_din() {
    res_stream_V_data_60_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_60.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_60_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_60_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_60_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_61_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_61_V_blk_n = res_stream_V_data_61_V_full_n.read();
    } else {
        res_stream_V_data_61_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_61_V_din() {
    res_stream_V_data_61_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_61.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_61_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_61_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_61_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_62_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_62_V_blk_n = res_stream_V_data_62_V_full_n.read();
    } else {
        res_stream_V_data_62_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_62_V_din() {
    res_stream_V_data_62_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_62.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_62_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_62_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_62_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_63_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_63_V_blk_n = res_stream_V_data_63_V_full_n.read();
    } else {
        res_stream_V_data_63_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_63_V_din() {
    res_stream_V_data_63_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_63.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_63_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_63_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_63_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_6_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_6_V_blk_n = res_stream_V_data_6_V_full_n.read();
    } else {
        res_stream_V_data_6_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_6_V_din() {
    res_stream_V_data_6_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_6.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_6_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_6_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_6_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_7_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_7_V_blk_n = res_stream_V_data_7_V_full_n.read();
    } else {
        res_stream_V_data_7_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_7_V_din() {
    res_stream_V_data_7_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_7.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_7_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_7_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_7_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_8_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_8_V_blk_n = res_stream_V_data_8_V_full_n.read();
    } else {
        res_stream_V_data_8_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_8_V_din() {
    res_stream_V_data_8_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_8.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_8_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_8_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_8_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_9_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        res_stream_V_data_9_V_blk_n = res_stream_V_data_9_V_full_n.read();
    } else {
        res_stream_V_data_9_V_blk_n = ap_const_logic_1;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_9_V_din() {
    res_stream_V_data_9_V_din = grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_return_9.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_res_stream_V_data_9_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, io_acc_block_signal_op3751.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_fu_5788_ap_done.read())))) {
        res_stream_V_data_9_V_write = ap_const_logic_1;
    } else {
        res_stream_V_data_9_V_write = ap_const_logic_0;
    }
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_start_out() {
    start_out = real_start.read();
}

void dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_s::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

}

