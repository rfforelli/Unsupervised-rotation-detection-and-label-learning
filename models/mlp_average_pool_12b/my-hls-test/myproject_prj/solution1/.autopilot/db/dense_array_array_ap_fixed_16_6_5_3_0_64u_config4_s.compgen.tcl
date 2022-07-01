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
    id 1888 \
    name data_stream_V_data_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_stream_V_data_V \
    op interface \
    ports { data_stream_V_data_V_dout { I 16 vector } data_stream_V_data_V_empty_n { I 1 bit } data_stream_V_data_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1889 \
    name res_stream_V_data_0_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_0_V \
    op interface \
    ports { res_stream_V_data_0_V_din { O 16 vector } res_stream_V_data_0_V_full_n { I 1 bit } res_stream_V_data_0_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1890 \
    name res_stream_V_data_1_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_1_V \
    op interface \
    ports { res_stream_V_data_1_V_din { O 16 vector } res_stream_V_data_1_V_full_n { I 1 bit } res_stream_V_data_1_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1891 \
    name res_stream_V_data_2_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_2_V \
    op interface \
    ports { res_stream_V_data_2_V_din { O 16 vector } res_stream_V_data_2_V_full_n { I 1 bit } res_stream_V_data_2_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1892 \
    name res_stream_V_data_3_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_3_V \
    op interface \
    ports { res_stream_V_data_3_V_din { O 16 vector } res_stream_V_data_3_V_full_n { I 1 bit } res_stream_V_data_3_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1893 \
    name res_stream_V_data_4_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_4_V \
    op interface \
    ports { res_stream_V_data_4_V_din { O 16 vector } res_stream_V_data_4_V_full_n { I 1 bit } res_stream_V_data_4_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1894 \
    name res_stream_V_data_5_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_5_V \
    op interface \
    ports { res_stream_V_data_5_V_din { O 16 vector } res_stream_V_data_5_V_full_n { I 1 bit } res_stream_V_data_5_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1895 \
    name res_stream_V_data_6_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_6_V \
    op interface \
    ports { res_stream_V_data_6_V_din { O 16 vector } res_stream_V_data_6_V_full_n { I 1 bit } res_stream_V_data_6_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1896 \
    name res_stream_V_data_7_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_7_V \
    op interface \
    ports { res_stream_V_data_7_V_din { O 16 vector } res_stream_V_data_7_V_full_n { I 1 bit } res_stream_V_data_7_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1897 \
    name res_stream_V_data_8_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_8_V \
    op interface \
    ports { res_stream_V_data_8_V_din { O 16 vector } res_stream_V_data_8_V_full_n { I 1 bit } res_stream_V_data_8_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1898 \
    name res_stream_V_data_9_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_9_V \
    op interface \
    ports { res_stream_V_data_9_V_din { O 16 vector } res_stream_V_data_9_V_full_n { I 1 bit } res_stream_V_data_9_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1899 \
    name res_stream_V_data_10_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_10_V \
    op interface \
    ports { res_stream_V_data_10_V_din { O 16 vector } res_stream_V_data_10_V_full_n { I 1 bit } res_stream_V_data_10_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1900 \
    name res_stream_V_data_11_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_11_V \
    op interface \
    ports { res_stream_V_data_11_V_din { O 16 vector } res_stream_V_data_11_V_full_n { I 1 bit } res_stream_V_data_11_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1901 \
    name res_stream_V_data_12_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_12_V \
    op interface \
    ports { res_stream_V_data_12_V_din { O 16 vector } res_stream_V_data_12_V_full_n { I 1 bit } res_stream_V_data_12_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1902 \
    name res_stream_V_data_13_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_13_V \
    op interface \
    ports { res_stream_V_data_13_V_din { O 16 vector } res_stream_V_data_13_V_full_n { I 1 bit } res_stream_V_data_13_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1903 \
    name res_stream_V_data_14_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_14_V \
    op interface \
    ports { res_stream_V_data_14_V_din { O 16 vector } res_stream_V_data_14_V_full_n { I 1 bit } res_stream_V_data_14_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1904 \
    name res_stream_V_data_15_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_15_V \
    op interface \
    ports { res_stream_V_data_15_V_din { O 16 vector } res_stream_V_data_15_V_full_n { I 1 bit } res_stream_V_data_15_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1905 \
    name res_stream_V_data_16_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_16_V \
    op interface \
    ports { res_stream_V_data_16_V_din { O 16 vector } res_stream_V_data_16_V_full_n { I 1 bit } res_stream_V_data_16_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1906 \
    name res_stream_V_data_17_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_17_V \
    op interface \
    ports { res_stream_V_data_17_V_din { O 16 vector } res_stream_V_data_17_V_full_n { I 1 bit } res_stream_V_data_17_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1907 \
    name res_stream_V_data_18_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_18_V \
    op interface \
    ports { res_stream_V_data_18_V_din { O 16 vector } res_stream_V_data_18_V_full_n { I 1 bit } res_stream_V_data_18_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1908 \
    name res_stream_V_data_19_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_19_V \
    op interface \
    ports { res_stream_V_data_19_V_din { O 16 vector } res_stream_V_data_19_V_full_n { I 1 bit } res_stream_V_data_19_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1909 \
    name res_stream_V_data_20_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_20_V \
    op interface \
    ports { res_stream_V_data_20_V_din { O 16 vector } res_stream_V_data_20_V_full_n { I 1 bit } res_stream_V_data_20_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1910 \
    name res_stream_V_data_21_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_21_V \
    op interface \
    ports { res_stream_V_data_21_V_din { O 16 vector } res_stream_V_data_21_V_full_n { I 1 bit } res_stream_V_data_21_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1911 \
    name res_stream_V_data_22_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_22_V \
    op interface \
    ports { res_stream_V_data_22_V_din { O 16 vector } res_stream_V_data_22_V_full_n { I 1 bit } res_stream_V_data_22_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1912 \
    name res_stream_V_data_23_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_23_V \
    op interface \
    ports { res_stream_V_data_23_V_din { O 16 vector } res_stream_V_data_23_V_full_n { I 1 bit } res_stream_V_data_23_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1913 \
    name res_stream_V_data_24_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_24_V \
    op interface \
    ports { res_stream_V_data_24_V_din { O 16 vector } res_stream_V_data_24_V_full_n { I 1 bit } res_stream_V_data_24_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1914 \
    name res_stream_V_data_25_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_25_V \
    op interface \
    ports { res_stream_V_data_25_V_din { O 16 vector } res_stream_V_data_25_V_full_n { I 1 bit } res_stream_V_data_25_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1915 \
    name res_stream_V_data_26_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_26_V \
    op interface \
    ports { res_stream_V_data_26_V_din { O 16 vector } res_stream_V_data_26_V_full_n { I 1 bit } res_stream_V_data_26_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1916 \
    name res_stream_V_data_27_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_27_V \
    op interface \
    ports { res_stream_V_data_27_V_din { O 16 vector } res_stream_V_data_27_V_full_n { I 1 bit } res_stream_V_data_27_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1917 \
    name res_stream_V_data_28_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_28_V \
    op interface \
    ports { res_stream_V_data_28_V_din { O 16 vector } res_stream_V_data_28_V_full_n { I 1 bit } res_stream_V_data_28_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1918 \
    name res_stream_V_data_29_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_29_V \
    op interface \
    ports { res_stream_V_data_29_V_din { O 16 vector } res_stream_V_data_29_V_full_n { I 1 bit } res_stream_V_data_29_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1919 \
    name res_stream_V_data_30_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_30_V \
    op interface \
    ports { res_stream_V_data_30_V_din { O 16 vector } res_stream_V_data_30_V_full_n { I 1 bit } res_stream_V_data_30_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1920 \
    name res_stream_V_data_31_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_31_V \
    op interface \
    ports { res_stream_V_data_31_V_din { O 16 vector } res_stream_V_data_31_V_full_n { I 1 bit } res_stream_V_data_31_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1921 \
    name res_stream_V_data_32_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_32_V \
    op interface \
    ports { res_stream_V_data_32_V_din { O 16 vector } res_stream_V_data_32_V_full_n { I 1 bit } res_stream_V_data_32_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1922 \
    name res_stream_V_data_33_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_33_V \
    op interface \
    ports { res_stream_V_data_33_V_din { O 16 vector } res_stream_V_data_33_V_full_n { I 1 bit } res_stream_V_data_33_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1923 \
    name res_stream_V_data_34_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_34_V \
    op interface \
    ports { res_stream_V_data_34_V_din { O 16 vector } res_stream_V_data_34_V_full_n { I 1 bit } res_stream_V_data_34_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1924 \
    name res_stream_V_data_35_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_35_V \
    op interface \
    ports { res_stream_V_data_35_V_din { O 16 vector } res_stream_V_data_35_V_full_n { I 1 bit } res_stream_V_data_35_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1925 \
    name res_stream_V_data_36_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_36_V \
    op interface \
    ports { res_stream_V_data_36_V_din { O 16 vector } res_stream_V_data_36_V_full_n { I 1 bit } res_stream_V_data_36_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1926 \
    name res_stream_V_data_37_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_37_V \
    op interface \
    ports { res_stream_V_data_37_V_din { O 16 vector } res_stream_V_data_37_V_full_n { I 1 bit } res_stream_V_data_37_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1927 \
    name res_stream_V_data_38_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_38_V \
    op interface \
    ports { res_stream_V_data_38_V_din { O 16 vector } res_stream_V_data_38_V_full_n { I 1 bit } res_stream_V_data_38_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1928 \
    name res_stream_V_data_39_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_39_V \
    op interface \
    ports { res_stream_V_data_39_V_din { O 16 vector } res_stream_V_data_39_V_full_n { I 1 bit } res_stream_V_data_39_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1929 \
    name res_stream_V_data_40_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_40_V \
    op interface \
    ports { res_stream_V_data_40_V_din { O 16 vector } res_stream_V_data_40_V_full_n { I 1 bit } res_stream_V_data_40_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1930 \
    name res_stream_V_data_41_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_41_V \
    op interface \
    ports { res_stream_V_data_41_V_din { O 16 vector } res_stream_V_data_41_V_full_n { I 1 bit } res_stream_V_data_41_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1931 \
    name res_stream_V_data_42_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_42_V \
    op interface \
    ports { res_stream_V_data_42_V_din { O 16 vector } res_stream_V_data_42_V_full_n { I 1 bit } res_stream_V_data_42_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1932 \
    name res_stream_V_data_43_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_43_V \
    op interface \
    ports { res_stream_V_data_43_V_din { O 16 vector } res_stream_V_data_43_V_full_n { I 1 bit } res_stream_V_data_43_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1933 \
    name res_stream_V_data_44_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_44_V \
    op interface \
    ports { res_stream_V_data_44_V_din { O 16 vector } res_stream_V_data_44_V_full_n { I 1 bit } res_stream_V_data_44_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1934 \
    name res_stream_V_data_45_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_45_V \
    op interface \
    ports { res_stream_V_data_45_V_din { O 16 vector } res_stream_V_data_45_V_full_n { I 1 bit } res_stream_V_data_45_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1935 \
    name res_stream_V_data_46_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_46_V \
    op interface \
    ports { res_stream_V_data_46_V_din { O 16 vector } res_stream_V_data_46_V_full_n { I 1 bit } res_stream_V_data_46_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1936 \
    name res_stream_V_data_47_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_47_V \
    op interface \
    ports { res_stream_V_data_47_V_din { O 16 vector } res_stream_V_data_47_V_full_n { I 1 bit } res_stream_V_data_47_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1937 \
    name res_stream_V_data_48_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_48_V \
    op interface \
    ports { res_stream_V_data_48_V_din { O 16 vector } res_stream_V_data_48_V_full_n { I 1 bit } res_stream_V_data_48_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1938 \
    name res_stream_V_data_49_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_49_V \
    op interface \
    ports { res_stream_V_data_49_V_din { O 16 vector } res_stream_V_data_49_V_full_n { I 1 bit } res_stream_V_data_49_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1939 \
    name res_stream_V_data_50_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_50_V \
    op interface \
    ports { res_stream_V_data_50_V_din { O 16 vector } res_stream_V_data_50_V_full_n { I 1 bit } res_stream_V_data_50_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1940 \
    name res_stream_V_data_51_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_51_V \
    op interface \
    ports { res_stream_V_data_51_V_din { O 16 vector } res_stream_V_data_51_V_full_n { I 1 bit } res_stream_V_data_51_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1941 \
    name res_stream_V_data_52_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_52_V \
    op interface \
    ports { res_stream_V_data_52_V_din { O 16 vector } res_stream_V_data_52_V_full_n { I 1 bit } res_stream_V_data_52_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1942 \
    name res_stream_V_data_53_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_53_V \
    op interface \
    ports { res_stream_V_data_53_V_din { O 16 vector } res_stream_V_data_53_V_full_n { I 1 bit } res_stream_V_data_53_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1943 \
    name res_stream_V_data_54_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_54_V \
    op interface \
    ports { res_stream_V_data_54_V_din { O 16 vector } res_stream_V_data_54_V_full_n { I 1 bit } res_stream_V_data_54_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1944 \
    name res_stream_V_data_55_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_55_V \
    op interface \
    ports { res_stream_V_data_55_V_din { O 16 vector } res_stream_V_data_55_V_full_n { I 1 bit } res_stream_V_data_55_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1945 \
    name res_stream_V_data_56_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_56_V \
    op interface \
    ports { res_stream_V_data_56_V_din { O 16 vector } res_stream_V_data_56_V_full_n { I 1 bit } res_stream_V_data_56_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1946 \
    name res_stream_V_data_57_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_57_V \
    op interface \
    ports { res_stream_V_data_57_V_din { O 16 vector } res_stream_V_data_57_V_full_n { I 1 bit } res_stream_V_data_57_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1947 \
    name res_stream_V_data_58_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_58_V \
    op interface \
    ports { res_stream_V_data_58_V_din { O 16 vector } res_stream_V_data_58_V_full_n { I 1 bit } res_stream_V_data_58_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1948 \
    name res_stream_V_data_59_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_59_V \
    op interface \
    ports { res_stream_V_data_59_V_din { O 16 vector } res_stream_V_data_59_V_full_n { I 1 bit } res_stream_V_data_59_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1949 \
    name res_stream_V_data_60_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_60_V \
    op interface \
    ports { res_stream_V_data_60_V_din { O 16 vector } res_stream_V_data_60_V_full_n { I 1 bit } res_stream_V_data_60_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1950 \
    name res_stream_V_data_61_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_61_V \
    op interface \
    ports { res_stream_V_data_61_V_din { O 16 vector } res_stream_V_data_61_V_full_n { I 1 bit } res_stream_V_data_61_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1951 \
    name res_stream_V_data_62_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_62_V \
    op interface \
    ports { res_stream_V_data_62_V_din { O 16 vector } res_stream_V_data_62_V_full_n { I 1 bit } res_stream_V_data_62_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1952 \
    name res_stream_V_data_63_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_res_stream_V_data_63_V \
    op interface \
    ports { res_stream_V_data_63_V_din { O 16 vector } res_stream_V_data_63_V_full_n { I 1 bit } res_stream_V_data_63_V_write { O 1 bit } } \
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
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


