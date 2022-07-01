# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3094 \
    name out_local_V_data_0_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_local_V_data_0_V \
    op interface \
    ports { out_local_V_data_0_V_dout { I 16 vector } out_local_V_data_0_V_empty_n { I 1 bit } out_local_V_data_0_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3095 \
    name out_local_V_data_1_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_local_V_data_1_V \
    op interface \
    ports { out_local_V_data_1_V_dout { I 16 vector } out_local_V_data_1_V_empty_n { I 1 bit } out_local_V_data_1_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3096 \
    name out_local_V_data_2_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_local_V_data_2_V \
    op interface \
    ports { out_local_V_data_2_V_dout { I 16 vector } out_local_V_data_2_V_empty_n { I 1 bit } out_local_V_data_2_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3097 \
    name out_local_V_data_3_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_local_V_data_3_V \
    op interface \
    ports { out_local_V_data_3_V_dout { I 16 vector } out_local_V_data_3_V_empty_n { I 1 bit } out_local_V_data_3_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3098 \
    name out_local_V_data_4_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_local_V_data_4_V \
    op interface \
    ports { out_local_V_data_4_V_dout { I 16 vector } out_local_V_data_4_V_empty_n { I 1 bit } out_local_V_data_4_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3099 \
    name out_local_V_data_5_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_out_local_V_data_5_V \
    op interface \
    ports { out_local_V_data_5_V_dout { I 16 vector } out_local_V_data_5_V_empty_n { I 1 bit } out_local_V_data_5_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3100 \
    name tmp_data_V_0 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tmp_data_V_0 \
    op interface \
    ports { tmp_data_V_0 { O 16 vector } tmp_data_V_0_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3101 \
    name tmp_data_V_1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tmp_data_V_1 \
    op interface \
    ports { tmp_data_V_1 { O 16 vector } tmp_data_V_1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3102 \
    name tmp_data_V_2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tmp_data_V_2 \
    op interface \
    ports { tmp_data_V_2 { O 16 vector } tmp_data_V_2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3103 \
    name tmp_data_V_3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tmp_data_V_3 \
    op interface \
    ports { tmp_data_V_3 { O 16 vector } tmp_data_V_3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3104 \
    name tmp_data_V_4 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tmp_data_V_4 \
    op interface \
    ports { tmp_data_V_4 { O 16 vector } tmp_data_V_4_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3105 \
    name tmp_data_V_5 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tmp_data_V_5 \
    op interface \
    ports { tmp_data_V_5 { O 16 vector } tmp_data_V_5_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


