#include "dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_110_V_read244_phi_phi_fu_25289_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_110_V_read244_phi_phi_fu_25289_p4 = ap_phi_mux_data_110_V_read244_rewind_phi_fu_12785_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_110_V_read244_phi_phi_fu_25289_p4 = data_110_V_read.read();
    } else {
        ap_phi_mux_data_110_V_read244_phi_phi_fu_25289_p4 = ap_phi_reg_pp0_iter0_data_110_V_read244_phi_reg_25285.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_110_V_read244_rewind_phi_fu_12785_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_110_V_read244_rewind_phi_fu_12785_p6 = data_110_V_read244_phi_reg_25285.read();
    } else {
        ap_phi_mux_data_110_V_read244_rewind_phi_fu_12785_p6 = data_110_V_read244_rewind_reg_12781.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_111_V_read245_phi_phi_fu_25302_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_111_V_read245_phi_phi_fu_25302_p4 = ap_phi_mux_data_111_V_read245_rewind_phi_fu_12799_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_111_V_read245_phi_phi_fu_25302_p4 = data_111_V_read.read();
    } else {
        ap_phi_mux_data_111_V_read245_phi_phi_fu_25302_p4 = ap_phi_reg_pp0_iter0_data_111_V_read245_phi_reg_25298.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_111_V_read245_rewind_phi_fu_12799_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_111_V_read245_rewind_phi_fu_12799_p6 = data_111_V_read245_phi_reg_25298.read();
    } else {
        ap_phi_mux_data_111_V_read245_rewind_phi_fu_12799_p6 = data_111_V_read245_rewind_reg_12795.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_112_V_read246_phi_phi_fu_25315_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_112_V_read246_phi_phi_fu_25315_p4 = ap_phi_mux_data_112_V_read246_rewind_phi_fu_12813_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_112_V_read246_phi_phi_fu_25315_p4 = data_112_V_read.read();
    } else {
        ap_phi_mux_data_112_V_read246_phi_phi_fu_25315_p4 = ap_phi_reg_pp0_iter0_data_112_V_read246_phi_reg_25311.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_112_V_read246_rewind_phi_fu_12813_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_112_V_read246_rewind_phi_fu_12813_p6 = data_112_V_read246_phi_reg_25311.read();
    } else {
        ap_phi_mux_data_112_V_read246_rewind_phi_fu_12813_p6 = data_112_V_read246_rewind_reg_12809.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_113_V_read247_phi_phi_fu_25328_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_113_V_read247_phi_phi_fu_25328_p4 = ap_phi_mux_data_113_V_read247_rewind_phi_fu_12827_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_113_V_read247_phi_phi_fu_25328_p4 = data_113_V_read.read();
    } else {
        ap_phi_mux_data_113_V_read247_phi_phi_fu_25328_p4 = ap_phi_reg_pp0_iter0_data_113_V_read247_phi_reg_25324.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_113_V_read247_rewind_phi_fu_12827_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_113_V_read247_rewind_phi_fu_12827_p6 = data_113_V_read247_phi_reg_25324.read();
    } else {
        ap_phi_mux_data_113_V_read247_rewind_phi_fu_12827_p6 = data_113_V_read247_rewind_reg_12823.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_114_V_read248_phi_phi_fu_25341_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_114_V_read248_phi_phi_fu_25341_p4 = ap_phi_mux_data_114_V_read248_rewind_phi_fu_12841_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_114_V_read248_phi_phi_fu_25341_p4 = data_114_V_read.read();
    } else {
        ap_phi_mux_data_114_V_read248_phi_phi_fu_25341_p4 = ap_phi_reg_pp0_iter0_data_114_V_read248_phi_reg_25337.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_114_V_read248_rewind_phi_fu_12841_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_114_V_read248_rewind_phi_fu_12841_p6 = data_114_V_read248_phi_reg_25337.read();
    } else {
        ap_phi_mux_data_114_V_read248_rewind_phi_fu_12841_p6 = data_114_V_read248_rewind_reg_12837.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_115_V_read249_phi_phi_fu_25354_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_115_V_read249_phi_phi_fu_25354_p4 = ap_phi_mux_data_115_V_read249_rewind_phi_fu_12855_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_115_V_read249_phi_phi_fu_25354_p4 = data_115_V_read.read();
    } else {
        ap_phi_mux_data_115_V_read249_phi_phi_fu_25354_p4 = ap_phi_reg_pp0_iter0_data_115_V_read249_phi_reg_25350.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_115_V_read249_rewind_phi_fu_12855_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_115_V_read249_rewind_phi_fu_12855_p6 = data_115_V_read249_phi_reg_25350.read();
    } else {
        ap_phi_mux_data_115_V_read249_rewind_phi_fu_12855_p6 = data_115_V_read249_rewind_reg_12851.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_116_V_read250_phi_phi_fu_25367_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_116_V_read250_phi_phi_fu_25367_p4 = ap_phi_mux_data_116_V_read250_rewind_phi_fu_12869_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_116_V_read250_phi_phi_fu_25367_p4 = data_116_V_read.read();
    } else {
        ap_phi_mux_data_116_V_read250_phi_phi_fu_25367_p4 = ap_phi_reg_pp0_iter0_data_116_V_read250_phi_reg_25363.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_116_V_read250_rewind_phi_fu_12869_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_116_V_read250_rewind_phi_fu_12869_p6 = data_116_V_read250_phi_reg_25363.read();
    } else {
        ap_phi_mux_data_116_V_read250_rewind_phi_fu_12869_p6 = data_116_V_read250_rewind_reg_12865.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_117_V_read251_phi_phi_fu_25380_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_117_V_read251_phi_phi_fu_25380_p4 = ap_phi_mux_data_117_V_read251_rewind_phi_fu_12883_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_117_V_read251_phi_phi_fu_25380_p4 = data_117_V_read.read();
    } else {
        ap_phi_mux_data_117_V_read251_phi_phi_fu_25380_p4 = ap_phi_reg_pp0_iter0_data_117_V_read251_phi_reg_25376.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_117_V_read251_rewind_phi_fu_12883_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_117_V_read251_rewind_phi_fu_12883_p6 = data_117_V_read251_phi_reg_25376.read();
    } else {
        ap_phi_mux_data_117_V_read251_rewind_phi_fu_12883_p6 = data_117_V_read251_rewind_reg_12879.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_118_V_read252_phi_phi_fu_25393_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_118_V_read252_phi_phi_fu_25393_p4 = ap_phi_mux_data_118_V_read252_rewind_phi_fu_12897_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_118_V_read252_phi_phi_fu_25393_p4 = data_118_V_read.read();
    } else {
        ap_phi_mux_data_118_V_read252_phi_phi_fu_25393_p4 = ap_phi_reg_pp0_iter0_data_118_V_read252_phi_reg_25389.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_118_V_read252_rewind_phi_fu_12897_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_118_V_read252_rewind_phi_fu_12897_p6 = data_118_V_read252_phi_reg_25389.read();
    } else {
        ap_phi_mux_data_118_V_read252_rewind_phi_fu_12897_p6 = data_118_V_read252_rewind_reg_12893.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_119_V_read253_phi_phi_fu_25406_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_119_V_read253_phi_phi_fu_25406_p4 = ap_phi_mux_data_119_V_read253_rewind_phi_fu_12911_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_119_V_read253_phi_phi_fu_25406_p4 = data_119_V_read.read();
    } else {
        ap_phi_mux_data_119_V_read253_phi_phi_fu_25406_p4 = ap_phi_reg_pp0_iter0_data_119_V_read253_phi_reg_25402.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_119_V_read253_rewind_phi_fu_12911_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_119_V_read253_rewind_phi_fu_12911_p6 = data_119_V_read253_phi_reg_25402.read();
    } else {
        ap_phi_mux_data_119_V_read253_rewind_phi_fu_12911_p6 = data_119_V_read253_rewind_reg_12907.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_11_V_read145_phi_phi_fu_24002_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_11_V_read145_phi_phi_fu_24002_p4 = ap_phi_mux_data_11_V_read145_rewind_phi_fu_11399_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_11_V_read145_phi_phi_fu_24002_p4 = data_11_V_read.read();
    } else {
        ap_phi_mux_data_11_V_read145_phi_phi_fu_24002_p4 = ap_phi_reg_pp0_iter0_data_11_V_read145_phi_reg_23998.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_11_V_read145_rewind_phi_fu_11399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_11_V_read145_rewind_phi_fu_11399_p6 = data_11_V_read145_phi_reg_23998.read();
    } else {
        ap_phi_mux_data_11_V_read145_rewind_phi_fu_11399_p6 = data_11_V_read145_rewind_reg_11395.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_120_V_read254_phi_phi_fu_25419_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_120_V_read254_phi_phi_fu_25419_p4 = ap_phi_mux_data_120_V_read254_rewind_phi_fu_12925_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_120_V_read254_phi_phi_fu_25419_p4 = data_120_V_read.read();
    } else {
        ap_phi_mux_data_120_V_read254_phi_phi_fu_25419_p4 = ap_phi_reg_pp0_iter0_data_120_V_read254_phi_reg_25415.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_120_V_read254_rewind_phi_fu_12925_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_120_V_read254_rewind_phi_fu_12925_p6 = data_120_V_read254_phi_reg_25415.read();
    } else {
        ap_phi_mux_data_120_V_read254_rewind_phi_fu_12925_p6 = data_120_V_read254_rewind_reg_12921.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_121_V_read255_phi_phi_fu_25432_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_121_V_read255_phi_phi_fu_25432_p4 = ap_phi_mux_data_121_V_read255_rewind_phi_fu_12939_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_121_V_read255_phi_phi_fu_25432_p4 = data_121_V_read.read();
    } else {
        ap_phi_mux_data_121_V_read255_phi_phi_fu_25432_p4 = ap_phi_reg_pp0_iter0_data_121_V_read255_phi_reg_25428.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_121_V_read255_rewind_phi_fu_12939_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_121_V_read255_rewind_phi_fu_12939_p6 = data_121_V_read255_phi_reg_25428.read();
    } else {
        ap_phi_mux_data_121_V_read255_rewind_phi_fu_12939_p6 = data_121_V_read255_rewind_reg_12935.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_122_V_read256_phi_phi_fu_25445_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_122_V_read256_phi_phi_fu_25445_p4 = ap_phi_mux_data_122_V_read256_rewind_phi_fu_12953_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_122_V_read256_phi_phi_fu_25445_p4 = data_122_V_read.read();
    } else {
        ap_phi_mux_data_122_V_read256_phi_phi_fu_25445_p4 = ap_phi_reg_pp0_iter0_data_122_V_read256_phi_reg_25441.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_122_V_read256_rewind_phi_fu_12953_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_122_V_read256_rewind_phi_fu_12953_p6 = data_122_V_read256_phi_reg_25441.read();
    } else {
        ap_phi_mux_data_122_V_read256_rewind_phi_fu_12953_p6 = data_122_V_read256_rewind_reg_12949.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_123_V_read257_phi_phi_fu_25458_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_123_V_read257_phi_phi_fu_25458_p4 = ap_phi_mux_data_123_V_read257_rewind_phi_fu_12967_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_123_V_read257_phi_phi_fu_25458_p4 = data_123_V_read.read();
    } else {
        ap_phi_mux_data_123_V_read257_phi_phi_fu_25458_p4 = ap_phi_reg_pp0_iter0_data_123_V_read257_phi_reg_25454.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_123_V_read257_rewind_phi_fu_12967_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_123_V_read257_rewind_phi_fu_12967_p6 = data_123_V_read257_phi_reg_25454.read();
    } else {
        ap_phi_mux_data_123_V_read257_rewind_phi_fu_12967_p6 = data_123_V_read257_rewind_reg_12963.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_124_V_read258_phi_phi_fu_25471_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_124_V_read258_phi_phi_fu_25471_p4 = ap_phi_mux_data_124_V_read258_rewind_phi_fu_12981_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_124_V_read258_phi_phi_fu_25471_p4 = data_124_V_read.read();
    } else {
        ap_phi_mux_data_124_V_read258_phi_phi_fu_25471_p4 = ap_phi_reg_pp0_iter0_data_124_V_read258_phi_reg_25467.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_124_V_read258_rewind_phi_fu_12981_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_124_V_read258_rewind_phi_fu_12981_p6 = data_124_V_read258_phi_reg_25467.read();
    } else {
        ap_phi_mux_data_124_V_read258_rewind_phi_fu_12981_p6 = data_124_V_read258_rewind_reg_12977.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_125_V_read259_phi_phi_fu_25484_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_125_V_read259_phi_phi_fu_25484_p4 = ap_phi_mux_data_125_V_read259_rewind_phi_fu_12995_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_125_V_read259_phi_phi_fu_25484_p4 = data_125_V_read.read();
    } else {
        ap_phi_mux_data_125_V_read259_phi_phi_fu_25484_p4 = ap_phi_reg_pp0_iter0_data_125_V_read259_phi_reg_25480.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_125_V_read259_rewind_phi_fu_12995_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_125_V_read259_rewind_phi_fu_12995_p6 = data_125_V_read259_phi_reg_25480.read();
    } else {
        ap_phi_mux_data_125_V_read259_rewind_phi_fu_12995_p6 = data_125_V_read259_rewind_reg_12991.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_126_V_read260_phi_phi_fu_25497_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_126_V_read260_phi_phi_fu_25497_p4 = ap_phi_mux_data_126_V_read260_rewind_phi_fu_13009_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_126_V_read260_phi_phi_fu_25497_p4 = data_126_V_read.read();
    } else {
        ap_phi_mux_data_126_V_read260_phi_phi_fu_25497_p4 = ap_phi_reg_pp0_iter0_data_126_V_read260_phi_reg_25493.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_126_V_read260_rewind_phi_fu_13009_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_126_V_read260_rewind_phi_fu_13009_p6 = data_126_V_read260_phi_reg_25493.read();
    } else {
        ap_phi_mux_data_126_V_read260_rewind_phi_fu_13009_p6 = data_126_V_read260_rewind_reg_13005.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_127_V_read261_phi_phi_fu_25510_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_127_V_read261_phi_phi_fu_25510_p4 = ap_phi_mux_data_127_V_read261_rewind_phi_fu_13023_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_127_V_read261_phi_phi_fu_25510_p4 = data_127_V_read.read();
    } else {
        ap_phi_mux_data_127_V_read261_phi_phi_fu_25510_p4 = ap_phi_reg_pp0_iter0_data_127_V_read261_phi_reg_25506.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_127_V_read261_rewind_phi_fu_13023_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_127_V_read261_rewind_phi_fu_13023_p6 = data_127_V_read261_phi_reg_25506.read();
    } else {
        ap_phi_mux_data_127_V_read261_rewind_phi_fu_13023_p6 = data_127_V_read261_rewind_reg_13019.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_128_V_read262_phi_phi_fu_25523_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_128_V_read262_phi_phi_fu_25523_p4 = ap_phi_mux_data_128_V_read262_rewind_phi_fu_13037_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_128_V_read262_phi_phi_fu_25523_p4 = data_128_V_read.read();
    } else {
        ap_phi_mux_data_128_V_read262_phi_phi_fu_25523_p4 = ap_phi_reg_pp0_iter0_data_128_V_read262_phi_reg_25519.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_128_V_read262_rewind_phi_fu_13037_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_128_V_read262_rewind_phi_fu_13037_p6 = data_128_V_read262_phi_reg_25519.read();
    } else {
        ap_phi_mux_data_128_V_read262_rewind_phi_fu_13037_p6 = data_128_V_read262_rewind_reg_13033.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_129_V_read263_phi_phi_fu_25536_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_129_V_read263_phi_phi_fu_25536_p4 = ap_phi_mux_data_129_V_read263_rewind_phi_fu_13051_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_129_V_read263_phi_phi_fu_25536_p4 = data_129_V_read.read();
    } else {
        ap_phi_mux_data_129_V_read263_phi_phi_fu_25536_p4 = ap_phi_reg_pp0_iter0_data_129_V_read263_phi_reg_25532.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_129_V_read263_rewind_phi_fu_13051_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_129_V_read263_rewind_phi_fu_13051_p6 = data_129_V_read263_phi_reg_25532.read();
    } else {
        ap_phi_mux_data_129_V_read263_rewind_phi_fu_13051_p6 = data_129_V_read263_rewind_reg_13047.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_12_V_read146_phi_phi_fu_24015_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_12_V_read146_phi_phi_fu_24015_p4 = ap_phi_mux_data_12_V_read146_rewind_phi_fu_11413_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_12_V_read146_phi_phi_fu_24015_p4 = data_12_V_read.read();
    } else {
        ap_phi_mux_data_12_V_read146_phi_phi_fu_24015_p4 = ap_phi_reg_pp0_iter0_data_12_V_read146_phi_reg_24011.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_12_V_read146_rewind_phi_fu_11413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_12_V_read146_rewind_phi_fu_11413_p6 = data_12_V_read146_phi_reg_24011.read();
    } else {
        ap_phi_mux_data_12_V_read146_rewind_phi_fu_11413_p6 = data_12_V_read146_rewind_reg_11409.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_130_V_read264_phi_phi_fu_25549_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_130_V_read264_phi_phi_fu_25549_p4 = ap_phi_mux_data_130_V_read264_rewind_phi_fu_13065_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_130_V_read264_phi_phi_fu_25549_p4 = data_130_V_read.read();
    } else {
        ap_phi_mux_data_130_V_read264_phi_phi_fu_25549_p4 = ap_phi_reg_pp0_iter0_data_130_V_read264_phi_reg_25545.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_130_V_read264_rewind_phi_fu_13065_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_130_V_read264_rewind_phi_fu_13065_p6 = data_130_V_read264_phi_reg_25545.read();
    } else {
        ap_phi_mux_data_130_V_read264_rewind_phi_fu_13065_p6 = data_130_V_read264_rewind_reg_13061.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_131_V_read265_phi_phi_fu_25562_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_131_V_read265_phi_phi_fu_25562_p4 = ap_phi_mux_data_131_V_read265_rewind_phi_fu_13079_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_131_V_read265_phi_phi_fu_25562_p4 = data_131_V_read.read();
    } else {
        ap_phi_mux_data_131_V_read265_phi_phi_fu_25562_p4 = ap_phi_reg_pp0_iter0_data_131_V_read265_phi_reg_25558.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_131_V_read265_rewind_phi_fu_13079_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_131_V_read265_rewind_phi_fu_13079_p6 = data_131_V_read265_phi_reg_25558.read();
    } else {
        ap_phi_mux_data_131_V_read265_rewind_phi_fu_13079_p6 = data_131_V_read265_rewind_reg_13075.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_132_V_read266_phi_phi_fu_25575_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_132_V_read266_phi_phi_fu_25575_p4 = ap_phi_mux_data_132_V_read266_rewind_phi_fu_13093_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_132_V_read266_phi_phi_fu_25575_p4 = data_132_V_read.read();
    } else {
        ap_phi_mux_data_132_V_read266_phi_phi_fu_25575_p4 = ap_phi_reg_pp0_iter0_data_132_V_read266_phi_reg_25571.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_132_V_read266_rewind_phi_fu_13093_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_132_V_read266_rewind_phi_fu_13093_p6 = data_132_V_read266_phi_reg_25571.read();
    } else {
        ap_phi_mux_data_132_V_read266_rewind_phi_fu_13093_p6 = data_132_V_read266_rewind_reg_13089.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_133_V_read267_phi_phi_fu_25588_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_133_V_read267_phi_phi_fu_25588_p4 = ap_phi_mux_data_133_V_read267_rewind_phi_fu_13107_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_133_V_read267_phi_phi_fu_25588_p4 = data_133_V_read.read();
    } else {
        ap_phi_mux_data_133_V_read267_phi_phi_fu_25588_p4 = ap_phi_reg_pp0_iter0_data_133_V_read267_phi_reg_25584.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_133_V_read267_rewind_phi_fu_13107_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_133_V_read267_rewind_phi_fu_13107_p6 = data_133_V_read267_phi_reg_25584.read();
    } else {
        ap_phi_mux_data_133_V_read267_rewind_phi_fu_13107_p6 = data_133_V_read267_rewind_reg_13103.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_134_V_read268_phi_phi_fu_25601_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_134_V_read268_phi_phi_fu_25601_p4 = ap_phi_mux_data_134_V_read268_rewind_phi_fu_13121_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_134_V_read268_phi_phi_fu_25601_p4 = data_134_V_read.read();
    } else {
        ap_phi_mux_data_134_V_read268_phi_phi_fu_25601_p4 = ap_phi_reg_pp0_iter0_data_134_V_read268_phi_reg_25597.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_134_V_read268_rewind_phi_fu_13121_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_134_V_read268_rewind_phi_fu_13121_p6 = data_134_V_read268_phi_reg_25597.read();
    } else {
        ap_phi_mux_data_134_V_read268_rewind_phi_fu_13121_p6 = data_134_V_read268_rewind_reg_13117.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_135_V_read269_phi_phi_fu_25614_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_135_V_read269_phi_phi_fu_25614_p4 = ap_phi_mux_data_135_V_read269_rewind_phi_fu_13135_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_135_V_read269_phi_phi_fu_25614_p4 = data_135_V_read.read();
    } else {
        ap_phi_mux_data_135_V_read269_phi_phi_fu_25614_p4 = ap_phi_reg_pp0_iter0_data_135_V_read269_phi_reg_25610.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_135_V_read269_rewind_phi_fu_13135_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_135_V_read269_rewind_phi_fu_13135_p6 = data_135_V_read269_phi_reg_25610.read();
    } else {
        ap_phi_mux_data_135_V_read269_rewind_phi_fu_13135_p6 = data_135_V_read269_rewind_reg_13131.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_136_V_read270_phi_phi_fu_25627_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_136_V_read270_phi_phi_fu_25627_p4 = ap_phi_mux_data_136_V_read270_rewind_phi_fu_13149_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_136_V_read270_phi_phi_fu_25627_p4 = data_136_V_read.read();
    } else {
        ap_phi_mux_data_136_V_read270_phi_phi_fu_25627_p4 = ap_phi_reg_pp0_iter0_data_136_V_read270_phi_reg_25623.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_136_V_read270_rewind_phi_fu_13149_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_136_V_read270_rewind_phi_fu_13149_p6 = data_136_V_read270_phi_reg_25623.read();
    } else {
        ap_phi_mux_data_136_V_read270_rewind_phi_fu_13149_p6 = data_136_V_read270_rewind_reg_13145.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_137_V_read271_phi_phi_fu_25640_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_137_V_read271_phi_phi_fu_25640_p4 = ap_phi_mux_data_137_V_read271_rewind_phi_fu_13163_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_137_V_read271_phi_phi_fu_25640_p4 = data_137_V_read.read();
    } else {
        ap_phi_mux_data_137_V_read271_phi_phi_fu_25640_p4 = ap_phi_reg_pp0_iter0_data_137_V_read271_phi_reg_25636.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_137_V_read271_rewind_phi_fu_13163_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_137_V_read271_rewind_phi_fu_13163_p6 = data_137_V_read271_phi_reg_25636.read();
    } else {
        ap_phi_mux_data_137_V_read271_rewind_phi_fu_13163_p6 = data_137_V_read271_rewind_reg_13159.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_138_V_read272_phi_phi_fu_25653_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_138_V_read272_phi_phi_fu_25653_p4 = ap_phi_mux_data_138_V_read272_rewind_phi_fu_13177_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_138_V_read272_phi_phi_fu_25653_p4 = data_138_V_read.read();
    } else {
        ap_phi_mux_data_138_V_read272_phi_phi_fu_25653_p4 = ap_phi_reg_pp0_iter0_data_138_V_read272_phi_reg_25649.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_138_V_read272_rewind_phi_fu_13177_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_138_V_read272_rewind_phi_fu_13177_p6 = data_138_V_read272_phi_reg_25649.read();
    } else {
        ap_phi_mux_data_138_V_read272_rewind_phi_fu_13177_p6 = data_138_V_read272_rewind_reg_13173.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_139_V_read273_phi_phi_fu_25666_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_139_V_read273_phi_phi_fu_25666_p4 = ap_phi_mux_data_139_V_read273_rewind_phi_fu_13191_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_139_V_read273_phi_phi_fu_25666_p4 = data_139_V_read.read();
    } else {
        ap_phi_mux_data_139_V_read273_phi_phi_fu_25666_p4 = ap_phi_reg_pp0_iter0_data_139_V_read273_phi_reg_25662.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_139_V_read273_rewind_phi_fu_13191_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_139_V_read273_rewind_phi_fu_13191_p6 = data_139_V_read273_phi_reg_25662.read();
    } else {
        ap_phi_mux_data_139_V_read273_rewind_phi_fu_13191_p6 = data_139_V_read273_rewind_reg_13187.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_13_V_read147_phi_phi_fu_24028_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_13_V_read147_phi_phi_fu_24028_p4 = ap_phi_mux_data_13_V_read147_rewind_phi_fu_11427_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_13_V_read147_phi_phi_fu_24028_p4 = data_13_V_read.read();
    } else {
        ap_phi_mux_data_13_V_read147_phi_phi_fu_24028_p4 = ap_phi_reg_pp0_iter0_data_13_V_read147_phi_reg_24024.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_13_V_read147_rewind_phi_fu_11427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_13_V_read147_rewind_phi_fu_11427_p6 = data_13_V_read147_phi_reg_24024.read();
    } else {
        ap_phi_mux_data_13_V_read147_rewind_phi_fu_11427_p6 = data_13_V_read147_rewind_reg_11423.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_140_V_read274_phi_phi_fu_25679_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_140_V_read274_phi_phi_fu_25679_p4 = ap_phi_mux_data_140_V_read274_rewind_phi_fu_13205_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_140_V_read274_phi_phi_fu_25679_p4 = data_140_V_read.read();
    } else {
        ap_phi_mux_data_140_V_read274_phi_phi_fu_25679_p4 = ap_phi_reg_pp0_iter0_data_140_V_read274_phi_reg_25675.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_140_V_read274_rewind_phi_fu_13205_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_140_V_read274_rewind_phi_fu_13205_p6 = data_140_V_read274_phi_reg_25675.read();
    } else {
        ap_phi_mux_data_140_V_read274_rewind_phi_fu_13205_p6 = data_140_V_read274_rewind_reg_13201.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_141_V_read275_phi_phi_fu_25692_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_141_V_read275_phi_phi_fu_25692_p4 = ap_phi_mux_data_141_V_read275_rewind_phi_fu_13219_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_141_V_read275_phi_phi_fu_25692_p4 = data_141_V_read.read();
    } else {
        ap_phi_mux_data_141_V_read275_phi_phi_fu_25692_p4 = ap_phi_reg_pp0_iter0_data_141_V_read275_phi_reg_25688.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_141_V_read275_rewind_phi_fu_13219_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_141_V_read275_rewind_phi_fu_13219_p6 = data_141_V_read275_phi_reg_25688.read();
    } else {
        ap_phi_mux_data_141_V_read275_rewind_phi_fu_13219_p6 = data_141_V_read275_rewind_reg_13215.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_142_V_read276_phi_phi_fu_25705_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_142_V_read276_phi_phi_fu_25705_p4 = ap_phi_mux_data_142_V_read276_rewind_phi_fu_13233_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_142_V_read276_phi_phi_fu_25705_p4 = data_142_V_read.read();
    } else {
        ap_phi_mux_data_142_V_read276_phi_phi_fu_25705_p4 = ap_phi_reg_pp0_iter0_data_142_V_read276_phi_reg_25701.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_142_V_read276_rewind_phi_fu_13233_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_142_V_read276_rewind_phi_fu_13233_p6 = data_142_V_read276_phi_reg_25701.read();
    } else {
        ap_phi_mux_data_142_V_read276_rewind_phi_fu_13233_p6 = data_142_V_read276_rewind_reg_13229.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_143_V_read277_phi_phi_fu_25718_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_143_V_read277_phi_phi_fu_25718_p4 = ap_phi_mux_data_143_V_read277_rewind_phi_fu_13247_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_143_V_read277_phi_phi_fu_25718_p4 = data_143_V_read.read();
    } else {
        ap_phi_mux_data_143_V_read277_phi_phi_fu_25718_p4 = ap_phi_reg_pp0_iter0_data_143_V_read277_phi_reg_25714.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_143_V_read277_rewind_phi_fu_13247_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_143_V_read277_rewind_phi_fu_13247_p6 = data_143_V_read277_phi_reg_25714.read();
    } else {
        ap_phi_mux_data_143_V_read277_rewind_phi_fu_13247_p6 = data_143_V_read277_rewind_reg_13243.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_144_V_read278_phi_phi_fu_25731_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_144_V_read278_phi_phi_fu_25731_p4 = ap_phi_mux_data_144_V_read278_rewind_phi_fu_13261_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_144_V_read278_phi_phi_fu_25731_p4 = data_144_V_read.read();
    } else {
        ap_phi_mux_data_144_V_read278_phi_phi_fu_25731_p4 = ap_phi_reg_pp0_iter0_data_144_V_read278_phi_reg_25727.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_144_V_read278_rewind_phi_fu_13261_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_144_V_read278_rewind_phi_fu_13261_p6 = data_144_V_read278_phi_reg_25727.read();
    } else {
        ap_phi_mux_data_144_V_read278_rewind_phi_fu_13261_p6 = data_144_V_read278_rewind_reg_13257.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_145_V_read279_phi_phi_fu_25744_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_145_V_read279_phi_phi_fu_25744_p4 = ap_phi_mux_data_145_V_read279_rewind_phi_fu_13275_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_145_V_read279_phi_phi_fu_25744_p4 = data_145_V_read.read();
    } else {
        ap_phi_mux_data_145_V_read279_phi_phi_fu_25744_p4 = ap_phi_reg_pp0_iter0_data_145_V_read279_phi_reg_25740.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_145_V_read279_rewind_phi_fu_13275_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_145_V_read279_rewind_phi_fu_13275_p6 = data_145_V_read279_phi_reg_25740.read();
    } else {
        ap_phi_mux_data_145_V_read279_rewind_phi_fu_13275_p6 = data_145_V_read279_rewind_reg_13271.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_146_V_read280_phi_phi_fu_25757_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_146_V_read280_phi_phi_fu_25757_p4 = ap_phi_mux_data_146_V_read280_rewind_phi_fu_13289_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_146_V_read280_phi_phi_fu_25757_p4 = data_146_V_read.read();
    } else {
        ap_phi_mux_data_146_V_read280_phi_phi_fu_25757_p4 = ap_phi_reg_pp0_iter0_data_146_V_read280_phi_reg_25753.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_146_V_read280_rewind_phi_fu_13289_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_146_V_read280_rewind_phi_fu_13289_p6 = data_146_V_read280_phi_reg_25753.read();
    } else {
        ap_phi_mux_data_146_V_read280_rewind_phi_fu_13289_p6 = data_146_V_read280_rewind_reg_13285.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_147_V_read281_phi_phi_fu_25770_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_147_V_read281_phi_phi_fu_25770_p4 = ap_phi_mux_data_147_V_read281_rewind_phi_fu_13303_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_147_V_read281_phi_phi_fu_25770_p4 = data_147_V_read.read();
    } else {
        ap_phi_mux_data_147_V_read281_phi_phi_fu_25770_p4 = ap_phi_reg_pp0_iter0_data_147_V_read281_phi_reg_25766.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_147_V_read281_rewind_phi_fu_13303_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_147_V_read281_rewind_phi_fu_13303_p6 = data_147_V_read281_phi_reg_25766.read();
    } else {
        ap_phi_mux_data_147_V_read281_rewind_phi_fu_13303_p6 = data_147_V_read281_rewind_reg_13299.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_148_V_read282_phi_phi_fu_25783_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_148_V_read282_phi_phi_fu_25783_p4 = ap_phi_mux_data_148_V_read282_rewind_phi_fu_13317_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_148_V_read282_phi_phi_fu_25783_p4 = data_148_V_read.read();
    } else {
        ap_phi_mux_data_148_V_read282_phi_phi_fu_25783_p4 = ap_phi_reg_pp0_iter0_data_148_V_read282_phi_reg_25779.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_148_V_read282_rewind_phi_fu_13317_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_148_V_read282_rewind_phi_fu_13317_p6 = data_148_V_read282_phi_reg_25779.read();
    } else {
        ap_phi_mux_data_148_V_read282_rewind_phi_fu_13317_p6 = data_148_V_read282_rewind_reg_13313.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_149_V_read283_phi_phi_fu_25796_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_149_V_read283_phi_phi_fu_25796_p4 = ap_phi_mux_data_149_V_read283_rewind_phi_fu_13331_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_149_V_read283_phi_phi_fu_25796_p4 = data_149_V_read.read();
    } else {
        ap_phi_mux_data_149_V_read283_phi_phi_fu_25796_p4 = ap_phi_reg_pp0_iter0_data_149_V_read283_phi_reg_25792.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_149_V_read283_rewind_phi_fu_13331_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_149_V_read283_rewind_phi_fu_13331_p6 = data_149_V_read283_phi_reg_25792.read();
    } else {
        ap_phi_mux_data_149_V_read283_rewind_phi_fu_13331_p6 = data_149_V_read283_rewind_reg_13327.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_14_V_read148_phi_phi_fu_24041_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_14_V_read148_phi_phi_fu_24041_p4 = ap_phi_mux_data_14_V_read148_rewind_phi_fu_11441_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_14_V_read148_phi_phi_fu_24041_p4 = data_14_V_read.read();
    } else {
        ap_phi_mux_data_14_V_read148_phi_phi_fu_24041_p4 = ap_phi_reg_pp0_iter0_data_14_V_read148_phi_reg_24037.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_14_V_read148_rewind_phi_fu_11441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_14_V_read148_rewind_phi_fu_11441_p6 = data_14_V_read148_phi_reg_24037.read();
    } else {
        ap_phi_mux_data_14_V_read148_rewind_phi_fu_11441_p6 = data_14_V_read148_rewind_reg_11437.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_150_V_read284_phi_phi_fu_25809_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_150_V_read284_phi_phi_fu_25809_p4 = ap_phi_mux_data_150_V_read284_rewind_phi_fu_13345_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_150_V_read284_phi_phi_fu_25809_p4 = data_150_V_read.read();
    } else {
        ap_phi_mux_data_150_V_read284_phi_phi_fu_25809_p4 = ap_phi_reg_pp0_iter0_data_150_V_read284_phi_reg_25805.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_150_V_read284_rewind_phi_fu_13345_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_150_V_read284_rewind_phi_fu_13345_p6 = data_150_V_read284_phi_reg_25805.read();
    } else {
        ap_phi_mux_data_150_V_read284_rewind_phi_fu_13345_p6 = data_150_V_read284_rewind_reg_13341.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_151_V_read285_phi_phi_fu_25822_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_151_V_read285_phi_phi_fu_25822_p4 = ap_phi_mux_data_151_V_read285_rewind_phi_fu_13359_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_151_V_read285_phi_phi_fu_25822_p4 = data_151_V_read.read();
    } else {
        ap_phi_mux_data_151_V_read285_phi_phi_fu_25822_p4 = ap_phi_reg_pp0_iter0_data_151_V_read285_phi_reg_25818.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_151_V_read285_rewind_phi_fu_13359_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_151_V_read285_rewind_phi_fu_13359_p6 = data_151_V_read285_phi_reg_25818.read();
    } else {
        ap_phi_mux_data_151_V_read285_rewind_phi_fu_13359_p6 = data_151_V_read285_rewind_reg_13355.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_152_V_read286_phi_phi_fu_25835_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_152_V_read286_phi_phi_fu_25835_p4 = ap_phi_mux_data_152_V_read286_rewind_phi_fu_13373_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_152_V_read286_phi_phi_fu_25835_p4 = data_152_V_read.read();
    } else {
        ap_phi_mux_data_152_V_read286_phi_phi_fu_25835_p4 = ap_phi_reg_pp0_iter0_data_152_V_read286_phi_reg_25831.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_152_V_read286_rewind_phi_fu_13373_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_152_V_read286_rewind_phi_fu_13373_p6 = data_152_V_read286_phi_reg_25831.read();
    } else {
        ap_phi_mux_data_152_V_read286_rewind_phi_fu_13373_p6 = data_152_V_read286_rewind_reg_13369.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_153_V_read287_phi_phi_fu_25848_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_153_V_read287_phi_phi_fu_25848_p4 = ap_phi_mux_data_153_V_read287_rewind_phi_fu_13387_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_153_V_read287_phi_phi_fu_25848_p4 = data_153_V_read.read();
    } else {
        ap_phi_mux_data_153_V_read287_phi_phi_fu_25848_p4 = ap_phi_reg_pp0_iter0_data_153_V_read287_phi_reg_25844.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_153_V_read287_rewind_phi_fu_13387_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_153_V_read287_rewind_phi_fu_13387_p6 = data_153_V_read287_phi_reg_25844.read();
    } else {
        ap_phi_mux_data_153_V_read287_rewind_phi_fu_13387_p6 = data_153_V_read287_rewind_reg_13383.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_154_V_read288_phi_phi_fu_25861_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_154_V_read288_phi_phi_fu_25861_p4 = ap_phi_mux_data_154_V_read288_rewind_phi_fu_13401_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_154_V_read288_phi_phi_fu_25861_p4 = data_154_V_read.read();
    } else {
        ap_phi_mux_data_154_V_read288_phi_phi_fu_25861_p4 = ap_phi_reg_pp0_iter0_data_154_V_read288_phi_reg_25857.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_154_V_read288_rewind_phi_fu_13401_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_154_V_read288_rewind_phi_fu_13401_p6 = data_154_V_read288_phi_reg_25857.read();
    } else {
        ap_phi_mux_data_154_V_read288_rewind_phi_fu_13401_p6 = data_154_V_read288_rewind_reg_13397.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_155_V_read289_phi_phi_fu_25874_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_155_V_read289_phi_phi_fu_25874_p4 = ap_phi_mux_data_155_V_read289_rewind_phi_fu_13415_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_155_V_read289_phi_phi_fu_25874_p4 = data_155_V_read.read();
    } else {
        ap_phi_mux_data_155_V_read289_phi_phi_fu_25874_p4 = ap_phi_reg_pp0_iter0_data_155_V_read289_phi_reg_25870.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_155_V_read289_rewind_phi_fu_13415_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_155_V_read289_rewind_phi_fu_13415_p6 = data_155_V_read289_phi_reg_25870.read();
    } else {
        ap_phi_mux_data_155_V_read289_rewind_phi_fu_13415_p6 = data_155_V_read289_rewind_reg_13411.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_156_V_read290_phi_phi_fu_25887_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_156_V_read290_phi_phi_fu_25887_p4 = ap_phi_mux_data_156_V_read290_rewind_phi_fu_13429_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_156_V_read290_phi_phi_fu_25887_p4 = data_156_V_read.read();
    } else {
        ap_phi_mux_data_156_V_read290_phi_phi_fu_25887_p4 = ap_phi_reg_pp0_iter0_data_156_V_read290_phi_reg_25883.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_156_V_read290_rewind_phi_fu_13429_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_156_V_read290_rewind_phi_fu_13429_p6 = data_156_V_read290_phi_reg_25883.read();
    } else {
        ap_phi_mux_data_156_V_read290_rewind_phi_fu_13429_p6 = data_156_V_read290_rewind_reg_13425.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_157_V_read291_phi_phi_fu_25900_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_157_V_read291_phi_phi_fu_25900_p4 = ap_phi_mux_data_157_V_read291_rewind_phi_fu_13443_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_157_V_read291_phi_phi_fu_25900_p4 = data_157_V_read.read();
    } else {
        ap_phi_mux_data_157_V_read291_phi_phi_fu_25900_p4 = ap_phi_reg_pp0_iter0_data_157_V_read291_phi_reg_25896.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_157_V_read291_rewind_phi_fu_13443_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_157_V_read291_rewind_phi_fu_13443_p6 = data_157_V_read291_phi_reg_25896.read();
    } else {
        ap_phi_mux_data_157_V_read291_rewind_phi_fu_13443_p6 = data_157_V_read291_rewind_reg_13439.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_158_V_read292_phi_phi_fu_25913_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_158_V_read292_phi_phi_fu_25913_p4 = ap_phi_mux_data_158_V_read292_rewind_phi_fu_13457_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_158_V_read292_phi_phi_fu_25913_p4 = data_158_V_read.read();
    } else {
        ap_phi_mux_data_158_V_read292_phi_phi_fu_25913_p4 = ap_phi_reg_pp0_iter0_data_158_V_read292_phi_reg_25909.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_158_V_read292_rewind_phi_fu_13457_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_158_V_read292_rewind_phi_fu_13457_p6 = data_158_V_read292_phi_reg_25909.read();
    } else {
        ap_phi_mux_data_158_V_read292_rewind_phi_fu_13457_p6 = data_158_V_read292_rewind_reg_13453.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_159_V_read293_phi_phi_fu_25926_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_159_V_read293_phi_phi_fu_25926_p4 = ap_phi_mux_data_159_V_read293_rewind_phi_fu_13471_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_159_V_read293_phi_phi_fu_25926_p4 = data_159_V_read.read();
    } else {
        ap_phi_mux_data_159_V_read293_phi_phi_fu_25926_p4 = ap_phi_reg_pp0_iter0_data_159_V_read293_phi_reg_25922.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_159_V_read293_rewind_phi_fu_13471_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_159_V_read293_rewind_phi_fu_13471_p6 = data_159_V_read293_phi_reg_25922.read();
    } else {
        ap_phi_mux_data_159_V_read293_rewind_phi_fu_13471_p6 = data_159_V_read293_rewind_reg_13467.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_15_V_read149_phi_phi_fu_24054_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_15_V_read149_phi_phi_fu_24054_p4 = ap_phi_mux_data_15_V_read149_rewind_phi_fu_11455_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_15_V_read149_phi_phi_fu_24054_p4 = data_15_V_read.read();
    } else {
        ap_phi_mux_data_15_V_read149_phi_phi_fu_24054_p4 = ap_phi_reg_pp0_iter0_data_15_V_read149_phi_reg_24050.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_15_V_read149_rewind_phi_fu_11455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_15_V_read149_rewind_phi_fu_11455_p6 = data_15_V_read149_phi_reg_24050.read();
    } else {
        ap_phi_mux_data_15_V_read149_rewind_phi_fu_11455_p6 = data_15_V_read149_rewind_reg_11451.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_160_V_read294_phi_phi_fu_25939_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_160_V_read294_phi_phi_fu_25939_p4 = ap_phi_mux_data_160_V_read294_rewind_phi_fu_13485_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_160_V_read294_phi_phi_fu_25939_p4 = data_160_V_read.read();
    } else {
        ap_phi_mux_data_160_V_read294_phi_phi_fu_25939_p4 = ap_phi_reg_pp0_iter0_data_160_V_read294_phi_reg_25935.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_160_V_read294_rewind_phi_fu_13485_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_160_V_read294_rewind_phi_fu_13485_p6 = data_160_V_read294_phi_reg_25935.read();
    } else {
        ap_phi_mux_data_160_V_read294_rewind_phi_fu_13485_p6 = data_160_V_read294_rewind_reg_13481.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_161_V_read295_phi_phi_fu_25952_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_161_V_read295_phi_phi_fu_25952_p4 = ap_phi_mux_data_161_V_read295_rewind_phi_fu_13499_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_161_V_read295_phi_phi_fu_25952_p4 = data_161_V_read.read();
    } else {
        ap_phi_mux_data_161_V_read295_phi_phi_fu_25952_p4 = ap_phi_reg_pp0_iter0_data_161_V_read295_phi_reg_25948.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_161_V_read295_rewind_phi_fu_13499_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_161_V_read295_rewind_phi_fu_13499_p6 = data_161_V_read295_phi_reg_25948.read();
    } else {
        ap_phi_mux_data_161_V_read295_rewind_phi_fu_13499_p6 = data_161_V_read295_rewind_reg_13495.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_162_V_read296_phi_phi_fu_25965_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_162_V_read296_phi_phi_fu_25965_p4 = ap_phi_mux_data_162_V_read296_rewind_phi_fu_13513_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_162_V_read296_phi_phi_fu_25965_p4 = data_162_V_read.read();
    } else {
        ap_phi_mux_data_162_V_read296_phi_phi_fu_25965_p4 = ap_phi_reg_pp0_iter0_data_162_V_read296_phi_reg_25961.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_162_V_read296_rewind_phi_fu_13513_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_162_V_read296_rewind_phi_fu_13513_p6 = data_162_V_read296_phi_reg_25961.read();
    } else {
        ap_phi_mux_data_162_V_read296_rewind_phi_fu_13513_p6 = data_162_V_read296_rewind_reg_13509.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_163_V_read297_phi_phi_fu_25978_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_163_V_read297_phi_phi_fu_25978_p4 = ap_phi_mux_data_163_V_read297_rewind_phi_fu_13527_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_163_V_read297_phi_phi_fu_25978_p4 = data_163_V_read.read();
    } else {
        ap_phi_mux_data_163_V_read297_phi_phi_fu_25978_p4 = ap_phi_reg_pp0_iter0_data_163_V_read297_phi_reg_25974.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_163_V_read297_rewind_phi_fu_13527_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_163_V_read297_rewind_phi_fu_13527_p6 = data_163_V_read297_phi_reg_25974.read();
    } else {
        ap_phi_mux_data_163_V_read297_rewind_phi_fu_13527_p6 = data_163_V_read297_rewind_reg_13523.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_164_V_read298_phi_phi_fu_25991_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_164_V_read298_phi_phi_fu_25991_p4 = ap_phi_mux_data_164_V_read298_rewind_phi_fu_13541_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_164_V_read298_phi_phi_fu_25991_p4 = data_164_V_read.read();
    } else {
        ap_phi_mux_data_164_V_read298_phi_phi_fu_25991_p4 = ap_phi_reg_pp0_iter0_data_164_V_read298_phi_reg_25987.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_164_V_read298_rewind_phi_fu_13541_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_164_V_read298_rewind_phi_fu_13541_p6 = data_164_V_read298_phi_reg_25987.read();
    } else {
        ap_phi_mux_data_164_V_read298_rewind_phi_fu_13541_p6 = data_164_V_read298_rewind_reg_13537.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_165_V_read299_phi_phi_fu_26004_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_165_V_read299_phi_phi_fu_26004_p4 = ap_phi_mux_data_165_V_read299_rewind_phi_fu_13555_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_165_V_read299_phi_phi_fu_26004_p4 = data_165_V_read.read();
    } else {
        ap_phi_mux_data_165_V_read299_phi_phi_fu_26004_p4 = ap_phi_reg_pp0_iter0_data_165_V_read299_phi_reg_26000.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_165_V_read299_rewind_phi_fu_13555_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_165_V_read299_rewind_phi_fu_13555_p6 = data_165_V_read299_phi_reg_26000.read();
    } else {
        ap_phi_mux_data_165_V_read299_rewind_phi_fu_13555_p6 = data_165_V_read299_rewind_reg_13551.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_166_V_read300_phi_phi_fu_26017_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_166_V_read300_phi_phi_fu_26017_p4 = ap_phi_mux_data_166_V_read300_rewind_phi_fu_13569_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_166_V_read300_phi_phi_fu_26017_p4 = data_166_V_read.read();
    } else {
        ap_phi_mux_data_166_V_read300_phi_phi_fu_26017_p4 = ap_phi_reg_pp0_iter0_data_166_V_read300_phi_reg_26013.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_166_V_read300_rewind_phi_fu_13569_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_166_V_read300_rewind_phi_fu_13569_p6 = data_166_V_read300_phi_reg_26013.read();
    } else {
        ap_phi_mux_data_166_V_read300_rewind_phi_fu_13569_p6 = data_166_V_read300_rewind_reg_13565.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_167_V_read301_phi_phi_fu_26030_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_167_V_read301_phi_phi_fu_26030_p4 = ap_phi_mux_data_167_V_read301_rewind_phi_fu_13583_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_167_V_read301_phi_phi_fu_26030_p4 = data_167_V_read.read();
    } else {
        ap_phi_mux_data_167_V_read301_phi_phi_fu_26030_p4 = ap_phi_reg_pp0_iter0_data_167_V_read301_phi_reg_26026.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_167_V_read301_rewind_phi_fu_13583_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_167_V_read301_rewind_phi_fu_13583_p6 = data_167_V_read301_phi_reg_26026.read();
    } else {
        ap_phi_mux_data_167_V_read301_rewind_phi_fu_13583_p6 = data_167_V_read301_rewind_reg_13579.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_168_V_read302_phi_phi_fu_26043_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_168_V_read302_phi_phi_fu_26043_p4 = ap_phi_mux_data_168_V_read302_rewind_phi_fu_13597_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_168_V_read302_phi_phi_fu_26043_p4 = data_168_V_read.read();
    } else {
        ap_phi_mux_data_168_V_read302_phi_phi_fu_26043_p4 = ap_phi_reg_pp0_iter0_data_168_V_read302_phi_reg_26039.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_168_V_read302_rewind_phi_fu_13597_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_168_V_read302_rewind_phi_fu_13597_p6 = data_168_V_read302_phi_reg_26039.read();
    } else {
        ap_phi_mux_data_168_V_read302_rewind_phi_fu_13597_p6 = data_168_V_read302_rewind_reg_13593.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_169_V_read303_phi_phi_fu_26056_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_169_V_read303_phi_phi_fu_26056_p4 = ap_phi_mux_data_169_V_read303_rewind_phi_fu_13611_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_169_V_read303_phi_phi_fu_26056_p4 = data_169_V_read.read();
    } else {
        ap_phi_mux_data_169_V_read303_phi_phi_fu_26056_p4 = ap_phi_reg_pp0_iter0_data_169_V_read303_phi_reg_26052.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_169_V_read303_rewind_phi_fu_13611_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_169_V_read303_rewind_phi_fu_13611_p6 = data_169_V_read303_phi_reg_26052.read();
    } else {
        ap_phi_mux_data_169_V_read303_rewind_phi_fu_13611_p6 = data_169_V_read303_rewind_reg_13607.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_16_V_read150_phi_phi_fu_24067_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_16_V_read150_phi_phi_fu_24067_p4 = ap_phi_mux_data_16_V_read150_rewind_phi_fu_11469_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_16_V_read150_phi_phi_fu_24067_p4 = data_16_V_read.read();
    } else {
        ap_phi_mux_data_16_V_read150_phi_phi_fu_24067_p4 = ap_phi_reg_pp0_iter0_data_16_V_read150_phi_reg_24063.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_16_V_read150_rewind_phi_fu_11469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_16_V_read150_rewind_phi_fu_11469_p6 = data_16_V_read150_phi_reg_24063.read();
    } else {
        ap_phi_mux_data_16_V_read150_rewind_phi_fu_11469_p6 = data_16_V_read150_rewind_reg_11465.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_170_V_read304_phi_phi_fu_26069_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_170_V_read304_phi_phi_fu_26069_p4 = ap_phi_mux_data_170_V_read304_rewind_phi_fu_13625_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_170_V_read304_phi_phi_fu_26069_p4 = data_170_V_read.read();
    } else {
        ap_phi_mux_data_170_V_read304_phi_phi_fu_26069_p4 = ap_phi_reg_pp0_iter0_data_170_V_read304_phi_reg_26065.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_170_V_read304_rewind_phi_fu_13625_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_170_V_read304_rewind_phi_fu_13625_p6 = data_170_V_read304_phi_reg_26065.read();
    } else {
        ap_phi_mux_data_170_V_read304_rewind_phi_fu_13625_p6 = data_170_V_read304_rewind_reg_13621.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_171_V_read305_phi_phi_fu_26082_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_171_V_read305_phi_phi_fu_26082_p4 = ap_phi_mux_data_171_V_read305_rewind_phi_fu_13639_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_171_V_read305_phi_phi_fu_26082_p4 = data_171_V_read.read();
    } else {
        ap_phi_mux_data_171_V_read305_phi_phi_fu_26082_p4 = ap_phi_reg_pp0_iter0_data_171_V_read305_phi_reg_26078.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_171_V_read305_rewind_phi_fu_13639_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_171_V_read305_rewind_phi_fu_13639_p6 = data_171_V_read305_phi_reg_26078.read();
    } else {
        ap_phi_mux_data_171_V_read305_rewind_phi_fu_13639_p6 = data_171_V_read305_rewind_reg_13635.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_172_V_read306_phi_phi_fu_26095_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_172_V_read306_phi_phi_fu_26095_p4 = ap_phi_mux_data_172_V_read306_rewind_phi_fu_13653_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_172_V_read306_phi_phi_fu_26095_p4 = data_172_V_read.read();
    } else {
        ap_phi_mux_data_172_V_read306_phi_phi_fu_26095_p4 = ap_phi_reg_pp0_iter0_data_172_V_read306_phi_reg_26091.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_172_V_read306_rewind_phi_fu_13653_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_172_V_read306_rewind_phi_fu_13653_p6 = data_172_V_read306_phi_reg_26091.read();
    } else {
        ap_phi_mux_data_172_V_read306_rewind_phi_fu_13653_p6 = data_172_V_read306_rewind_reg_13649.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_173_V_read307_phi_phi_fu_26108_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_173_V_read307_phi_phi_fu_26108_p4 = ap_phi_mux_data_173_V_read307_rewind_phi_fu_13667_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_173_V_read307_phi_phi_fu_26108_p4 = data_173_V_read.read();
    } else {
        ap_phi_mux_data_173_V_read307_phi_phi_fu_26108_p4 = ap_phi_reg_pp0_iter0_data_173_V_read307_phi_reg_26104.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_173_V_read307_rewind_phi_fu_13667_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_173_V_read307_rewind_phi_fu_13667_p6 = data_173_V_read307_phi_reg_26104.read();
    } else {
        ap_phi_mux_data_173_V_read307_rewind_phi_fu_13667_p6 = data_173_V_read307_rewind_reg_13663.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_174_V_read308_phi_phi_fu_26121_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_174_V_read308_phi_phi_fu_26121_p4 = ap_phi_mux_data_174_V_read308_rewind_phi_fu_13681_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_174_V_read308_phi_phi_fu_26121_p4 = data_174_V_read.read();
    } else {
        ap_phi_mux_data_174_V_read308_phi_phi_fu_26121_p4 = ap_phi_reg_pp0_iter0_data_174_V_read308_phi_reg_26117.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_174_V_read308_rewind_phi_fu_13681_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_174_V_read308_rewind_phi_fu_13681_p6 = data_174_V_read308_phi_reg_26117.read();
    } else {
        ap_phi_mux_data_174_V_read308_rewind_phi_fu_13681_p6 = data_174_V_read308_rewind_reg_13677.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_175_V_read309_phi_phi_fu_26134_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_175_V_read309_phi_phi_fu_26134_p4 = ap_phi_mux_data_175_V_read309_rewind_phi_fu_13695_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_175_V_read309_phi_phi_fu_26134_p4 = data_175_V_read.read();
    } else {
        ap_phi_mux_data_175_V_read309_phi_phi_fu_26134_p4 = ap_phi_reg_pp0_iter0_data_175_V_read309_phi_reg_26130.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_175_V_read309_rewind_phi_fu_13695_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_175_V_read309_rewind_phi_fu_13695_p6 = data_175_V_read309_phi_reg_26130.read();
    } else {
        ap_phi_mux_data_175_V_read309_rewind_phi_fu_13695_p6 = data_175_V_read309_rewind_reg_13691.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_176_V_read310_phi_phi_fu_26147_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_176_V_read310_phi_phi_fu_26147_p4 = ap_phi_mux_data_176_V_read310_rewind_phi_fu_13709_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_176_V_read310_phi_phi_fu_26147_p4 = data_176_V_read.read();
    } else {
        ap_phi_mux_data_176_V_read310_phi_phi_fu_26147_p4 = ap_phi_reg_pp0_iter0_data_176_V_read310_phi_reg_26143.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_176_V_read310_rewind_phi_fu_13709_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_176_V_read310_rewind_phi_fu_13709_p6 = data_176_V_read310_phi_reg_26143.read();
    } else {
        ap_phi_mux_data_176_V_read310_rewind_phi_fu_13709_p6 = data_176_V_read310_rewind_reg_13705.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_177_V_read311_phi_phi_fu_26160_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_177_V_read311_phi_phi_fu_26160_p4 = ap_phi_mux_data_177_V_read311_rewind_phi_fu_13723_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_177_V_read311_phi_phi_fu_26160_p4 = data_177_V_read.read();
    } else {
        ap_phi_mux_data_177_V_read311_phi_phi_fu_26160_p4 = ap_phi_reg_pp0_iter0_data_177_V_read311_phi_reg_26156.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_177_V_read311_rewind_phi_fu_13723_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_177_V_read311_rewind_phi_fu_13723_p6 = data_177_V_read311_phi_reg_26156.read();
    } else {
        ap_phi_mux_data_177_V_read311_rewind_phi_fu_13723_p6 = data_177_V_read311_rewind_reg_13719.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_178_V_read312_phi_phi_fu_26173_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_178_V_read312_phi_phi_fu_26173_p4 = ap_phi_mux_data_178_V_read312_rewind_phi_fu_13737_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_178_V_read312_phi_phi_fu_26173_p4 = data_178_V_read.read();
    } else {
        ap_phi_mux_data_178_V_read312_phi_phi_fu_26173_p4 = ap_phi_reg_pp0_iter0_data_178_V_read312_phi_reg_26169.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_178_V_read312_rewind_phi_fu_13737_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_178_V_read312_rewind_phi_fu_13737_p6 = data_178_V_read312_phi_reg_26169.read();
    } else {
        ap_phi_mux_data_178_V_read312_rewind_phi_fu_13737_p6 = data_178_V_read312_rewind_reg_13733.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_179_V_read313_phi_phi_fu_26186_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_179_V_read313_phi_phi_fu_26186_p4 = ap_phi_mux_data_179_V_read313_rewind_phi_fu_13751_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_179_V_read313_phi_phi_fu_26186_p4 = data_179_V_read.read();
    } else {
        ap_phi_mux_data_179_V_read313_phi_phi_fu_26186_p4 = ap_phi_reg_pp0_iter0_data_179_V_read313_phi_reg_26182.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_179_V_read313_rewind_phi_fu_13751_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_179_V_read313_rewind_phi_fu_13751_p6 = data_179_V_read313_phi_reg_26182.read();
    } else {
        ap_phi_mux_data_179_V_read313_rewind_phi_fu_13751_p6 = data_179_V_read313_rewind_reg_13747.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_17_V_read151_phi_phi_fu_24080_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_17_V_read151_phi_phi_fu_24080_p4 = ap_phi_mux_data_17_V_read151_rewind_phi_fu_11483_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_17_V_read151_phi_phi_fu_24080_p4 = data_17_V_read.read();
    } else {
        ap_phi_mux_data_17_V_read151_phi_phi_fu_24080_p4 = ap_phi_reg_pp0_iter0_data_17_V_read151_phi_reg_24076.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_17_V_read151_rewind_phi_fu_11483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_17_V_read151_rewind_phi_fu_11483_p6 = data_17_V_read151_phi_reg_24076.read();
    } else {
        ap_phi_mux_data_17_V_read151_rewind_phi_fu_11483_p6 = data_17_V_read151_rewind_reg_11479.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_180_V_read314_phi_phi_fu_26199_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_180_V_read314_phi_phi_fu_26199_p4 = ap_phi_mux_data_180_V_read314_rewind_phi_fu_13765_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_180_V_read314_phi_phi_fu_26199_p4 = data_180_V_read.read();
    } else {
        ap_phi_mux_data_180_V_read314_phi_phi_fu_26199_p4 = ap_phi_reg_pp0_iter0_data_180_V_read314_phi_reg_26195.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_180_V_read314_rewind_phi_fu_13765_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_180_V_read314_rewind_phi_fu_13765_p6 = data_180_V_read314_phi_reg_26195.read();
    } else {
        ap_phi_mux_data_180_V_read314_rewind_phi_fu_13765_p6 = data_180_V_read314_rewind_reg_13761.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_181_V_read315_phi_phi_fu_26212_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_181_V_read315_phi_phi_fu_26212_p4 = ap_phi_mux_data_181_V_read315_rewind_phi_fu_13779_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_181_V_read315_phi_phi_fu_26212_p4 = data_181_V_read.read();
    } else {
        ap_phi_mux_data_181_V_read315_phi_phi_fu_26212_p4 = ap_phi_reg_pp0_iter0_data_181_V_read315_phi_reg_26208.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_181_V_read315_rewind_phi_fu_13779_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_181_V_read315_rewind_phi_fu_13779_p6 = data_181_V_read315_phi_reg_26208.read();
    } else {
        ap_phi_mux_data_181_V_read315_rewind_phi_fu_13779_p6 = data_181_V_read315_rewind_reg_13775.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_182_V_read316_phi_phi_fu_26225_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_182_V_read316_phi_phi_fu_26225_p4 = ap_phi_mux_data_182_V_read316_rewind_phi_fu_13793_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_182_V_read316_phi_phi_fu_26225_p4 = data_182_V_read.read();
    } else {
        ap_phi_mux_data_182_V_read316_phi_phi_fu_26225_p4 = ap_phi_reg_pp0_iter0_data_182_V_read316_phi_reg_26221.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_182_V_read316_rewind_phi_fu_13793_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_182_V_read316_rewind_phi_fu_13793_p6 = data_182_V_read316_phi_reg_26221.read();
    } else {
        ap_phi_mux_data_182_V_read316_rewind_phi_fu_13793_p6 = data_182_V_read316_rewind_reg_13789.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_183_V_read317_phi_phi_fu_26238_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_183_V_read317_phi_phi_fu_26238_p4 = ap_phi_mux_data_183_V_read317_rewind_phi_fu_13807_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_183_V_read317_phi_phi_fu_26238_p4 = data_183_V_read.read();
    } else {
        ap_phi_mux_data_183_V_read317_phi_phi_fu_26238_p4 = ap_phi_reg_pp0_iter0_data_183_V_read317_phi_reg_26234.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_183_V_read317_rewind_phi_fu_13807_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_183_V_read317_rewind_phi_fu_13807_p6 = data_183_V_read317_phi_reg_26234.read();
    } else {
        ap_phi_mux_data_183_V_read317_rewind_phi_fu_13807_p6 = data_183_V_read317_rewind_reg_13803.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_184_V_read318_phi_phi_fu_26251_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_184_V_read318_phi_phi_fu_26251_p4 = ap_phi_mux_data_184_V_read318_rewind_phi_fu_13821_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_184_V_read318_phi_phi_fu_26251_p4 = data_184_V_read.read();
    } else {
        ap_phi_mux_data_184_V_read318_phi_phi_fu_26251_p4 = ap_phi_reg_pp0_iter0_data_184_V_read318_phi_reg_26247.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_184_V_read318_rewind_phi_fu_13821_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_184_V_read318_rewind_phi_fu_13821_p6 = data_184_V_read318_phi_reg_26247.read();
    } else {
        ap_phi_mux_data_184_V_read318_rewind_phi_fu_13821_p6 = data_184_V_read318_rewind_reg_13817.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_185_V_read319_phi_phi_fu_26264_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_185_V_read319_phi_phi_fu_26264_p4 = ap_phi_mux_data_185_V_read319_rewind_phi_fu_13835_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_185_V_read319_phi_phi_fu_26264_p4 = data_185_V_read.read();
    } else {
        ap_phi_mux_data_185_V_read319_phi_phi_fu_26264_p4 = ap_phi_reg_pp0_iter0_data_185_V_read319_phi_reg_26260.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_185_V_read319_rewind_phi_fu_13835_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_185_V_read319_rewind_phi_fu_13835_p6 = data_185_V_read319_phi_reg_26260.read();
    } else {
        ap_phi_mux_data_185_V_read319_rewind_phi_fu_13835_p6 = data_185_V_read319_rewind_reg_13831.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_186_V_read320_phi_phi_fu_26277_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_186_V_read320_phi_phi_fu_26277_p4 = ap_phi_mux_data_186_V_read320_rewind_phi_fu_13849_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_186_V_read320_phi_phi_fu_26277_p4 = data_186_V_read.read();
    } else {
        ap_phi_mux_data_186_V_read320_phi_phi_fu_26277_p4 = ap_phi_reg_pp0_iter0_data_186_V_read320_phi_reg_26273.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_186_V_read320_rewind_phi_fu_13849_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_186_V_read320_rewind_phi_fu_13849_p6 = data_186_V_read320_phi_reg_26273.read();
    } else {
        ap_phi_mux_data_186_V_read320_rewind_phi_fu_13849_p6 = data_186_V_read320_rewind_reg_13845.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_187_V_read321_phi_phi_fu_26290_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_187_V_read321_phi_phi_fu_26290_p4 = ap_phi_mux_data_187_V_read321_rewind_phi_fu_13863_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_187_V_read321_phi_phi_fu_26290_p4 = data_187_V_read.read();
    } else {
        ap_phi_mux_data_187_V_read321_phi_phi_fu_26290_p4 = ap_phi_reg_pp0_iter0_data_187_V_read321_phi_reg_26286.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_187_V_read321_rewind_phi_fu_13863_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_187_V_read321_rewind_phi_fu_13863_p6 = data_187_V_read321_phi_reg_26286.read();
    } else {
        ap_phi_mux_data_187_V_read321_rewind_phi_fu_13863_p6 = data_187_V_read321_rewind_reg_13859.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_188_V_read322_phi_phi_fu_26303_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_188_V_read322_phi_phi_fu_26303_p4 = ap_phi_mux_data_188_V_read322_rewind_phi_fu_13877_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_188_V_read322_phi_phi_fu_26303_p4 = data_188_V_read.read();
    } else {
        ap_phi_mux_data_188_V_read322_phi_phi_fu_26303_p4 = ap_phi_reg_pp0_iter0_data_188_V_read322_phi_reg_26299.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_188_V_read322_rewind_phi_fu_13877_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_188_V_read322_rewind_phi_fu_13877_p6 = data_188_V_read322_phi_reg_26299.read();
    } else {
        ap_phi_mux_data_188_V_read322_rewind_phi_fu_13877_p6 = data_188_V_read322_rewind_reg_13873.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_189_V_read323_phi_phi_fu_26316_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_189_V_read323_phi_phi_fu_26316_p4 = ap_phi_mux_data_189_V_read323_rewind_phi_fu_13891_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_189_V_read323_phi_phi_fu_26316_p4 = data_189_V_read.read();
    } else {
        ap_phi_mux_data_189_V_read323_phi_phi_fu_26316_p4 = ap_phi_reg_pp0_iter0_data_189_V_read323_phi_reg_26312.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_189_V_read323_rewind_phi_fu_13891_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_189_V_read323_rewind_phi_fu_13891_p6 = data_189_V_read323_phi_reg_26312.read();
    } else {
        ap_phi_mux_data_189_V_read323_rewind_phi_fu_13891_p6 = data_189_V_read323_rewind_reg_13887.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_18_V_read152_phi_phi_fu_24093_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_18_V_read152_phi_phi_fu_24093_p4 = ap_phi_mux_data_18_V_read152_rewind_phi_fu_11497_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_18_V_read152_phi_phi_fu_24093_p4 = data_18_V_read.read();
    } else {
        ap_phi_mux_data_18_V_read152_phi_phi_fu_24093_p4 = ap_phi_reg_pp0_iter0_data_18_V_read152_phi_reg_24089.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_18_V_read152_rewind_phi_fu_11497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_18_V_read152_rewind_phi_fu_11497_p6 = data_18_V_read152_phi_reg_24089.read();
    } else {
        ap_phi_mux_data_18_V_read152_rewind_phi_fu_11497_p6 = data_18_V_read152_rewind_reg_11493.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_190_V_read324_phi_phi_fu_26329_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_190_V_read324_phi_phi_fu_26329_p4 = ap_phi_mux_data_190_V_read324_rewind_phi_fu_13905_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_190_V_read324_phi_phi_fu_26329_p4 = data_190_V_read.read();
    } else {
        ap_phi_mux_data_190_V_read324_phi_phi_fu_26329_p4 = ap_phi_reg_pp0_iter0_data_190_V_read324_phi_reg_26325.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_190_V_read324_rewind_phi_fu_13905_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_190_V_read324_rewind_phi_fu_13905_p6 = data_190_V_read324_phi_reg_26325.read();
    } else {
        ap_phi_mux_data_190_V_read324_rewind_phi_fu_13905_p6 = data_190_V_read324_rewind_reg_13901.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_191_V_read325_phi_phi_fu_26342_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_191_V_read325_phi_phi_fu_26342_p4 = ap_phi_mux_data_191_V_read325_rewind_phi_fu_13919_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_191_V_read325_phi_phi_fu_26342_p4 = data_191_V_read.read();
    } else {
        ap_phi_mux_data_191_V_read325_phi_phi_fu_26342_p4 = ap_phi_reg_pp0_iter0_data_191_V_read325_phi_reg_26338.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_191_V_read325_rewind_phi_fu_13919_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_191_V_read325_rewind_phi_fu_13919_p6 = data_191_V_read325_phi_reg_26338.read();
    } else {
        ap_phi_mux_data_191_V_read325_rewind_phi_fu_13919_p6 = data_191_V_read325_rewind_reg_13915.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_192_V_read326_phi_phi_fu_26355_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_192_V_read326_phi_phi_fu_26355_p4 = ap_phi_mux_data_192_V_read326_rewind_phi_fu_13933_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_192_V_read326_phi_phi_fu_26355_p4 = data_192_V_read.read();
    } else {
        ap_phi_mux_data_192_V_read326_phi_phi_fu_26355_p4 = ap_phi_reg_pp0_iter0_data_192_V_read326_phi_reg_26351.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_192_V_read326_rewind_phi_fu_13933_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_192_V_read326_rewind_phi_fu_13933_p6 = data_192_V_read326_phi_reg_26351.read();
    } else {
        ap_phi_mux_data_192_V_read326_rewind_phi_fu_13933_p6 = data_192_V_read326_rewind_reg_13929.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_193_V_read327_phi_phi_fu_26368_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_193_V_read327_phi_phi_fu_26368_p4 = ap_phi_mux_data_193_V_read327_rewind_phi_fu_13947_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_193_V_read327_phi_phi_fu_26368_p4 = data_193_V_read.read();
    } else {
        ap_phi_mux_data_193_V_read327_phi_phi_fu_26368_p4 = ap_phi_reg_pp0_iter0_data_193_V_read327_phi_reg_26364.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_193_V_read327_rewind_phi_fu_13947_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_193_V_read327_rewind_phi_fu_13947_p6 = data_193_V_read327_phi_reg_26364.read();
    } else {
        ap_phi_mux_data_193_V_read327_rewind_phi_fu_13947_p6 = data_193_V_read327_rewind_reg_13943.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_194_V_read328_phi_phi_fu_26381_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_194_V_read328_phi_phi_fu_26381_p4 = ap_phi_mux_data_194_V_read328_rewind_phi_fu_13961_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_194_V_read328_phi_phi_fu_26381_p4 = data_194_V_read.read();
    } else {
        ap_phi_mux_data_194_V_read328_phi_phi_fu_26381_p4 = ap_phi_reg_pp0_iter0_data_194_V_read328_phi_reg_26377.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_194_V_read328_rewind_phi_fu_13961_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_194_V_read328_rewind_phi_fu_13961_p6 = data_194_V_read328_phi_reg_26377.read();
    } else {
        ap_phi_mux_data_194_V_read328_rewind_phi_fu_13961_p6 = data_194_V_read328_rewind_reg_13957.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_195_V_read329_phi_phi_fu_26394_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_195_V_read329_phi_phi_fu_26394_p4 = ap_phi_mux_data_195_V_read329_rewind_phi_fu_13975_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_195_V_read329_phi_phi_fu_26394_p4 = data_195_V_read.read();
    } else {
        ap_phi_mux_data_195_V_read329_phi_phi_fu_26394_p4 = ap_phi_reg_pp0_iter0_data_195_V_read329_phi_reg_26390.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_195_V_read329_rewind_phi_fu_13975_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_195_V_read329_rewind_phi_fu_13975_p6 = data_195_V_read329_phi_reg_26390.read();
    } else {
        ap_phi_mux_data_195_V_read329_rewind_phi_fu_13975_p6 = data_195_V_read329_rewind_reg_13971.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_196_V_read330_phi_phi_fu_26407_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_196_V_read330_phi_phi_fu_26407_p4 = ap_phi_mux_data_196_V_read330_rewind_phi_fu_13989_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_196_V_read330_phi_phi_fu_26407_p4 = data_196_V_read.read();
    } else {
        ap_phi_mux_data_196_V_read330_phi_phi_fu_26407_p4 = ap_phi_reg_pp0_iter0_data_196_V_read330_phi_reg_26403.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_196_V_read330_rewind_phi_fu_13989_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_196_V_read330_rewind_phi_fu_13989_p6 = data_196_V_read330_phi_reg_26403.read();
    } else {
        ap_phi_mux_data_196_V_read330_rewind_phi_fu_13989_p6 = data_196_V_read330_rewind_reg_13985.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_197_V_read331_phi_phi_fu_26420_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_197_V_read331_phi_phi_fu_26420_p4 = ap_phi_mux_data_197_V_read331_rewind_phi_fu_14003_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_197_V_read331_phi_phi_fu_26420_p4 = data_197_V_read.read();
    } else {
        ap_phi_mux_data_197_V_read331_phi_phi_fu_26420_p4 = ap_phi_reg_pp0_iter0_data_197_V_read331_phi_reg_26416.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_197_V_read331_rewind_phi_fu_14003_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_197_V_read331_rewind_phi_fu_14003_p6 = data_197_V_read331_phi_reg_26416.read();
    } else {
        ap_phi_mux_data_197_V_read331_rewind_phi_fu_14003_p6 = data_197_V_read331_rewind_reg_13999.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_198_V_read332_phi_phi_fu_26433_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_198_V_read332_phi_phi_fu_26433_p4 = ap_phi_mux_data_198_V_read332_rewind_phi_fu_14017_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_198_V_read332_phi_phi_fu_26433_p4 = data_198_V_read.read();
    } else {
        ap_phi_mux_data_198_V_read332_phi_phi_fu_26433_p4 = ap_phi_reg_pp0_iter0_data_198_V_read332_phi_reg_26429.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_198_V_read332_rewind_phi_fu_14017_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_198_V_read332_rewind_phi_fu_14017_p6 = data_198_V_read332_phi_reg_26429.read();
    } else {
        ap_phi_mux_data_198_V_read332_rewind_phi_fu_14017_p6 = data_198_V_read332_rewind_reg_14013.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_199_V_read333_phi_phi_fu_26446_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_199_V_read333_phi_phi_fu_26446_p4 = ap_phi_mux_data_199_V_read333_rewind_phi_fu_14031_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_199_V_read333_phi_phi_fu_26446_p4 = data_199_V_read.read();
    } else {
        ap_phi_mux_data_199_V_read333_phi_phi_fu_26446_p4 = ap_phi_reg_pp0_iter0_data_199_V_read333_phi_reg_26442.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_199_V_read333_rewind_phi_fu_14031_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_199_V_read333_rewind_phi_fu_14031_p6 = data_199_V_read333_phi_reg_26442.read();
    } else {
        ap_phi_mux_data_199_V_read333_rewind_phi_fu_14031_p6 = data_199_V_read333_rewind_reg_14027.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_19_V_read153_phi_phi_fu_24106_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_19_V_read153_phi_phi_fu_24106_p4 = ap_phi_mux_data_19_V_read153_rewind_phi_fu_11511_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_19_V_read153_phi_phi_fu_24106_p4 = data_19_V_read.read();
    } else {
        ap_phi_mux_data_19_V_read153_phi_phi_fu_24106_p4 = ap_phi_reg_pp0_iter0_data_19_V_read153_phi_reg_24102.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_19_V_read153_rewind_phi_fu_11511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_19_V_read153_rewind_phi_fu_11511_p6 = data_19_V_read153_phi_reg_24102.read();
    } else {
        ap_phi_mux_data_19_V_read153_rewind_phi_fu_11511_p6 = data_19_V_read153_rewind_reg_11507.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_1_V_read135_phi_phi_fu_23872_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_1_V_read135_phi_phi_fu_23872_p4 = ap_phi_mux_data_1_V_read135_rewind_phi_fu_11259_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_1_V_read135_phi_phi_fu_23872_p4 = data_1_V_read.read();
    } else {
        ap_phi_mux_data_1_V_read135_phi_phi_fu_23872_p4 = ap_phi_reg_pp0_iter0_data_1_V_read135_phi_reg_23868.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_1_V_read135_rewind_phi_fu_11259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_1_V_read135_rewind_phi_fu_11259_p6 = data_1_V_read135_phi_reg_23868.read();
    } else {
        ap_phi_mux_data_1_V_read135_rewind_phi_fu_11259_p6 = data_1_V_read135_rewind_reg_11255.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_200_V_read334_phi_phi_fu_26459_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_200_V_read334_phi_phi_fu_26459_p4 = ap_phi_mux_data_200_V_read334_rewind_phi_fu_14045_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_200_V_read334_phi_phi_fu_26459_p4 = data_200_V_read.read();
    } else {
        ap_phi_mux_data_200_V_read334_phi_phi_fu_26459_p4 = ap_phi_reg_pp0_iter0_data_200_V_read334_phi_reg_26455.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_200_V_read334_rewind_phi_fu_14045_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_200_V_read334_rewind_phi_fu_14045_p6 = data_200_V_read334_phi_reg_26455.read();
    } else {
        ap_phi_mux_data_200_V_read334_rewind_phi_fu_14045_p6 = data_200_V_read334_rewind_reg_14041.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_201_V_read335_phi_phi_fu_26472_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_201_V_read335_phi_phi_fu_26472_p4 = ap_phi_mux_data_201_V_read335_rewind_phi_fu_14059_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_201_V_read335_phi_phi_fu_26472_p4 = data_201_V_read.read();
    } else {
        ap_phi_mux_data_201_V_read335_phi_phi_fu_26472_p4 = ap_phi_reg_pp0_iter0_data_201_V_read335_phi_reg_26468.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_201_V_read335_rewind_phi_fu_14059_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_201_V_read335_rewind_phi_fu_14059_p6 = data_201_V_read335_phi_reg_26468.read();
    } else {
        ap_phi_mux_data_201_V_read335_rewind_phi_fu_14059_p6 = data_201_V_read335_rewind_reg_14055.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_202_V_read336_phi_phi_fu_26485_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_202_V_read336_phi_phi_fu_26485_p4 = ap_phi_mux_data_202_V_read336_rewind_phi_fu_14073_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_202_V_read336_phi_phi_fu_26485_p4 = data_202_V_read.read();
    } else {
        ap_phi_mux_data_202_V_read336_phi_phi_fu_26485_p4 = ap_phi_reg_pp0_iter0_data_202_V_read336_phi_reg_26481.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_202_V_read336_rewind_phi_fu_14073_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_202_V_read336_rewind_phi_fu_14073_p6 = data_202_V_read336_phi_reg_26481.read();
    } else {
        ap_phi_mux_data_202_V_read336_rewind_phi_fu_14073_p6 = data_202_V_read336_rewind_reg_14069.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_203_V_read337_phi_phi_fu_26498_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_203_V_read337_phi_phi_fu_26498_p4 = ap_phi_mux_data_203_V_read337_rewind_phi_fu_14087_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_203_V_read337_phi_phi_fu_26498_p4 = data_203_V_read.read();
    } else {
        ap_phi_mux_data_203_V_read337_phi_phi_fu_26498_p4 = ap_phi_reg_pp0_iter0_data_203_V_read337_phi_reg_26494.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_203_V_read337_rewind_phi_fu_14087_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_203_V_read337_rewind_phi_fu_14087_p6 = data_203_V_read337_phi_reg_26494.read();
    } else {
        ap_phi_mux_data_203_V_read337_rewind_phi_fu_14087_p6 = data_203_V_read337_rewind_reg_14083.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_204_V_read338_phi_phi_fu_26511_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_204_V_read338_phi_phi_fu_26511_p4 = ap_phi_mux_data_204_V_read338_rewind_phi_fu_14101_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_204_V_read338_phi_phi_fu_26511_p4 = data_204_V_read.read();
    } else {
        ap_phi_mux_data_204_V_read338_phi_phi_fu_26511_p4 = ap_phi_reg_pp0_iter0_data_204_V_read338_phi_reg_26507.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_204_V_read338_rewind_phi_fu_14101_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_204_V_read338_rewind_phi_fu_14101_p6 = data_204_V_read338_phi_reg_26507.read();
    } else {
        ap_phi_mux_data_204_V_read338_rewind_phi_fu_14101_p6 = data_204_V_read338_rewind_reg_14097.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_205_V_read339_phi_phi_fu_26524_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_205_V_read339_phi_phi_fu_26524_p4 = ap_phi_mux_data_205_V_read339_rewind_phi_fu_14115_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_205_V_read339_phi_phi_fu_26524_p4 = data_205_V_read.read();
    } else {
        ap_phi_mux_data_205_V_read339_phi_phi_fu_26524_p4 = ap_phi_reg_pp0_iter0_data_205_V_read339_phi_reg_26520.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_205_V_read339_rewind_phi_fu_14115_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_205_V_read339_rewind_phi_fu_14115_p6 = data_205_V_read339_phi_reg_26520.read();
    } else {
        ap_phi_mux_data_205_V_read339_rewind_phi_fu_14115_p6 = data_205_V_read339_rewind_reg_14111.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_206_V_read340_phi_phi_fu_26537_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_206_V_read340_phi_phi_fu_26537_p4 = ap_phi_mux_data_206_V_read340_rewind_phi_fu_14129_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_206_V_read340_phi_phi_fu_26537_p4 = data_206_V_read.read();
    } else {
        ap_phi_mux_data_206_V_read340_phi_phi_fu_26537_p4 = ap_phi_reg_pp0_iter0_data_206_V_read340_phi_reg_26533.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_206_V_read340_rewind_phi_fu_14129_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_206_V_read340_rewind_phi_fu_14129_p6 = data_206_V_read340_phi_reg_26533.read();
    } else {
        ap_phi_mux_data_206_V_read340_rewind_phi_fu_14129_p6 = data_206_V_read340_rewind_reg_14125.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_207_V_read341_phi_phi_fu_26550_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_207_V_read341_phi_phi_fu_26550_p4 = ap_phi_mux_data_207_V_read341_rewind_phi_fu_14143_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_207_V_read341_phi_phi_fu_26550_p4 = data_207_V_read.read();
    } else {
        ap_phi_mux_data_207_V_read341_phi_phi_fu_26550_p4 = ap_phi_reg_pp0_iter0_data_207_V_read341_phi_reg_26546.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_207_V_read341_rewind_phi_fu_14143_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_207_V_read341_rewind_phi_fu_14143_p6 = data_207_V_read341_phi_reg_26546.read();
    } else {
        ap_phi_mux_data_207_V_read341_rewind_phi_fu_14143_p6 = data_207_V_read341_rewind_reg_14139.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_208_V_read342_phi_phi_fu_26563_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_208_V_read342_phi_phi_fu_26563_p4 = ap_phi_mux_data_208_V_read342_rewind_phi_fu_14157_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_208_V_read342_phi_phi_fu_26563_p4 = data_208_V_read.read();
    } else {
        ap_phi_mux_data_208_V_read342_phi_phi_fu_26563_p4 = ap_phi_reg_pp0_iter0_data_208_V_read342_phi_reg_26559.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_208_V_read342_rewind_phi_fu_14157_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_208_V_read342_rewind_phi_fu_14157_p6 = data_208_V_read342_phi_reg_26559.read();
    } else {
        ap_phi_mux_data_208_V_read342_rewind_phi_fu_14157_p6 = data_208_V_read342_rewind_reg_14153.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_209_V_read343_phi_phi_fu_26576_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_209_V_read343_phi_phi_fu_26576_p4 = ap_phi_mux_data_209_V_read343_rewind_phi_fu_14171_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_209_V_read343_phi_phi_fu_26576_p4 = data_209_V_read.read();
    } else {
        ap_phi_mux_data_209_V_read343_phi_phi_fu_26576_p4 = ap_phi_reg_pp0_iter0_data_209_V_read343_phi_reg_26572.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_209_V_read343_rewind_phi_fu_14171_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_209_V_read343_rewind_phi_fu_14171_p6 = data_209_V_read343_phi_reg_26572.read();
    } else {
        ap_phi_mux_data_209_V_read343_rewind_phi_fu_14171_p6 = data_209_V_read343_rewind_reg_14167.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_20_V_read154_phi_phi_fu_24119_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_20_V_read154_phi_phi_fu_24119_p4 = ap_phi_mux_data_20_V_read154_rewind_phi_fu_11525_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_20_V_read154_phi_phi_fu_24119_p4 = data_20_V_read.read();
    } else {
        ap_phi_mux_data_20_V_read154_phi_phi_fu_24119_p4 = ap_phi_reg_pp0_iter0_data_20_V_read154_phi_reg_24115.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_20_V_read154_rewind_phi_fu_11525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_20_V_read154_rewind_phi_fu_11525_p6 = data_20_V_read154_phi_reg_24115.read();
    } else {
        ap_phi_mux_data_20_V_read154_rewind_phi_fu_11525_p6 = data_20_V_read154_rewind_reg_11521.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_210_V_read344_phi_phi_fu_26589_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_210_V_read344_phi_phi_fu_26589_p4 = ap_phi_mux_data_210_V_read344_rewind_phi_fu_14185_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_210_V_read344_phi_phi_fu_26589_p4 = data_210_V_read.read();
    } else {
        ap_phi_mux_data_210_V_read344_phi_phi_fu_26589_p4 = ap_phi_reg_pp0_iter0_data_210_V_read344_phi_reg_26585.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_210_V_read344_rewind_phi_fu_14185_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_210_V_read344_rewind_phi_fu_14185_p6 = data_210_V_read344_phi_reg_26585.read();
    } else {
        ap_phi_mux_data_210_V_read344_rewind_phi_fu_14185_p6 = data_210_V_read344_rewind_reg_14181.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_211_V_read345_phi_phi_fu_26602_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_211_V_read345_phi_phi_fu_26602_p4 = ap_phi_mux_data_211_V_read345_rewind_phi_fu_14199_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_211_V_read345_phi_phi_fu_26602_p4 = data_211_V_read.read();
    } else {
        ap_phi_mux_data_211_V_read345_phi_phi_fu_26602_p4 = ap_phi_reg_pp0_iter0_data_211_V_read345_phi_reg_26598.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_211_V_read345_rewind_phi_fu_14199_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_211_V_read345_rewind_phi_fu_14199_p6 = data_211_V_read345_phi_reg_26598.read();
    } else {
        ap_phi_mux_data_211_V_read345_rewind_phi_fu_14199_p6 = data_211_V_read345_rewind_reg_14195.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_212_V_read346_phi_phi_fu_26615_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_212_V_read346_phi_phi_fu_26615_p4 = ap_phi_mux_data_212_V_read346_rewind_phi_fu_14213_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_212_V_read346_phi_phi_fu_26615_p4 = data_212_V_read.read();
    } else {
        ap_phi_mux_data_212_V_read346_phi_phi_fu_26615_p4 = ap_phi_reg_pp0_iter0_data_212_V_read346_phi_reg_26611.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_212_V_read346_rewind_phi_fu_14213_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_212_V_read346_rewind_phi_fu_14213_p6 = data_212_V_read346_phi_reg_26611.read();
    } else {
        ap_phi_mux_data_212_V_read346_rewind_phi_fu_14213_p6 = data_212_V_read346_rewind_reg_14209.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_213_V_read347_phi_phi_fu_26628_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_213_V_read347_phi_phi_fu_26628_p4 = ap_phi_mux_data_213_V_read347_rewind_phi_fu_14227_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_213_V_read347_phi_phi_fu_26628_p4 = data_213_V_read.read();
    } else {
        ap_phi_mux_data_213_V_read347_phi_phi_fu_26628_p4 = ap_phi_reg_pp0_iter0_data_213_V_read347_phi_reg_26624.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_213_V_read347_rewind_phi_fu_14227_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_213_V_read347_rewind_phi_fu_14227_p6 = data_213_V_read347_phi_reg_26624.read();
    } else {
        ap_phi_mux_data_213_V_read347_rewind_phi_fu_14227_p6 = data_213_V_read347_rewind_reg_14223.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_214_V_read348_phi_phi_fu_26641_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_214_V_read348_phi_phi_fu_26641_p4 = ap_phi_mux_data_214_V_read348_rewind_phi_fu_14241_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_214_V_read348_phi_phi_fu_26641_p4 = data_214_V_read.read();
    } else {
        ap_phi_mux_data_214_V_read348_phi_phi_fu_26641_p4 = ap_phi_reg_pp0_iter0_data_214_V_read348_phi_reg_26637.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_214_V_read348_rewind_phi_fu_14241_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_214_V_read348_rewind_phi_fu_14241_p6 = data_214_V_read348_phi_reg_26637.read();
    } else {
        ap_phi_mux_data_214_V_read348_rewind_phi_fu_14241_p6 = data_214_V_read348_rewind_reg_14237.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_215_V_read349_phi_phi_fu_26654_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_215_V_read349_phi_phi_fu_26654_p4 = ap_phi_mux_data_215_V_read349_rewind_phi_fu_14255_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_215_V_read349_phi_phi_fu_26654_p4 = data_215_V_read.read();
    } else {
        ap_phi_mux_data_215_V_read349_phi_phi_fu_26654_p4 = ap_phi_reg_pp0_iter0_data_215_V_read349_phi_reg_26650.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_215_V_read349_rewind_phi_fu_14255_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_215_V_read349_rewind_phi_fu_14255_p6 = data_215_V_read349_phi_reg_26650.read();
    } else {
        ap_phi_mux_data_215_V_read349_rewind_phi_fu_14255_p6 = data_215_V_read349_rewind_reg_14251.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_216_V_read350_phi_phi_fu_26667_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_216_V_read350_phi_phi_fu_26667_p4 = ap_phi_mux_data_216_V_read350_rewind_phi_fu_14269_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_216_V_read350_phi_phi_fu_26667_p4 = data_216_V_read.read();
    } else {
        ap_phi_mux_data_216_V_read350_phi_phi_fu_26667_p4 = ap_phi_reg_pp0_iter0_data_216_V_read350_phi_reg_26663.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_216_V_read350_rewind_phi_fu_14269_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_216_V_read350_rewind_phi_fu_14269_p6 = data_216_V_read350_phi_reg_26663.read();
    } else {
        ap_phi_mux_data_216_V_read350_rewind_phi_fu_14269_p6 = data_216_V_read350_rewind_reg_14265.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_217_V_read351_phi_phi_fu_26680_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_217_V_read351_phi_phi_fu_26680_p4 = ap_phi_mux_data_217_V_read351_rewind_phi_fu_14283_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_217_V_read351_phi_phi_fu_26680_p4 = data_217_V_read.read();
    } else {
        ap_phi_mux_data_217_V_read351_phi_phi_fu_26680_p4 = ap_phi_reg_pp0_iter0_data_217_V_read351_phi_reg_26676.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_217_V_read351_rewind_phi_fu_14283_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_217_V_read351_rewind_phi_fu_14283_p6 = data_217_V_read351_phi_reg_26676.read();
    } else {
        ap_phi_mux_data_217_V_read351_rewind_phi_fu_14283_p6 = data_217_V_read351_rewind_reg_14279.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_218_V_read352_phi_phi_fu_26693_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_218_V_read352_phi_phi_fu_26693_p4 = ap_phi_mux_data_218_V_read352_rewind_phi_fu_14297_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_218_V_read352_phi_phi_fu_26693_p4 = data_218_V_read.read();
    } else {
        ap_phi_mux_data_218_V_read352_phi_phi_fu_26693_p4 = ap_phi_reg_pp0_iter0_data_218_V_read352_phi_reg_26689.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_218_V_read352_rewind_phi_fu_14297_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_218_V_read352_rewind_phi_fu_14297_p6 = data_218_V_read352_phi_reg_26689.read();
    } else {
        ap_phi_mux_data_218_V_read352_rewind_phi_fu_14297_p6 = data_218_V_read352_rewind_reg_14293.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_219_V_read353_phi_phi_fu_26706_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_219_V_read353_phi_phi_fu_26706_p4 = ap_phi_mux_data_219_V_read353_rewind_phi_fu_14311_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_219_V_read353_phi_phi_fu_26706_p4 = data_219_V_read.read();
    } else {
        ap_phi_mux_data_219_V_read353_phi_phi_fu_26706_p4 = ap_phi_reg_pp0_iter0_data_219_V_read353_phi_reg_26702.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_219_V_read353_rewind_phi_fu_14311_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_219_V_read353_rewind_phi_fu_14311_p6 = data_219_V_read353_phi_reg_26702.read();
    } else {
        ap_phi_mux_data_219_V_read353_rewind_phi_fu_14311_p6 = data_219_V_read353_rewind_reg_14307.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_21_V_read155_phi_phi_fu_24132_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_21_V_read155_phi_phi_fu_24132_p4 = ap_phi_mux_data_21_V_read155_rewind_phi_fu_11539_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_21_V_read155_phi_phi_fu_24132_p4 = data_21_V_read.read();
    } else {
        ap_phi_mux_data_21_V_read155_phi_phi_fu_24132_p4 = ap_phi_reg_pp0_iter0_data_21_V_read155_phi_reg_24128.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_21_V_read155_rewind_phi_fu_11539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_21_V_read155_rewind_phi_fu_11539_p6 = data_21_V_read155_phi_reg_24128.read();
    } else {
        ap_phi_mux_data_21_V_read155_rewind_phi_fu_11539_p6 = data_21_V_read155_rewind_reg_11535.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_220_V_read354_phi_phi_fu_26719_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_220_V_read354_phi_phi_fu_26719_p4 = ap_phi_mux_data_220_V_read354_rewind_phi_fu_14325_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_220_V_read354_phi_phi_fu_26719_p4 = data_220_V_read.read();
    } else {
        ap_phi_mux_data_220_V_read354_phi_phi_fu_26719_p4 = ap_phi_reg_pp0_iter0_data_220_V_read354_phi_reg_26715.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_220_V_read354_rewind_phi_fu_14325_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_220_V_read354_rewind_phi_fu_14325_p6 = data_220_V_read354_phi_reg_26715.read();
    } else {
        ap_phi_mux_data_220_V_read354_rewind_phi_fu_14325_p6 = data_220_V_read354_rewind_reg_14321.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_221_V_read355_phi_phi_fu_26732_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_221_V_read355_phi_phi_fu_26732_p4 = ap_phi_mux_data_221_V_read355_rewind_phi_fu_14339_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_221_V_read355_phi_phi_fu_26732_p4 = data_221_V_read.read();
    } else {
        ap_phi_mux_data_221_V_read355_phi_phi_fu_26732_p4 = ap_phi_reg_pp0_iter0_data_221_V_read355_phi_reg_26728.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_221_V_read355_rewind_phi_fu_14339_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_221_V_read355_rewind_phi_fu_14339_p6 = data_221_V_read355_phi_reg_26728.read();
    } else {
        ap_phi_mux_data_221_V_read355_rewind_phi_fu_14339_p6 = data_221_V_read355_rewind_reg_14335.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_222_V_read356_phi_phi_fu_26745_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_222_V_read356_phi_phi_fu_26745_p4 = ap_phi_mux_data_222_V_read356_rewind_phi_fu_14353_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_222_V_read356_phi_phi_fu_26745_p4 = data_222_V_read.read();
    } else {
        ap_phi_mux_data_222_V_read356_phi_phi_fu_26745_p4 = ap_phi_reg_pp0_iter0_data_222_V_read356_phi_reg_26741.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_222_V_read356_rewind_phi_fu_14353_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_222_V_read356_rewind_phi_fu_14353_p6 = data_222_V_read356_phi_reg_26741.read();
    } else {
        ap_phi_mux_data_222_V_read356_rewind_phi_fu_14353_p6 = data_222_V_read356_rewind_reg_14349.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_223_V_read357_phi_phi_fu_26758_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_223_V_read357_phi_phi_fu_26758_p4 = ap_phi_mux_data_223_V_read357_rewind_phi_fu_14367_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_223_V_read357_phi_phi_fu_26758_p4 = data_223_V_read.read();
    } else {
        ap_phi_mux_data_223_V_read357_phi_phi_fu_26758_p4 = ap_phi_reg_pp0_iter0_data_223_V_read357_phi_reg_26754.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_223_V_read357_rewind_phi_fu_14367_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_223_V_read357_rewind_phi_fu_14367_p6 = data_223_V_read357_phi_reg_26754.read();
    } else {
        ap_phi_mux_data_223_V_read357_rewind_phi_fu_14367_p6 = data_223_V_read357_rewind_reg_14363.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_224_V_read358_phi_phi_fu_26771_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_224_V_read358_phi_phi_fu_26771_p4 = ap_phi_mux_data_224_V_read358_rewind_phi_fu_14381_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_224_V_read358_phi_phi_fu_26771_p4 = data_224_V_read.read();
    } else {
        ap_phi_mux_data_224_V_read358_phi_phi_fu_26771_p4 = ap_phi_reg_pp0_iter0_data_224_V_read358_phi_reg_26767.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_224_V_read358_rewind_phi_fu_14381_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_224_V_read358_rewind_phi_fu_14381_p6 = data_224_V_read358_phi_reg_26767.read();
    } else {
        ap_phi_mux_data_224_V_read358_rewind_phi_fu_14381_p6 = data_224_V_read358_rewind_reg_14377.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_225_V_read359_phi_phi_fu_26784_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_225_V_read359_phi_phi_fu_26784_p4 = ap_phi_mux_data_225_V_read359_rewind_phi_fu_14395_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_225_V_read359_phi_phi_fu_26784_p4 = data_225_V_read.read();
    } else {
        ap_phi_mux_data_225_V_read359_phi_phi_fu_26784_p4 = ap_phi_reg_pp0_iter0_data_225_V_read359_phi_reg_26780.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_225_V_read359_rewind_phi_fu_14395_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_225_V_read359_rewind_phi_fu_14395_p6 = data_225_V_read359_phi_reg_26780.read();
    } else {
        ap_phi_mux_data_225_V_read359_rewind_phi_fu_14395_p6 = data_225_V_read359_rewind_reg_14391.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_226_V_read360_phi_phi_fu_26797_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_226_V_read360_phi_phi_fu_26797_p4 = ap_phi_mux_data_226_V_read360_rewind_phi_fu_14409_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_226_V_read360_phi_phi_fu_26797_p4 = data_226_V_read.read();
    } else {
        ap_phi_mux_data_226_V_read360_phi_phi_fu_26797_p4 = ap_phi_reg_pp0_iter0_data_226_V_read360_phi_reg_26793.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_226_V_read360_rewind_phi_fu_14409_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_226_V_read360_rewind_phi_fu_14409_p6 = data_226_V_read360_phi_reg_26793.read();
    } else {
        ap_phi_mux_data_226_V_read360_rewind_phi_fu_14409_p6 = data_226_V_read360_rewind_reg_14405.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_227_V_read361_phi_phi_fu_26810_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_227_V_read361_phi_phi_fu_26810_p4 = ap_phi_mux_data_227_V_read361_rewind_phi_fu_14423_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_227_V_read361_phi_phi_fu_26810_p4 = data_227_V_read.read();
    } else {
        ap_phi_mux_data_227_V_read361_phi_phi_fu_26810_p4 = ap_phi_reg_pp0_iter0_data_227_V_read361_phi_reg_26806.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_227_V_read361_rewind_phi_fu_14423_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_227_V_read361_rewind_phi_fu_14423_p6 = data_227_V_read361_phi_reg_26806.read();
    } else {
        ap_phi_mux_data_227_V_read361_rewind_phi_fu_14423_p6 = data_227_V_read361_rewind_reg_14419.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_228_V_read362_phi_phi_fu_26823_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_228_V_read362_phi_phi_fu_26823_p4 = ap_phi_mux_data_228_V_read362_rewind_phi_fu_14437_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_228_V_read362_phi_phi_fu_26823_p4 = data_228_V_read.read();
    } else {
        ap_phi_mux_data_228_V_read362_phi_phi_fu_26823_p4 = ap_phi_reg_pp0_iter0_data_228_V_read362_phi_reg_26819.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_228_V_read362_rewind_phi_fu_14437_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_228_V_read362_rewind_phi_fu_14437_p6 = data_228_V_read362_phi_reg_26819.read();
    } else {
        ap_phi_mux_data_228_V_read362_rewind_phi_fu_14437_p6 = data_228_V_read362_rewind_reg_14433.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_229_V_read363_phi_phi_fu_26836_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_229_V_read363_phi_phi_fu_26836_p4 = ap_phi_mux_data_229_V_read363_rewind_phi_fu_14451_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_229_V_read363_phi_phi_fu_26836_p4 = data_229_V_read.read();
    } else {
        ap_phi_mux_data_229_V_read363_phi_phi_fu_26836_p4 = ap_phi_reg_pp0_iter0_data_229_V_read363_phi_reg_26832.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_229_V_read363_rewind_phi_fu_14451_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_229_V_read363_rewind_phi_fu_14451_p6 = data_229_V_read363_phi_reg_26832.read();
    } else {
        ap_phi_mux_data_229_V_read363_rewind_phi_fu_14451_p6 = data_229_V_read363_rewind_reg_14447.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_22_V_read156_phi_phi_fu_24145_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_22_V_read156_phi_phi_fu_24145_p4 = ap_phi_mux_data_22_V_read156_rewind_phi_fu_11553_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_22_V_read156_phi_phi_fu_24145_p4 = data_22_V_read.read();
    } else {
        ap_phi_mux_data_22_V_read156_phi_phi_fu_24145_p4 = ap_phi_reg_pp0_iter0_data_22_V_read156_phi_reg_24141.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_22_V_read156_rewind_phi_fu_11553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_22_V_read156_rewind_phi_fu_11553_p6 = data_22_V_read156_phi_reg_24141.read();
    } else {
        ap_phi_mux_data_22_V_read156_rewind_phi_fu_11553_p6 = data_22_V_read156_rewind_reg_11549.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_230_V_read364_phi_phi_fu_26849_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_230_V_read364_phi_phi_fu_26849_p4 = ap_phi_mux_data_230_V_read364_rewind_phi_fu_14465_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_230_V_read364_phi_phi_fu_26849_p4 = data_230_V_read.read();
    } else {
        ap_phi_mux_data_230_V_read364_phi_phi_fu_26849_p4 = ap_phi_reg_pp0_iter0_data_230_V_read364_phi_reg_26845.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_230_V_read364_rewind_phi_fu_14465_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_230_V_read364_rewind_phi_fu_14465_p6 = data_230_V_read364_phi_reg_26845.read();
    } else {
        ap_phi_mux_data_230_V_read364_rewind_phi_fu_14465_p6 = data_230_V_read364_rewind_reg_14461.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_231_V_read365_phi_phi_fu_26862_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_231_V_read365_phi_phi_fu_26862_p4 = ap_phi_mux_data_231_V_read365_rewind_phi_fu_14479_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_231_V_read365_phi_phi_fu_26862_p4 = data_231_V_read.read();
    } else {
        ap_phi_mux_data_231_V_read365_phi_phi_fu_26862_p4 = ap_phi_reg_pp0_iter0_data_231_V_read365_phi_reg_26858.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_231_V_read365_rewind_phi_fu_14479_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_231_V_read365_rewind_phi_fu_14479_p6 = data_231_V_read365_phi_reg_26858.read();
    } else {
        ap_phi_mux_data_231_V_read365_rewind_phi_fu_14479_p6 = data_231_V_read365_rewind_reg_14475.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_232_V_read366_phi_phi_fu_26875_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_232_V_read366_phi_phi_fu_26875_p4 = ap_phi_mux_data_232_V_read366_rewind_phi_fu_14493_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_232_V_read366_phi_phi_fu_26875_p4 = data_232_V_read.read();
    } else {
        ap_phi_mux_data_232_V_read366_phi_phi_fu_26875_p4 = ap_phi_reg_pp0_iter0_data_232_V_read366_phi_reg_26871.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_232_V_read366_rewind_phi_fu_14493_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_232_V_read366_rewind_phi_fu_14493_p6 = data_232_V_read366_phi_reg_26871.read();
    } else {
        ap_phi_mux_data_232_V_read366_rewind_phi_fu_14493_p6 = data_232_V_read366_rewind_reg_14489.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_233_V_read367_phi_phi_fu_26888_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_233_V_read367_phi_phi_fu_26888_p4 = ap_phi_mux_data_233_V_read367_rewind_phi_fu_14507_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_233_V_read367_phi_phi_fu_26888_p4 = data_233_V_read.read();
    } else {
        ap_phi_mux_data_233_V_read367_phi_phi_fu_26888_p4 = ap_phi_reg_pp0_iter0_data_233_V_read367_phi_reg_26884.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_233_V_read367_rewind_phi_fu_14507_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_233_V_read367_rewind_phi_fu_14507_p6 = data_233_V_read367_phi_reg_26884.read();
    } else {
        ap_phi_mux_data_233_V_read367_rewind_phi_fu_14507_p6 = data_233_V_read367_rewind_reg_14503.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_234_V_read368_phi_phi_fu_26901_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_234_V_read368_phi_phi_fu_26901_p4 = ap_phi_mux_data_234_V_read368_rewind_phi_fu_14521_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_234_V_read368_phi_phi_fu_26901_p4 = data_234_V_read.read();
    } else {
        ap_phi_mux_data_234_V_read368_phi_phi_fu_26901_p4 = ap_phi_reg_pp0_iter0_data_234_V_read368_phi_reg_26897.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_234_V_read368_rewind_phi_fu_14521_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_234_V_read368_rewind_phi_fu_14521_p6 = data_234_V_read368_phi_reg_26897.read();
    } else {
        ap_phi_mux_data_234_V_read368_rewind_phi_fu_14521_p6 = data_234_V_read368_rewind_reg_14517.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_235_V_read369_phi_phi_fu_26914_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_235_V_read369_phi_phi_fu_26914_p4 = ap_phi_mux_data_235_V_read369_rewind_phi_fu_14535_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_235_V_read369_phi_phi_fu_26914_p4 = data_235_V_read.read();
    } else {
        ap_phi_mux_data_235_V_read369_phi_phi_fu_26914_p4 = ap_phi_reg_pp0_iter0_data_235_V_read369_phi_reg_26910.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_235_V_read369_rewind_phi_fu_14535_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_235_V_read369_rewind_phi_fu_14535_p6 = data_235_V_read369_phi_reg_26910.read();
    } else {
        ap_phi_mux_data_235_V_read369_rewind_phi_fu_14535_p6 = data_235_V_read369_rewind_reg_14531.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_236_V_read370_phi_phi_fu_26927_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_236_V_read370_phi_phi_fu_26927_p4 = ap_phi_mux_data_236_V_read370_rewind_phi_fu_14549_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_236_V_read370_phi_phi_fu_26927_p4 = data_236_V_read.read();
    } else {
        ap_phi_mux_data_236_V_read370_phi_phi_fu_26927_p4 = ap_phi_reg_pp0_iter0_data_236_V_read370_phi_reg_26923.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_236_V_read370_rewind_phi_fu_14549_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_236_V_read370_rewind_phi_fu_14549_p6 = data_236_V_read370_phi_reg_26923.read();
    } else {
        ap_phi_mux_data_236_V_read370_rewind_phi_fu_14549_p6 = data_236_V_read370_rewind_reg_14545.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_237_V_read371_phi_phi_fu_26940_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_237_V_read371_phi_phi_fu_26940_p4 = ap_phi_mux_data_237_V_read371_rewind_phi_fu_14563_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_237_V_read371_phi_phi_fu_26940_p4 = data_237_V_read.read();
    } else {
        ap_phi_mux_data_237_V_read371_phi_phi_fu_26940_p4 = ap_phi_reg_pp0_iter0_data_237_V_read371_phi_reg_26936.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_237_V_read371_rewind_phi_fu_14563_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_237_V_read371_rewind_phi_fu_14563_p6 = data_237_V_read371_phi_reg_26936.read();
    } else {
        ap_phi_mux_data_237_V_read371_rewind_phi_fu_14563_p6 = data_237_V_read371_rewind_reg_14559.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_238_V_read372_phi_phi_fu_26953_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_238_V_read372_phi_phi_fu_26953_p4 = ap_phi_mux_data_238_V_read372_rewind_phi_fu_14577_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_238_V_read372_phi_phi_fu_26953_p4 = data_238_V_read.read();
    } else {
        ap_phi_mux_data_238_V_read372_phi_phi_fu_26953_p4 = ap_phi_reg_pp0_iter0_data_238_V_read372_phi_reg_26949.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_238_V_read372_rewind_phi_fu_14577_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_238_V_read372_rewind_phi_fu_14577_p6 = data_238_V_read372_phi_reg_26949.read();
    } else {
        ap_phi_mux_data_238_V_read372_rewind_phi_fu_14577_p6 = data_238_V_read372_rewind_reg_14573.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_239_V_read373_phi_phi_fu_26966_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_239_V_read373_phi_phi_fu_26966_p4 = ap_phi_mux_data_239_V_read373_rewind_phi_fu_14591_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_239_V_read373_phi_phi_fu_26966_p4 = data_239_V_read.read();
    } else {
        ap_phi_mux_data_239_V_read373_phi_phi_fu_26966_p4 = ap_phi_reg_pp0_iter0_data_239_V_read373_phi_reg_26962.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_239_V_read373_rewind_phi_fu_14591_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_239_V_read373_rewind_phi_fu_14591_p6 = data_239_V_read373_phi_reg_26962.read();
    } else {
        ap_phi_mux_data_239_V_read373_rewind_phi_fu_14591_p6 = data_239_V_read373_rewind_reg_14587.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_23_V_read157_phi_phi_fu_24158_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_23_V_read157_phi_phi_fu_24158_p4 = ap_phi_mux_data_23_V_read157_rewind_phi_fu_11567_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_23_V_read157_phi_phi_fu_24158_p4 = data_23_V_read.read();
    } else {
        ap_phi_mux_data_23_V_read157_phi_phi_fu_24158_p4 = ap_phi_reg_pp0_iter0_data_23_V_read157_phi_reg_24154.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_23_V_read157_rewind_phi_fu_11567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_23_V_read157_rewind_phi_fu_11567_p6 = data_23_V_read157_phi_reg_24154.read();
    } else {
        ap_phi_mux_data_23_V_read157_rewind_phi_fu_11567_p6 = data_23_V_read157_rewind_reg_11563.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_240_V_read374_phi_phi_fu_26979_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_240_V_read374_phi_phi_fu_26979_p4 = ap_phi_mux_data_240_V_read374_rewind_phi_fu_14605_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_240_V_read374_phi_phi_fu_26979_p4 = data_240_V_read.read();
    } else {
        ap_phi_mux_data_240_V_read374_phi_phi_fu_26979_p4 = ap_phi_reg_pp0_iter0_data_240_V_read374_phi_reg_26975.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_240_V_read374_rewind_phi_fu_14605_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_240_V_read374_rewind_phi_fu_14605_p6 = data_240_V_read374_phi_reg_26975.read();
    } else {
        ap_phi_mux_data_240_V_read374_rewind_phi_fu_14605_p6 = data_240_V_read374_rewind_reg_14601.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_241_V_read375_phi_phi_fu_26992_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_241_V_read375_phi_phi_fu_26992_p4 = ap_phi_mux_data_241_V_read375_rewind_phi_fu_14619_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_241_V_read375_phi_phi_fu_26992_p4 = data_241_V_read.read();
    } else {
        ap_phi_mux_data_241_V_read375_phi_phi_fu_26992_p4 = ap_phi_reg_pp0_iter0_data_241_V_read375_phi_reg_26988.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_241_V_read375_rewind_phi_fu_14619_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_241_V_read375_rewind_phi_fu_14619_p6 = data_241_V_read375_phi_reg_26988.read();
    } else {
        ap_phi_mux_data_241_V_read375_rewind_phi_fu_14619_p6 = data_241_V_read375_rewind_reg_14615.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_242_V_read376_phi_phi_fu_27005_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_242_V_read376_phi_phi_fu_27005_p4 = ap_phi_mux_data_242_V_read376_rewind_phi_fu_14633_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_242_V_read376_phi_phi_fu_27005_p4 = data_242_V_read.read();
    } else {
        ap_phi_mux_data_242_V_read376_phi_phi_fu_27005_p4 = ap_phi_reg_pp0_iter0_data_242_V_read376_phi_reg_27001.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_242_V_read376_rewind_phi_fu_14633_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_242_V_read376_rewind_phi_fu_14633_p6 = data_242_V_read376_phi_reg_27001.read();
    } else {
        ap_phi_mux_data_242_V_read376_rewind_phi_fu_14633_p6 = data_242_V_read376_rewind_reg_14629.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_243_V_read377_phi_phi_fu_27018_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_243_V_read377_phi_phi_fu_27018_p4 = ap_phi_mux_data_243_V_read377_rewind_phi_fu_14647_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_243_V_read377_phi_phi_fu_27018_p4 = data_243_V_read.read();
    } else {
        ap_phi_mux_data_243_V_read377_phi_phi_fu_27018_p4 = ap_phi_reg_pp0_iter0_data_243_V_read377_phi_reg_27014.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_243_V_read377_rewind_phi_fu_14647_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_243_V_read377_rewind_phi_fu_14647_p6 = data_243_V_read377_phi_reg_27014.read();
    } else {
        ap_phi_mux_data_243_V_read377_rewind_phi_fu_14647_p6 = data_243_V_read377_rewind_reg_14643.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_244_V_read378_phi_phi_fu_27031_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_244_V_read378_phi_phi_fu_27031_p4 = ap_phi_mux_data_244_V_read378_rewind_phi_fu_14661_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_244_V_read378_phi_phi_fu_27031_p4 = data_244_V_read.read();
    } else {
        ap_phi_mux_data_244_V_read378_phi_phi_fu_27031_p4 = ap_phi_reg_pp0_iter0_data_244_V_read378_phi_reg_27027.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_244_V_read378_rewind_phi_fu_14661_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_244_V_read378_rewind_phi_fu_14661_p6 = data_244_V_read378_phi_reg_27027.read();
    } else {
        ap_phi_mux_data_244_V_read378_rewind_phi_fu_14661_p6 = data_244_V_read378_rewind_reg_14657.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_245_V_read379_phi_phi_fu_27044_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_245_V_read379_phi_phi_fu_27044_p4 = ap_phi_mux_data_245_V_read379_rewind_phi_fu_14675_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_245_V_read379_phi_phi_fu_27044_p4 = data_245_V_read.read();
    } else {
        ap_phi_mux_data_245_V_read379_phi_phi_fu_27044_p4 = ap_phi_reg_pp0_iter0_data_245_V_read379_phi_reg_27040.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_245_V_read379_rewind_phi_fu_14675_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_245_V_read379_rewind_phi_fu_14675_p6 = data_245_V_read379_phi_reg_27040.read();
    } else {
        ap_phi_mux_data_245_V_read379_rewind_phi_fu_14675_p6 = data_245_V_read379_rewind_reg_14671.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_246_V_read380_phi_phi_fu_27057_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_246_V_read380_phi_phi_fu_27057_p4 = ap_phi_mux_data_246_V_read380_rewind_phi_fu_14689_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_246_V_read380_phi_phi_fu_27057_p4 = data_246_V_read.read();
    } else {
        ap_phi_mux_data_246_V_read380_phi_phi_fu_27057_p4 = ap_phi_reg_pp0_iter0_data_246_V_read380_phi_reg_27053.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_246_V_read380_rewind_phi_fu_14689_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_246_V_read380_rewind_phi_fu_14689_p6 = data_246_V_read380_phi_reg_27053.read();
    } else {
        ap_phi_mux_data_246_V_read380_rewind_phi_fu_14689_p6 = data_246_V_read380_rewind_reg_14685.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_247_V_read381_phi_phi_fu_27070_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_247_V_read381_phi_phi_fu_27070_p4 = ap_phi_mux_data_247_V_read381_rewind_phi_fu_14703_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_247_V_read381_phi_phi_fu_27070_p4 = data_247_V_read.read();
    } else {
        ap_phi_mux_data_247_V_read381_phi_phi_fu_27070_p4 = ap_phi_reg_pp0_iter0_data_247_V_read381_phi_reg_27066.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_247_V_read381_rewind_phi_fu_14703_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_247_V_read381_rewind_phi_fu_14703_p6 = data_247_V_read381_phi_reg_27066.read();
    } else {
        ap_phi_mux_data_247_V_read381_rewind_phi_fu_14703_p6 = data_247_V_read381_rewind_reg_14699.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_248_V_read382_phi_phi_fu_27083_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_248_V_read382_phi_phi_fu_27083_p4 = ap_phi_mux_data_248_V_read382_rewind_phi_fu_14717_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_248_V_read382_phi_phi_fu_27083_p4 = data_248_V_read.read();
    } else {
        ap_phi_mux_data_248_V_read382_phi_phi_fu_27083_p4 = ap_phi_reg_pp0_iter0_data_248_V_read382_phi_reg_27079.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_248_V_read382_rewind_phi_fu_14717_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_248_V_read382_rewind_phi_fu_14717_p6 = data_248_V_read382_phi_reg_27079.read();
    } else {
        ap_phi_mux_data_248_V_read382_rewind_phi_fu_14717_p6 = data_248_V_read382_rewind_reg_14713.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_249_V_read383_phi_phi_fu_27096_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_249_V_read383_phi_phi_fu_27096_p4 = ap_phi_mux_data_249_V_read383_rewind_phi_fu_14731_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_249_V_read383_phi_phi_fu_27096_p4 = data_249_V_read.read();
    } else {
        ap_phi_mux_data_249_V_read383_phi_phi_fu_27096_p4 = ap_phi_reg_pp0_iter0_data_249_V_read383_phi_reg_27092.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_249_V_read383_rewind_phi_fu_14731_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_249_V_read383_rewind_phi_fu_14731_p6 = data_249_V_read383_phi_reg_27092.read();
    } else {
        ap_phi_mux_data_249_V_read383_rewind_phi_fu_14731_p6 = data_249_V_read383_rewind_reg_14727.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_24_V_read158_phi_phi_fu_24171_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_24_V_read158_phi_phi_fu_24171_p4 = ap_phi_mux_data_24_V_read158_rewind_phi_fu_11581_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_24_V_read158_phi_phi_fu_24171_p4 = data_24_V_read.read();
    } else {
        ap_phi_mux_data_24_V_read158_phi_phi_fu_24171_p4 = ap_phi_reg_pp0_iter0_data_24_V_read158_phi_reg_24167.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_24_V_read158_rewind_phi_fu_11581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_24_V_read158_rewind_phi_fu_11581_p6 = data_24_V_read158_phi_reg_24167.read();
    } else {
        ap_phi_mux_data_24_V_read158_rewind_phi_fu_11581_p6 = data_24_V_read158_rewind_reg_11577.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_250_V_read384_phi_phi_fu_27109_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_250_V_read384_phi_phi_fu_27109_p4 = ap_phi_mux_data_250_V_read384_rewind_phi_fu_14745_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_250_V_read384_phi_phi_fu_27109_p4 = data_250_V_read.read();
    } else {
        ap_phi_mux_data_250_V_read384_phi_phi_fu_27109_p4 = ap_phi_reg_pp0_iter0_data_250_V_read384_phi_reg_27105.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_250_V_read384_rewind_phi_fu_14745_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_250_V_read384_rewind_phi_fu_14745_p6 = data_250_V_read384_phi_reg_27105.read();
    } else {
        ap_phi_mux_data_250_V_read384_rewind_phi_fu_14745_p6 = data_250_V_read384_rewind_reg_14741.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_251_V_read385_phi_phi_fu_27122_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_251_V_read385_phi_phi_fu_27122_p4 = ap_phi_mux_data_251_V_read385_rewind_phi_fu_14759_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_251_V_read385_phi_phi_fu_27122_p4 = data_251_V_read.read();
    } else {
        ap_phi_mux_data_251_V_read385_phi_phi_fu_27122_p4 = ap_phi_reg_pp0_iter0_data_251_V_read385_phi_reg_27118.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_251_V_read385_rewind_phi_fu_14759_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_251_V_read385_rewind_phi_fu_14759_p6 = data_251_V_read385_phi_reg_27118.read();
    } else {
        ap_phi_mux_data_251_V_read385_rewind_phi_fu_14759_p6 = data_251_V_read385_rewind_reg_14755.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_252_V_read386_phi_phi_fu_27135_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_252_V_read386_phi_phi_fu_27135_p4 = ap_phi_mux_data_252_V_read386_rewind_phi_fu_14773_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_252_V_read386_phi_phi_fu_27135_p4 = data_252_V_read.read();
    } else {
        ap_phi_mux_data_252_V_read386_phi_phi_fu_27135_p4 = ap_phi_reg_pp0_iter0_data_252_V_read386_phi_reg_27131.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_252_V_read386_rewind_phi_fu_14773_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_252_V_read386_rewind_phi_fu_14773_p6 = data_252_V_read386_phi_reg_27131.read();
    } else {
        ap_phi_mux_data_252_V_read386_rewind_phi_fu_14773_p6 = data_252_V_read386_rewind_reg_14769.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_253_V_read387_phi_phi_fu_27148_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_253_V_read387_phi_phi_fu_27148_p4 = ap_phi_mux_data_253_V_read387_rewind_phi_fu_14787_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_253_V_read387_phi_phi_fu_27148_p4 = data_253_V_read.read();
    } else {
        ap_phi_mux_data_253_V_read387_phi_phi_fu_27148_p4 = ap_phi_reg_pp0_iter0_data_253_V_read387_phi_reg_27144.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_253_V_read387_rewind_phi_fu_14787_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_253_V_read387_rewind_phi_fu_14787_p6 = data_253_V_read387_phi_reg_27144.read();
    } else {
        ap_phi_mux_data_253_V_read387_rewind_phi_fu_14787_p6 = data_253_V_read387_rewind_reg_14783.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_254_V_read388_phi_phi_fu_27161_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_254_V_read388_phi_phi_fu_27161_p4 = ap_phi_mux_data_254_V_read388_rewind_phi_fu_14801_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_254_V_read388_phi_phi_fu_27161_p4 = data_254_V_read.read();
    } else {
        ap_phi_mux_data_254_V_read388_phi_phi_fu_27161_p4 = ap_phi_reg_pp0_iter0_data_254_V_read388_phi_reg_27157.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_254_V_read388_rewind_phi_fu_14801_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_254_V_read388_rewind_phi_fu_14801_p6 = data_254_V_read388_phi_reg_27157.read();
    } else {
        ap_phi_mux_data_254_V_read388_rewind_phi_fu_14801_p6 = data_254_V_read388_rewind_reg_14797.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_255_V_read389_phi_phi_fu_27174_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_255_V_read389_phi_phi_fu_27174_p4 = ap_phi_mux_data_255_V_read389_rewind_phi_fu_14815_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_255_V_read389_phi_phi_fu_27174_p4 = data_255_V_read.read();
    } else {
        ap_phi_mux_data_255_V_read389_phi_phi_fu_27174_p4 = ap_phi_reg_pp0_iter0_data_255_V_read389_phi_reg_27170.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_255_V_read389_rewind_phi_fu_14815_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_255_V_read389_rewind_phi_fu_14815_p6 = data_255_V_read389_phi_reg_27170.read();
    } else {
        ap_phi_mux_data_255_V_read389_rewind_phi_fu_14815_p6 = data_255_V_read389_rewind_reg_14811.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_256_V_read390_phi_phi_fu_27187_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_256_V_read390_phi_phi_fu_27187_p4 = ap_phi_mux_data_256_V_read390_rewind_phi_fu_14829_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_256_V_read390_phi_phi_fu_27187_p4 = data_256_V_read.read();
    } else {
        ap_phi_mux_data_256_V_read390_phi_phi_fu_27187_p4 = ap_phi_reg_pp0_iter0_data_256_V_read390_phi_reg_27183.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_256_V_read390_rewind_phi_fu_14829_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_256_V_read390_rewind_phi_fu_14829_p6 = data_256_V_read390_phi_reg_27183.read();
    } else {
        ap_phi_mux_data_256_V_read390_rewind_phi_fu_14829_p6 = data_256_V_read390_rewind_reg_14825.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_257_V_read391_phi_phi_fu_27200_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_257_V_read391_phi_phi_fu_27200_p4 = ap_phi_mux_data_257_V_read391_rewind_phi_fu_14843_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_257_V_read391_phi_phi_fu_27200_p4 = data_257_V_read.read();
    } else {
        ap_phi_mux_data_257_V_read391_phi_phi_fu_27200_p4 = ap_phi_reg_pp0_iter0_data_257_V_read391_phi_reg_27196.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_257_V_read391_rewind_phi_fu_14843_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_257_V_read391_rewind_phi_fu_14843_p6 = data_257_V_read391_phi_reg_27196.read();
    } else {
        ap_phi_mux_data_257_V_read391_rewind_phi_fu_14843_p6 = data_257_V_read391_rewind_reg_14839.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_258_V_read392_phi_phi_fu_27213_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_258_V_read392_phi_phi_fu_27213_p4 = ap_phi_mux_data_258_V_read392_rewind_phi_fu_14857_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_258_V_read392_phi_phi_fu_27213_p4 = data_258_V_read.read();
    } else {
        ap_phi_mux_data_258_V_read392_phi_phi_fu_27213_p4 = ap_phi_reg_pp0_iter0_data_258_V_read392_phi_reg_27209.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_258_V_read392_rewind_phi_fu_14857_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_258_V_read392_rewind_phi_fu_14857_p6 = data_258_V_read392_phi_reg_27209.read();
    } else {
        ap_phi_mux_data_258_V_read392_rewind_phi_fu_14857_p6 = data_258_V_read392_rewind_reg_14853.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_259_V_read393_phi_phi_fu_27226_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_259_V_read393_phi_phi_fu_27226_p4 = ap_phi_mux_data_259_V_read393_rewind_phi_fu_14871_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_259_V_read393_phi_phi_fu_27226_p4 = data_259_V_read.read();
    } else {
        ap_phi_mux_data_259_V_read393_phi_phi_fu_27226_p4 = ap_phi_reg_pp0_iter0_data_259_V_read393_phi_reg_27222.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_259_V_read393_rewind_phi_fu_14871_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_259_V_read393_rewind_phi_fu_14871_p6 = data_259_V_read393_phi_reg_27222.read();
    } else {
        ap_phi_mux_data_259_V_read393_rewind_phi_fu_14871_p6 = data_259_V_read393_rewind_reg_14867.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_25_V_read159_phi_phi_fu_24184_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_25_V_read159_phi_phi_fu_24184_p4 = ap_phi_mux_data_25_V_read159_rewind_phi_fu_11595_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_25_V_read159_phi_phi_fu_24184_p4 = data_25_V_read.read();
    } else {
        ap_phi_mux_data_25_V_read159_phi_phi_fu_24184_p4 = ap_phi_reg_pp0_iter0_data_25_V_read159_phi_reg_24180.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_25_V_read159_rewind_phi_fu_11595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_25_V_read159_rewind_phi_fu_11595_p6 = data_25_V_read159_phi_reg_24180.read();
    } else {
        ap_phi_mux_data_25_V_read159_rewind_phi_fu_11595_p6 = data_25_V_read159_rewind_reg_11591.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_260_V_read394_phi_phi_fu_27239_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_260_V_read394_phi_phi_fu_27239_p4 = ap_phi_mux_data_260_V_read394_rewind_phi_fu_14885_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_260_V_read394_phi_phi_fu_27239_p4 = data_260_V_read.read();
    } else {
        ap_phi_mux_data_260_V_read394_phi_phi_fu_27239_p4 = ap_phi_reg_pp0_iter0_data_260_V_read394_phi_reg_27235.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_260_V_read394_rewind_phi_fu_14885_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_260_V_read394_rewind_phi_fu_14885_p6 = data_260_V_read394_phi_reg_27235.read();
    } else {
        ap_phi_mux_data_260_V_read394_rewind_phi_fu_14885_p6 = data_260_V_read394_rewind_reg_14881.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_261_V_read395_phi_phi_fu_27252_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_261_V_read395_phi_phi_fu_27252_p4 = ap_phi_mux_data_261_V_read395_rewind_phi_fu_14899_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_261_V_read395_phi_phi_fu_27252_p4 = data_261_V_read.read();
    } else {
        ap_phi_mux_data_261_V_read395_phi_phi_fu_27252_p4 = ap_phi_reg_pp0_iter0_data_261_V_read395_phi_reg_27248.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_261_V_read395_rewind_phi_fu_14899_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_261_V_read395_rewind_phi_fu_14899_p6 = data_261_V_read395_phi_reg_27248.read();
    } else {
        ap_phi_mux_data_261_V_read395_rewind_phi_fu_14899_p6 = data_261_V_read395_rewind_reg_14895.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_262_V_read396_phi_phi_fu_27265_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_262_V_read396_phi_phi_fu_27265_p4 = ap_phi_mux_data_262_V_read396_rewind_phi_fu_14913_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_262_V_read396_phi_phi_fu_27265_p4 = data_262_V_read.read();
    } else {
        ap_phi_mux_data_262_V_read396_phi_phi_fu_27265_p4 = ap_phi_reg_pp0_iter0_data_262_V_read396_phi_reg_27261.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_262_V_read396_rewind_phi_fu_14913_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_262_V_read396_rewind_phi_fu_14913_p6 = data_262_V_read396_phi_reg_27261.read();
    } else {
        ap_phi_mux_data_262_V_read396_rewind_phi_fu_14913_p6 = data_262_V_read396_rewind_reg_14909.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_263_V_read397_phi_phi_fu_27278_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_263_V_read397_phi_phi_fu_27278_p4 = ap_phi_mux_data_263_V_read397_rewind_phi_fu_14927_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_263_V_read397_phi_phi_fu_27278_p4 = data_263_V_read.read();
    } else {
        ap_phi_mux_data_263_V_read397_phi_phi_fu_27278_p4 = ap_phi_reg_pp0_iter0_data_263_V_read397_phi_reg_27274.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_263_V_read397_rewind_phi_fu_14927_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_263_V_read397_rewind_phi_fu_14927_p6 = data_263_V_read397_phi_reg_27274.read();
    } else {
        ap_phi_mux_data_263_V_read397_rewind_phi_fu_14927_p6 = data_263_V_read397_rewind_reg_14923.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_264_V_read398_phi_phi_fu_27291_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_264_V_read398_phi_phi_fu_27291_p4 = ap_phi_mux_data_264_V_read398_rewind_phi_fu_14941_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_264_V_read398_phi_phi_fu_27291_p4 = data_264_V_read.read();
    } else {
        ap_phi_mux_data_264_V_read398_phi_phi_fu_27291_p4 = ap_phi_reg_pp0_iter0_data_264_V_read398_phi_reg_27287.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_264_V_read398_rewind_phi_fu_14941_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_264_V_read398_rewind_phi_fu_14941_p6 = data_264_V_read398_phi_reg_27287.read();
    } else {
        ap_phi_mux_data_264_V_read398_rewind_phi_fu_14941_p6 = data_264_V_read398_rewind_reg_14937.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_265_V_read399_phi_phi_fu_27304_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_265_V_read399_phi_phi_fu_27304_p4 = ap_phi_mux_data_265_V_read399_rewind_phi_fu_14955_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_265_V_read399_phi_phi_fu_27304_p4 = data_265_V_read.read();
    } else {
        ap_phi_mux_data_265_V_read399_phi_phi_fu_27304_p4 = ap_phi_reg_pp0_iter0_data_265_V_read399_phi_reg_27300.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_265_V_read399_rewind_phi_fu_14955_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_265_V_read399_rewind_phi_fu_14955_p6 = data_265_V_read399_phi_reg_27300.read();
    } else {
        ap_phi_mux_data_265_V_read399_rewind_phi_fu_14955_p6 = data_265_V_read399_rewind_reg_14951.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_266_V_read400_phi_phi_fu_27317_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_266_V_read400_phi_phi_fu_27317_p4 = ap_phi_mux_data_266_V_read400_rewind_phi_fu_14969_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_266_V_read400_phi_phi_fu_27317_p4 = data_266_V_read.read();
    } else {
        ap_phi_mux_data_266_V_read400_phi_phi_fu_27317_p4 = ap_phi_reg_pp0_iter0_data_266_V_read400_phi_reg_27313.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_266_V_read400_rewind_phi_fu_14969_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_266_V_read400_rewind_phi_fu_14969_p6 = data_266_V_read400_phi_reg_27313.read();
    } else {
        ap_phi_mux_data_266_V_read400_rewind_phi_fu_14969_p6 = data_266_V_read400_rewind_reg_14965.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_267_V_read401_phi_phi_fu_27330_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_267_V_read401_phi_phi_fu_27330_p4 = ap_phi_mux_data_267_V_read401_rewind_phi_fu_14983_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_267_V_read401_phi_phi_fu_27330_p4 = data_267_V_read.read();
    } else {
        ap_phi_mux_data_267_V_read401_phi_phi_fu_27330_p4 = ap_phi_reg_pp0_iter0_data_267_V_read401_phi_reg_27326.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_267_V_read401_rewind_phi_fu_14983_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_267_V_read401_rewind_phi_fu_14983_p6 = data_267_V_read401_phi_reg_27326.read();
    } else {
        ap_phi_mux_data_267_V_read401_rewind_phi_fu_14983_p6 = data_267_V_read401_rewind_reg_14979.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_268_V_read402_phi_phi_fu_27343_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_268_V_read402_phi_phi_fu_27343_p4 = ap_phi_mux_data_268_V_read402_rewind_phi_fu_14997_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_268_V_read402_phi_phi_fu_27343_p4 = data_268_V_read.read();
    } else {
        ap_phi_mux_data_268_V_read402_phi_phi_fu_27343_p4 = ap_phi_reg_pp0_iter0_data_268_V_read402_phi_reg_27339.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_268_V_read402_rewind_phi_fu_14997_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_268_V_read402_rewind_phi_fu_14997_p6 = data_268_V_read402_phi_reg_27339.read();
    } else {
        ap_phi_mux_data_268_V_read402_rewind_phi_fu_14997_p6 = data_268_V_read402_rewind_reg_14993.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_269_V_read403_phi_phi_fu_27356_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_269_V_read403_phi_phi_fu_27356_p4 = ap_phi_mux_data_269_V_read403_rewind_phi_fu_15011_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_269_V_read403_phi_phi_fu_27356_p4 = data_269_V_read.read();
    } else {
        ap_phi_mux_data_269_V_read403_phi_phi_fu_27356_p4 = ap_phi_reg_pp0_iter0_data_269_V_read403_phi_reg_27352.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_269_V_read403_rewind_phi_fu_15011_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_269_V_read403_rewind_phi_fu_15011_p6 = data_269_V_read403_phi_reg_27352.read();
    } else {
        ap_phi_mux_data_269_V_read403_rewind_phi_fu_15011_p6 = data_269_V_read403_rewind_reg_15007.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_26_V_read160_phi_phi_fu_24197_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_26_V_read160_phi_phi_fu_24197_p4 = ap_phi_mux_data_26_V_read160_rewind_phi_fu_11609_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_26_V_read160_phi_phi_fu_24197_p4 = data_26_V_read.read();
    } else {
        ap_phi_mux_data_26_V_read160_phi_phi_fu_24197_p4 = ap_phi_reg_pp0_iter0_data_26_V_read160_phi_reg_24193.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_26_V_read160_rewind_phi_fu_11609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_26_V_read160_rewind_phi_fu_11609_p6 = data_26_V_read160_phi_reg_24193.read();
    } else {
        ap_phi_mux_data_26_V_read160_rewind_phi_fu_11609_p6 = data_26_V_read160_rewind_reg_11605.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_270_V_read404_phi_phi_fu_27369_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_270_V_read404_phi_phi_fu_27369_p4 = ap_phi_mux_data_270_V_read404_rewind_phi_fu_15025_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_270_V_read404_phi_phi_fu_27369_p4 = data_270_V_read.read();
    } else {
        ap_phi_mux_data_270_V_read404_phi_phi_fu_27369_p4 = ap_phi_reg_pp0_iter0_data_270_V_read404_phi_reg_27365.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_270_V_read404_rewind_phi_fu_15025_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_270_V_read404_rewind_phi_fu_15025_p6 = data_270_V_read404_phi_reg_27365.read();
    } else {
        ap_phi_mux_data_270_V_read404_rewind_phi_fu_15025_p6 = data_270_V_read404_rewind_reg_15021.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_271_V_read405_phi_phi_fu_27382_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_271_V_read405_phi_phi_fu_27382_p4 = ap_phi_mux_data_271_V_read405_rewind_phi_fu_15039_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_271_V_read405_phi_phi_fu_27382_p4 = data_271_V_read.read();
    } else {
        ap_phi_mux_data_271_V_read405_phi_phi_fu_27382_p4 = ap_phi_reg_pp0_iter0_data_271_V_read405_phi_reg_27378.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_271_V_read405_rewind_phi_fu_15039_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_271_V_read405_rewind_phi_fu_15039_p6 = data_271_V_read405_phi_reg_27378.read();
    } else {
        ap_phi_mux_data_271_V_read405_rewind_phi_fu_15039_p6 = data_271_V_read405_rewind_reg_15035.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_272_V_read406_phi_phi_fu_27395_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_272_V_read406_phi_phi_fu_27395_p4 = ap_phi_mux_data_272_V_read406_rewind_phi_fu_15053_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_272_V_read406_phi_phi_fu_27395_p4 = data_272_V_read.read();
    } else {
        ap_phi_mux_data_272_V_read406_phi_phi_fu_27395_p4 = ap_phi_reg_pp0_iter0_data_272_V_read406_phi_reg_27391.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_272_V_read406_rewind_phi_fu_15053_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_272_V_read406_rewind_phi_fu_15053_p6 = data_272_V_read406_phi_reg_27391.read();
    } else {
        ap_phi_mux_data_272_V_read406_rewind_phi_fu_15053_p6 = data_272_V_read406_rewind_reg_15049.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_273_V_read407_phi_phi_fu_27408_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_273_V_read407_phi_phi_fu_27408_p4 = ap_phi_mux_data_273_V_read407_rewind_phi_fu_15067_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_273_V_read407_phi_phi_fu_27408_p4 = data_273_V_read.read();
    } else {
        ap_phi_mux_data_273_V_read407_phi_phi_fu_27408_p4 = ap_phi_reg_pp0_iter0_data_273_V_read407_phi_reg_27404.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_273_V_read407_rewind_phi_fu_15067_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_273_V_read407_rewind_phi_fu_15067_p6 = data_273_V_read407_phi_reg_27404.read();
    } else {
        ap_phi_mux_data_273_V_read407_rewind_phi_fu_15067_p6 = data_273_V_read407_rewind_reg_15063.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_274_V_read408_phi_phi_fu_27421_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_274_V_read408_phi_phi_fu_27421_p4 = ap_phi_mux_data_274_V_read408_rewind_phi_fu_15081_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_274_V_read408_phi_phi_fu_27421_p4 = data_274_V_read.read();
    } else {
        ap_phi_mux_data_274_V_read408_phi_phi_fu_27421_p4 = ap_phi_reg_pp0_iter0_data_274_V_read408_phi_reg_27417.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_274_V_read408_rewind_phi_fu_15081_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_274_V_read408_rewind_phi_fu_15081_p6 = data_274_V_read408_phi_reg_27417.read();
    } else {
        ap_phi_mux_data_274_V_read408_rewind_phi_fu_15081_p6 = data_274_V_read408_rewind_reg_15077.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_275_V_read409_phi_phi_fu_27434_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_275_V_read409_phi_phi_fu_27434_p4 = ap_phi_mux_data_275_V_read409_rewind_phi_fu_15095_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_275_V_read409_phi_phi_fu_27434_p4 = data_275_V_read.read();
    } else {
        ap_phi_mux_data_275_V_read409_phi_phi_fu_27434_p4 = ap_phi_reg_pp0_iter0_data_275_V_read409_phi_reg_27430.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_275_V_read409_rewind_phi_fu_15095_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_275_V_read409_rewind_phi_fu_15095_p6 = data_275_V_read409_phi_reg_27430.read();
    } else {
        ap_phi_mux_data_275_V_read409_rewind_phi_fu_15095_p6 = data_275_V_read409_rewind_reg_15091.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_276_V_read410_phi_phi_fu_27447_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_276_V_read410_phi_phi_fu_27447_p4 = ap_phi_mux_data_276_V_read410_rewind_phi_fu_15109_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_276_V_read410_phi_phi_fu_27447_p4 = data_276_V_read.read();
    } else {
        ap_phi_mux_data_276_V_read410_phi_phi_fu_27447_p4 = ap_phi_reg_pp0_iter0_data_276_V_read410_phi_reg_27443.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_276_V_read410_rewind_phi_fu_15109_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_276_V_read410_rewind_phi_fu_15109_p6 = data_276_V_read410_phi_reg_27443.read();
    } else {
        ap_phi_mux_data_276_V_read410_rewind_phi_fu_15109_p6 = data_276_V_read410_rewind_reg_15105.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_277_V_read411_phi_phi_fu_27460_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_277_V_read411_phi_phi_fu_27460_p4 = ap_phi_mux_data_277_V_read411_rewind_phi_fu_15123_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_277_V_read411_phi_phi_fu_27460_p4 = data_277_V_read.read();
    } else {
        ap_phi_mux_data_277_V_read411_phi_phi_fu_27460_p4 = ap_phi_reg_pp0_iter0_data_277_V_read411_phi_reg_27456.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_277_V_read411_rewind_phi_fu_15123_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_277_V_read411_rewind_phi_fu_15123_p6 = data_277_V_read411_phi_reg_27456.read();
    } else {
        ap_phi_mux_data_277_V_read411_rewind_phi_fu_15123_p6 = data_277_V_read411_rewind_reg_15119.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_278_V_read412_phi_phi_fu_27473_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_278_V_read412_phi_phi_fu_27473_p4 = ap_phi_mux_data_278_V_read412_rewind_phi_fu_15137_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_278_V_read412_phi_phi_fu_27473_p4 = data_278_V_read.read();
    } else {
        ap_phi_mux_data_278_V_read412_phi_phi_fu_27473_p4 = ap_phi_reg_pp0_iter0_data_278_V_read412_phi_reg_27469.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_278_V_read412_rewind_phi_fu_15137_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_278_V_read412_rewind_phi_fu_15137_p6 = data_278_V_read412_phi_reg_27469.read();
    } else {
        ap_phi_mux_data_278_V_read412_rewind_phi_fu_15137_p6 = data_278_V_read412_rewind_reg_15133.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_279_V_read413_phi_phi_fu_27486_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_279_V_read413_phi_phi_fu_27486_p4 = ap_phi_mux_data_279_V_read413_rewind_phi_fu_15151_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_279_V_read413_phi_phi_fu_27486_p4 = data_279_V_read.read();
    } else {
        ap_phi_mux_data_279_V_read413_phi_phi_fu_27486_p4 = ap_phi_reg_pp0_iter0_data_279_V_read413_phi_reg_27482.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_279_V_read413_rewind_phi_fu_15151_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_279_V_read413_rewind_phi_fu_15151_p6 = data_279_V_read413_phi_reg_27482.read();
    } else {
        ap_phi_mux_data_279_V_read413_rewind_phi_fu_15151_p6 = data_279_V_read413_rewind_reg_15147.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_27_V_read161_phi_phi_fu_24210_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_27_V_read161_phi_phi_fu_24210_p4 = ap_phi_mux_data_27_V_read161_rewind_phi_fu_11623_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_27_V_read161_phi_phi_fu_24210_p4 = data_27_V_read.read();
    } else {
        ap_phi_mux_data_27_V_read161_phi_phi_fu_24210_p4 = ap_phi_reg_pp0_iter0_data_27_V_read161_phi_reg_24206.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_27_V_read161_rewind_phi_fu_11623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_27_V_read161_rewind_phi_fu_11623_p6 = data_27_V_read161_phi_reg_24206.read();
    } else {
        ap_phi_mux_data_27_V_read161_rewind_phi_fu_11623_p6 = data_27_V_read161_rewind_reg_11619.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_280_V_read414_phi_phi_fu_27499_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_280_V_read414_phi_phi_fu_27499_p4 = ap_phi_mux_data_280_V_read414_rewind_phi_fu_15165_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_280_V_read414_phi_phi_fu_27499_p4 = data_280_V_read.read();
    } else {
        ap_phi_mux_data_280_V_read414_phi_phi_fu_27499_p4 = ap_phi_reg_pp0_iter0_data_280_V_read414_phi_reg_27495.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_280_V_read414_rewind_phi_fu_15165_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_280_V_read414_rewind_phi_fu_15165_p6 = data_280_V_read414_phi_reg_27495.read();
    } else {
        ap_phi_mux_data_280_V_read414_rewind_phi_fu_15165_p6 = data_280_V_read414_rewind_reg_15161.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_281_V_read415_phi_phi_fu_27512_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_281_V_read415_phi_phi_fu_27512_p4 = ap_phi_mux_data_281_V_read415_rewind_phi_fu_15179_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_281_V_read415_phi_phi_fu_27512_p4 = data_281_V_read.read();
    } else {
        ap_phi_mux_data_281_V_read415_phi_phi_fu_27512_p4 = ap_phi_reg_pp0_iter0_data_281_V_read415_phi_reg_27508.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_281_V_read415_rewind_phi_fu_15179_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_281_V_read415_rewind_phi_fu_15179_p6 = data_281_V_read415_phi_reg_27508.read();
    } else {
        ap_phi_mux_data_281_V_read415_rewind_phi_fu_15179_p6 = data_281_V_read415_rewind_reg_15175.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_282_V_read416_phi_phi_fu_27525_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_282_V_read416_phi_phi_fu_27525_p4 = ap_phi_mux_data_282_V_read416_rewind_phi_fu_15193_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_282_V_read416_phi_phi_fu_27525_p4 = data_282_V_read.read();
    } else {
        ap_phi_mux_data_282_V_read416_phi_phi_fu_27525_p4 = ap_phi_reg_pp0_iter0_data_282_V_read416_phi_reg_27521.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_282_V_read416_rewind_phi_fu_15193_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_282_V_read416_rewind_phi_fu_15193_p6 = data_282_V_read416_phi_reg_27521.read();
    } else {
        ap_phi_mux_data_282_V_read416_rewind_phi_fu_15193_p6 = data_282_V_read416_rewind_reg_15189.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_283_V_read417_phi_phi_fu_27538_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_283_V_read417_phi_phi_fu_27538_p4 = ap_phi_mux_data_283_V_read417_rewind_phi_fu_15207_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_283_V_read417_phi_phi_fu_27538_p4 = data_283_V_read.read();
    } else {
        ap_phi_mux_data_283_V_read417_phi_phi_fu_27538_p4 = ap_phi_reg_pp0_iter0_data_283_V_read417_phi_reg_27534.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_283_V_read417_rewind_phi_fu_15207_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_283_V_read417_rewind_phi_fu_15207_p6 = data_283_V_read417_phi_reg_27534.read();
    } else {
        ap_phi_mux_data_283_V_read417_rewind_phi_fu_15207_p6 = data_283_V_read417_rewind_reg_15203.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_284_V_read418_phi_phi_fu_27551_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_284_V_read418_phi_phi_fu_27551_p4 = ap_phi_mux_data_284_V_read418_rewind_phi_fu_15221_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_284_V_read418_phi_phi_fu_27551_p4 = data_284_V_read.read();
    } else {
        ap_phi_mux_data_284_V_read418_phi_phi_fu_27551_p4 = ap_phi_reg_pp0_iter0_data_284_V_read418_phi_reg_27547.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_284_V_read418_rewind_phi_fu_15221_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_284_V_read418_rewind_phi_fu_15221_p6 = data_284_V_read418_phi_reg_27547.read();
    } else {
        ap_phi_mux_data_284_V_read418_rewind_phi_fu_15221_p6 = data_284_V_read418_rewind_reg_15217.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_285_V_read419_phi_phi_fu_27564_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_285_V_read419_phi_phi_fu_27564_p4 = ap_phi_mux_data_285_V_read419_rewind_phi_fu_15235_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_285_V_read419_phi_phi_fu_27564_p4 = data_285_V_read.read();
    } else {
        ap_phi_mux_data_285_V_read419_phi_phi_fu_27564_p4 = ap_phi_reg_pp0_iter0_data_285_V_read419_phi_reg_27560.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_285_V_read419_rewind_phi_fu_15235_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_285_V_read419_rewind_phi_fu_15235_p6 = data_285_V_read419_phi_reg_27560.read();
    } else {
        ap_phi_mux_data_285_V_read419_rewind_phi_fu_15235_p6 = data_285_V_read419_rewind_reg_15231.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_286_V_read420_phi_phi_fu_27577_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_286_V_read420_phi_phi_fu_27577_p4 = ap_phi_mux_data_286_V_read420_rewind_phi_fu_15249_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_286_V_read420_phi_phi_fu_27577_p4 = data_286_V_read.read();
    } else {
        ap_phi_mux_data_286_V_read420_phi_phi_fu_27577_p4 = ap_phi_reg_pp0_iter0_data_286_V_read420_phi_reg_27573.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_286_V_read420_rewind_phi_fu_15249_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_286_V_read420_rewind_phi_fu_15249_p6 = data_286_V_read420_phi_reg_27573.read();
    } else {
        ap_phi_mux_data_286_V_read420_rewind_phi_fu_15249_p6 = data_286_V_read420_rewind_reg_15245.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_287_V_read421_phi_phi_fu_27590_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_287_V_read421_phi_phi_fu_27590_p4 = ap_phi_mux_data_287_V_read421_rewind_phi_fu_15263_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_287_V_read421_phi_phi_fu_27590_p4 = data_287_V_read.read();
    } else {
        ap_phi_mux_data_287_V_read421_phi_phi_fu_27590_p4 = ap_phi_reg_pp0_iter0_data_287_V_read421_phi_reg_27586.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_287_V_read421_rewind_phi_fu_15263_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_287_V_read421_rewind_phi_fu_15263_p6 = data_287_V_read421_phi_reg_27586.read();
    } else {
        ap_phi_mux_data_287_V_read421_rewind_phi_fu_15263_p6 = data_287_V_read421_rewind_reg_15259.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_288_V_read422_phi_phi_fu_27603_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_288_V_read422_phi_phi_fu_27603_p4 = ap_phi_mux_data_288_V_read422_rewind_phi_fu_15277_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_288_V_read422_phi_phi_fu_27603_p4 = data_288_V_read.read();
    } else {
        ap_phi_mux_data_288_V_read422_phi_phi_fu_27603_p4 = ap_phi_reg_pp0_iter0_data_288_V_read422_phi_reg_27599.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_288_V_read422_rewind_phi_fu_15277_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_288_V_read422_rewind_phi_fu_15277_p6 = data_288_V_read422_phi_reg_27599.read();
    } else {
        ap_phi_mux_data_288_V_read422_rewind_phi_fu_15277_p6 = data_288_V_read422_rewind_reg_15273.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_289_V_read423_phi_phi_fu_27616_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_289_V_read423_phi_phi_fu_27616_p4 = ap_phi_mux_data_289_V_read423_rewind_phi_fu_15291_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_289_V_read423_phi_phi_fu_27616_p4 = data_289_V_read.read();
    } else {
        ap_phi_mux_data_289_V_read423_phi_phi_fu_27616_p4 = ap_phi_reg_pp0_iter0_data_289_V_read423_phi_reg_27612.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_289_V_read423_rewind_phi_fu_15291_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_289_V_read423_rewind_phi_fu_15291_p6 = data_289_V_read423_phi_reg_27612.read();
    } else {
        ap_phi_mux_data_289_V_read423_rewind_phi_fu_15291_p6 = data_289_V_read423_rewind_reg_15287.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_28_V_read162_phi_phi_fu_24223_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_28_V_read162_phi_phi_fu_24223_p4 = ap_phi_mux_data_28_V_read162_rewind_phi_fu_11637_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_28_V_read162_phi_phi_fu_24223_p4 = data_28_V_read.read();
    } else {
        ap_phi_mux_data_28_V_read162_phi_phi_fu_24223_p4 = ap_phi_reg_pp0_iter0_data_28_V_read162_phi_reg_24219.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_28_V_read162_rewind_phi_fu_11637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_28_V_read162_rewind_phi_fu_11637_p6 = data_28_V_read162_phi_reg_24219.read();
    } else {
        ap_phi_mux_data_28_V_read162_rewind_phi_fu_11637_p6 = data_28_V_read162_rewind_reg_11633.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_290_V_read424_phi_phi_fu_27629_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_290_V_read424_phi_phi_fu_27629_p4 = ap_phi_mux_data_290_V_read424_rewind_phi_fu_15305_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_290_V_read424_phi_phi_fu_27629_p4 = data_290_V_read.read();
    } else {
        ap_phi_mux_data_290_V_read424_phi_phi_fu_27629_p4 = ap_phi_reg_pp0_iter0_data_290_V_read424_phi_reg_27625.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_290_V_read424_rewind_phi_fu_15305_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_290_V_read424_rewind_phi_fu_15305_p6 = data_290_V_read424_phi_reg_27625.read();
    } else {
        ap_phi_mux_data_290_V_read424_rewind_phi_fu_15305_p6 = data_290_V_read424_rewind_reg_15301.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_291_V_read425_phi_phi_fu_27642_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_291_V_read425_phi_phi_fu_27642_p4 = ap_phi_mux_data_291_V_read425_rewind_phi_fu_15319_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_291_V_read425_phi_phi_fu_27642_p4 = data_291_V_read.read();
    } else {
        ap_phi_mux_data_291_V_read425_phi_phi_fu_27642_p4 = ap_phi_reg_pp0_iter0_data_291_V_read425_phi_reg_27638.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_291_V_read425_rewind_phi_fu_15319_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_291_V_read425_rewind_phi_fu_15319_p6 = data_291_V_read425_phi_reg_27638.read();
    } else {
        ap_phi_mux_data_291_V_read425_rewind_phi_fu_15319_p6 = data_291_V_read425_rewind_reg_15315.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_292_V_read426_phi_phi_fu_27655_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_292_V_read426_phi_phi_fu_27655_p4 = ap_phi_mux_data_292_V_read426_rewind_phi_fu_15333_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_292_V_read426_phi_phi_fu_27655_p4 = data_292_V_read.read();
    } else {
        ap_phi_mux_data_292_V_read426_phi_phi_fu_27655_p4 = ap_phi_reg_pp0_iter0_data_292_V_read426_phi_reg_27651.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_292_V_read426_rewind_phi_fu_15333_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_292_V_read426_rewind_phi_fu_15333_p6 = data_292_V_read426_phi_reg_27651.read();
    } else {
        ap_phi_mux_data_292_V_read426_rewind_phi_fu_15333_p6 = data_292_V_read426_rewind_reg_15329.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_293_V_read427_phi_phi_fu_27668_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_293_V_read427_phi_phi_fu_27668_p4 = ap_phi_mux_data_293_V_read427_rewind_phi_fu_15347_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_293_V_read427_phi_phi_fu_27668_p4 = data_293_V_read.read();
    } else {
        ap_phi_mux_data_293_V_read427_phi_phi_fu_27668_p4 = ap_phi_reg_pp0_iter0_data_293_V_read427_phi_reg_27664.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_293_V_read427_rewind_phi_fu_15347_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_293_V_read427_rewind_phi_fu_15347_p6 = data_293_V_read427_phi_reg_27664.read();
    } else {
        ap_phi_mux_data_293_V_read427_rewind_phi_fu_15347_p6 = data_293_V_read427_rewind_reg_15343.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_294_V_read428_phi_phi_fu_27681_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_294_V_read428_phi_phi_fu_27681_p4 = ap_phi_mux_data_294_V_read428_rewind_phi_fu_15361_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_294_V_read428_phi_phi_fu_27681_p4 = data_294_V_read.read();
    } else {
        ap_phi_mux_data_294_V_read428_phi_phi_fu_27681_p4 = ap_phi_reg_pp0_iter0_data_294_V_read428_phi_reg_27677.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_294_V_read428_rewind_phi_fu_15361_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_294_V_read428_rewind_phi_fu_15361_p6 = data_294_V_read428_phi_reg_27677.read();
    } else {
        ap_phi_mux_data_294_V_read428_rewind_phi_fu_15361_p6 = data_294_V_read428_rewind_reg_15357.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_295_V_read429_phi_phi_fu_27694_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_295_V_read429_phi_phi_fu_27694_p4 = ap_phi_mux_data_295_V_read429_rewind_phi_fu_15375_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_295_V_read429_phi_phi_fu_27694_p4 = data_295_V_read.read();
    } else {
        ap_phi_mux_data_295_V_read429_phi_phi_fu_27694_p4 = ap_phi_reg_pp0_iter0_data_295_V_read429_phi_reg_27690.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_295_V_read429_rewind_phi_fu_15375_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_295_V_read429_rewind_phi_fu_15375_p6 = data_295_V_read429_phi_reg_27690.read();
    } else {
        ap_phi_mux_data_295_V_read429_rewind_phi_fu_15375_p6 = data_295_V_read429_rewind_reg_15371.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_296_V_read430_phi_phi_fu_27707_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_296_V_read430_phi_phi_fu_27707_p4 = ap_phi_mux_data_296_V_read430_rewind_phi_fu_15389_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_296_V_read430_phi_phi_fu_27707_p4 = data_296_V_read.read();
    } else {
        ap_phi_mux_data_296_V_read430_phi_phi_fu_27707_p4 = ap_phi_reg_pp0_iter0_data_296_V_read430_phi_reg_27703.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_296_V_read430_rewind_phi_fu_15389_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_296_V_read430_rewind_phi_fu_15389_p6 = data_296_V_read430_phi_reg_27703.read();
    } else {
        ap_phi_mux_data_296_V_read430_rewind_phi_fu_15389_p6 = data_296_V_read430_rewind_reg_15385.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_297_V_read431_phi_phi_fu_27720_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_297_V_read431_phi_phi_fu_27720_p4 = ap_phi_mux_data_297_V_read431_rewind_phi_fu_15403_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_297_V_read431_phi_phi_fu_27720_p4 = data_297_V_read.read();
    } else {
        ap_phi_mux_data_297_V_read431_phi_phi_fu_27720_p4 = ap_phi_reg_pp0_iter0_data_297_V_read431_phi_reg_27716.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_297_V_read431_rewind_phi_fu_15403_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_297_V_read431_rewind_phi_fu_15403_p6 = data_297_V_read431_phi_reg_27716.read();
    } else {
        ap_phi_mux_data_297_V_read431_rewind_phi_fu_15403_p6 = data_297_V_read431_rewind_reg_15399.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_298_V_read432_phi_phi_fu_27733_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_298_V_read432_phi_phi_fu_27733_p4 = ap_phi_mux_data_298_V_read432_rewind_phi_fu_15417_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_298_V_read432_phi_phi_fu_27733_p4 = data_298_V_read.read();
    } else {
        ap_phi_mux_data_298_V_read432_phi_phi_fu_27733_p4 = ap_phi_reg_pp0_iter0_data_298_V_read432_phi_reg_27729.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_298_V_read432_rewind_phi_fu_15417_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_298_V_read432_rewind_phi_fu_15417_p6 = data_298_V_read432_phi_reg_27729.read();
    } else {
        ap_phi_mux_data_298_V_read432_rewind_phi_fu_15417_p6 = data_298_V_read432_rewind_reg_15413.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_299_V_read433_phi_phi_fu_27746_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_299_V_read433_phi_phi_fu_27746_p4 = ap_phi_mux_data_299_V_read433_rewind_phi_fu_15431_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_299_V_read433_phi_phi_fu_27746_p4 = data_299_V_read.read();
    } else {
        ap_phi_mux_data_299_V_read433_phi_phi_fu_27746_p4 = ap_phi_reg_pp0_iter0_data_299_V_read433_phi_reg_27742.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_299_V_read433_rewind_phi_fu_15431_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_299_V_read433_rewind_phi_fu_15431_p6 = data_299_V_read433_phi_reg_27742.read();
    } else {
        ap_phi_mux_data_299_V_read433_rewind_phi_fu_15431_p6 = data_299_V_read433_rewind_reg_15427.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_29_V_read163_phi_phi_fu_24236_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_29_V_read163_phi_phi_fu_24236_p4 = ap_phi_mux_data_29_V_read163_rewind_phi_fu_11651_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_29_V_read163_phi_phi_fu_24236_p4 = data_29_V_read.read();
    } else {
        ap_phi_mux_data_29_V_read163_phi_phi_fu_24236_p4 = ap_phi_reg_pp0_iter0_data_29_V_read163_phi_reg_24232.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_29_V_read163_rewind_phi_fu_11651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_29_V_read163_rewind_phi_fu_11651_p6 = data_29_V_read163_phi_reg_24232.read();
    } else {
        ap_phi_mux_data_29_V_read163_rewind_phi_fu_11651_p6 = data_29_V_read163_rewind_reg_11647.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_2_V_read136_phi_phi_fu_23885_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_2_V_read136_phi_phi_fu_23885_p4 = ap_phi_mux_data_2_V_read136_rewind_phi_fu_11273_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_2_V_read136_phi_phi_fu_23885_p4 = data_2_V_read.read();
    } else {
        ap_phi_mux_data_2_V_read136_phi_phi_fu_23885_p4 = ap_phi_reg_pp0_iter0_data_2_V_read136_phi_reg_23881.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_2_V_read136_rewind_phi_fu_11273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_2_V_read136_rewind_phi_fu_11273_p6 = data_2_V_read136_phi_reg_23881.read();
    } else {
        ap_phi_mux_data_2_V_read136_rewind_phi_fu_11273_p6 = data_2_V_read136_rewind_reg_11269.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_300_V_read434_phi_phi_fu_27759_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_300_V_read434_phi_phi_fu_27759_p4 = ap_phi_mux_data_300_V_read434_rewind_phi_fu_15445_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_300_V_read434_phi_phi_fu_27759_p4 = data_300_V_read.read();
    } else {
        ap_phi_mux_data_300_V_read434_phi_phi_fu_27759_p4 = ap_phi_reg_pp0_iter0_data_300_V_read434_phi_reg_27755.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_300_V_read434_rewind_phi_fu_15445_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_300_V_read434_rewind_phi_fu_15445_p6 = data_300_V_read434_phi_reg_27755.read();
    } else {
        ap_phi_mux_data_300_V_read434_rewind_phi_fu_15445_p6 = data_300_V_read434_rewind_reg_15441.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_301_V_read435_phi_phi_fu_27772_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_301_V_read435_phi_phi_fu_27772_p4 = ap_phi_mux_data_301_V_read435_rewind_phi_fu_15459_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_301_V_read435_phi_phi_fu_27772_p4 = data_301_V_read.read();
    } else {
        ap_phi_mux_data_301_V_read435_phi_phi_fu_27772_p4 = ap_phi_reg_pp0_iter0_data_301_V_read435_phi_reg_27768.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_301_V_read435_rewind_phi_fu_15459_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_301_V_read435_rewind_phi_fu_15459_p6 = data_301_V_read435_phi_reg_27768.read();
    } else {
        ap_phi_mux_data_301_V_read435_rewind_phi_fu_15459_p6 = data_301_V_read435_rewind_reg_15455.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_302_V_read436_phi_phi_fu_27785_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_302_V_read436_phi_phi_fu_27785_p4 = ap_phi_mux_data_302_V_read436_rewind_phi_fu_15473_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_302_V_read436_phi_phi_fu_27785_p4 = data_302_V_read.read();
    } else {
        ap_phi_mux_data_302_V_read436_phi_phi_fu_27785_p4 = ap_phi_reg_pp0_iter0_data_302_V_read436_phi_reg_27781.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_302_V_read436_rewind_phi_fu_15473_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_302_V_read436_rewind_phi_fu_15473_p6 = data_302_V_read436_phi_reg_27781.read();
    } else {
        ap_phi_mux_data_302_V_read436_rewind_phi_fu_15473_p6 = data_302_V_read436_rewind_reg_15469.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_303_V_read437_phi_phi_fu_27798_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_303_V_read437_phi_phi_fu_27798_p4 = ap_phi_mux_data_303_V_read437_rewind_phi_fu_15487_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_303_V_read437_phi_phi_fu_27798_p4 = data_303_V_read.read();
    } else {
        ap_phi_mux_data_303_V_read437_phi_phi_fu_27798_p4 = ap_phi_reg_pp0_iter0_data_303_V_read437_phi_reg_27794.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_303_V_read437_rewind_phi_fu_15487_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_303_V_read437_rewind_phi_fu_15487_p6 = data_303_V_read437_phi_reg_27794.read();
    } else {
        ap_phi_mux_data_303_V_read437_rewind_phi_fu_15487_p6 = data_303_V_read437_rewind_reg_15483.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_304_V_read438_phi_phi_fu_27811_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_304_V_read438_phi_phi_fu_27811_p4 = ap_phi_mux_data_304_V_read438_rewind_phi_fu_15501_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_304_V_read438_phi_phi_fu_27811_p4 = data_304_V_read.read();
    } else {
        ap_phi_mux_data_304_V_read438_phi_phi_fu_27811_p4 = ap_phi_reg_pp0_iter0_data_304_V_read438_phi_reg_27807.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_304_V_read438_rewind_phi_fu_15501_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_304_V_read438_rewind_phi_fu_15501_p6 = data_304_V_read438_phi_reg_27807.read();
    } else {
        ap_phi_mux_data_304_V_read438_rewind_phi_fu_15501_p6 = data_304_V_read438_rewind_reg_15497.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_305_V_read439_phi_phi_fu_27824_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_305_V_read439_phi_phi_fu_27824_p4 = ap_phi_mux_data_305_V_read439_rewind_phi_fu_15515_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_305_V_read439_phi_phi_fu_27824_p4 = data_305_V_read.read();
    } else {
        ap_phi_mux_data_305_V_read439_phi_phi_fu_27824_p4 = ap_phi_reg_pp0_iter0_data_305_V_read439_phi_reg_27820.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_305_V_read439_rewind_phi_fu_15515_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_305_V_read439_rewind_phi_fu_15515_p6 = data_305_V_read439_phi_reg_27820.read();
    } else {
        ap_phi_mux_data_305_V_read439_rewind_phi_fu_15515_p6 = data_305_V_read439_rewind_reg_15511.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_306_V_read440_phi_phi_fu_27837_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_306_V_read440_phi_phi_fu_27837_p4 = ap_phi_mux_data_306_V_read440_rewind_phi_fu_15529_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_306_V_read440_phi_phi_fu_27837_p4 = data_306_V_read.read();
    } else {
        ap_phi_mux_data_306_V_read440_phi_phi_fu_27837_p4 = ap_phi_reg_pp0_iter0_data_306_V_read440_phi_reg_27833.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_306_V_read440_rewind_phi_fu_15529_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_306_V_read440_rewind_phi_fu_15529_p6 = data_306_V_read440_phi_reg_27833.read();
    } else {
        ap_phi_mux_data_306_V_read440_rewind_phi_fu_15529_p6 = data_306_V_read440_rewind_reg_15525.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_307_V_read441_phi_phi_fu_27850_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_307_V_read441_phi_phi_fu_27850_p4 = ap_phi_mux_data_307_V_read441_rewind_phi_fu_15543_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_307_V_read441_phi_phi_fu_27850_p4 = data_307_V_read.read();
    } else {
        ap_phi_mux_data_307_V_read441_phi_phi_fu_27850_p4 = ap_phi_reg_pp0_iter0_data_307_V_read441_phi_reg_27846.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_307_V_read441_rewind_phi_fu_15543_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_307_V_read441_rewind_phi_fu_15543_p6 = data_307_V_read441_phi_reg_27846.read();
    } else {
        ap_phi_mux_data_307_V_read441_rewind_phi_fu_15543_p6 = data_307_V_read441_rewind_reg_15539.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_308_V_read442_phi_phi_fu_27863_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_308_V_read442_phi_phi_fu_27863_p4 = ap_phi_mux_data_308_V_read442_rewind_phi_fu_15557_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_308_V_read442_phi_phi_fu_27863_p4 = data_308_V_read.read();
    } else {
        ap_phi_mux_data_308_V_read442_phi_phi_fu_27863_p4 = ap_phi_reg_pp0_iter0_data_308_V_read442_phi_reg_27859.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_308_V_read442_rewind_phi_fu_15557_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_308_V_read442_rewind_phi_fu_15557_p6 = data_308_V_read442_phi_reg_27859.read();
    } else {
        ap_phi_mux_data_308_V_read442_rewind_phi_fu_15557_p6 = data_308_V_read442_rewind_reg_15553.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_309_V_read443_phi_phi_fu_27876_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_309_V_read443_phi_phi_fu_27876_p4 = ap_phi_mux_data_309_V_read443_rewind_phi_fu_15571_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_309_V_read443_phi_phi_fu_27876_p4 = data_309_V_read.read();
    } else {
        ap_phi_mux_data_309_V_read443_phi_phi_fu_27876_p4 = ap_phi_reg_pp0_iter0_data_309_V_read443_phi_reg_27872.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_309_V_read443_rewind_phi_fu_15571_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_309_V_read443_rewind_phi_fu_15571_p6 = data_309_V_read443_phi_reg_27872.read();
    } else {
        ap_phi_mux_data_309_V_read443_rewind_phi_fu_15571_p6 = data_309_V_read443_rewind_reg_15567.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_30_V_read164_phi_phi_fu_24249_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_30_V_read164_phi_phi_fu_24249_p4 = ap_phi_mux_data_30_V_read164_rewind_phi_fu_11665_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_30_V_read164_phi_phi_fu_24249_p4 = data_30_V_read.read();
    } else {
        ap_phi_mux_data_30_V_read164_phi_phi_fu_24249_p4 = ap_phi_reg_pp0_iter0_data_30_V_read164_phi_reg_24245.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_30_V_read164_rewind_phi_fu_11665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_30_V_read164_rewind_phi_fu_11665_p6 = data_30_V_read164_phi_reg_24245.read();
    } else {
        ap_phi_mux_data_30_V_read164_rewind_phi_fu_11665_p6 = data_30_V_read164_rewind_reg_11661.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_310_V_read444_phi_phi_fu_27889_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_310_V_read444_phi_phi_fu_27889_p4 = ap_phi_mux_data_310_V_read444_rewind_phi_fu_15585_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_310_V_read444_phi_phi_fu_27889_p4 = data_310_V_read.read();
    } else {
        ap_phi_mux_data_310_V_read444_phi_phi_fu_27889_p4 = ap_phi_reg_pp0_iter0_data_310_V_read444_phi_reg_27885.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_310_V_read444_rewind_phi_fu_15585_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_310_V_read444_rewind_phi_fu_15585_p6 = data_310_V_read444_phi_reg_27885.read();
    } else {
        ap_phi_mux_data_310_V_read444_rewind_phi_fu_15585_p6 = data_310_V_read444_rewind_reg_15581.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_311_V_read445_phi_phi_fu_27902_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_311_V_read445_phi_phi_fu_27902_p4 = ap_phi_mux_data_311_V_read445_rewind_phi_fu_15599_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_311_V_read445_phi_phi_fu_27902_p4 = data_311_V_read.read();
    } else {
        ap_phi_mux_data_311_V_read445_phi_phi_fu_27902_p4 = ap_phi_reg_pp0_iter0_data_311_V_read445_phi_reg_27898.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_311_V_read445_rewind_phi_fu_15599_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_311_V_read445_rewind_phi_fu_15599_p6 = data_311_V_read445_phi_reg_27898.read();
    } else {
        ap_phi_mux_data_311_V_read445_rewind_phi_fu_15599_p6 = data_311_V_read445_rewind_reg_15595.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_312_V_read446_phi_phi_fu_27915_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_312_V_read446_phi_phi_fu_27915_p4 = ap_phi_mux_data_312_V_read446_rewind_phi_fu_15613_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_312_V_read446_phi_phi_fu_27915_p4 = data_312_V_read.read();
    } else {
        ap_phi_mux_data_312_V_read446_phi_phi_fu_27915_p4 = ap_phi_reg_pp0_iter0_data_312_V_read446_phi_reg_27911.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_312_V_read446_rewind_phi_fu_15613_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_312_V_read446_rewind_phi_fu_15613_p6 = data_312_V_read446_phi_reg_27911.read();
    } else {
        ap_phi_mux_data_312_V_read446_rewind_phi_fu_15613_p6 = data_312_V_read446_rewind_reg_15609.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_313_V_read447_phi_phi_fu_27928_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_313_V_read447_phi_phi_fu_27928_p4 = ap_phi_mux_data_313_V_read447_rewind_phi_fu_15627_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_313_V_read447_phi_phi_fu_27928_p4 = data_313_V_read.read();
    } else {
        ap_phi_mux_data_313_V_read447_phi_phi_fu_27928_p4 = ap_phi_reg_pp0_iter0_data_313_V_read447_phi_reg_27924.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_313_V_read447_rewind_phi_fu_15627_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_313_V_read447_rewind_phi_fu_15627_p6 = data_313_V_read447_phi_reg_27924.read();
    } else {
        ap_phi_mux_data_313_V_read447_rewind_phi_fu_15627_p6 = data_313_V_read447_rewind_reg_15623.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_314_V_read448_phi_phi_fu_27941_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_314_V_read448_phi_phi_fu_27941_p4 = ap_phi_mux_data_314_V_read448_rewind_phi_fu_15641_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_314_V_read448_phi_phi_fu_27941_p4 = data_314_V_read.read();
    } else {
        ap_phi_mux_data_314_V_read448_phi_phi_fu_27941_p4 = ap_phi_reg_pp0_iter0_data_314_V_read448_phi_reg_27937.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_314_V_read448_rewind_phi_fu_15641_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_314_V_read448_rewind_phi_fu_15641_p6 = data_314_V_read448_phi_reg_27937.read();
    } else {
        ap_phi_mux_data_314_V_read448_rewind_phi_fu_15641_p6 = data_314_V_read448_rewind_reg_15637.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_315_V_read449_phi_phi_fu_27954_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_315_V_read449_phi_phi_fu_27954_p4 = ap_phi_mux_data_315_V_read449_rewind_phi_fu_15655_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_315_V_read449_phi_phi_fu_27954_p4 = data_315_V_read.read();
    } else {
        ap_phi_mux_data_315_V_read449_phi_phi_fu_27954_p4 = ap_phi_reg_pp0_iter0_data_315_V_read449_phi_reg_27950.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_315_V_read449_rewind_phi_fu_15655_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_315_V_read449_rewind_phi_fu_15655_p6 = data_315_V_read449_phi_reg_27950.read();
    } else {
        ap_phi_mux_data_315_V_read449_rewind_phi_fu_15655_p6 = data_315_V_read449_rewind_reg_15651.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_316_V_read450_phi_phi_fu_27967_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_316_V_read450_phi_phi_fu_27967_p4 = ap_phi_mux_data_316_V_read450_rewind_phi_fu_15669_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_316_V_read450_phi_phi_fu_27967_p4 = data_316_V_read.read();
    } else {
        ap_phi_mux_data_316_V_read450_phi_phi_fu_27967_p4 = ap_phi_reg_pp0_iter0_data_316_V_read450_phi_reg_27963.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_316_V_read450_rewind_phi_fu_15669_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_316_V_read450_rewind_phi_fu_15669_p6 = data_316_V_read450_phi_reg_27963.read();
    } else {
        ap_phi_mux_data_316_V_read450_rewind_phi_fu_15669_p6 = data_316_V_read450_rewind_reg_15665.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_317_V_read451_phi_phi_fu_27980_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_317_V_read451_phi_phi_fu_27980_p4 = ap_phi_mux_data_317_V_read451_rewind_phi_fu_15683_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_317_V_read451_phi_phi_fu_27980_p4 = data_317_V_read.read();
    } else {
        ap_phi_mux_data_317_V_read451_phi_phi_fu_27980_p4 = ap_phi_reg_pp0_iter0_data_317_V_read451_phi_reg_27976.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_317_V_read451_rewind_phi_fu_15683_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_317_V_read451_rewind_phi_fu_15683_p6 = data_317_V_read451_phi_reg_27976.read();
    } else {
        ap_phi_mux_data_317_V_read451_rewind_phi_fu_15683_p6 = data_317_V_read451_rewind_reg_15679.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_318_V_read452_phi_phi_fu_27993_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_318_V_read452_phi_phi_fu_27993_p4 = ap_phi_mux_data_318_V_read452_rewind_phi_fu_15697_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_318_V_read452_phi_phi_fu_27993_p4 = data_318_V_read.read();
    } else {
        ap_phi_mux_data_318_V_read452_phi_phi_fu_27993_p4 = ap_phi_reg_pp0_iter0_data_318_V_read452_phi_reg_27989.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_318_V_read452_rewind_phi_fu_15697_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_318_V_read452_rewind_phi_fu_15697_p6 = data_318_V_read452_phi_reg_27989.read();
    } else {
        ap_phi_mux_data_318_V_read452_rewind_phi_fu_15697_p6 = data_318_V_read452_rewind_reg_15693.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_319_V_read453_phi_phi_fu_28006_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_319_V_read453_phi_phi_fu_28006_p4 = ap_phi_mux_data_319_V_read453_rewind_phi_fu_15711_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_319_V_read453_phi_phi_fu_28006_p4 = data_319_V_read.read();
    } else {
        ap_phi_mux_data_319_V_read453_phi_phi_fu_28006_p4 = ap_phi_reg_pp0_iter0_data_319_V_read453_phi_reg_28002.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_319_V_read453_rewind_phi_fu_15711_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_319_V_read453_rewind_phi_fu_15711_p6 = data_319_V_read453_phi_reg_28002.read();
    } else {
        ap_phi_mux_data_319_V_read453_rewind_phi_fu_15711_p6 = data_319_V_read453_rewind_reg_15707.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_31_V_read165_phi_phi_fu_24262_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_31_V_read165_phi_phi_fu_24262_p4 = ap_phi_mux_data_31_V_read165_rewind_phi_fu_11679_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_31_V_read165_phi_phi_fu_24262_p4 = data_31_V_read.read();
    } else {
        ap_phi_mux_data_31_V_read165_phi_phi_fu_24262_p4 = ap_phi_reg_pp0_iter0_data_31_V_read165_phi_reg_24258.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_31_V_read165_rewind_phi_fu_11679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_31_V_read165_rewind_phi_fu_11679_p6 = data_31_V_read165_phi_reg_24258.read();
    } else {
        ap_phi_mux_data_31_V_read165_rewind_phi_fu_11679_p6 = data_31_V_read165_rewind_reg_11675.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_320_V_read454_phi_phi_fu_28019_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_320_V_read454_phi_phi_fu_28019_p4 = ap_phi_mux_data_320_V_read454_rewind_phi_fu_15725_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_320_V_read454_phi_phi_fu_28019_p4 = data_320_V_read.read();
    } else {
        ap_phi_mux_data_320_V_read454_phi_phi_fu_28019_p4 = ap_phi_reg_pp0_iter0_data_320_V_read454_phi_reg_28015.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_320_V_read454_rewind_phi_fu_15725_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_320_V_read454_rewind_phi_fu_15725_p6 = data_320_V_read454_phi_reg_28015.read();
    } else {
        ap_phi_mux_data_320_V_read454_rewind_phi_fu_15725_p6 = data_320_V_read454_rewind_reg_15721.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_321_V_read455_phi_phi_fu_28032_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_321_V_read455_phi_phi_fu_28032_p4 = ap_phi_mux_data_321_V_read455_rewind_phi_fu_15739_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_321_V_read455_phi_phi_fu_28032_p4 = data_321_V_read.read();
    } else {
        ap_phi_mux_data_321_V_read455_phi_phi_fu_28032_p4 = ap_phi_reg_pp0_iter0_data_321_V_read455_phi_reg_28028.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_321_V_read455_rewind_phi_fu_15739_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_321_V_read455_rewind_phi_fu_15739_p6 = data_321_V_read455_phi_reg_28028.read();
    } else {
        ap_phi_mux_data_321_V_read455_rewind_phi_fu_15739_p6 = data_321_V_read455_rewind_reg_15735.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_322_V_read456_phi_phi_fu_28045_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_322_V_read456_phi_phi_fu_28045_p4 = ap_phi_mux_data_322_V_read456_rewind_phi_fu_15753_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_322_V_read456_phi_phi_fu_28045_p4 = data_322_V_read.read();
    } else {
        ap_phi_mux_data_322_V_read456_phi_phi_fu_28045_p4 = ap_phi_reg_pp0_iter0_data_322_V_read456_phi_reg_28041.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_322_V_read456_rewind_phi_fu_15753_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_322_V_read456_rewind_phi_fu_15753_p6 = data_322_V_read456_phi_reg_28041.read();
    } else {
        ap_phi_mux_data_322_V_read456_rewind_phi_fu_15753_p6 = data_322_V_read456_rewind_reg_15749.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_323_V_read457_phi_phi_fu_28058_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_323_V_read457_phi_phi_fu_28058_p4 = ap_phi_mux_data_323_V_read457_rewind_phi_fu_15767_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_323_V_read457_phi_phi_fu_28058_p4 = data_323_V_read.read();
    } else {
        ap_phi_mux_data_323_V_read457_phi_phi_fu_28058_p4 = ap_phi_reg_pp0_iter0_data_323_V_read457_phi_reg_28054.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_323_V_read457_rewind_phi_fu_15767_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_323_V_read457_rewind_phi_fu_15767_p6 = data_323_V_read457_phi_reg_28054.read();
    } else {
        ap_phi_mux_data_323_V_read457_rewind_phi_fu_15767_p6 = data_323_V_read457_rewind_reg_15763.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_324_V_read458_phi_phi_fu_28071_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_324_V_read458_phi_phi_fu_28071_p4 = ap_phi_mux_data_324_V_read458_rewind_phi_fu_15781_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_324_V_read458_phi_phi_fu_28071_p4 = data_324_V_read.read();
    } else {
        ap_phi_mux_data_324_V_read458_phi_phi_fu_28071_p4 = ap_phi_reg_pp0_iter0_data_324_V_read458_phi_reg_28067.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_324_V_read458_rewind_phi_fu_15781_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_324_V_read458_rewind_phi_fu_15781_p6 = data_324_V_read458_phi_reg_28067.read();
    } else {
        ap_phi_mux_data_324_V_read458_rewind_phi_fu_15781_p6 = data_324_V_read458_rewind_reg_15777.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_325_V_read459_phi_phi_fu_28084_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_325_V_read459_phi_phi_fu_28084_p4 = ap_phi_mux_data_325_V_read459_rewind_phi_fu_15795_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_325_V_read459_phi_phi_fu_28084_p4 = data_325_V_read.read();
    } else {
        ap_phi_mux_data_325_V_read459_phi_phi_fu_28084_p4 = ap_phi_reg_pp0_iter0_data_325_V_read459_phi_reg_28080.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_325_V_read459_rewind_phi_fu_15795_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_325_V_read459_rewind_phi_fu_15795_p6 = data_325_V_read459_phi_reg_28080.read();
    } else {
        ap_phi_mux_data_325_V_read459_rewind_phi_fu_15795_p6 = data_325_V_read459_rewind_reg_15791.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_326_V_read460_phi_phi_fu_28097_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_326_V_read460_phi_phi_fu_28097_p4 = ap_phi_mux_data_326_V_read460_rewind_phi_fu_15809_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_326_V_read460_phi_phi_fu_28097_p4 = data_326_V_read.read();
    } else {
        ap_phi_mux_data_326_V_read460_phi_phi_fu_28097_p4 = ap_phi_reg_pp0_iter0_data_326_V_read460_phi_reg_28093.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_326_V_read460_rewind_phi_fu_15809_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_326_V_read460_rewind_phi_fu_15809_p6 = data_326_V_read460_phi_reg_28093.read();
    } else {
        ap_phi_mux_data_326_V_read460_rewind_phi_fu_15809_p6 = data_326_V_read460_rewind_reg_15805.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_327_V_read461_phi_phi_fu_28110_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_327_V_read461_phi_phi_fu_28110_p4 = ap_phi_mux_data_327_V_read461_rewind_phi_fu_15823_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_327_V_read461_phi_phi_fu_28110_p4 = data_327_V_read.read();
    } else {
        ap_phi_mux_data_327_V_read461_phi_phi_fu_28110_p4 = ap_phi_reg_pp0_iter0_data_327_V_read461_phi_reg_28106.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_327_V_read461_rewind_phi_fu_15823_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_327_V_read461_rewind_phi_fu_15823_p6 = data_327_V_read461_phi_reg_28106.read();
    } else {
        ap_phi_mux_data_327_V_read461_rewind_phi_fu_15823_p6 = data_327_V_read461_rewind_reg_15819.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_328_V_read462_phi_phi_fu_28123_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_328_V_read462_phi_phi_fu_28123_p4 = ap_phi_mux_data_328_V_read462_rewind_phi_fu_15837_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_328_V_read462_phi_phi_fu_28123_p4 = data_328_V_read.read();
    } else {
        ap_phi_mux_data_328_V_read462_phi_phi_fu_28123_p4 = ap_phi_reg_pp0_iter0_data_328_V_read462_phi_reg_28119.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_328_V_read462_rewind_phi_fu_15837_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_328_V_read462_rewind_phi_fu_15837_p6 = data_328_V_read462_phi_reg_28119.read();
    } else {
        ap_phi_mux_data_328_V_read462_rewind_phi_fu_15837_p6 = data_328_V_read462_rewind_reg_15833.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_329_V_read463_phi_phi_fu_28136_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_329_V_read463_phi_phi_fu_28136_p4 = ap_phi_mux_data_329_V_read463_rewind_phi_fu_15851_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_329_V_read463_phi_phi_fu_28136_p4 = data_329_V_read.read();
    } else {
        ap_phi_mux_data_329_V_read463_phi_phi_fu_28136_p4 = ap_phi_reg_pp0_iter0_data_329_V_read463_phi_reg_28132.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_329_V_read463_rewind_phi_fu_15851_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_329_V_read463_rewind_phi_fu_15851_p6 = data_329_V_read463_phi_reg_28132.read();
    } else {
        ap_phi_mux_data_329_V_read463_rewind_phi_fu_15851_p6 = data_329_V_read463_rewind_reg_15847.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_32_V_read166_phi_phi_fu_24275_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_32_V_read166_phi_phi_fu_24275_p4 = ap_phi_mux_data_32_V_read166_rewind_phi_fu_11693_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_32_V_read166_phi_phi_fu_24275_p4 = data_32_V_read.read();
    } else {
        ap_phi_mux_data_32_V_read166_phi_phi_fu_24275_p4 = ap_phi_reg_pp0_iter0_data_32_V_read166_phi_reg_24271.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_32_V_read166_rewind_phi_fu_11693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_32_V_read166_rewind_phi_fu_11693_p6 = data_32_V_read166_phi_reg_24271.read();
    } else {
        ap_phi_mux_data_32_V_read166_rewind_phi_fu_11693_p6 = data_32_V_read166_rewind_reg_11689.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_330_V_read464_phi_phi_fu_28149_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_330_V_read464_phi_phi_fu_28149_p4 = ap_phi_mux_data_330_V_read464_rewind_phi_fu_15865_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_330_V_read464_phi_phi_fu_28149_p4 = data_330_V_read.read();
    } else {
        ap_phi_mux_data_330_V_read464_phi_phi_fu_28149_p4 = ap_phi_reg_pp0_iter0_data_330_V_read464_phi_reg_28145.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_330_V_read464_rewind_phi_fu_15865_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_330_V_read464_rewind_phi_fu_15865_p6 = data_330_V_read464_phi_reg_28145.read();
    } else {
        ap_phi_mux_data_330_V_read464_rewind_phi_fu_15865_p6 = data_330_V_read464_rewind_reg_15861.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_331_V_read465_phi_phi_fu_28162_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_331_V_read465_phi_phi_fu_28162_p4 = ap_phi_mux_data_331_V_read465_rewind_phi_fu_15879_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_331_V_read465_phi_phi_fu_28162_p4 = data_331_V_read.read();
    } else {
        ap_phi_mux_data_331_V_read465_phi_phi_fu_28162_p4 = ap_phi_reg_pp0_iter0_data_331_V_read465_phi_reg_28158.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_331_V_read465_rewind_phi_fu_15879_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_331_V_read465_rewind_phi_fu_15879_p6 = data_331_V_read465_phi_reg_28158.read();
    } else {
        ap_phi_mux_data_331_V_read465_rewind_phi_fu_15879_p6 = data_331_V_read465_rewind_reg_15875.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_332_V_read466_phi_phi_fu_28175_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_332_V_read466_phi_phi_fu_28175_p4 = ap_phi_mux_data_332_V_read466_rewind_phi_fu_15893_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_332_V_read466_phi_phi_fu_28175_p4 = data_332_V_read.read();
    } else {
        ap_phi_mux_data_332_V_read466_phi_phi_fu_28175_p4 = ap_phi_reg_pp0_iter0_data_332_V_read466_phi_reg_28171.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_332_V_read466_rewind_phi_fu_15893_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_332_V_read466_rewind_phi_fu_15893_p6 = data_332_V_read466_phi_reg_28171.read();
    } else {
        ap_phi_mux_data_332_V_read466_rewind_phi_fu_15893_p6 = data_332_V_read466_rewind_reg_15889.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_333_V_read467_phi_phi_fu_28188_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_333_V_read467_phi_phi_fu_28188_p4 = ap_phi_mux_data_333_V_read467_rewind_phi_fu_15907_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_333_V_read467_phi_phi_fu_28188_p4 = data_333_V_read.read();
    } else {
        ap_phi_mux_data_333_V_read467_phi_phi_fu_28188_p4 = ap_phi_reg_pp0_iter0_data_333_V_read467_phi_reg_28184.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_333_V_read467_rewind_phi_fu_15907_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_333_V_read467_rewind_phi_fu_15907_p6 = data_333_V_read467_phi_reg_28184.read();
    } else {
        ap_phi_mux_data_333_V_read467_rewind_phi_fu_15907_p6 = data_333_V_read467_rewind_reg_15903.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_334_V_read468_phi_phi_fu_28201_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_334_V_read468_phi_phi_fu_28201_p4 = ap_phi_mux_data_334_V_read468_rewind_phi_fu_15921_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_334_V_read468_phi_phi_fu_28201_p4 = data_334_V_read.read();
    } else {
        ap_phi_mux_data_334_V_read468_phi_phi_fu_28201_p4 = ap_phi_reg_pp0_iter0_data_334_V_read468_phi_reg_28197.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_334_V_read468_rewind_phi_fu_15921_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_334_V_read468_rewind_phi_fu_15921_p6 = data_334_V_read468_phi_reg_28197.read();
    } else {
        ap_phi_mux_data_334_V_read468_rewind_phi_fu_15921_p6 = data_334_V_read468_rewind_reg_15917.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_335_V_read469_phi_phi_fu_28214_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_335_V_read469_phi_phi_fu_28214_p4 = ap_phi_mux_data_335_V_read469_rewind_phi_fu_15935_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_335_V_read469_phi_phi_fu_28214_p4 = data_335_V_read.read();
    } else {
        ap_phi_mux_data_335_V_read469_phi_phi_fu_28214_p4 = ap_phi_reg_pp0_iter0_data_335_V_read469_phi_reg_28210.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_335_V_read469_rewind_phi_fu_15935_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_335_V_read469_rewind_phi_fu_15935_p6 = data_335_V_read469_phi_reg_28210.read();
    } else {
        ap_phi_mux_data_335_V_read469_rewind_phi_fu_15935_p6 = data_335_V_read469_rewind_reg_15931.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_336_V_read470_phi_phi_fu_28227_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_336_V_read470_phi_phi_fu_28227_p4 = ap_phi_mux_data_336_V_read470_rewind_phi_fu_15949_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_336_V_read470_phi_phi_fu_28227_p4 = data_336_V_read.read();
    } else {
        ap_phi_mux_data_336_V_read470_phi_phi_fu_28227_p4 = ap_phi_reg_pp0_iter0_data_336_V_read470_phi_reg_28223.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_336_V_read470_rewind_phi_fu_15949_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_336_V_read470_rewind_phi_fu_15949_p6 = data_336_V_read470_phi_reg_28223.read();
    } else {
        ap_phi_mux_data_336_V_read470_rewind_phi_fu_15949_p6 = data_336_V_read470_rewind_reg_15945.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_337_V_read471_phi_phi_fu_28240_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_337_V_read471_phi_phi_fu_28240_p4 = ap_phi_mux_data_337_V_read471_rewind_phi_fu_15963_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_337_V_read471_phi_phi_fu_28240_p4 = data_337_V_read.read();
    } else {
        ap_phi_mux_data_337_V_read471_phi_phi_fu_28240_p4 = ap_phi_reg_pp0_iter0_data_337_V_read471_phi_reg_28236.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_337_V_read471_rewind_phi_fu_15963_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_337_V_read471_rewind_phi_fu_15963_p6 = data_337_V_read471_phi_reg_28236.read();
    } else {
        ap_phi_mux_data_337_V_read471_rewind_phi_fu_15963_p6 = data_337_V_read471_rewind_reg_15959.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_338_V_read472_phi_phi_fu_28253_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_338_V_read472_phi_phi_fu_28253_p4 = ap_phi_mux_data_338_V_read472_rewind_phi_fu_15977_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_338_V_read472_phi_phi_fu_28253_p4 = data_338_V_read.read();
    } else {
        ap_phi_mux_data_338_V_read472_phi_phi_fu_28253_p4 = ap_phi_reg_pp0_iter0_data_338_V_read472_phi_reg_28249.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_338_V_read472_rewind_phi_fu_15977_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_338_V_read472_rewind_phi_fu_15977_p6 = data_338_V_read472_phi_reg_28249.read();
    } else {
        ap_phi_mux_data_338_V_read472_rewind_phi_fu_15977_p6 = data_338_V_read472_rewind_reg_15973.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_339_V_read473_phi_phi_fu_28266_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_339_V_read473_phi_phi_fu_28266_p4 = ap_phi_mux_data_339_V_read473_rewind_phi_fu_15991_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_339_V_read473_phi_phi_fu_28266_p4 = data_339_V_read.read();
    } else {
        ap_phi_mux_data_339_V_read473_phi_phi_fu_28266_p4 = ap_phi_reg_pp0_iter0_data_339_V_read473_phi_reg_28262.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_339_V_read473_rewind_phi_fu_15991_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_339_V_read473_rewind_phi_fu_15991_p6 = data_339_V_read473_phi_reg_28262.read();
    } else {
        ap_phi_mux_data_339_V_read473_rewind_phi_fu_15991_p6 = data_339_V_read473_rewind_reg_15987.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_33_V_read167_phi_phi_fu_24288_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_33_V_read167_phi_phi_fu_24288_p4 = ap_phi_mux_data_33_V_read167_rewind_phi_fu_11707_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_33_V_read167_phi_phi_fu_24288_p4 = data_33_V_read.read();
    } else {
        ap_phi_mux_data_33_V_read167_phi_phi_fu_24288_p4 = ap_phi_reg_pp0_iter0_data_33_V_read167_phi_reg_24284.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_33_V_read167_rewind_phi_fu_11707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_33_V_read167_rewind_phi_fu_11707_p6 = data_33_V_read167_phi_reg_24284.read();
    } else {
        ap_phi_mux_data_33_V_read167_rewind_phi_fu_11707_p6 = data_33_V_read167_rewind_reg_11703.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_340_V_read474_phi_phi_fu_28279_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_340_V_read474_phi_phi_fu_28279_p4 = ap_phi_mux_data_340_V_read474_rewind_phi_fu_16005_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_340_V_read474_phi_phi_fu_28279_p4 = data_340_V_read.read();
    } else {
        ap_phi_mux_data_340_V_read474_phi_phi_fu_28279_p4 = ap_phi_reg_pp0_iter0_data_340_V_read474_phi_reg_28275.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_340_V_read474_rewind_phi_fu_16005_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_340_V_read474_rewind_phi_fu_16005_p6 = data_340_V_read474_phi_reg_28275.read();
    } else {
        ap_phi_mux_data_340_V_read474_rewind_phi_fu_16005_p6 = data_340_V_read474_rewind_reg_16001.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_341_V_read475_phi_phi_fu_28292_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_341_V_read475_phi_phi_fu_28292_p4 = ap_phi_mux_data_341_V_read475_rewind_phi_fu_16019_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_341_V_read475_phi_phi_fu_28292_p4 = data_341_V_read.read();
    } else {
        ap_phi_mux_data_341_V_read475_phi_phi_fu_28292_p4 = ap_phi_reg_pp0_iter0_data_341_V_read475_phi_reg_28288.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_341_V_read475_rewind_phi_fu_16019_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_341_V_read475_rewind_phi_fu_16019_p6 = data_341_V_read475_phi_reg_28288.read();
    } else {
        ap_phi_mux_data_341_V_read475_rewind_phi_fu_16019_p6 = data_341_V_read475_rewind_reg_16015.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_342_V_read476_phi_phi_fu_28305_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_342_V_read476_phi_phi_fu_28305_p4 = ap_phi_mux_data_342_V_read476_rewind_phi_fu_16033_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_342_V_read476_phi_phi_fu_28305_p4 = data_342_V_read.read();
    } else {
        ap_phi_mux_data_342_V_read476_phi_phi_fu_28305_p4 = ap_phi_reg_pp0_iter0_data_342_V_read476_phi_reg_28301.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_342_V_read476_rewind_phi_fu_16033_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_342_V_read476_rewind_phi_fu_16033_p6 = data_342_V_read476_phi_reg_28301.read();
    } else {
        ap_phi_mux_data_342_V_read476_rewind_phi_fu_16033_p6 = data_342_V_read476_rewind_reg_16029.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_343_V_read477_phi_phi_fu_28318_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_343_V_read477_phi_phi_fu_28318_p4 = ap_phi_mux_data_343_V_read477_rewind_phi_fu_16047_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_343_V_read477_phi_phi_fu_28318_p4 = data_343_V_read.read();
    } else {
        ap_phi_mux_data_343_V_read477_phi_phi_fu_28318_p4 = ap_phi_reg_pp0_iter0_data_343_V_read477_phi_reg_28314.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_343_V_read477_rewind_phi_fu_16047_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_343_V_read477_rewind_phi_fu_16047_p6 = data_343_V_read477_phi_reg_28314.read();
    } else {
        ap_phi_mux_data_343_V_read477_rewind_phi_fu_16047_p6 = data_343_V_read477_rewind_reg_16043.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_344_V_read478_phi_phi_fu_28331_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_344_V_read478_phi_phi_fu_28331_p4 = ap_phi_mux_data_344_V_read478_rewind_phi_fu_16061_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_344_V_read478_phi_phi_fu_28331_p4 = data_344_V_read.read();
    } else {
        ap_phi_mux_data_344_V_read478_phi_phi_fu_28331_p4 = ap_phi_reg_pp0_iter0_data_344_V_read478_phi_reg_28327.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_344_V_read478_rewind_phi_fu_16061_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_344_V_read478_rewind_phi_fu_16061_p6 = data_344_V_read478_phi_reg_28327.read();
    } else {
        ap_phi_mux_data_344_V_read478_rewind_phi_fu_16061_p6 = data_344_V_read478_rewind_reg_16057.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_345_V_read479_phi_phi_fu_28344_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_345_V_read479_phi_phi_fu_28344_p4 = ap_phi_mux_data_345_V_read479_rewind_phi_fu_16075_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_345_V_read479_phi_phi_fu_28344_p4 = data_345_V_read.read();
    } else {
        ap_phi_mux_data_345_V_read479_phi_phi_fu_28344_p4 = ap_phi_reg_pp0_iter0_data_345_V_read479_phi_reg_28340.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_345_V_read479_rewind_phi_fu_16075_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_345_V_read479_rewind_phi_fu_16075_p6 = data_345_V_read479_phi_reg_28340.read();
    } else {
        ap_phi_mux_data_345_V_read479_rewind_phi_fu_16075_p6 = data_345_V_read479_rewind_reg_16071.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_346_V_read480_phi_phi_fu_28357_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_346_V_read480_phi_phi_fu_28357_p4 = ap_phi_mux_data_346_V_read480_rewind_phi_fu_16089_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_346_V_read480_phi_phi_fu_28357_p4 = data_346_V_read.read();
    } else {
        ap_phi_mux_data_346_V_read480_phi_phi_fu_28357_p4 = ap_phi_reg_pp0_iter0_data_346_V_read480_phi_reg_28353.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_346_V_read480_rewind_phi_fu_16089_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_346_V_read480_rewind_phi_fu_16089_p6 = data_346_V_read480_phi_reg_28353.read();
    } else {
        ap_phi_mux_data_346_V_read480_rewind_phi_fu_16089_p6 = data_346_V_read480_rewind_reg_16085.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_347_V_read481_phi_phi_fu_28370_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_347_V_read481_phi_phi_fu_28370_p4 = ap_phi_mux_data_347_V_read481_rewind_phi_fu_16103_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_347_V_read481_phi_phi_fu_28370_p4 = data_347_V_read.read();
    } else {
        ap_phi_mux_data_347_V_read481_phi_phi_fu_28370_p4 = ap_phi_reg_pp0_iter0_data_347_V_read481_phi_reg_28366.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_347_V_read481_rewind_phi_fu_16103_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_347_V_read481_rewind_phi_fu_16103_p6 = data_347_V_read481_phi_reg_28366.read();
    } else {
        ap_phi_mux_data_347_V_read481_rewind_phi_fu_16103_p6 = data_347_V_read481_rewind_reg_16099.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_348_V_read482_phi_phi_fu_28383_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_348_V_read482_phi_phi_fu_28383_p4 = ap_phi_mux_data_348_V_read482_rewind_phi_fu_16117_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_348_V_read482_phi_phi_fu_28383_p4 = data_348_V_read.read();
    } else {
        ap_phi_mux_data_348_V_read482_phi_phi_fu_28383_p4 = ap_phi_reg_pp0_iter0_data_348_V_read482_phi_reg_28379.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_348_V_read482_rewind_phi_fu_16117_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_348_V_read482_rewind_phi_fu_16117_p6 = data_348_V_read482_phi_reg_28379.read();
    } else {
        ap_phi_mux_data_348_V_read482_rewind_phi_fu_16117_p6 = data_348_V_read482_rewind_reg_16113.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_349_V_read483_phi_phi_fu_28396_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_349_V_read483_phi_phi_fu_28396_p4 = ap_phi_mux_data_349_V_read483_rewind_phi_fu_16131_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_349_V_read483_phi_phi_fu_28396_p4 = data_349_V_read.read();
    } else {
        ap_phi_mux_data_349_V_read483_phi_phi_fu_28396_p4 = ap_phi_reg_pp0_iter0_data_349_V_read483_phi_reg_28392.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_349_V_read483_rewind_phi_fu_16131_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_349_V_read483_rewind_phi_fu_16131_p6 = data_349_V_read483_phi_reg_28392.read();
    } else {
        ap_phi_mux_data_349_V_read483_rewind_phi_fu_16131_p6 = data_349_V_read483_rewind_reg_16127.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_34_V_read168_phi_phi_fu_24301_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_34_V_read168_phi_phi_fu_24301_p4 = ap_phi_mux_data_34_V_read168_rewind_phi_fu_11721_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_34_V_read168_phi_phi_fu_24301_p4 = data_34_V_read.read();
    } else {
        ap_phi_mux_data_34_V_read168_phi_phi_fu_24301_p4 = ap_phi_reg_pp0_iter0_data_34_V_read168_phi_reg_24297.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_34_V_read168_rewind_phi_fu_11721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_34_V_read168_rewind_phi_fu_11721_p6 = data_34_V_read168_phi_reg_24297.read();
    } else {
        ap_phi_mux_data_34_V_read168_rewind_phi_fu_11721_p6 = data_34_V_read168_rewind_reg_11717.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_350_V_read484_phi_phi_fu_28409_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_350_V_read484_phi_phi_fu_28409_p4 = ap_phi_mux_data_350_V_read484_rewind_phi_fu_16145_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_350_V_read484_phi_phi_fu_28409_p4 = data_350_V_read.read();
    } else {
        ap_phi_mux_data_350_V_read484_phi_phi_fu_28409_p4 = ap_phi_reg_pp0_iter0_data_350_V_read484_phi_reg_28405.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_350_V_read484_rewind_phi_fu_16145_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_350_V_read484_rewind_phi_fu_16145_p6 = data_350_V_read484_phi_reg_28405.read();
    } else {
        ap_phi_mux_data_350_V_read484_rewind_phi_fu_16145_p6 = data_350_V_read484_rewind_reg_16141.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_351_V_read485_phi_phi_fu_28422_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_351_V_read485_phi_phi_fu_28422_p4 = ap_phi_mux_data_351_V_read485_rewind_phi_fu_16159_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_351_V_read485_phi_phi_fu_28422_p4 = data_351_V_read.read();
    } else {
        ap_phi_mux_data_351_V_read485_phi_phi_fu_28422_p4 = ap_phi_reg_pp0_iter0_data_351_V_read485_phi_reg_28418.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_351_V_read485_rewind_phi_fu_16159_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_351_V_read485_rewind_phi_fu_16159_p6 = data_351_V_read485_phi_reg_28418.read();
    } else {
        ap_phi_mux_data_351_V_read485_rewind_phi_fu_16159_p6 = data_351_V_read485_rewind_reg_16155.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_352_V_read486_phi_phi_fu_28435_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_352_V_read486_phi_phi_fu_28435_p4 = ap_phi_mux_data_352_V_read486_rewind_phi_fu_16173_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_352_V_read486_phi_phi_fu_28435_p4 = data_352_V_read.read();
    } else {
        ap_phi_mux_data_352_V_read486_phi_phi_fu_28435_p4 = ap_phi_reg_pp0_iter0_data_352_V_read486_phi_reg_28431.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_352_V_read486_rewind_phi_fu_16173_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_352_V_read486_rewind_phi_fu_16173_p6 = data_352_V_read486_phi_reg_28431.read();
    } else {
        ap_phi_mux_data_352_V_read486_rewind_phi_fu_16173_p6 = data_352_V_read486_rewind_reg_16169.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_353_V_read487_phi_phi_fu_28448_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_353_V_read487_phi_phi_fu_28448_p4 = ap_phi_mux_data_353_V_read487_rewind_phi_fu_16187_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_353_V_read487_phi_phi_fu_28448_p4 = data_353_V_read.read();
    } else {
        ap_phi_mux_data_353_V_read487_phi_phi_fu_28448_p4 = ap_phi_reg_pp0_iter0_data_353_V_read487_phi_reg_28444.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_353_V_read487_rewind_phi_fu_16187_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_353_V_read487_rewind_phi_fu_16187_p6 = data_353_V_read487_phi_reg_28444.read();
    } else {
        ap_phi_mux_data_353_V_read487_rewind_phi_fu_16187_p6 = data_353_V_read487_rewind_reg_16183.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_354_V_read488_phi_phi_fu_28461_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_354_V_read488_phi_phi_fu_28461_p4 = ap_phi_mux_data_354_V_read488_rewind_phi_fu_16201_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_354_V_read488_phi_phi_fu_28461_p4 = data_354_V_read.read();
    } else {
        ap_phi_mux_data_354_V_read488_phi_phi_fu_28461_p4 = ap_phi_reg_pp0_iter0_data_354_V_read488_phi_reg_28457.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_354_V_read488_rewind_phi_fu_16201_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_354_V_read488_rewind_phi_fu_16201_p6 = data_354_V_read488_phi_reg_28457.read();
    } else {
        ap_phi_mux_data_354_V_read488_rewind_phi_fu_16201_p6 = data_354_V_read488_rewind_reg_16197.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_355_V_read489_phi_phi_fu_28474_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_355_V_read489_phi_phi_fu_28474_p4 = ap_phi_mux_data_355_V_read489_rewind_phi_fu_16215_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_355_V_read489_phi_phi_fu_28474_p4 = data_355_V_read.read();
    } else {
        ap_phi_mux_data_355_V_read489_phi_phi_fu_28474_p4 = ap_phi_reg_pp0_iter0_data_355_V_read489_phi_reg_28470.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_355_V_read489_rewind_phi_fu_16215_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_355_V_read489_rewind_phi_fu_16215_p6 = data_355_V_read489_phi_reg_28470.read();
    } else {
        ap_phi_mux_data_355_V_read489_rewind_phi_fu_16215_p6 = data_355_V_read489_rewind_reg_16211.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_356_V_read490_phi_phi_fu_28487_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_356_V_read490_phi_phi_fu_28487_p4 = ap_phi_mux_data_356_V_read490_rewind_phi_fu_16229_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_356_V_read490_phi_phi_fu_28487_p4 = data_356_V_read.read();
    } else {
        ap_phi_mux_data_356_V_read490_phi_phi_fu_28487_p4 = ap_phi_reg_pp0_iter0_data_356_V_read490_phi_reg_28483.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_356_V_read490_rewind_phi_fu_16229_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_356_V_read490_rewind_phi_fu_16229_p6 = data_356_V_read490_phi_reg_28483.read();
    } else {
        ap_phi_mux_data_356_V_read490_rewind_phi_fu_16229_p6 = data_356_V_read490_rewind_reg_16225.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_357_V_read491_phi_phi_fu_28500_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_357_V_read491_phi_phi_fu_28500_p4 = ap_phi_mux_data_357_V_read491_rewind_phi_fu_16243_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_357_V_read491_phi_phi_fu_28500_p4 = data_357_V_read.read();
    } else {
        ap_phi_mux_data_357_V_read491_phi_phi_fu_28500_p4 = ap_phi_reg_pp0_iter0_data_357_V_read491_phi_reg_28496.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_357_V_read491_rewind_phi_fu_16243_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_357_V_read491_rewind_phi_fu_16243_p6 = data_357_V_read491_phi_reg_28496.read();
    } else {
        ap_phi_mux_data_357_V_read491_rewind_phi_fu_16243_p6 = data_357_V_read491_rewind_reg_16239.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_358_V_read492_phi_phi_fu_28513_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_358_V_read492_phi_phi_fu_28513_p4 = ap_phi_mux_data_358_V_read492_rewind_phi_fu_16257_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_358_V_read492_phi_phi_fu_28513_p4 = data_358_V_read.read();
    } else {
        ap_phi_mux_data_358_V_read492_phi_phi_fu_28513_p4 = ap_phi_reg_pp0_iter0_data_358_V_read492_phi_reg_28509.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_358_V_read492_rewind_phi_fu_16257_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_358_V_read492_rewind_phi_fu_16257_p6 = data_358_V_read492_phi_reg_28509.read();
    } else {
        ap_phi_mux_data_358_V_read492_rewind_phi_fu_16257_p6 = data_358_V_read492_rewind_reg_16253.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_359_V_read493_phi_phi_fu_28526_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_359_V_read493_phi_phi_fu_28526_p4 = ap_phi_mux_data_359_V_read493_rewind_phi_fu_16271_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_359_V_read493_phi_phi_fu_28526_p4 = data_359_V_read.read();
    } else {
        ap_phi_mux_data_359_V_read493_phi_phi_fu_28526_p4 = ap_phi_reg_pp0_iter0_data_359_V_read493_phi_reg_28522.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_359_V_read493_rewind_phi_fu_16271_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_359_V_read493_rewind_phi_fu_16271_p6 = data_359_V_read493_phi_reg_28522.read();
    } else {
        ap_phi_mux_data_359_V_read493_rewind_phi_fu_16271_p6 = data_359_V_read493_rewind_reg_16267.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_35_V_read169_phi_phi_fu_24314_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_35_V_read169_phi_phi_fu_24314_p4 = ap_phi_mux_data_35_V_read169_rewind_phi_fu_11735_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_35_V_read169_phi_phi_fu_24314_p4 = data_35_V_read.read();
    } else {
        ap_phi_mux_data_35_V_read169_phi_phi_fu_24314_p4 = ap_phi_reg_pp0_iter0_data_35_V_read169_phi_reg_24310.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_35_V_read169_rewind_phi_fu_11735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_35_V_read169_rewind_phi_fu_11735_p6 = data_35_V_read169_phi_reg_24310.read();
    } else {
        ap_phi_mux_data_35_V_read169_rewind_phi_fu_11735_p6 = data_35_V_read169_rewind_reg_11731.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_360_V_read494_phi_phi_fu_28539_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_360_V_read494_phi_phi_fu_28539_p4 = ap_phi_mux_data_360_V_read494_rewind_phi_fu_16285_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_360_V_read494_phi_phi_fu_28539_p4 = data_360_V_read.read();
    } else {
        ap_phi_mux_data_360_V_read494_phi_phi_fu_28539_p4 = ap_phi_reg_pp0_iter0_data_360_V_read494_phi_reg_28535.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_360_V_read494_rewind_phi_fu_16285_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_360_V_read494_rewind_phi_fu_16285_p6 = data_360_V_read494_phi_reg_28535.read();
    } else {
        ap_phi_mux_data_360_V_read494_rewind_phi_fu_16285_p6 = data_360_V_read494_rewind_reg_16281.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_361_V_read495_phi_phi_fu_28552_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_361_V_read495_phi_phi_fu_28552_p4 = ap_phi_mux_data_361_V_read495_rewind_phi_fu_16299_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_361_V_read495_phi_phi_fu_28552_p4 = data_361_V_read.read();
    } else {
        ap_phi_mux_data_361_V_read495_phi_phi_fu_28552_p4 = ap_phi_reg_pp0_iter0_data_361_V_read495_phi_reg_28548.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_361_V_read495_rewind_phi_fu_16299_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_361_V_read495_rewind_phi_fu_16299_p6 = data_361_V_read495_phi_reg_28548.read();
    } else {
        ap_phi_mux_data_361_V_read495_rewind_phi_fu_16299_p6 = data_361_V_read495_rewind_reg_16295.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_362_V_read496_phi_phi_fu_28565_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_362_V_read496_phi_phi_fu_28565_p4 = ap_phi_mux_data_362_V_read496_rewind_phi_fu_16313_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_362_V_read496_phi_phi_fu_28565_p4 = data_362_V_read.read();
    } else {
        ap_phi_mux_data_362_V_read496_phi_phi_fu_28565_p4 = ap_phi_reg_pp0_iter0_data_362_V_read496_phi_reg_28561.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_362_V_read496_rewind_phi_fu_16313_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_362_V_read496_rewind_phi_fu_16313_p6 = data_362_V_read496_phi_reg_28561.read();
    } else {
        ap_phi_mux_data_362_V_read496_rewind_phi_fu_16313_p6 = data_362_V_read496_rewind_reg_16309.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_363_V_read497_phi_phi_fu_28578_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_363_V_read497_phi_phi_fu_28578_p4 = ap_phi_mux_data_363_V_read497_rewind_phi_fu_16327_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_363_V_read497_phi_phi_fu_28578_p4 = data_363_V_read.read();
    } else {
        ap_phi_mux_data_363_V_read497_phi_phi_fu_28578_p4 = ap_phi_reg_pp0_iter0_data_363_V_read497_phi_reg_28574.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_363_V_read497_rewind_phi_fu_16327_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_363_V_read497_rewind_phi_fu_16327_p6 = data_363_V_read497_phi_reg_28574.read();
    } else {
        ap_phi_mux_data_363_V_read497_rewind_phi_fu_16327_p6 = data_363_V_read497_rewind_reg_16323.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_364_V_read498_phi_phi_fu_28591_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_364_V_read498_phi_phi_fu_28591_p4 = ap_phi_mux_data_364_V_read498_rewind_phi_fu_16341_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_364_V_read498_phi_phi_fu_28591_p4 = data_364_V_read.read();
    } else {
        ap_phi_mux_data_364_V_read498_phi_phi_fu_28591_p4 = ap_phi_reg_pp0_iter0_data_364_V_read498_phi_reg_28587.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_364_V_read498_rewind_phi_fu_16341_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_364_V_read498_rewind_phi_fu_16341_p6 = data_364_V_read498_phi_reg_28587.read();
    } else {
        ap_phi_mux_data_364_V_read498_rewind_phi_fu_16341_p6 = data_364_V_read498_rewind_reg_16337.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_365_V_read499_phi_phi_fu_28604_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_365_V_read499_phi_phi_fu_28604_p4 = ap_phi_mux_data_365_V_read499_rewind_phi_fu_16355_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_365_V_read499_phi_phi_fu_28604_p4 = data_365_V_read.read();
    } else {
        ap_phi_mux_data_365_V_read499_phi_phi_fu_28604_p4 = ap_phi_reg_pp0_iter0_data_365_V_read499_phi_reg_28600.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_365_V_read499_rewind_phi_fu_16355_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_365_V_read499_rewind_phi_fu_16355_p6 = data_365_V_read499_phi_reg_28600.read();
    } else {
        ap_phi_mux_data_365_V_read499_rewind_phi_fu_16355_p6 = data_365_V_read499_rewind_reg_16351.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_366_V_read500_phi_phi_fu_28617_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_366_V_read500_phi_phi_fu_28617_p4 = ap_phi_mux_data_366_V_read500_rewind_phi_fu_16369_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_366_V_read500_phi_phi_fu_28617_p4 = data_366_V_read.read();
    } else {
        ap_phi_mux_data_366_V_read500_phi_phi_fu_28617_p4 = ap_phi_reg_pp0_iter0_data_366_V_read500_phi_reg_28613.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_366_V_read500_rewind_phi_fu_16369_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_366_V_read500_rewind_phi_fu_16369_p6 = data_366_V_read500_phi_reg_28613.read();
    } else {
        ap_phi_mux_data_366_V_read500_rewind_phi_fu_16369_p6 = data_366_V_read500_rewind_reg_16365.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_367_V_read501_phi_phi_fu_28630_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_367_V_read501_phi_phi_fu_28630_p4 = ap_phi_mux_data_367_V_read501_rewind_phi_fu_16383_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_367_V_read501_phi_phi_fu_28630_p4 = data_367_V_read.read();
    } else {
        ap_phi_mux_data_367_V_read501_phi_phi_fu_28630_p4 = ap_phi_reg_pp0_iter0_data_367_V_read501_phi_reg_28626.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_367_V_read501_rewind_phi_fu_16383_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_367_V_read501_rewind_phi_fu_16383_p6 = data_367_V_read501_phi_reg_28626.read();
    } else {
        ap_phi_mux_data_367_V_read501_rewind_phi_fu_16383_p6 = data_367_V_read501_rewind_reg_16379.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_368_V_read502_phi_phi_fu_28643_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_368_V_read502_phi_phi_fu_28643_p4 = ap_phi_mux_data_368_V_read502_rewind_phi_fu_16397_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_368_V_read502_phi_phi_fu_28643_p4 = data_368_V_read.read();
    } else {
        ap_phi_mux_data_368_V_read502_phi_phi_fu_28643_p4 = ap_phi_reg_pp0_iter0_data_368_V_read502_phi_reg_28639.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_368_V_read502_rewind_phi_fu_16397_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_368_V_read502_rewind_phi_fu_16397_p6 = data_368_V_read502_phi_reg_28639.read();
    } else {
        ap_phi_mux_data_368_V_read502_rewind_phi_fu_16397_p6 = data_368_V_read502_rewind_reg_16393.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_369_V_read503_phi_phi_fu_28656_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_369_V_read503_phi_phi_fu_28656_p4 = ap_phi_mux_data_369_V_read503_rewind_phi_fu_16411_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_369_V_read503_phi_phi_fu_28656_p4 = data_369_V_read.read();
    } else {
        ap_phi_mux_data_369_V_read503_phi_phi_fu_28656_p4 = ap_phi_reg_pp0_iter0_data_369_V_read503_phi_reg_28652.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_369_V_read503_rewind_phi_fu_16411_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_369_V_read503_rewind_phi_fu_16411_p6 = data_369_V_read503_phi_reg_28652.read();
    } else {
        ap_phi_mux_data_369_V_read503_rewind_phi_fu_16411_p6 = data_369_V_read503_rewind_reg_16407.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_36_V_read170_phi_phi_fu_24327_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_36_V_read170_phi_phi_fu_24327_p4 = ap_phi_mux_data_36_V_read170_rewind_phi_fu_11749_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_36_V_read170_phi_phi_fu_24327_p4 = data_36_V_read.read();
    } else {
        ap_phi_mux_data_36_V_read170_phi_phi_fu_24327_p4 = ap_phi_reg_pp0_iter0_data_36_V_read170_phi_reg_24323.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_36_V_read170_rewind_phi_fu_11749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_36_V_read170_rewind_phi_fu_11749_p6 = data_36_V_read170_phi_reg_24323.read();
    } else {
        ap_phi_mux_data_36_V_read170_rewind_phi_fu_11749_p6 = data_36_V_read170_rewind_reg_11745.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_370_V_read504_phi_phi_fu_28669_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_370_V_read504_phi_phi_fu_28669_p4 = ap_phi_mux_data_370_V_read504_rewind_phi_fu_16425_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_370_V_read504_phi_phi_fu_28669_p4 = data_370_V_read.read();
    } else {
        ap_phi_mux_data_370_V_read504_phi_phi_fu_28669_p4 = ap_phi_reg_pp0_iter0_data_370_V_read504_phi_reg_28665.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_370_V_read504_rewind_phi_fu_16425_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_370_V_read504_rewind_phi_fu_16425_p6 = data_370_V_read504_phi_reg_28665.read();
    } else {
        ap_phi_mux_data_370_V_read504_rewind_phi_fu_16425_p6 = data_370_V_read504_rewind_reg_16421.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_371_V_read505_phi_phi_fu_28682_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_371_V_read505_phi_phi_fu_28682_p4 = ap_phi_mux_data_371_V_read505_rewind_phi_fu_16439_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_371_V_read505_phi_phi_fu_28682_p4 = data_371_V_read.read();
    } else {
        ap_phi_mux_data_371_V_read505_phi_phi_fu_28682_p4 = ap_phi_reg_pp0_iter0_data_371_V_read505_phi_reg_28678.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_371_V_read505_rewind_phi_fu_16439_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_371_V_read505_rewind_phi_fu_16439_p6 = data_371_V_read505_phi_reg_28678.read();
    } else {
        ap_phi_mux_data_371_V_read505_rewind_phi_fu_16439_p6 = data_371_V_read505_rewind_reg_16435.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_372_V_read506_phi_phi_fu_28695_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_372_V_read506_phi_phi_fu_28695_p4 = ap_phi_mux_data_372_V_read506_rewind_phi_fu_16453_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_372_V_read506_phi_phi_fu_28695_p4 = data_372_V_read.read();
    } else {
        ap_phi_mux_data_372_V_read506_phi_phi_fu_28695_p4 = ap_phi_reg_pp0_iter0_data_372_V_read506_phi_reg_28691.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_372_V_read506_rewind_phi_fu_16453_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_372_V_read506_rewind_phi_fu_16453_p6 = data_372_V_read506_phi_reg_28691.read();
    } else {
        ap_phi_mux_data_372_V_read506_rewind_phi_fu_16453_p6 = data_372_V_read506_rewind_reg_16449.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_373_V_read507_phi_phi_fu_28708_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_373_V_read507_phi_phi_fu_28708_p4 = ap_phi_mux_data_373_V_read507_rewind_phi_fu_16467_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_373_V_read507_phi_phi_fu_28708_p4 = data_373_V_read.read();
    } else {
        ap_phi_mux_data_373_V_read507_phi_phi_fu_28708_p4 = ap_phi_reg_pp0_iter0_data_373_V_read507_phi_reg_28704.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_373_V_read507_rewind_phi_fu_16467_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_373_V_read507_rewind_phi_fu_16467_p6 = data_373_V_read507_phi_reg_28704.read();
    } else {
        ap_phi_mux_data_373_V_read507_rewind_phi_fu_16467_p6 = data_373_V_read507_rewind_reg_16463.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_374_V_read508_phi_phi_fu_28721_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_374_V_read508_phi_phi_fu_28721_p4 = ap_phi_mux_data_374_V_read508_rewind_phi_fu_16481_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_374_V_read508_phi_phi_fu_28721_p4 = data_374_V_read.read();
    } else {
        ap_phi_mux_data_374_V_read508_phi_phi_fu_28721_p4 = ap_phi_reg_pp0_iter0_data_374_V_read508_phi_reg_28717.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_374_V_read508_rewind_phi_fu_16481_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_374_V_read508_rewind_phi_fu_16481_p6 = data_374_V_read508_phi_reg_28717.read();
    } else {
        ap_phi_mux_data_374_V_read508_rewind_phi_fu_16481_p6 = data_374_V_read508_rewind_reg_16477.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_375_V_read509_phi_phi_fu_28734_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_375_V_read509_phi_phi_fu_28734_p4 = ap_phi_mux_data_375_V_read509_rewind_phi_fu_16495_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_375_V_read509_phi_phi_fu_28734_p4 = data_375_V_read.read();
    } else {
        ap_phi_mux_data_375_V_read509_phi_phi_fu_28734_p4 = ap_phi_reg_pp0_iter0_data_375_V_read509_phi_reg_28730.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_375_V_read509_rewind_phi_fu_16495_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_375_V_read509_rewind_phi_fu_16495_p6 = data_375_V_read509_phi_reg_28730.read();
    } else {
        ap_phi_mux_data_375_V_read509_rewind_phi_fu_16495_p6 = data_375_V_read509_rewind_reg_16491.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_376_V_read510_phi_phi_fu_28747_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_376_V_read510_phi_phi_fu_28747_p4 = ap_phi_mux_data_376_V_read510_rewind_phi_fu_16509_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_376_V_read510_phi_phi_fu_28747_p4 = data_376_V_read.read();
    } else {
        ap_phi_mux_data_376_V_read510_phi_phi_fu_28747_p4 = ap_phi_reg_pp0_iter0_data_376_V_read510_phi_reg_28743.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_376_V_read510_rewind_phi_fu_16509_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_376_V_read510_rewind_phi_fu_16509_p6 = data_376_V_read510_phi_reg_28743.read();
    } else {
        ap_phi_mux_data_376_V_read510_rewind_phi_fu_16509_p6 = data_376_V_read510_rewind_reg_16505.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_377_V_read511_phi_phi_fu_28760_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_377_V_read511_phi_phi_fu_28760_p4 = ap_phi_mux_data_377_V_read511_rewind_phi_fu_16523_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_377_V_read511_phi_phi_fu_28760_p4 = data_377_V_read.read();
    } else {
        ap_phi_mux_data_377_V_read511_phi_phi_fu_28760_p4 = ap_phi_reg_pp0_iter0_data_377_V_read511_phi_reg_28756.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_377_V_read511_rewind_phi_fu_16523_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_377_V_read511_rewind_phi_fu_16523_p6 = data_377_V_read511_phi_reg_28756.read();
    } else {
        ap_phi_mux_data_377_V_read511_rewind_phi_fu_16523_p6 = data_377_V_read511_rewind_reg_16519.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_378_V_read512_phi_phi_fu_28773_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_378_V_read512_phi_phi_fu_28773_p4 = ap_phi_mux_data_378_V_read512_rewind_phi_fu_16537_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_378_V_read512_phi_phi_fu_28773_p4 = data_378_V_read.read();
    } else {
        ap_phi_mux_data_378_V_read512_phi_phi_fu_28773_p4 = ap_phi_reg_pp0_iter0_data_378_V_read512_phi_reg_28769.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_378_V_read512_rewind_phi_fu_16537_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_378_V_read512_rewind_phi_fu_16537_p6 = data_378_V_read512_phi_reg_28769.read();
    } else {
        ap_phi_mux_data_378_V_read512_rewind_phi_fu_16537_p6 = data_378_V_read512_rewind_reg_16533.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_379_V_read513_phi_phi_fu_28786_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_379_V_read513_phi_phi_fu_28786_p4 = ap_phi_mux_data_379_V_read513_rewind_phi_fu_16551_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_379_V_read513_phi_phi_fu_28786_p4 = data_379_V_read.read();
    } else {
        ap_phi_mux_data_379_V_read513_phi_phi_fu_28786_p4 = ap_phi_reg_pp0_iter0_data_379_V_read513_phi_reg_28782.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_379_V_read513_rewind_phi_fu_16551_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_379_V_read513_rewind_phi_fu_16551_p6 = data_379_V_read513_phi_reg_28782.read();
    } else {
        ap_phi_mux_data_379_V_read513_rewind_phi_fu_16551_p6 = data_379_V_read513_rewind_reg_16547.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_37_V_read171_phi_phi_fu_24340_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_37_V_read171_phi_phi_fu_24340_p4 = ap_phi_mux_data_37_V_read171_rewind_phi_fu_11763_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_37_V_read171_phi_phi_fu_24340_p4 = data_37_V_read.read();
    } else {
        ap_phi_mux_data_37_V_read171_phi_phi_fu_24340_p4 = ap_phi_reg_pp0_iter0_data_37_V_read171_phi_reg_24336.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_37_V_read171_rewind_phi_fu_11763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_37_V_read171_rewind_phi_fu_11763_p6 = data_37_V_read171_phi_reg_24336.read();
    } else {
        ap_phi_mux_data_37_V_read171_rewind_phi_fu_11763_p6 = data_37_V_read171_rewind_reg_11759.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_380_V_read514_phi_phi_fu_28799_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_380_V_read514_phi_phi_fu_28799_p4 = ap_phi_mux_data_380_V_read514_rewind_phi_fu_16565_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_380_V_read514_phi_phi_fu_28799_p4 = data_380_V_read.read();
    } else {
        ap_phi_mux_data_380_V_read514_phi_phi_fu_28799_p4 = ap_phi_reg_pp0_iter0_data_380_V_read514_phi_reg_28795.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_380_V_read514_rewind_phi_fu_16565_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_380_V_read514_rewind_phi_fu_16565_p6 = data_380_V_read514_phi_reg_28795.read();
    } else {
        ap_phi_mux_data_380_V_read514_rewind_phi_fu_16565_p6 = data_380_V_read514_rewind_reg_16561.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_381_V_read515_phi_phi_fu_28812_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_381_V_read515_phi_phi_fu_28812_p4 = ap_phi_mux_data_381_V_read515_rewind_phi_fu_16579_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_381_V_read515_phi_phi_fu_28812_p4 = data_381_V_read.read();
    } else {
        ap_phi_mux_data_381_V_read515_phi_phi_fu_28812_p4 = ap_phi_reg_pp0_iter0_data_381_V_read515_phi_reg_28808.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_381_V_read515_rewind_phi_fu_16579_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_381_V_read515_rewind_phi_fu_16579_p6 = data_381_V_read515_phi_reg_28808.read();
    } else {
        ap_phi_mux_data_381_V_read515_rewind_phi_fu_16579_p6 = data_381_V_read515_rewind_reg_16575.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_382_V_read516_phi_phi_fu_28825_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_382_V_read516_phi_phi_fu_28825_p4 = ap_phi_mux_data_382_V_read516_rewind_phi_fu_16593_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_382_V_read516_phi_phi_fu_28825_p4 = data_382_V_read.read();
    } else {
        ap_phi_mux_data_382_V_read516_phi_phi_fu_28825_p4 = ap_phi_reg_pp0_iter0_data_382_V_read516_phi_reg_28821.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_382_V_read516_rewind_phi_fu_16593_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_382_V_read516_rewind_phi_fu_16593_p6 = data_382_V_read516_phi_reg_28821.read();
    } else {
        ap_phi_mux_data_382_V_read516_rewind_phi_fu_16593_p6 = data_382_V_read516_rewind_reg_16589.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_383_V_read517_phi_phi_fu_28838_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_383_V_read517_phi_phi_fu_28838_p4 = ap_phi_mux_data_383_V_read517_rewind_phi_fu_16607_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_383_V_read517_phi_phi_fu_28838_p4 = data_383_V_read.read();
    } else {
        ap_phi_mux_data_383_V_read517_phi_phi_fu_28838_p4 = ap_phi_reg_pp0_iter0_data_383_V_read517_phi_reg_28834.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_383_V_read517_rewind_phi_fu_16607_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_383_V_read517_rewind_phi_fu_16607_p6 = data_383_V_read517_phi_reg_28834.read();
    } else {
        ap_phi_mux_data_383_V_read517_rewind_phi_fu_16607_p6 = data_383_V_read517_rewind_reg_16603.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_384_V_read518_phi_phi_fu_28851_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_384_V_read518_phi_phi_fu_28851_p4 = ap_phi_mux_data_384_V_read518_rewind_phi_fu_16621_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_384_V_read518_phi_phi_fu_28851_p4 = data_384_V_read.read();
    } else {
        ap_phi_mux_data_384_V_read518_phi_phi_fu_28851_p4 = ap_phi_reg_pp0_iter0_data_384_V_read518_phi_reg_28847.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_384_V_read518_rewind_phi_fu_16621_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_384_V_read518_rewind_phi_fu_16621_p6 = data_384_V_read518_phi_reg_28847.read();
    } else {
        ap_phi_mux_data_384_V_read518_rewind_phi_fu_16621_p6 = data_384_V_read518_rewind_reg_16617.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_385_V_read519_phi_phi_fu_28864_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_385_V_read519_phi_phi_fu_28864_p4 = ap_phi_mux_data_385_V_read519_rewind_phi_fu_16635_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_385_V_read519_phi_phi_fu_28864_p4 = data_385_V_read.read();
    } else {
        ap_phi_mux_data_385_V_read519_phi_phi_fu_28864_p4 = ap_phi_reg_pp0_iter0_data_385_V_read519_phi_reg_28860.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_385_V_read519_rewind_phi_fu_16635_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_385_V_read519_rewind_phi_fu_16635_p6 = data_385_V_read519_phi_reg_28860.read();
    } else {
        ap_phi_mux_data_385_V_read519_rewind_phi_fu_16635_p6 = data_385_V_read519_rewind_reg_16631.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_386_V_read520_phi_phi_fu_28877_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_386_V_read520_phi_phi_fu_28877_p4 = ap_phi_mux_data_386_V_read520_rewind_phi_fu_16649_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_386_V_read520_phi_phi_fu_28877_p4 = data_386_V_read.read();
    } else {
        ap_phi_mux_data_386_V_read520_phi_phi_fu_28877_p4 = ap_phi_reg_pp0_iter0_data_386_V_read520_phi_reg_28873.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_386_V_read520_rewind_phi_fu_16649_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_386_V_read520_rewind_phi_fu_16649_p6 = data_386_V_read520_phi_reg_28873.read();
    } else {
        ap_phi_mux_data_386_V_read520_rewind_phi_fu_16649_p6 = data_386_V_read520_rewind_reg_16645.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_387_V_read521_phi_phi_fu_28890_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_387_V_read521_phi_phi_fu_28890_p4 = ap_phi_mux_data_387_V_read521_rewind_phi_fu_16663_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_387_V_read521_phi_phi_fu_28890_p4 = data_387_V_read.read();
    } else {
        ap_phi_mux_data_387_V_read521_phi_phi_fu_28890_p4 = ap_phi_reg_pp0_iter0_data_387_V_read521_phi_reg_28886.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_387_V_read521_rewind_phi_fu_16663_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_387_V_read521_rewind_phi_fu_16663_p6 = data_387_V_read521_phi_reg_28886.read();
    } else {
        ap_phi_mux_data_387_V_read521_rewind_phi_fu_16663_p6 = data_387_V_read521_rewind_reg_16659.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_388_V_read522_phi_phi_fu_28903_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_388_V_read522_phi_phi_fu_28903_p4 = ap_phi_mux_data_388_V_read522_rewind_phi_fu_16677_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_388_V_read522_phi_phi_fu_28903_p4 = data_388_V_read.read();
    } else {
        ap_phi_mux_data_388_V_read522_phi_phi_fu_28903_p4 = ap_phi_reg_pp0_iter0_data_388_V_read522_phi_reg_28899.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_388_V_read522_rewind_phi_fu_16677_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_388_V_read522_rewind_phi_fu_16677_p6 = data_388_V_read522_phi_reg_28899.read();
    } else {
        ap_phi_mux_data_388_V_read522_rewind_phi_fu_16677_p6 = data_388_V_read522_rewind_reg_16673.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_389_V_read523_phi_phi_fu_28916_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_389_V_read523_phi_phi_fu_28916_p4 = ap_phi_mux_data_389_V_read523_rewind_phi_fu_16691_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_389_V_read523_phi_phi_fu_28916_p4 = data_389_V_read.read();
    } else {
        ap_phi_mux_data_389_V_read523_phi_phi_fu_28916_p4 = ap_phi_reg_pp0_iter0_data_389_V_read523_phi_reg_28912.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_389_V_read523_rewind_phi_fu_16691_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_389_V_read523_rewind_phi_fu_16691_p6 = data_389_V_read523_phi_reg_28912.read();
    } else {
        ap_phi_mux_data_389_V_read523_rewind_phi_fu_16691_p6 = data_389_V_read523_rewind_reg_16687.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_38_V_read172_phi_phi_fu_24353_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_38_V_read172_phi_phi_fu_24353_p4 = ap_phi_mux_data_38_V_read172_rewind_phi_fu_11777_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_38_V_read172_phi_phi_fu_24353_p4 = data_38_V_read.read();
    } else {
        ap_phi_mux_data_38_V_read172_phi_phi_fu_24353_p4 = ap_phi_reg_pp0_iter0_data_38_V_read172_phi_reg_24349.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_38_V_read172_rewind_phi_fu_11777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_38_V_read172_rewind_phi_fu_11777_p6 = data_38_V_read172_phi_reg_24349.read();
    } else {
        ap_phi_mux_data_38_V_read172_rewind_phi_fu_11777_p6 = data_38_V_read172_rewind_reg_11773.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_390_V_read524_phi_phi_fu_28929_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_390_V_read524_phi_phi_fu_28929_p4 = ap_phi_mux_data_390_V_read524_rewind_phi_fu_16705_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_390_V_read524_phi_phi_fu_28929_p4 = data_390_V_read.read();
    } else {
        ap_phi_mux_data_390_V_read524_phi_phi_fu_28929_p4 = ap_phi_reg_pp0_iter0_data_390_V_read524_phi_reg_28925.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_390_V_read524_rewind_phi_fu_16705_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_390_V_read524_rewind_phi_fu_16705_p6 = data_390_V_read524_phi_reg_28925.read();
    } else {
        ap_phi_mux_data_390_V_read524_rewind_phi_fu_16705_p6 = data_390_V_read524_rewind_reg_16701.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_391_V_read525_phi_phi_fu_28942_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_391_V_read525_phi_phi_fu_28942_p4 = ap_phi_mux_data_391_V_read525_rewind_phi_fu_16719_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_391_V_read525_phi_phi_fu_28942_p4 = data_391_V_read.read();
    } else {
        ap_phi_mux_data_391_V_read525_phi_phi_fu_28942_p4 = ap_phi_reg_pp0_iter0_data_391_V_read525_phi_reg_28938.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_391_V_read525_rewind_phi_fu_16719_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_391_V_read525_rewind_phi_fu_16719_p6 = data_391_V_read525_phi_reg_28938.read();
    } else {
        ap_phi_mux_data_391_V_read525_rewind_phi_fu_16719_p6 = data_391_V_read525_rewind_reg_16715.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_392_V_read526_phi_phi_fu_28955_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_392_V_read526_phi_phi_fu_28955_p4 = ap_phi_mux_data_392_V_read526_rewind_phi_fu_16733_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_392_V_read526_phi_phi_fu_28955_p4 = data_392_V_read.read();
    } else {
        ap_phi_mux_data_392_V_read526_phi_phi_fu_28955_p4 = ap_phi_reg_pp0_iter0_data_392_V_read526_phi_reg_28951.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_392_V_read526_rewind_phi_fu_16733_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_392_V_read526_rewind_phi_fu_16733_p6 = data_392_V_read526_phi_reg_28951.read();
    } else {
        ap_phi_mux_data_392_V_read526_rewind_phi_fu_16733_p6 = data_392_V_read526_rewind_reg_16729.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_393_V_read527_phi_phi_fu_28968_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_393_V_read527_phi_phi_fu_28968_p4 = ap_phi_mux_data_393_V_read527_rewind_phi_fu_16747_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_393_V_read527_phi_phi_fu_28968_p4 = data_393_V_read.read();
    } else {
        ap_phi_mux_data_393_V_read527_phi_phi_fu_28968_p4 = ap_phi_reg_pp0_iter0_data_393_V_read527_phi_reg_28964.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_393_V_read527_rewind_phi_fu_16747_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_393_V_read527_rewind_phi_fu_16747_p6 = data_393_V_read527_phi_reg_28964.read();
    } else {
        ap_phi_mux_data_393_V_read527_rewind_phi_fu_16747_p6 = data_393_V_read527_rewind_reg_16743.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_394_V_read528_phi_phi_fu_28981_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_394_V_read528_phi_phi_fu_28981_p4 = ap_phi_mux_data_394_V_read528_rewind_phi_fu_16761_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_394_V_read528_phi_phi_fu_28981_p4 = data_394_V_read.read();
    } else {
        ap_phi_mux_data_394_V_read528_phi_phi_fu_28981_p4 = ap_phi_reg_pp0_iter0_data_394_V_read528_phi_reg_28977.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_394_V_read528_rewind_phi_fu_16761_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_394_V_read528_rewind_phi_fu_16761_p6 = data_394_V_read528_phi_reg_28977.read();
    } else {
        ap_phi_mux_data_394_V_read528_rewind_phi_fu_16761_p6 = data_394_V_read528_rewind_reg_16757.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_395_V_read529_phi_phi_fu_28994_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_395_V_read529_phi_phi_fu_28994_p4 = ap_phi_mux_data_395_V_read529_rewind_phi_fu_16775_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_395_V_read529_phi_phi_fu_28994_p4 = data_395_V_read.read();
    } else {
        ap_phi_mux_data_395_V_read529_phi_phi_fu_28994_p4 = ap_phi_reg_pp0_iter0_data_395_V_read529_phi_reg_28990.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_395_V_read529_rewind_phi_fu_16775_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_395_V_read529_rewind_phi_fu_16775_p6 = data_395_V_read529_phi_reg_28990.read();
    } else {
        ap_phi_mux_data_395_V_read529_rewind_phi_fu_16775_p6 = data_395_V_read529_rewind_reg_16771.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_396_V_read530_phi_phi_fu_29007_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_396_V_read530_phi_phi_fu_29007_p4 = ap_phi_mux_data_396_V_read530_rewind_phi_fu_16789_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_396_V_read530_phi_phi_fu_29007_p4 = data_396_V_read.read();
    } else {
        ap_phi_mux_data_396_V_read530_phi_phi_fu_29007_p4 = ap_phi_reg_pp0_iter0_data_396_V_read530_phi_reg_29003.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_396_V_read530_rewind_phi_fu_16789_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_396_V_read530_rewind_phi_fu_16789_p6 = data_396_V_read530_phi_reg_29003.read();
    } else {
        ap_phi_mux_data_396_V_read530_rewind_phi_fu_16789_p6 = data_396_V_read530_rewind_reg_16785.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_397_V_read531_phi_phi_fu_29020_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_397_V_read531_phi_phi_fu_29020_p4 = ap_phi_mux_data_397_V_read531_rewind_phi_fu_16803_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_397_V_read531_phi_phi_fu_29020_p4 = data_397_V_read.read();
    } else {
        ap_phi_mux_data_397_V_read531_phi_phi_fu_29020_p4 = ap_phi_reg_pp0_iter0_data_397_V_read531_phi_reg_29016.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_397_V_read531_rewind_phi_fu_16803_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_397_V_read531_rewind_phi_fu_16803_p6 = data_397_V_read531_phi_reg_29016.read();
    } else {
        ap_phi_mux_data_397_V_read531_rewind_phi_fu_16803_p6 = data_397_V_read531_rewind_reg_16799.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_398_V_read532_phi_phi_fu_29033_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_398_V_read532_phi_phi_fu_29033_p4 = ap_phi_mux_data_398_V_read532_rewind_phi_fu_16817_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_398_V_read532_phi_phi_fu_29033_p4 = data_398_V_read.read();
    } else {
        ap_phi_mux_data_398_V_read532_phi_phi_fu_29033_p4 = ap_phi_reg_pp0_iter0_data_398_V_read532_phi_reg_29029.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_398_V_read532_rewind_phi_fu_16817_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_398_V_read532_rewind_phi_fu_16817_p6 = data_398_V_read532_phi_reg_29029.read();
    } else {
        ap_phi_mux_data_398_V_read532_rewind_phi_fu_16817_p6 = data_398_V_read532_rewind_reg_16813.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_399_V_read533_phi_phi_fu_29046_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_399_V_read533_phi_phi_fu_29046_p4 = ap_phi_mux_data_399_V_read533_rewind_phi_fu_16831_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_399_V_read533_phi_phi_fu_29046_p4 = data_399_V_read.read();
    } else {
        ap_phi_mux_data_399_V_read533_phi_phi_fu_29046_p4 = ap_phi_reg_pp0_iter0_data_399_V_read533_phi_reg_29042.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_399_V_read533_rewind_phi_fu_16831_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_399_V_read533_rewind_phi_fu_16831_p6 = data_399_V_read533_phi_reg_29042.read();
    } else {
        ap_phi_mux_data_399_V_read533_rewind_phi_fu_16831_p6 = data_399_V_read533_rewind_reg_16827.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_39_V_read173_phi_phi_fu_24366_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_39_V_read173_phi_phi_fu_24366_p4 = ap_phi_mux_data_39_V_read173_rewind_phi_fu_11791_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_39_V_read173_phi_phi_fu_24366_p4 = data_39_V_read.read();
    } else {
        ap_phi_mux_data_39_V_read173_phi_phi_fu_24366_p4 = ap_phi_reg_pp0_iter0_data_39_V_read173_phi_reg_24362.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_39_V_read173_rewind_phi_fu_11791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_39_V_read173_rewind_phi_fu_11791_p6 = data_39_V_read173_phi_reg_24362.read();
    } else {
        ap_phi_mux_data_39_V_read173_rewind_phi_fu_11791_p6 = data_39_V_read173_rewind_reg_11787.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_3_V_read137_phi_phi_fu_23898_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_3_V_read137_phi_phi_fu_23898_p4 = ap_phi_mux_data_3_V_read137_rewind_phi_fu_11287_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_3_V_read137_phi_phi_fu_23898_p4 = data_3_V_read.read();
    } else {
        ap_phi_mux_data_3_V_read137_phi_phi_fu_23898_p4 = ap_phi_reg_pp0_iter0_data_3_V_read137_phi_reg_23894.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_3_V_read137_rewind_phi_fu_11287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_3_V_read137_rewind_phi_fu_11287_p6 = data_3_V_read137_phi_reg_23894.read();
    } else {
        ap_phi_mux_data_3_V_read137_rewind_phi_fu_11287_p6 = data_3_V_read137_rewind_reg_11283.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_400_V_read534_phi_phi_fu_29059_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_400_V_read534_phi_phi_fu_29059_p4 = ap_phi_mux_data_400_V_read534_rewind_phi_fu_16845_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_400_V_read534_phi_phi_fu_29059_p4 = data_400_V_read.read();
    } else {
        ap_phi_mux_data_400_V_read534_phi_phi_fu_29059_p4 = ap_phi_reg_pp0_iter0_data_400_V_read534_phi_reg_29055.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_400_V_read534_rewind_phi_fu_16845_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_400_V_read534_rewind_phi_fu_16845_p6 = data_400_V_read534_phi_reg_29055.read();
    } else {
        ap_phi_mux_data_400_V_read534_rewind_phi_fu_16845_p6 = data_400_V_read534_rewind_reg_16841.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_401_V_read535_phi_phi_fu_29072_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_401_V_read535_phi_phi_fu_29072_p4 = ap_phi_mux_data_401_V_read535_rewind_phi_fu_16859_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_401_V_read535_phi_phi_fu_29072_p4 = data_401_V_read.read();
    } else {
        ap_phi_mux_data_401_V_read535_phi_phi_fu_29072_p4 = ap_phi_reg_pp0_iter0_data_401_V_read535_phi_reg_29068.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_401_V_read535_rewind_phi_fu_16859_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_401_V_read535_rewind_phi_fu_16859_p6 = data_401_V_read535_phi_reg_29068.read();
    } else {
        ap_phi_mux_data_401_V_read535_rewind_phi_fu_16859_p6 = data_401_V_read535_rewind_reg_16855.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_402_V_read536_phi_phi_fu_29085_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_402_V_read536_phi_phi_fu_29085_p4 = ap_phi_mux_data_402_V_read536_rewind_phi_fu_16873_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_402_V_read536_phi_phi_fu_29085_p4 = data_402_V_read.read();
    } else {
        ap_phi_mux_data_402_V_read536_phi_phi_fu_29085_p4 = ap_phi_reg_pp0_iter0_data_402_V_read536_phi_reg_29081.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_402_V_read536_rewind_phi_fu_16873_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_402_V_read536_rewind_phi_fu_16873_p6 = data_402_V_read536_phi_reg_29081.read();
    } else {
        ap_phi_mux_data_402_V_read536_rewind_phi_fu_16873_p6 = data_402_V_read536_rewind_reg_16869.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_403_V_read537_phi_phi_fu_29098_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_403_V_read537_phi_phi_fu_29098_p4 = ap_phi_mux_data_403_V_read537_rewind_phi_fu_16887_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_403_V_read537_phi_phi_fu_29098_p4 = data_403_V_read.read();
    } else {
        ap_phi_mux_data_403_V_read537_phi_phi_fu_29098_p4 = ap_phi_reg_pp0_iter0_data_403_V_read537_phi_reg_29094.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_403_V_read537_rewind_phi_fu_16887_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_403_V_read537_rewind_phi_fu_16887_p6 = data_403_V_read537_phi_reg_29094.read();
    } else {
        ap_phi_mux_data_403_V_read537_rewind_phi_fu_16887_p6 = data_403_V_read537_rewind_reg_16883.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_404_V_read538_phi_phi_fu_29111_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_404_V_read538_phi_phi_fu_29111_p4 = ap_phi_mux_data_404_V_read538_rewind_phi_fu_16901_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_404_V_read538_phi_phi_fu_29111_p4 = data_404_V_read.read();
    } else {
        ap_phi_mux_data_404_V_read538_phi_phi_fu_29111_p4 = ap_phi_reg_pp0_iter0_data_404_V_read538_phi_reg_29107.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_404_V_read538_rewind_phi_fu_16901_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_404_V_read538_rewind_phi_fu_16901_p6 = data_404_V_read538_phi_reg_29107.read();
    } else {
        ap_phi_mux_data_404_V_read538_rewind_phi_fu_16901_p6 = data_404_V_read538_rewind_reg_16897.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_405_V_read539_phi_phi_fu_29124_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_405_V_read539_phi_phi_fu_29124_p4 = ap_phi_mux_data_405_V_read539_rewind_phi_fu_16915_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_405_V_read539_phi_phi_fu_29124_p4 = data_405_V_read.read();
    } else {
        ap_phi_mux_data_405_V_read539_phi_phi_fu_29124_p4 = ap_phi_reg_pp0_iter0_data_405_V_read539_phi_reg_29120.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_405_V_read539_rewind_phi_fu_16915_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_405_V_read539_rewind_phi_fu_16915_p6 = data_405_V_read539_phi_reg_29120.read();
    } else {
        ap_phi_mux_data_405_V_read539_rewind_phi_fu_16915_p6 = data_405_V_read539_rewind_reg_16911.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_406_V_read540_phi_phi_fu_29137_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_406_V_read540_phi_phi_fu_29137_p4 = ap_phi_mux_data_406_V_read540_rewind_phi_fu_16929_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_406_V_read540_phi_phi_fu_29137_p4 = data_406_V_read.read();
    } else {
        ap_phi_mux_data_406_V_read540_phi_phi_fu_29137_p4 = ap_phi_reg_pp0_iter0_data_406_V_read540_phi_reg_29133.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_406_V_read540_rewind_phi_fu_16929_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_406_V_read540_rewind_phi_fu_16929_p6 = data_406_V_read540_phi_reg_29133.read();
    } else {
        ap_phi_mux_data_406_V_read540_rewind_phi_fu_16929_p6 = data_406_V_read540_rewind_reg_16925.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_407_V_read541_phi_phi_fu_29150_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_407_V_read541_phi_phi_fu_29150_p4 = ap_phi_mux_data_407_V_read541_rewind_phi_fu_16943_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_407_V_read541_phi_phi_fu_29150_p4 = data_407_V_read.read();
    } else {
        ap_phi_mux_data_407_V_read541_phi_phi_fu_29150_p4 = ap_phi_reg_pp0_iter0_data_407_V_read541_phi_reg_29146.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_407_V_read541_rewind_phi_fu_16943_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_407_V_read541_rewind_phi_fu_16943_p6 = data_407_V_read541_phi_reg_29146.read();
    } else {
        ap_phi_mux_data_407_V_read541_rewind_phi_fu_16943_p6 = data_407_V_read541_rewind_reg_16939.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_408_V_read542_phi_phi_fu_29163_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_408_V_read542_phi_phi_fu_29163_p4 = ap_phi_mux_data_408_V_read542_rewind_phi_fu_16957_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_408_V_read542_phi_phi_fu_29163_p4 = data_408_V_read.read();
    } else {
        ap_phi_mux_data_408_V_read542_phi_phi_fu_29163_p4 = ap_phi_reg_pp0_iter0_data_408_V_read542_phi_reg_29159.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_408_V_read542_rewind_phi_fu_16957_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_408_V_read542_rewind_phi_fu_16957_p6 = data_408_V_read542_phi_reg_29159.read();
    } else {
        ap_phi_mux_data_408_V_read542_rewind_phi_fu_16957_p6 = data_408_V_read542_rewind_reg_16953.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_409_V_read543_phi_phi_fu_29176_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_409_V_read543_phi_phi_fu_29176_p4 = ap_phi_mux_data_409_V_read543_rewind_phi_fu_16971_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_409_V_read543_phi_phi_fu_29176_p4 = data_409_V_read.read();
    } else {
        ap_phi_mux_data_409_V_read543_phi_phi_fu_29176_p4 = ap_phi_reg_pp0_iter0_data_409_V_read543_phi_reg_29172.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_409_V_read543_rewind_phi_fu_16971_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_409_V_read543_rewind_phi_fu_16971_p6 = data_409_V_read543_phi_reg_29172.read();
    } else {
        ap_phi_mux_data_409_V_read543_rewind_phi_fu_16971_p6 = data_409_V_read543_rewind_reg_16967.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_40_V_read174_phi_phi_fu_24379_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_40_V_read174_phi_phi_fu_24379_p4 = ap_phi_mux_data_40_V_read174_rewind_phi_fu_11805_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_40_V_read174_phi_phi_fu_24379_p4 = data_40_V_read.read();
    } else {
        ap_phi_mux_data_40_V_read174_phi_phi_fu_24379_p4 = ap_phi_reg_pp0_iter0_data_40_V_read174_phi_reg_24375.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_40_V_read174_rewind_phi_fu_11805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_40_V_read174_rewind_phi_fu_11805_p6 = data_40_V_read174_phi_reg_24375.read();
    } else {
        ap_phi_mux_data_40_V_read174_rewind_phi_fu_11805_p6 = data_40_V_read174_rewind_reg_11801.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_410_V_read544_phi_phi_fu_29189_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_410_V_read544_phi_phi_fu_29189_p4 = ap_phi_mux_data_410_V_read544_rewind_phi_fu_16985_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_410_V_read544_phi_phi_fu_29189_p4 = data_410_V_read.read();
    } else {
        ap_phi_mux_data_410_V_read544_phi_phi_fu_29189_p4 = ap_phi_reg_pp0_iter0_data_410_V_read544_phi_reg_29185.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_410_V_read544_rewind_phi_fu_16985_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_410_V_read544_rewind_phi_fu_16985_p6 = data_410_V_read544_phi_reg_29185.read();
    } else {
        ap_phi_mux_data_410_V_read544_rewind_phi_fu_16985_p6 = data_410_V_read544_rewind_reg_16981.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_411_V_read545_phi_phi_fu_29202_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_411_V_read545_phi_phi_fu_29202_p4 = ap_phi_mux_data_411_V_read545_rewind_phi_fu_16999_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_411_V_read545_phi_phi_fu_29202_p4 = data_411_V_read.read();
    } else {
        ap_phi_mux_data_411_V_read545_phi_phi_fu_29202_p4 = ap_phi_reg_pp0_iter0_data_411_V_read545_phi_reg_29198.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_411_V_read545_rewind_phi_fu_16999_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_411_V_read545_rewind_phi_fu_16999_p6 = data_411_V_read545_phi_reg_29198.read();
    } else {
        ap_phi_mux_data_411_V_read545_rewind_phi_fu_16999_p6 = data_411_V_read545_rewind_reg_16995.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_412_V_read546_phi_phi_fu_29215_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_412_V_read546_phi_phi_fu_29215_p4 = ap_phi_mux_data_412_V_read546_rewind_phi_fu_17013_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_412_V_read546_phi_phi_fu_29215_p4 = data_412_V_read.read();
    } else {
        ap_phi_mux_data_412_V_read546_phi_phi_fu_29215_p4 = ap_phi_reg_pp0_iter0_data_412_V_read546_phi_reg_29211.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_412_V_read546_rewind_phi_fu_17013_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_412_V_read546_rewind_phi_fu_17013_p6 = data_412_V_read546_phi_reg_29211.read();
    } else {
        ap_phi_mux_data_412_V_read546_rewind_phi_fu_17013_p6 = data_412_V_read546_rewind_reg_17009.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_413_V_read547_phi_phi_fu_29228_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_413_V_read547_phi_phi_fu_29228_p4 = ap_phi_mux_data_413_V_read547_rewind_phi_fu_17027_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_413_V_read547_phi_phi_fu_29228_p4 = data_413_V_read.read();
    } else {
        ap_phi_mux_data_413_V_read547_phi_phi_fu_29228_p4 = ap_phi_reg_pp0_iter0_data_413_V_read547_phi_reg_29224.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_413_V_read547_rewind_phi_fu_17027_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_413_V_read547_rewind_phi_fu_17027_p6 = data_413_V_read547_phi_reg_29224.read();
    } else {
        ap_phi_mux_data_413_V_read547_rewind_phi_fu_17027_p6 = data_413_V_read547_rewind_reg_17023.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_414_V_read548_phi_phi_fu_29241_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_414_V_read548_phi_phi_fu_29241_p4 = ap_phi_mux_data_414_V_read548_rewind_phi_fu_17041_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_414_V_read548_phi_phi_fu_29241_p4 = data_414_V_read.read();
    } else {
        ap_phi_mux_data_414_V_read548_phi_phi_fu_29241_p4 = ap_phi_reg_pp0_iter0_data_414_V_read548_phi_reg_29237.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_414_V_read548_rewind_phi_fu_17041_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_414_V_read548_rewind_phi_fu_17041_p6 = data_414_V_read548_phi_reg_29237.read();
    } else {
        ap_phi_mux_data_414_V_read548_rewind_phi_fu_17041_p6 = data_414_V_read548_rewind_reg_17037.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_415_V_read549_phi_phi_fu_29254_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_415_V_read549_phi_phi_fu_29254_p4 = ap_phi_mux_data_415_V_read549_rewind_phi_fu_17055_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_415_V_read549_phi_phi_fu_29254_p4 = data_415_V_read.read();
    } else {
        ap_phi_mux_data_415_V_read549_phi_phi_fu_29254_p4 = ap_phi_reg_pp0_iter0_data_415_V_read549_phi_reg_29250.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_415_V_read549_rewind_phi_fu_17055_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_415_V_read549_rewind_phi_fu_17055_p6 = data_415_V_read549_phi_reg_29250.read();
    } else {
        ap_phi_mux_data_415_V_read549_rewind_phi_fu_17055_p6 = data_415_V_read549_rewind_reg_17051.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_416_V_read550_phi_phi_fu_29267_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_416_V_read550_phi_phi_fu_29267_p4 = ap_phi_mux_data_416_V_read550_rewind_phi_fu_17069_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_416_V_read550_phi_phi_fu_29267_p4 = data_416_V_read.read();
    } else {
        ap_phi_mux_data_416_V_read550_phi_phi_fu_29267_p4 = ap_phi_reg_pp0_iter0_data_416_V_read550_phi_reg_29263.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_416_V_read550_rewind_phi_fu_17069_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_416_V_read550_rewind_phi_fu_17069_p6 = data_416_V_read550_phi_reg_29263.read();
    } else {
        ap_phi_mux_data_416_V_read550_rewind_phi_fu_17069_p6 = data_416_V_read550_rewind_reg_17065.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_417_V_read551_phi_phi_fu_29280_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_417_V_read551_phi_phi_fu_29280_p4 = ap_phi_mux_data_417_V_read551_rewind_phi_fu_17083_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_417_V_read551_phi_phi_fu_29280_p4 = data_417_V_read.read();
    } else {
        ap_phi_mux_data_417_V_read551_phi_phi_fu_29280_p4 = ap_phi_reg_pp0_iter0_data_417_V_read551_phi_reg_29276.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_417_V_read551_rewind_phi_fu_17083_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_417_V_read551_rewind_phi_fu_17083_p6 = data_417_V_read551_phi_reg_29276.read();
    } else {
        ap_phi_mux_data_417_V_read551_rewind_phi_fu_17083_p6 = data_417_V_read551_rewind_reg_17079.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_418_V_read552_phi_phi_fu_29293_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_418_V_read552_phi_phi_fu_29293_p4 = ap_phi_mux_data_418_V_read552_rewind_phi_fu_17097_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_418_V_read552_phi_phi_fu_29293_p4 = data_418_V_read.read();
    } else {
        ap_phi_mux_data_418_V_read552_phi_phi_fu_29293_p4 = ap_phi_reg_pp0_iter0_data_418_V_read552_phi_reg_29289.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_418_V_read552_rewind_phi_fu_17097_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_418_V_read552_rewind_phi_fu_17097_p6 = data_418_V_read552_phi_reg_29289.read();
    } else {
        ap_phi_mux_data_418_V_read552_rewind_phi_fu_17097_p6 = data_418_V_read552_rewind_reg_17093.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_419_V_read553_phi_phi_fu_29306_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_419_V_read553_phi_phi_fu_29306_p4 = ap_phi_mux_data_419_V_read553_rewind_phi_fu_17111_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_419_V_read553_phi_phi_fu_29306_p4 = data_419_V_read.read();
    } else {
        ap_phi_mux_data_419_V_read553_phi_phi_fu_29306_p4 = ap_phi_reg_pp0_iter0_data_419_V_read553_phi_reg_29302.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_419_V_read553_rewind_phi_fu_17111_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_419_V_read553_rewind_phi_fu_17111_p6 = data_419_V_read553_phi_reg_29302.read();
    } else {
        ap_phi_mux_data_419_V_read553_rewind_phi_fu_17111_p6 = data_419_V_read553_rewind_reg_17107.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_41_V_read175_phi_phi_fu_24392_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_41_V_read175_phi_phi_fu_24392_p4 = ap_phi_mux_data_41_V_read175_rewind_phi_fu_11819_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_41_V_read175_phi_phi_fu_24392_p4 = data_41_V_read.read();
    } else {
        ap_phi_mux_data_41_V_read175_phi_phi_fu_24392_p4 = ap_phi_reg_pp0_iter0_data_41_V_read175_phi_reg_24388.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_41_V_read175_rewind_phi_fu_11819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_41_V_read175_rewind_phi_fu_11819_p6 = data_41_V_read175_phi_reg_24388.read();
    } else {
        ap_phi_mux_data_41_V_read175_rewind_phi_fu_11819_p6 = data_41_V_read175_rewind_reg_11815.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_420_V_read554_phi_phi_fu_29319_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_420_V_read554_phi_phi_fu_29319_p4 = ap_phi_mux_data_420_V_read554_rewind_phi_fu_17125_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_420_V_read554_phi_phi_fu_29319_p4 = data_420_V_read.read();
    } else {
        ap_phi_mux_data_420_V_read554_phi_phi_fu_29319_p4 = ap_phi_reg_pp0_iter0_data_420_V_read554_phi_reg_29315.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_420_V_read554_rewind_phi_fu_17125_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_420_V_read554_rewind_phi_fu_17125_p6 = data_420_V_read554_phi_reg_29315.read();
    } else {
        ap_phi_mux_data_420_V_read554_rewind_phi_fu_17125_p6 = data_420_V_read554_rewind_reg_17121.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_421_V_read555_phi_phi_fu_29332_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_421_V_read555_phi_phi_fu_29332_p4 = ap_phi_mux_data_421_V_read555_rewind_phi_fu_17139_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_421_V_read555_phi_phi_fu_29332_p4 = data_421_V_read.read();
    } else {
        ap_phi_mux_data_421_V_read555_phi_phi_fu_29332_p4 = ap_phi_reg_pp0_iter0_data_421_V_read555_phi_reg_29328.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_421_V_read555_rewind_phi_fu_17139_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_421_V_read555_rewind_phi_fu_17139_p6 = data_421_V_read555_phi_reg_29328.read();
    } else {
        ap_phi_mux_data_421_V_read555_rewind_phi_fu_17139_p6 = data_421_V_read555_rewind_reg_17135.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_422_V_read556_phi_phi_fu_29345_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_422_V_read556_phi_phi_fu_29345_p4 = ap_phi_mux_data_422_V_read556_rewind_phi_fu_17153_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_422_V_read556_phi_phi_fu_29345_p4 = data_422_V_read.read();
    } else {
        ap_phi_mux_data_422_V_read556_phi_phi_fu_29345_p4 = ap_phi_reg_pp0_iter0_data_422_V_read556_phi_reg_29341.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_422_V_read556_rewind_phi_fu_17153_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_422_V_read556_rewind_phi_fu_17153_p6 = data_422_V_read556_phi_reg_29341.read();
    } else {
        ap_phi_mux_data_422_V_read556_rewind_phi_fu_17153_p6 = data_422_V_read556_rewind_reg_17149.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_423_V_read557_phi_phi_fu_29358_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_423_V_read557_phi_phi_fu_29358_p4 = ap_phi_mux_data_423_V_read557_rewind_phi_fu_17167_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_423_V_read557_phi_phi_fu_29358_p4 = data_423_V_read.read();
    } else {
        ap_phi_mux_data_423_V_read557_phi_phi_fu_29358_p4 = ap_phi_reg_pp0_iter0_data_423_V_read557_phi_reg_29354.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_423_V_read557_rewind_phi_fu_17167_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_423_V_read557_rewind_phi_fu_17167_p6 = data_423_V_read557_phi_reg_29354.read();
    } else {
        ap_phi_mux_data_423_V_read557_rewind_phi_fu_17167_p6 = data_423_V_read557_rewind_reg_17163.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_424_V_read558_phi_phi_fu_29371_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_424_V_read558_phi_phi_fu_29371_p4 = ap_phi_mux_data_424_V_read558_rewind_phi_fu_17181_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_424_V_read558_phi_phi_fu_29371_p4 = data_424_V_read.read();
    } else {
        ap_phi_mux_data_424_V_read558_phi_phi_fu_29371_p4 = ap_phi_reg_pp0_iter0_data_424_V_read558_phi_reg_29367.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_424_V_read558_rewind_phi_fu_17181_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_424_V_read558_rewind_phi_fu_17181_p6 = data_424_V_read558_phi_reg_29367.read();
    } else {
        ap_phi_mux_data_424_V_read558_rewind_phi_fu_17181_p6 = data_424_V_read558_rewind_reg_17177.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_425_V_read559_phi_phi_fu_29384_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_425_V_read559_phi_phi_fu_29384_p4 = ap_phi_mux_data_425_V_read559_rewind_phi_fu_17195_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_425_V_read559_phi_phi_fu_29384_p4 = data_425_V_read.read();
    } else {
        ap_phi_mux_data_425_V_read559_phi_phi_fu_29384_p4 = ap_phi_reg_pp0_iter0_data_425_V_read559_phi_reg_29380.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_425_V_read559_rewind_phi_fu_17195_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_425_V_read559_rewind_phi_fu_17195_p6 = data_425_V_read559_phi_reg_29380.read();
    } else {
        ap_phi_mux_data_425_V_read559_rewind_phi_fu_17195_p6 = data_425_V_read559_rewind_reg_17191.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_426_V_read560_phi_phi_fu_29397_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_426_V_read560_phi_phi_fu_29397_p4 = ap_phi_mux_data_426_V_read560_rewind_phi_fu_17209_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_426_V_read560_phi_phi_fu_29397_p4 = data_426_V_read.read();
    } else {
        ap_phi_mux_data_426_V_read560_phi_phi_fu_29397_p4 = ap_phi_reg_pp0_iter0_data_426_V_read560_phi_reg_29393.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_426_V_read560_rewind_phi_fu_17209_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_426_V_read560_rewind_phi_fu_17209_p6 = data_426_V_read560_phi_reg_29393.read();
    } else {
        ap_phi_mux_data_426_V_read560_rewind_phi_fu_17209_p6 = data_426_V_read560_rewind_reg_17205.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_427_V_read561_phi_phi_fu_29410_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_427_V_read561_phi_phi_fu_29410_p4 = ap_phi_mux_data_427_V_read561_rewind_phi_fu_17223_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_427_V_read561_phi_phi_fu_29410_p4 = data_427_V_read.read();
    } else {
        ap_phi_mux_data_427_V_read561_phi_phi_fu_29410_p4 = ap_phi_reg_pp0_iter0_data_427_V_read561_phi_reg_29406.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_427_V_read561_rewind_phi_fu_17223_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_427_V_read561_rewind_phi_fu_17223_p6 = data_427_V_read561_phi_reg_29406.read();
    } else {
        ap_phi_mux_data_427_V_read561_rewind_phi_fu_17223_p6 = data_427_V_read561_rewind_reg_17219.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_428_V_read562_phi_phi_fu_29423_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_428_V_read562_phi_phi_fu_29423_p4 = ap_phi_mux_data_428_V_read562_rewind_phi_fu_17237_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_428_V_read562_phi_phi_fu_29423_p4 = data_428_V_read.read();
    } else {
        ap_phi_mux_data_428_V_read562_phi_phi_fu_29423_p4 = ap_phi_reg_pp0_iter0_data_428_V_read562_phi_reg_29419.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_428_V_read562_rewind_phi_fu_17237_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_428_V_read562_rewind_phi_fu_17237_p6 = data_428_V_read562_phi_reg_29419.read();
    } else {
        ap_phi_mux_data_428_V_read562_rewind_phi_fu_17237_p6 = data_428_V_read562_rewind_reg_17233.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_429_V_read563_phi_phi_fu_29436_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_429_V_read563_phi_phi_fu_29436_p4 = ap_phi_mux_data_429_V_read563_rewind_phi_fu_17251_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_429_V_read563_phi_phi_fu_29436_p4 = data_429_V_read.read();
    } else {
        ap_phi_mux_data_429_V_read563_phi_phi_fu_29436_p4 = ap_phi_reg_pp0_iter0_data_429_V_read563_phi_reg_29432.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_429_V_read563_rewind_phi_fu_17251_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_429_V_read563_rewind_phi_fu_17251_p6 = data_429_V_read563_phi_reg_29432.read();
    } else {
        ap_phi_mux_data_429_V_read563_rewind_phi_fu_17251_p6 = data_429_V_read563_rewind_reg_17247.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_42_V_read176_phi_phi_fu_24405_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_42_V_read176_phi_phi_fu_24405_p4 = ap_phi_mux_data_42_V_read176_rewind_phi_fu_11833_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_42_V_read176_phi_phi_fu_24405_p4 = data_42_V_read.read();
    } else {
        ap_phi_mux_data_42_V_read176_phi_phi_fu_24405_p4 = ap_phi_reg_pp0_iter0_data_42_V_read176_phi_reg_24401.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_42_V_read176_rewind_phi_fu_11833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_42_V_read176_rewind_phi_fu_11833_p6 = data_42_V_read176_phi_reg_24401.read();
    } else {
        ap_phi_mux_data_42_V_read176_rewind_phi_fu_11833_p6 = data_42_V_read176_rewind_reg_11829.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_430_V_read564_phi_phi_fu_29449_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_430_V_read564_phi_phi_fu_29449_p4 = ap_phi_mux_data_430_V_read564_rewind_phi_fu_17265_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_430_V_read564_phi_phi_fu_29449_p4 = data_430_V_read.read();
    } else {
        ap_phi_mux_data_430_V_read564_phi_phi_fu_29449_p4 = ap_phi_reg_pp0_iter0_data_430_V_read564_phi_reg_29445.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_430_V_read564_rewind_phi_fu_17265_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_430_V_read564_rewind_phi_fu_17265_p6 = data_430_V_read564_phi_reg_29445.read();
    } else {
        ap_phi_mux_data_430_V_read564_rewind_phi_fu_17265_p6 = data_430_V_read564_rewind_reg_17261.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_431_V_read565_phi_phi_fu_29462_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_431_V_read565_phi_phi_fu_29462_p4 = ap_phi_mux_data_431_V_read565_rewind_phi_fu_17279_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_431_V_read565_phi_phi_fu_29462_p4 = data_431_V_read.read();
    } else {
        ap_phi_mux_data_431_V_read565_phi_phi_fu_29462_p4 = ap_phi_reg_pp0_iter0_data_431_V_read565_phi_reg_29458.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_431_V_read565_rewind_phi_fu_17279_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_431_V_read565_rewind_phi_fu_17279_p6 = data_431_V_read565_phi_reg_29458.read();
    } else {
        ap_phi_mux_data_431_V_read565_rewind_phi_fu_17279_p6 = data_431_V_read565_rewind_reg_17275.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_432_V_read566_phi_phi_fu_29475_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_432_V_read566_phi_phi_fu_29475_p4 = ap_phi_mux_data_432_V_read566_rewind_phi_fu_17293_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_432_V_read566_phi_phi_fu_29475_p4 = data_432_V_read.read();
    } else {
        ap_phi_mux_data_432_V_read566_phi_phi_fu_29475_p4 = ap_phi_reg_pp0_iter0_data_432_V_read566_phi_reg_29471.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_432_V_read566_rewind_phi_fu_17293_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_432_V_read566_rewind_phi_fu_17293_p6 = data_432_V_read566_phi_reg_29471.read();
    } else {
        ap_phi_mux_data_432_V_read566_rewind_phi_fu_17293_p6 = data_432_V_read566_rewind_reg_17289.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_433_V_read567_phi_phi_fu_29488_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_433_V_read567_phi_phi_fu_29488_p4 = ap_phi_mux_data_433_V_read567_rewind_phi_fu_17307_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_433_V_read567_phi_phi_fu_29488_p4 = data_433_V_read.read();
    } else {
        ap_phi_mux_data_433_V_read567_phi_phi_fu_29488_p4 = ap_phi_reg_pp0_iter0_data_433_V_read567_phi_reg_29484.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_433_V_read567_rewind_phi_fu_17307_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_433_V_read567_rewind_phi_fu_17307_p6 = data_433_V_read567_phi_reg_29484.read();
    } else {
        ap_phi_mux_data_433_V_read567_rewind_phi_fu_17307_p6 = data_433_V_read567_rewind_reg_17303.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_434_V_read568_phi_phi_fu_29501_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_434_V_read568_phi_phi_fu_29501_p4 = ap_phi_mux_data_434_V_read568_rewind_phi_fu_17321_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_434_V_read568_phi_phi_fu_29501_p4 = data_434_V_read.read();
    } else {
        ap_phi_mux_data_434_V_read568_phi_phi_fu_29501_p4 = ap_phi_reg_pp0_iter0_data_434_V_read568_phi_reg_29497.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_434_V_read568_rewind_phi_fu_17321_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_434_V_read568_rewind_phi_fu_17321_p6 = data_434_V_read568_phi_reg_29497.read();
    } else {
        ap_phi_mux_data_434_V_read568_rewind_phi_fu_17321_p6 = data_434_V_read568_rewind_reg_17317.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_435_V_read569_phi_phi_fu_29514_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_435_V_read569_phi_phi_fu_29514_p4 = ap_phi_mux_data_435_V_read569_rewind_phi_fu_17335_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_435_V_read569_phi_phi_fu_29514_p4 = data_435_V_read.read();
    } else {
        ap_phi_mux_data_435_V_read569_phi_phi_fu_29514_p4 = ap_phi_reg_pp0_iter0_data_435_V_read569_phi_reg_29510.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_435_V_read569_rewind_phi_fu_17335_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_435_V_read569_rewind_phi_fu_17335_p6 = data_435_V_read569_phi_reg_29510.read();
    } else {
        ap_phi_mux_data_435_V_read569_rewind_phi_fu_17335_p6 = data_435_V_read569_rewind_reg_17331.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_436_V_read570_phi_phi_fu_29527_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_436_V_read570_phi_phi_fu_29527_p4 = ap_phi_mux_data_436_V_read570_rewind_phi_fu_17349_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_436_V_read570_phi_phi_fu_29527_p4 = data_436_V_read.read();
    } else {
        ap_phi_mux_data_436_V_read570_phi_phi_fu_29527_p4 = ap_phi_reg_pp0_iter0_data_436_V_read570_phi_reg_29523.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_436_V_read570_rewind_phi_fu_17349_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_436_V_read570_rewind_phi_fu_17349_p6 = data_436_V_read570_phi_reg_29523.read();
    } else {
        ap_phi_mux_data_436_V_read570_rewind_phi_fu_17349_p6 = data_436_V_read570_rewind_reg_17345.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_437_V_read571_phi_phi_fu_29540_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_437_V_read571_phi_phi_fu_29540_p4 = ap_phi_mux_data_437_V_read571_rewind_phi_fu_17363_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_437_V_read571_phi_phi_fu_29540_p4 = data_437_V_read.read();
    } else {
        ap_phi_mux_data_437_V_read571_phi_phi_fu_29540_p4 = ap_phi_reg_pp0_iter0_data_437_V_read571_phi_reg_29536.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_437_V_read571_rewind_phi_fu_17363_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_437_V_read571_rewind_phi_fu_17363_p6 = data_437_V_read571_phi_reg_29536.read();
    } else {
        ap_phi_mux_data_437_V_read571_rewind_phi_fu_17363_p6 = data_437_V_read571_rewind_reg_17359.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_438_V_read572_phi_phi_fu_29553_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_438_V_read572_phi_phi_fu_29553_p4 = ap_phi_mux_data_438_V_read572_rewind_phi_fu_17377_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_438_V_read572_phi_phi_fu_29553_p4 = data_438_V_read.read();
    } else {
        ap_phi_mux_data_438_V_read572_phi_phi_fu_29553_p4 = ap_phi_reg_pp0_iter0_data_438_V_read572_phi_reg_29549.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_438_V_read572_rewind_phi_fu_17377_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_438_V_read572_rewind_phi_fu_17377_p6 = data_438_V_read572_phi_reg_29549.read();
    } else {
        ap_phi_mux_data_438_V_read572_rewind_phi_fu_17377_p6 = data_438_V_read572_rewind_reg_17373.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_439_V_read573_phi_phi_fu_29566_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_439_V_read573_phi_phi_fu_29566_p4 = ap_phi_mux_data_439_V_read573_rewind_phi_fu_17391_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_439_V_read573_phi_phi_fu_29566_p4 = data_439_V_read.read();
    } else {
        ap_phi_mux_data_439_V_read573_phi_phi_fu_29566_p4 = ap_phi_reg_pp0_iter0_data_439_V_read573_phi_reg_29562.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_439_V_read573_rewind_phi_fu_17391_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_439_V_read573_rewind_phi_fu_17391_p6 = data_439_V_read573_phi_reg_29562.read();
    } else {
        ap_phi_mux_data_439_V_read573_rewind_phi_fu_17391_p6 = data_439_V_read573_rewind_reg_17387.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_43_V_read177_phi_phi_fu_24418_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_43_V_read177_phi_phi_fu_24418_p4 = ap_phi_mux_data_43_V_read177_rewind_phi_fu_11847_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_43_V_read177_phi_phi_fu_24418_p4 = data_43_V_read.read();
    } else {
        ap_phi_mux_data_43_V_read177_phi_phi_fu_24418_p4 = ap_phi_reg_pp0_iter0_data_43_V_read177_phi_reg_24414.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_43_V_read177_rewind_phi_fu_11847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_43_V_read177_rewind_phi_fu_11847_p6 = data_43_V_read177_phi_reg_24414.read();
    } else {
        ap_phi_mux_data_43_V_read177_rewind_phi_fu_11847_p6 = data_43_V_read177_rewind_reg_11843.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_440_V_read574_phi_phi_fu_29579_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_440_V_read574_phi_phi_fu_29579_p4 = ap_phi_mux_data_440_V_read574_rewind_phi_fu_17405_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_440_V_read574_phi_phi_fu_29579_p4 = data_440_V_read.read();
    } else {
        ap_phi_mux_data_440_V_read574_phi_phi_fu_29579_p4 = ap_phi_reg_pp0_iter0_data_440_V_read574_phi_reg_29575.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_440_V_read574_rewind_phi_fu_17405_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_440_V_read574_rewind_phi_fu_17405_p6 = data_440_V_read574_phi_reg_29575.read();
    } else {
        ap_phi_mux_data_440_V_read574_rewind_phi_fu_17405_p6 = data_440_V_read574_rewind_reg_17401.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_441_V_read575_phi_phi_fu_29592_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_441_V_read575_phi_phi_fu_29592_p4 = ap_phi_mux_data_441_V_read575_rewind_phi_fu_17419_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_441_V_read575_phi_phi_fu_29592_p4 = data_441_V_read.read();
    } else {
        ap_phi_mux_data_441_V_read575_phi_phi_fu_29592_p4 = ap_phi_reg_pp0_iter0_data_441_V_read575_phi_reg_29588.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_441_V_read575_rewind_phi_fu_17419_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_441_V_read575_rewind_phi_fu_17419_p6 = data_441_V_read575_phi_reg_29588.read();
    } else {
        ap_phi_mux_data_441_V_read575_rewind_phi_fu_17419_p6 = data_441_V_read575_rewind_reg_17415.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_442_V_read576_phi_phi_fu_29605_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_442_V_read576_phi_phi_fu_29605_p4 = ap_phi_mux_data_442_V_read576_rewind_phi_fu_17433_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_442_V_read576_phi_phi_fu_29605_p4 = data_442_V_read.read();
    } else {
        ap_phi_mux_data_442_V_read576_phi_phi_fu_29605_p4 = ap_phi_reg_pp0_iter0_data_442_V_read576_phi_reg_29601.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_442_V_read576_rewind_phi_fu_17433_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_442_V_read576_rewind_phi_fu_17433_p6 = data_442_V_read576_phi_reg_29601.read();
    } else {
        ap_phi_mux_data_442_V_read576_rewind_phi_fu_17433_p6 = data_442_V_read576_rewind_reg_17429.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_443_V_read577_phi_phi_fu_29618_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_443_V_read577_phi_phi_fu_29618_p4 = ap_phi_mux_data_443_V_read577_rewind_phi_fu_17447_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_443_V_read577_phi_phi_fu_29618_p4 = data_443_V_read.read();
    } else {
        ap_phi_mux_data_443_V_read577_phi_phi_fu_29618_p4 = ap_phi_reg_pp0_iter0_data_443_V_read577_phi_reg_29614.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_443_V_read577_rewind_phi_fu_17447_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_443_V_read577_rewind_phi_fu_17447_p6 = data_443_V_read577_phi_reg_29614.read();
    } else {
        ap_phi_mux_data_443_V_read577_rewind_phi_fu_17447_p6 = data_443_V_read577_rewind_reg_17443.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_444_V_read578_phi_phi_fu_29631_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_444_V_read578_phi_phi_fu_29631_p4 = ap_phi_mux_data_444_V_read578_rewind_phi_fu_17461_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_444_V_read578_phi_phi_fu_29631_p4 = data_444_V_read.read();
    } else {
        ap_phi_mux_data_444_V_read578_phi_phi_fu_29631_p4 = ap_phi_reg_pp0_iter0_data_444_V_read578_phi_reg_29627.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_444_V_read578_rewind_phi_fu_17461_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_444_V_read578_rewind_phi_fu_17461_p6 = data_444_V_read578_phi_reg_29627.read();
    } else {
        ap_phi_mux_data_444_V_read578_rewind_phi_fu_17461_p6 = data_444_V_read578_rewind_reg_17457.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_445_V_read579_phi_phi_fu_29644_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_445_V_read579_phi_phi_fu_29644_p4 = ap_phi_mux_data_445_V_read579_rewind_phi_fu_17475_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_445_V_read579_phi_phi_fu_29644_p4 = data_445_V_read.read();
    } else {
        ap_phi_mux_data_445_V_read579_phi_phi_fu_29644_p4 = ap_phi_reg_pp0_iter0_data_445_V_read579_phi_reg_29640.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_445_V_read579_rewind_phi_fu_17475_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_445_V_read579_rewind_phi_fu_17475_p6 = data_445_V_read579_phi_reg_29640.read();
    } else {
        ap_phi_mux_data_445_V_read579_rewind_phi_fu_17475_p6 = data_445_V_read579_rewind_reg_17471.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_446_V_read580_phi_phi_fu_29657_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_446_V_read580_phi_phi_fu_29657_p4 = ap_phi_mux_data_446_V_read580_rewind_phi_fu_17489_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_446_V_read580_phi_phi_fu_29657_p4 = data_446_V_read.read();
    } else {
        ap_phi_mux_data_446_V_read580_phi_phi_fu_29657_p4 = ap_phi_reg_pp0_iter0_data_446_V_read580_phi_reg_29653.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_446_V_read580_rewind_phi_fu_17489_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_446_V_read580_rewind_phi_fu_17489_p6 = data_446_V_read580_phi_reg_29653.read();
    } else {
        ap_phi_mux_data_446_V_read580_rewind_phi_fu_17489_p6 = data_446_V_read580_rewind_reg_17485.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_447_V_read581_phi_phi_fu_29670_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_447_V_read581_phi_phi_fu_29670_p4 = ap_phi_mux_data_447_V_read581_rewind_phi_fu_17503_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_447_V_read581_phi_phi_fu_29670_p4 = data_447_V_read.read();
    } else {
        ap_phi_mux_data_447_V_read581_phi_phi_fu_29670_p4 = ap_phi_reg_pp0_iter0_data_447_V_read581_phi_reg_29666.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_447_V_read581_rewind_phi_fu_17503_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_447_V_read581_rewind_phi_fu_17503_p6 = data_447_V_read581_phi_reg_29666.read();
    } else {
        ap_phi_mux_data_447_V_read581_rewind_phi_fu_17503_p6 = data_447_V_read581_rewind_reg_17499.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_448_V_read582_phi_phi_fu_29683_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_448_V_read582_phi_phi_fu_29683_p4 = ap_phi_mux_data_448_V_read582_rewind_phi_fu_17517_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_448_V_read582_phi_phi_fu_29683_p4 = data_448_V_read.read();
    } else {
        ap_phi_mux_data_448_V_read582_phi_phi_fu_29683_p4 = ap_phi_reg_pp0_iter0_data_448_V_read582_phi_reg_29679.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_448_V_read582_rewind_phi_fu_17517_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_448_V_read582_rewind_phi_fu_17517_p6 = data_448_V_read582_phi_reg_29679.read();
    } else {
        ap_phi_mux_data_448_V_read582_rewind_phi_fu_17517_p6 = data_448_V_read582_rewind_reg_17513.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_449_V_read583_phi_phi_fu_29696_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_449_V_read583_phi_phi_fu_29696_p4 = ap_phi_mux_data_449_V_read583_rewind_phi_fu_17531_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_449_V_read583_phi_phi_fu_29696_p4 = data_449_V_read.read();
    } else {
        ap_phi_mux_data_449_V_read583_phi_phi_fu_29696_p4 = ap_phi_reg_pp0_iter0_data_449_V_read583_phi_reg_29692.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_449_V_read583_rewind_phi_fu_17531_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_449_V_read583_rewind_phi_fu_17531_p6 = data_449_V_read583_phi_reg_29692.read();
    } else {
        ap_phi_mux_data_449_V_read583_rewind_phi_fu_17531_p6 = data_449_V_read583_rewind_reg_17527.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_44_V_read178_phi_phi_fu_24431_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_44_V_read178_phi_phi_fu_24431_p4 = ap_phi_mux_data_44_V_read178_rewind_phi_fu_11861_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_44_V_read178_phi_phi_fu_24431_p4 = data_44_V_read.read();
    } else {
        ap_phi_mux_data_44_V_read178_phi_phi_fu_24431_p4 = ap_phi_reg_pp0_iter0_data_44_V_read178_phi_reg_24427.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_44_V_read178_rewind_phi_fu_11861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_44_V_read178_rewind_phi_fu_11861_p6 = data_44_V_read178_phi_reg_24427.read();
    } else {
        ap_phi_mux_data_44_V_read178_rewind_phi_fu_11861_p6 = data_44_V_read178_rewind_reg_11857.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_450_V_read584_phi_phi_fu_29709_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_450_V_read584_phi_phi_fu_29709_p4 = ap_phi_mux_data_450_V_read584_rewind_phi_fu_17545_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_450_V_read584_phi_phi_fu_29709_p4 = data_450_V_read.read();
    } else {
        ap_phi_mux_data_450_V_read584_phi_phi_fu_29709_p4 = ap_phi_reg_pp0_iter0_data_450_V_read584_phi_reg_29705.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_450_V_read584_rewind_phi_fu_17545_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_450_V_read584_rewind_phi_fu_17545_p6 = data_450_V_read584_phi_reg_29705.read();
    } else {
        ap_phi_mux_data_450_V_read584_rewind_phi_fu_17545_p6 = data_450_V_read584_rewind_reg_17541.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_451_V_read585_phi_phi_fu_29722_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_451_V_read585_phi_phi_fu_29722_p4 = ap_phi_mux_data_451_V_read585_rewind_phi_fu_17559_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_451_V_read585_phi_phi_fu_29722_p4 = data_451_V_read.read();
    } else {
        ap_phi_mux_data_451_V_read585_phi_phi_fu_29722_p4 = ap_phi_reg_pp0_iter0_data_451_V_read585_phi_reg_29718.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_451_V_read585_rewind_phi_fu_17559_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_451_V_read585_rewind_phi_fu_17559_p6 = data_451_V_read585_phi_reg_29718.read();
    } else {
        ap_phi_mux_data_451_V_read585_rewind_phi_fu_17559_p6 = data_451_V_read585_rewind_reg_17555.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_452_V_read586_phi_phi_fu_29735_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_452_V_read586_phi_phi_fu_29735_p4 = ap_phi_mux_data_452_V_read586_rewind_phi_fu_17573_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_452_V_read586_phi_phi_fu_29735_p4 = data_452_V_read.read();
    } else {
        ap_phi_mux_data_452_V_read586_phi_phi_fu_29735_p4 = ap_phi_reg_pp0_iter0_data_452_V_read586_phi_reg_29731.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_452_V_read586_rewind_phi_fu_17573_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_452_V_read586_rewind_phi_fu_17573_p6 = data_452_V_read586_phi_reg_29731.read();
    } else {
        ap_phi_mux_data_452_V_read586_rewind_phi_fu_17573_p6 = data_452_V_read586_rewind_reg_17569.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_453_V_read587_phi_phi_fu_29748_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_453_V_read587_phi_phi_fu_29748_p4 = ap_phi_mux_data_453_V_read587_rewind_phi_fu_17587_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_453_V_read587_phi_phi_fu_29748_p4 = data_453_V_read.read();
    } else {
        ap_phi_mux_data_453_V_read587_phi_phi_fu_29748_p4 = ap_phi_reg_pp0_iter0_data_453_V_read587_phi_reg_29744.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_453_V_read587_rewind_phi_fu_17587_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_453_V_read587_rewind_phi_fu_17587_p6 = data_453_V_read587_phi_reg_29744.read();
    } else {
        ap_phi_mux_data_453_V_read587_rewind_phi_fu_17587_p6 = data_453_V_read587_rewind_reg_17583.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_454_V_read588_phi_phi_fu_29761_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_454_V_read588_phi_phi_fu_29761_p4 = ap_phi_mux_data_454_V_read588_rewind_phi_fu_17601_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_454_V_read588_phi_phi_fu_29761_p4 = data_454_V_read.read();
    } else {
        ap_phi_mux_data_454_V_read588_phi_phi_fu_29761_p4 = ap_phi_reg_pp0_iter0_data_454_V_read588_phi_reg_29757.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_454_V_read588_rewind_phi_fu_17601_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_454_V_read588_rewind_phi_fu_17601_p6 = data_454_V_read588_phi_reg_29757.read();
    } else {
        ap_phi_mux_data_454_V_read588_rewind_phi_fu_17601_p6 = data_454_V_read588_rewind_reg_17597.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_455_V_read589_phi_phi_fu_29774_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_455_V_read589_phi_phi_fu_29774_p4 = ap_phi_mux_data_455_V_read589_rewind_phi_fu_17615_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_455_V_read589_phi_phi_fu_29774_p4 = data_455_V_read.read();
    } else {
        ap_phi_mux_data_455_V_read589_phi_phi_fu_29774_p4 = ap_phi_reg_pp0_iter0_data_455_V_read589_phi_reg_29770.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_455_V_read589_rewind_phi_fu_17615_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_455_V_read589_rewind_phi_fu_17615_p6 = data_455_V_read589_phi_reg_29770.read();
    } else {
        ap_phi_mux_data_455_V_read589_rewind_phi_fu_17615_p6 = data_455_V_read589_rewind_reg_17611.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_456_V_read590_phi_phi_fu_29787_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_456_V_read590_phi_phi_fu_29787_p4 = ap_phi_mux_data_456_V_read590_rewind_phi_fu_17629_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_456_V_read590_phi_phi_fu_29787_p4 = data_456_V_read.read();
    } else {
        ap_phi_mux_data_456_V_read590_phi_phi_fu_29787_p4 = ap_phi_reg_pp0_iter0_data_456_V_read590_phi_reg_29783.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_456_V_read590_rewind_phi_fu_17629_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_456_V_read590_rewind_phi_fu_17629_p6 = data_456_V_read590_phi_reg_29783.read();
    } else {
        ap_phi_mux_data_456_V_read590_rewind_phi_fu_17629_p6 = data_456_V_read590_rewind_reg_17625.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_457_V_read591_phi_phi_fu_29800_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_457_V_read591_phi_phi_fu_29800_p4 = ap_phi_mux_data_457_V_read591_rewind_phi_fu_17643_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_457_V_read591_phi_phi_fu_29800_p4 = data_457_V_read.read();
    } else {
        ap_phi_mux_data_457_V_read591_phi_phi_fu_29800_p4 = ap_phi_reg_pp0_iter0_data_457_V_read591_phi_reg_29796.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_457_V_read591_rewind_phi_fu_17643_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_457_V_read591_rewind_phi_fu_17643_p6 = data_457_V_read591_phi_reg_29796.read();
    } else {
        ap_phi_mux_data_457_V_read591_rewind_phi_fu_17643_p6 = data_457_V_read591_rewind_reg_17639.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_458_V_read592_phi_phi_fu_29813_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_458_V_read592_phi_phi_fu_29813_p4 = ap_phi_mux_data_458_V_read592_rewind_phi_fu_17657_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_458_V_read592_phi_phi_fu_29813_p4 = data_458_V_read.read();
    } else {
        ap_phi_mux_data_458_V_read592_phi_phi_fu_29813_p4 = ap_phi_reg_pp0_iter0_data_458_V_read592_phi_reg_29809.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_458_V_read592_rewind_phi_fu_17657_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_458_V_read592_rewind_phi_fu_17657_p6 = data_458_V_read592_phi_reg_29809.read();
    } else {
        ap_phi_mux_data_458_V_read592_rewind_phi_fu_17657_p6 = data_458_V_read592_rewind_reg_17653.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_459_V_read593_phi_phi_fu_29826_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_459_V_read593_phi_phi_fu_29826_p4 = ap_phi_mux_data_459_V_read593_rewind_phi_fu_17671_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_459_V_read593_phi_phi_fu_29826_p4 = data_459_V_read.read();
    } else {
        ap_phi_mux_data_459_V_read593_phi_phi_fu_29826_p4 = ap_phi_reg_pp0_iter0_data_459_V_read593_phi_reg_29822.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_459_V_read593_rewind_phi_fu_17671_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_459_V_read593_rewind_phi_fu_17671_p6 = data_459_V_read593_phi_reg_29822.read();
    } else {
        ap_phi_mux_data_459_V_read593_rewind_phi_fu_17671_p6 = data_459_V_read593_rewind_reg_17667.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_45_V_read179_phi_phi_fu_24444_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_45_V_read179_phi_phi_fu_24444_p4 = ap_phi_mux_data_45_V_read179_rewind_phi_fu_11875_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_45_V_read179_phi_phi_fu_24444_p4 = data_45_V_read.read();
    } else {
        ap_phi_mux_data_45_V_read179_phi_phi_fu_24444_p4 = ap_phi_reg_pp0_iter0_data_45_V_read179_phi_reg_24440.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_45_V_read179_rewind_phi_fu_11875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_45_V_read179_rewind_phi_fu_11875_p6 = data_45_V_read179_phi_reg_24440.read();
    } else {
        ap_phi_mux_data_45_V_read179_rewind_phi_fu_11875_p6 = data_45_V_read179_rewind_reg_11871.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_460_V_read594_phi_phi_fu_29839_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_460_V_read594_phi_phi_fu_29839_p4 = ap_phi_mux_data_460_V_read594_rewind_phi_fu_17685_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_460_V_read594_phi_phi_fu_29839_p4 = data_460_V_read.read();
    } else {
        ap_phi_mux_data_460_V_read594_phi_phi_fu_29839_p4 = ap_phi_reg_pp0_iter0_data_460_V_read594_phi_reg_29835.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_460_V_read594_rewind_phi_fu_17685_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_460_V_read594_rewind_phi_fu_17685_p6 = data_460_V_read594_phi_reg_29835.read();
    } else {
        ap_phi_mux_data_460_V_read594_rewind_phi_fu_17685_p6 = data_460_V_read594_rewind_reg_17681.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_461_V_read595_phi_phi_fu_29852_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_461_V_read595_phi_phi_fu_29852_p4 = ap_phi_mux_data_461_V_read595_rewind_phi_fu_17699_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_461_V_read595_phi_phi_fu_29852_p4 = data_461_V_read.read();
    } else {
        ap_phi_mux_data_461_V_read595_phi_phi_fu_29852_p4 = ap_phi_reg_pp0_iter0_data_461_V_read595_phi_reg_29848.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_461_V_read595_rewind_phi_fu_17699_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_461_V_read595_rewind_phi_fu_17699_p6 = data_461_V_read595_phi_reg_29848.read();
    } else {
        ap_phi_mux_data_461_V_read595_rewind_phi_fu_17699_p6 = data_461_V_read595_rewind_reg_17695.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_462_V_read596_phi_phi_fu_29865_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_462_V_read596_phi_phi_fu_29865_p4 = ap_phi_mux_data_462_V_read596_rewind_phi_fu_17713_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_462_V_read596_phi_phi_fu_29865_p4 = data_462_V_read.read();
    } else {
        ap_phi_mux_data_462_V_read596_phi_phi_fu_29865_p4 = ap_phi_reg_pp0_iter0_data_462_V_read596_phi_reg_29861.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_462_V_read596_rewind_phi_fu_17713_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_462_V_read596_rewind_phi_fu_17713_p6 = data_462_V_read596_phi_reg_29861.read();
    } else {
        ap_phi_mux_data_462_V_read596_rewind_phi_fu_17713_p6 = data_462_V_read596_rewind_reg_17709.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_463_V_read597_phi_phi_fu_29878_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_463_V_read597_phi_phi_fu_29878_p4 = ap_phi_mux_data_463_V_read597_rewind_phi_fu_17727_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_463_V_read597_phi_phi_fu_29878_p4 = data_463_V_read.read();
    } else {
        ap_phi_mux_data_463_V_read597_phi_phi_fu_29878_p4 = ap_phi_reg_pp0_iter0_data_463_V_read597_phi_reg_29874.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_463_V_read597_rewind_phi_fu_17727_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_463_V_read597_rewind_phi_fu_17727_p6 = data_463_V_read597_phi_reg_29874.read();
    } else {
        ap_phi_mux_data_463_V_read597_rewind_phi_fu_17727_p6 = data_463_V_read597_rewind_reg_17723.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_464_V_read598_phi_phi_fu_29891_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_464_V_read598_phi_phi_fu_29891_p4 = ap_phi_mux_data_464_V_read598_rewind_phi_fu_17741_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_464_V_read598_phi_phi_fu_29891_p4 = data_464_V_read.read();
    } else {
        ap_phi_mux_data_464_V_read598_phi_phi_fu_29891_p4 = ap_phi_reg_pp0_iter0_data_464_V_read598_phi_reg_29887.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_464_V_read598_rewind_phi_fu_17741_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_464_V_read598_rewind_phi_fu_17741_p6 = data_464_V_read598_phi_reg_29887.read();
    } else {
        ap_phi_mux_data_464_V_read598_rewind_phi_fu_17741_p6 = data_464_V_read598_rewind_reg_17737.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_465_V_read599_phi_phi_fu_29904_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_465_V_read599_phi_phi_fu_29904_p4 = ap_phi_mux_data_465_V_read599_rewind_phi_fu_17755_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_465_V_read599_phi_phi_fu_29904_p4 = data_465_V_read.read();
    } else {
        ap_phi_mux_data_465_V_read599_phi_phi_fu_29904_p4 = ap_phi_reg_pp0_iter0_data_465_V_read599_phi_reg_29900.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_465_V_read599_rewind_phi_fu_17755_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_465_V_read599_rewind_phi_fu_17755_p6 = data_465_V_read599_phi_reg_29900.read();
    } else {
        ap_phi_mux_data_465_V_read599_rewind_phi_fu_17755_p6 = data_465_V_read599_rewind_reg_17751.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_466_V_read600_phi_phi_fu_29917_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_466_V_read600_phi_phi_fu_29917_p4 = ap_phi_mux_data_466_V_read600_rewind_phi_fu_17769_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_466_V_read600_phi_phi_fu_29917_p4 = data_466_V_read.read();
    } else {
        ap_phi_mux_data_466_V_read600_phi_phi_fu_29917_p4 = ap_phi_reg_pp0_iter0_data_466_V_read600_phi_reg_29913.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_466_V_read600_rewind_phi_fu_17769_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_466_V_read600_rewind_phi_fu_17769_p6 = data_466_V_read600_phi_reg_29913.read();
    } else {
        ap_phi_mux_data_466_V_read600_rewind_phi_fu_17769_p6 = data_466_V_read600_rewind_reg_17765.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_467_V_read601_phi_phi_fu_29930_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_467_V_read601_phi_phi_fu_29930_p4 = ap_phi_mux_data_467_V_read601_rewind_phi_fu_17783_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_467_V_read601_phi_phi_fu_29930_p4 = data_467_V_read.read();
    } else {
        ap_phi_mux_data_467_V_read601_phi_phi_fu_29930_p4 = ap_phi_reg_pp0_iter0_data_467_V_read601_phi_reg_29926.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_467_V_read601_rewind_phi_fu_17783_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_467_V_read601_rewind_phi_fu_17783_p6 = data_467_V_read601_phi_reg_29926.read();
    } else {
        ap_phi_mux_data_467_V_read601_rewind_phi_fu_17783_p6 = data_467_V_read601_rewind_reg_17779.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_468_V_read602_phi_phi_fu_29943_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_468_V_read602_phi_phi_fu_29943_p4 = ap_phi_mux_data_468_V_read602_rewind_phi_fu_17797_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_468_V_read602_phi_phi_fu_29943_p4 = data_468_V_read.read();
    } else {
        ap_phi_mux_data_468_V_read602_phi_phi_fu_29943_p4 = ap_phi_reg_pp0_iter0_data_468_V_read602_phi_reg_29939.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_468_V_read602_rewind_phi_fu_17797_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_468_V_read602_rewind_phi_fu_17797_p6 = data_468_V_read602_phi_reg_29939.read();
    } else {
        ap_phi_mux_data_468_V_read602_rewind_phi_fu_17797_p6 = data_468_V_read602_rewind_reg_17793.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_469_V_read603_phi_phi_fu_29956_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_469_V_read603_phi_phi_fu_29956_p4 = ap_phi_mux_data_469_V_read603_rewind_phi_fu_17811_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_469_V_read603_phi_phi_fu_29956_p4 = data_469_V_read.read();
    } else {
        ap_phi_mux_data_469_V_read603_phi_phi_fu_29956_p4 = ap_phi_reg_pp0_iter0_data_469_V_read603_phi_reg_29952.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_469_V_read603_rewind_phi_fu_17811_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_469_V_read603_rewind_phi_fu_17811_p6 = data_469_V_read603_phi_reg_29952.read();
    } else {
        ap_phi_mux_data_469_V_read603_rewind_phi_fu_17811_p6 = data_469_V_read603_rewind_reg_17807.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_46_V_read180_phi_phi_fu_24457_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_46_V_read180_phi_phi_fu_24457_p4 = ap_phi_mux_data_46_V_read180_rewind_phi_fu_11889_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_46_V_read180_phi_phi_fu_24457_p4 = data_46_V_read.read();
    } else {
        ap_phi_mux_data_46_V_read180_phi_phi_fu_24457_p4 = ap_phi_reg_pp0_iter0_data_46_V_read180_phi_reg_24453.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_46_V_read180_rewind_phi_fu_11889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_46_V_read180_rewind_phi_fu_11889_p6 = data_46_V_read180_phi_reg_24453.read();
    } else {
        ap_phi_mux_data_46_V_read180_rewind_phi_fu_11889_p6 = data_46_V_read180_rewind_reg_11885.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_470_V_read604_phi_phi_fu_29969_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_470_V_read604_phi_phi_fu_29969_p4 = ap_phi_mux_data_470_V_read604_rewind_phi_fu_17825_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_470_V_read604_phi_phi_fu_29969_p4 = data_470_V_read.read();
    } else {
        ap_phi_mux_data_470_V_read604_phi_phi_fu_29969_p4 = ap_phi_reg_pp0_iter0_data_470_V_read604_phi_reg_29965.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_470_V_read604_rewind_phi_fu_17825_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_470_V_read604_rewind_phi_fu_17825_p6 = data_470_V_read604_phi_reg_29965.read();
    } else {
        ap_phi_mux_data_470_V_read604_rewind_phi_fu_17825_p6 = data_470_V_read604_rewind_reg_17821.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_471_V_read605_phi_phi_fu_29982_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_471_V_read605_phi_phi_fu_29982_p4 = ap_phi_mux_data_471_V_read605_rewind_phi_fu_17839_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_471_V_read605_phi_phi_fu_29982_p4 = data_471_V_read.read();
    } else {
        ap_phi_mux_data_471_V_read605_phi_phi_fu_29982_p4 = ap_phi_reg_pp0_iter0_data_471_V_read605_phi_reg_29978.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_471_V_read605_rewind_phi_fu_17839_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_471_V_read605_rewind_phi_fu_17839_p6 = data_471_V_read605_phi_reg_29978.read();
    } else {
        ap_phi_mux_data_471_V_read605_rewind_phi_fu_17839_p6 = data_471_V_read605_rewind_reg_17835.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_472_V_read606_phi_phi_fu_29995_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_472_V_read606_phi_phi_fu_29995_p4 = ap_phi_mux_data_472_V_read606_rewind_phi_fu_17853_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_472_V_read606_phi_phi_fu_29995_p4 = data_472_V_read.read();
    } else {
        ap_phi_mux_data_472_V_read606_phi_phi_fu_29995_p4 = ap_phi_reg_pp0_iter0_data_472_V_read606_phi_reg_29991.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_472_V_read606_rewind_phi_fu_17853_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_472_V_read606_rewind_phi_fu_17853_p6 = data_472_V_read606_phi_reg_29991.read();
    } else {
        ap_phi_mux_data_472_V_read606_rewind_phi_fu_17853_p6 = data_472_V_read606_rewind_reg_17849.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_473_V_read607_phi_phi_fu_30008_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_473_V_read607_phi_phi_fu_30008_p4 = ap_phi_mux_data_473_V_read607_rewind_phi_fu_17867_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_473_V_read607_phi_phi_fu_30008_p4 = data_473_V_read.read();
    } else {
        ap_phi_mux_data_473_V_read607_phi_phi_fu_30008_p4 = ap_phi_reg_pp0_iter0_data_473_V_read607_phi_reg_30004.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_473_V_read607_rewind_phi_fu_17867_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_473_V_read607_rewind_phi_fu_17867_p6 = data_473_V_read607_phi_reg_30004.read();
    } else {
        ap_phi_mux_data_473_V_read607_rewind_phi_fu_17867_p6 = data_473_V_read607_rewind_reg_17863.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_474_V_read608_phi_phi_fu_30021_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_474_V_read608_phi_phi_fu_30021_p4 = ap_phi_mux_data_474_V_read608_rewind_phi_fu_17881_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_474_V_read608_phi_phi_fu_30021_p4 = data_474_V_read.read();
    } else {
        ap_phi_mux_data_474_V_read608_phi_phi_fu_30021_p4 = ap_phi_reg_pp0_iter0_data_474_V_read608_phi_reg_30017.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_474_V_read608_rewind_phi_fu_17881_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_474_V_read608_rewind_phi_fu_17881_p6 = data_474_V_read608_phi_reg_30017.read();
    } else {
        ap_phi_mux_data_474_V_read608_rewind_phi_fu_17881_p6 = data_474_V_read608_rewind_reg_17877.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_475_V_read609_phi_phi_fu_30034_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_475_V_read609_phi_phi_fu_30034_p4 = ap_phi_mux_data_475_V_read609_rewind_phi_fu_17895_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_475_V_read609_phi_phi_fu_30034_p4 = data_475_V_read.read();
    } else {
        ap_phi_mux_data_475_V_read609_phi_phi_fu_30034_p4 = ap_phi_reg_pp0_iter0_data_475_V_read609_phi_reg_30030.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_475_V_read609_rewind_phi_fu_17895_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_475_V_read609_rewind_phi_fu_17895_p6 = data_475_V_read609_phi_reg_30030.read();
    } else {
        ap_phi_mux_data_475_V_read609_rewind_phi_fu_17895_p6 = data_475_V_read609_rewind_reg_17891.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_476_V_read610_phi_phi_fu_30047_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_476_V_read610_phi_phi_fu_30047_p4 = ap_phi_mux_data_476_V_read610_rewind_phi_fu_17909_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_476_V_read610_phi_phi_fu_30047_p4 = data_476_V_read.read();
    } else {
        ap_phi_mux_data_476_V_read610_phi_phi_fu_30047_p4 = ap_phi_reg_pp0_iter0_data_476_V_read610_phi_reg_30043.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_476_V_read610_rewind_phi_fu_17909_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_476_V_read610_rewind_phi_fu_17909_p6 = data_476_V_read610_phi_reg_30043.read();
    } else {
        ap_phi_mux_data_476_V_read610_rewind_phi_fu_17909_p6 = data_476_V_read610_rewind_reg_17905.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_477_V_read611_phi_phi_fu_30060_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_477_V_read611_phi_phi_fu_30060_p4 = ap_phi_mux_data_477_V_read611_rewind_phi_fu_17923_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_477_V_read611_phi_phi_fu_30060_p4 = data_477_V_read.read();
    } else {
        ap_phi_mux_data_477_V_read611_phi_phi_fu_30060_p4 = ap_phi_reg_pp0_iter0_data_477_V_read611_phi_reg_30056.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_477_V_read611_rewind_phi_fu_17923_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_477_V_read611_rewind_phi_fu_17923_p6 = data_477_V_read611_phi_reg_30056.read();
    } else {
        ap_phi_mux_data_477_V_read611_rewind_phi_fu_17923_p6 = data_477_V_read611_rewind_reg_17919.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_478_V_read612_phi_phi_fu_30073_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_478_V_read612_phi_phi_fu_30073_p4 = ap_phi_mux_data_478_V_read612_rewind_phi_fu_17937_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_478_V_read612_phi_phi_fu_30073_p4 = data_478_V_read.read();
    } else {
        ap_phi_mux_data_478_V_read612_phi_phi_fu_30073_p4 = ap_phi_reg_pp0_iter0_data_478_V_read612_phi_reg_30069.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_478_V_read612_rewind_phi_fu_17937_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_478_V_read612_rewind_phi_fu_17937_p6 = data_478_V_read612_phi_reg_30069.read();
    } else {
        ap_phi_mux_data_478_V_read612_rewind_phi_fu_17937_p6 = data_478_V_read612_rewind_reg_17933.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_479_V_read613_phi_phi_fu_30086_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_479_V_read613_phi_phi_fu_30086_p4 = ap_phi_mux_data_479_V_read613_rewind_phi_fu_17951_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_479_V_read613_phi_phi_fu_30086_p4 = data_479_V_read.read();
    } else {
        ap_phi_mux_data_479_V_read613_phi_phi_fu_30086_p4 = ap_phi_reg_pp0_iter0_data_479_V_read613_phi_reg_30082.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_479_V_read613_rewind_phi_fu_17951_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_479_V_read613_rewind_phi_fu_17951_p6 = data_479_V_read613_phi_reg_30082.read();
    } else {
        ap_phi_mux_data_479_V_read613_rewind_phi_fu_17951_p6 = data_479_V_read613_rewind_reg_17947.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_47_V_read181_phi_phi_fu_24470_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_47_V_read181_phi_phi_fu_24470_p4 = ap_phi_mux_data_47_V_read181_rewind_phi_fu_11903_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_47_V_read181_phi_phi_fu_24470_p4 = data_47_V_read.read();
    } else {
        ap_phi_mux_data_47_V_read181_phi_phi_fu_24470_p4 = ap_phi_reg_pp0_iter0_data_47_V_read181_phi_reg_24466.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_47_V_read181_rewind_phi_fu_11903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_47_V_read181_rewind_phi_fu_11903_p6 = data_47_V_read181_phi_reg_24466.read();
    } else {
        ap_phi_mux_data_47_V_read181_rewind_phi_fu_11903_p6 = data_47_V_read181_rewind_reg_11899.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_480_V_read614_phi_phi_fu_30099_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_480_V_read614_phi_phi_fu_30099_p4 = ap_phi_mux_data_480_V_read614_rewind_phi_fu_17965_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_480_V_read614_phi_phi_fu_30099_p4 = data_480_V_read.read();
    } else {
        ap_phi_mux_data_480_V_read614_phi_phi_fu_30099_p4 = ap_phi_reg_pp0_iter0_data_480_V_read614_phi_reg_30095.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_480_V_read614_rewind_phi_fu_17965_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_480_V_read614_rewind_phi_fu_17965_p6 = data_480_V_read614_phi_reg_30095.read();
    } else {
        ap_phi_mux_data_480_V_read614_rewind_phi_fu_17965_p6 = data_480_V_read614_rewind_reg_17961.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_481_V_read615_phi_phi_fu_30112_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_481_V_read615_phi_phi_fu_30112_p4 = ap_phi_mux_data_481_V_read615_rewind_phi_fu_17979_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_481_V_read615_phi_phi_fu_30112_p4 = data_481_V_read.read();
    } else {
        ap_phi_mux_data_481_V_read615_phi_phi_fu_30112_p4 = ap_phi_reg_pp0_iter0_data_481_V_read615_phi_reg_30108.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_481_V_read615_rewind_phi_fu_17979_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_481_V_read615_rewind_phi_fu_17979_p6 = data_481_V_read615_phi_reg_30108.read();
    } else {
        ap_phi_mux_data_481_V_read615_rewind_phi_fu_17979_p6 = data_481_V_read615_rewind_reg_17975.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_482_V_read616_phi_phi_fu_30125_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_482_V_read616_phi_phi_fu_30125_p4 = ap_phi_mux_data_482_V_read616_rewind_phi_fu_17993_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_482_V_read616_phi_phi_fu_30125_p4 = data_482_V_read.read();
    } else {
        ap_phi_mux_data_482_V_read616_phi_phi_fu_30125_p4 = ap_phi_reg_pp0_iter0_data_482_V_read616_phi_reg_30121.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_482_V_read616_rewind_phi_fu_17993_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_482_V_read616_rewind_phi_fu_17993_p6 = data_482_V_read616_phi_reg_30121.read();
    } else {
        ap_phi_mux_data_482_V_read616_rewind_phi_fu_17993_p6 = data_482_V_read616_rewind_reg_17989.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_483_V_read617_phi_phi_fu_30138_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_483_V_read617_phi_phi_fu_30138_p4 = ap_phi_mux_data_483_V_read617_rewind_phi_fu_18007_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_483_V_read617_phi_phi_fu_30138_p4 = data_483_V_read.read();
    } else {
        ap_phi_mux_data_483_V_read617_phi_phi_fu_30138_p4 = ap_phi_reg_pp0_iter0_data_483_V_read617_phi_reg_30134.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_483_V_read617_rewind_phi_fu_18007_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_483_V_read617_rewind_phi_fu_18007_p6 = data_483_V_read617_phi_reg_30134.read();
    } else {
        ap_phi_mux_data_483_V_read617_rewind_phi_fu_18007_p6 = data_483_V_read617_rewind_reg_18003.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_484_V_read618_phi_phi_fu_30151_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_484_V_read618_phi_phi_fu_30151_p4 = ap_phi_mux_data_484_V_read618_rewind_phi_fu_18021_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_484_V_read618_phi_phi_fu_30151_p4 = data_484_V_read.read();
    } else {
        ap_phi_mux_data_484_V_read618_phi_phi_fu_30151_p4 = ap_phi_reg_pp0_iter0_data_484_V_read618_phi_reg_30147.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_484_V_read618_rewind_phi_fu_18021_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_484_V_read618_rewind_phi_fu_18021_p6 = data_484_V_read618_phi_reg_30147.read();
    } else {
        ap_phi_mux_data_484_V_read618_rewind_phi_fu_18021_p6 = data_484_V_read618_rewind_reg_18017.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_485_V_read619_phi_phi_fu_30164_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_485_V_read619_phi_phi_fu_30164_p4 = ap_phi_mux_data_485_V_read619_rewind_phi_fu_18035_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_485_V_read619_phi_phi_fu_30164_p4 = data_485_V_read.read();
    } else {
        ap_phi_mux_data_485_V_read619_phi_phi_fu_30164_p4 = ap_phi_reg_pp0_iter0_data_485_V_read619_phi_reg_30160.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_485_V_read619_rewind_phi_fu_18035_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_485_V_read619_rewind_phi_fu_18035_p6 = data_485_V_read619_phi_reg_30160.read();
    } else {
        ap_phi_mux_data_485_V_read619_rewind_phi_fu_18035_p6 = data_485_V_read619_rewind_reg_18031.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_486_V_read620_phi_phi_fu_30177_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_486_V_read620_phi_phi_fu_30177_p4 = ap_phi_mux_data_486_V_read620_rewind_phi_fu_18049_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_486_V_read620_phi_phi_fu_30177_p4 = data_486_V_read.read();
    } else {
        ap_phi_mux_data_486_V_read620_phi_phi_fu_30177_p4 = ap_phi_reg_pp0_iter0_data_486_V_read620_phi_reg_30173.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_486_V_read620_rewind_phi_fu_18049_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_486_V_read620_rewind_phi_fu_18049_p6 = data_486_V_read620_phi_reg_30173.read();
    } else {
        ap_phi_mux_data_486_V_read620_rewind_phi_fu_18049_p6 = data_486_V_read620_rewind_reg_18045.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_487_V_read621_phi_phi_fu_30190_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_487_V_read621_phi_phi_fu_30190_p4 = ap_phi_mux_data_487_V_read621_rewind_phi_fu_18063_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_487_V_read621_phi_phi_fu_30190_p4 = data_487_V_read.read();
    } else {
        ap_phi_mux_data_487_V_read621_phi_phi_fu_30190_p4 = ap_phi_reg_pp0_iter0_data_487_V_read621_phi_reg_30186.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_487_V_read621_rewind_phi_fu_18063_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_487_V_read621_rewind_phi_fu_18063_p6 = data_487_V_read621_phi_reg_30186.read();
    } else {
        ap_phi_mux_data_487_V_read621_rewind_phi_fu_18063_p6 = data_487_V_read621_rewind_reg_18059.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_488_V_read622_phi_phi_fu_30203_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_488_V_read622_phi_phi_fu_30203_p4 = ap_phi_mux_data_488_V_read622_rewind_phi_fu_18077_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_488_V_read622_phi_phi_fu_30203_p4 = data_488_V_read.read();
    } else {
        ap_phi_mux_data_488_V_read622_phi_phi_fu_30203_p4 = ap_phi_reg_pp0_iter0_data_488_V_read622_phi_reg_30199.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_488_V_read622_rewind_phi_fu_18077_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_488_V_read622_rewind_phi_fu_18077_p6 = data_488_V_read622_phi_reg_30199.read();
    } else {
        ap_phi_mux_data_488_V_read622_rewind_phi_fu_18077_p6 = data_488_V_read622_rewind_reg_18073.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_489_V_read623_phi_phi_fu_30216_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_489_V_read623_phi_phi_fu_30216_p4 = ap_phi_mux_data_489_V_read623_rewind_phi_fu_18091_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_489_V_read623_phi_phi_fu_30216_p4 = data_489_V_read.read();
    } else {
        ap_phi_mux_data_489_V_read623_phi_phi_fu_30216_p4 = ap_phi_reg_pp0_iter0_data_489_V_read623_phi_reg_30212.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_489_V_read623_rewind_phi_fu_18091_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_489_V_read623_rewind_phi_fu_18091_p6 = data_489_V_read623_phi_reg_30212.read();
    } else {
        ap_phi_mux_data_489_V_read623_rewind_phi_fu_18091_p6 = data_489_V_read623_rewind_reg_18087.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_48_V_read182_phi_phi_fu_24483_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_48_V_read182_phi_phi_fu_24483_p4 = ap_phi_mux_data_48_V_read182_rewind_phi_fu_11917_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_48_V_read182_phi_phi_fu_24483_p4 = data_48_V_read.read();
    } else {
        ap_phi_mux_data_48_V_read182_phi_phi_fu_24483_p4 = ap_phi_reg_pp0_iter0_data_48_V_read182_phi_reg_24479.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_48_V_read182_rewind_phi_fu_11917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_48_V_read182_rewind_phi_fu_11917_p6 = data_48_V_read182_phi_reg_24479.read();
    } else {
        ap_phi_mux_data_48_V_read182_rewind_phi_fu_11917_p6 = data_48_V_read182_rewind_reg_11913.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_490_V_read624_phi_phi_fu_30229_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_490_V_read624_phi_phi_fu_30229_p4 = ap_phi_mux_data_490_V_read624_rewind_phi_fu_18105_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_490_V_read624_phi_phi_fu_30229_p4 = data_490_V_read.read();
    } else {
        ap_phi_mux_data_490_V_read624_phi_phi_fu_30229_p4 = ap_phi_reg_pp0_iter0_data_490_V_read624_phi_reg_30225.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_490_V_read624_rewind_phi_fu_18105_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_490_V_read624_rewind_phi_fu_18105_p6 = data_490_V_read624_phi_reg_30225.read();
    } else {
        ap_phi_mux_data_490_V_read624_rewind_phi_fu_18105_p6 = data_490_V_read624_rewind_reg_18101.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_491_V_read625_phi_phi_fu_30242_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_491_V_read625_phi_phi_fu_30242_p4 = ap_phi_mux_data_491_V_read625_rewind_phi_fu_18119_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_491_V_read625_phi_phi_fu_30242_p4 = data_491_V_read.read();
    } else {
        ap_phi_mux_data_491_V_read625_phi_phi_fu_30242_p4 = ap_phi_reg_pp0_iter0_data_491_V_read625_phi_reg_30238.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_491_V_read625_rewind_phi_fu_18119_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_491_V_read625_rewind_phi_fu_18119_p6 = data_491_V_read625_phi_reg_30238.read();
    } else {
        ap_phi_mux_data_491_V_read625_rewind_phi_fu_18119_p6 = data_491_V_read625_rewind_reg_18115.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_492_V_read626_phi_phi_fu_30255_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_492_V_read626_phi_phi_fu_30255_p4 = ap_phi_mux_data_492_V_read626_rewind_phi_fu_18133_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_492_V_read626_phi_phi_fu_30255_p4 = data_492_V_read.read();
    } else {
        ap_phi_mux_data_492_V_read626_phi_phi_fu_30255_p4 = ap_phi_reg_pp0_iter0_data_492_V_read626_phi_reg_30251.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_492_V_read626_rewind_phi_fu_18133_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_492_V_read626_rewind_phi_fu_18133_p6 = data_492_V_read626_phi_reg_30251.read();
    } else {
        ap_phi_mux_data_492_V_read626_rewind_phi_fu_18133_p6 = data_492_V_read626_rewind_reg_18129.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_493_V_read627_phi_phi_fu_30268_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_493_V_read627_phi_phi_fu_30268_p4 = ap_phi_mux_data_493_V_read627_rewind_phi_fu_18147_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_493_V_read627_phi_phi_fu_30268_p4 = data_493_V_read.read();
    } else {
        ap_phi_mux_data_493_V_read627_phi_phi_fu_30268_p4 = ap_phi_reg_pp0_iter0_data_493_V_read627_phi_reg_30264.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_493_V_read627_rewind_phi_fu_18147_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_493_V_read627_rewind_phi_fu_18147_p6 = data_493_V_read627_phi_reg_30264.read();
    } else {
        ap_phi_mux_data_493_V_read627_rewind_phi_fu_18147_p6 = data_493_V_read627_rewind_reg_18143.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_494_V_read628_phi_phi_fu_30281_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_494_V_read628_phi_phi_fu_30281_p4 = ap_phi_mux_data_494_V_read628_rewind_phi_fu_18161_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_494_V_read628_phi_phi_fu_30281_p4 = data_494_V_read.read();
    } else {
        ap_phi_mux_data_494_V_read628_phi_phi_fu_30281_p4 = ap_phi_reg_pp0_iter0_data_494_V_read628_phi_reg_30277.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_494_V_read628_rewind_phi_fu_18161_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_494_V_read628_rewind_phi_fu_18161_p6 = data_494_V_read628_phi_reg_30277.read();
    } else {
        ap_phi_mux_data_494_V_read628_rewind_phi_fu_18161_p6 = data_494_V_read628_rewind_reg_18157.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_495_V_read629_phi_phi_fu_30294_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_495_V_read629_phi_phi_fu_30294_p4 = ap_phi_mux_data_495_V_read629_rewind_phi_fu_18175_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_495_V_read629_phi_phi_fu_30294_p4 = data_495_V_read.read();
    } else {
        ap_phi_mux_data_495_V_read629_phi_phi_fu_30294_p4 = ap_phi_reg_pp0_iter0_data_495_V_read629_phi_reg_30290.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_495_V_read629_rewind_phi_fu_18175_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_495_V_read629_rewind_phi_fu_18175_p6 = data_495_V_read629_phi_reg_30290.read();
    } else {
        ap_phi_mux_data_495_V_read629_rewind_phi_fu_18175_p6 = data_495_V_read629_rewind_reg_18171.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_496_V_read630_phi_phi_fu_30307_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_496_V_read630_phi_phi_fu_30307_p4 = ap_phi_mux_data_496_V_read630_rewind_phi_fu_18189_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_496_V_read630_phi_phi_fu_30307_p4 = data_496_V_read.read();
    } else {
        ap_phi_mux_data_496_V_read630_phi_phi_fu_30307_p4 = ap_phi_reg_pp0_iter0_data_496_V_read630_phi_reg_30303.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_496_V_read630_rewind_phi_fu_18189_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_496_V_read630_rewind_phi_fu_18189_p6 = data_496_V_read630_phi_reg_30303.read();
    } else {
        ap_phi_mux_data_496_V_read630_rewind_phi_fu_18189_p6 = data_496_V_read630_rewind_reg_18185.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_497_V_read631_phi_phi_fu_30320_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_497_V_read631_phi_phi_fu_30320_p4 = ap_phi_mux_data_497_V_read631_rewind_phi_fu_18203_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_497_V_read631_phi_phi_fu_30320_p4 = data_497_V_read.read();
    } else {
        ap_phi_mux_data_497_V_read631_phi_phi_fu_30320_p4 = ap_phi_reg_pp0_iter0_data_497_V_read631_phi_reg_30316.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_497_V_read631_rewind_phi_fu_18203_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_497_V_read631_rewind_phi_fu_18203_p6 = data_497_V_read631_phi_reg_30316.read();
    } else {
        ap_phi_mux_data_497_V_read631_rewind_phi_fu_18203_p6 = data_497_V_read631_rewind_reg_18199.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_498_V_read632_phi_phi_fu_30333_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_498_V_read632_phi_phi_fu_30333_p4 = ap_phi_mux_data_498_V_read632_rewind_phi_fu_18217_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_498_V_read632_phi_phi_fu_30333_p4 = data_498_V_read.read();
    } else {
        ap_phi_mux_data_498_V_read632_phi_phi_fu_30333_p4 = ap_phi_reg_pp0_iter0_data_498_V_read632_phi_reg_30329.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_498_V_read632_rewind_phi_fu_18217_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_498_V_read632_rewind_phi_fu_18217_p6 = data_498_V_read632_phi_reg_30329.read();
    } else {
        ap_phi_mux_data_498_V_read632_rewind_phi_fu_18217_p6 = data_498_V_read632_rewind_reg_18213.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_499_V_read633_phi_phi_fu_30346_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_499_V_read633_phi_phi_fu_30346_p4 = ap_phi_mux_data_499_V_read633_rewind_phi_fu_18231_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_499_V_read633_phi_phi_fu_30346_p4 = data_499_V_read.read();
    } else {
        ap_phi_mux_data_499_V_read633_phi_phi_fu_30346_p4 = ap_phi_reg_pp0_iter0_data_499_V_read633_phi_reg_30342.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_499_V_read633_rewind_phi_fu_18231_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_499_V_read633_rewind_phi_fu_18231_p6 = data_499_V_read633_phi_reg_30342.read();
    } else {
        ap_phi_mux_data_499_V_read633_rewind_phi_fu_18231_p6 = data_499_V_read633_rewind_reg_18227.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_49_V_read183_phi_phi_fu_24496_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_49_V_read183_phi_phi_fu_24496_p4 = ap_phi_mux_data_49_V_read183_rewind_phi_fu_11931_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_49_V_read183_phi_phi_fu_24496_p4 = data_49_V_read.read();
    } else {
        ap_phi_mux_data_49_V_read183_phi_phi_fu_24496_p4 = ap_phi_reg_pp0_iter0_data_49_V_read183_phi_reg_24492.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_49_V_read183_rewind_phi_fu_11931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_49_V_read183_rewind_phi_fu_11931_p6 = data_49_V_read183_phi_reg_24492.read();
    } else {
        ap_phi_mux_data_49_V_read183_rewind_phi_fu_11931_p6 = data_49_V_read183_rewind_reg_11927.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_4_V_read138_phi_phi_fu_23911_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_4_V_read138_phi_phi_fu_23911_p4 = ap_phi_mux_data_4_V_read138_rewind_phi_fu_11301_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_4_V_read138_phi_phi_fu_23911_p4 = data_4_V_read.read();
    } else {
        ap_phi_mux_data_4_V_read138_phi_phi_fu_23911_p4 = ap_phi_reg_pp0_iter0_data_4_V_read138_phi_reg_23907.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_4_V_read138_rewind_phi_fu_11301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_4_V_read138_rewind_phi_fu_11301_p6 = data_4_V_read138_phi_reg_23907.read();
    } else {
        ap_phi_mux_data_4_V_read138_rewind_phi_fu_11301_p6 = data_4_V_read138_rewind_reg_11297.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_500_V_read634_phi_phi_fu_30359_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_500_V_read634_phi_phi_fu_30359_p4 = ap_phi_mux_data_500_V_read634_rewind_phi_fu_18245_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_500_V_read634_phi_phi_fu_30359_p4 = data_500_V_read.read();
    } else {
        ap_phi_mux_data_500_V_read634_phi_phi_fu_30359_p4 = ap_phi_reg_pp0_iter0_data_500_V_read634_phi_reg_30355.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_500_V_read634_rewind_phi_fu_18245_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_500_V_read634_rewind_phi_fu_18245_p6 = data_500_V_read634_phi_reg_30355.read();
    } else {
        ap_phi_mux_data_500_V_read634_rewind_phi_fu_18245_p6 = data_500_V_read634_rewind_reg_18241.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_501_V_read635_phi_phi_fu_30372_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_501_V_read635_phi_phi_fu_30372_p4 = ap_phi_mux_data_501_V_read635_rewind_phi_fu_18259_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_501_V_read635_phi_phi_fu_30372_p4 = data_501_V_read.read();
    } else {
        ap_phi_mux_data_501_V_read635_phi_phi_fu_30372_p4 = ap_phi_reg_pp0_iter0_data_501_V_read635_phi_reg_30368.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_501_V_read635_rewind_phi_fu_18259_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_501_V_read635_rewind_phi_fu_18259_p6 = data_501_V_read635_phi_reg_30368.read();
    } else {
        ap_phi_mux_data_501_V_read635_rewind_phi_fu_18259_p6 = data_501_V_read635_rewind_reg_18255.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_502_V_read636_phi_phi_fu_30385_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_502_V_read636_phi_phi_fu_30385_p4 = ap_phi_mux_data_502_V_read636_rewind_phi_fu_18273_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_502_V_read636_phi_phi_fu_30385_p4 = data_502_V_read.read();
    } else {
        ap_phi_mux_data_502_V_read636_phi_phi_fu_30385_p4 = ap_phi_reg_pp0_iter0_data_502_V_read636_phi_reg_30381.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_502_V_read636_rewind_phi_fu_18273_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_502_V_read636_rewind_phi_fu_18273_p6 = data_502_V_read636_phi_reg_30381.read();
    } else {
        ap_phi_mux_data_502_V_read636_rewind_phi_fu_18273_p6 = data_502_V_read636_rewind_reg_18269.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_503_V_read637_phi_phi_fu_30398_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_503_V_read637_phi_phi_fu_30398_p4 = ap_phi_mux_data_503_V_read637_rewind_phi_fu_18287_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_503_V_read637_phi_phi_fu_30398_p4 = data_503_V_read.read();
    } else {
        ap_phi_mux_data_503_V_read637_phi_phi_fu_30398_p4 = ap_phi_reg_pp0_iter0_data_503_V_read637_phi_reg_30394.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_503_V_read637_rewind_phi_fu_18287_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_503_V_read637_rewind_phi_fu_18287_p6 = data_503_V_read637_phi_reg_30394.read();
    } else {
        ap_phi_mux_data_503_V_read637_rewind_phi_fu_18287_p6 = data_503_V_read637_rewind_reg_18283.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_504_V_read638_phi_phi_fu_30411_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_504_V_read638_phi_phi_fu_30411_p4 = ap_phi_mux_data_504_V_read638_rewind_phi_fu_18301_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_504_V_read638_phi_phi_fu_30411_p4 = data_504_V_read.read();
    } else {
        ap_phi_mux_data_504_V_read638_phi_phi_fu_30411_p4 = ap_phi_reg_pp0_iter0_data_504_V_read638_phi_reg_30407.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_504_V_read638_rewind_phi_fu_18301_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_504_V_read638_rewind_phi_fu_18301_p6 = data_504_V_read638_phi_reg_30407.read();
    } else {
        ap_phi_mux_data_504_V_read638_rewind_phi_fu_18301_p6 = data_504_V_read638_rewind_reg_18297.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_505_V_read639_phi_phi_fu_30424_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_505_V_read639_phi_phi_fu_30424_p4 = ap_phi_mux_data_505_V_read639_rewind_phi_fu_18315_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_505_V_read639_phi_phi_fu_30424_p4 = data_505_V_read.read();
    } else {
        ap_phi_mux_data_505_V_read639_phi_phi_fu_30424_p4 = ap_phi_reg_pp0_iter0_data_505_V_read639_phi_reg_30420.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_505_V_read639_rewind_phi_fu_18315_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_505_V_read639_rewind_phi_fu_18315_p6 = data_505_V_read639_phi_reg_30420.read();
    } else {
        ap_phi_mux_data_505_V_read639_rewind_phi_fu_18315_p6 = data_505_V_read639_rewind_reg_18311.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_506_V_read640_phi_phi_fu_30437_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_506_V_read640_phi_phi_fu_30437_p4 = ap_phi_mux_data_506_V_read640_rewind_phi_fu_18329_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_506_V_read640_phi_phi_fu_30437_p4 = data_506_V_read.read();
    } else {
        ap_phi_mux_data_506_V_read640_phi_phi_fu_30437_p4 = ap_phi_reg_pp0_iter0_data_506_V_read640_phi_reg_30433.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_506_V_read640_rewind_phi_fu_18329_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_506_V_read640_rewind_phi_fu_18329_p6 = data_506_V_read640_phi_reg_30433.read();
    } else {
        ap_phi_mux_data_506_V_read640_rewind_phi_fu_18329_p6 = data_506_V_read640_rewind_reg_18325.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_507_V_read641_phi_phi_fu_30450_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_507_V_read641_phi_phi_fu_30450_p4 = ap_phi_mux_data_507_V_read641_rewind_phi_fu_18343_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_507_V_read641_phi_phi_fu_30450_p4 = data_507_V_read.read();
    } else {
        ap_phi_mux_data_507_V_read641_phi_phi_fu_30450_p4 = ap_phi_reg_pp0_iter0_data_507_V_read641_phi_reg_30446.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_507_V_read641_rewind_phi_fu_18343_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_507_V_read641_rewind_phi_fu_18343_p6 = data_507_V_read641_phi_reg_30446.read();
    } else {
        ap_phi_mux_data_507_V_read641_rewind_phi_fu_18343_p6 = data_507_V_read641_rewind_reg_18339.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_508_V_read642_phi_phi_fu_30463_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_508_V_read642_phi_phi_fu_30463_p4 = ap_phi_mux_data_508_V_read642_rewind_phi_fu_18357_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_508_V_read642_phi_phi_fu_30463_p4 = data_508_V_read.read();
    } else {
        ap_phi_mux_data_508_V_read642_phi_phi_fu_30463_p4 = ap_phi_reg_pp0_iter0_data_508_V_read642_phi_reg_30459.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_508_V_read642_rewind_phi_fu_18357_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_508_V_read642_rewind_phi_fu_18357_p6 = data_508_V_read642_phi_reg_30459.read();
    } else {
        ap_phi_mux_data_508_V_read642_rewind_phi_fu_18357_p6 = data_508_V_read642_rewind_reg_18353.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_509_V_read643_phi_phi_fu_30476_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_509_V_read643_phi_phi_fu_30476_p4 = ap_phi_mux_data_509_V_read643_rewind_phi_fu_18371_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_509_V_read643_phi_phi_fu_30476_p4 = data_509_V_read.read();
    } else {
        ap_phi_mux_data_509_V_read643_phi_phi_fu_30476_p4 = ap_phi_reg_pp0_iter0_data_509_V_read643_phi_reg_30472.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_509_V_read643_rewind_phi_fu_18371_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_509_V_read643_rewind_phi_fu_18371_p6 = data_509_V_read643_phi_reg_30472.read();
    } else {
        ap_phi_mux_data_509_V_read643_rewind_phi_fu_18371_p6 = data_509_V_read643_rewind_reg_18367.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_50_V_read184_phi_phi_fu_24509_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_50_V_read184_phi_phi_fu_24509_p4 = ap_phi_mux_data_50_V_read184_rewind_phi_fu_11945_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_50_V_read184_phi_phi_fu_24509_p4 = data_50_V_read.read();
    } else {
        ap_phi_mux_data_50_V_read184_phi_phi_fu_24509_p4 = ap_phi_reg_pp0_iter0_data_50_V_read184_phi_reg_24505.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_50_V_read184_rewind_phi_fu_11945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_50_V_read184_rewind_phi_fu_11945_p6 = data_50_V_read184_phi_reg_24505.read();
    } else {
        ap_phi_mux_data_50_V_read184_rewind_phi_fu_11945_p6 = data_50_V_read184_rewind_reg_11941.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_510_V_read644_phi_phi_fu_30489_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_510_V_read644_phi_phi_fu_30489_p4 = ap_phi_mux_data_510_V_read644_rewind_phi_fu_18385_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_510_V_read644_phi_phi_fu_30489_p4 = data_510_V_read.read();
    } else {
        ap_phi_mux_data_510_V_read644_phi_phi_fu_30489_p4 = ap_phi_reg_pp0_iter0_data_510_V_read644_phi_reg_30485.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_510_V_read644_rewind_phi_fu_18385_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_510_V_read644_rewind_phi_fu_18385_p6 = data_510_V_read644_phi_reg_30485.read();
    } else {
        ap_phi_mux_data_510_V_read644_rewind_phi_fu_18385_p6 = data_510_V_read644_rewind_reg_18381.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_511_V_read645_phi_phi_fu_30502_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_511_V_read645_phi_phi_fu_30502_p4 = ap_phi_mux_data_511_V_read645_rewind_phi_fu_18399_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_511_V_read645_phi_phi_fu_30502_p4 = data_511_V_read.read();
    } else {
        ap_phi_mux_data_511_V_read645_phi_phi_fu_30502_p4 = ap_phi_reg_pp0_iter0_data_511_V_read645_phi_reg_30498.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_511_V_read645_rewind_phi_fu_18399_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_511_V_read645_rewind_phi_fu_18399_p6 = data_511_V_read645_phi_reg_30498.read();
    } else {
        ap_phi_mux_data_511_V_read645_rewind_phi_fu_18399_p6 = data_511_V_read645_rewind_reg_18395.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_512_V_read646_phi_phi_fu_30515_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_512_V_read646_phi_phi_fu_30515_p4 = ap_phi_mux_data_512_V_read646_rewind_phi_fu_18413_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_512_V_read646_phi_phi_fu_30515_p4 = data_512_V_read.read();
    } else {
        ap_phi_mux_data_512_V_read646_phi_phi_fu_30515_p4 = ap_phi_reg_pp0_iter0_data_512_V_read646_phi_reg_30511.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_512_V_read646_rewind_phi_fu_18413_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_512_V_read646_rewind_phi_fu_18413_p6 = data_512_V_read646_phi_reg_30511.read();
    } else {
        ap_phi_mux_data_512_V_read646_rewind_phi_fu_18413_p6 = data_512_V_read646_rewind_reg_18409.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_513_V_read647_phi_phi_fu_30528_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_513_V_read647_phi_phi_fu_30528_p4 = ap_phi_mux_data_513_V_read647_rewind_phi_fu_18427_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_513_V_read647_phi_phi_fu_30528_p4 = data_513_V_read.read();
    } else {
        ap_phi_mux_data_513_V_read647_phi_phi_fu_30528_p4 = ap_phi_reg_pp0_iter0_data_513_V_read647_phi_reg_30524.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_513_V_read647_rewind_phi_fu_18427_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_513_V_read647_rewind_phi_fu_18427_p6 = data_513_V_read647_phi_reg_30524.read();
    } else {
        ap_phi_mux_data_513_V_read647_rewind_phi_fu_18427_p6 = data_513_V_read647_rewind_reg_18423.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_514_V_read648_phi_phi_fu_30541_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_514_V_read648_phi_phi_fu_30541_p4 = ap_phi_mux_data_514_V_read648_rewind_phi_fu_18441_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_514_V_read648_phi_phi_fu_30541_p4 = data_514_V_read.read();
    } else {
        ap_phi_mux_data_514_V_read648_phi_phi_fu_30541_p4 = ap_phi_reg_pp0_iter0_data_514_V_read648_phi_reg_30537.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_514_V_read648_rewind_phi_fu_18441_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_514_V_read648_rewind_phi_fu_18441_p6 = data_514_V_read648_phi_reg_30537.read();
    } else {
        ap_phi_mux_data_514_V_read648_rewind_phi_fu_18441_p6 = data_514_V_read648_rewind_reg_18437.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_515_V_read649_phi_phi_fu_30554_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_515_V_read649_phi_phi_fu_30554_p4 = ap_phi_mux_data_515_V_read649_rewind_phi_fu_18455_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_515_V_read649_phi_phi_fu_30554_p4 = data_515_V_read.read();
    } else {
        ap_phi_mux_data_515_V_read649_phi_phi_fu_30554_p4 = ap_phi_reg_pp0_iter0_data_515_V_read649_phi_reg_30550.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_515_V_read649_rewind_phi_fu_18455_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_515_V_read649_rewind_phi_fu_18455_p6 = data_515_V_read649_phi_reg_30550.read();
    } else {
        ap_phi_mux_data_515_V_read649_rewind_phi_fu_18455_p6 = data_515_V_read649_rewind_reg_18451.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_516_V_read650_phi_phi_fu_30567_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_516_V_read650_phi_phi_fu_30567_p4 = ap_phi_mux_data_516_V_read650_rewind_phi_fu_18469_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_516_V_read650_phi_phi_fu_30567_p4 = data_516_V_read.read();
    } else {
        ap_phi_mux_data_516_V_read650_phi_phi_fu_30567_p4 = ap_phi_reg_pp0_iter0_data_516_V_read650_phi_reg_30563.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_516_V_read650_rewind_phi_fu_18469_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_516_V_read650_rewind_phi_fu_18469_p6 = data_516_V_read650_phi_reg_30563.read();
    } else {
        ap_phi_mux_data_516_V_read650_rewind_phi_fu_18469_p6 = data_516_V_read650_rewind_reg_18465.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_517_V_read651_phi_phi_fu_30580_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_517_V_read651_phi_phi_fu_30580_p4 = ap_phi_mux_data_517_V_read651_rewind_phi_fu_18483_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_517_V_read651_phi_phi_fu_30580_p4 = data_517_V_read.read();
    } else {
        ap_phi_mux_data_517_V_read651_phi_phi_fu_30580_p4 = ap_phi_reg_pp0_iter0_data_517_V_read651_phi_reg_30576.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_517_V_read651_rewind_phi_fu_18483_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_517_V_read651_rewind_phi_fu_18483_p6 = data_517_V_read651_phi_reg_30576.read();
    } else {
        ap_phi_mux_data_517_V_read651_rewind_phi_fu_18483_p6 = data_517_V_read651_rewind_reg_18479.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_518_V_read652_phi_phi_fu_30593_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_518_V_read652_phi_phi_fu_30593_p4 = ap_phi_mux_data_518_V_read652_rewind_phi_fu_18497_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_518_V_read652_phi_phi_fu_30593_p4 = data_518_V_read.read();
    } else {
        ap_phi_mux_data_518_V_read652_phi_phi_fu_30593_p4 = ap_phi_reg_pp0_iter0_data_518_V_read652_phi_reg_30589.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_518_V_read652_rewind_phi_fu_18497_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_518_V_read652_rewind_phi_fu_18497_p6 = data_518_V_read652_phi_reg_30589.read();
    } else {
        ap_phi_mux_data_518_V_read652_rewind_phi_fu_18497_p6 = data_518_V_read652_rewind_reg_18493.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_519_V_read653_phi_phi_fu_30606_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_519_V_read653_phi_phi_fu_30606_p4 = ap_phi_mux_data_519_V_read653_rewind_phi_fu_18511_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_519_V_read653_phi_phi_fu_30606_p4 = data_519_V_read.read();
    } else {
        ap_phi_mux_data_519_V_read653_phi_phi_fu_30606_p4 = ap_phi_reg_pp0_iter0_data_519_V_read653_phi_reg_30602.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_519_V_read653_rewind_phi_fu_18511_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_519_V_read653_rewind_phi_fu_18511_p6 = data_519_V_read653_phi_reg_30602.read();
    } else {
        ap_phi_mux_data_519_V_read653_rewind_phi_fu_18511_p6 = data_519_V_read653_rewind_reg_18507.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_51_V_read185_phi_phi_fu_24522_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_51_V_read185_phi_phi_fu_24522_p4 = ap_phi_mux_data_51_V_read185_rewind_phi_fu_11959_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_51_V_read185_phi_phi_fu_24522_p4 = data_51_V_read.read();
    } else {
        ap_phi_mux_data_51_V_read185_phi_phi_fu_24522_p4 = ap_phi_reg_pp0_iter0_data_51_V_read185_phi_reg_24518.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_51_V_read185_rewind_phi_fu_11959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_51_V_read185_rewind_phi_fu_11959_p6 = data_51_V_read185_phi_reg_24518.read();
    } else {
        ap_phi_mux_data_51_V_read185_rewind_phi_fu_11959_p6 = data_51_V_read185_rewind_reg_11955.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_520_V_read654_phi_phi_fu_30619_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_520_V_read654_phi_phi_fu_30619_p4 = ap_phi_mux_data_520_V_read654_rewind_phi_fu_18525_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_520_V_read654_phi_phi_fu_30619_p4 = data_520_V_read.read();
    } else {
        ap_phi_mux_data_520_V_read654_phi_phi_fu_30619_p4 = ap_phi_reg_pp0_iter0_data_520_V_read654_phi_reg_30615.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_520_V_read654_rewind_phi_fu_18525_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_520_V_read654_rewind_phi_fu_18525_p6 = data_520_V_read654_phi_reg_30615.read();
    } else {
        ap_phi_mux_data_520_V_read654_rewind_phi_fu_18525_p6 = data_520_V_read654_rewind_reg_18521.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_521_V_read655_phi_phi_fu_30632_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_521_V_read655_phi_phi_fu_30632_p4 = ap_phi_mux_data_521_V_read655_rewind_phi_fu_18539_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_521_V_read655_phi_phi_fu_30632_p4 = data_521_V_read.read();
    } else {
        ap_phi_mux_data_521_V_read655_phi_phi_fu_30632_p4 = ap_phi_reg_pp0_iter0_data_521_V_read655_phi_reg_30628.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_521_V_read655_rewind_phi_fu_18539_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_521_V_read655_rewind_phi_fu_18539_p6 = data_521_V_read655_phi_reg_30628.read();
    } else {
        ap_phi_mux_data_521_V_read655_rewind_phi_fu_18539_p6 = data_521_V_read655_rewind_reg_18535.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_522_V_read656_phi_phi_fu_30645_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_522_V_read656_phi_phi_fu_30645_p4 = ap_phi_mux_data_522_V_read656_rewind_phi_fu_18553_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_522_V_read656_phi_phi_fu_30645_p4 = data_522_V_read.read();
    } else {
        ap_phi_mux_data_522_V_read656_phi_phi_fu_30645_p4 = ap_phi_reg_pp0_iter0_data_522_V_read656_phi_reg_30641.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_522_V_read656_rewind_phi_fu_18553_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_522_V_read656_rewind_phi_fu_18553_p6 = data_522_V_read656_phi_reg_30641.read();
    } else {
        ap_phi_mux_data_522_V_read656_rewind_phi_fu_18553_p6 = data_522_V_read656_rewind_reg_18549.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_523_V_read657_phi_phi_fu_30658_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_523_V_read657_phi_phi_fu_30658_p4 = ap_phi_mux_data_523_V_read657_rewind_phi_fu_18567_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_523_V_read657_phi_phi_fu_30658_p4 = data_523_V_read.read();
    } else {
        ap_phi_mux_data_523_V_read657_phi_phi_fu_30658_p4 = ap_phi_reg_pp0_iter0_data_523_V_read657_phi_reg_30654.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_523_V_read657_rewind_phi_fu_18567_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_523_V_read657_rewind_phi_fu_18567_p6 = data_523_V_read657_phi_reg_30654.read();
    } else {
        ap_phi_mux_data_523_V_read657_rewind_phi_fu_18567_p6 = data_523_V_read657_rewind_reg_18563.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_524_V_read658_phi_phi_fu_30671_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_524_V_read658_phi_phi_fu_30671_p4 = ap_phi_mux_data_524_V_read658_rewind_phi_fu_18581_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_524_V_read658_phi_phi_fu_30671_p4 = data_524_V_read.read();
    } else {
        ap_phi_mux_data_524_V_read658_phi_phi_fu_30671_p4 = ap_phi_reg_pp0_iter0_data_524_V_read658_phi_reg_30667.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_524_V_read658_rewind_phi_fu_18581_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_524_V_read658_rewind_phi_fu_18581_p6 = data_524_V_read658_phi_reg_30667.read();
    } else {
        ap_phi_mux_data_524_V_read658_rewind_phi_fu_18581_p6 = data_524_V_read658_rewind_reg_18577.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_525_V_read659_phi_phi_fu_30684_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_525_V_read659_phi_phi_fu_30684_p4 = ap_phi_mux_data_525_V_read659_rewind_phi_fu_18595_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_525_V_read659_phi_phi_fu_30684_p4 = data_525_V_read.read();
    } else {
        ap_phi_mux_data_525_V_read659_phi_phi_fu_30684_p4 = ap_phi_reg_pp0_iter0_data_525_V_read659_phi_reg_30680.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_525_V_read659_rewind_phi_fu_18595_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_525_V_read659_rewind_phi_fu_18595_p6 = data_525_V_read659_phi_reg_30680.read();
    } else {
        ap_phi_mux_data_525_V_read659_rewind_phi_fu_18595_p6 = data_525_V_read659_rewind_reg_18591.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_526_V_read660_phi_phi_fu_30697_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_526_V_read660_phi_phi_fu_30697_p4 = ap_phi_mux_data_526_V_read660_rewind_phi_fu_18609_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_526_V_read660_phi_phi_fu_30697_p4 = data_526_V_read.read();
    } else {
        ap_phi_mux_data_526_V_read660_phi_phi_fu_30697_p4 = ap_phi_reg_pp0_iter0_data_526_V_read660_phi_reg_30693.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_526_V_read660_rewind_phi_fu_18609_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_526_V_read660_rewind_phi_fu_18609_p6 = data_526_V_read660_phi_reg_30693.read();
    } else {
        ap_phi_mux_data_526_V_read660_rewind_phi_fu_18609_p6 = data_526_V_read660_rewind_reg_18605.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_527_V_read661_phi_phi_fu_30710_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_527_V_read661_phi_phi_fu_30710_p4 = ap_phi_mux_data_527_V_read661_rewind_phi_fu_18623_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_527_V_read661_phi_phi_fu_30710_p4 = data_527_V_read.read();
    } else {
        ap_phi_mux_data_527_V_read661_phi_phi_fu_30710_p4 = ap_phi_reg_pp0_iter0_data_527_V_read661_phi_reg_30706.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_527_V_read661_rewind_phi_fu_18623_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_527_V_read661_rewind_phi_fu_18623_p6 = data_527_V_read661_phi_reg_30706.read();
    } else {
        ap_phi_mux_data_527_V_read661_rewind_phi_fu_18623_p6 = data_527_V_read661_rewind_reg_18619.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_528_V_read662_phi_phi_fu_30723_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_528_V_read662_phi_phi_fu_30723_p4 = ap_phi_mux_data_528_V_read662_rewind_phi_fu_18637_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_528_V_read662_phi_phi_fu_30723_p4 = data_528_V_read.read();
    } else {
        ap_phi_mux_data_528_V_read662_phi_phi_fu_30723_p4 = ap_phi_reg_pp0_iter0_data_528_V_read662_phi_reg_30719.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_528_V_read662_rewind_phi_fu_18637_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_528_V_read662_rewind_phi_fu_18637_p6 = data_528_V_read662_phi_reg_30719.read();
    } else {
        ap_phi_mux_data_528_V_read662_rewind_phi_fu_18637_p6 = data_528_V_read662_rewind_reg_18633.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_529_V_read663_phi_phi_fu_30736_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_529_V_read663_phi_phi_fu_30736_p4 = ap_phi_mux_data_529_V_read663_rewind_phi_fu_18651_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_529_V_read663_phi_phi_fu_30736_p4 = data_529_V_read.read();
    } else {
        ap_phi_mux_data_529_V_read663_phi_phi_fu_30736_p4 = ap_phi_reg_pp0_iter0_data_529_V_read663_phi_reg_30732.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_529_V_read663_rewind_phi_fu_18651_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_529_V_read663_rewind_phi_fu_18651_p6 = data_529_V_read663_phi_reg_30732.read();
    } else {
        ap_phi_mux_data_529_V_read663_rewind_phi_fu_18651_p6 = data_529_V_read663_rewind_reg_18647.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_52_V_read186_phi_phi_fu_24535_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_52_V_read186_phi_phi_fu_24535_p4 = ap_phi_mux_data_52_V_read186_rewind_phi_fu_11973_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_52_V_read186_phi_phi_fu_24535_p4 = data_52_V_read.read();
    } else {
        ap_phi_mux_data_52_V_read186_phi_phi_fu_24535_p4 = ap_phi_reg_pp0_iter0_data_52_V_read186_phi_reg_24531.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_52_V_read186_rewind_phi_fu_11973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_52_V_read186_rewind_phi_fu_11973_p6 = data_52_V_read186_phi_reg_24531.read();
    } else {
        ap_phi_mux_data_52_V_read186_rewind_phi_fu_11973_p6 = data_52_V_read186_rewind_reg_11969.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_530_V_read664_phi_phi_fu_30749_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_530_V_read664_phi_phi_fu_30749_p4 = ap_phi_mux_data_530_V_read664_rewind_phi_fu_18665_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_530_V_read664_phi_phi_fu_30749_p4 = data_530_V_read.read();
    } else {
        ap_phi_mux_data_530_V_read664_phi_phi_fu_30749_p4 = ap_phi_reg_pp0_iter0_data_530_V_read664_phi_reg_30745.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_530_V_read664_rewind_phi_fu_18665_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_530_V_read664_rewind_phi_fu_18665_p6 = data_530_V_read664_phi_reg_30745.read();
    } else {
        ap_phi_mux_data_530_V_read664_rewind_phi_fu_18665_p6 = data_530_V_read664_rewind_reg_18661.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_531_V_read665_phi_phi_fu_30762_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_531_V_read665_phi_phi_fu_30762_p4 = ap_phi_mux_data_531_V_read665_rewind_phi_fu_18679_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_531_V_read665_phi_phi_fu_30762_p4 = data_531_V_read.read();
    } else {
        ap_phi_mux_data_531_V_read665_phi_phi_fu_30762_p4 = ap_phi_reg_pp0_iter0_data_531_V_read665_phi_reg_30758.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_531_V_read665_rewind_phi_fu_18679_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_531_V_read665_rewind_phi_fu_18679_p6 = data_531_V_read665_phi_reg_30758.read();
    } else {
        ap_phi_mux_data_531_V_read665_rewind_phi_fu_18679_p6 = data_531_V_read665_rewind_reg_18675.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_532_V_read666_phi_phi_fu_30775_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_532_V_read666_phi_phi_fu_30775_p4 = ap_phi_mux_data_532_V_read666_rewind_phi_fu_18693_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_532_V_read666_phi_phi_fu_30775_p4 = data_532_V_read.read();
    } else {
        ap_phi_mux_data_532_V_read666_phi_phi_fu_30775_p4 = ap_phi_reg_pp0_iter0_data_532_V_read666_phi_reg_30771.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_532_V_read666_rewind_phi_fu_18693_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_532_V_read666_rewind_phi_fu_18693_p6 = data_532_V_read666_phi_reg_30771.read();
    } else {
        ap_phi_mux_data_532_V_read666_rewind_phi_fu_18693_p6 = data_532_V_read666_rewind_reg_18689.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_533_V_read667_phi_phi_fu_30788_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_533_V_read667_phi_phi_fu_30788_p4 = ap_phi_mux_data_533_V_read667_rewind_phi_fu_18707_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_533_V_read667_phi_phi_fu_30788_p4 = data_533_V_read.read();
    } else {
        ap_phi_mux_data_533_V_read667_phi_phi_fu_30788_p4 = ap_phi_reg_pp0_iter0_data_533_V_read667_phi_reg_30784.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_533_V_read667_rewind_phi_fu_18707_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_533_V_read667_rewind_phi_fu_18707_p6 = data_533_V_read667_phi_reg_30784.read();
    } else {
        ap_phi_mux_data_533_V_read667_rewind_phi_fu_18707_p6 = data_533_V_read667_rewind_reg_18703.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_534_V_read668_phi_phi_fu_30801_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_534_V_read668_phi_phi_fu_30801_p4 = ap_phi_mux_data_534_V_read668_rewind_phi_fu_18721_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_534_V_read668_phi_phi_fu_30801_p4 = data_534_V_read.read();
    } else {
        ap_phi_mux_data_534_V_read668_phi_phi_fu_30801_p4 = ap_phi_reg_pp0_iter0_data_534_V_read668_phi_reg_30797.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_534_V_read668_rewind_phi_fu_18721_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_534_V_read668_rewind_phi_fu_18721_p6 = data_534_V_read668_phi_reg_30797.read();
    } else {
        ap_phi_mux_data_534_V_read668_rewind_phi_fu_18721_p6 = data_534_V_read668_rewind_reg_18717.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_535_V_read669_phi_phi_fu_30814_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_535_V_read669_phi_phi_fu_30814_p4 = ap_phi_mux_data_535_V_read669_rewind_phi_fu_18735_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_535_V_read669_phi_phi_fu_30814_p4 = data_535_V_read.read();
    } else {
        ap_phi_mux_data_535_V_read669_phi_phi_fu_30814_p4 = ap_phi_reg_pp0_iter0_data_535_V_read669_phi_reg_30810.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_535_V_read669_rewind_phi_fu_18735_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_535_V_read669_rewind_phi_fu_18735_p6 = data_535_V_read669_phi_reg_30810.read();
    } else {
        ap_phi_mux_data_535_V_read669_rewind_phi_fu_18735_p6 = data_535_V_read669_rewind_reg_18731.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_536_V_read670_phi_phi_fu_30827_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_536_V_read670_phi_phi_fu_30827_p4 = ap_phi_mux_data_536_V_read670_rewind_phi_fu_18749_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_536_V_read670_phi_phi_fu_30827_p4 = data_536_V_read.read();
    } else {
        ap_phi_mux_data_536_V_read670_phi_phi_fu_30827_p4 = ap_phi_reg_pp0_iter0_data_536_V_read670_phi_reg_30823.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_536_V_read670_rewind_phi_fu_18749_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_536_V_read670_rewind_phi_fu_18749_p6 = data_536_V_read670_phi_reg_30823.read();
    } else {
        ap_phi_mux_data_536_V_read670_rewind_phi_fu_18749_p6 = data_536_V_read670_rewind_reg_18745.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_537_V_read671_phi_phi_fu_30840_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_537_V_read671_phi_phi_fu_30840_p4 = ap_phi_mux_data_537_V_read671_rewind_phi_fu_18763_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_537_V_read671_phi_phi_fu_30840_p4 = data_537_V_read.read();
    } else {
        ap_phi_mux_data_537_V_read671_phi_phi_fu_30840_p4 = ap_phi_reg_pp0_iter0_data_537_V_read671_phi_reg_30836.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_537_V_read671_rewind_phi_fu_18763_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_537_V_read671_rewind_phi_fu_18763_p6 = data_537_V_read671_phi_reg_30836.read();
    } else {
        ap_phi_mux_data_537_V_read671_rewind_phi_fu_18763_p6 = data_537_V_read671_rewind_reg_18759.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_538_V_read672_phi_phi_fu_30853_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_538_V_read672_phi_phi_fu_30853_p4 = ap_phi_mux_data_538_V_read672_rewind_phi_fu_18777_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_538_V_read672_phi_phi_fu_30853_p4 = data_538_V_read.read();
    } else {
        ap_phi_mux_data_538_V_read672_phi_phi_fu_30853_p4 = ap_phi_reg_pp0_iter0_data_538_V_read672_phi_reg_30849.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_538_V_read672_rewind_phi_fu_18777_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_538_V_read672_rewind_phi_fu_18777_p6 = data_538_V_read672_phi_reg_30849.read();
    } else {
        ap_phi_mux_data_538_V_read672_rewind_phi_fu_18777_p6 = data_538_V_read672_rewind_reg_18773.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_539_V_read673_phi_phi_fu_30866_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_539_V_read673_phi_phi_fu_30866_p4 = ap_phi_mux_data_539_V_read673_rewind_phi_fu_18791_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_539_V_read673_phi_phi_fu_30866_p4 = data_539_V_read.read();
    } else {
        ap_phi_mux_data_539_V_read673_phi_phi_fu_30866_p4 = ap_phi_reg_pp0_iter0_data_539_V_read673_phi_reg_30862.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_539_V_read673_rewind_phi_fu_18791_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_539_V_read673_rewind_phi_fu_18791_p6 = data_539_V_read673_phi_reg_30862.read();
    } else {
        ap_phi_mux_data_539_V_read673_rewind_phi_fu_18791_p6 = data_539_V_read673_rewind_reg_18787.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_53_V_read187_phi_phi_fu_24548_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_53_V_read187_phi_phi_fu_24548_p4 = ap_phi_mux_data_53_V_read187_rewind_phi_fu_11987_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_53_V_read187_phi_phi_fu_24548_p4 = data_53_V_read.read();
    } else {
        ap_phi_mux_data_53_V_read187_phi_phi_fu_24548_p4 = ap_phi_reg_pp0_iter0_data_53_V_read187_phi_reg_24544.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_53_V_read187_rewind_phi_fu_11987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_53_V_read187_rewind_phi_fu_11987_p6 = data_53_V_read187_phi_reg_24544.read();
    } else {
        ap_phi_mux_data_53_V_read187_rewind_phi_fu_11987_p6 = data_53_V_read187_rewind_reg_11983.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_540_V_read674_phi_phi_fu_30879_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_540_V_read674_phi_phi_fu_30879_p4 = ap_phi_mux_data_540_V_read674_rewind_phi_fu_18805_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_540_V_read674_phi_phi_fu_30879_p4 = data_540_V_read.read();
    } else {
        ap_phi_mux_data_540_V_read674_phi_phi_fu_30879_p4 = ap_phi_reg_pp0_iter0_data_540_V_read674_phi_reg_30875.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_540_V_read674_rewind_phi_fu_18805_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_540_V_read674_rewind_phi_fu_18805_p6 = data_540_V_read674_phi_reg_30875.read();
    } else {
        ap_phi_mux_data_540_V_read674_rewind_phi_fu_18805_p6 = data_540_V_read674_rewind_reg_18801.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_541_V_read675_phi_phi_fu_30892_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_541_V_read675_phi_phi_fu_30892_p4 = ap_phi_mux_data_541_V_read675_rewind_phi_fu_18819_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_541_V_read675_phi_phi_fu_30892_p4 = data_541_V_read.read();
    } else {
        ap_phi_mux_data_541_V_read675_phi_phi_fu_30892_p4 = ap_phi_reg_pp0_iter0_data_541_V_read675_phi_reg_30888.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_541_V_read675_rewind_phi_fu_18819_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_541_V_read675_rewind_phi_fu_18819_p6 = data_541_V_read675_phi_reg_30888.read();
    } else {
        ap_phi_mux_data_541_V_read675_rewind_phi_fu_18819_p6 = data_541_V_read675_rewind_reg_18815.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_542_V_read676_phi_phi_fu_30905_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_542_V_read676_phi_phi_fu_30905_p4 = ap_phi_mux_data_542_V_read676_rewind_phi_fu_18833_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_542_V_read676_phi_phi_fu_30905_p4 = data_542_V_read.read();
    } else {
        ap_phi_mux_data_542_V_read676_phi_phi_fu_30905_p4 = ap_phi_reg_pp0_iter0_data_542_V_read676_phi_reg_30901.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_542_V_read676_rewind_phi_fu_18833_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_542_V_read676_rewind_phi_fu_18833_p6 = data_542_V_read676_phi_reg_30901.read();
    } else {
        ap_phi_mux_data_542_V_read676_rewind_phi_fu_18833_p6 = data_542_V_read676_rewind_reg_18829.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_543_V_read677_phi_phi_fu_30918_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_543_V_read677_phi_phi_fu_30918_p4 = ap_phi_mux_data_543_V_read677_rewind_phi_fu_18847_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_543_V_read677_phi_phi_fu_30918_p4 = data_543_V_read.read();
    } else {
        ap_phi_mux_data_543_V_read677_phi_phi_fu_30918_p4 = ap_phi_reg_pp0_iter0_data_543_V_read677_phi_reg_30914.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_543_V_read677_rewind_phi_fu_18847_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_543_V_read677_rewind_phi_fu_18847_p6 = data_543_V_read677_phi_reg_30914.read();
    } else {
        ap_phi_mux_data_543_V_read677_rewind_phi_fu_18847_p6 = data_543_V_read677_rewind_reg_18843.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_544_V_read678_phi_phi_fu_30931_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_544_V_read678_phi_phi_fu_30931_p4 = ap_phi_mux_data_544_V_read678_rewind_phi_fu_18861_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_544_V_read678_phi_phi_fu_30931_p4 = data_544_V_read.read();
    } else {
        ap_phi_mux_data_544_V_read678_phi_phi_fu_30931_p4 = ap_phi_reg_pp0_iter0_data_544_V_read678_phi_reg_30927.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_544_V_read678_rewind_phi_fu_18861_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_544_V_read678_rewind_phi_fu_18861_p6 = data_544_V_read678_phi_reg_30927.read();
    } else {
        ap_phi_mux_data_544_V_read678_rewind_phi_fu_18861_p6 = data_544_V_read678_rewind_reg_18857.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_545_V_read679_phi_phi_fu_30944_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_545_V_read679_phi_phi_fu_30944_p4 = ap_phi_mux_data_545_V_read679_rewind_phi_fu_18875_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_545_V_read679_phi_phi_fu_30944_p4 = data_545_V_read.read();
    } else {
        ap_phi_mux_data_545_V_read679_phi_phi_fu_30944_p4 = ap_phi_reg_pp0_iter0_data_545_V_read679_phi_reg_30940.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_545_V_read679_rewind_phi_fu_18875_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_545_V_read679_rewind_phi_fu_18875_p6 = data_545_V_read679_phi_reg_30940.read();
    } else {
        ap_phi_mux_data_545_V_read679_rewind_phi_fu_18875_p6 = data_545_V_read679_rewind_reg_18871.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_546_V_read680_phi_phi_fu_30957_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_546_V_read680_phi_phi_fu_30957_p4 = ap_phi_mux_data_546_V_read680_rewind_phi_fu_18889_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_546_V_read680_phi_phi_fu_30957_p4 = data_546_V_read.read();
    } else {
        ap_phi_mux_data_546_V_read680_phi_phi_fu_30957_p4 = ap_phi_reg_pp0_iter0_data_546_V_read680_phi_reg_30953.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_546_V_read680_rewind_phi_fu_18889_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_546_V_read680_rewind_phi_fu_18889_p6 = data_546_V_read680_phi_reg_30953.read();
    } else {
        ap_phi_mux_data_546_V_read680_rewind_phi_fu_18889_p6 = data_546_V_read680_rewind_reg_18885.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_547_V_read681_phi_phi_fu_30970_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_547_V_read681_phi_phi_fu_30970_p4 = ap_phi_mux_data_547_V_read681_rewind_phi_fu_18903_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_547_V_read681_phi_phi_fu_30970_p4 = data_547_V_read.read();
    } else {
        ap_phi_mux_data_547_V_read681_phi_phi_fu_30970_p4 = ap_phi_reg_pp0_iter0_data_547_V_read681_phi_reg_30966.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_547_V_read681_rewind_phi_fu_18903_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_547_V_read681_rewind_phi_fu_18903_p6 = data_547_V_read681_phi_reg_30966.read();
    } else {
        ap_phi_mux_data_547_V_read681_rewind_phi_fu_18903_p6 = data_547_V_read681_rewind_reg_18899.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_548_V_read682_phi_phi_fu_30983_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_548_V_read682_phi_phi_fu_30983_p4 = ap_phi_mux_data_548_V_read682_rewind_phi_fu_18917_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_548_V_read682_phi_phi_fu_30983_p4 = data_548_V_read.read();
    } else {
        ap_phi_mux_data_548_V_read682_phi_phi_fu_30983_p4 = ap_phi_reg_pp0_iter0_data_548_V_read682_phi_reg_30979.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_548_V_read682_rewind_phi_fu_18917_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_548_V_read682_rewind_phi_fu_18917_p6 = data_548_V_read682_phi_reg_30979.read();
    } else {
        ap_phi_mux_data_548_V_read682_rewind_phi_fu_18917_p6 = data_548_V_read682_rewind_reg_18913.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_549_V_read683_phi_phi_fu_30996_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_549_V_read683_phi_phi_fu_30996_p4 = ap_phi_mux_data_549_V_read683_rewind_phi_fu_18931_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_549_V_read683_phi_phi_fu_30996_p4 = data_549_V_read.read();
    } else {
        ap_phi_mux_data_549_V_read683_phi_phi_fu_30996_p4 = ap_phi_reg_pp0_iter0_data_549_V_read683_phi_reg_30992.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_549_V_read683_rewind_phi_fu_18931_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_549_V_read683_rewind_phi_fu_18931_p6 = data_549_V_read683_phi_reg_30992.read();
    } else {
        ap_phi_mux_data_549_V_read683_rewind_phi_fu_18931_p6 = data_549_V_read683_rewind_reg_18927.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_54_V_read188_phi_phi_fu_24561_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_54_V_read188_phi_phi_fu_24561_p4 = ap_phi_mux_data_54_V_read188_rewind_phi_fu_12001_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_54_V_read188_phi_phi_fu_24561_p4 = data_54_V_read.read();
    } else {
        ap_phi_mux_data_54_V_read188_phi_phi_fu_24561_p4 = ap_phi_reg_pp0_iter0_data_54_V_read188_phi_reg_24557.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_54_V_read188_rewind_phi_fu_12001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_54_V_read188_rewind_phi_fu_12001_p6 = data_54_V_read188_phi_reg_24557.read();
    } else {
        ap_phi_mux_data_54_V_read188_rewind_phi_fu_12001_p6 = data_54_V_read188_rewind_reg_11997.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_550_V_read684_phi_phi_fu_31009_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_550_V_read684_phi_phi_fu_31009_p4 = ap_phi_mux_data_550_V_read684_rewind_phi_fu_18945_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_550_V_read684_phi_phi_fu_31009_p4 = data_550_V_read.read();
    } else {
        ap_phi_mux_data_550_V_read684_phi_phi_fu_31009_p4 = ap_phi_reg_pp0_iter0_data_550_V_read684_phi_reg_31005.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_550_V_read684_rewind_phi_fu_18945_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_550_V_read684_rewind_phi_fu_18945_p6 = data_550_V_read684_phi_reg_31005.read();
    } else {
        ap_phi_mux_data_550_V_read684_rewind_phi_fu_18945_p6 = data_550_V_read684_rewind_reg_18941.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_551_V_read685_phi_phi_fu_31022_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_551_V_read685_phi_phi_fu_31022_p4 = ap_phi_mux_data_551_V_read685_rewind_phi_fu_18959_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_551_V_read685_phi_phi_fu_31022_p4 = data_551_V_read.read();
    } else {
        ap_phi_mux_data_551_V_read685_phi_phi_fu_31022_p4 = ap_phi_reg_pp0_iter0_data_551_V_read685_phi_reg_31018.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_551_V_read685_rewind_phi_fu_18959_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_551_V_read685_rewind_phi_fu_18959_p6 = data_551_V_read685_phi_reg_31018.read();
    } else {
        ap_phi_mux_data_551_V_read685_rewind_phi_fu_18959_p6 = data_551_V_read685_rewind_reg_18955.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_552_V_read686_phi_phi_fu_31035_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_552_V_read686_phi_phi_fu_31035_p4 = ap_phi_mux_data_552_V_read686_rewind_phi_fu_18973_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_552_V_read686_phi_phi_fu_31035_p4 = data_552_V_read.read();
    } else {
        ap_phi_mux_data_552_V_read686_phi_phi_fu_31035_p4 = ap_phi_reg_pp0_iter0_data_552_V_read686_phi_reg_31031.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_552_V_read686_rewind_phi_fu_18973_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_552_V_read686_rewind_phi_fu_18973_p6 = data_552_V_read686_phi_reg_31031.read();
    } else {
        ap_phi_mux_data_552_V_read686_rewind_phi_fu_18973_p6 = data_552_V_read686_rewind_reg_18969.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_553_V_read687_phi_phi_fu_31048_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_553_V_read687_phi_phi_fu_31048_p4 = ap_phi_mux_data_553_V_read687_rewind_phi_fu_18987_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_553_V_read687_phi_phi_fu_31048_p4 = data_553_V_read.read();
    } else {
        ap_phi_mux_data_553_V_read687_phi_phi_fu_31048_p4 = ap_phi_reg_pp0_iter0_data_553_V_read687_phi_reg_31044.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_553_V_read687_rewind_phi_fu_18987_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_553_V_read687_rewind_phi_fu_18987_p6 = data_553_V_read687_phi_reg_31044.read();
    } else {
        ap_phi_mux_data_553_V_read687_rewind_phi_fu_18987_p6 = data_553_V_read687_rewind_reg_18983.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_554_V_read688_phi_phi_fu_31061_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_554_V_read688_phi_phi_fu_31061_p4 = ap_phi_mux_data_554_V_read688_rewind_phi_fu_19001_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_554_V_read688_phi_phi_fu_31061_p4 = data_554_V_read.read();
    } else {
        ap_phi_mux_data_554_V_read688_phi_phi_fu_31061_p4 = ap_phi_reg_pp0_iter0_data_554_V_read688_phi_reg_31057.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_554_V_read688_rewind_phi_fu_19001_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_554_V_read688_rewind_phi_fu_19001_p6 = data_554_V_read688_phi_reg_31057.read();
    } else {
        ap_phi_mux_data_554_V_read688_rewind_phi_fu_19001_p6 = data_554_V_read688_rewind_reg_18997.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_555_V_read689_phi_phi_fu_31074_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_555_V_read689_phi_phi_fu_31074_p4 = ap_phi_mux_data_555_V_read689_rewind_phi_fu_19015_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_555_V_read689_phi_phi_fu_31074_p4 = data_555_V_read.read();
    } else {
        ap_phi_mux_data_555_V_read689_phi_phi_fu_31074_p4 = ap_phi_reg_pp0_iter0_data_555_V_read689_phi_reg_31070.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_555_V_read689_rewind_phi_fu_19015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_555_V_read689_rewind_phi_fu_19015_p6 = data_555_V_read689_phi_reg_31070.read();
    } else {
        ap_phi_mux_data_555_V_read689_rewind_phi_fu_19015_p6 = data_555_V_read689_rewind_reg_19011.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_556_V_read690_phi_phi_fu_31087_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_556_V_read690_phi_phi_fu_31087_p4 = ap_phi_mux_data_556_V_read690_rewind_phi_fu_19029_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_556_V_read690_phi_phi_fu_31087_p4 = data_556_V_read.read();
    } else {
        ap_phi_mux_data_556_V_read690_phi_phi_fu_31087_p4 = ap_phi_reg_pp0_iter0_data_556_V_read690_phi_reg_31083.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_556_V_read690_rewind_phi_fu_19029_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_556_V_read690_rewind_phi_fu_19029_p6 = data_556_V_read690_phi_reg_31083.read();
    } else {
        ap_phi_mux_data_556_V_read690_rewind_phi_fu_19029_p6 = data_556_V_read690_rewind_reg_19025.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_557_V_read691_phi_phi_fu_31100_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_557_V_read691_phi_phi_fu_31100_p4 = ap_phi_mux_data_557_V_read691_rewind_phi_fu_19043_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_557_V_read691_phi_phi_fu_31100_p4 = data_557_V_read.read();
    } else {
        ap_phi_mux_data_557_V_read691_phi_phi_fu_31100_p4 = ap_phi_reg_pp0_iter0_data_557_V_read691_phi_reg_31096.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_557_V_read691_rewind_phi_fu_19043_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_557_V_read691_rewind_phi_fu_19043_p6 = data_557_V_read691_phi_reg_31096.read();
    } else {
        ap_phi_mux_data_557_V_read691_rewind_phi_fu_19043_p6 = data_557_V_read691_rewind_reg_19039.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_558_V_read692_phi_phi_fu_31113_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_558_V_read692_phi_phi_fu_31113_p4 = ap_phi_mux_data_558_V_read692_rewind_phi_fu_19057_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_558_V_read692_phi_phi_fu_31113_p4 = data_558_V_read.read();
    } else {
        ap_phi_mux_data_558_V_read692_phi_phi_fu_31113_p4 = ap_phi_reg_pp0_iter0_data_558_V_read692_phi_reg_31109.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_558_V_read692_rewind_phi_fu_19057_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_558_V_read692_rewind_phi_fu_19057_p6 = data_558_V_read692_phi_reg_31109.read();
    } else {
        ap_phi_mux_data_558_V_read692_rewind_phi_fu_19057_p6 = data_558_V_read692_rewind_reg_19053.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_559_V_read693_phi_phi_fu_31126_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_559_V_read693_phi_phi_fu_31126_p4 = ap_phi_mux_data_559_V_read693_rewind_phi_fu_19071_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_559_V_read693_phi_phi_fu_31126_p4 = data_559_V_read.read();
    } else {
        ap_phi_mux_data_559_V_read693_phi_phi_fu_31126_p4 = ap_phi_reg_pp0_iter0_data_559_V_read693_phi_reg_31122.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_559_V_read693_rewind_phi_fu_19071_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_559_V_read693_rewind_phi_fu_19071_p6 = data_559_V_read693_phi_reg_31122.read();
    } else {
        ap_phi_mux_data_559_V_read693_rewind_phi_fu_19071_p6 = data_559_V_read693_rewind_reg_19067.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_55_V_read189_phi_phi_fu_24574_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_55_V_read189_phi_phi_fu_24574_p4 = ap_phi_mux_data_55_V_read189_rewind_phi_fu_12015_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_55_V_read189_phi_phi_fu_24574_p4 = data_55_V_read.read();
    } else {
        ap_phi_mux_data_55_V_read189_phi_phi_fu_24574_p4 = ap_phi_reg_pp0_iter0_data_55_V_read189_phi_reg_24570.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_55_V_read189_rewind_phi_fu_12015_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_55_V_read189_rewind_phi_fu_12015_p6 = data_55_V_read189_phi_reg_24570.read();
    } else {
        ap_phi_mux_data_55_V_read189_rewind_phi_fu_12015_p6 = data_55_V_read189_rewind_reg_12011.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_560_V_read694_phi_phi_fu_31139_p4() {
    if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_0)) {
        ap_phi_mux_data_560_V_read694_phi_phi_fu_31139_p4 = ap_phi_mux_data_560_V_read694_rewind_phi_fu_19085_p6.read();
    } else if (esl_seteq<1,1,1>(ap_phi_mux_do_init_phi_fu_11229_p6.read(), ap_const_lv1_1)) {
        ap_phi_mux_data_560_V_read694_phi_phi_fu_31139_p4 = data_560_V_read.read();
    } else {
        ap_phi_mux_data_560_V_read694_phi_phi_fu_31139_p4 = ap_phi_reg_pp0_iter0_data_560_V_read694_phi_reg_31135.read();
    }
}

void dense_wrapper_ap_fixed_ap_fixed_16_6_5_3_0_config4_s::thread_ap_phi_mux_data_560_V_read694_rewind_phi_fu_19085_p6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln64_reg_78480.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_data_560_V_read694_rewind_phi_fu_19085_p6 = data_560_V_read694_phi_reg_31135.read();
    } else {
        ap_phi_mux_data_560_V_read694_rewind_phi_fu_19085_p6 = data_560_V_read694_rewind_reg_19081.read();
    }
}

}

