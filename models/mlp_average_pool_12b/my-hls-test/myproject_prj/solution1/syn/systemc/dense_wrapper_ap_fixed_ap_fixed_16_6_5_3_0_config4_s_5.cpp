#include "dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_561_V_read695_phi_phi_fu_31152_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_561_V_read695_phi_phi_fu_31152_p4 = ap_phi_mux_data_561_V_read695_rewind_phi_fu_19099_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_561_V_read695_phi_phi_fu_31152_p4 = data_561_V_read.read();
    } else {
        ap_phi_mux_data_561_V_read695_phi_phi_fu_31152_p4 = ap_phi_reg_pp0_iter0_data_561_V_read695_phi_reg_31148.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_561_V_read695_rewind_phi_fu_19099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_561_V_read695_rewind_phi_fu_19099_p6 = data_561_V_read695_phi_reg_31148.read();
    } else {
        ap_phi_mux_data_561_V_read695_rewind_phi_fu_19099_p6 = data_561_V_read695_rewind_reg_19095.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_562_V_read696_phi_phi_fu_31165_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_562_V_read696_phi_phi_fu_31165_p4 = ap_phi_mux_data_562_V_read696_rewind_phi_fu_19113_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_562_V_read696_phi_phi_fu_31165_p4 = data_562_V_read.read();
    } else {
        ap_phi_mux_data_562_V_read696_phi_phi_fu_31165_p4 = ap_phi_reg_pp0_iter0_data_562_V_read696_phi_reg_31161.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_562_V_read696_rewind_phi_fu_19113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_562_V_read696_rewind_phi_fu_19113_p6 = data_562_V_read696_phi_reg_31161.read();
    } else {
        ap_phi_mux_data_562_V_read696_rewind_phi_fu_19113_p6 = data_562_V_read696_rewind_reg_19109.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_563_V_read697_phi_phi_fu_31178_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_563_V_read697_phi_phi_fu_31178_p4 = ap_phi_mux_data_563_V_read697_rewind_phi_fu_19127_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_563_V_read697_phi_phi_fu_31178_p4 = data_563_V_read.read();
    } else {
        ap_phi_mux_data_563_V_read697_phi_phi_fu_31178_p4 = ap_phi_reg_pp0_iter0_data_563_V_read697_phi_reg_31174.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_563_V_read697_rewind_phi_fu_19127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_563_V_read697_rewind_phi_fu_19127_p6 = data_563_V_read697_phi_reg_31174.read();
    } else {
        ap_phi_mux_data_563_V_read697_rewind_phi_fu_19127_p6 = data_563_V_read697_rewind_reg_19123.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_564_V_read698_phi_phi_fu_31191_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_564_V_read698_phi_phi_fu_31191_p4 = ap_phi_mux_data_564_V_read698_rewind_phi_fu_19141_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_564_V_read698_phi_phi_fu_31191_p4 = data_564_V_read.read();
    } else {
        ap_phi_mux_data_564_V_read698_phi_phi_fu_31191_p4 = ap_phi_reg_pp0_iter0_data_564_V_read698_phi_reg_31187.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_564_V_read698_rewind_phi_fu_19141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_564_V_read698_rewind_phi_fu_19141_p6 = data_564_V_read698_phi_reg_31187.read();
    } else {
        ap_phi_mux_data_564_V_read698_rewind_phi_fu_19141_p6 = data_564_V_read698_rewind_reg_19137.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_565_V_read699_phi_phi_fu_31204_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_565_V_read699_phi_phi_fu_31204_p4 = ap_phi_mux_data_565_V_read699_rewind_phi_fu_19155_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_565_V_read699_phi_phi_fu_31204_p4 = data_565_V_read.read();
    } else {
        ap_phi_mux_data_565_V_read699_phi_phi_fu_31204_p4 = ap_phi_reg_pp0_iter0_data_565_V_read699_phi_reg_31200.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_565_V_read699_rewind_phi_fu_19155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_565_V_read699_rewind_phi_fu_19155_p6 = data_565_V_read699_phi_reg_31200.read();
    } else {
        ap_phi_mux_data_565_V_read699_rewind_phi_fu_19155_p6 = data_565_V_read699_rewind_reg_19151.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_566_V_read700_phi_phi_fu_31217_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_566_V_read700_phi_phi_fu_31217_p4 = ap_phi_mux_data_566_V_read700_rewind_phi_fu_19169_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_566_V_read700_phi_phi_fu_31217_p4 = data_566_V_read.read();
    } else {
        ap_phi_mux_data_566_V_read700_phi_phi_fu_31217_p4 = ap_phi_reg_pp0_iter0_data_566_V_read700_phi_reg_31213.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_566_V_read700_rewind_phi_fu_19169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_566_V_read700_rewind_phi_fu_19169_p6 = data_566_V_read700_phi_reg_31213.read();
    } else {
        ap_phi_mux_data_566_V_read700_rewind_phi_fu_19169_p6 = data_566_V_read700_rewind_reg_19165.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_567_V_read701_phi_phi_fu_31230_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_567_V_read701_phi_phi_fu_31230_p4 = ap_phi_mux_data_567_V_read701_rewind_phi_fu_19183_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_567_V_read701_phi_phi_fu_31230_p4 = data_567_V_read.read();
    } else {
        ap_phi_mux_data_567_V_read701_phi_phi_fu_31230_p4 = ap_phi_reg_pp0_iter0_data_567_V_read701_phi_reg_31226.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_567_V_read701_rewind_phi_fu_19183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_567_V_read701_rewind_phi_fu_19183_p6 = data_567_V_read701_phi_reg_31226.read();
    } else {
        ap_phi_mux_data_567_V_read701_rewind_phi_fu_19183_p6 = data_567_V_read701_rewind_reg_19179.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_568_V_read702_phi_phi_fu_31243_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_568_V_read702_phi_phi_fu_31243_p4 = ap_phi_mux_data_568_V_read702_rewind_phi_fu_19197_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_568_V_read702_phi_phi_fu_31243_p4 = data_568_V_read.read();
    } else {
        ap_phi_mux_data_568_V_read702_phi_phi_fu_31243_p4 = ap_phi_reg_pp0_iter0_data_568_V_read702_phi_reg_31239.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_568_V_read702_rewind_phi_fu_19197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_568_V_read702_rewind_phi_fu_19197_p6 = data_568_V_read702_phi_reg_31239.read();
    } else {
        ap_phi_mux_data_568_V_read702_rewind_phi_fu_19197_p6 = data_568_V_read702_rewind_reg_19193.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_569_V_read703_phi_phi_fu_31256_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_569_V_read703_phi_phi_fu_31256_p4 = ap_phi_mux_data_569_V_read703_rewind_phi_fu_19211_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_569_V_read703_phi_phi_fu_31256_p4 = data_569_V_read.read();
    } else {
        ap_phi_mux_data_569_V_read703_phi_phi_fu_31256_p4 = ap_phi_reg_pp0_iter0_data_569_V_read703_phi_reg_31252.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_569_V_read703_rewind_phi_fu_19211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_569_V_read703_rewind_phi_fu_19211_p6 = data_569_V_read703_phi_reg_31252.read();
    } else {
        ap_phi_mux_data_569_V_read703_rewind_phi_fu_19211_p6 = data_569_V_read703_rewind_reg_19207.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_56_V_read190_phi_phi_fu_24587_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_56_V_read190_phi_phi_fu_24587_p4 = ap_phi_mux_data_56_V_read190_rewind_phi_fu_12029_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_56_V_read190_phi_phi_fu_24587_p4 = data_56_V_read.read();
    } else {
        ap_phi_mux_data_56_V_read190_phi_phi_fu_24587_p4 = ap_phi_reg_pp0_iter0_data_56_V_read190_phi_reg_24583.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_56_V_read190_rewind_phi_fu_12029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_56_V_read190_rewind_phi_fu_12029_p6 = data_56_V_read190_phi_reg_24583.read();
    } else {
        ap_phi_mux_data_56_V_read190_rewind_phi_fu_12029_p6 = data_56_V_read190_rewind_reg_12025.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_570_V_read704_phi_phi_fu_31269_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_570_V_read704_phi_phi_fu_31269_p4 = ap_phi_mux_data_570_V_read704_rewind_phi_fu_19225_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_570_V_read704_phi_phi_fu_31269_p4 = data_570_V_read.read();
    } else {
        ap_phi_mux_data_570_V_read704_phi_phi_fu_31269_p4 = ap_phi_reg_pp0_iter0_data_570_V_read704_phi_reg_31265.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_570_V_read704_rewind_phi_fu_19225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_570_V_read704_rewind_phi_fu_19225_p6 = data_570_V_read704_phi_reg_31265.read();
    } else {
        ap_phi_mux_data_570_V_read704_rewind_phi_fu_19225_p6 = data_570_V_read704_rewind_reg_19221.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_571_V_read705_phi_phi_fu_31282_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_571_V_read705_phi_phi_fu_31282_p4 = ap_phi_mux_data_571_V_read705_rewind_phi_fu_19239_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_571_V_read705_phi_phi_fu_31282_p4 = data_571_V_read.read();
    } else {
        ap_phi_mux_data_571_V_read705_phi_phi_fu_31282_p4 = ap_phi_reg_pp0_iter0_data_571_V_read705_phi_reg_31278.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_571_V_read705_rewind_phi_fu_19239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_571_V_read705_rewind_phi_fu_19239_p6 = data_571_V_read705_phi_reg_31278.read();
    } else {
        ap_phi_mux_data_571_V_read705_rewind_phi_fu_19239_p6 = data_571_V_read705_rewind_reg_19235.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_572_V_read706_phi_phi_fu_31295_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_572_V_read706_phi_phi_fu_31295_p4 = ap_phi_mux_data_572_V_read706_rewind_phi_fu_19253_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_572_V_read706_phi_phi_fu_31295_p4 = data_572_V_read.read();
    } else {
        ap_phi_mux_data_572_V_read706_phi_phi_fu_31295_p4 = ap_phi_reg_pp0_iter0_data_572_V_read706_phi_reg_31291.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_572_V_read706_rewind_phi_fu_19253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_572_V_read706_rewind_phi_fu_19253_p6 = data_572_V_read706_phi_reg_31291.read();
    } else {
        ap_phi_mux_data_572_V_read706_rewind_phi_fu_19253_p6 = data_572_V_read706_rewind_reg_19249.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_573_V_read707_phi_phi_fu_31308_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_573_V_read707_phi_phi_fu_31308_p4 = ap_phi_mux_data_573_V_read707_rewind_phi_fu_19267_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_573_V_read707_phi_phi_fu_31308_p4 = data_573_V_read.read();
    } else {
        ap_phi_mux_data_573_V_read707_phi_phi_fu_31308_p4 = ap_phi_reg_pp0_iter0_data_573_V_read707_phi_reg_31304.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_573_V_read707_rewind_phi_fu_19267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_573_V_read707_rewind_phi_fu_19267_p6 = data_573_V_read707_phi_reg_31304.read();
    } else {
        ap_phi_mux_data_573_V_read707_rewind_phi_fu_19267_p6 = data_573_V_read707_rewind_reg_19263.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_574_V_read708_phi_phi_fu_31321_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_574_V_read708_phi_phi_fu_31321_p4 = ap_phi_mux_data_574_V_read708_rewind_phi_fu_19281_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_574_V_read708_phi_phi_fu_31321_p4 = data_574_V_read.read();
    } else {
        ap_phi_mux_data_574_V_read708_phi_phi_fu_31321_p4 = ap_phi_reg_pp0_iter0_data_574_V_read708_phi_reg_31317.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_574_V_read708_rewind_phi_fu_19281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_574_V_read708_rewind_phi_fu_19281_p6 = data_574_V_read708_phi_reg_31317.read();
    } else {
        ap_phi_mux_data_574_V_read708_rewind_phi_fu_19281_p6 = data_574_V_read708_rewind_reg_19277.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_575_V_read709_phi_phi_fu_31334_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_575_V_read709_phi_phi_fu_31334_p4 = ap_phi_mux_data_575_V_read709_rewind_phi_fu_19295_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_575_V_read709_phi_phi_fu_31334_p4 = data_575_V_read.read();
    } else {
        ap_phi_mux_data_575_V_read709_phi_phi_fu_31334_p4 = ap_phi_reg_pp0_iter0_data_575_V_read709_phi_reg_31330.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_575_V_read709_rewind_phi_fu_19295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_575_V_read709_rewind_phi_fu_19295_p6 = data_575_V_read709_phi_reg_31330.read();
    } else {
        ap_phi_mux_data_575_V_read709_rewind_phi_fu_19295_p6 = data_575_V_read709_rewind_reg_19291.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_576_V_read710_phi_phi_fu_31347_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_576_V_read710_phi_phi_fu_31347_p4 = ap_phi_mux_data_576_V_read710_rewind_phi_fu_19309_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_576_V_read710_phi_phi_fu_31347_p4 = data_576_V_read.read();
    } else {
        ap_phi_mux_data_576_V_read710_phi_phi_fu_31347_p4 = ap_phi_reg_pp0_iter0_data_576_V_read710_phi_reg_31343.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_576_V_read710_rewind_phi_fu_19309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_576_V_read710_rewind_phi_fu_19309_p6 = data_576_V_read710_phi_reg_31343.read();
    } else {
        ap_phi_mux_data_576_V_read710_rewind_phi_fu_19309_p6 = data_576_V_read710_rewind_reg_19305.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_577_V_read711_phi_phi_fu_31360_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_577_V_read711_phi_phi_fu_31360_p4 = ap_phi_mux_data_577_V_read711_rewind_phi_fu_19323_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_577_V_read711_phi_phi_fu_31360_p4 = data_577_V_read.read();
    } else {
        ap_phi_mux_data_577_V_read711_phi_phi_fu_31360_p4 = ap_phi_reg_pp0_iter0_data_577_V_read711_phi_reg_31356.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_577_V_read711_rewind_phi_fu_19323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_577_V_read711_rewind_phi_fu_19323_p6 = data_577_V_read711_phi_reg_31356.read();
    } else {
        ap_phi_mux_data_577_V_read711_rewind_phi_fu_19323_p6 = data_577_V_read711_rewind_reg_19319.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_578_V_read712_phi_phi_fu_31373_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_578_V_read712_phi_phi_fu_31373_p4 = ap_phi_mux_data_578_V_read712_rewind_phi_fu_19337_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_578_V_read712_phi_phi_fu_31373_p4 = data_578_V_read.read();
    } else {
        ap_phi_mux_data_578_V_read712_phi_phi_fu_31373_p4 = ap_phi_reg_pp0_iter0_data_578_V_read712_phi_reg_31369.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_578_V_read712_rewind_phi_fu_19337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_578_V_read712_rewind_phi_fu_19337_p6 = data_578_V_read712_phi_reg_31369.read();
    } else {
        ap_phi_mux_data_578_V_read712_rewind_phi_fu_19337_p6 = data_578_V_read712_rewind_reg_19333.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_579_V_read713_phi_phi_fu_31386_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_579_V_read713_phi_phi_fu_31386_p4 = ap_phi_mux_data_579_V_read713_rewind_phi_fu_19351_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_579_V_read713_phi_phi_fu_31386_p4 = data_579_V_read.read();
    } else {
        ap_phi_mux_data_579_V_read713_phi_phi_fu_31386_p4 = ap_phi_reg_pp0_iter0_data_579_V_read713_phi_reg_31382.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_579_V_read713_rewind_phi_fu_19351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_579_V_read713_rewind_phi_fu_19351_p6 = data_579_V_read713_phi_reg_31382.read();
    } else {
        ap_phi_mux_data_579_V_read713_rewind_phi_fu_19351_p6 = data_579_V_read713_rewind_reg_19347.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_57_V_read191_phi_phi_fu_24600_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_57_V_read191_phi_phi_fu_24600_p4 = ap_phi_mux_data_57_V_read191_rewind_phi_fu_12043_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_57_V_read191_phi_phi_fu_24600_p4 = data_57_V_read.read();
    } else {
        ap_phi_mux_data_57_V_read191_phi_phi_fu_24600_p4 = ap_phi_reg_pp0_iter0_data_57_V_read191_phi_reg_24596.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_57_V_read191_rewind_phi_fu_12043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_57_V_read191_rewind_phi_fu_12043_p6 = data_57_V_read191_phi_reg_24596.read();
    } else {
        ap_phi_mux_data_57_V_read191_rewind_phi_fu_12043_p6 = data_57_V_read191_rewind_reg_12039.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_580_V_read714_phi_phi_fu_31399_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_580_V_read714_phi_phi_fu_31399_p4 = ap_phi_mux_data_580_V_read714_rewind_phi_fu_19365_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_580_V_read714_phi_phi_fu_31399_p4 = data_580_V_read.read();
    } else {
        ap_phi_mux_data_580_V_read714_phi_phi_fu_31399_p4 = ap_phi_reg_pp0_iter0_data_580_V_read714_phi_reg_31395.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_580_V_read714_rewind_phi_fu_19365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_580_V_read714_rewind_phi_fu_19365_p6 = data_580_V_read714_phi_reg_31395.read();
    } else {
        ap_phi_mux_data_580_V_read714_rewind_phi_fu_19365_p6 = data_580_V_read714_rewind_reg_19361.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_581_V_read715_phi_phi_fu_31412_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_581_V_read715_phi_phi_fu_31412_p4 = ap_phi_mux_data_581_V_read715_rewind_phi_fu_19379_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_581_V_read715_phi_phi_fu_31412_p4 = data_581_V_read.read();
    } else {
        ap_phi_mux_data_581_V_read715_phi_phi_fu_31412_p4 = ap_phi_reg_pp0_iter0_data_581_V_read715_phi_reg_31408.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_581_V_read715_rewind_phi_fu_19379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_581_V_read715_rewind_phi_fu_19379_p6 = data_581_V_read715_phi_reg_31408.read();
    } else {
        ap_phi_mux_data_581_V_read715_rewind_phi_fu_19379_p6 = data_581_V_read715_rewind_reg_19375.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_582_V_read716_phi_phi_fu_31425_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_582_V_read716_phi_phi_fu_31425_p4 = ap_phi_mux_data_582_V_read716_rewind_phi_fu_19393_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_582_V_read716_phi_phi_fu_31425_p4 = data_582_V_read.read();
    } else {
        ap_phi_mux_data_582_V_read716_phi_phi_fu_31425_p4 = ap_phi_reg_pp0_iter0_data_582_V_read716_phi_reg_31421.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_582_V_read716_rewind_phi_fu_19393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_582_V_read716_rewind_phi_fu_19393_p6 = data_582_V_read716_phi_reg_31421.read();
    } else {
        ap_phi_mux_data_582_V_read716_rewind_phi_fu_19393_p6 = data_582_V_read716_rewind_reg_19389.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_583_V_read717_phi_phi_fu_31438_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_583_V_read717_phi_phi_fu_31438_p4 = ap_phi_mux_data_583_V_read717_rewind_phi_fu_19407_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_583_V_read717_phi_phi_fu_31438_p4 = data_583_V_read.read();
    } else {
        ap_phi_mux_data_583_V_read717_phi_phi_fu_31438_p4 = ap_phi_reg_pp0_iter0_data_583_V_read717_phi_reg_31434.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_583_V_read717_rewind_phi_fu_19407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_583_V_read717_rewind_phi_fu_19407_p6 = data_583_V_read717_phi_reg_31434.read();
    } else {
        ap_phi_mux_data_583_V_read717_rewind_phi_fu_19407_p6 = data_583_V_read717_rewind_reg_19403.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_584_V_read718_phi_phi_fu_31451_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_584_V_read718_phi_phi_fu_31451_p4 = ap_phi_mux_data_584_V_read718_rewind_phi_fu_19421_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_584_V_read718_phi_phi_fu_31451_p4 = data_584_V_read.read();
    } else {
        ap_phi_mux_data_584_V_read718_phi_phi_fu_31451_p4 = ap_phi_reg_pp0_iter0_data_584_V_read718_phi_reg_31447.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_584_V_read718_rewind_phi_fu_19421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_584_V_read718_rewind_phi_fu_19421_p6 = data_584_V_read718_phi_reg_31447.read();
    } else {
        ap_phi_mux_data_584_V_read718_rewind_phi_fu_19421_p6 = data_584_V_read718_rewind_reg_19417.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_585_V_read719_phi_phi_fu_31464_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_585_V_read719_phi_phi_fu_31464_p4 = ap_phi_mux_data_585_V_read719_rewind_phi_fu_19435_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_585_V_read719_phi_phi_fu_31464_p4 = data_585_V_read.read();
    } else {
        ap_phi_mux_data_585_V_read719_phi_phi_fu_31464_p4 = ap_phi_reg_pp0_iter0_data_585_V_read719_phi_reg_31460.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_585_V_read719_rewind_phi_fu_19435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_585_V_read719_rewind_phi_fu_19435_p6 = data_585_V_read719_phi_reg_31460.read();
    } else {
        ap_phi_mux_data_585_V_read719_rewind_phi_fu_19435_p6 = data_585_V_read719_rewind_reg_19431.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_586_V_read720_phi_phi_fu_31477_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_586_V_read720_phi_phi_fu_31477_p4 = ap_phi_mux_data_586_V_read720_rewind_phi_fu_19449_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_586_V_read720_phi_phi_fu_31477_p4 = data_586_V_read.read();
    } else {
        ap_phi_mux_data_586_V_read720_phi_phi_fu_31477_p4 = ap_phi_reg_pp0_iter0_data_586_V_read720_phi_reg_31473.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_586_V_read720_rewind_phi_fu_19449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_586_V_read720_rewind_phi_fu_19449_p6 = data_586_V_read720_phi_reg_31473.read();
    } else {
        ap_phi_mux_data_586_V_read720_rewind_phi_fu_19449_p6 = data_586_V_read720_rewind_reg_19445.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_587_V_read721_phi_phi_fu_31490_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_587_V_read721_phi_phi_fu_31490_p4 = ap_phi_mux_data_587_V_read721_rewind_phi_fu_19463_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_587_V_read721_phi_phi_fu_31490_p4 = data_587_V_read.read();
    } else {
        ap_phi_mux_data_587_V_read721_phi_phi_fu_31490_p4 = ap_phi_reg_pp0_iter0_data_587_V_read721_phi_reg_31486.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_587_V_read721_rewind_phi_fu_19463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_587_V_read721_rewind_phi_fu_19463_p6 = data_587_V_read721_phi_reg_31486.read();
    } else {
        ap_phi_mux_data_587_V_read721_rewind_phi_fu_19463_p6 = data_587_V_read721_rewind_reg_19459.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_588_V_read722_phi_phi_fu_31503_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_588_V_read722_phi_phi_fu_31503_p4 = ap_phi_mux_data_588_V_read722_rewind_phi_fu_19477_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_588_V_read722_phi_phi_fu_31503_p4 = data_588_V_read.read();
    } else {
        ap_phi_mux_data_588_V_read722_phi_phi_fu_31503_p4 = ap_phi_reg_pp0_iter0_data_588_V_read722_phi_reg_31499.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_588_V_read722_rewind_phi_fu_19477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_588_V_read722_rewind_phi_fu_19477_p6 = data_588_V_read722_phi_reg_31499.read();
    } else {
        ap_phi_mux_data_588_V_read722_rewind_phi_fu_19477_p6 = data_588_V_read722_rewind_reg_19473.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_589_V_read723_phi_phi_fu_31516_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_589_V_read723_phi_phi_fu_31516_p4 = ap_phi_mux_data_589_V_read723_rewind_phi_fu_19491_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_589_V_read723_phi_phi_fu_31516_p4 = data_589_V_read.read();
    } else {
        ap_phi_mux_data_589_V_read723_phi_phi_fu_31516_p4 = ap_phi_reg_pp0_iter0_data_589_V_read723_phi_reg_31512.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_589_V_read723_rewind_phi_fu_19491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_589_V_read723_rewind_phi_fu_19491_p6 = data_589_V_read723_phi_reg_31512.read();
    } else {
        ap_phi_mux_data_589_V_read723_rewind_phi_fu_19491_p6 = data_589_V_read723_rewind_reg_19487.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_58_V_read192_phi_phi_fu_24613_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_58_V_read192_phi_phi_fu_24613_p4 = ap_phi_mux_data_58_V_read192_rewind_phi_fu_12057_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_58_V_read192_phi_phi_fu_24613_p4 = data_58_V_read.read();
    } else {
        ap_phi_mux_data_58_V_read192_phi_phi_fu_24613_p4 = ap_phi_reg_pp0_iter0_data_58_V_read192_phi_reg_24609.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_58_V_read192_rewind_phi_fu_12057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_58_V_read192_rewind_phi_fu_12057_p6 = data_58_V_read192_phi_reg_24609.read();
    } else {
        ap_phi_mux_data_58_V_read192_rewind_phi_fu_12057_p6 = data_58_V_read192_rewind_reg_12053.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_590_V_read724_phi_phi_fu_31529_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_590_V_read724_phi_phi_fu_31529_p4 = ap_phi_mux_data_590_V_read724_rewind_phi_fu_19505_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_590_V_read724_phi_phi_fu_31529_p4 = data_590_V_read.read();
    } else {
        ap_phi_mux_data_590_V_read724_phi_phi_fu_31529_p4 = ap_phi_reg_pp0_iter0_data_590_V_read724_phi_reg_31525.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_590_V_read724_rewind_phi_fu_19505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_590_V_read724_rewind_phi_fu_19505_p6 = data_590_V_read724_phi_reg_31525.read();
    } else {
        ap_phi_mux_data_590_V_read724_rewind_phi_fu_19505_p6 = data_590_V_read724_rewind_reg_19501.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_591_V_read725_phi_phi_fu_31542_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_591_V_read725_phi_phi_fu_31542_p4 = ap_phi_mux_data_591_V_read725_rewind_phi_fu_19519_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_591_V_read725_phi_phi_fu_31542_p4 = data_591_V_read.read();
    } else {
        ap_phi_mux_data_591_V_read725_phi_phi_fu_31542_p4 = ap_phi_reg_pp0_iter0_data_591_V_read725_phi_reg_31538.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_591_V_read725_rewind_phi_fu_19519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_591_V_read725_rewind_phi_fu_19519_p6 = data_591_V_read725_phi_reg_31538.read();
    } else {
        ap_phi_mux_data_591_V_read725_rewind_phi_fu_19519_p6 = data_591_V_read725_rewind_reg_19515.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_592_V_read726_phi_phi_fu_31555_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_592_V_read726_phi_phi_fu_31555_p4 = ap_phi_mux_data_592_V_read726_rewind_phi_fu_19533_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_592_V_read726_phi_phi_fu_31555_p4 = data_592_V_read.read();
    } else {
        ap_phi_mux_data_592_V_read726_phi_phi_fu_31555_p4 = ap_phi_reg_pp0_iter0_data_592_V_read726_phi_reg_31551.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_592_V_read726_rewind_phi_fu_19533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_592_V_read726_rewind_phi_fu_19533_p6 = data_592_V_read726_phi_reg_31551.read();
    } else {
        ap_phi_mux_data_592_V_read726_rewind_phi_fu_19533_p6 = data_592_V_read726_rewind_reg_19529.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_593_V_read727_phi_phi_fu_31568_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_593_V_read727_phi_phi_fu_31568_p4 = ap_phi_mux_data_593_V_read727_rewind_phi_fu_19547_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_593_V_read727_phi_phi_fu_31568_p4 = data_593_V_read.read();
    } else {
        ap_phi_mux_data_593_V_read727_phi_phi_fu_31568_p4 = ap_phi_reg_pp0_iter0_data_593_V_read727_phi_reg_31564.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_593_V_read727_rewind_phi_fu_19547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_593_V_read727_rewind_phi_fu_19547_p6 = data_593_V_read727_phi_reg_31564.read();
    } else {
        ap_phi_mux_data_593_V_read727_rewind_phi_fu_19547_p6 = data_593_V_read727_rewind_reg_19543.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_594_V_read728_phi_phi_fu_31581_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_594_V_read728_phi_phi_fu_31581_p4 = ap_phi_mux_data_594_V_read728_rewind_phi_fu_19561_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_594_V_read728_phi_phi_fu_31581_p4 = data_594_V_read.read();
    } else {
        ap_phi_mux_data_594_V_read728_phi_phi_fu_31581_p4 = ap_phi_reg_pp0_iter0_data_594_V_read728_phi_reg_31577.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_594_V_read728_rewind_phi_fu_19561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_594_V_read728_rewind_phi_fu_19561_p6 = data_594_V_read728_phi_reg_31577.read();
    } else {
        ap_phi_mux_data_594_V_read728_rewind_phi_fu_19561_p6 = data_594_V_read728_rewind_reg_19557.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_595_V_read729_phi_phi_fu_31594_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_595_V_read729_phi_phi_fu_31594_p4 = ap_phi_mux_data_595_V_read729_rewind_phi_fu_19575_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_595_V_read729_phi_phi_fu_31594_p4 = data_595_V_read.read();
    } else {
        ap_phi_mux_data_595_V_read729_phi_phi_fu_31594_p4 = ap_phi_reg_pp0_iter0_data_595_V_read729_phi_reg_31590.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_595_V_read729_rewind_phi_fu_19575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_595_V_read729_rewind_phi_fu_19575_p6 = data_595_V_read729_phi_reg_31590.read();
    } else {
        ap_phi_mux_data_595_V_read729_rewind_phi_fu_19575_p6 = data_595_V_read729_rewind_reg_19571.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_596_V_read730_phi_phi_fu_31607_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_596_V_read730_phi_phi_fu_31607_p4 = ap_phi_mux_data_596_V_read730_rewind_phi_fu_19589_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_596_V_read730_phi_phi_fu_31607_p4 = data_596_V_read.read();
    } else {
        ap_phi_mux_data_596_V_read730_phi_phi_fu_31607_p4 = ap_phi_reg_pp0_iter0_data_596_V_read730_phi_reg_31603.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_596_V_read730_rewind_phi_fu_19589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_596_V_read730_rewind_phi_fu_19589_p6 = data_596_V_read730_phi_reg_31603.read();
    } else {
        ap_phi_mux_data_596_V_read730_rewind_phi_fu_19589_p6 = data_596_V_read730_rewind_reg_19585.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_597_V_read731_phi_phi_fu_31620_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_597_V_read731_phi_phi_fu_31620_p4 = ap_phi_mux_data_597_V_read731_rewind_phi_fu_19603_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_597_V_read731_phi_phi_fu_31620_p4 = data_597_V_read.read();
    } else {
        ap_phi_mux_data_597_V_read731_phi_phi_fu_31620_p4 = ap_phi_reg_pp0_iter0_data_597_V_read731_phi_reg_31616.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_597_V_read731_rewind_phi_fu_19603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_597_V_read731_rewind_phi_fu_19603_p6 = data_597_V_read731_phi_reg_31616.read();
    } else {
        ap_phi_mux_data_597_V_read731_rewind_phi_fu_19603_p6 = data_597_V_read731_rewind_reg_19599.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_598_V_read732_phi_phi_fu_31633_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_598_V_read732_phi_phi_fu_31633_p4 = ap_phi_mux_data_598_V_read732_rewind_phi_fu_19617_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_598_V_read732_phi_phi_fu_31633_p4 = data_598_V_read.read();
    } else {
        ap_phi_mux_data_598_V_read732_phi_phi_fu_31633_p4 = ap_phi_reg_pp0_iter0_data_598_V_read732_phi_reg_31629.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_598_V_read732_rewind_phi_fu_19617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_598_V_read732_rewind_phi_fu_19617_p6 = data_598_V_read732_phi_reg_31629.read();
    } else {
        ap_phi_mux_data_598_V_read732_rewind_phi_fu_19617_p6 = data_598_V_read732_rewind_reg_19613.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_599_V_read733_phi_phi_fu_31646_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_599_V_read733_phi_phi_fu_31646_p4 = ap_phi_mux_data_599_V_read733_rewind_phi_fu_19631_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_599_V_read733_phi_phi_fu_31646_p4 = data_599_V_read.read();
    } else {
        ap_phi_mux_data_599_V_read733_phi_phi_fu_31646_p4 = ap_phi_reg_pp0_iter0_data_599_V_read733_phi_reg_31642.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_599_V_read733_rewind_phi_fu_19631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_599_V_read733_rewind_phi_fu_19631_p6 = data_599_V_read733_phi_reg_31642.read();
    } else {
        ap_phi_mux_data_599_V_read733_rewind_phi_fu_19631_p6 = data_599_V_read733_rewind_reg_19627.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_59_V_read193_phi_phi_fu_24626_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_59_V_read193_phi_phi_fu_24626_p4 = ap_phi_mux_data_59_V_read193_rewind_phi_fu_12071_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_59_V_read193_phi_phi_fu_24626_p4 = data_59_V_read.read();
    } else {
        ap_phi_mux_data_59_V_read193_phi_phi_fu_24626_p4 = ap_phi_reg_pp0_iter0_data_59_V_read193_phi_reg_24622.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_59_V_read193_rewind_phi_fu_12071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_59_V_read193_rewind_phi_fu_12071_p6 = data_59_V_read193_phi_reg_24622.read();
    } else {
        ap_phi_mux_data_59_V_read193_rewind_phi_fu_12071_p6 = data_59_V_read193_rewind_reg_12067.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_5_V_read139_phi_phi_fu_23924_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_5_V_read139_phi_phi_fu_23924_p4 = ap_phi_mux_data_5_V_read139_rewind_phi_fu_11315_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_5_V_read139_phi_phi_fu_23924_p4 = data_5_V_read.read();
    } else {
        ap_phi_mux_data_5_V_read139_phi_phi_fu_23924_p4 = ap_phi_reg_pp0_iter0_data_5_V_read139_phi_reg_23920.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_5_V_read139_rewind_phi_fu_11315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_5_V_read139_rewind_phi_fu_11315_p6 = data_5_V_read139_phi_reg_23920.read();
    } else {
        ap_phi_mux_data_5_V_read139_rewind_phi_fu_11315_p6 = data_5_V_read139_rewind_reg_11311.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_600_V_read734_phi_phi_fu_31659_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_600_V_read734_phi_phi_fu_31659_p4 = ap_phi_mux_data_600_V_read734_rewind_phi_fu_19645_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_600_V_read734_phi_phi_fu_31659_p4 = data_600_V_read.read();
    } else {
        ap_phi_mux_data_600_V_read734_phi_phi_fu_31659_p4 = ap_phi_reg_pp0_iter0_data_600_V_read734_phi_reg_31655.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_600_V_read734_rewind_phi_fu_19645_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_600_V_read734_rewind_phi_fu_19645_p6 = data_600_V_read734_phi_reg_31655.read();
    } else {
        ap_phi_mux_data_600_V_read734_rewind_phi_fu_19645_p6 = data_600_V_read734_rewind_reg_19641.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_601_V_read735_phi_phi_fu_31672_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_601_V_read735_phi_phi_fu_31672_p4 = ap_phi_mux_data_601_V_read735_rewind_phi_fu_19659_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_601_V_read735_phi_phi_fu_31672_p4 = data_601_V_read.read();
    } else {
        ap_phi_mux_data_601_V_read735_phi_phi_fu_31672_p4 = ap_phi_reg_pp0_iter0_data_601_V_read735_phi_reg_31668.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_601_V_read735_rewind_phi_fu_19659_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_601_V_read735_rewind_phi_fu_19659_p6 = data_601_V_read735_phi_reg_31668.read();
    } else {
        ap_phi_mux_data_601_V_read735_rewind_phi_fu_19659_p6 = data_601_V_read735_rewind_reg_19655.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_602_V_read736_phi_phi_fu_31685_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_602_V_read736_phi_phi_fu_31685_p4 = ap_phi_mux_data_602_V_read736_rewind_phi_fu_19673_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_602_V_read736_phi_phi_fu_31685_p4 = data_602_V_read.read();
    } else {
        ap_phi_mux_data_602_V_read736_phi_phi_fu_31685_p4 = ap_phi_reg_pp0_iter0_data_602_V_read736_phi_reg_31681.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_602_V_read736_rewind_phi_fu_19673_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_602_V_read736_rewind_phi_fu_19673_p6 = data_602_V_read736_phi_reg_31681.read();
    } else {
        ap_phi_mux_data_602_V_read736_rewind_phi_fu_19673_p6 = data_602_V_read736_rewind_reg_19669.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_603_V_read737_phi_phi_fu_31698_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_603_V_read737_phi_phi_fu_31698_p4 = ap_phi_mux_data_603_V_read737_rewind_phi_fu_19687_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_603_V_read737_phi_phi_fu_31698_p4 = data_603_V_read.read();
    } else {
        ap_phi_mux_data_603_V_read737_phi_phi_fu_31698_p4 = ap_phi_reg_pp0_iter0_data_603_V_read737_phi_reg_31694.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_603_V_read737_rewind_phi_fu_19687_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_603_V_read737_rewind_phi_fu_19687_p6 = data_603_V_read737_phi_reg_31694.read();
    } else {
        ap_phi_mux_data_603_V_read737_rewind_phi_fu_19687_p6 = data_603_V_read737_rewind_reg_19683.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_604_V_read738_phi_phi_fu_31711_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_604_V_read738_phi_phi_fu_31711_p4 = ap_phi_mux_data_604_V_read738_rewind_phi_fu_19701_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_604_V_read738_phi_phi_fu_31711_p4 = data_604_V_read.read();
    } else {
        ap_phi_mux_data_604_V_read738_phi_phi_fu_31711_p4 = ap_phi_reg_pp0_iter0_data_604_V_read738_phi_reg_31707.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_604_V_read738_rewind_phi_fu_19701_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_604_V_read738_rewind_phi_fu_19701_p6 = data_604_V_read738_phi_reg_31707.read();
    } else {
        ap_phi_mux_data_604_V_read738_rewind_phi_fu_19701_p6 = data_604_V_read738_rewind_reg_19697.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_605_V_read739_phi_phi_fu_31724_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_605_V_read739_phi_phi_fu_31724_p4 = ap_phi_mux_data_605_V_read739_rewind_phi_fu_19715_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_605_V_read739_phi_phi_fu_31724_p4 = data_605_V_read.read();
    } else {
        ap_phi_mux_data_605_V_read739_phi_phi_fu_31724_p4 = ap_phi_reg_pp0_iter0_data_605_V_read739_phi_reg_31720.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_605_V_read739_rewind_phi_fu_19715_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_605_V_read739_rewind_phi_fu_19715_p6 = data_605_V_read739_phi_reg_31720.read();
    } else {
        ap_phi_mux_data_605_V_read739_rewind_phi_fu_19715_p6 = data_605_V_read739_rewind_reg_19711.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_606_V_read740_phi_phi_fu_31737_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_606_V_read740_phi_phi_fu_31737_p4 = ap_phi_mux_data_606_V_read740_rewind_phi_fu_19729_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_606_V_read740_phi_phi_fu_31737_p4 = data_606_V_read.read();
    } else {
        ap_phi_mux_data_606_V_read740_phi_phi_fu_31737_p4 = ap_phi_reg_pp0_iter0_data_606_V_read740_phi_reg_31733.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_606_V_read740_rewind_phi_fu_19729_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_606_V_read740_rewind_phi_fu_19729_p6 = data_606_V_read740_phi_reg_31733.read();
    } else {
        ap_phi_mux_data_606_V_read740_rewind_phi_fu_19729_p6 = data_606_V_read740_rewind_reg_19725.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_607_V_read741_phi_phi_fu_31750_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_607_V_read741_phi_phi_fu_31750_p4 = ap_phi_mux_data_607_V_read741_rewind_phi_fu_19743_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_607_V_read741_phi_phi_fu_31750_p4 = data_607_V_read.read();
    } else {
        ap_phi_mux_data_607_V_read741_phi_phi_fu_31750_p4 = ap_phi_reg_pp0_iter0_data_607_V_read741_phi_reg_31746.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_607_V_read741_rewind_phi_fu_19743_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_607_V_read741_rewind_phi_fu_19743_p6 = data_607_V_read741_phi_reg_31746.read();
    } else {
        ap_phi_mux_data_607_V_read741_rewind_phi_fu_19743_p6 = data_607_V_read741_rewind_reg_19739.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_608_V_read742_phi_phi_fu_31763_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_608_V_read742_phi_phi_fu_31763_p4 = ap_phi_mux_data_608_V_read742_rewind_phi_fu_19757_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_608_V_read742_phi_phi_fu_31763_p4 = data_608_V_read.read();
    } else {
        ap_phi_mux_data_608_V_read742_phi_phi_fu_31763_p4 = ap_phi_reg_pp0_iter0_data_608_V_read742_phi_reg_31759.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_608_V_read742_rewind_phi_fu_19757_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_608_V_read742_rewind_phi_fu_19757_p6 = data_608_V_read742_phi_reg_31759.read();
    } else {
        ap_phi_mux_data_608_V_read742_rewind_phi_fu_19757_p6 = data_608_V_read742_rewind_reg_19753.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_609_V_read743_phi_phi_fu_31776_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_609_V_read743_phi_phi_fu_31776_p4 = ap_phi_mux_data_609_V_read743_rewind_phi_fu_19771_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_609_V_read743_phi_phi_fu_31776_p4 = data_609_V_read.read();
    } else {
        ap_phi_mux_data_609_V_read743_phi_phi_fu_31776_p4 = ap_phi_reg_pp0_iter0_data_609_V_read743_phi_reg_31772.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_609_V_read743_rewind_phi_fu_19771_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_609_V_read743_rewind_phi_fu_19771_p6 = data_609_V_read743_phi_reg_31772.read();
    } else {
        ap_phi_mux_data_609_V_read743_rewind_phi_fu_19771_p6 = data_609_V_read743_rewind_reg_19767.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_60_V_read194_phi_phi_fu_24639_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_60_V_read194_phi_phi_fu_24639_p4 = ap_phi_mux_data_60_V_read194_rewind_phi_fu_12085_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_60_V_read194_phi_phi_fu_24639_p4 = data_60_V_read.read();
    } else {
        ap_phi_mux_data_60_V_read194_phi_phi_fu_24639_p4 = ap_phi_reg_pp0_iter0_data_60_V_read194_phi_reg_24635.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_60_V_read194_rewind_phi_fu_12085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_60_V_read194_rewind_phi_fu_12085_p6 = data_60_V_read194_phi_reg_24635.read();
    } else {
        ap_phi_mux_data_60_V_read194_rewind_phi_fu_12085_p6 = data_60_V_read194_rewind_reg_12081.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_610_V_read744_phi_phi_fu_31789_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_610_V_read744_phi_phi_fu_31789_p4 = ap_phi_mux_data_610_V_read744_rewind_phi_fu_19785_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_610_V_read744_phi_phi_fu_31789_p4 = data_610_V_read.read();
    } else {
        ap_phi_mux_data_610_V_read744_phi_phi_fu_31789_p4 = ap_phi_reg_pp0_iter0_data_610_V_read744_phi_reg_31785.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_610_V_read744_rewind_phi_fu_19785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_610_V_read744_rewind_phi_fu_19785_p6 = data_610_V_read744_phi_reg_31785.read();
    } else {
        ap_phi_mux_data_610_V_read744_rewind_phi_fu_19785_p6 = data_610_V_read744_rewind_reg_19781.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_611_V_read745_phi_phi_fu_31802_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_611_V_read745_phi_phi_fu_31802_p4 = ap_phi_mux_data_611_V_read745_rewind_phi_fu_19799_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_611_V_read745_phi_phi_fu_31802_p4 = data_611_V_read.read();
    } else {
        ap_phi_mux_data_611_V_read745_phi_phi_fu_31802_p4 = ap_phi_reg_pp0_iter0_data_611_V_read745_phi_reg_31798.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_611_V_read745_rewind_phi_fu_19799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_611_V_read745_rewind_phi_fu_19799_p6 = data_611_V_read745_phi_reg_31798.read();
    } else {
        ap_phi_mux_data_611_V_read745_rewind_phi_fu_19799_p6 = data_611_V_read745_rewind_reg_19795.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_612_V_read746_phi_phi_fu_31815_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_612_V_read746_phi_phi_fu_31815_p4 = ap_phi_mux_data_612_V_read746_rewind_phi_fu_19813_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_612_V_read746_phi_phi_fu_31815_p4 = data_612_V_read.read();
    } else {
        ap_phi_mux_data_612_V_read746_phi_phi_fu_31815_p4 = ap_phi_reg_pp0_iter0_data_612_V_read746_phi_reg_31811.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_612_V_read746_rewind_phi_fu_19813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_612_V_read746_rewind_phi_fu_19813_p6 = data_612_V_read746_phi_reg_31811.read();
    } else {
        ap_phi_mux_data_612_V_read746_rewind_phi_fu_19813_p6 = data_612_V_read746_rewind_reg_19809.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_613_V_read747_phi_phi_fu_31828_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_613_V_read747_phi_phi_fu_31828_p4 = ap_phi_mux_data_613_V_read747_rewind_phi_fu_19827_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_613_V_read747_phi_phi_fu_31828_p4 = data_613_V_read.read();
    } else {
        ap_phi_mux_data_613_V_read747_phi_phi_fu_31828_p4 = ap_phi_reg_pp0_iter0_data_613_V_read747_phi_reg_31824.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_613_V_read747_rewind_phi_fu_19827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_613_V_read747_rewind_phi_fu_19827_p6 = data_613_V_read747_phi_reg_31824.read();
    } else {
        ap_phi_mux_data_613_V_read747_rewind_phi_fu_19827_p6 = data_613_V_read747_rewind_reg_19823.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_614_V_read748_phi_phi_fu_31841_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_614_V_read748_phi_phi_fu_31841_p4 = ap_phi_mux_data_614_V_read748_rewind_phi_fu_19841_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_614_V_read748_phi_phi_fu_31841_p4 = data_614_V_read.read();
    } else {
        ap_phi_mux_data_614_V_read748_phi_phi_fu_31841_p4 = ap_phi_reg_pp0_iter0_data_614_V_read748_phi_reg_31837.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_614_V_read748_rewind_phi_fu_19841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_614_V_read748_rewind_phi_fu_19841_p6 = data_614_V_read748_phi_reg_31837.read();
    } else {
        ap_phi_mux_data_614_V_read748_rewind_phi_fu_19841_p6 = data_614_V_read748_rewind_reg_19837.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_615_V_read749_phi_phi_fu_31854_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_615_V_read749_phi_phi_fu_31854_p4 = ap_phi_mux_data_615_V_read749_rewind_phi_fu_19855_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_615_V_read749_phi_phi_fu_31854_p4 = data_615_V_read.read();
    } else {
        ap_phi_mux_data_615_V_read749_phi_phi_fu_31854_p4 = ap_phi_reg_pp0_iter0_data_615_V_read749_phi_reg_31850.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_615_V_read749_rewind_phi_fu_19855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_615_V_read749_rewind_phi_fu_19855_p6 = data_615_V_read749_phi_reg_31850.read();
    } else {
        ap_phi_mux_data_615_V_read749_rewind_phi_fu_19855_p6 = data_615_V_read749_rewind_reg_19851.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_616_V_read750_phi_phi_fu_31867_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_616_V_read750_phi_phi_fu_31867_p4 = ap_phi_mux_data_616_V_read750_rewind_phi_fu_19869_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_616_V_read750_phi_phi_fu_31867_p4 = data_616_V_read.read();
    } else {
        ap_phi_mux_data_616_V_read750_phi_phi_fu_31867_p4 = ap_phi_reg_pp0_iter0_data_616_V_read750_phi_reg_31863.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_616_V_read750_rewind_phi_fu_19869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_616_V_read750_rewind_phi_fu_19869_p6 = data_616_V_read750_phi_reg_31863.read();
    } else {
        ap_phi_mux_data_616_V_read750_rewind_phi_fu_19869_p6 = data_616_V_read750_rewind_reg_19865.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_617_V_read751_phi_phi_fu_31880_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_617_V_read751_phi_phi_fu_31880_p4 = ap_phi_mux_data_617_V_read751_rewind_phi_fu_19883_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_617_V_read751_phi_phi_fu_31880_p4 = data_617_V_read.read();
    } else {
        ap_phi_mux_data_617_V_read751_phi_phi_fu_31880_p4 = ap_phi_reg_pp0_iter0_data_617_V_read751_phi_reg_31876.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_617_V_read751_rewind_phi_fu_19883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_617_V_read751_rewind_phi_fu_19883_p6 = data_617_V_read751_phi_reg_31876.read();
    } else {
        ap_phi_mux_data_617_V_read751_rewind_phi_fu_19883_p6 = data_617_V_read751_rewind_reg_19879.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_618_V_read752_phi_phi_fu_31893_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_618_V_read752_phi_phi_fu_31893_p4 = ap_phi_mux_data_618_V_read752_rewind_phi_fu_19897_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_618_V_read752_phi_phi_fu_31893_p4 = data_618_V_read.read();
    } else {
        ap_phi_mux_data_618_V_read752_phi_phi_fu_31893_p4 = ap_phi_reg_pp0_iter0_data_618_V_read752_phi_reg_31889.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_618_V_read752_rewind_phi_fu_19897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_618_V_read752_rewind_phi_fu_19897_p6 = data_618_V_read752_phi_reg_31889.read();
    } else {
        ap_phi_mux_data_618_V_read752_rewind_phi_fu_19897_p6 = data_618_V_read752_rewind_reg_19893.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_619_V_read753_phi_phi_fu_31906_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_619_V_read753_phi_phi_fu_31906_p4 = ap_phi_mux_data_619_V_read753_rewind_phi_fu_19911_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_619_V_read753_phi_phi_fu_31906_p4 = data_619_V_read.read();
    } else {
        ap_phi_mux_data_619_V_read753_phi_phi_fu_31906_p4 = ap_phi_reg_pp0_iter0_data_619_V_read753_phi_reg_31902.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_619_V_read753_rewind_phi_fu_19911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_619_V_read753_rewind_phi_fu_19911_p6 = data_619_V_read753_phi_reg_31902.read();
    } else {
        ap_phi_mux_data_619_V_read753_rewind_phi_fu_19911_p6 = data_619_V_read753_rewind_reg_19907.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_61_V_read195_phi_phi_fu_24652_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_61_V_read195_phi_phi_fu_24652_p4 = ap_phi_mux_data_61_V_read195_rewind_phi_fu_12099_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_61_V_read195_phi_phi_fu_24652_p4 = data_61_V_read.read();
    } else {
        ap_phi_mux_data_61_V_read195_phi_phi_fu_24652_p4 = ap_phi_reg_pp0_iter0_data_61_V_read195_phi_reg_24648.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_61_V_read195_rewind_phi_fu_12099_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_61_V_read195_rewind_phi_fu_12099_p6 = data_61_V_read195_phi_reg_24648.read();
    } else {
        ap_phi_mux_data_61_V_read195_rewind_phi_fu_12099_p6 = data_61_V_read195_rewind_reg_12095.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_620_V_read754_phi_phi_fu_31919_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_620_V_read754_phi_phi_fu_31919_p4 = ap_phi_mux_data_620_V_read754_rewind_phi_fu_19925_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_620_V_read754_phi_phi_fu_31919_p4 = data_620_V_read.read();
    } else {
        ap_phi_mux_data_620_V_read754_phi_phi_fu_31919_p4 = ap_phi_reg_pp0_iter0_data_620_V_read754_phi_reg_31915.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_620_V_read754_rewind_phi_fu_19925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_620_V_read754_rewind_phi_fu_19925_p6 = data_620_V_read754_phi_reg_31915.read();
    } else {
        ap_phi_mux_data_620_V_read754_rewind_phi_fu_19925_p6 = data_620_V_read754_rewind_reg_19921.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_621_V_read755_phi_phi_fu_31932_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_621_V_read755_phi_phi_fu_31932_p4 = ap_phi_mux_data_621_V_read755_rewind_phi_fu_19939_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_621_V_read755_phi_phi_fu_31932_p4 = data_621_V_read.read();
    } else {
        ap_phi_mux_data_621_V_read755_phi_phi_fu_31932_p4 = ap_phi_reg_pp0_iter0_data_621_V_read755_phi_reg_31928.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_621_V_read755_rewind_phi_fu_19939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_621_V_read755_rewind_phi_fu_19939_p6 = data_621_V_read755_phi_reg_31928.read();
    } else {
        ap_phi_mux_data_621_V_read755_rewind_phi_fu_19939_p6 = data_621_V_read755_rewind_reg_19935.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_622_V_read756_phi_phi_fu_31945_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_622_V_read756_phi_phi_fu_31945_p4 = ap_phi_mux_data_622_V_read756_rewind_phi_fu_19953_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_622_V_read756_phi_phi_fu_31945_p4 = data_622_V_read.read();
    } else {
        ap_phi_mux_data_622_V_read756_phi_phi_fu_31945_p4 = ap_phi_reg_pp0_iter0_data_622_V_read756_phi_reg_31941.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_622_V_read756_rewind_phi_fu_19953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_622_V_read756_rewind_phi_fu_19953_p6 = data_622_V_read756_phi_reg_31941.read();
    } else {
        ap_phi_mux_data_622_V_read756_rewind_phi_fu_19953_p6 = data_622_V_read756_rewind_reg_19949.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_623_V_read757_phi_phi_fu_31958_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_623_V_read757_phi_phi_fu_31958_p4 = ap_phi_mux_data_623_V_read757_rewind_phi_fu_19967_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_623_V_read757_phi_phi_fu_31958_p4 = data_623_V_read.read();
    } else {
        ap_phi_mux_data_623_V_read757_phi_phi_fu_31958_p4 = ap_phi_reg_pp0_iter0_data_623_V_read757_phi_reg_31954.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_623_V_read757_rewind_phi_fu_19967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_623_V_read757_rewind_phi_fu_19967_p6 = data_623_V_read757_phi_reg_31954.read();
    } else {
        ap_phi_mux_data_623_V_read757_rewind_phi_fu_19967_p6 = data_623_V_read757_rewind_reg_19963.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_624_V_read758_phi_phi_fu_31971_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_624_V_read758_phi_phi_fu_31971_p4 = ap_phi_mux_data_624_V_read758_rewind_phi_fu_19981_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_624_V_read758_phi_phi_fu_31971_p4 = data_624_V_read.read();
    } else {
        ap_phi_mux_data_624_V_read758_phi_phi_fu_31971_p4 = ap_phi_reg_pp0_iter0_data_624_V_read758_phi_reg_31967.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_624_V_read758_rewind_phi_fu_19981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_624_V_read758_rewind_phi_fu_19981_p6 = data_624_V_read758_phi_reg_31967.read();
    } else {
        ap_phi_mux_data_624_V_read758_rewind_phi_fu_19981_p6 = data_624_V_read758_rewind_reg_19977.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_625_V_read759_phi_phi_fu_31984_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_625_V_read759_phi_phi_fu_31984_p4 = ap_phi_mux_data_625_V_read759_rewind_phi_fu_19995_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_625_V_read759_phi_phi_fu_31984_p4 = data_625_V_read.read();
    } else {
        ap_phi_mux_data_625_V_read759_phi_phi_fu_31984_p4 = ap_phi_reg_pp0_iter0_data_625_V_read759_phi_reg_31980.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_625_V_read759_rewind_phi_fu_19995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_625_V_read759_rewind_phi_fu_19995_p6 = data_625_V_read759_phi_reg_31980.read();
    } else {
        ap_phi_mux_data_625_V_read759_rewind_phi_fu_19995_p6 = data_625_V_read759_rewind_reg_19991.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_626_V_read760_phi_phi_fu_31997_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_626_V_read760_phi_phi_fu_31997_p4 = ap_phi_mux_data_626_V_read760_rewind_phi_fu_20009_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_626_V_read760_phi_phi_fu_31997_p4 = data_626_V_read.read();
    } else {
        ap_phi_mux_data_626_V_read760_phi_phi_fu_31997_p4 = ap_phi_reg_pp0_iter0_data_626_V_read760_phi_reg_31993.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_626_V_read760_rewind_phi_fu_20009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_626_V_read760_rewind_phi_fu_20009_p6 = data_626_V_read760_phi_reg_31993.read();
    } else {
        ap_phi_mux_data_626_V_read760_rewind_phi_fu_20009_p6 = data_626_V_read760_rewind_reg_20005.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_627_V_read761_phi_phi_fu_32010_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_627_V_read761_phi_phi_fu_32010_p4 = ap_phi_mux_data_627_V_read761_rewind_phi_fu_20023_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_627_V_read761_phi_phi_fu_32010_p4 = data_627_V_read.read();
    } else {
        ap_phi_mux_data_627_V_read761_phi_phi_fu_32010_p4 = ap_phi_reg_pp0_iter0_data_627_V_read761_phi_reg_32006.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_627_V_read761_rewind_phi_fu_20023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_627_V_read761_rewind_phi_fu_20023_p6 = data_627_V_read761_phi_reg_32006.read();
    } else {
        ap_phi_mux_data_627_V_read761_rewind_phi_fu_20023_p6 = data_627_V_read761_rewind_reg_20019.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_628_V_read762_phi_phi_fu_32023_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_628_V_read762_phi_phi_fu_32023_p4 = ap_phi_mux_data_628_V_read762_rewind_phi_fu_20037_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_628_V_read762_phi_phi_fu_32023_p4 = data_628_V_read.read();
    } else {
        ap_phi_mux_data_628_V_read762_phi_phi_fu_32023_p4 = ap_phi_reg_pp0_iter0_data_628_V_read762_phi_reg_32019.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_628_V_read762_rewind_phi_fu_20037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_628_V_read762_rewind_phi_fu_20037_p6 = data_628_V_read762_phi_reg_32019.read();
    } else {
        ap_phi_mux_data_628_V_read762_rewind_phi_fu_20037_p6 = data_628_V_read762_rewind_reg_20033.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_629_V_read763_phi_phi_fu_32036_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_629_V_read763_phi_phi_fu_32036_p4 = ap_phi_mux_data_629_V_read763_rewind_phi_fu_20051_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_629_V_read763_phi_phi_fu_32036_p4 = data_629_V_read.read();
    } else {
        ap_phi_mux_data_629_V_read763_phi_phi_fu_32036_p4 = ap_phi_reg_pp0_iter0_data_629_V_read763_phi_reg_32032.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_629_V_read763_rewind_phi_fu_20051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_629_V_read763_rewind_phi_fu_20051_p6 = data_629_V_read763_phi_reg_32032.read();
    } else {
        ap_phi_mux_data_629_V_read763_rewind_phi_fu_20051_p6 = data_629_V_read763_rewind_reg_20047.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_62_V_read196_phi_phi_fu_24665_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_62_V_read196_phi_phi_fu_24665_p4 = ap_phi_mux_data_62_V_read196_rewind_phi_fu_12113_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_62_V_read196_phi_phi_fu_24665_p4 = data_62_V_read.read();
    } else {
        ap_phi_mux_data_62_V_read196_phi_phi_fu_24665_p4 = ap_phi_reg_pp0_iter0_data_62_V_read196_phi_reg_24661.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_62_V_read196_rewind_phi_fu_12113_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_62_V_read196_rewind_phi_fu_12113_p6 = data_62_V_read196_phi_reg_24661.read();
    } else {
        ap_phi_mux_data_62_V_read196_rewind_phi_fu_12113_p6 = data_62_V_read196_rewind_reg_12109.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_630_V_read764_phi_phi_fu_32049_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_630_V_read764_phi_phi_fu_32049_p4 = ap_phi_mux_data_630_V_read764_rewind_phi_fu_20065_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_630_V_read764_phi_phi_fu_32049_p4 = data_630_V_read.read();
    } else {
        ap_phi_mux_data_630_V_read764_phi_phi_fu_32049_p4 = ap_phi_reg_pp0_iter0_data_630_V_read764_phi_reg_32045.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_630_V_read764_rewind_phi_fu_20065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_630_V_read764_rewind_phi_fu_20065_p6 = data_630_V_read764_phi_reg_32045.read();
    } else {
        ap_phi_mux_data_630_V_read764_rewind_phi_fu_20065_p6 = data_630_V_read764_rewind_reg_20061.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_631_V_read765_phi_phi_fu_32062_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_631_V_read765_phi_phi_fu_32062_p4 = ap_phi_mux_data_631_V_read765_rewind_phi_fu_20079_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_631_V_read765_phi_phi_fu_32062_p4 = data_631_V_read.read();
    } else {
        ap_phi_mux_data_631_V_read765_phi_phi_fu_32062_p4 = ap_phi_reg_pp0_iter0_data_631_V_read765_phi_reg_32058.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_631_V_read765_rewind_phi_fu_20079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_631_V_read765_rewind_phi_fu_20079_p6 = data_631_V_read765_phi_reg_32058.read();
    } else {
        ap_phi_mux_data_631_V_read765_rewind_phi_fu_20079_p6 = data_631_V_read765_rewind_reg_20075.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_632_V_read766_phi_phi_fu_32075_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_632_V_read766_phi_phi_fu_32075_p4 = ap_phi_mux_data_632_V_read766_rewind_phi_fu_20093_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_632_V_read766_phi_phi_fu_32075_p4 = data_632_V_read.read();
    } else {
        ap_phi_mux_data_632_V_read766_phi_phi_fu_32075_p4 = ap_phi_reg_pp0_iter0_data_632_V_read766_phi_reg_32071.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_632_V_read766_rewind_phi_fu_20093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_632_V_read766_rewind_phi_fu_20093_p6 = data_632_V_read766_phi_reg_32071.read();
    } else {
        ap_phi_mux_data_632_V_read766_rewind_phi_fu_20093_p6 = data_632_V_read766_rewind_reg_20089.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_633_V_read767_phi_phi_fu_32088_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_633_V_read767_phi_phi_fu_32088_p4 = ap_phi_mux_data_633_V_read767_rewind_phi_fu_20107_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_633_V_read767_phi_phi_fu_32088_p4 = data_633_V_read.read();
    } else {
        ap_phi_mux_data_633_V_read767_phi_phi_fu_32088_p4 = ap_phi_reg_pp0_iter0_data_633_V_read767_phi_reg_32084.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_633_V_read767_rewind_phi_fu_20107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_633_V_read767_rewind_phi_fu_20107_p6 = data_633_V_read767_phi_reg_32084.read();
    } else {
        ap_phi_mux_data_633_V_read767_rewind_phi_fu_20107_p6 = data_633_V_read767_rewind_reg_20103.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_634_V_read768_phi_phi_fu_32101_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_634_V_read768_phi_phi_fu_32101_p4 = ap_phi_mux_data_634_V_read768_rewind_phi_fu_20121_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_634_V_read768_phi_phi_fu_32101_p4 = data_634_V_read.read();
    } else {
        ap_phi_mux_data_634_V_read768_phi_phi_fu_32101_p4 = ap_phi_reg_pp0_iter0_data_634_V_read768_phi_reg_32097.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_634_V_read768_rewind_phi_fu_20121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_634_V_read768_rewind_phi_fu_20121_p6 = data_634_V_read768_phi_reg_32097.read();
    } else {
        ap_phi_mux_data_634_V_read768_rewind_phi_fu_20121_p6 = data_634_V_read768_rewind_reg_20117.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_635_V_read769_phi_phi_fu_32114_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_635_V_read769_phi_phi_fu_32114_p4 = ap_phi_mux_data_635_V_read769_rewind_phi_fu_20135_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_635_V_read769_phi_phi_fu_32114_p4 = data_635_V_read.read();
    } else {
        ap_phi_mux_data_635_V_read769_phi_phi_fu_32114_p4 = ap_phi_reg_pp0_iter0_data_635_V_read769_phi_reg_32110.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_635_V_read769_rewind_phi_fu_20135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_635_V_read769_rewind_phi_fu_20135_p6 = data_635_V_read769_phi_reg_32110.read();
    } else {
        ap_phi_mux_data_635_V_read769_rewind_phi_fu_20135_p6 = data_635_V_read769_rewind_reg_20131.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_636_V_read770_phi_phi_fu_32127_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_636_V_read770_phi_phi_fu_32127_p4 = ap_phi_mux_data_636_V_read770_rewind_phi_fu_20149_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_636_V_read770_phi_phi_fu_32127_p4 = data_636_V_read.read();
    } else {
        ap_phi_mux_data_636_V_read770_phi_phi_fu_32127_p4 = ap_phi_reg_pp0_iter0_data_636_V_read770_phi_reg_32123.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_636_V_read770_rewind_phi_fu_20149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_636_V_read770_rewind_phi_fu_20149_p6 = data_636_V_read770_phi_reg_32123.read();
    } else {
        ap_phi_mux_data_636_V_read770_rewind_phi_fu_20149_p6 = data_636_V_read770_rewind_reg_20145.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_637_V_read771_phi_phi_fu_32140_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_637_V_read771_phi_phi_fu_32140_p4 = ap_phi_mux_data_637_V_read771_rewind_phi_fu_20163_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_637_V_read771_phi_phi_fu_32140_p4 = data_637_V_read.read();
    } else {
        ap_phi_mux_data_637_V_read771_phi_phi_fu_32140_p4 = ap_phi_reg_pp0_iter0_data_637_V_read771_phi_reg_32136.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_637_V_read771_rewind_phi_fu_20163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_637_V_read771_rewind_phi_fu_20163_p6 = data_637_V_read771_phi_reg_32136.read();
    } else {
        ap_phi_mux_data_637_V_read771_rewind_phi_fu_20163_p6 = data_637_V_read771_rewind_reg_20159.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_638_V_read772_phi_phi_fu_32153_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_638_V_read772_phi_phi_fu_32153_p4 = ap_phi_mux_data_638_V_read772_rewind_phi_fu_20177_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_638_V_read772_phi_phi_fu_32153_p4 = data_638_V_read.read();
    } else {
        ap_phi_mux_data_638_V_read772_phi_phi_fu_32153_p4 = ap_phi_reg_pp0_iter0_data_638_V_read772_phi_reg_32149.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_638_V_read772_rewind_phi_fu_20177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_638_V_read772_rewind_phi_fu_20177_p6 = data_638_V_read772_phi_reg_32149.read();
    } else {
        ap_phi_mux_data_638_V_read772_rewind_phi_fu_20177_p6 = data_638_V_read772_rewind_reg_20173.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_639_V_read773_phi_phi_fu_32166_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_639_V_read773_phi_phi_fu_32166_p4 = ap_phi_mux_data_639_V_read773_rewind_phi_fu_20191_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_639_V_read773_phi_phi_fu_32166_p4 = data_639_V_read.read();
    } else {
        ap_phi_mux_data_639_V_read773_phi_phi_fu_32166_p4 = ap_phi_reg_pp0_iter0_data_639_V_read773_phi_reg_32162.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_639_V_read773_rewind_phi_fu_20191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_639_V_read773_rewind_phi_fu_20191_p6 = data_639_V_read773_phi_reg_32162.read();
    } else {
        ap_phi_mux_data_639_V_read773_rewind_phi_fu_20191_p6 = data_639_V_read773_rewind_reg_20187.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_63_V_read197_phi_phi_fu_24678_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_63_V_read197_phi_phi_fu_24678_p4 = ap_phi_mux_data_63_V_read197_rewind_phi_fu_12127_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_63_V_read197_phi_phi_fu_24678_p4 = data_63_V_read.read();
    } else {
        ap_phi_mux_data_63_V_read197_phi_phi_fu_24678_p4 = ap_phi_reg_pp0_iter0_data_63_V_read197_phi_reg_24674.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_63_V_read197_rewind_phi_fu_12127_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_63_V_read197_rewind_phi_fu_12127_p6 = data_63_V_read197_phi_reg_24674.read();
    } else {
        ap_phi_mux_data_63_V_read197_rewind_phi_fu_12127_p6 = data_63_V_read197_rewind_reg_12123.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_640_V_read774_phi_phi_fu_32179_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_640_V_read774_phi_phi_fu_32179_p4 = ap_phi_mux_data_640_V_read774_rewind_phi_fu_20205_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_640_V_read774_phi_phi_fu_32179_p4 = data_640_V_read.read();
    } else {
        ap_phi_mux_data_640_V_read774_phi_phi_fu_32179_p4 = ap_phi_reg_pp0_iter0_data_640_V_read774_phi_reg_32175.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_640_V_read774_rewind_phi_fu_20205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_640_V_read774_rewind_phi_fu_20205_p6 = data_640_V_read774_phi_reg_32175.read();
    } else {
        ap_phi_mux_data_640_V_read774_rewind_phi_fu_20205_p6 = data_640_V_read774_rewind_reg_20201.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_641_V_read775_phi_phi_fu_32192_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_641_V_read775_phi_phi_fu_32192_p4 = ap_phi_mux_data_641_V_read775_rewind_phi_fu_20219_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_641_V_read775_phi_phi_fu_32192_p4 = data_641_V_read.read();
    } else {
        ap_phi_mux_data_641_V_read775_phi_phi_fu_32192_p4 = ap_phi_reg_pp0_iter0_data_641_V_read775_phi_reg_32188.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_641_V_read775_rewind_phi_fu_20219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_641_V_read775_rewind_phi_fu_20219_p6 = data_641_V_read775_phi_reg_32188.read();
    } else {
        ap_phi_mux_data_641_V_read775_rewind_phi_fu_20219_p6 = data_641_V_read775_rewind_reg_20215.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_642_V_read776_phi_phi_fu_32205_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_642_V_read776_phi_phi_fu_32205_p4 = ap_phi_mux_data_642_V_read776_rewind_phi_fu_20233_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_642_V_read776_phi_phi_fu_32205_p4 = data_642_V_read.read();
    } else {
        ap_phi_mux_data_642_V_read776_phi_phi_fu_32205_p4 = ap_phi_reg_pp0_iter0_data_642_V_read776_phi_reg_32201.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_642_V_read776_rewind_phi_fu_20233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_642_V_read776_rewind_phi_fu_20233_p6 = data_642_V_read776_phi_reg_32201.read();
    } else {
        ap_phi_mux_data_642_V_read776_rewind_phi_fu_20233_p6 = data_642_V_read776_rewind_reg_20229.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_643_V_read777_phi_phi_fu_32218_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_643_V_read777_phi_phi_fu_32218_p4 = ap_phi_mux_data_643_V_read777_rewind_phi_fu_20247_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_643_V_read777_phi_phi_fu_32218_p4 = data_643_V_read.read();
    } else {
        ap_phi_mux_data_643_V_read777_phi_phi_fu_32218_p4 = ap_phi_reg_pp0_iter0_data_643_V_read777_phi_reg_32214.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_643_V_read777_rewind_phi_fu_20247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_643_V_read777_rewind_phi_fu_20247_p6 = data_643_V_read777_phi_reg_32214.read();
    } else {
        ap_phi_mux_data_643_V_read777_rewind_phi_fu_20247_p6 = data_643_V_read777_rewind_reg_20243.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_644_V_read778_phi_phi_fu_32231_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_644_V_read778_phi_phi_fu_32231_p4 = ap_phi_mux_data_644_V_read778_rewind_phi_fu_20261_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_644_V_read778_phi_phi_fu_32231_p4 = data_644_V_read.read();
    } else {
        ap_phi_mux_data_644_V_read778_phi_phi_fu_32231_p4 = ap_phi_reg_pp0_iter0_data_644_V_read778_phi_reg_32227.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_644_V_read778_rewind_phi_fu_20261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_644_V_read778_rewind_phi_fu_20261_p6 = data_644_V_read778_phi_reg_32227.read();
    } else {
        ap_phi_mux_data_644_V_read778_rewind_phi_fu_20261_p6 = data_644_V_read778_rewind_reg_20257.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_645_V_read779_phi_phi_fu_32244_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_645_V_read779_phi_phi_fu_32244_p4 = ap_phi_mux_data_645_V_read779_rewind_phi_fu_20275_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_645_V_read779_phi_phi_fu_32244_p4 = data_645_V_read.read();
    } else {
        ap_phi_mux_data_645_V_read779_phi_phi_fu_32244_p4 = ap_phi_reg_pp0_iter0_data_645_V_read779_phi_reg_32240.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_645_V_read779_rewind_phi_fu_20275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_645_V_read779_rewind_phi_fu_20275_p6 = data_645_V_read779_phi_reg_32240.read();
    } else {
        ap_phi_mux_data_645_V_read779_rewind_phi_fu_20275_p6 = data_645_V_read779_rewind_reg_20271.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_646_V_read780_phi_phi_fu_32257_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_646_V_read780_phi_phi_fu_32257_p4 = ap_phi_mux_data_646_V_read780_rewind_phi_fu_20289_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_646_V_read780_phi_phi_fu_32257_p4 = data_646_V_read.read();
    } else {
        ap_phi_mux_data_646_V_read780_phi_phi_fu_32257_p4 = ap_phi_reg_pp0_iter0_data_646_V_read780_phi_reg_32253.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_646_V_read780_rewind_phi_fu_20289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_646_V_read780_rewind_phi_fu_20289_p6 = data_646_V_read780_phi_reg_32253.read();
    } else {
        ap_phi_mux_data_646_V_read780_rewind_phi_fu_20289_p6 = data_646_V_read780_rewind_reg_20285.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_647_V_read781_phi_phi_fu_32270_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_647_V_read781_phi_phi_fu_32270_p4 = ap_phi_mux_data_647_V_read781_rewind_phi_fu_20303_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_647_V_read781_phi_phi_fu_32270_p4 = data_647_V_read.read();
    } else {
        ap_phi_mux_data_647_V_read781_phi_phi_fu_32270_p4 = ap_phi_reg_pp0_iter0_data_647_V_read781_phi_reg_32266.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_647_V_read781_rewind_phi_fu_20303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_647_V_read781_rewind_phi_fu_20303_p6 = data_647_V_read781_phi_reg_32266.read();
    } else {
        ap_phi_mux_data_647_V_read781_rewind_phi_fu_20303_p6 = data_647_V_read781_rewind_reg_20299.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_648_V_read782_phi_phi_fu_32283_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_648_V_read782_phi_phi_fu_32283_p4 = ap_phi_mux_data_648_V_read782_rewind_phi_fu_20317_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_648_V_read782_phi_phi_fu_32283_p4 = data_648_V_read.read();
    } else {
        ap_phi_mux_data_648_V_read782_phi_phi_fu_32283_p4 = ap_phi_reg_pp0_iter0_data_648_V_read782_phi_reg_32279.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_648_V_read782_rewind_phi_fu_20317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_648_V_read782_rewind_phi_fu_20317_p6 = data_648_V_read782_phi_reg_32279.read();
    } else {
        ap_phi_mux_data_648_V_read782_rewind_phi_fu_20317_p6 = data_648_V_read782_rewind_reg_20313.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_649_V_read783_phi_phi_fu_32296_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_649_V_read783_phi_phi_fu_32296_p4 = ap_phi_mux_data_649_V_read783_rewind_phi_fu_20331_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_649_V_read783_phi_phi_fu_32296_p4 = data_649_V_read.read();
    } else {
        ap_phi_mux_data_649_V_read783_phi_phi_fu_32296_p4 = ap_phi_reg_pp0_iter0_data_649_V_read783_phi_reg_32292.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_649_V_read783_rewind_phi_fu_20331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_649_V_read783_rewind_phi_fu_20331_p6 = data_649_V_read783_phi_reg_32292.read();
    } else {
        ap_phi_mux_data_649_V_read783_rewind_phi_fu_20331_p6 = data_649_V_read783_rewind_reg_20327.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_64_V_read198_phi_phi_fu_24691_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_64_V_read198_phi_phi_fu_24691_p4 = ap_phi_mux_data_64_V_read198_rewind_phi_fu_12141_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_64_V_read198_phi_phi_fu_24691_p4 = data_64_V_read.read();
    } else {
        ap_phi_mux_data_64_V_read198_phi_phi_fu_24691_p4 = ap_phi_reg_pp0_iter0_data_64_V_read198_phi_reg_24687.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_64_V_read198_rewind_phi_fu_12141_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_64_V_read198_rewind_phi_fu_12141_p6 = data_64_V_read198_phi_reg_24687.read();
    } else {
        ap_phi_mux_data_64_V_read198_rewind_phi_fu_12141_p6 = data_64_V_read198_rewind_reg_12137.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_650_V_read784_phi_phi_fu_32309_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_650_V_read784_phi_phi_fu_32309_p4 = ap_phi_mux_data_650_V_read784_rewind_phi_fu_20345_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_650_V_read784_phi_phi_fu_32309_p4 = data_650_V_read.read();
    } else {
        ap_phi_mux_data_650_V_read784_phi_phi_fu_32309_p4 = ap_phi_reg_pp0_iter0_data_650_V_read784_phi_reg_32305.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_650_V_read784_rewind_phi_fu_20345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_650_V_read784_rewind_phi_fu_20345_p6 = data_650_V_read784_phi_reg_32305.read();
    } else {
        ap_phi_mux_data_650_V_read784_rewind_phi_fu_20345_p6 = data_650_V_read784_rewind_reg_20341.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_651_V_read785_phi_phi_fu_32322_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_651_V_read785_phi_phi_fu_32322_p4 = ap_phi_mux_data_651_V_read785_rewind_phi_fu_20359_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_651_V_read785_phi_phi_fu_32322_p4 = data_651_V_read.read();
    } else {
        ap_phi_mux_data_651_V_read785_phi_phi_fu_32322_p4 = ap_phi_reg_pp0_iter0_data_651_V_read785_phi_reg_32318.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_651_V_read785_rewind_phi_fu_20359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_651_V_read785_rewind_phi_fu_20359_p6 = data_651_V_read785_phi_reg_32318.read();
    } else {
        ap_phi_mux_data_651_V_read785_rewind_phi_fu_20359_p6 = data_651_V_read785_rewind_reg_20355.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_652_V_read786_phi_phi_fu_32335_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_652_V_read786_phi_phi_fu_32335_p4 = ap_phi_mux_data_652_V_read786_rewind_phi_fu_20373_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_652_V_read786_phi_phi_fu_32335_p4 = data_652_V_read.read();
    } else {
        ap_phi_mux_data_652_V_read786_phi_phi_fu_32335_p4 = ap_phi_reg_pp0_iter0_data_652_V_read786_phi_reg_32331.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_652_V_read786_rewind_phi_fu_20373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_652_V_read786_rewind_phi_fu_20373_p6 = data_652_V_read786_phi_reg_32331.read();
    } else {
        ap_phi_mux_data_652_V_read786_rewind_phi_fu_20373_p6 = data_652_V_read786_rewind_reg_20369.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_653_V_read787_phi_phi_fu_32348_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_653_V_read787_phi_phi_fu_32348_p4 = ap_phi_mux_data_653_V_read787_rewind_phi_fu_20387_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_653_V_read787_phi_phi_fu_32348_p4 = data_653_V_read.read();
    } else {
        ap_phi_mux_data_653_V_read787_phi_phi_fu_32348_p4 = ap_phi_reg_pp0_iter0_data_653_V_read787_phi_reg_32344.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_653_V_read787_rewind_phi_fu_20387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_653_V_read787_rewind_phi_fu_20387_p6 = data_653_V_read787_phi_reg_32344.read();
    } else {
        ap_phi_mux_data_653_V_read787_rewind_phi_fu_20387_p6 = data_653_V_read787_rewind_reg_20383.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_654_V_read788_phi_phi_fu_32361_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_654_V_read788_phi_phi_fu_32361_p4 = ap_phi_mux_data_654_V_read788_rewind_phi_fu_20401_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_654_V_read788_phi_phi_fu_32361_p4 = data_654_V_read.read();
    } else {
        ap_phi_mux_data_654_V_read788_phi_phi_fu_32361_p4 = ap_phi_reg_pp0_iter0_data_654_V_read788_phi_reg_32357.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_654_V_read788_rewind_phi_fu_20401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_654_V_read788_rewind_phi_fu_20401_p6 = data_654_V_read788_phi_reg_32357.read();
    } else {
        ap_phi_mux_data_654_V_read788_rewind_phi_fu_20401_p6 = data_654_V_read788_rewind_reg_20397.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_655_V_read789_phi_phi_fu_32374_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_655_V_read789_phi_phi_fu_32374_p4 = ap_phi_mux_data_655_V_read789_rewind_phi_fu_20415_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_655_V_read789_phi_phi_fu_32374_p4 = data_655_V_read.read();
    } else {
        ap_phi_mux_data_655_V_read789_phi_phi_fu_32374_p4 = ap_phi_reg_pp0_iter0_data_655_V_read789_phi_reg_32370.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_655_V_read789_rewind_phi_fu_20415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_655_V_read789_rewind_phi_fu_20415_p6 = data_655_V_read789_phi_reg_32370.read();
    } else {
        ap_phi_mux_data_655_V_read789_rewind_phi_fu_20415_p6 = data_655_V_read789_rewind_reg_20411.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_656_V_read790_phi_phi_fu_32387_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_656_V_read790_phi_phi_fu_32387_p4 = ap_phi_mux_data_656_V_read790_rewind_phi_fu_20429_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_656_V_read790_phi_phi_fu_32387_p4 = data_656_V_read.read();
    } else {
        ap_phi_mux_data_656_V_read790_phi_phi_fu_32387_p4 = ap_phi_reg_pp0_iter0_data_656_V_read790_phi_reg_32383.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_656_V_read790_rewind_phi_fu_20429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_656_V_read790_rewind_phi_fu_20429_p6 = data_656_V_read790_phi_reg_32383.read();
    } else {
        ap_phi_mux_data_656_V_read790_rewind_phi_fu_20429_p6 = data_656_V_read790_rewind_reg_20425.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_657_V_read791_phi_phi_fu_32400_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_657_V_read791_phi_phi_fu_32400_p4 = ap_phi_mux_data_657_V_read791_rewind_phi_fu_20443_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_657_V_read791_phi_phi_fu_32400_p4 = data_657_V_read.read();
    } else {
        ap_phi_mux_data_657_V_read791_phi_phi_fu_32400_p4 = ap_phi_reg_pp0_iter0_data_657_V_read791_phi_reg_32396.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_657_V_read791_rewind_phi_fu_20443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_657_V_read791_rewind_phi_fu_20443_p6 = data_657_V_read791_phi_reg_32396.read();
    } else {
        ap_phi_mux_data_657_V_read791_rewind_phi_fu_20443_p6 = data_657_V_read791_rewind_reg_20439.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_658_V_read792_phi_phi_fu_32413_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_658_V_read792_phi_phi_fu_32413_p4 = ap_phi_mux_data_658_V_read792_rewind_phi_fu_20457_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_658_V_read792_phi_phi_fu_32413_p4 = data_658_V_read.read();
    } else {
        ap_phi_mux_data_658_V_read792_phi_phi_fu_32413_p4 = ap_phi_reg_pp0_iter0_data_658_V_read792_phi_reg_32409.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_658_V_read792_rewind_phi_fu_20457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_658_V_read792_rewind_phi_fu_20457_p6 = data_658_V_read792_phi_reg_32409.read();
    } else {
        ap_phi_mux_data_658_V_read792_rewind_phi_fu_20457_p6 = data_658_V_read792_rewind_reg_20453.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_659_V_read793_phi_phi_fu_32426_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_659_V_read793_phi_phi_fu_32426_p4 = ap_phi_mux_data_659_V_read793_rewind_phi_fu_20471_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_659_V_read793_phi_phi_fu_32426_p4 = data_659_V_read.read();
    } else {
        ap_phi_mux_data_659_V_read793_phi_phi_fu_32426_p4 = ap_phi_reg_pp0_iter0_data_659_V_read793_phi_reg_32422.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_659_V_read793_rewind_phi_fu_20471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_659_V_read793_rewind_phi_fu_20471_p6 = data_659_V_read793_phi_reg_32422.read();
    } else {
        ap_phi_mux_data_659_V_read793_rewind_phi_fu_20471_p6 = data_659_V_read793_rewind_reg_20467.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_65_V_read199_phi_phi_fu_24704_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_65_V_read199_phi_phi_fu_24704_p4 = ap_phi_mux_data_65_V_read199_rewind_phi_fu_12155_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_65_V_read199_phi_phi_fu_24704_p4 = data_65_V_read.read();
    } else {
        ap_phi_mux_data_65_V_read199_phi_phi_fu_24704_p4 = ap_phi_reg_pp0_iter0_data_65_V_read199_phi_reg_24700.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_65_V_read199_rewind_phi_fu_12155_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_65_V_read199_rewind_phi_fu_12155_p6 = data_65_V_read199_phi_reg_24700.read();
    } else {
        ap_phi_mux_data_65_V_read199_rewind_phi_fu_12155_p6 = data_65_V_read199_rewind_reg_12151.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_660_V_read794_phi_phi_fu_32439_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_660_V_read794_phi_phi_fu_32439_p4 = ap_phi_mux_data_660_V_read794_rewind_phi_fu_20485_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_660_V_read794_phi_phi_fu_32439_p4 = data_660_V_read.read();
    } else {
        ap_phi_mux_data_660_V_read794_phi_phi_fu_32439_p4 = ap_phi_reg_pp0_iter0_data_660_V_read794_phi_reg_32435.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_660_V_read794_rewind_phi_fu_20485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_660_V_read794_rewind_phi_fu_20485_p6 = data_660_V_read794_phi_reg_32435.read();
    } else {
        ap_phi_mux_data_660_V_read794_rewind_phi_fu_20485_p6 = data_660_V_read794_rewind_reg_20481.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_661_V_read795_phi_phi_fu_32452_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_661_V_read795_phi_phi_fu_32452_p4 = ap_phi_mux_data_661_V_read795_rewind_phi_fu_20499_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_661_V_read795_phi_phi_fu_32452_p4 = data_661_V_read.read();
    } else {
        ap_phi_mux_data_661_V_read795_phi_phi_fu_32452_p4 = ap_phi_reg_pp0_iter0_data_661_V_read795_phi_reg_32448.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_661_V_read795_rewind_phi_fu_20499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_661_V_read795_rewind_phi_fu_20499_p6 = data_661_V_read795_phi_reg_32448.read();
    } else {
        ap_phi_mux_data_661_V_read795_rewind_phi_fu_20499_p6 = data_661_V_read795_rewind_reg_20495.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_662_V_read796_phi_phi_fu_32465_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_662_V_read796_phi_phi_fu_32465_p4 = ap_phi_mux_data_662_V_read796_rewind_phi_fu_20513_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_662_V_read796_phi_phi_fu_32465_p4 = data_662_V_read.read();
    } else {
        ap_phi_mux_data_662_V_read796_phi_phi_fu_32465_p4 = ap_phi_reg_pp0_iter0_data_662_V_read796_phi_reg_32461.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_662_V_read796_rewind_phi_fu_20513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_662_V_read796_rewind_phi_fu_20513_p6 = data_662_V_read796_phi_reg_32461.read();
    } else {
        ap_phi_mux_data_662_V_read796_rewind_phi_fu_20513_p6 = data_662_V_read796_rewind_reg_20509.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_663_V_read797_phi_phi_fu_32478_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_663_V_read797_phi_phi_fu_32478_p4 = ap_phi_mux_data_663_V_read797_rewind_phi_fu_20527_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_663_V_read797_phi_phi_fu_32478_p4 = data_663_V_read.read();
    } else {
        ap_phi_mux_data_663_V_read797_phi_phi_fu_32478_p4 = ap_phi_reg_pp0_iter0_data_663_V_read797_phi_reg_32474.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_663_V_read797_rewind_phi_fu_20527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_663_V_read797_rewind_phi_fu_20527_p6 = data_663_V_read797_phi_reg_32474.read();
    } else {
        ap_phi_mux_data_663_V_read797_rewind_phi_fu_20527_p6 = data_663_V_read797_rewind_reg_20523.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_664_V_read798_phi_phi_fu_32491_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_664_V_read798_phi_phi_fu_32491_p4 = ap_phi_mux_data_664_V_read798_rewind_phi_fu_20541_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_664_V_read798_phi_phi_fu_32491_p4 = data_664_V_read.read();
    } else {
        ap_phi_mux_data_664_V_read798_phi_phi_fu_32491_p4 = ap_phi_reg_pp0_iter0_data_664_V_read798_phi_reg_32487.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_664_V_read798_rewind_phi_fu_20541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_664_V_read798_rewind_phi_fu_20541_p6 = data_664_V_read798_phi_reg_32487.read();
    } else {
        ap_phi_mux_data_664_V_read798_rewind_phi_fu_20541_p6 = data_664_V_read798_rewind_reg_20537.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_665_V_read799_phi_phi_fu_32504_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_665_V_read799_phi_phi_fu_32504_p4 = ap_phi_mux_data_665_V_read799_rewind_phi_fu_20555_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_665_V_read799_phi_phi_fu_32504_p4 = data_665_V_read.read();
    } else {
        ap_phi_mux_data_665_V_read799_phi_phi_fu_32504_p4 = ap_phi_reg_pp0_iter0_data_665_V_read799_phi_reg_32500.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_665_V_read799_rewind_phi_fu_20555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_665_V_read799_rewind_phi_fu_20555_p6 = data_665_V_read799_phi_reg_32500.read();
    } else {
        ap_phi_mux_data_665_V_read799_rewind_phi_fu_20555_p6 = data_665_V_read799_rewind_reg_20551.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_666_V_read800_phi_phi_fu_32517_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_666_V_read800_phi_phi_fu_32517_p4 = ap_phi_mux_data_666_V_read800_rewind_phi_fu_20569_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_666_V_read800_phi_phi_fu_32517_p4 = data_666_V_read.read();
    } else {
        ap_phi_mux_data_666_V_read800_phi_phi_fu_32517_p4 = ap_phi_reg_pp0_iter0_data_666_V_read800_phi_reg_32513.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_666_V_read800_rewind_phi_fu_20569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_666_V_read800_rewind_phi_fu_20569_p6 = data_666_V_read800_phi_reg_32513.read();
    } else {
        ap_phi_mux_data_666_V_read800_rewind_phi_fu_20569_p6 = data_666_V_read800_rewind_reg_20565.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_667_V_read801_phi_phi_fu_32530_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_667_V_read801_phi_phi_fu_32530_p4 = ap_phi_mux_data_667_V_read801_rewind_phi_fu_20583_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_667_V_read801_phi_phi_fu_32530_p4 = data_667_V_read.read();
    } else {
        ap_phi_mux_data_667_V_read801_phi_phi_fu_32530_p4 = ap_phi_reg_pp0_iter0_data_667_V_read801_phi_reg_32526.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_667_V_read801_rewind_phi_fu_20583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_667_V_read801_rewind_phi_fu_20583_p6 = data_667_V_read801_phi_reg_32526.read();
    } else {
        ap_phi_mux_data_667_V_read801_rewind_phi_fu_20583_p6 = data_667_V_read801_rewind_reg_20579.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_668_V_read802_phi_phi_fu_32543_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_668_V_read802_phi_phi_fu_32543_p4 = ap_phi_mux_data_668_V_read802_rewind_phi_fu_20597_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_668_V_read802_phi_phi_fu_32543_p4 = data_668_V_read.read();
    } else {
        ap_phi_mux_data_668_V_read802_phi_phi_fu_32543_p4 = ap_phi_reg_pp0_iter0_data_668_V_read802_phi_reg_32539.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_668_V_read802_rewind_phi_fu_20597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_668_V_read802_rewind_phi_fu_20597_p6 = data_668_V_read802_phi_reg_32539.read();
    } else {
        ap_phi_mux_data_668_V_read802_rewind_phi_fu_20597_p6 = data_668_V_read802_rewind_reg_20593.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_669_V_read803_phi_phi_fu_32556_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_669_V_read803_phi_phi_fu_32556_p4 = ap_phi_mux_data_669_V_read803_rewind_phi_fu_20611_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_669_V_read803_phi_phi_fu_32556_p4 = data_669_V_read.read();
    } else {
        ap_phi_mux_data_669_V_read803_phi_phi_fu_32556_p4 = ap_phi_reg_pp0_iter0_data_669_V_read803_phi_reg_32552.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_669_V_read803_rewind_phi_fu_20611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_669_V_read803_rewind_phi_fu_20611_p6 = data_669_V_read803_phi_reg_32552.read();
    } else {
        ap_phi_mux_data_669_V_read803_rewind_phi_fu_20611_p6 = data_669_V_read803_rewind_reg_20607.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_66_V_read200_phi_phi_fu_24717_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_66_V_read200_phi_phi_fu_24717_p4 = ap_phi_mux_data_66_V_read200_rewind_phi_fu_12169_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_66_V_read200_phi_phi_fu_24717_p4 = data_66_V_read.read();
    } else {
        ap_phi_mux_data_66_V_read200_phi_phi_fu_24717_p4 = ap_phi_reg_pp0_iter0_data_66_V_read200_phi_reg_24713.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_66_V_read200_rewind_phi_fu_12169_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_66_V_read200_rewind_phi_fu_12169_p6 = data_66_V_read200_phi_reg_24713.read();
    } else {
        ap_phi_mux_data_66_V_read200_rewind_phi_fu_12169_p6 = data_66_V_read200_rewind_reg_12165.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_670_V_read804_phi_phi_fu_32569_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_670_V_read804_phi_phi_fu_32569_p4 = ap_phi_mux_data_670_V_read804_rewind_phi_fu_20625_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_670_V_read804_phi_phi_fu_32569_p4 = data_670_V_read.read();
    } else {
        ap_phi_mux_data_670_V_read804_phi_phi_fu_32569_p4 = ap_phi_reg_pp0_iter0_data_670_V_read804_phi_reg_32565.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_670_V_read804_rewind_phi_fu_20625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_670_V_read804_rewind_phi_fu_20625_p6 = data_670_V_read804_phi_reg_32565.read();
    } else {
        ap_phi_mux_data_670_V_read804_rewind_phi_fu_20625_p6 = data_670_V_read804_rewind_reg_20621.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_671_V_read805_phi_phi_fu_32582_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_671_V_read805_phi_phi_fu_32582_p4 = ap_phi_mux_data_671_V_read805_rewind_phi_fu_20639_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_671_V_read805_phi_phi_fu_32582_p4 = data_671_V_read.read();
    } else {
        ap_phi_mux_data_671_V_read805_phi_phi_fu_32582_p4 = ap_phi_reg_pp0_iter0_data_671_V_read805_phi_reg_32578.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_671_V_read805_rewind_phi_fu_20639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_671_V_read805_rewind_phi_fu_20639_p6 = data_671_V_read805_phi_reg_32578.read();
    } else {
        ap_phi_mux_data_671_V_read805_rewind_phi_fu_20639_p6 = data_671_V_read805_rewind_reg_20635.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_672_V_read806_phi_phi_fu_32595_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_672_V_read806_phi_phi_fu_32595_p4 = ap_phi_mux_data_672_V_read806_rewind_phi_fu_20653_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_672_V_read806_phi_phi_fu_32595_p4 = data_672_V_read.read();
    } else {
        ap_phi_mux_data_672_V_read806_phi_phi_fu_32595_p4 = ap_phi_reg_pp0_iter0_data_672_V_read806_phi_reg_32591.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_672_V_read806_rewind_phi_fu_20653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_672_V_read806_rewind_phi_fu_20653_p6 = data_672_V_read806_phi_reg_32591.read();
    } else {
        ap_phi_mux_data_672_V_read806_rewind_phi_fu_20653_p6 = data_672_V_read806_rewind_reg_20649.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_673_V_read807_phi_phi_fu_32608_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_673_V_read807_phi_phi_fu_32608_p4 = ap_phi_mux_data_673_V_read807_rewind_phi_fu_20667_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_673_V_read807_phi_phi_fu_32608_p4 = data_673_V_read.read();
    } else {
        ap_phi_mux_data_673_V_read807_phi_phi_fu_32608_p4 = ap_phi_reg_pp0_iter0_data_673_V_read807_phi_reg_32604.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_673_V_read807_rewind_phi_fu_20667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_673_V_read807_rewind_phi_fu_20667_p6 = data_673_V_read807_phi_reg_32604.read();
    } else {
        ap_phi_mux_data_673_V_read807_rewind_phi_fu_20667_p6 = data_673_V_read807_rewind_reg_20663.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_674_V_read808_phi_phi_fu_32621_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_674_V_read808_phi_phi_fu_32621_p4 = ap_phi_mux_data_674_V_read808_rewind_phi_fu_20681_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_674_V_read808_phi_phi_fu_32621_p4 = data_674_V_read.read();
    } else {
        ap_phi_mux_data_674_V_read808_phi_phi_fu_32621_p4 = ap_phi_reg_pp0_iter0_data_674_V_read808_phi_reg_32617.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_674_V_read808_rewind_phi_fu_20681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_674_V_read808_rewind_phi_fu_20681_p6 = data_674_V_read808_phi_reg_32617.read();
    } else {
        ap_phi_mux_data_674_V_read808_rewind_phi_fu_20681_p6 = data_674_V_read808_rewind_reg_20677.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_675_V_read809_phi_phi_fu_32634_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_675_V_read809_phi_phi_fu_32634_p4 = ap_phi_mux_data_675_V_read809_rewind_phi_fu_20695_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_675_V_read809_phi_phi_fu_32634_p4 = data_675_V_read.read();
    } else {
        ap_phi_mux_data_675_V_read809_phi_phi_fu_32634_p4 = ap_phi_reg_pp0_iter0_data_675_V_read809_phi_reg_32630.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_675_V_read809_rewind_phi_fu_20695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_675_V_read809_rewind_phi_fu_20695_p6 = data_675_V_read809_phi_reg_32630.read();
    } else {
        ap_phi_mux_data_675_V_read809_rewind_phi_fu_20695_p6 = data_675_V_read809_rewind_reg_20691.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_676_V_read810_phi_phi_fu_32647_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_676_V_read810_phi_phi_fu_32647_p4 = ap_phi_mux_data_676_V_read810_rewind_phi_fu_20709_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_676_V_read810_phi_phi_fu_32647_p4 = data_676_V_read.read();
    } else {
        ap_phi_mux_data_676_V_read810_phi_phi_fu_32647_p4 = ap_phi_reg_pp0_iter0_data_676_V_read810_phi_reg_32643.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_676_V_read810_rewind_phi_fu_20709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_676_V_read810_rewind_phi_fu_20709_p6 = data_676_V_read810_phi_reg_32643.read();
    } else {
        ap_phi_mux_data_676_V_read810_rewind_phi_fu_20709_p6 = data_676_V_read810_rewind_reg_20705.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_677_V_read811_phi_phi_fu_32660_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_677_V_read811_phi_phi_fu_32660_p4 = ap_phi_mux_data_677_V_read811_rewind_phi_fu_20723_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_677_V_read811_phi_phi_fu_32660_p4 = data_677_V_read.read();
    } else {
        ap_phi_mux_data_677_V_read811_phi_phi_fu_32660_p4 = ap_phi_reg_pp0_iter0_data_677_V_read811_phi_reg_32656.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_677_V_read811_rewind_phi_fu_20723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_677_V_read811_rewind_phi_fu_20723_p6 = data_677_V_read811_phi_reg_32656.read();
    } else {
        ap_phi_mux_data_677_V_read811_rewind_phi_fu_20723_p6 = data_677_V_read811_rewind_reg_20719.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_678_V_read812_phi_phi_fu_32673_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_678_V_read812_phi_phi_fu_32673_p4 = ap_phi_mux_data_678_V_read812_rewind_phi_fu_20737_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_678_V_read812_phi_phi_fu_32673_p4 = data_678_V_read.read();
    } else {
        ap_phi_mux_data_678_V_read812_phi_phi_fu_32673_p4 = ap_phi_reg_pp0_iter0_data_678_V_read812_phi_reg_32669.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_678_V_read812_rewind_phi_fu_20737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_678_V_read812_rewind_phi_fu_20737_p6 = data_678_V_read812_phi_reg_32669.read();
    } else {
        ap_phi_mux_data_678_V_read812_rewind_phi_fu_20737_p6 = data_678_V_read812_rewind_reg_20733.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_679_V_read813_phi_phi_fu_32686_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_679_V_read813_phi_phi_fu_32686_p4 = ap_phi_mux_data_679_V_read813_rewind_phi_fu_20751_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_679_V_read813_phi_phi_fu_32686_p4 = data_679_V_read.read();
    } else {
        ap_phi_mux_data_679_V_read813_phi_phi_fu_32686_p4 = ap_phi_reg_pp0_iter0_data_679_V_read813_phi_reg_32682.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_679_V_read813_rewind_phi_fu_20751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_679_V_read813_rewind_phi_fu_20751_p6 = data_679_V_read813_phi_reg_32682.read();
    } else {
        ap_phi_mux_data_679_V_read813_rewind_phi_fu_20751_p6 = data_679_V_read813_rewind_reg_20747.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_67_V_read201_phi_phi_fu_24730_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_67_V_read201_phi_phi_fu_24730_p4 = ap_phi_mux_data_67_V_read201_rewind_phi_fu_12183_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_67_V_read201_phi_phi_fu_24730_p4 = data_67_V_read.read();
    } else {
        ap_phi_mux_data_67_V_read201_phi_phi_fu_24730_p4 = ap_phi_reg_pp0_iter0_data_67_V_read201_phi_reg_24726.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_67_V_read201_rewind_phi_fu_12183_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_67_V_read201_rewind_phi_fu_12183_p6 = data_67_V_read201_phi_reg_24726.read();
    } else {
        ap_phi_mux_data_67_V_read201_rewind_phi_fu_12183_p6 = data_67_V_read201_rewind_reg_12179.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_680_V_read814_phi_phi_fu_32699_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_680_V_read814_phi_phi_fu_32699_p4 = ap_phi_mux_data_680_V_read814_rewind_phi_fu_20765_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_680_V_read814_phi_phi_fu_32699_p4 = data_680_V_read.read();
    } else {
        ap_phi_mux_data_680_V_read814_phi_phi_fu_32699_p4 = ap_phi_reg_pp0_iter0_data_680_V_read814_phi_reg_32695.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_680_V_read814_rewind_phi_fu_20765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_680_V_read814_rewind_phi_fu_20765_p6 = data_680_V_read814_phi_reg_32695.read();
    } else {
        ap_phi_mux_data_680_V_read814_rewind_phi_fu_20765_p6 = data_680_V_read814_rewind_reg_20761.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_681_V_read815_phi_phi_fu_32712_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_681_V_read815_phi_phi_fu_32712_p4 = ap_phi_mux_data_681_V_read815_rewind_phi_fu_20779_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_681_V_read815_phi_phi_fu_32712_p4 = data_681_V_read.read();
    } else {
        ap_phi_mux_data_681_V_read815_phi_phi_fu_32712_p4 = ap_phi_reg_pp0_iter0_data_681_V_read815_phi_reg_32708.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_681_V_read815_rewind_phi_fu_20779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_681_V_read815_rewind_phi_fu_20779_p6 = data_681_V_read815_phi_reg_32708.read();
    } else {
        ap_phi_mux_data_681_V_read815_rewind_phi_fu_20779_p6 = data_681_V_read815_rewind_reg_20775.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_682_V_read816_phi_phi_fu_32725_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_682_V_read816_phi_phi_fu_32725_p4 = ap_phi_mux_data_682_V_read816_rewind_phi_fu_20793_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_682_V_read816_phi_phi_fu_32725_p4 = data_682_V_read.read();
    } else {
        ap_phi_mux_data_682_V_read816_phi_phi_fu_32725_p4 = ap_phi_reg_pp0_iter0_data_682_V_read816_phi_reg_32721.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_682_V_read816_rewind_phi_fu_20793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_682_V_read816_rewind_phi_fu_20793_p6 = data_682_V_read816_phi_reg_32721.read();
    } else {
        ap_phi_mux_data_682_V_read816_rewind_phi_fu_20793_p6 = data_682_V_read816_rewind_reg_20789.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_683_V_read817_phi_phi_fu_32738_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_683_V_read817_phi_phi_fu_32738_p4 = ap_phi_mux_data_683_V_read817_rewind_phi_fu_20807_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_683_V_read817_phi_phi_fu_32738_p4 = data_683_V_read.read();
    } else {
        ap_phi_mux_data_683_V_read817_phi_phi_fu_32738_p4 = ap_phi_reg_pp0_iter0_data_683_V_read817_phi_reg_32734.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_683_V_read817_rewind_phi_fu_20807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_683_V_read817_rewind_phi_fu_20807_p6 = data_683_V_read817_phi_reg_32734.read();
    } else {
        ap_phi_mux_data_683_V_read817_rewind_phi_fu_20807_p6 = data_683_V_read817_rewind_reg_20803.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_684_V_read818_phi_phi_fu_32751_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_684_V_read818_phi_phi_fu_32751_p4 = ap_phi_mux_data_684_V_read818_rewind_phi_fu_20821_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_684_V_read818_phi_phi_fu_32751_p4 = data_684_V_read.read();
    } else {
        ap_phi_mux_data_684_V_read818_phi_phi_fu_32751_p4 = ap_phi_reg_pp0_iter0_data_684_V_read818_phi_reg_32747.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_684_V_read818_rewind_phi_fu_20821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_684_V_read818_rewind_phi_fu_20821_p6 = data_684_V_read818_phi_reg_32747.read();
    } else {
        ap_phi_mux_data_684_V_read818_rewind_phi_fu_20821_p6 = data_684_V_read818_rewind_reg_20817.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_685_V_read819_phi_phi_fu_32764_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_685_V_read819_phi_phi_fu_32764_p4 = ap_phi_mux_data_685_V_read819_rewind_phi_fu_20835_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_685_V_read819_phi_phi_fu_32764_p4 = data_685_V_read.read();
    } else {
        ap_phi_mux_data_685_V_read819_phi_phi_fu_32764_p4 = ap_phi_reg_pp0_iter0_data_685_V_read819_phi_reg_32760.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_685_V_read819_rewind_phi_fu_20835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_685_V_read819_rewind_phi_fu_20835_p6 = data_685_V_read819_phi_reg_32760.read();
    } else {
        ap_phi_mux_data_685_V_read819_rewind_phi_fu_20835_p6 = data_685_V_read819_rewind_reg_20831.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_686_V_read820_phi_phi_fu_32777_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_686_V_read820_phi_phi_fu_32777_p4 = ap_phi_mux_data_686_V_read820_rewind_phi_fu_20849_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_686_V_read820_phi_phi_fu_32777_p4 = data_686_V_read.read();
    } else {
        ap_phi_mux_data_686_V_read820_phi_phi_fu_32777_p4 = ap_phi_reg_pp0_iter0_data_686_V_read820_phi_reg_32773.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_686_V_read820_rewind_phi_fu_20849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_686_V_read820_rewind_phi_fu_20849_p6 = data_686_V_read820_phi_reg_32773.read();
    } else {
        ap_phi_mux_data_686_V_read820_rewind_phi_fu_20849_p6 = data_686_V_read820_rewind_reg_20845.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_687_V_read821_phi_phi_fu_32790_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_687_V_read821_phi_phi_fu_32790_p4 = ap_phi_mux_data_687_V_read821_rewind_phi_fu_20863_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_687_V_read821_phi_phi_fu_32790_p4 = data_687_V_read.read();
    } else {
        ap_phi_mux_data_687_V_read821_phi_phi_fu_32790_p4 = ap_phi_reg_pp0_iter0_data_687_V_read821_phi_reg_32786.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_687_V_read821_rewind_phi_fu_20863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_687_V_read821_rewind_phi_fu_20863_p6 = data_687_V_read821_phi_reg_32786.read();
    } else {
        ap_phi_mux_data_687_V_read821_rewind_phi_fu_20863_p6 = data_687_V_read821_rewind_reg_20859.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_688_V_read822_phi_phi_fu_32803_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_688_V_read822_phi_phi_fu_32803_p4 = ap_phi_mux_data_688_V_read822_rewind_phi_fu_20877_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_688_V_read822_phi_phi_fu_32803_p4 = data_688_V_read.read();
    } else {
        ap_phi_mux_data_688_V_read822_phi_phi_fu_32803_p4 = ap_phi_reg_pp0_iter0_data_688_V_read822_phi_reg_32799.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_688_V_read822_rewind_phi_fu_20877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_688_V_read822_rewind_phi_fu_20877_p6 = data_688_V_read822_phi_reg_32799.read();
    } else {
        ap_phi_mux_data_688_V_read822_rewind_phi_fu_20877_p6 = data_688_V_read822_rewind_reg_20873.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_689_V_read823_phi_phi_fu_32816_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_689_V_read823_phi_phi_fu_32816_p4 = ap_phi_mux_data_689_V_read823_rewind_phi_fu_20891_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_689_V_read823_phi_phi_fu_32816_p4 = data_689_V_read.read();
    } else {
        ap_phi_mux_data_689_V_read823_phi_phi_fu_32816_p4 = ap_phi_reg_pp0_iter0_data_689_V_read823_phi_reg_32812.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_689_V_read823_rewind_phi_fu_20891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_689_V_read823_rewind_phi_fu_20891_p6 = data_689_V_read823_phi_reg_32812.read();
    } else {
        ap_phi_mux_data_689_V_read823_rewind_phi_fu_20891_p6 = data_689_V_read823_rewind_reg_20887.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_68_V_read202_phi_phi_fu_24743_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_68_V_read202_phi_phi_fu_24743_p4 = ap_phi_mux_data_68_V_read202_rewind_phi_fu_12197_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_68_V_read202_phi_phi_fu_24743_p4 = data_68_V_read.read();
    } else {
        ap_phi_mux_data_68_V_read202_phi_phi_fu_24743_p4 = ap_phi_reg_pp0_iter0_data_68_V_read202_phi_reg_24739.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_68_V_read202_rewind_phi_fu_12197_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_68_V_read202_rewind_phi_fu_12197_p6 = data_68_V_read202_phi_reg_24739.read();
    } else {
        ap_phi_mux_data_68_V_read202_rewind_phi_fu_12197_p6 = data_68_V_read202_rewind_reg_12193.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_690_V_read824_phi_phi_fu_32829_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_690_V_read824_phi_phi_fu_32829_p4 = ap_phi_mux_data_690_V_read824_rewind_phi_fu_20905_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_690_V_read824_phi_phi_fu_32829_p4 = data_690_V_read.read();
    } else {
        ap_phi_mux_data_690_V_read824_phi_phi_fu_32829_p4 = ap_phi_reg_pp0_iter0_data_690_V_read824_phi_reg_32825.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_690_V_read824_rewind_phi_fu_20905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_690_V_read824_rewind_phi_fu_20905_p6 = data_690_V_read824_phi_reg_32825.read();
    } else {
        ap_phi_mux_data_690_V_read824_rewind_phi_fu_20905_p6 = data_690_V_read824_rewind_reg_20901.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_691_V_read825_phi_phi_fu_32842_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_691_V_read825_phi_phi_fu_32842_p4 = ap_phi_mux_data_691_V_read825_rewind_phi_fu_20919_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_691_V_read825_phi_phi_fu_32842_p4 = data_691_V_read.read();
    } else {
        ap_phi_mux_data_691_V_read825_phi_phi_fu_32842_p4 = ap_phi_reg_pp0_iter0_data_691_V_read825_phi_reg_32838.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_691_V_read825_rewind_phi_fu_20919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_691_V_read825_rewind_phi_fu_20919_p6 = data_691_V_read825_phi_reg_32838.read();
    } else {
        ap_phi_mux_data_691_V_read825_rewind_phi_fu_20919_p6 = data_691_V_read825_rewind_reg_20915.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_692_V_read826_phi_phi_fu_32855_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_692_V_read826_phi_phi_fu_32855_p4 = ap_phi_mux_data_692_V_read826_rewind_phi_fu_20933_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_692_V_read826_phi_phi_fu_32855_p4 = data_692_V_read.read();
    } else {
        ap_phi_mux_data_692_V_read826_phi_phi_fu_32855_p4 = ap_phi_reg_pp0_iter0_data_692_V_read826_phi_reg_32851.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_692_V_read826_rewind_phi_fu_20933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_692_V_read826_rewind_phi_fu_20933_p6 = data_692_V_read826_phi_reg_32851.read();
    } else {
        ap_phi_mux_data_692_V_read826_rewind_phi_fu_20933_p6 = data_692_V_read826_rewind_reg_20929.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_693_V_read827_phi_phi_fu_32868_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_693_V_read827_phi_phi_fu_32868_p4 = ap_phi_mux_data_693_V_read827_rewind_phi_fu_20947_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_693_V_read827_phi_phi_fu_32868_p4 = data_693_V_read.read();
    } else {
        ap_phi_mux_data_693_V_read827_phi_phi_fu_32868_p4 = ap_phi_reg_pp0_iter0_data_693_V_read827_phi_reg_32864.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_693_V_read827_rewind_phi_fu_20947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_693_V_read827_rewind_phi_fu_20947_p6 = data_693_V_read827_phi_reg_32864.read();
    } else {
        ap_phi_mux_data_693_V_read827_rewind_phi_fu_20947_p6 = data_693_V_read827_rewind_reg_20943.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_694_V_read828_phi_phi_fu_32881_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_694_V_read828_phi_phi_fu_32881_p4 = ap_phi_mux_data_694_V_read828_rewind_phi_fu_20961_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_694_V_read828_phi_phi_fu_32881_p4 = data_694_V_read.read();
    } else {
        ap_phi_mux_data_694_V_read828_phi_phi_fu_32881_p4 = ap_phi_reg_pp0_iter0_data_694_V_read828_phi_reg_32877.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_694_V_read828_rewind_phi_fu_20961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_694_V_read828_rewind_phi_fu_20961_p6 = data_694_V_read828_phi_reg_32877.read();
    } else {
        ap_phi_mux_data_694_V_read828_rewind_phi_fu_20961_p6 = data_694_V_read828_rewind_reg_20957.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_695_V_read829_phi_phi_fu_32894_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_695_V_read829_phi_phi_fu_32894_p4 = ap_phi_mux_data_695_V_read829_rewind_phi_fu_20975_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_695_V_read829_phi_phi_fu_32894_p4 = data_695_V_read.read();
    } else {
        ap_phi_mux_data_695_V_read829_phi_phi_fu_32894_p4 = ap_phi_reg_pp0_iter0_data_695_V_read829_phi_reg_32890.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_695_V_read829_rewind_phi_fu_20975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_695_V_read829_rewind_phi_fu_20975_p6 = data_695_V_read829_phi_reg_32890.read();
    } else {
        ap_phi_mux_data_695_V_read829_rewind_phi_fu_20975_p6 = data_695_V_read829_rewind_reg_20971.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_696_V_read830_phi_phi_fu_32907_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_696_V_read830_phi_phi_fu_32907_p4 = ap_phi_mux_data_696_V_read830_rewind_phi_fu_20989_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_696_V_read830_phi_phi_fu_32907_p4 = data_696_V_read.read();
    } else {
        ap_phi_mux_data_696_V_read830_phi_phi_fu_32907_p4 = ap_phi_reg_pp0_iter0_data_696_V_read830_phi_reg_32903.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_696_V_read830_rewind_phi_fu_20989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_696_V_read830_rewind_phi_fu_20989_p6 = data_696_V_read830_phi_reg_32903.read();
    } else {
        ap_phi_mux_data_696_V_read830_rewind_phi_fu_20989_p6 = data_696_V_read830_rewind_reg_20985.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_697_V_read831_phi_phi_fu_32920_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_697_V_read831_phi_phi_fu_32920_p4 = ap_phi_mux_data_697_V_read831_rewind_phi_fu_21003_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_697_V_read831_phi_phi_fu_32920_p4 = data_697_V_read.read();
    } else {
        ap_phi_mux_data_697_V_read831_phi_phi_fu_32920_p4 = ap_phi_reg_pp0_iter0_data_697_V_read831_phi_reg_32916.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_697_V_read831_rewind_phi_fu_21003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_697_V_read831_rewind_phi_fu_21003_p6 = data_697_V_read831_phi_reg_32916.read();
    } else {
        ap_phi_mux_data_697_V_read831_rewind_phi_fu_21003_p6 = data_697_V_read831_rewind_reg_20999.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_698_V_read832_phi_phi_fu_32933_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_698_V_read832_phi_phi_fu_32933_p4 = ap_phi_mux_data_698_V_read832_rewind_phi_fu_21017_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_698_V_read832_phi_phi_fu_32933_p4 = data_698_V_read.read();
    } else {
        ap_phi_mux_data_698_V_read832_phi_phi_fu_32933_p4 = ap_phi_reg_pp0_iter0_data_698_V_read832_phi_reg_32929.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_698_V_read832_rewind_phi_fu_21017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_698_V_read832_rewind_phi_fu_21017_p6 = data_698_V_read832_phi_reg_32929.read();
    } else {
        ap_phi_mux_data_698_V_read832_rewind_phi_fu_21017_p6 = data_698_V_read832_rewind_reg_21013.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_699_V_read833_phi_phi_fu_32946_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_699_V_read833_phi_phi_fu_32946_p4 = ap_phi_mux_data_699_V_read833_rewind_phi_fu_21031_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_699_V_read833_phi_phi_fu_32946_p4 = data_699_V_read.read();
    } else {
        ap_phi_mux_data_699_V_read833_phi_phi_fu_32946_p4 = ap_phi_reg_pp0_iter0_data_699_V_read833_phi_reg_32942.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_699_V_read833_rewind_phi_fu_21031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_699_V_read833_rewind_phi_fu_21031_p6 = data_699_V_read833_phi_reg_32942.read();
    } else {
        ap_phi_mux_data_699_V_read833_rewind_phi_fu_21031_p6 = data_699_V_read833_rewind_reg_21027.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_69_V_read203_phi_phi_fu_24756_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_69_V_read203_phi_phi_fu_24756_p4 = ap_phi_mux_data_69_V_read203_rewind_phi_fu_12211_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_69_V_read203_phi_phi_fu_24756_p4 = data_69_V_read.read();
    } else {
        ap_phi_mux_data_69_V_read203_phi_phi_fu_24756_p4 = ap_phi_reg_pp0_iter0_data_69_V_read203_phi_reg_24752.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_69_V_read203_rewind_phi_fu_12211_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_69_V_read203_rewind_phi_fu_12211_p6 = data_69_V_read203_phi_reg_24752.read();
    } else {
        ap_phi_mux_data_69_V_read203_rewind_phi_fu_12211_p6 = data_69_V_read203_rewind_reg_12207.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_6_V_read140_phi_phi_fu_23937_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_6_V_read140_phi_phi_fu_23937_p4 = ap_phi_mux_data_6_V_read140_rewind_phi_fu_11329_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_6_V_read140_phi_phi_fu_23937_p4 = data_6_V_read.read();
    } else {
        ap_phi_mux_data_6_V_read140_phi_phi_fu_23937_p4 = ap_phi_reg_pp0_iter0_data_6_V_read140_phi_reg_23933.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_6_V_read140_rewind_phi_fu_11329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_6_V_read140_rewind_phi_fu_11329_p6 = data_6_V_read140_phi_reg_23933.read();
    } else {
        ap_phi_mux_data_6_V_read140_rewind_phi_fu_11329_p6 = data_6_V_read140_rewind_reg_11325.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_700_V_read834_phi_phi_fu_32959_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_700_V_read834_phi_phi_fu_32959_p4 = ap_phi_mux_data_700_V_read834_rewind_phi_fu_21045_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_700_V_read834_phi_phi_fu_32959_p4 = data_700_V_read.read();
    } else {
        ap_phi_mux_data_700_V_read834_phi_phi_fu_32959_p4 = ap_phi_reg_pp0_iter0_data_700_V_read834_phi_reg_32955.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_700_V_read834_rewind_phi_fu_21045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_700_V_read834_rewind_phi_fu_21045_p6 = data_700_V_read834_phi_reg_32955.read();
    } else {
        ap_phi_mux_data_700_V_read834_rewind_phi_fu_21045_p6 = data_700_V_read834_rewind_reg_21041.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_701_V_read835_phi_phi_fu_32972_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_701_V_read835_phi_phi_fu_32972_p4 = ap_phi_mux_data_701_V_read835_rewind_phi_fu_21059_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_701_V_read835_phi_phi_fu_32972_p4 = data_701_V_read.read();
    } else {
        ap_phi_mux_data_701_V_read835_phi_phi_fu_32972_p4 = ap_phi_reg_pp0_iter0_data_701_V_read835_phi_reg_32968.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_701_V_read835_rewind_phi_fu_21059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_701_V_read835_rewind_phi_fu_21059_p6 = data_701_V_read835_phi_reg_32968.read();
    } else {
        ap_phi_mux_data_701_V_read835_rewind_phi_fu_21059_p6 = data_701_V_read835_rewind_reg_21055.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_702_V_read836_phi_phi_fu_32985_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_702_V_read836_phi_phi_fu_32985_p4 = ap_phi_mux_data_702_V_read836_rewind_phi_fu_21073_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_702_V_read836_phi_phi_fu_32985_p4 = data_702_V_read.read();
    } else {
        ap_phi_mux_data_702_V_read836_phi_phi_fu_32985_p4 = ap_phi_reg_pp0_iter0_data_702_V_read836_phi_reg_32981.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_702_V_read836_rewind_phi_fu_21073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_702_V_read836_rewind_phi_fu_21073_p6 = data_702_V_read836_phi_reg_32981.read();
    } else {
        ap_phi_mux_data_702_V_read836_rewind_phi_fu_21073_p6 = data_702_V_read836_rewind_reg_21069.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_703_V_read837_phi_phi_fu_32998_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_703_V_read837_phi_phi_fu_32998_p4 = ap_phi_mux_data_703_V_read837_rewind_phi_fu_21087_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_703_V_read837_phi_phi_fu_32998_p4 = data_703_V_read.read();
    } else {
        ap_phi_mux_data_703_V_read837_phi_phi_fu_32998_p4 = ap_phi_reg_pp0_iter0_data_703_V_read837_phi_reg_32994.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_703_V_read837_rewind_phi_fu_21087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_703_V_read837_rewind_phi_fu_21087_p6 = data_703_V_read837_phi_reg_32994.read();
    } else {
        ap_phi_mux_data_703_V_read837_rewind_phi_fu_21087_p6 = data_703_V_read837_rewind_reg_21083.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_704_V_read838_phi_phi_fu_33011_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_704_V_read838_phi_phi_fu_33011_p4 = ap_phi_mux_data_704_V_read838_rewind_phi_fu_21101_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_704_V_read838_phi_phi_fu_33011_p4 = data_704_V_read.read();
    } else {
        ap_phi_mux_data_704_V_read838_phi_phi_fu_33011_p4 = ap_phi_reg_pp0_iter0_data_704_V_read838_phi_reg_33007.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_704_V_read838_rewind_phi_fu_21101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_704_V_read838_rewind_phi_fu_21101_p6 = data_704_V_read838_phi_reg_33007.read();
    } else {
        ap_phi_mux_data_704_V_read838_rewind_phi_fu_21101_p6 = data_704_V_read838_rewind_reg_21097.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_705_V_read839_phi_phi_fu_33024_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_705_V_read839_phi_phi_fu_33024_p4 = ap_phi_mux_data_705_V_read839_rewind_phi_fu_21115_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_705_V_read839_phi_phi_fu_33024_p4 = data_705_V_read.read();
    } else {
        ap_phi_mux_data_705_V_read839_phi_phi_fu_33024_p4 = ap_phi_reg_pp0_iter0_data_705_V_read839_phi_reg_33020.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_705_V_read839_rewind_phi_fu_21115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_705_V_read839_rewind_phi_fu_21115_p6 = data_705_V_read839_phi_reg_33020.read();
    } else {
        ap_phi_mux_data_705_V_read839_rewind_phi_fu_21115_p6 = data_705_V_read839_rewind_reg_21111.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_706_V_read840_phi_phi_fu_33037_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_706_V_read840_phi_phi_fu_33037_p4 = ap_phi_mux_data_706_V_read840_rewind_phi_fu_21129_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_706_V_read840_phi_phi_fu_33037_p4 = data_706_V_read.read();
    } else {
        ap_phi_mux_data_706_V_read840_phi_phi_fu_33037_p4 = ap_phi_reg_pp0_iter0_data_706_V_read840_phi_reg_33033.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_706_V_read840_rewind_phi_fu_21129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_706_V_read840_rewind_phi_fu_21129_p6 = data_706_V_read840_phi_reg_33033.read();
    } else {
        ap_phi_mux_data_706_V_read840_rewind_phi_fu_21129_p6 = data_706_V_read840_rewind_reg_21125.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_707_V_read841_phi_phi_fu_33050_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_707_V_read841_phi_phi_fu_33050_p4 = ap_phi_mux_data_707_V_read841_rewind_phi_fu_21143_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_707_V_read841_phi_phi_fu_33050_p4 = data_707_V_read.read();
    } else {
        ap_phi_mux_data_707_V_read841_phi_phi_fu_33050_p4 = ap_phi_reg_pp0_iter0_data_707_V_read841_phi_reg_33046.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_707_V_read841_rewind_phi_fu_21143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_707_V_read841_rewind_phi_fu_21143_p6 = data_707_V_read841_phi_reg_33046.read();
    } else {
        ap_phi_mux_data_707_V_read841_rewind_phi_fu_21143_p6 = data_707_V_read841_rewind_reg_21139.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_708_V_read842_phi_phi_fu_33063_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_708_V_read842_phi_phi_fu_33063_p4 = ap_phi_mux_data_708_V_read842_rewind_phi_fu_21157_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_708_V_read842_phi_phi_fu_33063_p4 = data_708_V_read.read();
    } else {
        ap_phi_mux_data_708_V_read842_phi_phi_fu_33063_p4 = ap_phi_reg_pp0_iter0_data_708_V_read842_phi_reg_33059.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_708_V_read842_rewind_phi_fu_21157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_708_V_read842_rewind_phi_fu_21157_p6 = data_708_V_read842_phi_reg_33059.read();
    } else {
        ap_phi_mux_data_708_V_read842_rewind_phi_fu_21157_p6 = data_708_V_read842_rewind_reg_21153.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_709_V_read843_phi_phi_fu_33076_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_709_V_read843_phi_phi_fu_33076_p4 = ap_phi_mux_data_709_V_read843_rewind_phi_fu_21171_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_709_V_read843_phi_phi_fu_33076_p4 = data_709_V_read.read();
    } else {
        ap_phi_mux_data_709_V_read843_phi_phi_fu_33076_p4 = ap_phi_reg_pp0_iter0_data_709_V_read843_phi_reg_33072.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_709_V_read843_rewind_phi_fu_21171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_709_V_read843_rewind_phi_fu_21171_p6 = data_709_V_read843_phi_reg_33072.read();
    } else {
        ap_phi_mux_data_709_V_read843_rewind_phi_fu_21171_p6 = data_709_V_read843_rewind_reg_21167.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_70_V_read204_phi_phi_fu_24769_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_70_V_read204_phi_phi_fu_24769_p4 = ap_phi_mux_data_70_V_read204_rewind_phi_fu_12225_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_70_V_read204_phi_phi_fu_24769_p4 = data_70_V_read.read();
    } else {
        ap_phi_mux_data_70_V_read204_phi_phi_fu_24769_p4 = ap_phi_reg_pp0_iter0_data_70_V_read204_phi_reg_24765.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_70_V_read204_rewind_phi_fu_12225_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_70_V_read204_rewind_phi_fu_12225_p6 = data_70_V_read204_phi_reg_24765.read();
    } else {
        ap_phi_mux_data_70_V_read204_rewind_phi_fu_12225_p6 = data_70_V_read204_rewind_reg_12221.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_710_V_read844_phi_phi_fu_33089_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_710_V_read844_phi_phi_fu_33089_p4 = ap_phi_mux_data_710_V_read844_rewind_phi_fu_21185_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_710_V_read844_phi_phi_fu_33089_p4 = data_710_V_read.read();
    } else {
        ap_phi_mux_data_710_V_read844_phi_phi_fu_33089_p4 = ap_phi_reg_pp0_iter0_data_710_V_read844_phi_reg_33085.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_710_V_read844_rewind_phi_fu_21185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_710_V_read844_rewind_phi_fu_21185_p6 = data_710_V_read844_phi_reg_33085.read();
    } else {
        ap_phi_mux_data_710_V_read844_rewind_phi_fu_21185_p6 = data_710_V_read844_rewind_reg_21181.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_711_V_read845_phi_phi_fu_33102_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_711_V_read845_phi_phi_fu_33102_p4 = ap_phi_mux_data_711_V_read845_rewind_phi_fu_21199_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_711_V_read845_phi_phi_fu_33102_p4 = data_711_V_read.read();
    } else {
        ap_phi_mux_data_711_V_read845_phi_phi_fu_33102_p4 = ap_phi_reg_pp0_iter0_data_711_V_read845_phi_reg_33098.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_711_V_read845_rewind_phi_fu_21199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_711_V_read845_rewind_phi_fu_21199_p6 = data_711_V_read845_phi_reg_33098.read();
    } else {
        ap_phi_mux_data_711_V_read845_rewind_phi_fu_21199_p6 = data_711_V_read845_rewind_reg_21195.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_712_V_read846_phi_phi_fu_33115_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_712_V_read846_phi_phi_fu_33115_p4 = ap_phi_mux_data_712_V_read846_rewind_phi_fu_21213_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_712_V_read846_phi_phi_fu_33115_p4 = data_712_V_read.read();
    } else {
        ap_phi_mux_data_712_V_read846_phi_phi_fu_33115_p4 = ap_phi_reg_pp0_iter0_data_712_V_read846_phi_reg_33111.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_712_V_read846_rewind_phi_fu_21213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_712_V_read846_rewind_phi_fu_21213_p6 = data_712_V_read846_phi_reg_33111.read();
    } else {
        ap_phi_mux_data_712_V_read846_rewind_phi_fu_21213_p6 = data_712_V_read846_rewind_reg_21209.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_713_V_read847_phi_phi_fu_33128_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_713_V_read847_phi_phi_fu_33128_p4 = ap_phi_mux_data_713_V_read847_rewind_phi_fu_21227_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_713_V_read847_phi_phi_fu_33128_p4 = data_713_V_read.read();
    } else {
        ap_phi_mux_data_713_V_read847_phi_phi_fu_33128_p4 = ap_phi_reg_pp0_iter0_data_713_V_read847_phi_reg_33124.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_713_V_read847_rewind_phi_fu_21227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_713_V_read847_rewind_phi_fu_21227_p6 = data_713_V_read847_phi_reg_33124.read();
    } else {
        ap_phi_mux_data_713_V_read847_rewind_phi_fu_21227_p6 = data_713_V_read847_rewind_reg_21223.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_714_V_read848_phi_phi_fu_33141_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_714_V_read848_phi_phi_fu_33141_p4 = ap_phi_mux_data_714_V_read848_rewind_phi_fu_21241_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_714_V_read848_phi_phi_fu_33141_p4 = data_714_V_read.read();
    } else {
        ap_phi_mux_data_714_V_read848_phi_phi_fu_33141_p4 = ap_phi_reg_pp0_iter0_data_714_V_read848_phi_reg_33137.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_714_V_read848_rewind_phi_fu_21241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_714_V_read848_rewind_phi_fu_21241_p6 = data_714_V_read848_phi_reg_33137.read();
    } else {
        ap_phi_mux_data_714_V_read848_rewind_phi_fu_21241_p6 = data_714_V_read848_rewind_reg_21237.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_715_V_read849_phi_phi_fu_33154_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_715_V_read849_phi_phi_fu_33154_p4 = ap_phi_mux_data_715_V_read849_rewind_phi_fu_21255_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_715_V_read849_phi_phi_fu_33154_p4 = data_715_V_read.read();
    } else {
        ap_phi_mux_data_715_V_read849_phi_phi_fu_33154_p4 = ap_phi_reg_pp0_iter0_data_715_V_read849_phi_reg_33150.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_715_V_read849_rewind_phi_fu_21255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_715_V_read849_rewind_phi_fu_21255_p6 = data_715_V_read849_phi_reg_33150.read();
    } else {
        ap_phi_mux_data_715_V_read849_rewind_phi_fu_21255_p6 = data_715_V_read849_rewind_reg_21251.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_716_V_read850_phi_phi_fu_33167_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_716_V_read850_phi_phi_fu_33167_p4 = ap_phi_mux_data_716_V_read850_rewind_phi_fu_21269_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_716_V_read850_phi_phi_fu_33167_p4 = data_716_V_read.read();
    } else {
        ap_phi_mux_data_716_V_read850_phi_phi_fu_33167_p4 = ap_phi_reg_pp0_iter0_data_716_V_read850_phi_reg_33163.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_716_V_read850_rewind_phi_fu_21269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_716_V_read850_rewind_phi_fu_21269_p6 = data_716_V_read850_phi_reg_33163.read();
    } else {
        ap_phi_mux_data_716_V_read850_rewind_phi_fu_21269_p6 = data_716_V_read850_rewind_reg_21265.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_717_V_read851_phi_phi_fu_33180_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_717_V_read851_phi_phi_fu_33180_p4 = ap_phi_mux_data_717_V_read851_rewind_phi_fu_21283_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_717_V_read851_phi_phi_fu_33180_p4 = data_717_V_read.read();
    } else {
        ap_phi_mux_data_717_V_read851_phi_phi_fu_33180_p4 = ap_phi_reg_pp0_iter0_data_717_V_read851_phi_reg_33176.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_717_V_read851_rewind_phi_fu_21283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_717_V_read851_rewind_phi_fu_21283_p6 = data_717_V_read851_phi_reg_33176.read();
    } else {
        ap_phi_mux_data_717_V_read851_rewind_phi_fu_21283_p6 = data_717_V_read851_rewind_reg_21279.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_718_V_read852_phi_phi_fu_33193_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_718_V_read852_phi_phi_fu_33193_p4 = ap_phi_mux_data_718_V_read852_rewind_phi_fu_21297_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_718_V_read852_phi_phi_fu_33193_p4 = data_718_V_read.read();
    } else {
        ap_phi_mux_data_718_V_read852_phi_phi_fu_33193_p4 = ap_phi_reg_pp0_iter0_data_718_V_read852_phi_reg_33189.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_718_V_read852_rewind_phi_fu_21297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_718_V_read852_rewind_phi_fu_21297_p6 = data_718_V_read852_phi_reg_33189.read();
    } else {
        ap_phi_mux_data_718_V_read852_rewind_phi_fu_21297_p6 = data_718_V_read852_rewind_reg_21293.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_719_V_read853_phi_phi_fu_33206_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_719_V_read853_phi_phi_fu_33206_p4 = ap_phi_mux_data_719_V_read853_rewind_phi_fu_21311_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_719_V_read853_phi_phi_fu_33206_p4 = data_719_V_read.read();
    } else {
        ap_phi_mux_data_719_V_read853_phi_phi_fu_33206_p4 = ap_phi_reg_pp0_iter0_data_719_V_read853_phi_reg_33202.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_719_V_read853_rewind_phi_fu_21311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_719_V_read853_rewind_phi_fu_21311_p6 = data_719_V_read853_phi_reg_33202.read();
    } else {
        ap_phi_mux_data_719_V_read853_rewind_phi_fu_21311_p6 = data_719_V_read853_rewind_reg_21307.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_71_V_read205_phi_phi_fu_24782_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_71_V_read205_phi_phi_fu_24782_p4 = ap_phi_mux_data_71_V_read205_rewind_phi_fu_12239_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_71_V_read205_phi_phi_fu_24782_p4 = data_71_V_read.read();
    } else {
        ap_phi_mux_data_71_V_read205_phi_phi_fu_24782_p4 = ap_phi_reg_pp0_iter0_data_71_V_read205_phi_reg_24778.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_71_V_read205_rewind_phi_fu_12239_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_71_V_read205_rewind_phi_fu_12239_p6 = data_71_V_read205_phi_reg_24778.read();
    } else {
        ap_phi_mux_data_71_V_read205_rewind_phi_fu_12239_p6 = data_71_V_read205_rewind_reg_12235.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_720_V_read854_phi_phi_fu_33219_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_720_V_read854_phi_phi_fu_33219_p4 = ap_phi_mux_data_720_V_read854_rewind_phi_fu_21325_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_720_V_read854_phi_phi_fu_33219_p4 = data_720_V_read.read();
    } else {
        ap_phi_mux_data_720_V_read854_phi_phi_fu_33219_p4 = ap_phi_reg_pp0_iter0_data_720_V_read854_phi_reg_33215.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_720_V_read854_rewind_phi_fu_21325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_720_V_read854_rewind_phi_fu_21325_p6 = data_720_V_read854_phi_reg_33215.read();
    } else {
        ap_phi_mux_data_720_V_read854_rewind_phi_fu_21325_p6 = data_720_V_read854_rewind_reg_21321.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_721_V_read855_phi_phi_fu_33232_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_721_V_read855_phi_phi_fu_33232_p4 = ap_phi_mux_data_721_V_read855_rewind_phi_fu_21339_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_721_V_read855_phi_phi_fu_33232_p4 = data_721_V_read.read();
    } else {
        ap_phi_mux_data_721_V_read855_phi_phi_fu_33232_p4 = ap_phi_reg_pp0_iter0_data_721_V_read855_phi_reg_33228.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_721_V_read855_rewind_phi_fu_21339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_721_V_read855_rewind_phi_fu_21339_p6 = data_721_V_read855_phi_reg_33228.read();
    } else {
        ap_phi_mux_data_721_V_read855_rewind_phi_fu_21339_p6 = data_721_V_read855_rewind_reg_21335.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_722_V_read856_phi_phi_fu_33245_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_722_V_read856_phi_phi_fu_33245_p4 = ap_phi_mux_data_722_V_read856_rewind_phi_fu_21353_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_722_V_read856_phi_phi_fu_33245_p4 = data_722_V_read.read();
    } else {
        ap_phi_mux_data_722_V_read856_phi_phi_fu_33245_p4 = ap_phi_reg_pp0_iter0_data_722_V_read856_phi_reg_33241.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_722_V_read856_rewind_phi_fu_21353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_722_V_read856_rewind_phi_fu_21353_p6 = data_722_V_read856_phi_reg_33241.read();
    } else {
        ap_phi_mux_data_722_V_read856_rewind_phi_fu_21353_p6 = data_722_V_read856_rewind_reg_21349.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_723_V_read857_phi_phi_fu_33258_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_723_V_read857_phi_phi_fu_33258_p4 = ap_phi_mux_data_723_V_read857_rewind_phi_fu_21367_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_723_V_read857_phi_phi_fu_33258_p4 = data_723_V_read.read();
    } else {
        ap_phi_mux_data_723_V_read857_phi_phi_fu_33258_p4 = ap_phi_reg_pp0_iter0_data_723_V_read857_phi_reg_33254.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_723_V_read857_rewind_phi_fu_21367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_723_V_read857_rewind_phi_fu_21367_p6 = data_723_V_read857_phi_reg_33254.read();
    } else {
        ap_phi_mux_data_723_V_read857_rewind_phi_fu_21367_p6 = data_723_V_read857_rewind_reg_21363.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_724_V_read858_phi_phi_fu_33271_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_724_V_read858_phi_phi_fu_33271_p4 = ap_phi_mux_data_724_V_read858_rewind_phi_fu_21381_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_724_V_read858_phi_phi_fu_33271_p4 = data_724_V_read.read();
    } else {
        ap_phi_mux_data_724_V_read858_phi_phi_fu_33271_p4 = ap_phi_reg_pp0_iter0_data_724_V_read858_phi_reg_33267.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_724_V_read858_rewind_phi_fu_21381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_724_V_read858_rewind_phi_fu_21381_p6 = data_724_V_read858_phi_reg_33267.read();
    } else {
        ap_phi_mux_data_724_V_read858_rewind_phi_fu_21381_p6 = data_724_V_read858_rewind_reg_21377.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_725_V_read859_phi_phi_fu_33284_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_725_V_read859_phi_phi_fu_33284_p4 = ap_phi_mux_data_725_V_read859_rewind_phi_fu_21395_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_725_V_read859_phi_phi_fu_33284_p4 = data_725_V_read.read();
    } else {
        ap_phi_mux_data_725_V_read859_phi_phi_fu_33284_p4 = ap_phi_reg_pp0_iter0_data_725_V_read859_phi_reg_33280.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_725_V_read859_rewind_phi_fu_21395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_725_V_read859_rewind_phi_fu_21395_p6 = data_725_V_read859_phi_reg_33280.read();
    } else {
        ap_phi_mux_data_725_V_read859_rewind_phi_fu_21395_p6 = data_725_V_read859_rewind_reg_21391.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_726_V_read860_phi_phi_fu_33297_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_726_V_read860_phi_phi_fu_33297_p4 = ap_phi_mux_data_726_V_read860_rewind_phi_fu_21409_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_726_V_read860_phi_phi_fu_33297_p4 = data_726_V_read.read();
    } else {
        ap_phi_mux_data_726_V_read860_phi_phi_fu_33297_p4 = ap_phi_reg_pp0_iter0_data_726_V_read860_phi_reg_33293.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_726_V_read860_rewind_phi_fu_21409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_726_V_read860_rewind_phi_fu_21409_p6 = data_726_V_read860_phi_reg_33293.read();
    } else {
        ap_phi_mux_data_726_V_read860_rewind_phi_fu_21409_p6 = data_726_V_read860_rewind_reg_21405.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_727_V_read861_phi_phi_fu_33310_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_727_V_read861_phi_phi_fu_33310_p4 = ap_phi_mux_data_727_V_read861_rewind_phi_fu_21423_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_727_V_read861_phi_phi_fu_33310_p4 = data_727_V_read.read();
    } else {
        ap_phi_mux_data_727_V_read861_phi_phi_fu_33310_p4 = ap_phi_reg_pp0_iter0_data_727_V_read861_phi_reg_33306.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_727_V_read861_rewind_phi_fu_21423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_727_V_read861_rewind_phi_fu_21423_p6 = data_727_V_read861_phi_reg_33306.read();
    } else {
        ap_phi_mux_data_727_V_read861_rewind_phi_fu_21423_p6 = data_727_V_read861_rewind_reg_21419.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_728_V_read862_phi_phi_fu_33323_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_728_V_read862_phi_phi_fu_33323_p4 = ap_phi_mux_data_728_V_read862_rewind_phi_fu_21437_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_728_V_read862_phi_phi_fu_33323_p4 = data_728_V_read.read();
    } else {
        ap_phi_mux_data_728_V_read862_phi_phi_fu_33323_p4 = ap_phi_reg_pp0_iter0_data_728_V_read862_phi_reg_33319.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_728_V_read862_rewind_phi_fu_21437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_728_V_read862_rewind_phi_fu_21437_p6 = data_728_V_read862_phi_reg_33319.read();
    } else {
        ap_phi_mux_data_728_V_read862_rewind_phi_fu_21437_p6 = data_728_V_read862_rewind_reg_21433.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_729_V_read863_phi_phi_fu_33336_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_729_V_read863_phi_phi_fu_33336_p4 = ap_phi_mux_data_729_V_read863_rewind_phi_fu_21451_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_729_V_read863_phi_phi_fu_33336_p4 = data_729_V_read.read();
    } else {
        ap_phi_mux_data_729_V_read863_phi_phi_fu_33336_p4 = ap_phi_reg_pp0_iter0_data_729_V_read863_phi_reg_33332.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_729_V_read863_rewind_phi_fu_21451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_729_V_read863_rewind_phi_fu_21451_p6 = data_729_V_read863_phi_reg_33332.read();
    } else {
        ap_phi_mux_data_729_V_read863_rewind_phi_fu_21451_p6 = data_729_V_read863_rewind_reg_21447.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_72_V_read206_phi_phi_fu_24795_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_72_V_read206_phi_phi_fu_24795_p4 = ap_phi_mux_data_72_V_read206_rewind_phi_fu_12253_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_72_V_read206_phi_phi_fu_24795_p4 = data_72_V_read.read();
    } else {
        ap_phi_mux_data_72_V_read206_phi_phi_fu_24795_p4 = ap_phi_reg_pp0_iter0_data_72_V_read206_phi_reg_24791.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_72_V_read206_rewind_phi_fu_12253_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_72_V_read206_rewind_phi_fu_12253_p6 = data_72_V_read206_phi_reg_24791.read();
    } else {
        ap_phi_mux_data_72_V_read206_rewind_phi_fu_12253_p6 = data_72_V_read206_rewind_reg_12249.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_730_V_read864_phi_phi_fu_33349_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_730_V_read864_phi_phi_fu_33349_p4 = ap_phi_mux_data_730_V_read864_rewind_phi_fu_21465_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_730_V_read864_phi_phi_fu_33349_p4 = data_730_V_read.read();
    } else {
        ap_phi_mux_data_730_V_read864_phi_phi_fu_33349_p4 = ap_phi_reg_pp0_iter0_data_730_V_read864_phi_reg_33345.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_730_V_read864_rewind_phi_fu_21465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_730_V_read864_rewind_phi_fu_21465_p6 = data_730_V_read864_phi_reg_33345.read();
    } else {
        ap_phi_mux_data_730_V_read864_rewind_phi_fu_21465_p6 = data_730_V_read864_rewind_reg_21461.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_731_V_read865_phi_phi_fu_33362_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_731_V_read865_phi_phi_fu_33362_p4 = ap_phi_mux_data_731_V_read865_rewind_phi_fu_21479_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_731_V_read865_phi_phi_fu_33362_p4 = data_731_V_read.read();
    } else {
        ap_phi_mux_data_731_V_read865_phi_phi_fu_33362_p4 = ap_phi_reg_pp0_iter0_data_731_V_read865_phi_reg_33358.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_731_V_read865_rewind_phi_fu_21479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_731_V_read865_rewind_phi_fu_21479_p6 = data_731_V_read865_phi_reg_33358.read();
    } else {
        ap_phi_mux_data_731_V_read865_rewind_phi_fu_21479_p6 = data_731_V_read865_rewind_reg_21475.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_732_V_read866_phi_phi_fu_33375_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_732_V_read866_phi_phi_fu_33375_p4 = ap_phi_mux_data_732_V_read866_rewind_phi_fu_21493_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_732_V_read866_phi_phi_fu_33375_p4 = data_732_V_read.read();
    } else {
        ap_phi_mux_data_732_V_read866_phi_phi_fu_33375_p4 = ap_phi_reg_pp0_iter0_data_732_V_read866_phi_reg_33371.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_732_V_read866_rewind_phi_fu_21493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_732_V_read866_rewind_phi_fu_21493_p6 = data_732_V_read866_phi_reg_33371.read();
    } else {
        ap_phi_mux_data_732_V_read866_rewind_phi_fu_21493_p6 = data_732_V_read866_rewind_reg_21489.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_733_V_read867_phi_phi_fu_33388_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_733_V_read867_phi_phi_fu_33388_p4 = ap_phi_mux_data_733_V_read867_rewind_phi_fu_21507_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_733_V_read867_phi_phi_fu_33388_p4 = data_733_V_read.read();
    } else {
        ap_phi_mux_data_733_V_read867_phi_phi_fu_33388_p4 = ap_phi_reg_pp0_iter0_data_733_V_read867_phi_reg_33384.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_733_V_read867_rewind_phi_fu_21507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_733_V_read867_rewind_phi_fu_21507_p6 = data_733_V_read867_phi_reg_33384.read();
    } else {
        ap_phi_mux_data_733_V_read867_rewind_phi_fu_21507_p6 = data_733_V_read867_rewind_reg_21503.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_734_V_read868_phi_phi_fu_33401_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_734_V_read868_phi_phi_fu_33401_p4 = ap_phi_mux_data_734_V_read868_rewind_phi_fu_21521_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_734_V_read868_phi_phi_fu_33401_p4 = data_734_V_read.read();
    } else {
        ap_phi_mux_data_734_V_read868_phi_phi_fu_33401_p4 = ap_phi_reg_pp0_iter0_data_734_V_read868_phi_reg_33397.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_734_V_read868_rewind_phi_fu_21521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_734_V_read868_rewind_phi_fu_21521_p6 = data_734_V_read868_phi_reg_33397.read();
    } else {
        ap_phi_mux_data_734_V_read868_rewind_phi_fu_21521_p6 = data_734_V_read868_rewind_reg_21517.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_735_V_read869_phi_phi_fu_33414_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_735_V_read869_phi_phi_fu_33414_p4 = ap_phi_mux_data_735_V_read869_rewind_phi_fu_21535_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_735_V_read869_phi_phi_fu_33414_p4 = data_735_V_read.read();
    } else {
        ap_phi_mux_data_735_V_read869_phi_phi_fu_33414_p4 = ap_phi_reg_pp0_iter0_data_735_V_read869_phi_reg_33410.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_735_V_read869_rewind_phi_fu_21535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_735_V_read869_rewind_phi_fu_21535_p6 = data_735_V_read869_phi_reg_33410.read();
    } else {
        ap_phi_mux_data_735_V_read869_rewind_phi_fu_21535_p6 = data_735_V_read869_rewind_reg_21531.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_736_V_read870_phi_phi_fu_33427_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_736_V_read870_phi_phi_fu_33427_p4 = ap_phi_mux_data_736_V_read870_rewind_phi_fu_21549_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_736_V_read870_phi_phi_fu_33427_p4 = data_736_V_read.read();
    } else {
        ap_phi_mux_data_736_V_read870_phi_phi_fu_33427_p4 = ap_phi_reg_pp0_iter0_data_736_V_read870_phi_reg_33423.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_736_V_read870_rewind_phi_fu_21549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_736_V_read870_rewind_phi_fu_21549_p6 = data_736_V_read870_phi_reg_33423.read();
    } else {
        ap_phi_mux_data_736_V_read870_rewind_phi_fu_21549_p6 = data_736_V_read870_rewind_reg_21545.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_737_V_read871_phi_phi_fu_33440_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_737_V_read871_phi_phi_fu_33440_p4 = ap_phi_mux_data_737_V_read871_rewind_phi_fu_21563_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_737_V_read871_phi_phi_fu_33440_p4 = data_737_V_read.read();
    } else {
        ap_phi_mux_data_737_V_read871_phi_phi_fu_33440_p4 = ap_phi_reg_pp0_iter0_data_737_V_read871_phi_reg_33436.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_737_V_read871_rewind_phi_fu_21563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_737_V_read871_rewind_phi_fu_21563_p6 = data_737_V_read871_phi_reg_33436.read();
    } else {
        ap_phi_mux_data_737_V_read871_rewind_phi_fu_21563_p6 = data_737_V_read871_rewind_reg_21559.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_738_V_read872_phi_phi_fu_33453_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_738_V_read872_phi_phi_fu_33453_p4 = ap_phi_mux_data_738_V_read872_rewind_phi_fu_21577_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_738_V_read872_phi_phi_fu_33453_p4 = data_738_V_read.read();
    } else {
        ap_phi_mux_data_738_V_read872_phi_phi_fu_33453_p4 = ap_phi_reg_pp0_iter0_data_738_V_read872_phi_reg_33449.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_738_V_read872_rewind_phi_fu_21577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_738_V_read872_rewind_phi_fu_21577_p6 = data_738_V_read872_phi_reg_33449.read();
    } else {
        ap_phi_mux_data_738_V_read872_rewind_phi_fu_21577_p6 = data_738_V_read872_rewind_reg_21573.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_739_V_read873_phi_phi_fu_33466_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_739_V_read873_phi_phi_fu_33466_p4 = ap_phi_mux_data_739_V_read873_rewind_phi_fu_21591_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_739_V_read873_phi_phi_fu_33466_p4 = data_739_V_read.read();
    } else {
        ap_phi_mux_data_739_V_read873_phi_phi_fu_33466_p4 = ap_phi_reg_pp0_iter0_data_739_V_read873_phi_reg_33462.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_739_V_read873_rewind_phi_fu_21591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_739_V_read873_rewind_phi_fu_21591_p6 = data_739_V_read873_phi_reg_33462.read();
    } else {
        ap_phi_mux_data_739_V_read873_rewind_phi_fu_21591_p6 = data_739_V_read873_rewind_reg_21587.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_73_V_read207_phi_phi_fu_24808_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_73_V_read207_phi_phi_fu_24808_p4 = ap_phi_mux_data_73_V_read207_rewind_phi_fu_12267_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_73_V_read207_phi_phi_fu_24808_p4 = data_73_V_read.read();
    } else {
        ap_phi_mux_data_73_V_read207_phi_phi_fu_24808_p4 = ap_phi_reg_pp0_iter0_data_73_V_read207_phi_reg_24804.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_73_V_read207_rewind_phi_fu_12267_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_73_V_read207_rewind_phi_fu_12267_p6 = data_73_V_read207_phi_reg_24804.read();
    } else {
        ap_phi_mux_data_73_V_read207_rewind_phi_fu_12267_p6 = data_73_V_read207_rewind_reg_12263.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_740_V_read874_phi_phi_fu_33479_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_740_V_read874_phi_phi_fu_33479_p4 = ap_phi_mux_data_740_V_read874_rewind_phi_fu_21605_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_740_V_read874_phi_phi_fu_33479_p4 = data_740_V_read.read();
    } else {
        ap_phi_mux_data_740_V_read874_phi_phi_fu_33479_p4 = ap_phi_reg_pp0_iter0_data_740_V_read874_phi_reg_33475.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_740_V_read874_rewind_phi_fu_21605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_740_V_read874_rewind_phi_fu_21605_p6 = data_740_V_read874_phi_reg_33475.read();
    } else {
        ap_phi_mux_data_740_V_read874_rewind_phi_fu_21605_p6 = data_740_V_read874_rewind_reg_21601.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_741_V_read875_phi_phi_fu_33492_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_741_V_read875_phi_phi_fu_33492_p4 = ap_phi_mux_data_741_V_read875_rewind_phi_fu_21619_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_741_V_read875_phi_phi_fu_33492_p4 = data_741_V_read.read();
    } else {
        ap_phi_mux_data_741_V_read875_phi_phi_fu_33492_p4 = ap_phi_reg_pp0_iter0_data_741_V_read875_phi_reg_33488.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_741_V_read875_rewind_phi_fu_21619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_741_V_read875_rewind_phi_fu_21619_p6 = data_741_V_read875_phi_reg_33488.read();
    } else {
        ap_phi_mux_data_741_V_read875_rewind_phi_fu_21619_p6 = data_741_V_read875_rewind_reg_21615.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_742_V_read876_phi_phi_fu_33505_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_742_V_read876_phi_phi_fu_33505_p4 = ap_phi_mux_data_742_V_read876_rewind_phi_fu_21633_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_742_V_read876_phi_phi_fu_33505_p4 = data_742_V_read.read();
    } else {
        ap_phi_mux_data_742_V_read876_phi_phi_fu_33505_p4 = ap_phi_reg_pp0_iter0_data_742_V_read876_phi_reg_33501.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_742_V_read876_rewind_phi_fu_21633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_742_V_read876_rewind_phi_fu_21633_p6 = data_742_V_read876_phi_reg_33501.read();
    } else {
        ap_phi_mux_data_742_V_read876_rewind_phi_fu_21633_p6 = data_742_V_read876_rewind_reg_21629.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_743_V_read877_phi_phi_fu_33518_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_743_V_read877_phi_phi_fu_33518_p4 = ap_phi_mux_data_743_V_read877_rewind_phi_fu_21647_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_743_V_read877_phi_phi_fu_33518_p4 = data_743_V_read.read();
    } else {
        ap_phi_mux_data_743_V_read877_phi_phi_fu_33518_p4 = ap_phi_reg_pp0_iter0_data_743_V_read877_phi_reg_33514.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_743_V_read877_rewind_phi_fu_21647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_743_V_read877_rewind_phi_fu_21647_p6 = data_743_V_read877_phi_reg_33514.read();
    } else {
        ap_phi_mux_data_743_V_read877_rewind_phi_fu_21647_p6 = data_743_V_read877_rewind_reg_21643.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_744_V_read878_phi_phi_fu_33531_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_744_V_read878_phi_phi_fu_33531_p4 = ap_phi_mux_data_744_V_read878_rewind_phi_fu_21661_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_744_V_read878_phi_phi_fu_33531_p4 = data_744_V_read.read();
    } else {
        ap_phi_mux_data_744_V_read878_phi_phi_fu_33531_p4 = ap_phi_reg_pp0_iter0_data_744_V_read878_phi_reg_33527.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_744_V_read878_rewind_phi_fu_21661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_744_V_read878_rewind_phi_fu_21661_p6 = data_744_V_read878_phi_reg_33527.read();
    } else {
        ap_phi_mux_data_744_V_read878_rewind_phi_fu_21661_p6 = data_744_V_read878_rewind_reg_21657.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_745_V_read879_phi_phi_fu_33544_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_745_V_read879_phi_phi_fu_33544_p4 = ap_phi_mux_data_745_V_read879_rewind_phi_fu_21675_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_745_V_read879_phi_phi_fu_33544_p4 = data_745_V_read.read();
    } else {
        ap_phi_mux_data_745_V_read879_phi_phi_fu_33544_p4 = ap_phi_reg_pp0_iter0_data_745_V_read879_phi_reg_33540.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_745_V_read879_rewind_phi_fu_21675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_745_V_read879_rewind_phi_fu_21675_p6 = data_745_V_read879_phi_reg_33540.read();
    } else {
        ap_phi_mux_data_745_V_read879_rewind_phi_fu_21675_p6 = data_745_V_read879_rewind_reg_21671.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_746_V_read880_phi_phi_fu_33557_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_746_V_read880_phi_phi_fu_33557_p4 = ap_phi_mux_data_746_V_read880_rewind_phi_fu_21689_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_746_V_read880_phi_phi_fu_33557_p4 = data_746_V_read.read();
    } else {
        ap_phi_mux_data_746_V_read880_phi_phi_fu_33557_p4 = ap_phi_reg_pp0_iter0_data_746_V_read880_phi_reg_33553.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_746_V_read880_rewind_phi_fu_21689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_746_V_read880_rewind_phi_fu_21689_p6 = data_746_V_read880_phi_reg_33553.read();
    } else {
        ap_phi_mux_data_746_V_read880_rewind_phi_fu_21689_p6 = data_746_V_read880_rewind_reg_21685.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_747_V_read881_phi_phi_fu_33570_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_747_V_read881_phi_phi_fu_33570_p4 = ap_phi_mux_data_747_V_read881_rewind_phi_fu_21703_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_747_V_read881_phi_phi_fu_33570_p4 = data_747_V_read.read();
    } else {
        ap_phi_mux_data_747_V_read881_phi_phi_fu_33570_p4 = ap_phi_reg_pp0_iter0_data_747_V_read881_phi_reg_33566.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_747_V_read881_rewind_phi_fu_21703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_747_V_read881_rewind_phi_fu_21703_p6 = data_747_V_read881_phi_reg_33566.read();
    } else {
        ap_phi_mux_data_747_V_read881_rewind_phi_fu_21703_p6 = data_747_V_read881_rewind_reg_21699.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_748_V_read882_phi_phi_fu_33583_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_748_V_read882_phi_phi_fu_33583_p4 = ap_phi_mux_data_748_V_read882_rewind_phi_fu_21717_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_748_V_read882_phi_phi_fu_33583_p4 = data_748_V_read.read();
    } else {
        ap_phi_mux_data_748_V_read882_phi_phi_fu_33583_p4 = ap_phi_reg_pp0_iter0_data_748_V_read882_phi_reg_33579.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_748_V_read882_rewind_phi_fu_21717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_748_V_read882_rewind_phi_fu_21717_p6 = data_748_V_read882_phi_reg_33579.read();
    } else {
        ap_phi_mux_data_748_V_read882_rewind_phi_fu_21717_p6 = data_748_V_read882_rewind_reg_21713.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_749_V_read883_phi_phi_fu_33596_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_749_V_read883_phi_phi_fu_33596_p4 = ap_phi_mux_data_749_V_read883_rewind_phi_fu_21731_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_749_V_read883_phi_phi_fu_33596_p4 = data_749_V_read.read();
    } else {
        ap_phi_mux_data_749_V_read883_phi_phi_fu_33596_p4 = ap_phi_reg_pp0_iter0_data_749_V_read883_phi_reg_33592.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_749_V_read883_rewind_phi_fu_21731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_749_V_read883_rewind_phi_fu_21731_p6 = data_749_V_read883_phi_reg_33592.read();
    } else {
        ap_phi_mux_data_749_V_read883_rewind_phi_fu_21731_p6 = data_749_V_read883_rewind_reg_21727.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_74_V_read208_phi_phi_fu_24821_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_74_V_read208_phi_phi_fu_24821_p4 = ap_phi_mux_data_74_V_read208_rewind_phi_fu_12281_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_74_V_read208_phi_phi_fu_24821_p4 = data_74_V_read.read();
    } else {
        ap_phi_mux_data_74_V_read208_phi_phi_fu_24821_p4 = ap_phi_reg_pp0_iter0_data_74_V_read208_phi_reg_24817.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_74_V_read208_rewind_phi_fu_12281_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_74_V_read208_rewind_phi_fu_12281_p6 = data_74_V_read208_phi_reg_24817.read();
    } else {
        ap_phi_mux_data_74_V_read208_rewind_phi_fu_12281_p6 = data_74_V_read208_rewind_reg_12277.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_750_V_read884_phi_phi_fu_33609_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_750_V_read884_phi_phi_fu_33609_p4 = ap_phi_mux_data_750_V_read884_rewind_phi_fu_21745_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_750_V_read884_phi_phi_fu_33609_p4 = data_750_V_read.read();
    } else {
        ap_phi_mux_data_750_V_read884_phi_phi_fu_33609_p4 = ap_phi_reg_pp0_iter0_data_750_V_read884_phi_reg_33605.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_750_V_read884_rewind_phi_fu_21745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_750_V_read884_rewind_phi_fu_21745_p6 = data_750_V_read884_phi_reg_33605.read();
    } else {
        ap_phi_mux_data_750_V_read884_rewind_phi_fu_21745_p6 = data_750_V_read884_rewind_reg_21741.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_751_V_read885_phi_phi_fu_33622_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_751_V_read885_phi_phi_fu_33622_p4 = ap_phi_mux_data_751_V_read885_rewind_phi_fu_21759_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_751_V_read885_phi_phi_fu_33622_p4 = data_751_V_read.read();
    } else {
        ap_phi_mux_data_751_V_read885_phi_phi_fu_33622_p4 = ap_phi_reg_pp0_iter0_data_751_V_read885_phi_reg_33618.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_751_V_read885_rewind_phi_fu_21759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_751_V_read885_rewind_phi_fu_21759_p6 = data_751_V_read885_phi_reg_33618.read();
    } else {
        ap_phi_mux_data_751_V_read885_rewind_phi_fu_21759_p6 = data_751_V_read885_rewind_reg_21755.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_752_V_read886_phi_phi_fu_33635_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_752_V_read886_phi_phi_fu_33635_p4 = ap_phi_mux_data_752_V_read886_rewind_phi_fu_21773_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_752_V_read886_phi_phi_fu_33635_p4 = data_752_V_read.read();
    } else {
        ap_phi_mux_data_752_V_read886_phi_phi_fu_33635_p4 = ap_phi_reg_pp0_iter0_data_752_V_read886_phi_reg_33631.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_752_V_read886_rewind_phi_fu_21773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_752_V_read886_rewind_phi_fu_21773_p6 = data_752_V_read886_phi_reg_33631.read();
    } else {
        ap_phi_mux_data_752_V_read886_rewind_phi_fu_21773_p6 = data_752_V_read886_rewind_reg_21769.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_753_V_read887_phi_phi_fu_33648_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_753_V_read887_phi_phi_fu_33648_p4 = ap_phi_mux_data_753_V_read887_rewind_phi_fu_21787_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_753_V_read887_phi_phi_fu_33648_p4 = data_753_V_read.read();
    } else {
        ap_phi_mux_data_753_V_read887_phi_phi_fu_33648_p4 = ap_phi_reg_pp0_iter0_data_753_V_read887_phi_reg_33644.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_753_V_read887_rewind_phi_fu_21787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_753_V_read887_rewind_phi_fu_21787_p6 = data_753_V_read887_phi_reg_33644.read();
    } else {
        ap_phi_mux_data_753_V_read887_rewind_phi_fu_21787_p6 = data_753_V_read887_rewind_reg_21783.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_754_V_read888_phi_phi_fu_33661_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_754_V_read888_phi_phi_fu_33661_p4 = ap_phi_mux_data_754_V_read888_rewind_phi_fu_21801_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_754_V_read888_phi_phi_fu_33661_p4 = data_754_V_read.read();
    } else {
        ap_phi_mux_data_754_V_read888_phi_phi_fu_33661_p4 = ap_phi_reg_pp0_iter0_data_754_V_read888_phi_reg_33657.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_754_V_read888_rewind_phi_fu_21801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_754_V_read888_rewind_phi_fu_21801_p6 = data_754_V_read888_phi_reg_33657.read();
    } else {
        ap_phi_mux_data_754_V_read888_rewind_phi_fu_21801_p6 = data_754_V_read888_rewind_reg_21797.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_755_V_read889_phi_phi_fu_33674_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_755_V_read889_phi_phi_fu_33674_p4 = ap_phi_mux_data_755_V_read889_rewind_phi_fu_21815_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_755_V_read889_phi_phi_fu_33674_p4 = data_755_V_read.read();
    } else {
        ap_phi_mux_data_755_V_read889_phi_phi_fu_33674_p4 = ap_phi_reg_pp0_iter0_data_755_V_read889_phi_reg_33670.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_755_V_read889_rewind_phi_fu_21815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_755_V_read889_rewind_phi_fu_21815_p6 = data_755_V_read889_phi_reg_33670.read();
    } else {
        ap_phi_mux_data_755_V_read889_rewind_phi_fu_21815_p6 = data_755_V_read889_rewind_reg_21811.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_756_V_read890_phi_phi_fu_33687_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_756_V_read890_phi_phi_fu_33687_p4 = ap_phi_mux_data_756_V_read890_rewind_phi_fu_21829_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_756_V_read890_phi_phi_fu_33687_p4 = data_756_V_read.read();
    } else {
        ap_phi_mux_data_756_V_read890_phi_phi_fu_33687_p4 = ap_phi_reg_pp0_iter0_data_756_V_read890_phi_reg_33683.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_756_V_read890_rewind_phi_fu_21829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_756_V_read890_rewind_phi_fu_21829_p6 = data_756_V_read890_phi_reg_33683.read();
    } else {
        ap_phi_mux_data_756_V_read890_rewind_phi_fu_21829_p6 = data_756_V_read890_rewind_reg_21825.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_757_V_read891_phi_phi_fu_33700_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_757_V_read891_phi_phi_fu_33700_p4 = ap_phi_mux_data_757_V_read891_rewind_phi_fu_21843_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_757_V_read891_phi_phi_fu_33700_p4 = data_757_V_read.read();
    } else {
        ap_phi_mux_data_757_V_read891_phi_phi_fu_33700_p4 = ap_phi_reg_pp0_iter0_data_757_V_read891_phi_reg_33696.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_757_V_read891_rewind_phi_fu_21843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_757_V_read891_rewind_phi_fu_21843_p6 = data_757_V_read891_phi_reg_33696.read();
    } else {
        ap_phi_mux_data_757_V_read891_rewind_phi_fu_21843_p6 = data_757_V_read891_rewind_reg_21839.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_758_V_read892_phi_phi_fu_33713_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_758_V_read892_phi_phi_fu_33713_p4 = ap_phi_mux_data_758_V_read892_rewind_phi_fu_21857_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_758_V_read892_phi_phi_fu_33713_p4 = data_758_V_read.read();
    } else {
        ap_phi_mux_data_758_V_read892_phi_phi_fu_33713_p4 = ap_phi_reg_pp0_iter0_data_758_V_read892_phi_reg_33709.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_758_V_read892_rewind_phi_fu_21857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_758_V_read892_rewind_phi_fu_21857_p6 = data_758_V_read892_phi_reg_33709.read();
    } else {
        ap_phi_mux_data_758_V_read892_rewind_phi_fu_21857_p6 = data_758_V_read892_rewind_reg_21853.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_759_V_read893_phi_phi_fu_33726_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_759_V_read893_phi_phi_fu_33726_p4 = ap_phi_mux_data_759_V_read893_rewind_phi_fu_21871_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_759_V_read893_phi_phi_fu_33726_p4 = data_759_V_read.read();
    } else {
        ap_phi_mux_data_759_V_read893_phi_phi_fu_33726_p4 = ap_phi_reg_pp0_iter0_data_759_V_read893_phi_reg_33722.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_759_V_read893_rewind_phi_fu_21871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_759_V_read893_rewind_phi_fu_21871_p6 = data_759_V_read893_phi_reg_33722.read();
    } else {
        ap_phi_mux_data_759_V_read893_rewind_phi_fu_21871_p6 = data_759_V_read893_rewind_reg_21867.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_75_V_read209_phi_phi_fu_24834_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_75_V_read209_phi_phi_fu_24834_p4 = ap_phi_mux_data_75_V_read209_rewind_phi_fu_12295_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_75_V_read209_phi_phi_fu_24834_p4 = data_75_V_read.read();
    } else {
        ap_phi_mux_data_75_V_read209_phi_phi_fu_24834_p4 = ap_phi_reg_pp0_iter0_data_75_V_read209_phi_reg_24830.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_75_V_read209_rewind_phi_fu_12295_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_75_V_read209_rewind_phi_fu_12295_p6 = data_75_V_read209_phi_reg_24830.read();
    } else {
        ap_phi_mux_data_75_V_read209_rewind_phi_fu_12295_p6 = data_75_V_read209_rewind_reg_12291.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_760_V_read894_phi_phi_fu_33739_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_760_V_read894_phi_phi_fu_33739_p4 = ap_phi_mux_data_760_V_read894_rewind_phi_fu_21885_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_760_V_read894_phi_phi_fu_33739_p4 = data_760_V_read.read();
    } else {
        ap_phi_mux_data_760_V_read894_phi_phi_fu_33739_p4 = ap_phi_reg_pp0_iter0_data_760_V_read894_phi_reg_33735.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_760_V_read894_rewind_phi_fu_21885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_760_V_read894_rewind_phi_fu_21885_p6 = data_760_V_read894_phi_reg_33735.read();
    } else {
        ap_phi_mux_data_760_V_read894_rewind_phi_fu_21885_p6 = data_760_V_read894_rewind_reg_21881.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_761_V_read895_phi_phi_fu_33752_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_761_V_read895_phi_phi_fu_33752_p4 = ap_phi_mux_data_761_V_read895_rewind_phi_fu_21899_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_761_V_read895_phi_phi_fu_33752_p4 = data_761_V_read.read();
    } else {
        ap_phi_mux_data_761_V_read895_phi_phi_fu_33752_p4 = ap_phi_reg_pp0_iter0_data_761_V_read895_phi_reg_33748.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_761_V_read895_rewind_phi_fu_21899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_761_V_read895_rewind_phi_fu_21899_p6 = data_761_V_read895_phi_reg_33748.read();
    } else {
        ap_phi_mux_data_761_V_read895_rewind_phi_fu_21899_p6 = data_761_V_read895_rewind_reg_21895.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_762_V_read896_phi_phi_fu_33765_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_762_V_read896_phi_phi_fu_33765_p4 = ap_phi_mux_data_762_V_read896_rewind_phi_fu_21913_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_762_V_read896_phi_phi_fu_33765_p4 = data_762_V_read.read();
    } else {
        ap_phi_mux_data_762_V_read896_phi_phi_fu_33765_p4 = ap_phi_reg_pp0_iter0_data_762_V_read896_phi_reg_33761.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_762_V_read896_rewind_phi_fu_21913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_762_V_read896_rewind_phi_fu_21913_p6 = data_762_V_read896_phi_reg_33761.read();
    } else {
        ap_phi_mux_data_762_V_read896_rewind_phi_fu_21913_p6 = data_762_V_read896_rewind_reg_21909.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_763_V_read897_phi_phi_fu_33778_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_763_V_read897_phi_phi_fu_33778_p4 = ap_phi_mux_data_763_V_read897_rewind_phi_fu_21927_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_763_V_read897_phi_phi_fu_33778_p4 = data_763_V_read.read();
    } else {
        ap_phi_mux_data_763_V_read897_phi_phi_fu_33778_p4 = ap_phi_reg_pp0_iter0_data_763_V_read897_phi_reg_33774.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_763_V_read897_rewind_phi_fu_21927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_763_V_read897_rewind_phi_fu_21927_p6 = data_763_V_read897_phi_reg_33774.read();
    } else {
        ap_phi_mux_data_763_V_read897_rewind_phi_fu_21927_p6 = data_763_V_read897_rewind_reg_21923.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_764_V_read898_phi_phi_fu_33791_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_764_V_read898_phi_phi_fu_33791_p4 = ap_phi_mux_data_764_V_read898_rewind_phi_fu_21941_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_764_V_read898_phi_phi_fu_33791_p4 = data_764_V_read.read();
    } else {
        ap_phi_mux_data_764_V_read898_phi_phi_fu_33791_p4 = ap_phi_reg_pp0_iter0_data_764_V_read898_phi_reg_33787.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_764_V_read898_rewind_phi_fu_21941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_764_V_read898_rewind_phi_fu_21941_p6 = data_764_V_read898_phi_reg_33787.read();
    } else {
        ap_phi_mux_data_764_V_read898_rewind_phi_fu_21941_p6 = data_764_V_read898_rewind_reg_21937.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_765_V_read899_phi_phi_fu_33804_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_765_V_read899_phi_phi_fu_33804_p4 = ap_phi_mux_data_765_V_read899_rewind_phi_fu_21955_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_765_V_read899_phi_phi_fu_33804_p4 = data_765_V_read.read();
    } else {
        ap_phi_mux_data_765_V_read899_phi_phi_fu_33804_p4 = ap_phi_reg_pp0_iter0_data_765_V_read899_phi_reg_33800.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_765_V_read899_rewind_phi_fu_21955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_765_V_read899_rewind_phi_fu_21955_p6 = data_765_V_read899_phi_reg_33800.read();
    } else {
        ap_phi_mux_data_765_V_read899_rewind_phi_fu_21955_p6 = data_765_V_read899_rewind_reg_21951.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_766_V_read900_phi_phi_fu_33817_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_766_V_read900_phi_phi_fu_33817_p4 = ap_phi_mux_data_766_V_read900_rewind_phi_fu_21969_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_766_V_read900_phi_phi_fu_33817_p4 = data_766_V_read.read();
    } else {
        ap_phi_mux_data_766_V_read900_phi_phi_fu_33817_p4 = ap_phi_reg_pp0_iter0_data_766_V_read900_phi_reg_33813.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_766_V_read900_rewind_phi_fu_21969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_766_V_read900_rewind_phi_fu_21969_p6 = data_766_V_read900_phi_reg_33813.read();
    } else {
        ap_phi_mux_data_766_V_read900_rewind_phi_fu_21969_p6 = data_766_V_read900_rewind_reg_21965.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_767_V_read901_phi_phi_fu_33830_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_767_V_read901_phi_phi_fu_33830_p4 = ap_phi_mux_data_767_V_read901_rewind_phi_fu_21983_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_767_V_read901_phi_phi_fu_33830_p4 = data_767_V_read.read();
    } else {
        ap_phi_mux_data_767_V_read901_phi_phi_fu_33830_p4 = ap_phi_reg_pp0_iter0_data_767_V_read901_phi_reg_33826.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_767_V_read901_rewind_phi_fu_21983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_767_V_read901_rewind_phi_fu_21983_p6 = data_767_V_read901_phi_reg_33826.read();
    } else {
        ap_phi_mux_data_767_V_read901_rewind_phi_fu_21983_p6 = data_767_V_read901_rewind_reg_21979.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_768_V_read902_phi_phi_fu_33843_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_768_V_read902_phi_phi_fu_33843_p4 = ap_phi_mux_data_768_V_read902_rewind_phi_fu_21997_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_768_V_read902_phi_phi_fu_33843_p4 = data_768_V_read.read();
    } else {
        ap_phi_mux_data_768_V_read902_phi_phi_fu_33843_p4 = ap_phi_reg_pp0_iter0_data_768_V_read902_phi_reg_33839.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_768_V_read902_rewind_phi_fu_21997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_768_V_read902_rewind_phi_fu_21997_p6 = data_768_V_read902_phi_reg_33839.read();
    } else {
        ap_phi_mux_data_768_V_read902_rewind_phi_fu_21997_p6 = data_768_V_read902_rewind_reg_21993.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_769_V_read903_phi_phi_fu_33856_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_769_V_read903_phi_phi_fu_33856_p4 = ap_phi_mux_data_769_V_read903_rewind_phi_fu_22011_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_769_V_read903_phi_phi_fu_33856_p4 = data_769_V_read.read();
    } else {
        ap_phi_mux_data_769_V_read903_phi_phi_fu_33856_p4 = ap_phi_reg_pp0_iter0_data_769_V_read903_phi_reg_33852.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_769_V_read903_rewind_phi_fu_22011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_769_V_read903_rewind_phi_fu_22011_p6 = data_769_V_read903_phi_reg_33852.read();
    } else {
        ap_phi_mux_data_769_V_read903_rewind_phi_fu_22011_p6 = data_769_V_read903_rewind_reg_22007.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_76_V_read210_phi_phi_fu_24847_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_76_V_read210_phi_phi_fu_24847_p4 = ap_phi_mux_data_76_V_read210_rewind_phi_fu_12309_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_76_V_read210_phi_phi_fu_24847_p4 = data_76_V_read.read();
    } else {
        ap_phi_mux_data_76_V_read210_phi_phi_fu_24847_p4 = ap_phi_reg_pp0_iter0_data_76_V_read210_phi_reg_24843.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_76_V_read210_rewind_phi_fu_12309_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_76_V_read210_rewind_phi_fu_12309_p6 = data_76_V_read210_phi_reg_24843.read();
    } else {
        ap_phi_mux_data_76_V_read210_rewind_phi_fu_12309_p6 = data_76_V_read210_rewind_reg_12305.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_770_V_read904_phi_phi_fu_33869_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_770_V_read904_phi_phi_fu_33869_p4 = ap_phi_mux_data_770_V_read904_rewind_phi_fu_22025_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_770_V_read904_phi_phi_fu_33869_p4 = data_770_V_read.read();
    } else {
        ap_phi_mux_data_770_V_read904_phi_phi_fu_33869_p4 = ap_phi_reg_pp0_iter0_data_770_V_read904_phi_reg_33865.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_770_V_read904_rewind_phi_fu_22025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_770_V_read904_rewind_phi_fu_22025_p6 = data_770_V_read904_phi_reg_33865.read();
    } else {
        ap_phi_mux_data_770_V_read904_rewind_phi_fu_22025_p6 = data_770_V_read904_rewind_reg_22021.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_771_V_read905_phi_phi_fu_33882_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_771_V_read905_phi_phi_fu_33882_p4 = ap_phi_mux_data_771_V_read905_rewind_phi_fu_22039_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_771_V_read905_phi_phi_fu_33882_p4 = data_771_V_read.read();
    } else {
        ap_phi_mux_data_771_V_read905_phi_phi_fu_33882_p4 = ap_phi_reg_pp0_iter0_data_771_V_read905_phi_reg_33878.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_771_V_read905_rewind_phi_fu_22039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_771_V_read905_rewind_phi_fu_22039_p6 = data_771_V_read905_phi_reg_33878.read();
    } else {
        ap_phi_mux_data_771_V_read905_rewind_phi_fu_22039_p6 = data_771_V_read905_rewind_reg_22035.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_772_V_read906_phi_phi_fu_33895_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_772_V_read906_phi_phi_fu_33895_p4 = ap_phi_mux_data_772_V_read906_rewind_phi_fu_22053_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_772_V_read906_phi_phi_fu_33895_p4 = data_772_V_read.read();
    } else {
        ap_phi_mux_data_772_V_read906_phi_phi_fu_33895_p4 = ap_phi_reg_pp0_iter0_data_772_V_read906_phi_reg_33891.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_772_V_read906_rewind_phi_fu_22053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_772_V_read906_rewind_phi_fu_22053_p6 = data_772_V_read906_phi_reg_33891.read();
    } else {
        ap_phi_mux_data_772_V_read906_rewind_phi_fu_22053_p6 = data_772_V_read906_rewind_reg_22049.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_773_V_read907_phi_phi_fu_33908_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_773_V_read907_phi_phi_fu_33908_p4 = ap_phi_mux_data_773_V_read907_rewind_phi_fu_22067_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_773_V_read907_phi_phi_fu_33908_p4 = data_773_V_read.read();
    } else {
        ap_phi_mux_data_773_V_read907_phi_phi_fu_33908_p4 = ap_phi_reg_pp0_iter0_data_773_V_read907_phi_reg_33904.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_773_V_read907_rewind_phi_fu_22067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_773_V_read907_rewind_phi_fu_22067_p6 = data_773_V_read907_phi_reg_33904.read();
    } else {
        ap_phi_mux_data_773_V_read907_rewind_phi_fu_22067_p6 = data_773_V_read907_rewind_reg_22063.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_774_V_read908_phi_phi_fu_33921_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_774_V_read908_phi_phi_fu_33921_p4 = ap_phi_mux_data_774_V_read908_rewind_phi_fu_22081_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_774_V_read908_phi_phi_fu_33921_p4 = data_774_V_read.read();
    } else {
        ap_phi_mux_data_774_V_read908_phi_phi_fu_33921_p4 = ap_phi_reg_pp0_iter0_data_774_V_read908_phi_reg_33917.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_774_V_read908_rewind_phi_fu_22081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_774_V_read908_rewind_phi_fu_22081_p6 = data_774_V_read908_phi_reg_33917.read();
    } else {
        ap_phi_mux_data_774_V_read908_rewind_phi_fu_22081_p6 = data_774_V_read908_rewind_reg_22077.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_775_V_read909_phi_phi_fu_33934_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_775_V_read909_phi_phi_fu_33934_p4 = ap_phi_mux_data_775_V_read909_rewind_phi_fu_22095_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_775_V_read909_phi_phi_fu_33934_p4 = data_775_V_read.read();
    } else {
        ap_phi_mux_data_775_V_read909_phi_phi_fu_33934_p4 = ap_phi_reg_pp0_iter0_data_775_V_read909_phi_reg_33930.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_775_V_read909_rewind_phi_fu_22095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_775_V_read909_rewind_phi_fu_22095_p6 = data_775_V_read909_phi_reg_33930.read();
    } else {
        ap_phi_mux_data_775_V_read909_rewind_phi_fu_22095_p6 = data_775_V_read909_rewind_reg_22091.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_776_V_read910_phi_phi_fu_33947_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_776_V_read910_phi_phi_fu_33947_p4 = ap_phi_mux_data_776_V_read910_rewind_phi_fu_22109_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_776_V_read910_phi_phi_fu_33947_p4 = data_776_V_read.read();
    } else {
        ap_phi_mux_data_776_V_read910_phi_phi_fu_33947_p4 = ap_phi_reg_pp0_iter0_data_776_V_read910_phi_reg_33943.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_776_V_read910_rewind_phi_fu_22109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_776_V_read910_rewind_phi_fu_22109_p6 = data_776_V_read910_phi_reg_33943.read();
    } else {
        ap_phi_mux_data_776_V_read910_rewind_phi_fu_22109_p6 = data_776_V_read910_rewind_reg_22105.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_777_V_read911_phi_phi_fu_33960_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_777_V_read911_phi_phi_fu_33960_p4 = ap_phi_mux_data_777_V_read911_rewind_phi_fu_22123_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_777_V_read911_phi_phi_fu_33960_p4 = data_777_V_read.read();
    } else {
        ap_phi_mux_data_777_V_read911_phi_phi_fu_33960_p4 = ap_phi_reg_pp0_iter0_data_777_V_read911_phi_reg_33956.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_777_V_read911_rewind_phi_fu_22123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_777_V_read911_rewind_phi_fu_22123_p6 = data_777_V_read911_phi_reg_33956.read();
    } else {
        ap_phi_mux_data_777_V_read911_rewind_phi_fu_22123_p6 = data_777_V_read911_rewind_reg_22119.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_778_V_read912_phi_phi_fu_33973_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_778_V_read912_phi_phi_fu_33973_p4 = ap_phi_mux_data_778_V_read912_rewind_phi_fu_22137_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_778_V_read912_phi_phi_fu_33973_p4 = data_778_V_read.read();
    } else {
        ap_phi_mux_data_778_V_read912_phi_phi_fu_33973_p4 = ap_phi_reg_pp0_iter0_data_778_V_read912_phi_reg_33969.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_778_V_read912_rewind_phi_fu_22137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_778_V_read912_rewind_phi_fu_22137_p6 = data_778_V_read912_phi_reg_33969.read();
    } else {
        ap_phi_mux_data_778_V_read912_rewind_phi_fu_22137_p6 = data_778_V_read912_rewind_reg_22133.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_779_V_read913_phi_phi_fu_33986_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_779_V_read913_phi_phi_fu_33986_p4 = ap_phi_mux_data_779_V_read913_rewind_phi_fu_22151_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_779_V_read913_phi_phi_fu_33986_p4 = data_779_V_read.read();
    } else {
        ap_phi_mux_data_779_V_read913_phi_phi_fu_33986_p4 = ap_phi_reg_pp0_iter0_data_779_V_read913_phi_reg_33982.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_779_V_read913_rewind_phi_fu_22151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_779_V_read913_rewind_phi_fu_22151_p6 = data_779_V_read913_phi_reg_33982.read();
    } else {
        ap_phi_mux_data_779_V_read913_rewind_phi_fu_22151_p6 = data_779_V_read913_rewind_reg_22147.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_77_V_read211_phi_phi_fu_24860_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_77_V_read211_phi_phi_fu_24860_p4 = ap_phi_mux_data_77_V_read211_rewind_phi_fu_12323_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_77_V_read211_phi_phi_fu_24860_p4 = data_77_V_read.read();
    } else {
        ap_phi_mux_data_77_V_read211_phi_phi_fu_24860_p4 = ap_phi_reg_pp0_iter0_data_77_V_read211_phi_reg_24856.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_77_V_read211_rewind_phi_fu_12323_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_77_V_read211_rewind_phi_fu_12323_p6 = data_77_V_read211_phi_reg_24856.read();
    } else {
        ap_phi_mux_data_77_V_read211_rewind_phi_fu_12323_p6 = data_77_V_read211_rewind_reg_12319.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_780_V_read914_phi_phi_fu_33999_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_780_V_read914_phi_phi_fu_33999_p4 = ap_phi_mux_data_780_V_read914_rewind_phi_fu_22165_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_780_V_read914_phi_phi_fu_33999_p4 = data_780_V_read.read();
    } else {
        ap_phi_mux_data_780_V_read914_phi_phi_fu_33999_p4 = ap_phi_reg_pp0_iter0_data_780_V_read914_phi_reg_33995.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_780_V_read914_rewind_phi_fu_22165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_780_V_read914_rewind_phi_fu_22165_p6 = data_780_V_read914_phi_reg_33995.read();
    } else {
        ap_phi_mux_data_780_V_read914_rewind_phi_fu_22165_p6 = data_780_V_read914_rewind_reg_22161.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_781_V_read915_phi_phi_fu_34012_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_781_V_read915_phi_phi_fu_34012_p4 = ap_phi_mux_data_781_V_read915_rewind_phi_fu_22179_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_781_V_read915_phi_phi_fu_34012_p4 = data_781_V_read.read();
    } else {
        ap_phi_mux_data_781_V_read915_phi_phi_fu_34012_p4 = ap_phi_reg_pp0_iter0_data_781_V_read915_phi_reg_34008.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_781_V_read915_rewind_phi_fu_22179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_781_V_read915_rewind_phi_fu_22179_p6 = data_781_V_read915_phi_reg_34008.read();
    } else {
        ap_phi_mux_data_781_V_read915_rewind_phi_fu_22179_p6 = data_781_V_read915_rewind_reg_22175.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_782_V_read916_phi_phi_fu_34025_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_782_V_read916_phi_phi_fu_34025_p4 = ap_phi_mux_data_782_V_read916_rewind_phi_fu_22193_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_782_V_read916_phi_phi_fu_34025_p4 = data_782_V_read.read();
    } else {
        ap_phi_mux_data_782_V_read916_phi_phi_fu_34025_p4 = ap_phi_reg_pp0_iter0_data_782_V_read916_phi_reg_34021.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_782_V_read916_rewind_phi_fu_22193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_782_V_read916_rewind_phi_fu_22193_p6 = data_782_V_read916_phi_reg_34021.read();
    } else {
        ap_phi_mux_data_782_V_read916_rewind_phi_fu_22193_p6 = data_782_V_read916_rewind_reg_22189.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_783_V_read917_phi_phi_fu_34038_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_783_V_read917_phi_phi_fu_34038_p4 = ap_phi_mux_data_783_V_read917_rewind_phi_fu_22207_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_783_V_read917_phi_phi_fu_34038_p4 = data_783_V_read.read();
    } else {
        ap_phi_mux_data_783_V_read917_phi_phi_fu_34038_p4 = ap_phi_reg_pp0_iter0_data_783_V_read917_phi_reg_34034.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_783_V_read917_rewind_phi_fu_22207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_783_V_read917_rewind_phi_fu_22207_p6 = data_783_V_read917_phi_reg_34034.read();
    } else {
        ap_phi_mux_data_783_V_read917_rewind_phi_fu_22207_p6 = data_783_V_read917_rewind_reg_22203.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_784_V_read918_phi_phi_fu_34051_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_784_V_read918_phi_phi_fu_34051_p4 = ap_phi_mux_data_784_V_read918_rewind_phi_fu_22221_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_784_V_read918_phi_phi_fu_34051_p4 = data_784_V_read.read();
    } else {
        ap_phi_mux_data_784_V_read918_phi_phi_fu_34051_p4 = ap_phi_reg_pp0_iter0_data_784_V_read918_phi_reg_34047.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_784_V_read918_rewind_phi_fu_22221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_784_V_read918_rewind_phi_fu_22221_p6 = data_784_V_read918_phi_reg_34047.read();
    } else {
        ap_phi_mux_data_784_V_read918_rewind_phi_fu_22221_p6 = data_784_V_read918_rewind_reg_22217.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_785_V_read919_phi_phi_fu_34064_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_785_V_read919_phi_phi_fu_34064_p4 = ap_phi_mux_data_785_V_read919_rewind_phi_fu_22235_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_785_V_read919_phi_phi_fu_34064_p4 = data_785_V_read.read();
    } else {
        ap_phi_mux_data_785_V_read919_phi_phi_fu_34064_p4 = ap_phi_reg_pp0_iter0_data_785_V_read919_phi_reg_34060.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_785_V_read919_rewind_phi_fu_22235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_785_V_read919_rewind_phi_fu_22235_p6 = data_785_V_read919_phi_reg_34060.read();
    } else {
        ap_phi_mux_data_785_V_read919_rewind_phi_fu_22235_p6 = data_785_V_read919_rewind_reg_22231.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_786_V_read920_phi_phi_fu_34077_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_786_V_read920_phi_phi_fu_34077_p4 = ap_phi_mux_data_786_V_read920_rewind_phi_fu_22249_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_786_V_read920_phi_phi_fu_34077_p4 = data_786_V_read.read();
    } else {
        ap_phi_mux_data_786_V_read920_phi_phi_fu_34077_p4 = ap_phi_reg_pp0_iter0_data_786_V_read920_phi_reg_34073.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_786_V_read920_rewind_phi_fu_22249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_786_V_read920_rewind_phi_fu_22249_p6 = data_786_V_read920_phi_reg_34073.read();
    } else {
        ap_phi_mux_data_786_V_read920_rewind_phi_fu_22249_p6 = data_786_V_read920_rewind_reg_22245.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_787_V_read921_phi_phi_fu_34090_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_787_V_read921_phi_phi_fu_34090_p4 = ap_phi_mux_data_787_V_read921_rewind_phi_fu_22263_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_787_V_read921_phi_phi_fu_34090_p4 = data_787_V_read.read();
    } else {
        ap_phi_mux_data_787_V_read921_phi_phi_fu_34090_p4 = ap_phi_reg_pp0_iter0_data_787_V_read921_phi_reg_34086.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_787_V_read921_rewind_phi_fu_22263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_787_V_read921_rewind_phi_fu_22263_p6 = data_787_V_read921_phi_reg_34086.read();
    } else {
        ap_phi_mux_data_787_V_read921_rewind_phi_fu_22263_p6 = data_787_V_read921_rewind_reg_22259.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_788_V_read922_phi_phi_fu_34103_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_788_V_read922_phi_phi_fu_34103_p4 = ap_phi_mux_data_788_V_read922_rewind_phi_fu_22277_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_788_V_read922_phi_phi_fu_34103_p4 = data_788_V_read.read();
    } else {
        ap_phi_mux_data_788_V_read922_phi_phi_fu_34103_p4 = ap_phi_reg_pp0_iter0_data_788_V_read922_phi_reg_34099.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_788_V_read922_rewind_phi_fu_22277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_788_V_read922_rewind_phi_fu_22277_p6 = data_788_V_read922_phi_reg_34099.read();
    } else {
        ap_phi_mux_data_788_V_read922_rewind_phi_fu_22277_p6 = data_788_V_read922_rewind_reg_22273.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_789_V_read923_phi_phi_fu_34116_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_789_V_read923_phi_phi_fu_34116_p4 = ap_phi_mux_data_789_V_read923_rewind_phi_fu_22291_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_789_V_read923_phi_phi_fu_34116_p4 = data_789_V_read.read();
    } else {
        ap_phi_mux_data_789_V_read923_phi_phi_fu_34116_p4 = ap_phi_reg_pp0_iter0_data_789_V_read923_phi_reg_34112.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_789_V_read923_rewind_phi_fu_22291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_789_V_read923_rewind_phi_fu_22291_p6 = data_789_V_read923_phi_reg_34112.read();
    } else {
        ap_phi_mux_data_789_V_read923_rewind_phi_fu_22291_p6 = data_789_V_read923_rewind_reg_22287.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_78_V_read212_phi_phi_fu_24873_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_78_V_read212_phi_phi_fu_24873_p4 = ap_phi_mux_data_78_V_read212_rewind_phi_fu_12337_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_78_V_read212_phi_phi_fu_24873_p4 = data_78_V_read.read();
    } else {
        ap_phi_mux_data_78_V_read212_phi_phi_fu_24873_p4 = ap_phi_reg_pp0_iter0_data_78_V_read212_phi_reg_24869.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_78_V_read212_rewind_phi_fu_12337_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_78_V_read212_rewind_phi_fu_12337_p6 = data_78_V_read212_phi_reg_24869.read();
    } else {
        ap_phi_mux_data_78_V_read212_rewind_phi_fu_12337_p6 = data_78_V_read212_rewind_reg_12333.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_790_V_read924_phi_phi_fu_34129_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_790_V_read924_phi_phi_fu_34129_p4 = ap_phi_mux_data_790_V_read924_rewind_phi_fu_22305_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_790_V_read924_phi_phi_fu_34129_p4 = data_790_V_read.read();
    } else {
        ap_phi_mux_data_790_V_read924_phi_phi_fu_34129_p4 = ap_phi_reg_pp0_iter0_data_790_V_read924_phi_reg_34125.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_790_V_read924_rewind_phi_fu_22305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_790_V_read924_rewind_phi_fu_22305_p6 = data_790_V_read924_phi_reg_34125.read();
    } else {
        ap_phi_mux_data_790_V_read924_rewind_phi_fu_22305_p6 = data_790_V_read924_rewind_reg_22301.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_791_V_read925_phi_phi_fu_34142_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_791_V_read925_phi_phi_fu_34142_p4 = ap_phi_mux_data_791_V_read925_rewind_phi_fu_22319_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_791_V_read925_phi_phi_fu_34142_p4 = data_791_V_read.read();
    } else {
        ap_phi_mux_data_791_V_read925_phi_phi_fu_34142_p4 = ap_phi_reg_pp0_iter0_data_791_V_read925_phi_reg_34138.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_791_V_read925_rewind_phi_fu_22319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_791_V_read925_rewind_phi_fu_22319_p6 = data_791_V_read925_phi_reg_34138.read();
    } else {
        ap_phi_mux_data_791_V_read925_rewind_phi_fu_22319_p6 = data_791_V_read925_rewind_reg_22315.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_792_V_read926_phi_phi_fu_34155_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_792_V_read926_phi_phi_fu_34155_p4 = ap_phi_mux_data_792_V_read926_rewind_phi_fu_22333_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_792_V_read926_phi_phi_fu_34155_p4 = data_792_V_read.read();
    } else {
        ap_phi_mux_data_792_V_read926_phi_phi_fu_34155_p4 = ap_phi_reg_pp0_iter0_data_792_V_read926_phi_reg_34151.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_792_V_read926_rewind_phi_fu_22333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_792_V_read926_rewind_phi_fu_22333_p6 = data_792_V_read926_phi_reg_34151.read();
    } else {
        ap_phi_mux_data_792_V_read926_rewind_phi_fu_22333_p6 = data_792_V_read926_rewind_reg_22329.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_793_V_read927_phi_phi_fu_34168_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_793_V_read927_phi_phi_fu_34168_p4 = ap_phi_mux_data_793_V_read927_rewind_phi_fu_22347_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_793_V_read927_phi_phi_fu_34168_p4 = data_793_V_read.read();
    } else {
        ap_phi_mux_data_793_V_read927_phi_phi_fu_34168_p4 = ap_phi_reg_pp0_iter0_data_793_V_read927_phi_reg_34164.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_793_V_read927_rewind_phi_fu_22347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_793_V_read927_rewind_phi_fu_22347_p6 = data_793_V_read927_phi_reg_34164.read();
    } else {
        ap_phi_mux_data_793_V_read927_rewind_phi_fu_22347_p6 = data_793_V_read927_rewind_reg_22343.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_794_V_read928_phi_phi_fu_34181_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_794_V_read928_phi_phi_fu_34181_p4 = ap_phi_mux_data_794_V_read928_rewind_phi_fu_22361_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_794_V_read928_phi_phi_fu_34181_p4 = data_794_V_read.read();
    } else {
        ap_phi_mux_data_794_V_read928_phi_phi_fu_34181_p4 = ap_phi_reg_pp0_iter0_data_794_V_read928_phi_reg_34177.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_794_V_read928_rewind_phi_fu_22361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_794_V_read928_rewind_phi_fu_22361_p6 = data_794_V_read928_phi_reg_34177.read();
    } else {
        ap_phi_mux_data_794_V_read928_rewind_phi_fu_22361_p6 = data_794_V_read928_rewind_reg_22357.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_795_V_read929_phi_phi_fu_34194_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_795_V_read929_phi_phi_fu_34194_p4 = ap_phi_mux_data_795_V_read929_rewind_phi_fu_22375_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_795_V_read929_phi_phi_fu_34194_p4 = data_795_V_read.read();
    } else {
        ap_phi_mux_data_795_V_read929_phi_phi_fu_34194_p4 = ap_phi_reg_pp0_iter0_data_795_V_read929_phi_reg_34190.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_795_V_read929_rewind_phi_fu_22375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_795_V_read929_rewind_phi_fu_22375_p6 = data_795_V_read929_phi_reg_34190.read();
    } else {
        ap_phi_mux_data_795_V_read929_rewind_phi_fu_22375_p6 = data_795_V_read929_rewind_reg_22371.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_796_V_read930_phi_phi_fu_34207_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_796_V_read930_phi_phi_fu_34207_p4 = ap_phi_mux_data_796_V_read930_rewind_phi_fu_22389_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_796_V_read930_phi_phi_fu_34207_p4 = data_796_V_read.read();
    } else {
        ap_phi_mux_data_796_V_read930_phi_phi_fu_34207_p4 = ap_phi_reg_pp0_iter0_data_796_V_read930_phi_reg_34203.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_796_V_read930_rewind_phi_fu_22389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_796_V_read930_rewind_phi_fu_22389_p6 = data_796_V_read930_phi_reg_34203.read();
    } else {
        ap_phi_mux_data_796_V_read930_rewind_phi_fu_22389_p6 = data_796_V_read930_rewind_reg_22385.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_797_V_read931_phi_phi_fu_34220_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_797_V_read931_phi_phi_fu_34220_p4 = ap_phi_mux_data_797_V_read931_rewind_phi_fu_22403_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_797_V_read931_phi_phi_fu_34220_p4 = data_797_V_read.read();
    } else {
        ap_phi_mux_data_797_V_read931_phi_phi_fu_34220_p4 = ap_phi_reg_pp0_iter0_data_797_V_read931_phi_reg_34216.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_797_V_read931_rewind_phi_fu_22403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_797_V_read931_rewind_phi_fu_22403_p6 = data_797_V_read931_phi_reg_34216.read();
    } else {
        ap_phi_mux_data_797_V_read931_rewind_phi_fu_22403_p6 = data_797_V_read931_rewind_reg_22399.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_798_V_read932_phi_phi_fu_34233_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_798_V_read932_phi_phi_fu_34233_p4 = ap_phi_mux_data_798_V_read932_rewind_phi_fu_22417_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_798_V_read932_phi_phi_fu_34233_p4 = data_798_V_read.read();
    } else {
        ap_phi_mux_data_798_V_read932_phi_phi_fu_34233_p4 = ap_phi_reg_pp0_iter0_data_798_V_read932_phi_reg_34229.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_798_V_read932_rewind_phi_fu_22417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_798_V_read932_rewind_phi_fu_22417_p6 = data_798_V_read932_phi_reg_34229.read();
    } else {
        ap_phi_mux_data_798_V_read932_rewind_phi_fu_22417_p6 = data_798_V_read932_rewind_reg_22413.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_799_V_read933_phi_phi_fu_34246_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_799_V_read933_phi_phi_fu_34246_p4 = ap_phi_mux_data_799_V_read933_rewind_phi_fu_22431_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_799_V_read933_phi_phi_fu_34246_p4 = data_799_V_read.read();
    } else {
        ap_phi_mux_data_799_V_read933_phi_phi_fu_34246_p4 = ap_phi_reg_pp0_iter0_data_799_V_read933_phi_reg_34242.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_799_V_read933_rewind_phi_fu_22431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_799_V_read933_rewind_phi_fu_22431_p6 = data_799_V_read933_phi_reg_34242.read();
    } else {
        ap_phi_mux_data_799_V_read933_rewind_phi_fu_22431_p6 = data_799_V_read933_rewind_reg_22427.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_79_V_read213_phi_phi_fu_24886_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_79_V_read213_phi_phi_fu_24886_p4 = ap_phi_mux_data_79_V_read213_rewind_phi_fu_12351_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_79_V_read213_phi_phi_fu_24886_p4 = data_79_V_read.read();
    } else {
        ap_phi_mux_data_79_V_read213_phi_phi_fu_24886_p4 = ap_phi_reg_pp0_iter0_data_79_V_read213_phi_reg_24882.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_79_V_read213_rewind_phi_fu_12351_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_79_V_read213_rewind_phi_fu_12351_p6 = data_79_V_read213_phi_reg_24882.read();
    } else {
        ap_phi_mux_data_79_V_read213_rewind_phi_fu_12351_p6 = data_79_V_read213_rewind_reg_12347.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_7_V_read141_phi_phi_fu_23950_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_7_V_read141_phi_phi_fu_23950_p4 = ap_phi_mux_data_7_V_read141_rewind_phi_fu_11343_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_7_V_read141_phi_phi_fu_23950_p4 = data_7_V_read.read();
    } else {
        ap_phi_mux_data_7_V_read141_phi_phi_fu_23950_p4 = ap_phi_reg_pp0_iter0_data_7_V_read141_phi_reg_23946.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_7_V_read141_rewind_phi_fu_11343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_7_V_read141_rewind_phi_fu_11343_p6 = data_7_V_read141_phi_reg_23946.read();
    } else {
        ap_phi_mux_data_7_V_read141_rewind_phi_fu_11343_p6 = data_7_V_read141_rewind_reg_11339.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_800_V_read934_phi_phi_fu_34259_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_800_V_read934_phi_phi_fu_34259_p4 = ap_phi_mux_data_800_V_read934_rewind_phi_fu_22445_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_800_V_read934_phi_phi_fu_34259_p4 = data_800_V_read.read();
    } else {
        ap_phi_mux_data_800_V_read934_phi_phi_fu_34259_p4 = ap_phi_reg_pp0_iter0_data_800_V_read934_phi_reg_34255.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_800_V_read934_rewind_phi_fu_22445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_800_V_read934_rewind_phi_fu_22445_p6 = data_800_V_read934_phi_reg_34255.read();
    } else {
        ap_phi_mux_data_800_V_read934_rewind_phi_fu_22445_p6 = data_800_V_read934_rewind_reg_22441.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_801_V_read935_phi_phi_fu_34272_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_801_V_read935_phi_phi_fu_34272_p4 = ap_phi_mux_data_801_V_read935_rewind_phi_fu_22459_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_801_V_read935_phi_phi_fu_34272_p4 = data_801_V_read.read();
    } else {
        ap_phi_mux_data_801_V_read935_phi_phi_fu_34272_p4 = ap_phi_reg_pp0_iter0_data_801_V_read935_phi_reg_34268.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_801_V_read935_rewind_phi_fu_22459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_801_V_read935_rewind_phi_fu_22459_p6 = data_801_V_read935_phi_reg_34268.read();
    } else {
        ap_phi_mux_data_801_V_read935_rewind_phi_fu_22459_p6 = data_801_V_read935_rewind_reg_22455.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_802_V_read936_phi_phi_fu_34285_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_802_V_read936_phi_phi_fu_34285_p4 = ap_phi_mux_data_802_V_read936_rewind_phi_fu_22473_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_802_V_read936_phi_phi_fu_34285_p4 = data_802_V_read.read();
    } else {
        ap_phi_mux_data_802_V_read936_phi_phi_fu_34285_p4 = ap_phi_reg_pp0_iter0_data_802_V_read936_phi_reg_34281.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_802_V_read936_rewind_phi_fu_22473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_802_V_read936_rewind_phi_fu_22473_p6 = data_802_V_read936_phi_reg_34281.read();
    } else {
        ap_phi_mux_data_802_V_read936_rewind_phi_fu_22473_p6 = data_802_V_read936_rewind_reg_22469.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_803_V_read937_phi_phi_fu_34298_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_803_V_read937_phi_phi_fu_34298_p4 = ap_phi_mux_data_803_V_read937_rewind_phi_fu_22487_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_803_V_read937_phi_phi_fu_34298_p4 = data_803_V_read.read();
    } else {
        ap_phi_mux_data_803_V_read937_phi_phi_fu_34298_p4 = ap_phi_reg_pp0_iter0_data_803_V_read937_phi_reg_34294.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_803_V_read937_rewind_phi_fu_22487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_803_V_read937_rewind_phi_fu_22487_p6 = data_803_V_read937_phi_reg_34294.read();
    } else {
        ap_phi_mux_data_803_V_read937_rewind_phi_fu_22487_p6 = data_803_V_read937_rewind_reg_22483.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_804_V_read938_phi_phi_fu_34311_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_804_V_read938_phi_phi_fu_34311_p4 = ap_phi_mux_data_804_V_read938_rewind_phi_fu_22501_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_804_V_read938_phi_phi_fu_34311_p4 = data_804_V_read.read();
    } else {
        ap_phi_mux_data_804_V_read938_phi_phi_fu_34311_p4 = ap_phi_reg_pp0_iter0_data_804_V_read938_phi_reg_34307.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_804_V_read938_rewind_phi_fu_22501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_804_V_read938_rewind_phi_fu_22501_p6 = data_804_V_read938_phi_reg_34307.read();
    } else {
        ap_phi_mux_data_804_V_read938_rewind_phi_fu_22501_p6 = data_804_V_read938_rewind_reg_22497.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_805_V_read939_phi_phi_fu_34324_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_805_V_read939_phi_phi_fu_34324_p4 = ap_phi_mux_data_805_V_read939_rewind_phi_fu_22515_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_805_V_read939_phi_phi_fu_34324_p4 = data_805_V_read.read();
    } else {
        ap_phi_mux_data_805_V_read939_phi_phi_fu_34324_p4 = ap_phi_reg_pp0_iter0_data_805_V_read939_phi_reg_34320.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_805_V_read939_rewind_phi_fu_22515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_805_V_read939_rewind_phi_fu_22515_p6 = data_805_V_read939_phi_reg_34320.read();
    } else {
        ap_phi_mux_data_805_V_read939_rewind_phi_fu_22515_p6 = data_805_V_read939_rewind_reg_22511.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_806_V_read940_phi_phi_fu_34337_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_806_V_read940_phi_phi_fu_34337_p4 = ap_phi_mux_data_806_V_read940_rewind_phi_fu_22529_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_806_V_read940_phi_phi_fu_34337_p4 = data_806_V_read.read();
    } else {
        ap_phi_mux_data_806_V_read940_phi_phi_fu_34337_p4 = ap_phi_reg_pp0_iter0_data_806_V_read940_phi_reg_34333.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_806_V_read940_rewind_phi_fu_22529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_806_V_read940_rewind_phi_fu_22529_p6 = data_806_V_read940_phi_reg_34333.read();
    } else {
        ap_phi_mux_data_806_V_read940_rewind_phi_fu_22529_p6 = data_806_V_read940_rewind_reg_22525.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_807_V_read941_phi_phi_fu_34350_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_807_V_read941_phi_phi_fu_34350_p4 = ap_phi_mux_data_807_V_read941_rewind_phi_fu_22543_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_807_V_read941_phi_phi_fu_34350_p4 = data_807_V_read.read();
    } else {
        ap_phi_mux_data_807_V_read941_phi_phi_fu_34350_p4 = ap_phi_reg_pp0_iter0_data_807_V_read941_phi_reg_34346.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_807_V_read941_rewind_phi_fu_22543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_807_V_read941_rewind_phi_fu_22543_p6 = data_807_V_read941_phi_reg_34346.read();
    } else {
        ap_phi_mux_data_807_V_read941_rewind_phi_fu_22543_p6 = data_807_V_read941_rewind_reg_22539.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_808_V_read942_phi_phi_fu_34363_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_808_V_read942_phi_phi_fu_34363_p4 = ap_phi_mux_data_808_V_read942_rewind_phi_fu_22557_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_808_V_read942_phi_phi_fu_34363_p4 = data_808_V_read.read();
    } else {
        ap_phi_mux_data_808_V_read942_phi_phi_fu_34363_p4 = ap_phi_reg_pp0_iter0_data_808_V_read942_phi_reg_34359.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_808_V_read942_rewind_phi_fu_22557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_808_V_read942_rewind_phi_fu_22557_p6 = data_808_V_read942_phi_reg_34359.read();
    } else {
        ap_phi_mux_data_808_V_read942_rewind_phi_fu_22557_p6 = data_808_V_read942_rewind_reg_22553.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_809_V_read943_phi_phi_fu_34376_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_809_V_read943_phi_phi_fu_34376_p4 = ap_phi_mux_data_809_V_read943_rewind_phi_fu_22571_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_809_V_read943_phi_phi_fu_34376_p4 = data_809_V_read.read();
    } else {
        ap_phi_mux_data_809_V_read943_phi_phi_fu_34376_p4 = ap_phi_reg_pp0_iter0_data_809_V_read943_phi_reg_34372.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_809_V_read943_rewind_phi_fu_22571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_809_V_read943_rewind_phi_fu_22571_p6 = data_809_V_read943_phi_reg_34372.read();
    } else {
        ap_phi_mux_data_809_V_read943_rewind_phi_fu_22571_p6 = data_809_V_read943_rewind_reg_22567.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_80_V_read214_phi_phi_fu_24899_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_80_V_read214_phi_phi_fu_24899_p4 = ap_phi_mux_data_80_V_read214_rewind_phi_fu_12365_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_80_V_read214_phi_phi_fu_24899_p4 = data_80_V_read.read();
    } else {
        ap_phi_mux_data_80_V_read214_phi_phi_fu_24899_p4 = ap_phi_reg_pp0_iter0_data_80_V_read214_phi_reg_24895.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_80_V_read214_rewind_phi_fu_12365_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_80_V_read214_rewind_phi_fu_12365_p6 = data_80_V_read214_phi_reg_24895.read();
    } else {
        ap_phi_mux_data_80_V_read214_rewind_phi_fu_12365_p6 = data_80_V_read214_rewind_reg_12361.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_810_V_read944_phi_phi_fu_34389_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_810_V_read944_phi_phi_fu_34389_p4 = ap_phi_mux_data_810_V_read944_rewind_phi_fu_22585_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_810_V_read944_phi_phi_fu_34389_p4 = data_810_V_read.read();
    } else {
        ap_phi_mux_data_810_V_read944_phi_phi_fu_34389_p4 = ap_phi_reg_pp0_iter0_data_810_V_read944_phi_reg_34385.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_810_V_read944_rewind_phi_fu_22585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_810_V_read944_rewind_phi_fu_22585_p6 = data_810_V_read944_phi_reg_34385.read();
    } else {
        ap_phi_mux_data_810_V_read944_rewind_phi_fu_22585_p6 = data_810_V_read944_rewind_reg_22581.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_811_V_read945_phi_phi_fu_34402_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_811_V_read945_phi_phi_fu_34402_p4 = ap_phi_mux_data_811_V_read945_rewind_phi_fu_22599_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_811_V_read945_phi_phi_fu_34402_p4 = data_811_V_read.read();
    } else {
        ap_phi_mux_data_811_V_read945_phi_phi_fu_34402_p4 = ap_phi_reg_pp0_iter0_data_811_V_read945_phi_reg_34398.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_811_V_read945_rewind_phi_fu_22599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_811_V_read945_rewind_phi_fu_22599_p6 = data_811_V_read945_phi_reg_34398.read();
    } else {
        ap_phi_mux_data_811_V_read945_rewind_phi_fu_22599_p6 = data_811_V_read945_rewind_reg_22595.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_812_V_read946_phi_phi_fu_34415_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_812_V_read946_phi_phi_fu_34415_p4 = ap_phi_mux_data_812_V_read946_rewind_phi_fu_22613_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_812_V_read946_phi_phi_fu_34415_p4 = data_812_V_read.read();
    } else {
        ap_phi_mux_data_812_V_read946_phi_phi_fu_34415_p4 = ap_phi_reg_pp0_iter0_data_812_V_read946_phi_reg_34411.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_812_V_read946_rewind_phi_fu_22613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_812_V_read946_rewind_phi_fu_22613_p6 = data_812_V_read946_phi_reg_34411.read();
    } else {
        ap_phi_mux_data_812_V_read946_rewind_phi_fu_22613_p6 = data_812_V_read946_rewind_reg_22609.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_813_V_read947_phi_phi_fu_34428_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_813_V_read947_phi_phi_fu_34428_p4 = ap_phi_mux_data_813_V_read947_rewind_phi_fu_22627_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_813_V_read947_phi_phi_fu_34428_p4 = data_813_V_read.read();
    } else {
        ap_phi_mux_data_813_V_read947_phi_phi_fu_34428_p4 = ap_phi_reg_pp0_iter0_data_813_V_read947_phi_reg_34424.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_813_V_read947_rewind_phi_fu_22627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_813_V_read947_rewind_phi_fu_22627_p6 = data_813_V_read947_phi_reg_34424.read();
    } else {
        ap_phi_mux_data_813_V_read947_rewind_phi_fu_22627_p6 = data_813_V_read947_rewind_reg_22623.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_814_V_read948_phi_phi_fu_34441_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_814_V_read948_phi_phi_fu_34441_p4 = ap_phi_mux_data_814_V_read948_rewind_phi_fu_22641_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_814_V_read948_phi_phi_fu_34441_p4 = data_814_V_read.read();
    } else {
        ap_phi_mux_data_814_V_read948_phi_phi_fu_34441_p4 = ap_phi_reg_pp0_iter0_data_814_V_read948_phi_reg_34437.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_814_V_read948_rewind_phi_fu_22641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_814_V_read948_rewind_phi_fu_22641_p6 = data_814_V_read948_phi_reg_34437.read();
    } else {
        ap_phi_mux_data_814_V_read948_rewind_phi_fu_22641_p6 = data_814_V_read948_rewind_reg_22637.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_815_V_read949_phi_phi_fu_34454_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_815_V_read949_phi_phi_fu_34454_p4 = ap_phi_mux_data_815_V_read949_rewind_phi_fu_22655_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_815_V_read949_phi_phi_fu_34454_p4 = data_815_V_read.read();
    } else {
        ap_phi_mux_data_815_V_read949_phi_phi_fu_34454_p4 = ap_phi_reg_pp0_iter0_data_815_V_read949_phi_reg_34450.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_815_V_read949_rewind_phi_fu_22655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_815_V_read949_rewind_phi_fu_22655_p6 = data_815_V_read949_phi_reg_34450.read();
    } else {
        ap_phi_mux_data_815_V_read949_rewind_phi_fu_22655_p6 = data_815_V_read949_rewind_reg_22651.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_816_V_read950_phi_phi_fu_34467_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_816_V_read950_phi_phi_fu_34467_p4 = ap_phi_mux_data_816_V_read950_rewind_phi_fu_22669_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_816_V_read950_phi_phi_fu_34467_p4 = data_816_V_read.read();
    } else {
        ap_phi_mux_data_816_V_read950_phi_phi_fu_34467_p4 = ap_phi_reg_pp0_iter0_data_816_V_read950_phi_reg_34463.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_816_V_read950_rewind_phi_fu_22669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_816_V_read950_rewind_phi_fu_22669_p6 = data_816_V_read950_phi_reg_34463.read();
    } else {
        ap_phi_mux_data_816_V_read950_rewind_phi_fu_22669_p6 = data_816_V_read950_rewind_reg_22665.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_817_V_read951_phi_phi_fu_34480_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_817_V_read951_phi_phi_fu_34480_p4 = ap_phi_mux_data_817_V_read951_rewind_phi_fu_22683_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_817_V_read951_phi_phi_fu_34480_p4 = data_817_V_read.read();
    } else {
        ap_phi_mux_data_817_V_read951_phi_phi_fu_34480_p4 = ap_phi_reg_pp0_iter0_data_817_V_read951_phi_reg_34476.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_817_V_read951_rewind_phi_fu_22683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_817_V_read951_rewind_phi_fu_22683_p6 = data_817_V_read951_phi_reg_34476.read();
    } else {
        ap_phi_mux_data_817_V_read951_rewind_phi_fu_22683_p6 = data_817_V_read951_rewind_reg_22679.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_818_V_read952_phi_phi_fu_34493_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_818_V_read952_phi_phi_fu_34493_p4 = ap_phi_mux_data_818_V_read952_rewind_phi_fu_22697_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_818_V_read952_phi_phi_fu_34493_p4 = data_818_V_read.read();
    } else {
        ap_phi_mux_data_818_V_read952_phi_phi_fu_34493_p4 = ap_phi_reg_pp0_iter0_data_818_V_read952_phi_reg_34489.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_818_V_read952_rewind_phi_fu_22697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_818_V_read952_rewind_phi_fu_22697_p6 = data_818_V_read952_phi_reg_34489.read();
    } else {
        ap_phi_mux_data_818_V_read952_rewind_phi_fu_22697_p6 = data_818_V_read952_rewind_reg_22693.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_819_V_read953_phi_phi_fu_34506_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_819_V_read953_phi_phi_fu_34506_p4 = ap_phi_mux_data_819_V_read953_rewind_phi_fu_22711_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_819_V_read953_phi_phi_fu_34506_p4 = data_819_V_read.read();
    } else {
        ap_phi_mux_data_819_V_read953_phi_phi_fu_34506_p4 = ap_phi_reg_pp0_iter0_data_819_V_read953_phi_reg_34502.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_819_V_read953_rewind_phi_fu_22711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_819_V_read953_rewind_phi_fu_22711_p6 = data_819_V_read953_phi_reg_34502.read();
    } else {
        ap_phi_mux_data_819_V_read953_rewind_phi_fu_22711_p6 = data_819_V_read953_rewind_reg_22707.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_81_V_read215_phi_phi_fu_24912_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_81_V_read215_phi_phi_fu_24912_p4 = ap_phi_mux_data_81_V_read215_rewind_phi_fu_12379_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_81_V_read215_phi_phi_fu_24912_p4 = data_81_V_read.read();
    } else {
        ap_phi_mux_data_81_V_read215_phi_phi_fu_24912_p4 = ap_phi_reg_pp0_iter0_data_81_V_read215_phi_reg_24908.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_81_V_read215_rewind_phi_fu_12379_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_81_V_read215_rewind_phi_fu_12379_p6 = data_81_V_read215_phi_reg_24908.read();
    } else {
        ap_phi_mux_data_81_V_read215_rewind_phi_fu_12379_p6 = data_81_V_read215_rewind_reg_12375.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_820_V_read954_phi_phi_fu_34519_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_820_V_read954_phi_phi_fu_34519_p4 = ap_phi_mux_data_820_V_read954_rewind_phi_fu_22725_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_820_V_read954_phi_phi_fu_34519_p4 = data_820_V_read.read();
    } else {
        ap_phi_mux_data_820_V_read954_phi_phi_fu_34519_p4 = ap_phi_reg_pp0_iter0_data_820_V_read954_phi_reg_34515.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_820_V_read954_rewind_phi_fu_22725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_820_V_read954_rewind_phi_fu_22725_p6 = data_820_V_read954_phi_reg_34515.read();
    } else {
        ap_phi_mux_data_820_V_read954_rewind_phi_fu_22725_p6 = data_820_V_read954_rewind_reg_22721.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_821_V_read955_phi_phi_fu_34532_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_821_V_read955_phi_phi_fu_34532_p4 = ap_phi_mux_data_821_V_read955_rewind_phi_fu_22739_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_821_V_read955_phi_phi_fu_34532_p4 = data_821_V_read.read();
    } else {
        ap_phi_mux_data_821_V_read955_phi_phi_fu_34532_p4 = ap_phi_reg_pp0_iter0_data_821_V_read955_phi_reg_34528.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_821_V_read955_rewind_phi_fu_22739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_821_V_read955_rewind_phi_fu_22739_p6 = data_821_V_read955_phi_reg_34528.read();
    } else {
        ap_phi_mux_data_821_V_read955_rewind_phi_fu_22739_p6 = data_821_V_read955_rewind_reg_22735.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_822_V_read956_phi_phi_fu_34545_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_822_V_read956_phi_phi_fu_34545_p4 = ap_phi_mux_data_822_V_read956_rewind_phi_fu_22753_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_822_V_read956_phi_phi_fu_34545_p4 = data_822_V_read.read();
    } else {
        ap_phi_mux_data_822_V_read956_phi_phi_fu_34545_p4 = ap_phi_reg_pp0_iter0_data_822_V_read956_phi_reg_34541.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_822_V_read956_rewind_phi_fu_22753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_822_V_read956_rewind_phi_fu_22753_p6 = data_822_V_read956_phi_reg_34541.read();
    } else {
        ap_phi_mux_data_822_V_read956_rewind_phi_fu_22753_p6 = data_822_V_read956_rewind_reg_22749.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_823_V_read957_phi_phi_fu_34558_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_823_V_read957_phi_phi_fu_34558_p4 = ap_phi_mux_data_823_V_read957_rewind_phi_fu_22767_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_823_V_read957_phi_phi_fu_34558_p4 = data_823_V_read.read();
    } else {
        ap_phi_mux_data_823_V_read957_phi_phi_fu_34558_p4 = ap_phi_reg_pp0_iter0_data_823_V_read957_phi_reg_34554.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_823_V_read957_rewind_phi_fu_22767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_823_V_read957_rewind_phi_fu_22767_p6 = data_823_V_read957_phi_reg_34554.read();
    } else {
        ap_phi_mux_data_823_V_read957_rewind_phi_fu_22767_p6 = data_823_V_read957_rewind_reg_22763.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_824_V_read958_phi_phi_fu_34571_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_824_V_read958_phi_phi_fu_34571_p4 = ap_phi_mux_data_824_V_read958_rewind_phi_fu_22781_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_824_V_read958_phi_phi_fu_34571_p4 = data_824_V_read.read();
    } else {
        ap_phi_mux_data_824_V_read958_phi_phi_fu_34571_p4 = ap_phi_reg_pp0_iter0_data_824_V_read958_phi_reg_34567.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_824_V_read958_rewind_phi_fu_22781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_824_V_read958_rewind_phi_fu_22781_p6 = data_824_V_read958_phi_reg_34567.read();
    } else {
        ap_phi_mux_data_824_V_read958_rewind_phi_fu_22781_p6 = data_824_V_read958_rewind_reg_22777.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_825_V_read959_phi_phi_fu_34584_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_825_V_read959_phi_phi_fu_34584_p4 = ap_phi_mux_data_825_V_read959_rewind_phi_fu_22795_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_825_V_read959_phi_phi_fu_34584_p4 = data_825_V_read.read();
    } else {
        ap_phi_mux_data_825_V_read959_phi_phi_fu_34584_p4 = ap_phi_reg_pp0_iter0_data_825_V_read959_phi_reg_34580.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_825_V_read959_rewind_phi_fu_22795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_825_V_read959_rewind_phi_fu_22795_p6 = data_825_V_read959_phi_reg_34580.read();
    } else {
        ap_phi_mux_data_825_V_read959_rewind_phi_fu_22795_p6 = data_825_V_read959_rewind_reg_22791.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_826_V_read960_phi_phi_fu_34597_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_826_V_read960_phi_phi_fu_34597_p4 = ap_phi_mux_data_826_V_read960_rewind_phi_fu_22809_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_826_V_read960_phi_phi_fu_34597_p4 = data_826_V_read.read();
    } else {
        ap_phi_mux_data_826_V_read960_phi_phi_fu_34597_p4 = ap_phi_reg_pp0_iter0_data_826_V_read960_phi_reg_34593.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_826_V_read960_rewind_phi_fu_22809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_826_V_read960_rewind_phi_fu_22809_p6 = data_826_V_read960_phi_reg_34593.read();
    } else {
        ap_phi_mux_data_826_V_read960_rewind_phi_fu_22809_p6 = data_826_V_read960_rewind_reg_22805.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_827_V_read961_phi_phi_fu_34610_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_827_V_read961_phi_phi_fu_34610_p4 = ap_phi_mux_data_827_V_read961_rewind_phi_fu_22823_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_827_V_read961_phi_phi_fu_34610_p4 = data_827_V_read.read();
    } else {
        ap_phi_mux_data_827_V_read961_phi_phi_fu_34610_p4 = ap_phi_reg_pp0_iter0_data_827_V_read961_phi_reg_34606.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_827_V_read961_rewind_phi_fu_22823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_827_V_read961_rewind_phi_fu_22823_p6 = data_827_V_read961_phi_reg_34606.read();
    } else {
        ap_phi_mux_data_827_V_read961_rewind_phi_fu_22823_p6 = data_827_V_read961_rewind_reg_22819.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_828_V_read962_phi_phi_fu_34623_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_828_V_read962_phi_phi_fu_34623_p4 = ap_phi_mux_data_828_V_read962_rewind_phi_fu_22837_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_828_V_read962_phi_phi_fu_34623_p4 = data_828_V_read.read();
    } else {
        ap_phi_mux_data_828_V_read962_phi_phi_fu_34623_p4 = ap_phi_reg_pp0_iter0_data_828_V_read962_phi_reg_34619.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_828_V_read962_rewind_phi_fu_22837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_828_V_read962_rewind_phi_fu_22837_p6 = data_828_V_read962_phi_reg_34619.read();
    } else {
        ap_phi_mux_data_828_V_read962_rewind_phi_fu_22837_p6 = data_828_V_read962_rewind_reg_22833.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_829_V_read963_phi_phi_fu_34636_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_829_V_read963_phi_phi_fu_34636_p4 = ap_phi_mux_data_829_V_read963_rewind_phi_fu_22851_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_829_V_read963_phi_phi_fu_34636_p4 = data_829_V_read.read();
    } else {
        ap_phi_mux_data_829_V_read963_phi_phi_fu_34636_p4 = ap_phi_reg_pp0_iter0_data_829_V_read963_phi_reg_34632.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_829_V_read963_rewind_phi_fu_22851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_829_V_read963_rewind_phi_fu_22851_p6 = data_829_V_read963_phi_reg_34632.read();
    } else {
        ap_phi_mux_data_829_V_read963_rewind_phi_fu_22851_p6 = data_829_V_read963_rewind_reg_22847.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_82_V_read216_phi_phi_fu_24925_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_82_V_read216_phi_phi_fu_24925_p4 = ap_phi_mux_data_82_V_read216_rewind_phi_fu_12393_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_82_V_read216_phi_phi_fu_24925_p4 = data_82_V_read.read();
    } else {
        ap_phi_mux_data_82_V_read216_phi_phi_fu_24925_p4 = ap_phi_reg_pp0_iter0_data_82_V_read216_phi_reg_24921.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_82_V_read216_rewind_phi_fu_12393_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_82_V_read216_rewind_phi_fu_12393_p6 = data_82_V_read216_phi_reg_24921.read();
    } else {
        ap_phi_mux_data_82_V_read216_rewind_phi_fu_12393_p6 = data_82_V_read216_rewind_reg_12389.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_830_V_read964_phi_phi_fu_34649_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_830_V_read964_phi_phi_fu_34649_p4 = ap_phi_mux_data_830_V_read964_rewind_phi_fu_22865_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_830_V_read964_phi_phi_fu_34649_p4 = data_830_V_read.read();
    } else {
        ap_phi_mux_data_830_V_read964_phi_phi_fu_34649_p4 = ap_phi_reg_pp0_iter0_data_830_V_read964_phi_reg_34645.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_830_V_read964_rewind_phi_fu_22865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_830_V_read964_rewind_phi_fu_22865_p6 = data_830_V_read964_phi_reg_34645.read();
    } else {
        ap_phi_mux_data_830_V_read964_rewind_phi_fu_22865_p6 = data_830_V_read964_rewind_reg_22861.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_831_V_read965_phi_phi_fu_34662_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_831_V_read965_phi_phi_fu_34662_p4 = ap_phi_mux_data_831_V_read965_rewind_phi_fu_22879_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_831_V_read965_phi_phi_fu_34662_p4 = data_831_V_read.read();
    } else {
        ap_phi_mux_data_831_V_read965_phi_phi_fu_34662_p4 = ap_phi_reg_pp0_iter0_data_831_V_read965_phi_reg_34658.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_831_V_read965_rewind_phi_fu_22879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_831_V_read965_rewind_phi_fu_22879_p6 = data_831_V_read965_phi_reg_34658.read();
    } else {
        ap_phi_mux_data_831_V_read965_rewind_phi_fu_22879_p6 = data_831_V_read965_rewind_reg_22875.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_832_V_read966_phi_phi_fu_34675_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_832_V_read966_phi_phi_fu_34675_p4 = ap_phi_mux_data_832_V_read966_rewind_phi_fu_22893_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_832_V_read966_phi_phi_fu_34675_p4 = data_832_V_read.read();
    } else {
        ap_phi_mux_data_832_V_read966_phi_phi_fu_34675_p4 = ap_phi_reg_pp0_iter0_data_832_V_read966_phi_reg_34671.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_832_V_read966_rewind_phi_fu_22893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_832_V_read966_rewind_phi_fu_22893_p6 = data_832_V_read966_phi_reg_34671.read();
    } else {
        ap_phi_mux_data_832_V_read966_rewind_phi_fu_22893_p6 = data_832_V_read966_rewind_reg_22889.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_833_V_read967_phi_phi_fu_34688_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_833_V_read967_phi_phi_fu_34688_p4 = ap_phi_mux_data_833_V_read967_rewind_phi_fu_22907_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_833_V_read967_phi_phi_fu_34688_p4 = data_833_V_read.read();
    } else {
        ap_phi_mux_data_833_V_read967_phi_phi_fu_34688_p4 = ap_phi_reg_pp0_iter0_data_833_V_read967_phi_reg_34684.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_833_V_read967_rewind_phi_fu_22907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_833_V_read967_rewind_phi_fu_22907_p6 = data_833_V_read967_phi_reg_34684.read();
    } else {
        ap_phi_mux_data_833_V_read967_rewind_phi_fu_22907_p6 = data_833_V_read967_rewind_reg_22903.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_834_V_read968_phi_phi_fu_34701_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_834_V_read968_phi_phi_fu_34701_p4 = ap_phi_mux_data_834_V_read968_rewind_phi_fu_22921_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_834_V_read968_phi_phi_fu_34701_p4 = data_834_V_read.read();
    } else {
        ap_phi_mux_data_834_V_read968_phi_phi_fu_34701_p4 = ap_phi_reg_pp0_iter0_data_834_V_read968_phi_reg_34697.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_834_V_read968_rewind_phi_fu_22921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_834_V_read968_rewind_phi_fu_22921_p6 = data_834_V_read968_phi_reg_34697.read();
    } else {
        ap_phi_mux_data_834_V_read968_rewind_phi_fu_22921_p6 = data_834_V_read968_rewind_reg_22917.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_835_V_read969_phi_phi_fu_34714_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_835_V_read969_phi_phi_fu_34714_p4 = ap_phi_mux_data_835_V_read969_rewind_phi_fu_22935_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_835_V_read969_phi_phi_fu_34714_p4 = data_835_V_read.read();
    } else {
        ap_phi_mux_data_835_V_read969_phi_phi_fu_34714_p4 = ap_phi_reg_pp0_iter0_data_835_V_read969_phi_reg_34710.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_835_V_read969_rewind_phi_fu_22935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_835_V_read969_rewind_phi_fu_22935_p6 = data_835_V_read969_phi_reg_34710.read();
    } else {
        ap_phi_mux_data_835_V_read969_rewind_phi_fu_22935_p6 = data_835_V_read969_rewind_reg_22931.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_836_V_read970_phi_phi_fu_34727_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_836_V_read970_phi_phi_fu_34727_p4 = ap_phi_mux_data_836_V_read970_rewind_phi_fu_22949_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_836_V_read970_phi_phi_fu_34727_p4 = data_836_V_read.read();
    } else {
        ap_phi_mux_data_836_V_read970_phi_phi_fu_34727_p4 = ap_phi_reg_pp0_iter0_data_836_V_read970_phi_reg_34723.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_836_V_read970_rewind_phi_fu_22949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_836_V_read970_rewind_phi_fu_22949_p6 = data_836_V_read970_phi_reg_34723.read();
    } else {
        ap_phi_mux_data_836_V_read970_rewind_phi_fu_22949_p6 = data_836_V_read970_rewind_reg_22945.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_837_V_read971_phi_phi_fu_34740_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_837_V_read971_phi_phi_fu_34740_p4 = ap_phi_mux_data_837_V_read971_rewind_phi_fu_22963_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_837_V_read971_phi_phi_fu_34740_p4 = data_837_V_read.read();
    } else {
        ap_phi_mux_data_837_V_read971_phi_phi_fu_34740_p4 = ap_phi_reg_pp0_iter0_data_837_V_read971_phi_reg_34736.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_837_V_read971_rewind_phi_fu_22963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_837_V_read971_rewind_phi_fu_22963_p6 = data_837_V_read971_phi_reg_34736.read();
    } else {
        ap_phi_mux_data_837_V_read971_rewind_phi_fu_22963_p6 = data_837_V_read971_rewind_reg_22959.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_838_V_read972_phi_phi_fu_34753_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_838_V_read972_phi_phi_fu_34753_p4 = ap_phi_mux_data_838_V_read972_rewind_phi_fu_22977_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_838_V_read972_phi_phi_fu_34753_p4 = data_838_V_read.read();
    } else {
        ap_phi_mux_data_838_V_read972_phi_phi_fu_34753_p4 = ap_phi_reg_pp0_iter0_data_838_V_read972_phi_reg_34749.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_838_V_read972_rewind_phi_fu_22977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_838_V_read972_rewind_phi_fu_22977_p6 = data_838_V_read972_phi_reg_34749.read();
    } else {
        ap_phi_mux_data_838_V_read972_rewind_phi_fu_22977_p6 = data_838_V_read972_rewind_reg_22973.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_839_V_read973_phi_phi_fu_34766_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_839_V_read973_phi_phi_fu_34766_p4 = ap_phi_mux_data_839_V_read973_rewind_phi_fu_22991_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_839_V_read973_phi_phi_fu_34766_p4 = data_839_V_read.read();
    } else {
        ap_phi_mux_data_839_V_read973_phi_phi_fu_34766_p4 = ap_phi_reg_pp0_iter0_data_839_V_read973_phi_reg_34762.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_839_V_read973_rewind_phi_fu_22991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_839_V_read973_rewind_phi_fu_22991_p6 = data_839_V_read973_phi_reg_34762.read();
    } else {
        ap_phi_mux_data_839_V_read973_rewind_phi_fu_22991_p6 = data_839_V_read973_rewind_reg_22987.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_83_V_read217_phi_phi_fu_24938_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_83_V_read217_phi_phi_fu_24938_p4 = ap_phi_mux_data_83_V_read217_rewind_phi_fu_12407_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_83_V_read217_phi_phi_fu_24938_p4 = data_83_V_read.read();
    } else {
        ap_phi_mux_data_83_V_read217_phi_phi_fu_24938_p4 = ap_phi_reg_pp0_iter0_data_83_V_read217_phi_reg_24934.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_83_V_read217_rewind_phi_fu_12407_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_83_V_read217_rewind_phi_fu_12407_p6 = data_83_V_read217_phi_reg_24934.read();
    } else {
        ap_phi_mux_data_83_V_read217_rewind_phi_fu_12407_p6 = data_83_V_read217_rewind_reg_12403.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_840_V_read974_phi_phi_fu_34779_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_840_V_read974_phi_phi_fu_34779_p4 = ap_phi_mux_data_840_V_read974_rewind_phi_fu_23005_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_840_V_read974_phi_phi_fu_34779_p4 = data_840_V_read.read();
    } else {
        ap_phi_mux_data_840_V_read974_phi_phi_fu_34779_p4 = ap_phi_reg_pp0_iter0_data_840_V_read974_phi_reg_34775.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_840_V_read974_rewind_phi_fu_23005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_840_V_read974_rewind_phi_fu_23005_p6 = data_840_V_read974_phi_reg_34775.read();
    } else {
        ap_phi_mux_data_840_V_read974_rewind_phi_fu_23005_p6 = data_840_V_read974_rewind_reg_23001.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_841_V_read975_phi_phi_fu_34792_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_841_V_read975_phi_phi_fu_34792_p4 = ap_phi_mux_data_841_V_read975_rewind_phi_fu_23019_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_841_V_read975_phi_phi_fu_34792_p4 = data_841_V_read.read();
    } else {
        ap_phi_mux_data_841_V_read975_phi_phi_fu_34792_p4 = ap_phi_reg_pp0_iter0_data_841_V_read975_phi_reg_34788.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_841_V_read975_rewind_phi_fu_23019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_841_V_read975_rewind_phi_fu_23019_p6 = data_841_V_read975_phi_reg_34788.read();
    } else {
        ap_phi_mux_data_841_V_read975_rewind_phi_fu_23019_p6 = data_841_V_read975_rewind_reg_23015.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_842_V_read976_phi_phi_fu_34805_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_842_V_read976_phi_phi_fu_34805_p4 = ap_phi_mux_data_842_V_read976_rewind_phi_fu_23033_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_842_V_read976_phi_phi_fu_34805_p4 = data_842_V_read.read();
    } else {
        ap_phi_mux_data_842_V_read976_phi_phi_fu_34805_p4 = ap_phi_reg_pp0_iter0_data_842_V_read976_phi_reg_34801.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_842_V_read976_rewind_phi_fu_23033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_842_V_read976_rewind_phi_fu_23033_p6 = data_842_V_read976_phi_reg_34801.read();
    } else {
        ap_phi_mux_data_842_V_read976_rewind_phi_fu_23033_p6 = data_842_V_read976_rewind_reg_23029.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_843_V_read977_phi_phi_fu_34818_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_843_V_read977_phi_phi_fu_34818_p4 = ap_phi_mux_data_843_V_read977_rewind_phi_fu_23047_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_843_V_read977_phi_phi_fu_34818_p4 = data_843_V_read.read();
    } else {
        ap_phi_mux_data_843_V_read977_phi_phi_fu_34818_p4 = ap_phi_reg_pp0_iter0_data_843_V_read977_phi_reg_34814.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_843_V_read977_rewind_phi_fu_23047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_843_V_read977_rewind_phi_fu_23047_p6 = data_843_V_read977_phi_reg_34814.read();
    } else {
        ap_phi_mux_data_843_V_read977_rewind_phi_fu_23047_p6 = data_843_V_read977_rewind_reg_23043.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_844_V_read978_phi_phi_fu_34831_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_844_V_read978_phi_phi_fu_34831_p4 = ap_phi_mux_data_844_V_read978_rewind_phi_fu_23061_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_844_V_read978_phi_phi_fu_34831_p4 = data_844_V_read.read();
    } else {
        ap_phi_mux_data_844_V_read978_phi_phi_fu_34831_p4 = ap_phi_reg_pp0_iter0_data_844_V_read978_phi_reg_34827.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_844_V_read978_rewind_phi_fu_23061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_844_V_read978_rewind_phi_fu_23061_p6 = data_844_V_read978_phi_reg_34827.read();
    } else {
        ap_phi_mux_data_844_V_read978_rewind_phi_fu_23061_p6 = data_844_V_read978_rewind_reg_23057.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_845_V_read979_phi_phi_fu_34844_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_845_V_read979_phi_phi_fu_34844_p4 = ap_phi_mux_data_845_V_read979_rewind_phi_fu_23075_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_845_V_read979_phi_phi_fu_34844_p4 = data_845_V_read.read();
    } else {
        ap_phi_mux_data_845_V_read979_phi_phi_fu_34844_p4 = ap_phi_reg_pp0_iter0_data_845_V_read979_phi_reg_34840.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_845_V_read979_rewind_phi_fu_23075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_845_V_read979_rewind_phi_fu_23075_p6 = data_845_V_read979_phi_reg_34840.read();
    } else {
        ap_phi_mux_data_845_V_read979_rewind_phi_fu_23075_p6 = data_845_V_read979_rewind_reg_23071.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_846_V_read980_phi_phi_fu_34857_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_846_V_read980_phi_phi_fu_34857_p4 = ap_phi_mux_data_846_V_read980_rewind_phi_fu_23089_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_846_V_read980_phi_phi_fu_34857_p4 = data_846_V_read.read();
    } else {
        ap_phi_mux_data_846_V_read980_phi_phi_fu_34857_p4 = ap_phi_reg_pp0_iter0_data_846_V_read980_phi_reg_34853.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_846_V_read980_rewind_phi_fu_23089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_846_V_read980_rewind_phi_fu_23089_p6 = data_846_V_read980_phi_reg_34853.read();
    } else {
        ap_phi_mux_data_846_V_read980_rewind_phi_fu_23089_p6 = data_846_V_read980_rewind_reg_23085.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_847_V_read981_phi_phi_fu_34870_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_847_V_read981_phi_phi_fu_34870_p4 = ap_phi_mux_data_847_V_read981_rewind_phi_fu_23103_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_847_V_read981_phi_phi_fu_34870_p4 = data_847_V_read.read();
    } else {
        ap_phi_mux_data_847_V_read981_phi_phi_fu_34870_p4 = ap_phi_reg_pp0_iter0_data_847_V_read981_phi_reg_34866.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_847_V_read981_rewind_phi_fu_23103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_847_V_read981_rewind_phi_fu_23103_p6 = data_847_V_read981_phi_reg_34866.read();
    } else {
        ap_phi_mux_data_847_V_read981_rewind_phi_fu_23103_p6 = data_847_V_read981_rewind_reg_23099.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_848_V_read982_phi_phi_fu_34883_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_848_V_read982_phi_phi_fu_34883_p4 = ap_phi_mux_data_848_V_read982_rewind_phi_fu_23117_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_848_V_read982_phi_phi_fu_34883_p4 = data_848_V_read.read();
    } else {
        ap_phi_mux_data_848_V_read982_phi_phi_fu_34883_p4 = ap_phi_reg_pp0_iter0_data_848_V_read982_phi_reg_34879.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_848_V_read982_rewind_phi_fu_23117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_848_V_read982_rewind_phi_fu_23117_p6 = data_848_V_read982_phi_reg_34879.read();
    } else {
        ap_phi_mux_data_848_V_read982_rewind_phi_fu_23117_p6 = data_848_V_read982_rewind_reg_23113.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_849_V_read983_phi_phi_fu_34896_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_849_V_read983_phi_phi_fu_34896_p4 = ap_phi_mux_data_849_V_read983_rewind_phi_fu_23131_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_849_V_read983_phi_phi_fu_34896_p4 = data_849_V_read.read();
    } else {
        ap_phi_mux_data_849_V_read983_phi_phi_fu_34896_p4 = ap_phi_reg_pp0_iter0_data_849_V_read983_phi_reg_34892.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_849_V_read983_rewind_phi_fu_23131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_849_V_read983_rewind_phi_fu_23131_p6 = data_849_V_read983_phi_reg_34892.read();
    } else {
        ap_phi_mux_data_849_V_read983_rewind_phi_fu_23131_p6 = data_849_V_read983_rewind_reg_23127.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_84_V_read218_phi_phi_fu_24951_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_84_V_read218_phi_phi_fu_24951_p4 = ap_phi_mux_data_84_V_read218_rewind_phi_fu_12421_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_84_V_read218_phi_phi_fu_24951_p4 = data_84_V_read.read();
    } else {
        ap_phi_mux_data_84_V_read218_phi_phi_fu_24951_p4 = ap_phi_reg_pp0_iter0_data_84_V_read218_phi_reg_24947.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_84_V_read218_rewind_phi_fu_12421_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_84_V_read218_rewind_phi_fu_12421_p6 = data_84_V_read218_phi_reg_24947.read();
    } else {
        ap_phi_mux_data_84_V_read218_rewind_phi_fu_12421_p6 = data_84_V_read218_rewind_reg_12417.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_850_V_read984_phi_phi_fu_34909_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_850_V_read984_phi_phi_fu_34909_p4 = ap_phi_mux_data_850_V_read984_rewind_phi_fu_23145_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_850_V_read984_phi_phi_fu_34909_p4 = data_850_V_read.read();
    } else {
        ap_phi_mux_data_850_V_read984_phi_phi_fu_34909_p4 = ap_phi_reg_pp0_iter0_data_850_V_read984_phi_reg_34905.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_850_V_read984_rewind_phi_fu_23145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_850_V_read984_rewind_phi_fu_23145_p6 = data_850_V_read984_phi_reg_34905.read();
    } else {
        ap_phi_mux_data_850_V_read984_rewind_phi_fu_23145_p6 = data_850_V_read984_rewind_reg_23141.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_851_V_read985_phi_phi_fu_34922_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_851_V_read985_phi_phi_fu_34922_p4 = ap_phi_mux_data_851_V_read985_rewind_phi_fu_23159_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_851_V_read985_phi_phi_fu_34922_p4 = data_851_V_read.read();
    } else {
        ap_phi_mux_data_851_V_read985_phi_phi_fu_34922_p4 = ap_phi_reg_pp0_iter0_data_851_V_read985_phi_reg_34918.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_851_V_read985_rewind_phi_fu_23159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_851_V_read985_rewind_phi_fu_23159_p6 = data_851_V_read985_phi_reg_34918.read();
    } else {
        ap_phi_mux_data_851_V_read985_rewind_phi_fu_23159_p6 = data_851_V_read985_rewind_reg_23155.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_852_V_read986_phi_phi_fu_34935_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_852_V_read986_phi_phi_fu_34935_p4 = ap_phi_mux_data_852_V_read986_rewind_phi_fu_23173_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_852_V_read986_phi_phi_fu_34935_p4 = data_852_V_read.read();
    } else {
        ap_phi_mux_data_852_V_read986_phi_phi_fu_34935_p4 = ap_phi_reg_pp0_iter0_data_852_V_read986_phi_reg_34931.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_852_V_read986_rewind_phi_fu_23173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_852_V_read986_rewind_phi_fu_23173_p6 = data_852_V_read986_phi_reg_34931.read();
    } else {
        ap_phi_mux_data_852_V_read986_rewind_phi_fu_23173_p6 = data_852_V_read986_rewind_reg_23169.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_853_V_read987_phi_phi_fu_34948_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_853_V_read987_phi_phi_fu_34948_p4 = ap_phi_mux_data_853_V_read987_rewind_phi_fu_23187_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_853_V_read987_phi_phi_fu_34948_p4 = data_853_V_read.read();
    } else {
        ap_phi_mux_data_853_V_read987_phi_phi_fu_34948_p4 = ap_phi_reg_pp0_iter0_data_853_V_read987_phi_reg_34944.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_853_V_read987_rewind_phi_fu_23187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_853_V_read987_rewind_phi_fu_23187_p6 = data_853_V_read987_phi_reg_34944.read();
    } else {
        ap_phi_mux_data_853_V_read987_rewind_phi_fu_23187_p6 = data_853_V_read987_rewind_reg_23183.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_854_V_read988_phi_phi_fu_34961_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_854_V_read988_phi_phi_fu_34961_p4 = ap_phi_mux_data_854_V_read988_rewind_phi_fu_23201_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_854_V_read988_phi_phi_fu_34961_p4 = data_854_V_read.read();
    } else {
        ap_phi_mux_data_854_V_read988_phi_phi_fu_34961_p4 = ap_phi_reg_pp0_iter0_data_854_V_read988_phi_reg_34957.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_854_V_read988_rewind_phi_fu_23201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_854_V_read988_rewind_phi_fu_23201_p6 = data_854_V_read988_phi_reg_34957.read();
    } else {
        ap_phi_mux_data_854_V_read988_rewind_phi_fu_23201_p6 = data_854_V_read988_rewind_reg_23197.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_855_V_read989_phi_phi_fu_34974_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_855_V_read989_phi_phi_fu_34974_p4 = ap_phi_mux_data_855_V_read989_rewind_phi_fu_23215_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_855_V_read989_phi_phi_fu_34974_p4 = data_855_V_read.read();
    } else {
        ap_phi_mux_data_855_V_read989_phi_phi_fu_34974_p4 = ap_phi_reg_pp0_iter0_data_855_V_read989_phi_reg_34970.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_855_V_read989_rewind_phi_fu_23215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_855_V_read989_rewind_phi_fu_23215_p6 = data_855_V_read989_phi_reg_34970.read();
    } else {
        ap_phi_mux_data_855_V_read989_rewind_phi_fu_23215_p6 = data_855_V_read989_rewind_reg_23211.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_856_V_read990_phi_phi_fu_34987_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_856_V_read990_phi_phi_fu_34987_p4 = ap_phi_mux_data_856_V_read990_rewind_phi_fu_23229_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_856_V_read990_phi_phi_fu_34987_p4 = data_856_V_read.read();
    } else {
        ap_phi_mux_data_856_V_read990_phi_phi_fu_34987_p4 = ap_phi_reg_pp0_iter0_data_856_V_read990_phi_reg_34983.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_856_V_read990_rewind_phi_fu_23229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_856_V_read990_rewind_phi_fu_23229_p6 = data_856_V_read990_phi_reg_34983.read();
    } else {
        ap_phi_mux_data_856_V_read990_rewind_phi_fu_23229_p6 = data_856_V_read990_rewind_reg_23225.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_857_V_read991_phi_phi_fu_35000_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_857_V_read991_phi_phi_fu_35000_p4 = ap_phi_mux_data_857_V_read991_rewind_phi_fu_23243_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_857_V_read991_phi_phi_fu_35000_p4 = data_857_V_read.read();
    } else {
        ap_phi_mux_data_857_V_read991_phi_phi_fu_35000_p4 = ap_phi_reg_pp0_iter0_data_857_V_read991_phi_reg_34996.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_857_V_read991_rewind_phi_fu_23243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_857_V_read991_rewind_phi_fu_23243_p6 = data_857_V_read991_phi_reg_34996.read();
    } else {
        ap_phi_mux_data_857_V_read991_rewind_phi_fu_23243_p6 = data_857_V_read991_rewind_reg_23239.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_858_V_read992_phi_phi_fu_35013_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_858_V_read992_phi_phi_fu_35013_p4 = ap_phi_mux_data_858_V_read992_rewind_phi_fu_23257_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_858_V_read992_phi_phi_fu_35013_p4 = data_858_V_read.read();
    } else {
        ap_phi_mux_data_858_V_read992_phi_phi_fu_35013_p4 = ap_phi_reg_pp0_iter0_data_858_V_read992_phi_reg_35009.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_858_V_read992_rewind_phi_fu_23257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_858_V_read992_rewind_phi_fu_23257_p6 = data_858_V_read992_phi_reg_35009.read();
    } else {
        ap_phi_mux_data_858_V_read992_rewind_phi_fu_23257_p6 = data_858_V_read992_rewind_reg_23253.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_859_V_read993_phi_phi_fu_35026_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_859_V_read993_phi_phi_fu_35026_p4 = ap_phi_mux_data_859_V_read993_rewind_phi_fu_23271_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_859_V_read993_phi_phi_fu_35026_p4 = data_859_V_read.read();
    } else {
        ap_phi_mux_data_859_V_read993_phi_phi_fu_35026_p4 = ap_phi_reg_pp0_iter0_data_859_V_read993_phi_reg_35022.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_859_V_read993_rewind_phi_fu_23271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_859_V_read993_rewind_phi_fu_23271_p6 = data_859_V_read993_phi_reg_35022.read();
    } else {
        ap_phi_mux_data_859_V_read993_rewind_phi_fu_23271_p6 = data_859_V_read993_rewind_reg_23267.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_85_V_read219_phi_phi_fu_24964_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_85_V_read219_phi_phi_fu_24964_p4 = ap_phi_mux_data_85_V_read219_rewind_phi_fu_12435_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_85_V_read219_phi_phi_fu_24964_p4 = data_85_V_read.read();
    } else {
        ap_phi_mux_data_85_V_read219_phi_phi_fu_24964_p4 = ap_phi_reg_pp0_iter0_data_85_V_read219_phi_reg_24960.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_85_V_read219_rewind_phi_fu_12435_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_85_V_read219_rewind_phi_fu_12435_p6 = data_85_V_read219_phi_reg_24960.read();
    } else {
        ap_phi_mux_data_85_V_read219_rewind_phi_fu_12435_p6 = data_85_V_read219_rewind_reg_12431.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_860_V_read994_phi_phi_fu_35039_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_860_V_read994_phi_phi_fu_35039_p4 = ap_phi_mux_data_860_V_read994_rewind_phi_fu_23285_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_860_V_read994_phi_phi_fu_35039_p4 = data_860_V_read.read();
    } else {
        ap_phi_mux_data_860_V_read994_phi_phi_fu_35039_p4 = ap_phi_reg_pp0_iter0_data_860_V_read994_phi_reg_35035.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_860_V_read994_rewind_phi_fu_23285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_860_V_read994_rewind_phi_fu_23285_p6 = data_860_V_read994_phi_reg_35035.read();
    } else {
        ap_phi_mux_data_860_V_read994_rewind_phi_fu_23285_p6 = data_860_V_read994_rewind_reg_23281.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_861_V_read995_phi_phi_fu_35052_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_861_V_read995_phi_phi_fu_35052_p4 = ap_phi_mux_data_861_V_read995_rewind_phi_fu_23299_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_861_V_read995_phi_phi_fu_35052_p4 = data_861_V_read.read();
    } else {
        ap_phi_mux_data_861_V_read995_phi_phi_fu_35052_p4 = ap_phi_reg_pp0_iter0_data_861_V_read995_phi_reg_35048.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_861_V_read995_rewind_phi_fu_23299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_861_V_read995_rewind_phi_fu_23299_p6 = data_861_V_read995_phi_reg_35048.read();
    } else {
        ap_phi_mux_data_861_V_read995_rewind_phi_fu_23299_p6 = data_861_V_read995_rewind_reg_23295.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_862_V_read996_phi_phi_fu_35065_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_862_V_read996_phi_phi_fu_35065_p4 = ap_phi_mux_data_862_V_read996_rewind_phi_fu_23313_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_862_V_read996_phi_phi_fu_35065_p4 = data_862_V_read.read();
    } else {
        ap_phi_mux_data_862_V_read996_phi_phi_fu_35065_p4 = ap_phi_reg_pp0_iter0_data_862_V_read996_phi_reg_35061.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_862_V_read996_rewind_phi_fu_23313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_862_V_read996_rewind_phi_fu_23313_p6 = data_862_V_read996_phi_reg_35061.read();
    } else {
        ap_phi_mux_data_862_V_read996_rewind_phi_fu_23313_p6 = data_862_V_read996_rewind_reg_23309.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_863_V_read997_phi_phi_fu_35078_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_863_V_read997_phi_phi_fu_35078_p4 = ap_phi_mux_data_863_V_read997_rewind_phi_fu_23327_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_863_V_read997_phi_phi_fu_35078_p4 = data_863_V_read.read();
    } else {
        ap_phi_mux_data_863_V_read997_phi_phi_fu_35078_p4 = ap_phi_reg_pp0_iter0_data_863_V_read997_phi_reg_35074.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_863_V_read997_rewind_phi_fu_23327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_863_V_read997_rewind_phi_fu_23327_p6 = data_863_V_read997_phi_reg_35074.read();
    } else {
        ap_phi_mux_data_863_V_read997_rewind_phi_fu_23327_p6 = data_863_V_read997_rewind_reg_23323.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_864_V_read998_phi_phi_fu_35091_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_864_V_read998_phi_phi_fu_35091_p4 = ap_phi_mux_data_864_V_read998_rewind_phi_fu_23341_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_864_V_read998_phi_phi_fu_35091_p4 = data_864_V_read.read();
    } else {
        ap_phi_mux_data_864_V_read998_phi_phi_fu_35091_p4 = ap_phi_reg_pp0_iter0_data_864_V_read998_phi_reg_35087.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_864_V_read998_rewind_phi_fu_23341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_864_V_read998_rewind_phi_fu_23341_p6 = data_864_V_read998_phi_reg_35087.read();
    } else {
        ap_phi_mux_data_864_V_read998_rewind_phi_fu_23341_p6 = data_864_V_read998_rewind_reg_23337.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_865_V_read999_phi_phi_fu_35104_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_865_V_read999_phi_phi_fu_35104_p4 = ap_phi_mux_data_865_V_read999_rewind_phi_fu_23355_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_865_V_read999_phi_phi_fu_35104_p4 = data_865_V_read.read();
    } else {
        ap_phi_mux_data_865_V_read999_phi_phi_fu_35104_p4 = ap_phi_reg_pp0_iter0_data_865_V_read999_phi_reg_35100.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_865_V_read999_rewind_phi_fu_23355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_865_V_read999_rewind_phi_fu_23355_p6 = data_865_V_read999_phi_reg_35100.read();
    } else {
        ap_phi_mux_data_865_V_read999_rewind_phi_fu_23355_p6 = data_865_V_read999_rewind_reg_23351.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_866_V_read1000_phi_phi_fu_35117_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_866_V_read1000_phi_phi_fu_35117_p4 = ap_phi_mux_data_866_V_read1000_rewind_phi_fu_23369_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_866_V_read1000_phi_phi_fu_35117_p4 = data_866_V_read.read();
    } else {
        ap_phi_mux_data_866_V_read1000_phi_phi_fu_35117_p4 = ap_phi_reg_pp0_iter0_data_866_V_read1000_phi_reg_35113.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_866_V_read1000_rewind_phi_fu_23369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_866_V_read1000_rewind_phi_fu_23369_p6 = data_866_V_read1000_phi_reg_35113.read();
    } else {
        ap_phi_mux_data_866_V_read1000_rewind_phi_fu_23369_p6 = data_866_V_read1000_rewind_reg_23365.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_867_V_read1001_phi_phi_fu_35130_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_867_V_read1001_phi_phi_fu_35130_p4 = ap_phi_mux_data_867_V_read1001_rewind_phi_fu_23383_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_867_V_read1001_phi_phi_fu_35130_p4 = data_867_V_read.read();
    } else {
        ap_phi_mux_data_867_V_read1001_phi_phi_fu_35130_p4 = ap_phi_reg_pp0_iter0_data_867_V_read1001_phi_reg_35126.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_867_V_read1001_rewind_phi_fu_23383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_867_V_read1001_rewind_phi_fu_23383_p6 = data_867_V_read1001_phi_reg_35126.read();
    } else {
        ap_phi_mux_data_867_V_read1001_rewind_phi_fu_23383_p6 = data_867_V_read1001_rewind_reg_23379.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_868_V_read1002_phi_phi_fu_35143_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_868_V_read1002_phi_phi_fu_35143_p4 = ap_phi_mux_data_868_V_read1002_rewind_phi_fu_23397_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_868_V_read1002_phi_phi_fu_35143_p4 = data_868_V_read.read();
    } else {
        ap_phi_mux_data_868_V_read1002_phi_phi_fu_35143_p4 = ap_phi_reg_pp0_iter0_data_868_V_read1002_phi_reg_35139.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_868_V_read1002_rewind_phi_fu_23397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_868_V_read1002_rewind_phi_fu_23397_p6 = data_868_V_read1002_phi_reg_35139.read();
    } else {
        ap_phi_mux_data_868_V_read1002_rewind_phi_fu_23397_p6 = data_868_V_read1002_rewind_reg_23393.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_869_V_read1003_phi_phi_fu_35156_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_869_V_read1003_phi_phi_fu_35156_p4 = ap_phi_mux_data_869_V_read1003_rewind_phi_fu_23411_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_869_V_read1003_phi_phi_fu_35156_p4 = data_869_V_read.read();
    } else {
        ap_phi_mux_data_869_V_read1003_phi_phi_fu_35156_p4 = ap_phi_reg_pp0_iter0_data_869_V_read1003_phi_reg_35152.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_869_V_read1003_rewind_phi_fu_23411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_869_V_read1003_rewind_phi_fu_23411_p6 = data_869_V_read1003_phi_reg_35152.read();
    } else {
        ap_phi_mux_data_869_V_read1003_rewind_phi_fu_23411_p6 = data_869_V_read1003_rewind_reg_23407.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_86_V_read220_phi_phi_fu_24977_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_86_V_read220_phi_phi_fu_24977_p4 = ap_phi_mux_data_86_V_read220_rewind_phi_fu_12449_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_86_V_read220_phi_phi_fu_24977_p4 = data_86_V_read.read();
    } else {
        ap_phi_mux_data_86_V_read220_phi_phi_fu_24977_p4 = ap_phi_reg_pp0_iter0_data_86_V_read220_phi_reg_24973.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_86_V_read220_rewind_phi_fu_12449_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_86_V_read220_rewind_phi_fu_12449_p6 = data_86_V_read220_phi_reg_24973.read();
    } else {
        ap_phi_mux_data_86_V_read220_rewind_phi_fu_12449_p6 = data_86_V_read220_rewind_reg_12445.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_870_V_read1004_phi_phi_fu_35169_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_870_V_read1004_phi_phi_fu_35169_p4 = ap_phi_mux_data_870_V_read1004_rewind_phi_fu_23425_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_870_V_read1004_phi_phi_fu_35169_p4 = data_870_V_read.read();
    } else {
        ap_phi_mux_data_870_V_read1004_phi_phi_fu_35169_p4 = ap_phi_reg_pp0_iter0_data_870_V_read1004_phi_reg_35165.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_870_V_read1004_rewind_phi_fu_23425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_870_V_read1004_rewind_phi_fu_23425_p6 = data_870_V_read1004_phi_reg_35165.read();
    } else {
        ap_phi_mux_data_870_V_read1004_rewind_phi_fu_23425_p6 = data_870_V_read1004_rewind_reg_23421.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_871_V_read1005_phi_phi_fu_35182_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_871_V_read1005_phi_phi_fu_35182_p4 = ap_phi_mux_data_871_V_read1005_rewind_phi_fu_23439_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_871_V_read1005_phi_phi_fu_35182_p4 = data_871_V_read.read();
    } else {
        ap_phi_mux_data_871_V_read1005_phi_phi_fu_35182_p4 = ap_phi_reg_pp0_iter0_data_871_V_read1005_phi_reg_35178.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_871_V_read1005_rewind_phi_fu_23439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_871_V_read1005_rewind_phi_fu_23439_p6 = data_871_V_read1005_phi_reg_35178.read();
    } else {
        ap_phi_mux_data_871_V_read1005_rewind_phi_fu_23439_p6 = data_871_V_read1005_rewind_reg_23435.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_872_V_read1006_phi_phi_fu_35195_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_872_V_read1006_phi_phi_fu_35195_p4 = ap_phi_mux_data_872_V_read1006_rewind_phi_fu_23453_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_872_V_read1006_phi_phi_fu_35195_p4 = data_872_V_read.read();
    } else {
        ap_phi_mux_data_872_V_read1006_phi_phi_fu_35195_p4 = ap_phi_reg_pp0_iter0_data_872_V_read1006_phi_reg_35191.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_872_V_read1006_rewind_phi_fu_23453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_872_V_read1006_rewind_phi_fu_23453_p6 = data_872_V_read1006_phi_reg_35191.read();
    } else {
        ap_phi_mux_data_872_V_read1006_rewind_phi_fu_23453_p6 = data_872_V_read1006_rewind_reg_23449.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_873_V_read1007_phi_phi_fu_35208_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_873_V_read1007_phi_phi_fu_35208_p4 = ap_phi_mux_data_873_V_read1007_rewind_phi_fu_23467_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_873_V_read1007_phi_phi_fu_35208_p4 = data_873_V_read.read();
    } else {
        ap_phi_mux_data_873_V_read1007_phi_phi_fu_35208_p4 = ap_phi_reg_pp0_iter0_data_873_V_read1007_phi_reg_35204.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_873_V_read1007_rewind_phi_fu_23467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_873_V_read1007_rewind_phi_fu_23467_p6 = data_873_V_read1007_phi_reg_35204.read();
    } else {
        ap_phi_mux_data_873_V_read1007_rewind_phi_fu_23467_p6 = data_873_V_read1007_rewind_reg_23463.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_874_V_read1008_phi_phi_fu_35221_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_874_V_read1008_phi_phi_fu_35221_p4 = ap_phi_mux_data_874_V_read1008_rewind_phi_fu_23481_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_874_V_read1008_phi_phi_fu_35221_p4 = data_874_V_read.read();
    } else {
        ap_phi_mux_data_874_V_read1008_phi_phi_fu_35221_p4 = ap_phi_reg_pp0_iter0_data_874_V_read1008_phi_reg_35217.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_874_V_read1008_rewind_phi_fu_23481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_874_V_read1008_rewind_phi_fu_23481_p6 = data_874_V_read1008_phi_reg_35217.read();
    } else {
        ap_phi_mux_data_874_V_read1008_rewind_phi_fu_23481_p6 = data_874_V_read1008_rewind_reg_23477.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_875_V_read1009_phi_phi_fu_35234_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_875_V_read1009_phi_phi_fu_35234_p4 = ap_phi_mux_data_875_V_read1009_rewind_phi_fu_23495_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_875_V_read1009_phi_phi_fu_35234_p4 = data_875_V_read.read();
    } else {
        ap_phi_mux_data_875_V_read1009_phi_phi_fu_35234_p4 = ap_phi_reg_pp0_iter0_data_875_V_read1009_phi_reg_35230.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_875_V_read1009_rewind_phi_fu_23495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_875_V_read1009_rewind_phi_fu_23495_p6 = data_875_V_read1009_phi_reg_35230.read();
    } else {
        ap_phi_mux_data_875_V_read1009_rewind_phi_fu_23495_p6 = data_875_V_read1009_rewind_reg_23491.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_876_V_read1010_phi_phi_fu_35247_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_876_V_read1010_phi_phi_fu_35247_p4 = ap_phi_mux_data_876_V_read1010_rewind_phi_fu_23509_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_876_V_read1010_phi_phi_fu_35247_p4 = data_876_V_read.read();
    } else {
        ap_phi_mux_data_876_V_read1010_phi_phi_fu_35247_p4 = ap_phi_reg_pp0_iter0_data_876_V_read1010_phi_reg_35243.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_876_V_read1010_rewind_phi_fu_23509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_876_V_read1010_rewind_phi_fu_23509_p6 = data_876_V_read1010_phi_reg_35243.read();
    } else {
        ap_phi_mux_data_876_V_read1010_rewind_phi_fu_23509_p6 = data_876_V_read1010_rewind_reg_23505.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_877_V_read1011_phi_phi_fu_35260_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_877_V_read1011_phi_phi_fu_35260_p4 = ap_phi_mux_data_877_V_read1011_rewind_phi_fu_23523_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_877_V_read1011_phi_phi_fu_35260_p4 = data_877_V_read.read();
    } else {
        ap_phi_mux_data_877_V_read1011_phi_phi_fu_35260_p4 = ap_phi_reg_pp0_iter0_data_877_V_read1011_phi_reg_35256.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_877_V_read1011_rewind_phi_fu_23523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_877_V_read1011_rewind_phi_fu_23523_p6 = data_877_V_read1011_phi_reg_35256.read();
    } else {
        ap_phi_mux_data_877_V_read1011_rewind_phi_fu_23523_p6 = data_877_V_read1011_rewind_reg_23519.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_878_V_read1012_phi_phi_fu_35273_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_878_V_read1012_phi_phi_fu_35273_p4 = ap_phi_mux_data_878_V_read1012_rewind_phi_fu_23537_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_878_V_read1012_phi_phi_fu_35273_p4 = data_878_V_read.read();
    } else {
        ap_phi_mux_data_878_V_read1012_phi_phi_fu_35273_p4 = ap_phi_reg_pp0_iter0_data_878_V_read1012_phi_reg_35269.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_878_V_read1012_rewind_phi_fu_23537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_878_V_read1012_rewind_phi_fu_23537_p6 = data_878_V_read1012_phi_reg_35269.read();
    } else {
        ap_phi_mux_data_878_V_read1012_rewind_phi_fu_23537_p6 = data_878_V_read1012_rewind_reg_23533.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_879_V_read1013_phi_phi_fu_35286_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_879_V_read1013_phi_phi_fu_35286_p4 = ap_phi_mux_data_879_V_read1013_rewind_phi_fu_23551_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_879_V_read1013_phi_phi_fu_35286_p4 = data_879_V_read.read();
    } else {
        ap_phi_mux_data_879_V_read1013_phi_phi_fu_35286_p4 = ap_phi_reg_pp0_iter0_data_879_V_read1013_phi_reg_35282.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_879_V_read1013_rewind_phi_fu_23551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_879_V_read1013_rewind_phi_fu_23551_p6 = data_879_V_read1013_phi_reg_35282.read();
    } else {
        ap_phi_mux_data_879_V_read1013_rewind_phi_fu_23551_p6 = data_879_V_read1013_rewind_reg_23547.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_87_V_read221_phi_phi_fu_24990_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_87_V_read221_phi_phi_fu_24990_p4 = ap_phi_mux_data_87_V_read221_rewind_phi_fu_12463_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_87_V_read221_phi_phi_fu_24990_p4 = data_87_V_read.read();
    } else {
        ap_phi_mux_data_87_V_read221_phi_phi_fu_24990_p4 = ap_phi_reg_pp0_iter0_data_87_V_read221_phi_reg_24986.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_87_V_read221_rewind_phi_fu_12463_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_87_V_read221_rewind_phi_fu_12463_p6 = data_87_V_read221_phi_reg_24986.read();
    } else {
        ap_phi_mux_data_87_V_read221_rewind_phi_fu_12463_p6 = data_87_V_read221_rewind_reg_12459.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_880_V_read1014_phi_phi_fu_35299_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_880_V_read1014_phi_phi_fu_35299_p4 = ap_phi_mux_data_880_V_read1014_rewind_phi_fu_23565_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_880_V_read1014_phi_phi_fu_35299_p4 = data_880_V_read.read();
    } else {
        ap_phi_mux_data_880_V_read1014_phi_phi_fu_35299_p4 = ap_phi_reg_pp0_iter0_data_880_V_read1014_phi_reg_35295.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_880_V_read1014_rewind_phi_fu_23565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_880_V_read1014_rewind_phi_fu_23565_p6 = data_880_V_read1014_phi_reg_35295.read();
    } else {
        ap_phi_mux_data_880_V_read1014_rewind_phi_fu_23565_p6 = data_880_V_read1014_rewind_reg_23561.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_881_V_read1015_phi_phi_fu_35312_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_881_V_read1015_phi_phi_fu_35312_p4 = ap_phi_mux_data_881_V_read1015_rewind_phi_fu_23579_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_881_V_read1015_phi_phi_fu_35312_p4 = data_881_V_read.read();
    } else {
        ap_phi_mux_data_881_V_read1015_phi_phi_fu_35312_p4 = ap_phi_reg_pp0_iter0_data_881_V_read1015_phi_reg_35308.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_881_V_read1015_rewind_phi_fu_23579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_881_V_read1015_rewind_phi_fu_23579_p6 = data_881_V_read1015_phi_reg_35308.read();
    } else {
        ap_phi_mux_data_881_V_read1015_rewind_phi_fu_23579_p6 = data_881_V_read1015_rewind_reg_23575.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_882_V_read1016_phi_phi_fu_35325_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_882_V_read1016_phi_phi_fu_35325_p4 = ap_phi_mux_data_882_V_read1016_rewind_phi_fu_23593_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_882_V_read1016_phi_phi_fu_35325_p4 = data_882_V_read.read();
    } else {
        ap_phi_mux_data_882_V_read1016_phi_phi_fu_35325_p4 = ap_phi_reg_pp0_iter0_data_882_V_read1016_phi_reg_35321.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_882_V_read1016_rewind_phi_fu_23593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_882_V_read1016_rewind_phi_fu_23593_p6 = data_882_V_read1016_phi_reg_35321.read();
    } else {
        ap_phi_mux_data_882_V_read1016_rewind_phi_fu_23593_p6 = data_882_V_read1016_rewind_reg_23589.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_883_V_read1017_phi_phi_fu_35338_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_883_V_read1017_phi_phi_fu_35338_p4 = ap_phi_mux_data_883_V_read1017_rewind_phi_fu_23607_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_883_V_read1017_phi_phi_fu_35338_p4 = data_883_V_read.read();
    } else {
        ap_phi_mux_data_883_V_read1017_phi_phi_fu_35338_p4 = ap_phi_reg_pp0_iter0_data_883_V_read1017_phi_reg_35334.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_883_V_read1017_rewind_phi_fu_23607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_883_V_read1017_rewind_phi_fu_23607_p6 = data_883_V_read1017_phi_reg_35334.read();
    } else {
        ap_phi_mux_data_883_V_read1017_rewind_phi_fu_23607_p6 = data_883_V_read1017_rewind_reg_23603.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_884_V_read1018_phi_phi_fu_35351_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_884_V_read1018_phi_phi_fu_35351_p4 = ap_phi_mux_data_884_V_read1018_rewind_phi_fu_23621_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_884_V_read1018_phi_phi_fu_35351_p4 = data_884_V_read.read();
    } else {
        ap_phi_mux_data_884_V_read1018_phi_phi_fu_35351_p4 = ap_phi_reg_pp0_iter0_data_884_V_read1018_phi_reg_35347.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_884_V_read1018_rewind_phi_fu_23621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_884_V_read1018_rewind_phi_fu_23621_p6 = data_884_V_read1018_phi_reg_35347.read();
    } else {
        ap_phi_mux_data_884_V_read1018_rewind_phi_fu_23621_p6 = data_884_V_read1018_rewind_reg_23617.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_885_V_read1019_phi_phi_fu_35364_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_885_V_read1019_phi_phi_fu_35364_p4 = ap_phi_mux_data_885_V_read1019_rewind_phi_fu_23635_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_885_V_read1019_phi_phi_fu_35364_p4 = data_885_V_read.read();
    } else {
        ap_phi_mux_data_885_V_read1019_phi_phi_fu_35364_p4 = ap_phi_reg_pp0_iter0_data_885_V_read1019_phi_reg_35360.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_885_V_read1019_rewind_phi_fu_23635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_885_V_read1019_rewind_phi_fu_23635_p6 = data_885_V_read1019_phi_reg_35360.read();
    } else {
        ap_phi_mux_data_885_V_read1019_rewind_phi_fu_23635_p6 = data_885_V_read1019_rewind_reg_23631.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_886_V_read1020_phi_phi_fu_35377_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_886_V_read1020_phi_phi_fu_35377_p4 = ap_phi_mux_data_886_V_read1020_rewind_phi_fu_23649_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_886_V_read1020_phi_phi_fu_35377_p4 = data_886_V_read.read();
    } else {
        ap_phi_mux_data_886_V_read1020_phi_phi_fu_35377_p4 = ap_phi_reg_pp0_iter0_data_886_V_read1020_phi_reg_35373.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_886_V_read1020_rewind_phi_fu_23649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_886_V_read1020_rewind_phi_fu_23649_p6 = data_886_V_read1020_phi_reg_35373.read();
    } else {
        ap_phi_mux_data_886_V_read1020_rewind_phi_fu_23649_p6 = data_886_V_read1020_rewind_reg_23645.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_887_V_read1021_phi_phi_fu_35390_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_887_V_read1021_phi_phi_fu_35390_p4 = ap_phi_mux_data_887_V_read1021_rewind_phi_fu_23663_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_887_V_read1021_phi_phi_fu_35390_p4 = data_887_V_read.read();
    } else {
        ap_phi_mux_data_887_V_read1021_phi_phi_fu_35390_p4 = ap_phi_reg_pp0_iter0_data_887_V_read1021_phi_reg_35386.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_887_V_read1021_rewind_phi_fu_23663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_887_V_read1021_rewind_phi_fu_23663_p6 = data_887_V_read1021_phi_reg_35386.read();
    } else {
        ap_phi_mux_data_887_V_read1021_rewind_phi_fu_23663_p6 = data_887_V_read1021_rewind_reg_23659.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_888_V_read1022_phi_phi_fu_35403_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_888_V_read1022_phi_phi_fu_35403_p4 = ap_phi_mux_data_888_V_read1022_rewind_phi_fu_23677_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_888_V_read1022_phi_phi_fu_35403_p4 = data_888_V_read.read();
    } else {
        ap_phi_mux_data_888_V_read1022_phi_phi_fu_35403_p4 = ap_phi_reg_pp0_iter0_data_888_V_read1022_phi_reg_35399.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_888_V_read1022_rewind_phi_fu_23677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_888_V_read1022_rewind_phi_fu_23677_p6 = data_888_V_read1022_phi_reg_35399.read();
    } else {
        ap_phi_mux_data_888_V_read1022_rewind_phi_fu_23677_p6 = data_888_V_read1022_rewind_reg_23673.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_889_V_read1023_phi_phi_fu_35416_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_889_V_read1023_phi_phi_fu_35416_p4 = ap_phi_mux_data_889_V_read1023_rewind_phi_fu_23691_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_889_V_read1023_phi_phi_fu_35416_p4 = data_889_V_read.read();
    } else {
        ap_phi_mux_data_889_V_read1023_phi_phi_fu_35416_p4 = ap_phi_reg_pp0_iter0_data_889_V_read1023_phi_reg_35412.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_889_V_read1023_rewind_phi_fu_23691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_889_V_read1023_rewind_phi_fu_23691_p6 = data_889_V_read1023_phi_reg_35412.read();
    } else {
        ap_phi_mux_data_889_V_read1023_rewind_phi_fu_23691_p6 = data_889_V_read1023_rewind_reg_23687.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_88_V_read222_phi_phi_fu_25003_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_88_V_read222_phi_phi_fu_25003_p4 = ap_phi_mux_data_88_V_read222_rewind_phi_fu_12477_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_88_V_read222_phi_phi_fu_25003_p4 = data_88_V_read.read();
    } else {
        ap_phi_mux_data_88_V_read222_phi_phi_fu_25003_p4 = ap_phi_reg_pp0_iter0_data_88_V_read222_phi_reg_24999.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_88_V_read222_rewind_phi_fu_12477_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_88_V_read222_rewind_phi_fu_12477_p6 = data_88_V_read222_phi_reg_24999.read();
    } else {
        ap_phi_mux_data_88_V_read222_rewind_phi_fu_12477_p6 = data_88_V_read222_rewind_reg_12473.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_890_V_read1024_phi_phi_fu_35429_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_890_V_read1024_phi_phi_fu_35429_p4 = ap_phi_mux_data_890_V_read1024_rewind_phi_fu_23705_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_890_V_read1024_phi_phi_fu_35429_p4 = data_890_V_read.read();
    } else {
        ap_phi_mux_data_890_V_read1024_phi_phi_fu_35429_p4 = ap_phi_reg_pp0_iter0_data_890_V_read1024_phi_reg_35425.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_890_V_read1024_rewind_phi_fu_23705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_890_V_read1024_rewind_phi_fu_23705_p6 = data_890_V_read1024_phi_reg_35425.read();
    } else {
        ap_phi_mux_data_890_V_read1024_rewind_phi_fu_23705_p6 = data_890_V_read1024_rewind_reg_23701.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_891_V_read1025_phi_phi_fu_35442_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_891_V_read1025_phi_phi_fu_35442_p4 = ap_phi_mux_data_891_V_read1025_rewind_phi_fu_23719_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_891_V_read1025_phi_phi_fu_35442_p4 = data_891_V_read.read();
    } else {
        ap_phi_mux_data_891_V_read1025_phi_phi_fu_35442_p4 = ap_phi_reg_pp0_iter0_data_891_V_read1025_phi_reg_35438.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_891_V_read1025_rewind_phi_fu_23719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_891_V_read1025_rewind_phi_fu_23719_p6 = data_891_V_read1025_phi_reg_35438.read();
    } else {
        ap_phi_mux_data_891_V_read1025_rewind_phi_fu_23719_p6 = data_891_V_read1025_rewind_reg_23715.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_892_V_read1026_phi_phi_fu_35455_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_892_V_read1026_phi_phi_fu_35455_p4 = ap_phi_mux_data_892_V_read1026_rewind_phi_fu_23733_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_892_V_read1026_phi_phi_fu_35455_p4 = data_892_V_read.read();
    } else {
        ap_phi_mux_data_892_V_read1026_phi_phi_fu_35455_p4 = ap_phi_reg_pp0_iter0_data_892_V_read1026_phi_reg_35451.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_892_V_read1026_rewind_phi_fu_23733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_892_V_read1026_rewind_phi_fu_23733_p6 = data_892_V_read1026_phi_reg_35451.read();
    } else {
        ap_phi_mux_data_892_V_read1026_rewind_phi_fu_23733_p6 = data_892_V_read1026_rewind_reg_23729.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_893_V_read1027_phi_phi_fu_35468_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_893_V_read1027_phi_phi_fu_35468_p4 = ap_phi_mux_data_893_V_read1027_rewind_phi_fu_23747_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_893_V_read1027_phi_phi_fu_35468_p4 = data_893_V_read.read();
    } else {
        ap_phi_mux_data_893_V_read1027_phi_phi_fu_35468_p4 = ap_phi_reg_pp0_iter0_data_893_V_read1027_phi_reg_35464.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_893_V_read1027_rewind_phi_fu_23747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_893_V_read1027_rewind_phi_fu_23747_p6 = data_893_V_read1027_phi_reg_35464.read();
    } else {
        ap_phi_mux_data_893_V_read1027_rewind_phi_fu_23747_p6 = data_893_V_read1027_rewind_reg_23743.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_894_V_read1028_phi_phi_fu_35481_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_894_V_read1028_phi_phi_fu_35481_p4 = ap_phi_mux_data_894_V_read1028_rewind_phi_fu_23761_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_894_V_read1028_phi_phi_fu_35481_p4 = data_894_V_read.read();
    } else {
        ap_phi_mux_data_894_V_read1028_phi_phi_fu_35481_p4 = ap_phi_reg_pp0_iter0_data_894_V_read1028_phi_reg_35477.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_894_V_read1028_rewind_phi_fu_23761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_894_V_read1028_rewind_phi_fu_23761_p6 = data_894_V_read1028_phi_reg_35477.read();
    } else {
        ap_phi_mux_data_894_V_read1028_rewind_phi_fu_23761_p6 = data_894_V_read1028_rewind_reg_23757.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_895_V_read1029_phi_phi_fu_35494_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_895_V_read1029_phi_phi_fu_35494_p4 = ap_phi_mux_data_895_V_read1029_rewind_phi_fu_23775_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_895_V_read1029_phi_phi_fu_35494_p4 = data_895_V_read.read();
    } else {
        ap_phi_mux_data_895_V_read1029_phi_phi_fu_35494_p4 = ap_phi_reg_pp0_iter0_data_895_V_read1029_phi_reg_35490.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_895_V_read1029_rewind_phi_fu_23775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_895_V_read1029_rewind_phi_fu_23775_p6 = data_895_V_read1029_phi_reg_35490.read();
    } else {
        ap_phi_mux_data_895_V_read1029_rewind_phi_fu_23775_p6 = data_895_V_read1029_rewind_reg_23771.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_896_V_read1030_phi_phi_fu_35507_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_896_V_read1030_phi_phi_fu_35507_p4 = ap_phi_mux_data_896_V_read1030_rewind_phi_fu_23789_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_896_V_read1030_phi_phi_fu_35507_p4 = data_896_V_read.read();
    } else {
        ap_phi_mux_data_896_V_read1030_phi_phi_fu_35507_p4 = ap_phi_reg_pp0_iter0_data_896_V_read1030_phi_reg_35503.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_896_V_read1030_rewind_phi_fu_23789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_896_V_read1030_rewind_phi_fu_23789_p6 = data_896_V_read1030_phi_reg_35503.read();
    } else {
        ap_phi_mux_data_896_V_read1030_rewind_phi_fu_23789_p6 = data_896_V_read1030_rewind_reg_23785.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_897_V_read1031_phi_phi_fu_35520_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_897_V_read1031_phi_phi_fu_35520_p4 = ap_phi_mux_data_897_V_read1031_rewind_phi_fu_23803_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_897_V_read1031_phi_phi_fu_35520_p4 = data_897_V_read.read();
    } else {
        ap_phi_mux_data_897_V_read1031_phi_phi_fu_35520_p4 = ap_phi_reg_pp0_iter0_data_897_V_read1031_phi_reg_35516.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_897_V_read1031_rewind_phi_fu_23803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_897_V_read1031_rewind_phi_fu_23803_p6 = data_897_V_read1031_phi_reg_35516.read();
    } else {
        ap_phi_mux_data_897_V_read1031_rewind_phi_fu_23803_p6 = data_897_V_read1031_rewind_reg_23799.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_898_V_read1032_phi_phi_fu_35533_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_898_V_read1032_phi_phi_fu_35533_p4 = ap_phi_mux_data_898_V_read1032_rewind_phi_fu_23817_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_898_V_read1032_phi_phi_fu_35533_p4 = data_898_V_read.read();
    } else {
        ap_phi_mux_data_898_V_read1032_phi_phi_fu_35533_p4 = ap_phi_reg_pp0_iter0_data_898_V_read1032_phi_reg_35529.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_898_V_read1032_rewind_phi_fu_23817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_898_V_read1032_rewind_phi_fu_23817_p6 = data_898_V_read1032_phi_reg_35529.read();
    } else {
        ap_phi_mux_data_898_V_read1032_rewind_phi_fu_23817_p6 = data_898_V_read1032_rewind_reg_23813.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_899_V_read1033_phi_phi_fu_35546_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_899_V_read1033_phi_phi_fu_35546_p4 = ap_phi_mux_data_899_V_read1033_rewind_phi_fu_23831_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_899_V_read1033_phi_phi_fu_35546_p4 = data_899_V_read.read();
    } else {
        ap_phi_mux_data_899_V_read1033_phi_phi_fu_35546_p4 = ap_phi_reg_pp0_iter0_data_899_V_read1033_phi_reg_35542.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_899_V_read1033_rewind_phi_fu_23831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_899_V_read1033_rewind_phi_fu_23831_p6 = data_899_V_read1033_phi_reg_35542.read();
    } else {
        ap_phi_mux_data_899_V_read1033_rewind_phi_fu_23831_p6 = data_899_V_read1033_rewind_reg_23827.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_89_V_read223_phi_phi_fu_25016_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_89_V_read223_phi_phi_fu_25016_p4 = ap_phi_mux_data_89_V_read223_rewind_phi_fu_12491_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_89_V_read223_phi_phi_fu_25016_p4 = data_89_V_read.read();
    } else {
        ap_phi_mux_data_89_V_read223_phi_phi_fu_25016_p4 = ap_phi_reg_pp0_iter0_data_89_V_read223_phi_reg_25012.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_89_V_read223_rewind_phi_fu_12491_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_89_V_read223_rewind_phi_fu_12491_p6 = data_89_V_read223_phi_reg_25012.read();
    } else {
        ap_phi_mux_data_89_V_read223_rewind_phi_fu_12491_p6 = data_89_V_read223_rewind_reg_12487.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_8_V_read142_phi_phi_fu_23963_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_8_V_read142_phi_phi_fu_23963_p4 = ap_phi_mux_data_8_V_read142_rewind_phi_fu_11357_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_8_V_read142_phi_phi_fu_23963_p4 = data_8_V_read.read();
    } else {
        ap_phi_mux_data_8_V_read142_phi_phi_fu_23963_p4 = ap_phi_reg_pp0_iter0_data_8_V_read142_phi_reg_23959.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_8_V_read142_rewind_phi_fu_11357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_8_V_read142_rewind_phi_fu_11357_p6 = data_8_V_read142_phi_reg_23959.read();
    } else {
        ap_phi_mux_data_8_V_read142_rewind_phi_fu_11357_p6 = data_8_V_read142_rewind_reg_11353.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_90_V_read224_phi_phi_fu_25029_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_90_V_read224_phi_phi_fu_25029_p4 = ap_phi_mux_data_90_V_read224_rewind_phi_fu_12505_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_90_V_read224_phi_phi_fu_25029_p4 = data_90_V_read.read();
    } else {
        ap_phi_mux_data_90_V_read224_phi_phi_fu_25029_p4 = ap_phi_reg_pp0_iter0_data_90_V_read224_phi_reg_25025.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_90_V_read224_rewind_phi_fu_12505_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_90_V_read224_rewind_phi_fu_12505_p6 = data_90_V_read224_phi_reg_25025.read();
    } else {
        ap_phi_mux_data_90_V_read224_rewind_phi_fu_12505_p6 = data_90_V_read224_rewind_reg_12501.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_91_V_read225_phi_phi_fu_25042_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_91_V_read225_phi_phi_fu_25042_p4 = ap_phi_mux_data_91_V_read225_rewind_phi_fu_12519_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_91_V_read225_phi_phi_fu_25042_p4 = data_91_V_read.read();
    } else {
        ap_phi_mux_data_91_V_read225_phi_phi_fu_25042_p4 = ap_phi_reg_pp0_iter0_data_91_V_read225_phi_reg_25038.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_91_V_read225_rewind_phi_fu_12519_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_91_V_read225_rewind_phi_fu_12519_p6 = data_91_V_read225_phi_reg_25038.read();
    } else {
        ap_phi_mux_data_91_V_read225_rewind_phi_fu_12519_p6 = data_91_V_read225_rewind_reg_12515.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_92_V_read226_phi_phi_fu_25055_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_92_V_read226_phi_phi_fu_25055_p4 = ap_phi_mux_data_92_V_read226_rewind_phi_fu_12533_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_92_V_read226_phi_phi_fu_25055_p4 = data_92_V_read.read();
    } else {
        ap_phi_mux_data_92_V_read226_phi_phi_fu_25055_p4 = ap_phi_reg_pp0_iter0_data_92_V_read226_phi_reg_25051.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_92_V_read226_rewind_phi_fu_12533_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_92_V_read226_rewind_phi_fu_12533_p6 = data_92_V_read226_phi_reg_25051.read();
    } else {
        ap_phi_mux_data_92_V_read226_rewind_phi_fu_12533_p6 = data_92_V_read226_rewind_reg_12529.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_93_V_read227_phi_phi_fu_25068_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_93_V_read227_phi_phi_fu_25068_p4 = ap_phi_mux_data_93_V_read227_rewind_phi_fu_12547_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_93_V_read227_phi_phi_fu_25068_p4 = data_93_V_read.read();
    } else {
        ap_phi_mux_data_93_V_read227_phi_phi_fu_25068_p4 = ap_phi_reg_pp0_iter0_data_93_V_read227_phi_reg_25064.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_93_V_read227_rewind_phi_fu_12547_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_93_V_read227_rewind_phi_fu_12547_p6 = data_93_V_read227_phi_reg_25064.read();
    } else {
        ap_phi_mux_data_93_V_read227_rewind_phi_fu_12547_p6 = data_93_V_read227_rewind_reg_12543.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_94_V_read228_phi_phi_fu_25081_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_94_V_read228_phi_phi_fu_25081_p4 = ap_phi_mux_data_94_V_read228_rewind_phi_fu_12561_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_94_V_read228_phi_phi_fu_25081_p4 = data_94_V_read.read();
    } else {
        ap_phi_mux_data_94_V_read228_phi_phi_fu_25081_p4 = ap_phi_reg_pp0_iter0_data_94_V_read228_phi_reg_25077.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_94_V_read228_rewind_phi_fu_12561_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_94_V_read228_rewind_phi_fu_12561_p6 = data_94_V_read228_phi_reg_25077.read();
    } else {
        ap_phi_mux_data_94_V_read228_rewind_phi_fu_12561_p6 = data_94_V_read228_rewind_reg_12557.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_95_V_read229_phi_phi_fu_25094_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_95_V_read229_phi_phi_fu_25094_p4 = ap_phi_mux_data_95_V_read229_rewind_phi_fu_12575_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_95_V_read229_phi_phi_fu_25094_p4 = data_95_V_read.read();
    } else {
        ap_phi_mux_data_95_V_read229_phi_phi_fu_25094_p4 = ap_phi_reg_pp0_iter0_data_95_V_read229_phi_reg_25090.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_95_V_read229_rewind_phi_fu_12575_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_95_V_read229_rewind_phi_fu_12575_p6 = data_95_V_read229_phi_reg_25090.read();
    } else {
        ap_phi_mux_data_95_V_read229_rewind_phi_fu_12575_p6 = data_95_V_read229_rewind_reg_12571.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_96_V_read230_phi_phi_fu_25107_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_96_V_read230_phi_phi_fu_25107_p4 = ap_phi_mux_data_96_V_read230_rewind_phi_fu_12589_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_96_V_read230_phi_phi_fu_25107_p4 = data_96_V_read.read();
    } else {
        ap_phi_mux_data_96_V_read230_phi_phi_fu_25107_p4 = ap_phi_reg_pp0_iter0_data_96_V_read230_phi_reg_25103.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_96_V_read230_rewind_phi_fu_12589_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_96_V_read230_rewind_phi_fu_12589_p6 = data_96_V_read230_phi_reg_25103.read();
    } else {
        ap_phi_mux_data_96_V_read230_rewind_phi_fu_12589_p6 = data_96_V_read230_rewind_reg_12585.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_97_V_read231_phi_phi_fu_25120_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_97_V_read231_phi_phi_fu_25120_p4 = ap_phi_mux_data_97_V_read231_rewind_phi_fu_12603_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_97_V_read231_phi_phi_fu_25120_p4 = data_97_V_read.read();
    } else {
        ap_phi_mux_data_97_V_read231_phi_phi_fu_25120_p4 = ap_phi_reg_pp0_iter0_data_97_V_read231_phi_reg_25116.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_97_V_read231_rewind_phi_fu_12603_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_97_V_read231_rewind_phi_fu_12603_p6 = data_97_V_read231_phi_reg_25116.read();
    } else {
        ap_phi_mux_data_97_V_read231_rewind_phi_fu_12603_p6 = data_97_V_read231_rewind_reg_12599.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_98_V_read232_phi_phi_fu_25133_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_98_V_read232_phi_phi_fu_25133_p4 = ap_phi_mux_data_98_V_read232_rewind_phi_fu_12617_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_98_V_read232_phi_phi_fu_25133_p4 = data_98_V_read.read();
    } else {
        ap_phi_mux_data_98_V_read232_phi_phi_fu_25133_p4 = ap_phi_reg_pp0_iter0_data_98_V_read232_phi_reg_25129.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_98_V_read232_rewind_phi_fu_12617_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_98_V_read232_rewind_phi_fu_12617_p6 = data_98_V_read232_phi_reg_25129.read();
    } else {
        ap_phi_mux_data_98_V_read232_rewind_phi_fu_12617_p6 = data_98_V_read232_rewind_reg_12613.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_99_V_read233_phi_phi_fu_25146_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_99_V_read233_phi_phi_fu_25146_p4 = ap_phi_mux_data_99_V_read233_rewind_phi_fu_12631_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_99_V_read233_phi_phi_fu_25146_p4 = data_99_V_read.read();
    } else {
        ap_phi_mux_data_99_V_read233_phi_phi_fu_25146_p4 = ap_phi_reg_pp0_iter0_data_99_V_read233_phi_reg_25142.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_99_V_read233_rewind_phi_fu_12631_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_99_V_read233_rewind_phi_fu_12631_p6 = data_99_V_read233_phi_reg_25142.read();
    } else {
        ap_phi_mux_data_99_V_read233_rewind_phi_fu_12631_p6 = data_99_V_read233_rewind_reg_12627.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_9_V_read143_phi_phi_fu_23976_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_9_V_read143_phi_phi_fu_23976_p4 = ap_phi_mux_data_9_V_read143_rewind_phi_fu_11371_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_9_V_read143_phi_phi_fu_23976_p4 = data_9_V_read.read();
    } else {
        ap_phi_mux_data_9_V_read143_phi_phi_fu_23976_p4 = ap_phi_reg_pp0_iter0_data_9_V_read143_phi_reg_23972.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_9_V_read143_rewind_phi_fu_11371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_9_V_read143_rewind_phi_fu_11371_p6 = data_9_V_read143_phi_reg_23972.read();
    } else {
        ap_phi_mux_data_9_V_read143_rewind_phi_fu_11371_p6 = data_9_V_read143_rewind_reg_11367.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_do_init_phi_fu_11229_p6() {
    if (esl_seteq<1,1,1>(ap_condition_6855.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_reg_78480.read())) {
            ap_phi_mux_do_init_phi_fu_11229_p6 = ap_const_lv1_1;
        } else if (esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0)) {
            ap_phi_mux_do_init_phi_fu_11229_p6 = ap_const_lv1_0;
        } else {
            ap_phi_mux_do_init_phi_fu_11229_p6 = do_init_reg_11225.read();
        }
    } else {
        ap_phi_mux_do_init_phi_fu_11229_p6 = do_init_reg_11225.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_w_index133_phi_fu_23845_p6() {
    if (esl_seteq<1,1,1>(ap_condition_6855.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln64_reg_78480.read())) {
            ap_phi_mux_w_index133_phi_fu_23845_p6 = ap_const_lv6_0;
        } else if (esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0)) {
            ap_phi_mux_w_index133_phi_fu_23845_p6 = w_index_reg_78390.read();
        } else {
            ap_phi_mux_w_index133_phi_fu_23845_p6 = w_index133_reg_23841.read();
        }
    } else {
        ap_phi_mux_w_index133_phi_fu_23845_p6 = w_index133_reg_23841.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_0_V_read134_phi_reg_23855() {
    ap_phi_reg_pp0_iter0_data_0_V_read134_phi_reg_23855 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_100_V_read234_phi_reg_25155() {
    ap_phi_reg_pp0_iter0_data_100_V_read234_phi_reg_25155 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_101_V_read235_phi_reg_25168() {
    ap_phi_reg_pp0_iter0_data_101_V_read235_phi_reg_25168 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_102_V_read236_phi_reg_25181() {
    ap_phi_reg_pp0_iter0_data_102_V_read236_phi_reg_25181 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_103_V_read237_phi_reg_25194() {
    ap_phi_reg_pp0_iter0_data_103_V_read237_phi_reg_25194 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_104_V_read238_phi_reg_25207() {
    ap_phi_reg_pp0_iter0_data_104_V_read238_phi_reg_25207 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_105_V_read239_phi_reg_25220() {
    ap_phi_reg_pp0_iter0_data_105_V_read239_phi_reg_25220 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_106_V_read240_phi_reg_25233() {
    ap_phi_reg_pp0_iter0_data_106_V_read240_phi_reg_25233 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_107_V_read241_phi_reg_25246() {
    ap_phi_reg_pp0_iter0_data_107_V_read241_phi_reg_25246 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_108_V_read242_phi_reg_25259() {
    ap_phi_reg_pp0_iter0_data_108_V_read242_phi_reg_25259 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_109_V_read243_phi_reg_25272() {
    ap_phi_reg_pp0_iter0_data_109_V_read243_phi_reg_25272 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_10_V_read144_phi_reg_23985() {
    ap_phi_reg_pp0_iter0_data_10_V_read144_phi_reg_23985 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_110_V_read244_phi_reg_25285() {
    ap_phi_reg_pp0_iter0_data_110_V_read244_phi_reg_25285 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_111_V_read245_phi_reg_25298() {
    ap_phi_reg_pp0_iter0_data_111_V_read245_phi_reg_25298 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_112_V_read246_phi_reg_25311() {
    ap_phi_reg_pp0_iter0_data_112_V_read246_phi_reg_25311 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_113_V_read247_phi_reg_25324() {
    ap_phi_reg_pp0_iter0_data_113_V_read247_phi_reg_25324 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_114_V_read248_phi_reg_25337() {
    ap_phi_reg_pp0_iter0_data_114_V_read248_phi_reg_25337 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_115_V_read249_phi_reg_25350() {
    ap_phi_reg_pp0_iter0_data_115_V_read249_phi_reg_25350 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_116_V_read250_phi_reg_25363() {
    ap_phi_reg_pp0_iter0_data_116_V_read250_phi_reg_25363 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_117_V_read251_phi_reg_25376() {
    ap_phi_reg_pp0_iter0_data_117_V_read251_phi_reg_25376 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_118_V_read252_phi_reg_25389() {
    ap_phi_reg_pp0_iter0_data_118_V_read252_phi_reg_25389 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_119_V_read253_phi_reg_25402() {
    ap_phi_reg_pp0_iter0_data_119_V_read253_phi_reg_25402 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_11_V_read145_phi_reg_23998() {
    ap_phi_reg_pp0_iter0_data_11_V_read145_phi_reg_23998 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_120_V_read254_phi_reg_25415() {
    ap_phi_reg_pp0_iter0_data_120_V_read254_phi_reg_25415 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_121_V_read255_phi_reg_25428() {
    ap_phi_reg_pp0_iter0_data_121_V_read255_phi_reg_25428 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_122_V_read256_phi_reg_25441() {
    ap_phi_reg_pp0_iter0_data_122_V_read256_phi_reg_25441 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_123_V_read257_phi_reg_25454() {
    ap_phi_reg_pp0_iter0_data_123_V_read257_phi_reg_25454 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_124_V_read258_phi_reg_25467() {
    ap_phi_reg_pp0_iter0_data_124_V_read258_phi_reg_25467 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_125_V_read259_phi_reg_25480() {
    ap_phi_reg_pp0_iter0_data_125_V_read259_phi_reg_25480 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_126_V_read260_phi_reg_25493() {
    ap_phi_reg_pp0_iter0_data_126_V_read260_phi_reg_25493 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_127_V_read261_phi_reg_25506() {
    ap_phi_reg_pp0_iter0_data_127_V_read261_phi_reg_25506 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_128_V_read262_phi_reg_25519() {
    ap_phi_reg_pp0_iter0_data_128_V_read262_phi_reg_25519 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_129_V_read263_phi_reg_25532() {
    ap_phi_reg_pp0_iter0_data_129_V_read263_phi_reg_25532 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_12_V_read146_phi_reg_24011() {
    ap_phi_reg_pp0_iter0_data_12_V_read146_phi_reg_24011 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_130_V_read264_phi_reg_25545() {
    ap_phi_reg_pp0_iter0_data_130_V_read264_phi_reg_25545 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_131_V_read265_phi_reg_25558() {
    ap_phi_reg_pp0_iter0_data_131_V_read265_phi_reg_25558 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_132_V_read266_phi_reg_25571() {
    ap_phi_reg_pp0_iter0_data_132_V_read266_phi_reg_25571 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_133_V_read267_phi_reg_25584() {
    ap_phi_reg_pp0_iter0_data_133_V_read267_phi_reg_25584 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_134_V_read268_phi_reg_25597() {
    ap_phi_reg_pp0_iter0_data_134_V_read268_phi_reg_25597 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_135_V_read269_phi_reg_25610() {
    ap_phi_reg_pp0_iter0_data_135_V_read269_phi_reg_25610 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_136_V_read270_phi_reg_25623() {
    ap_phi_reg_pp0_iter0_data_136_V_read270_phi_reg_25623 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_137_V_read271_phi_reg_25636() {
    ap_phi_reg_pp0_iter0_data_137_V_read271_phi_reg_25636 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_138_V_read272_phi_reg_25649() {
    ap_phi_reg_pp0_iter0_data_138_V_read272_phi_reg_25649 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_139_V_read273_phi_reg_25662() {
    ap_phi_reg_pp0_iter0_data_139_V_read273_phi_reg_25662 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_13_V_read147_phi_reg_24024() {
    ap_phi_reg_pp0_iter0_data_13_V_read147_phi_reg_24024 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_140_V_read274_phi_reg_25675() {
    ap_phi_reg_pp0_iter0_data_140_V_read274_phi_reg_25675 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_141_V_read275_phi_reg_25688() {
    ap_phi_reg_pp0_iter0_data_141_V_read275_phi_reg_25688 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_142_V_read276_phi_reg_25701() {
    ap_phi_reg_pp0_iter0_data_142_V_read276_phi_reg_25701 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_143_V_read277_phi_reg_25714() {
    ap_phi_reg_pp0_iter0_data_143_V_read277_phi_reg_25714 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_144_V_read278_phi_reg_25727() {
    ap_phi_reg_pp0_iter0_data_144_V_read278_phi_reg_25727 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_145_V_read279_phi_reg_25740() {
    ap_phi_reg_pp0_iter0_data_145_V_read279_phi_reg_25740 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_146_V_read280_phi_reg_25753() {
    ap_phi_reg_pp0_iter0_data_146_V_read280_phi_reg_25753 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_147_V_read281_phi_reg_25766() {
    ap_phi_reg_pp0_iter0_data_147_V_read281_phi_reg_25766 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_148_V_read282_phi_reg_25779() {
    ap_phi_reg_pp0_iter0_data_148_V_read282_phi_reg_25779 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_149_V_read283_phi_reg_25792() {
    ap_phi_reg_pp0_iter0_data_149_V_read283_phi_reg_25792 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_14_V_read148_phi_reg_24037() {
    ap_phi_reg_pp0_iter0_data_14_V_read148_phi_reg_24037 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_150_V_read284_phi_reg_25805() {
    ap_phi_reg_pp0_iter0_data_150_V_read284_phi_reg_25805 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_151_V_read285_phi_reg_25818() {
    ap_phi_reg_pp0_iter0_data_151_V_read285_phi_reg_25818 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_152_V_read286_phi_reg_25831() {
    ap_phi_reg_pp0_iter0_data_152_V_read286_phi_reg_25831 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_153_V_read287_phi_reg_25844() {
    ap_phi_reg_pp0_iter0_data_153_V_read287_phi_reg_25844 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_154_V_read288_phi_reg_25857() {
    ap_phi_reg_pp0_iter0_data_154_V_read288_phi_reg_25857 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_155_V_read289_phi_reg_25870() {
    ap_phi_reg_pp0_iter0_data_155_V_read289_phi_reg_25870 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_156_V_read290_phi_reg_25883() {
    ap_phi_reg_pp0_iter0_data_156_V_read290_phi_reg_25883 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_157_V_read291_phi_reg_25896() {
    ap_phi_reg_pp0_iter0_data_157_V_read291_phi_reg_25896 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_158_V_read292_phi_reg_25909() {
    ap_phi_reg_pp0_iter0_data_158_V_read292_phi_reg_25909 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_159_V_read293_phi_reg_25922() {
    ap_phi_reg_pp0_iter0_data_159_V_read293_phi_reg_25922 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_15_V_read149_phi_reg_24050() {
    ap_phi_reg_pp0_iter0_data_15_V_read149_phi_reg_24050 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_160_V_read294_phi_reg_25935() {
    ap_phi_reg_pp0_iter0_data_160_V_read294_phi_reg_25935 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_161_V_read295_phi_reg_25948() {
    ap_phi_reg_pp0_iter0_data_161_V_read295_phi_reg_25948 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_162_V_read296_phi_reg_25961() {
    ap_phi_reg_pp0_iter0_data_162_V_read296_phi_reg_25961 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_163_V_read297_phi_reg_25974() {
    ap_phi_reg_pp0_iter0_data_163_V_read297_phi_reg_25974 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_164_V_read298_phi_reg_25987() {
    ap_phi_reg_pp0_iter0_data_164_V_read298_phi_reg_25987 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_165_V_read299_phi_reg_26000() {
    ap_phi_reg_pp0_iter0_data_165_V_read299_phi_reg_26000 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_166_V_read300_phi_reg_26013() {
    ap_phi_reg_pp0_iter0_data_166_V_read300_phi_reg_26013 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_167_V_read301_phi_reg_26026() {
    ap_phi_reg_pp0_iter0_data_167_V_read301_phi_reg_26026 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_168_V_read302_phi_reg_26039() {
    ap_phi_reg_pp0_iter0_data_168_V_read302_phi_reg_26039 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_169_V_read303_phi_reg_26052() {
    ap_phi_reg_pp0_iter0_data_169_V_read303_phi_reg_26052 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_16_V_read150_phi_reg_24063() {
    ap_phi_reg_pp0_iter0_data_16_V_read150_phi_reg_24063 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_170_V_read304_phi_reg_26065() {
    ap_phi_reg_pp0_iter0_data_170_V_read304_phi_reg_26065 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_171_V_read305_phi_reg_26078() {
    ap_phi_reg_pp0_iter0_data_171_V_read305_phi_reg_26078 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_172_V_read306_phi_reg_26091() {
    ap_phi_reg_pp0_iter0_data_172_V_read306_phi_reg_26091 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_173_V_read307_phi_reg_26104() {
    ap_phi_reg_pp0_iter0_data_173_V_read307_phi_reg_26104 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_174_V_read308_phi_reg_26117() {
    ap_phi_reg_pp0_iter0_data_174_V_read308_phi_reg_26117 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_175_V_read309_phi_reg_26130() {
    ap_phi_reg_pp0_iter0_data_175_V_read309_phi_reg_26130 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_176_V_read310_phi_reg_26143() {
    ap_phi_reg_pp0_iter0_data_176_V_read310_phi_reg_26143 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_177_V_read311_phi_reg_26156() {
    ap_phi_reg_pp0_iter0_data_177_V_read311_phi_reg_26156 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_178_V_read312_phi_reg_26169() {
    ap_phi_reg_pp0_iter0_data_178_V_read312_phi_reg_26169 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_179_V_read313_phi_reg_26182() {
    ap_phi_reg_pp0_iter0_data_179_V_read313_phi_reg_26182 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_17_V_read151_phi_reg_24076() {
    ap_phi_reg_pp0_iter0_data_17_V_read151_phi_reg_24076 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_180_V_read314_phi_reg_26195() {
    ap_phi_reg_pp0_iter0_data_180_V_read314_phi_reg_26195 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_181_V_read315_phi_reg_26208() {
    ap_phi_reg_pp0_iter0_data_181_V_read315_phi_reg_26208 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_182_V_read316_phi_reg_26221() {
    ap_phi_reg_pp0_iter0_data_182_V_read316_phi_reg_26221 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_183_V_read317_phi_reg_26234() {
    ap_phi_reg_pp0_iter0_data_183_V_read317_phi_reg_26234 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_184_V_read318_phi_reg_26247() {
    ap_phi_reg_pp0_iter0_data_184_V_read318_phi_reg_26247 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_185_V_read319_phi_reg_26260() {
    ap_phi_reg_pp0_iter0_data_185_V_read319_phi_reg_26260 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_186_V_read320_phi_reg_26273() {
    ap_phi_reg_pp0_iter0_data_186_V_read320_phi_reg_26273 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_187_V_read321_phi_reg_26286() {
    ap_phi_reg_pp0_iter0_data_187_V_read321_phi_reg_26286 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_188_V_read322_phi_reg_26299() {
    ap_phi_reg_pp0_iter0_data_188_V_read322_phi_reg_26299 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_189_V_read323_phi_reg_26312() {
    ap_phi_reg_pp0_iter0_data_189_V_read323_phi_reg_26312 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_18_V_read152_phi_reg_24089() {
    ap_phi_reg_pp0_iter0_data_18_V_read152_phi_reg_24089 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_190_V_read324_phi_reg_26325() {
    ap_phi_reg_pp0_iter0_data_190_V_read324_phi_reg_26325 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_191_V_read325_phi_reg_26338() {
    ap_phi_reg_pp0_iter0_data_191_V_read325_phi_reg_26338 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_192_V_read326_phi_reg_26351() {
    ap_phi_reg_pp0_iter0_data_192_V_read326_phi_reg_26351 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_193_V_read327_phi_reg_26364() {
    ap_phi_reg_pp0_iter0_data_193_V_read327_phi_reg_26364 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_194_V_read328_phi_reg_26377() {
    ap_phi_reg_pp0_iter0_data_194_V_read328_phi_reg_26377 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_195_V_read329_phi_reg_26390() {
    ap_phi_reg_pp0_iter0_data_195_V_read329_phi_reg_26390 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_196_V_read330_phi_reg_26403() {
    ap_phi_reg_pp0_iter0_data_196_V_read330_phi_reg_26403 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_197_V_read331_phi_reg_26416() {
    ap_phi_reg_pp0_iter0_data_197_V_read331_phi_reg_26416 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_198_V_read332_phi_reg_26429() {
    ap_phi_reg_pp0_iter0_data_198_V_read332_phi_reg_26429 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_199_V_read333_phi_reg_26442() {
    ap_phi_reg_pp0_iter0_data_199_V_read333_phi_reg_26442 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_19_V_read153_phi_reg_24102() {
    ap_phi_reg_pp0_iter0_data_19_V_read153_phi_reg_24102 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_1_V_read135_phi_reg_23868() {
    ap_phi_reg_pp0_iter0_data_1_V_read135_phi_reg_23868 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_200_V_read334_phi_reg_26455() {
    ap_phi_reg_pp0_iter0_data_200_V_read334_phi_reg_26455 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_201_V_read335_phi_reg_26468() {
    ap_phi_reg_pp0_iter0_data_201_V_read335_phi_reg_26468 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_202_V_read336_phi_reg_26481() {
    ap_phi_reg_pp0_iter0_data_202_V_read336_phi_reg_26481 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_203_V_read337_phi_reg_26494() {
    ap_phi_reg_pp0_iter0_data_203_V_read337_phi_reg_26494 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_204_V_read338_phi_reg_26507() {
    ap_phi_reg_pp0_iter0_data_204_V_read338_phi_reg_26507 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_205_V_read339_phi_reg_26520() {
    ap_phi_reg_pp0_iter0_data_205_V_read339_phi_reg_26520 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_206_V_read340_phi_reg_26533() {
    ap_phi_reg_pp0_iter0_data_206_V_read340_phi_reg_26533 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_207_V_read341_phi_reg_26546() {
    ap_phi_reg_pp0_iter0_data_207_V_read341_phi_reg_26546 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_208_V_read342_phi_reg_26559() {
    ap_phi_reg_pp0_iter0_data_208_V_read342_phi_reg_26559 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_209_V_read343_phi_reg_26572() {
    ap_phi_reg_pp0_iter0_data_209_V_read343_phi_reg_26572 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_20_V_read154_phi_reg_24115() {
    ap_phi_reg_pp0_iter0_data_20_V_read154_phi_reg_24115 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_210_V_read344_phi_reg_26585() {
    ap_phi_reg_pp0_iter0_data_210_V_read344_phi_reg_26585 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_211_V_read345_phi_reg_26598() {
    ap_phi_reg_pp0_iter0_data_211_V_read345_phi_reg_26598 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_212_V_read346_phi_reg_26611() {
    ap_phi_reg_pp0_iter0_data_212_V_read346_phi_reg_26611 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_213_V_read347_phi_reg_26624() {
    ap_phi_reg_pp0_iter0_data_213_V_read347_phi_reg_26624 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_214_V_read348_phi_reg_26637() {
    ap_phi_reg_pp0_iter0_data_214_V_read348_phi_reg_26637 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_215_V_read349_phi_reg_26650() {
    ap_phi_reg_pp0_iter0_data_215_V_read349_phi_reg_26650 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_216_V_read350_phi_reg_26663() {
    ap_phi_reg_pp0_iter0_data_216_V_read350_phi_reg_26663 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_217_V_read351_phi_reg_26676() {
    ap_phi_reg_pp0_iter0_data_217_V_read351_phi_reg_26676 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_218_V_read352_phi_reg_26689() {
    ap_phi_reg_pp0_iter0_data_218_V_read352_phi_reg_26689 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_219_V_read353_phi_reg_26702() {
    ap_phi_reg_pp0_iter0_data_219_V_read353_phi_reg_26702 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_21_V_read155_phi_reg_24128() {
    ap_phi_reg_pp0_iter0_data_21_V_read155_phi_reg_24128 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_220_V_read354_phi_reg_26715() {
    ap_phi_reg_pp0_iter0_data_220_V_read354_phi_reg_26715 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_221_V_read355_phi_reg_26728() {
    ap_phi_reg_pp0_iter0_data_221_V_read355_phi_reg_26728 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_222_V_read356_phi_reg_26741() {
    ap_phi_reg_pp0_iter0_data_222_V_read356_phi_reg_26741 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_223_V_read357_phi_reg_26754() {
    ap_phi_reg_pp0_iter0_data_223_V_read357_phi_reg_26754 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_224_V_read358_phi_reg_26767() {
    ap_phi_reg_pp0_iter0_data_224_V_read358_phi_reg_26767 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_225_V_read359_phi_reg_26780() {
    ap_phi_reg_pp0_iter0_data_225_V_read359_phi_reg_26780 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_226_V_read360_phi_reg_26793() {
    ap_phi_reg_pp0_iter0_data_226_V_read360_phi_reg_26793 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_227_V_read361_phi_reg_26806() {
    ap_phi_reg_pp0_iter0_data_227_V_read361_phi_reg_26806 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_228_V_read362_phi_reg_26819() {
    ap_phi_reg_pp0_iter0_data_228_V_read362_phi_reg_26819 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_229_V_read363_phi_reg_26832() {
    ap_phi_reg_pp0_iter0_data_229_V_read363_phi_reg_26832 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_22_V_read156_phi_reg_24141() {
    ap_phi_reg_pp0_iter0_data_22_V_read156_phi_reg_24141 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_230_V_read364_phi_reg_26845() {
    ap_phi_reg_pp0_iter0_data_230_V_read364_phi_reg_26845 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_231_V_read365_phi_reg_26858() {
    ap_phi_reg_pp0_iter0_data_231_V_read365_phi_reg_26858 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_232_V_read366_phi_reg_26871() {
    ap_phi_reg_pp0_iter0_data_232_V_read366_phi_reg_26871 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_233_V_read367_phi_reg_26884() {
    ap_phi_reg_pp0_iter0_data_233_V_read367_phi_reg_26884 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_234_V_read368_phi_reg_26897() {
    ap_phi_reg_pp0_iter0_data_234_V_read368_phi_reg_26897 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_235_V_read369_phi_reg_26910() {
    ap_phi_reg_pp0_iter0_data_235_V_read369_phi_reg_26910 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_236_V_read370_phi_reg_26923() {
    ap_phi_reg_pp0_iter0_data_236_V_read370_phi_reg_26923 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_237_V_read371_phi_reg_26936() {
    ap_phi_reg_pp0_iter0_data_237_V_read371_phi_reg_26936 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_238_V_read372_phi_reg_26949() {
    ap_phi_reg_pp0_iter0_data_238_V_read372_phi_reg_26949 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_239_V_read373_phi_reg_26962() {
    ap_phi_reg_pp0_iter0_data_239_V_read373_phi_reg_26962 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_23_V_read157_phi_reg_24154() {
    ap_phi_reg_pp0_iter0_data_23_V_read157_phi_reg_24154 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_240_V_read374_phi_reg_26975() {
    ap_phi_reg_pp0_iter0_data_240_V_read374_phi_reg_26975 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_241_V_read375_phi_reg_26988() {
    ap_phi_reg_pp0_iter0_data_241_V_read375_phi_reg_26988 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_242_V_read376_phi_reg_27001() {
    ap_phi_reg_pp0_iter0_data_242_V_read376_phi_reg_27001 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_243_V_read377_phi_reg_27014() {
    ap_phi_reg_pp0_iter0_data_243_V_read377_phi_reg_27014 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_244_V_read378_phi_reg_27027() {
    ap_phi_reg_pp0_iter0_data_244_V_read378_phi_reg_27027 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_245_V_read379_phi_reg_27040() {
    ap_phi_reg_pp0_iter0_data_245_V_read379_phi_reg_27040 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_246_V_read380_phi_reg_27053() {
    ap_phi_reg_pp0_iter0_data_246_V_read380_phi_reg_27053 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_247_V_read381_phi_reg_27066() {
    ap_phi_reg_pp0_iter0_data_247_V_read381_phi_reg_27066 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_248_V_read382_phi_reg_27079() {
    ap_phi_reg_pp0_iter0_data_248_V_read382_phi_reg_27079 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_249_V_read383_phi_reg_27092() {
    ap_phi_reg_pp0_iter0_data_249_V_read383_phi_reg_27092 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_24_V_read158_phi_reg_24167() {
    ap_phi_reg_pp0_iter0_data_24_V_read158_phi_reg_24167 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_250_V_read384_phi_reg_27105() {
    ap_phi_reg_pp0_iter0_data_250_V_read384_phi_reg_27105 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_251_V_read385_phi_reg_27118() {
    ap_phi_reg_pp0_iter0_data_251_V_read385_phi_reg_27118 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_252_V_read386_phi_reg_27131() {
    ap_phi_reg_pp0_iter0_data_252_V_read386_phi_reg_27131 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_253_V_read387_phi_reg_27144() {
    ap_phi_reg_pp0_iter0_data_253_V_read387_phi_reg_27144 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_254_V_read388_phi_reg_27157() {
    ap_phi_reg_pp0_iter0_data_254_V_read388_phi_reg_27157 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_255_V_read389_phi_reg_27170() {
    ap_phi_reg_pp0_iter0_data_255_V_read389_phi_reg_27170 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_256_V_read390_phi_reg_27183() {
    ap_phi_reg_pp0_iter0_data_256_V_read390_phi_reg_27183 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_257_V_read391_phi_reg_27196() {
    ap_phi_reg_pp0_iter0_data_257_V_read391_phi_reg_27196 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_258_V_read392_phi_reg_27209() {
    ap_phi_reg_pp0_iter0_data_258_V_read392_phi_reg_27209 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_259_V_read393_phi_reg_27222() {
    ap_phi_reg_pp0_iter0_data_259_V_read393_phi_reg_27222 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_25_V_read159_phi_reg_24180() {
    ap_phi_reg_pp0_iter0_data_25_V_read159_phi_reg_24180 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_260_V_read394_phi_reg_27235() {
    ap_phi_reg_pp0_iter0_data_260_V_read394_phi_reg_27235 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_261_V_read395_phi_reg_27248() {
    ap_phi_reg_pp0_iter0_data_261_V_read395_phi_reg_27248 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_262_V_read396_phi_reg_27261() {
    ap_phi_reg_pp0_iter0_data_262_V_read396_phi_reg_27261 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_263_V_read397_phi_reg_27274() {
    ap_phi_reg_pp0_iter0_data_263_V_read397_phi_reg_27274 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_264_V_read398_phi_reg_27287() {
    ap_phi_reg_pp0_iter0_data_264_V_read398_phi_reg_27287 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_265_V_read399_phi_reg_27300() {
    ap_phi_reg_pp0_iter0_data_265_V_read399_phi_reg_27300 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_266_V_read400_phi_reg_27313() {
    ap_phi_reg_pp0_iter0_data_266_V_read400_phi_reg_27313 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_267_V_read401_phi_reg_27326() {
    ap_phi_reg_pp0_iter0_data_267_V_read401_phi_reg_27326 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_268_V_read402_phi_reg_27339() {
    ap_phi_reg_pp0_iter0_data_268_V_read402_phi_reg_27339 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_269_V_read403_phi_reg_27352() {
    ap_phi_reg_pp0_iter0_data_269_V_read403_phi_reg_27352 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_26_V_read160_phi_reg_24193() {
    ap_phi_reg_pp0_iter0_data_26_V_read160_phi_reg_24193 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_270_V_read404_phi_reg_27365() {
    ap_phi_reg_pp0_iter0_data_270_V_read404_phi_reg_27365 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_271_V_read405_phi_reg_27378() {
    ap_phi_reg_pp0_iter0_data_271_V_read405_phi_reg_27378 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_272_V_read406_phi_reg_27391() {
    ap_phi_reg_pp0_iter0_data_272_V_read406_phi_reg_27391 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_273_V_read407_phi_reg_27404() {
    ap_phi_reg_pp0_iter0_data_273_V_read407_phi_reg_27404 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_274_V_read408_phi_reg_27417() {
    ap_phi_reg_pp0_iter0_data_274_V_read408_phi_reg_27417 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_275_V_read409_phi_reg_27430() {
    ap_phi_reg_pp0_iter0_data_275_V_read409_phi_reg_27430 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_276_V_read410_phi_reg_27443() {
    ap_phi_reg_pp0_iter0_data_276_V_read410_phi_reg_27443 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_277_V_read411_phi_reg_27456() {
    ap_phi_reg_pp0_iter0_data_277_V_read411_phi_reg_27456 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_278_V_read412_phi_reg_27469() {
    ap_phi_reg_pp0_iter0_data_278_V_read412_phi_reg_27469 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_279_V_read413_phi_reg_27482() {
    ap_phi_reg_pp0_iter0_data_279_V_read413_phi_reg_27482 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_27_V_read161_phi_reg_24206() {
    ap_phi_reg_pp0_iter0_data_27_V_read161_phi_reg_24206 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_280_V_read414_phi_reg_27495() {
    ap_phi_reg_pp0_iter0_data_280_V_read414_phi_reg_27495 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_281_V_read415_phi_reg_27508() {
    ap_phi_reg_pp0_iter0_data_281_V_read415_phi_reg_27508 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_282_V_read416_phi_reg_27521() {
    ap_phi_reg_pp0_iter0_data_282_V_read416_phi_reg_27521 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_283_V_read417_phi_reg_27534() {
    ap_phi_reg_pp0_iter0_data_283_V_read417_phi_reg_27534 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_284_V_read418_phi_reg_27547() {
    ap_phi_reg_pp0_iter0_data_284_V_read418_phi_reg_27547 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_285_V_read419_phi_reg_27560() {
    ap_phi_reg_pp0_iter0_data_285_V_read419_phi_reg_27560 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_286_V_read420_phi_reg_27573() {
    ap_phi_reg_pp0_iter0_data_286_V_read420_phi_reg_27573 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_287_V_read421_phi_reg_27586() {
    ap_phi_reg_pp0_iter0_data_287_V_read421_phi_reg_27586 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_288_V_read422_phi_reg_27599() {
    ap_phi_reg_pp0_iter0_data_288_V_read422_phi_reg_27599 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_289_V_read423_phi_reg_27612() {
    ap_phi_reg_pp0_iter0_data_289_V_read423_phi_reg_27612 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_28_V_read162_phi_reg_24219() {
    ap_phi_reg_pp0_iter0_data_28_V_read162_phi_reg_24219 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_290_V_read424_phi_reg_27625() {
    ap_phi_reg_pp0_iter0_data_290_V_read424_phi_reg_27625 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_291_V_read425_phi_reg_27638() {
    ap_phi_reg_pp0_iter0_data_291_V_read425_phi_reg_27638 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_292_V_read426_phi_reg_27651() {
    ap_phi_reg_pp0_iter0_data_292_V_read426_phi_reg_27651 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_293_V_read427_phi_reg_27664() {
    ap_phi_reg_pp0_iter0_data_293_V_read427_phi_reg_27664 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_294_V_read428_phi_reg_27677() {
    ap_phi_reg_pp0_iter0_data_294_V_read428_phi_reg_27677 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_295_V_read429_phi_reg_27690() {
    ap_phi_reg_pp0_iter0_data_295_V_read429_phi_reg_27690 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_296_V_read430_phi_reg_27703() {
    ap_phi_reg_pp0_iter0_data_296_V_read430_phi_reg_27703 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_297_V_read431_phi_reg_27716() {
    ap_phi_reg_pp0_iter0_data_297_V_read431_phi_reg_27716 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_298_V_read432_phi_reg_27729() {
    ap_phi_reg_pp0_iter0_data_298_V_read432_phi_reg_27729 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_299_V_read433_phi_reg_27742() {
    ap_phi_reg_pp0_iter0_data_299_V_read433_phi_reg_27742 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_reg_pp0_iter0_data_29_V_read163_phi_reg_24232() {
    ap_phi_reg_pp0_iter0_data_29_V_read163_phi_reg_24232 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
}

}

