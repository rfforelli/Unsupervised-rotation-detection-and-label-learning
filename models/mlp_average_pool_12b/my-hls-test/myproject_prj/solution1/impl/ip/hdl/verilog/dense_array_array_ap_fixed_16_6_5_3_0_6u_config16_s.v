// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        data_stream_V_data_0_V_dout,
        data_stream_V_data_0_V_empty_n,
        data_stream_V_data_0_V_read,
        data_stream_V_data_1_V_dout,
        data_stream_V_data_1_V_empty_n,
        data_stream_V_data_1_V_read,
        data_stream_V_data_2_V_dout,
        data_stream_V_data_2_V_empty_n,
        data_stream_V_data_2_V_read,
        data_stream_V_data_3_V_dout,
        data_stream_V_data_3_V_empty_n,
        data_stream_V_data_3_V_read,
        data_stream_V_data_4_V_dout,
        data_stream_V_data_4_V_empty_n,
        data_stream_V_data_4_V_read,
        data_stream_V_data_5_V_dout,
        data_stream_V_data_5_V_empty_n,
        data_stream_V_data_5_V_read,
        data_stream_V_data_6_V_dout,
        data_stream_V_data_6_V_empty_n,
        data_stream_V_data_6_V_read,
        data_stream_V_data_7_V_dout,
        data_stream_V_data_7_V_empty_n,
        data_stream_V_data_7_V_read,
        data_stream_V_data_8_V_dout,
        data_stream_V_data_8_V_empty_n,
        data_stream_V_data_8_V_read,
        data_stream_V_data_9_V_dout,
        data_stream_V_data_9_V_empty_n,
        data_stream_V_data_9_V_read,
        data_stream_V_data_10_V_dout,
        data_stream_V_data_10_V_empty_n,
        data_stream_V_data_10_V_read,
        data_stream_V_data_11_V_dout,
        data_stream_V_data_11_V_empty_n,
        data_stream_V_data_11_V_read,
        data_stream_V_data_12_V_dout,
        data_stream_V_data_12_V_empty_n,
        data_stream_V_data_12_V_read,
        data_stream_V_data_13_V_dout,
        data_stream_V_data_13_V_empty_n,
        data_stream_V_data_13_V_read,
        data_stream_V_data_14_V_dout,
        data_stream_V_data_14_V_empty_n,
        data_stream_V_data_14_V_read,
        data_stream_V_data_15_V_dout,
        data_stream_V_data_15_V_empty_n,
        data_stream_V_data_15_V_read,
        res_stream_V_data_0_V_din,
        res_stream_V_data_0_V_full_n,
        res_stream_V_data_0_V_write,
        res_stream_V_data_1_V_din,
        res_stream_V_data_1_V_full_n,
        res_stream_V_data_1_V_write,
        res_stream_V_data_2_V_din,
        res_stream_V_data_2_V_full_n,
        res_stream_V_data_2_V_write,
        res_stream_V_data_3_V_din,
        res_stream_V_data_3_V_full_n,
        res_stream_V_data_3_V_write,
        res_stream_V_data_4_V_din,
        res_stream_V_data_4_V_full_n,
        res_stream_V_data_4_V_write,
        res_stream_V_data_5_V_din,
        res_stream_V_data_5_V_full_n,
        res_stream_V_data_5_V_write
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [11:0] data_stream_V_data_0_V_dout;
input   data_stream_V_data_0_V_empty_n;
output   data_stream_V_data_0_V_read;
input  [11:0] data_stream_V_data_1_V_dout;
input   data_stream_V_data_1_V_empty_n;
output   data_stream_V_data_1_V_read;
input  [11:0] data_stream_V_data_2_V_dout;
input   data_stream_V_data_2_V_empty_n;
output   data_stream_V_data_2_V_read;
input  [11:0] data_stream_V_data_3_V_dout;
input   data_stream_V_data_3_V_empty_n;
output   data_stream_V_data_3_V_read;
input  [11:0] data_stream_V_data_4_V_dout;
input   data_stream_V_data_4_V_empty_n;
output   data_stream_V_data_4_V_read;
input  [11:0] data_stream_V_data_5_V_dout;
input   data_stream_V_data_5_V_empty_n;
output   data_stream_V_data_5_V_read;
input  [11:0] data_stream_V_data_6_V_dout;
input   data_stream_V_data_6_V_empty_n;
output   data_stream_V_data_6_V_read;
input  [11:0] data_stream_V_data_7_V_dout;
input   data_stream_V_data_7_V_empty_n;
output   data_stream_V_data_7_V_read;
input  [11:0] data_stream_V_data_8_V_dout;
input   data_stream_V_data_8_V_empty_n;
output   data_stream_V_data_8_V_read;
input  [11:0] data_stream_V_data_9_V_dout;
input   data_stream_V_data_9_V_empty_n;
output   data_stream_V_data_9_V_read;
input  [11:0] data_stream_V_data_10_V_dout;
input   data_stream_V_data_10_V_empty_n;
output   data_stream_V_data_10_V_read;
input  [11:0] data_stream_V_data_11_V_dout;
input   data_stream_V_data_11_V_empty_n;
output   data_stream_V_data_11_V_read;
input  [11:0] data_stream_V_data_12_V_dout;
input   data_stream_V_data_12_V_empty_n;
output   data_stream_V_data_12_V_read;
input  [11:0] data_stream_V_data_13_V_dout;
input   data_stream_V_data_13_V_empty_n;
output   data_stream_V_data_13_V_read;
input  [11:0] data_stream_V_data_14_V_dout;
input   data_stream_V_data_14_V_empty_n;
output   data_stream_V_data_14_V_read;
input  [11:0] data_stream_V_data_15_V_dout;
input   data_stream_V_data_15_V_empty_n;
output   data_stream_V_data_15_V_read;
output  [15:0] res_stream_V_data_0_V_din;
input   res_stream_V_data_0_V_full_n;
output   res_stream_V_data_0_V_write;
output  [15:0] res_stream_V_data_1_V_din;
input   res_stream_V_data_1_V_full_n;
output   res_stream_V_data_1_V_write;
output  [15:0] res_stream_V_data_2_V_din;
input   res_stream_V_data_2_V_full_n;
output   res_stream_V_data_2_V_write;
output  [15:0] res_stream_V_data_3_V_din;
input   res_stream_V_data_3_V_full_n;
output   res_stream_V_data_3_V_write;
output  [15:0] res_stream_V_data_4_V_din;
input   res_stream_V_data_4_V_full_n;
output   res_stream_V_data_4_V_write;
output  [15:0] res_stream_V_data_5_V_din;
input   res_stream_V_data_5_V_full_n;
output   res_stream_V_data_5_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg data_stream_V_data_0_V_read;
reg data_stream_V_data_1_V_read;
reg data_stream_V_data_2_V_read;
reg data_stream_V_data_3_V_read;
reg data_stream_V_data_4_V_read;
reg data_stream_V_data_5_V_read;
reg data_stream_V_data_6_V_read;
reg data_stream_V_data_7_V_read;
reg data_stream_V_data_8_V_read;
reg data_stream_V_data_9_V_read;
reg data_stream_V_data_10_V_read;
reg data_stream_V_data_11_V_read;
reg data_stream_V_data_12_V_read;
reg data_stream_V_data_13_V_read;
reg data_stream_V_data_14_V_read;
reg data_stream_V_data_15_V_read;
reg res_stream_V_data_0_V_write;
reg res_stream_V_data_1_V_write;
reg res_stream_V_data_2_V_write;
reg res_stream_V_data_3_V_write;
reg res_stream_V_data_4_V_write;
reg res_stream_V_data_5_V_write;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    data_stream_V_data_0_V_blk_n;
reg    data_stream_V_data_1_V_blk_n;
reg    data_stream_V_data_2_V_blk_n;
reg    data_stream_V_data_3_V_blk_n;
reg    data_stream_V_data_4_V_blk_n;
reg    data_stream_V_data_5_V_blk_n;
reg    data_stream_V_data_6_V_blk_n;
reg    data_stream_V_data_7_V_blk_n;
reg    data_stream_V_data_8_V_blk_n;
reg    data_stream_V_data_9_V_blk_n;
reg    data_stream_V_data_10_V_blk_n;
reg    data_stream_V_data_11_V_blk_n;
reg    data_stream_V_data_12_V_blk_n;
reg    data_stream_V_data_13_V_blk_n;
reg    data_stream_V_data_14_V_blk_n;
reg    data_stream_V_data_15_V_blk_n;
reg    res_stream_V_data_0_V_blk_n;
wire    ap_CS_fsm_state2;
reg    res_stream_V_data_1_V_blk_n;
reg    res_stream_V_data_2_V_blk_n;
reg    res_stream_V_data_3_V_blk_n;
reg    res_stream_V_data_4_V_blk_n;
reg    res_stream_V_data_5_V_blk_n;
reg   [11:0] data_0_V_reg_264;
wire    io_acc_block_signal_op3;
reg    ap_block_state1;
reg   [11:0] data_1_V_reg_269;
reg   [11:0] data_2_V_reg_274;
reg   [11:0] data_3_V_reg_279;
reg   [11:0] data_4_V_reg_284;
reg   [11:0] data_5_V_reg_289;
reg   [11:0] data_6_V_reg_294;
reg   [11:0] data_7_V_reg_299;
reg   [11:0] data_8_V_reg_304;
reg   [11:0] data_9_V_reg_309;
reg   [11:0] data_10_V_reg_314;
reg   [11:0] data_11_V_reg_319;
reg   [11:0] data_12_V_reg_324;
reg   [11:0] data_13_V_reg_329;
reg   [11:0] data_14_V_reg_334;
reg   [11:0] data_15_V_reg_339;
wire    grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start;
wire    grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done;
wire    grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_idle;
wire    grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_ready;
wire   [15:0] grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_0;
wire   [15:0] grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_1;
wire   [15:0] grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_2;
wire   [15:0] grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_3;
wire   [15:0] grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_4;
wire   [15:0] grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_5;
reg    grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start_reg;
reg    ap_block_state1_ignore_call40;
wire    io_acc_block_signal_op52;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 2'd1;
#0 grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start_reg = 1'b0;
end

dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start),
    .ap_done(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done),
    .ap_idle(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_idle),
    .ap_ready(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_ready),
    .data_0_V_read(data_0_V_reg_264),
    .data_1_V_read(data_1_V_reg_269),
    .data_2_V_read(data_2_V_reg_274),
    .data_3_V_read(data_3_V_reg_279),
    .data_4_V_read(data_4_V_reg_284),
    .data_5_V_read(data_5_V_reg_289),
    .data_6_V_read(data_6_V_reg_294),
    .data_7_V_read(data_7_V_reg_299),
    .data_8_V_read(data_8_V_reg_304),
    .data_9_V_read(data_9_V_reg_309),
    .data_10_V_read(data_10_V_reg_314),
    .data_11_V_read(data_11_V_reg_319),
    .data_12_V_read(data_12_V_reg_324),
    .data_13_V_read(data_13_V_reg_329),
    .data_14_V_read(data_14_V_reg_334),
    .data_15_V_read(data_15_V_reg_339),
    .ap_return_0(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_0),
    .ap_return_1(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_1),
    .ap_return_2(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_2),
    .ap_return_3(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_3),
    .ap_return_4(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_4),
    .ap_return_5(grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_5)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start_reg <= 1'b0;
    end else begin
        if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
            grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start_reg <= 1'b1;
        end else if ((grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_ready == 1'b1)) begin
            grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_0_V_reg_264 <= data_stream_V_data_0_V_dout;
        data_10_V_reg_314 <= data_stream_V_data_10_V_dout;
        data_11_V_reg_319 <= data_stream_V_data_11_V_dout;
        data_12_V_reg_324 <= data_stream_V_data_12_V_dout;
        data_13_V_reg_329 <= data_stream_V_data_13_V_dout;
        data_14_V_reg_334 <= data_stream_V_data_14_V_dout;
        data_15_V_reg_339 <= data_stream_V_data_15_V_dout;
        data_1_V_reg_269 <= data_stream_V_data_1_V_dout;
        data_2_V_reg_274 <= data_stream_V_data_2_V_dout;
        data_3_V_reg_279 <= data_stream_V_data_3_V_dout;
        data_4_V_reg_284 <= data_stream_V_data_4_V_dout;
        data_5_V_reg_289 <= data_stream_V_data_5_V_dout;
        data_6_V_reg_294 <= data_stream_V_data_6_V_dout;
        data_7_V_reg_299 <= data_stream_V_data_7_V_dout;
        data_8_V_reg_304 <= data_stream_V_data_8_V_dout;
        data_9_V_reg_309 <= data_stream_V_data_9_V_dout;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_0_V_blk_n = data_stream_V_data_0_V_empty_n;
    end else begin
        data_stream_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_0_V_read = 1'b1;
    end else begin
        data_stream_V_data_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_10_V_blk_n = data_stream_V_data_10_V_empty_n;
    end else begin
        data_stream_V_data_10_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_10_V_read = 1'b1;
    end else begin
        data_stream_V_data_10_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_11_V_blk_n = data_stream_V_data_11_V_empty_n;
    end else begin
        data_stream_V_data_11_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_11_V_read = 1'b1;
    end else begin
        data_stream_V_data_11_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_12_V_blk_n = data_stream_V_data_12_V_empty_n;
    end else begin
        data_stream_V_data_12_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_12_V_read = 1'b1;
    end else begin
        data_stream_V_data_12_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_13_V_blk_n = data_stream_V_data_13_V_empty_n;
    end else begin
        data_stream_V_data_13_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_13_V_read = 1'b1;
    end else begin
        data_stream_V_data_13_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_14_V_blk_n = data_stream_V_data_14_V_empty_n;
    end else begin
        data_stream_V_data_14_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_14_V_read = 1'b1;
    end else begin
        data_stream_V_data_14_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_15_V_blk_n = data_stream_V_data_15_V_empty_n;
    end else begin
        data_stream_V_data_15_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_15_V_read = 1'b1;
    end else begin
        data_stream_V_data_15_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_1_V_blk_n = data_stream_V_data_1_V_empty_n;
    end else begin
        data_stream_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_1_V_read = 1'b1;
    end else begin
        data_stream_V_data_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_2_V_blk_n = data_stream_V_data_2_V_empty_n;
    end else begin
        data_stream_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_2_V_read = 1'b1;
    end else begin
        data_stream_V_data_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_3_V_blk_n = data_stream_V_data_3_V_empty_n;
    end else begin
        data_stream_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_3_V_read = 1'b1;
    end else begin
        data_stream_V_data_3_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_4_V_blk_n = data_stream_V_data_4_V_empty_n;
    end else begin
        data_stream_V_data_4_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_4_V_read = 1'b1;
    end else begin
        data_stream_V_data_4_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_5_V_blk_n = data_stream_V_data_5_V_empty_n;
    end else begin
        data_stream_V_data_5_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_5_V_read = 1'b1;
    end else begin
        data_stream_V_data_5_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_6_V_blk_n = data_stream_V_data_6_V_empty_n;
    end else begin
        data_stream_V_data_6_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_6_V_read = 1'b1;
    end else begin
        data_stream_V_data_6_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_7_V_blk_n = data_stream_V_data_7_V_empty_n;
    end else begin
        data_stream_V_data_7_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_7_V_read = 1'b1;
    end else begin
        data_stream_V_data_7_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_8_V_blk_n = data_stream_V_data_8_V_empty_n;
    end else begin
        data_stream_V_data_8_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_8_V_read = 1'b1;
    end else begin
        data_stream_V_data_8_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_9_V_blk_n = data_stream_V_data_9_V_empty_n;
    end else begin
        data_stream_V_data_9_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        data_stream_V_data_9_V_read = 1'b1;
    end else begin
        data_stream_V_data_9_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        res_stream_V_data_0_V_blk_n = res_stream_V_data_0_V_full_n;
    end else begin
        res_stream_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        res_stream_V_data_0_V_write = 1'b1;
    end else begin
        res_stream_V_data_0_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        res_stream_V_data_1_V_blk_n = res_stream_V_data_1_V_full_n;
    end else begin
        res_stream_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        res_stream_V_data_1_V_write = 1'b1;
    end else begin
        res_stream_V_data_1_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        res_stream_V_data_2_V_blk_n = res_stream_V_data_2_V_full_n;
    end else begin
        res_stream_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        res_stream_V_data_2_V_write = 1'b1;
    end else begin
        res_stream_V_data_2_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        res_stream_V_data_3_V_blk_n = res_stream_V_data_3_V_full_n;
    end else begin
        res_stream_V_data_3_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        res_stream_V_data_3_V_write = 1'b1;
    end else begin
        res_stream_V_data_3_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        res_stream_V_data_4_V_blk_n = res_stream_V_data_4_V_full_n;
    end else begin
        res_stream_V_data_4_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        res_stream_V_data_4_V_write = 1'b1;
    end else begin
        res_stream_V_data_4_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        res_stream_V_data_5_V_blk_n = res_stream_V_data_5_V_full_n;
    end else begin
        res_stream_V_data_5_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
        res_stream_V_data_5_V_write = 1'b1;
    end else begin
        res_stream_V_data_5_V_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if ((~((io_acc_block_signal_op52 == 1'b0) | (grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_done == 1'b0)) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

always @ (*) begin
    ap_block_state1 = ((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state1_ignore_call40 = ((ap_start == 1'b0) | (io_acc_block_signal_op3 == 1'b0) | (ap_done_reg == 1'b1));
end

assign grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_start_reg;

assign io_acc_block_signal_op3 = (data_stream_V_data_9_V_empty_n & data_stream_V_data_8_V_empty_n & data_stream_V_data_7_V_empty_n & data_stream_V_data_6_V_empty_n & data_stream_V_data_5_V_empty_n & data_stream_V_data_4_V_empty_n & data_stream_V_data_3_V_empty_n & data_stream_V_data_2_V_empty_n & data_stream_V_data_1_V_empty_n & data_stream_V_data_15_V_empty_n & data_stream_V_data_14_V_empty_n & data_stream_V_data_13_V_empty_n & data_stream_V_data_12_V_empty_n & data_stream_V_data_11_V_empty_n & data_stream_V_data_10_V_empty_n & data_stream_V_data_0_V_empty_n);

assign io_acc_block_signal_op52 = (res_stream_V_data_5_V_full_n & res_stream_V_data_4_V_full_n & res_stream_V_data_3_V_full_n & res_stream_V_data_2_V_full_n & res_stream_V_data_1_V_full_n & res_stream_V_data_0_V_full_n);

assign res_stream_V_data_0_V_din = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_0;

assign res_stream_V_data_1_V_din = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_1;

assign res_stream_V_data_2_V_din = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_2;

assign res_stream_V_data_3_V_din = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_3;

assign res_stream_V_data_4_V_din = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_4;

assign res_stream_V_data_5_V_din = grp_dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_fu_130_ap_return_5;

endmodule //dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_s