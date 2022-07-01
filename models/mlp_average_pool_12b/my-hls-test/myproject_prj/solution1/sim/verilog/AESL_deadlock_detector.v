`timescale 1 ns / 1 ps

module AESL_deadlock_detector (
    input reset,
    input clock);

    wire [1:0] proc_dep_vld_vec_0;
    reg [1:0] proc_dep_vld_vec_0_reg;
    wire [1:0] in_chan_dep_vld_vec_0;
    wire [27:0] in_chan_dep_data_vec_0;
    wire [1:0] token_in_vec_0;
    wire [1:0] out_chan_dep_vld_vec_0;
    wire [13:0] out_chan_dep_data_0;
    wire [1:0] token_out_vec_0;
    wire dl_detect_out_0;
    wire dep_chan_vld_1_0;
    wire [13:0] dep_chan_data_1_0;
    wire token_1_0;
    wire dep_chan_vld_2_0;
    wire [13:0] dep_chan_data_2_0;
    wire token_2_0;
    wire [1:0] proc_dep_vld_vec_1;
    reg [1:0] proc_dep_vld_vec_1_reg;
    wire [1:0] in_chan_dep_vld_vec_1;
    wire [27:0] in_chan_dep_data_vec_1;
    wire [1:0] token_in_vec_1;
    wire [1:0] out_chan_dep_vld_vec_1;
    wire [13:0] out_chan_dep_data_1;
    wire [1:0] token_out_vec_1;
    wire dl_detect_out_1;
    wire dep_chan_vld_0_1;
    wire [13:0] dep_chan_data_0_1;
    wire token_0_1;
    wire dep_chan_vld_13_1;
    wire [13:0] dep_chan_data_13_1;
    wire token_13_1;
    wire [1:0] proc_dep_vld_vec_2;
    reg [1:0] proc_dep_vld_vec_2_reg;
    wire [1:0] in_chan_dep_vld_vec_2;
    wire [27:0] in_chan_dep_data_vec_2;
    wire [1:0] token_in_vec_2;
    wire [1:0] out_chan_dep_vld_vec_2;
    wire [13:0] out_chan_dep_data_2;
    wire [1:0] token_out_vec_2;
    wire dl_detect_out_2;
    wire dep_chan_vld_0_2;
    wire [13:0] dep_chan_data_0_2;
    wire token_0_2;
    wire dep_chan_vld_3_2;
    wire [13:0] dep_chan_data_3_2;
    wire token_3_2;
    wire [1:0] proc_dep_vld_vec_3;
    reg [1:0] proc_dep_vld_vec_3_reg;
    wire [1:0] in_chan_dep_vld_vec_3;
    wire [27:0] in_chan_dep_data_vec_3;
    wire [1:0] token_in_vec_3;
    wire [1:0] out_chan_dep_vld_vec_3;
    wire [13:0] out_chan_dep_data_3;
    wire [1:0] token_out_vec_3;
    wire dl_detect_out_3;
    wire dep_chan_vld_2_3;
    wire [13:0] dep_chan_data_2_3;
    wire token_2_3;
    wire dep_chan_vld_4_3;
    wire [13:0] dep_chan_data_4_3;
    wire token_4_3;
    wire [1:0] proc_dep_vld_vec_4;
    reg [1:0] proc_dep_vld_vec_4_reg;
    wire [1:0] in_chan_dep_vld_vec_4;
    wire [27:0] in_chan_dep_data_vec_4;
    wire [1:0] token_in_vec_4;
    wire [1:0] out_chan_dep_vld_vec_4;
    wire [13:0] out_chan_dep_data_4;
    wire [1:0] token_out_vec_4;
    wire dl_detect_out_4;
    wire dep_chan_vld_3_4;
    wire [13:0] dep_chan_data_3_4;
    wire token_3_4;
    wire dep_chan_vld_5_4;
    wire [13:0] dep_chan_data_5_4;
    wire token_5_4;
    wire [1:0] proc_dep_vld_vec_5;
    reg [1:0] proc_dep_vld_vec_5_reg;
    wire [1:0] in_chan_dep_vld_vec_5;
    wire [27:0] in_chan_dep_data_vec_5;
    wire [1:0] token_in_vec_5;
    wire [1:0] out_chan_dep_vld_vec_5;
    wire [13:0] out_chan_dep_data_5;
    wire [1:0] token_out_vec_5;
    wire dl_detect_out_5;
    wire dep_chan_vld_4_5;
    wire [13:0] dep_chan_data_4_5;
    wire token_4_5;
    wire dep_chan_vld_6_5;
    wire [13:0] dep_chan_data_6_5;
    wire token_6_5;
    wire [1:0] proc_dep_vld_vec_6;
    reg [1:0] proc_dep_vld_vec_6_reg;
    wire [1:0] in_chan_dep_vld_vec_6;
    wire [27:0] in_chan_dep_data_vec_6;
    wire [1:0] token_in_vec_6;
    wire [1:0] out_chan_dep_vld_vec_6;
    wire [13:0] out_chan_dep_data_6;
    wire [1:0] token_out_vec_6;
    wire dl_detect_out_6;
    wire dep_chan_vld_5_6;
    wire [13:0] dep_chan_data_5_6;
    wire token_5_6;
    wire dep_chan_vld_7_6;
    wire [13:0] dep_chan_data_7_6;
    wire token_7_6;
    wire [1:0] proc_dep_vld_vec_7;
    reg [1:0] proc_dep_vld_vec_7_reg;
    wire [1:0] in_chan_dep_vld_vec_7;
    wire [27:0] in_chan_dep_data_vec_7;
    wire [1:0] token_in_vec_7;
    wire [1:0] out_chan_dep_vld_vec_7;
    wire [13:0] out_chan_dep_data_7;
    wire [1:0] token_out_vec_7;
    wire dl_detect_out_7;
    wire dep_chan_vld_6_7;
    wire [13:0] dep_chan_data_6_7;
    wire token_6_7;
    wire dep_chan_vld_8_7;
    wire [13:0] dep_chan_data_8_7;
    wire token_8_7;
    wire [1:0] proc_dep_vld_vec_8;
    reg [1:0] proc_dep_vld_vec_8_reg;
    wire [1:0] in_chan_dep_vld_vec_8;
    wire [27:0] in_chan_dep_data_vec_8;
    wire [1:0] token_in_vec_8;
    wire [1:0] out_chan_dep_vld_vec_8;
    wire [13:0] out_chan_dep_data_8;
    wire [1:0] token_out_vec_8;
    wire dl_detect_out_8;
    wire dep_chan_vld_7_8;
    wire [13:0] dep_chan_data_7_8;
    wire token_7_8;
    wire dep_chan_vld_9_8;
    wire [13:0] dep_chan_data_9_8;
    wire token_9_8;
    wire [1:0] proc_dep_vld_vec_9;
    reg [1:0] proc_dep_vld_vec_9_reg;
    wire [1:0] in_chan_dep_vld_vec_9;
    wire [27:0] in_chan_dep_data_vec_9;
    wire [1:0] token_in_vec_9;
    wire [1:0] out_chan_dep_vld_vec_9;
    wire [13:0] out_chan_dep_data_9;
    wire [1:0] token_out_vec_9;
    wire dl_detect_out_9;
    wire dep_chan_vld_8_9;
    wire [13:0] dep_chan_data_8_9;
    wire token_8_9;
    wire dep_chan_vld_10_9;
    wire [13:0] dep_chan_data_10_9;
    wire token_10_9;
    wire [1:0] proc_dep_vld_vec_10;
    reg [1:0] proc_dep_vld_vec_10_reg;
    wire [1:0] in_chan_dep_vld_vec_10;
    wire [27:0] in_chan_dep_data_vec_10;
    wire [1:0] token_in_vec_10;
    wire [1:0] out_chan_dep_vld_vec_10;
    wire [13:0] out_chan_dep_data_10;
    wire [1:0] token_out_vec_10;
    wire dl_detect_out_10;
    wire dep_chan_vld_9_10;
    wire [13:0] dep_chan_data_9_10;
    wire token_9_10;
    wire dep_chan_vld_11_10;
    wire [13:0] dep_chan_data_11_10;
    wire token_11_10;
    wire [1:0] proc_dep_vld_vec_11;
    reg [1:0] proc_dep_vld_vec_11_reg;
    wire [1:0] in_chan_dep_vld_vec_11;
    wire [27:0] in_chan_dep_data_vec_11;
    wire [1:0] token_in_vec_11;
    wire [1:0] out_chan_dep_vld_vec_11;
    wire [13:0] out_chan_dep_data_11;
    wire [1:0] token_out_vec_11;
    wire dl_detect_out_11;
    wire dep_chan_vld_10_11;
    wire [13:0] dep_chan_data_10_11;
    wire token_10_11;
    wire dep_chan_vld_12_11;
    wire [13:0] dep_chan_data_12_11;
    wire token_12_11;
    wire [1:0] proc_dep_vld_vec_12;
    reg [1:0] proc_dep_vld_vec_12_reg;
    wire [1:0] in_chan_dep_vld_vec_12;
    wire [27:0] in_chan_dep_data_vec_12;
    wire [1:0] token_in_vec_12;
    wire [1:0] out_chan_dep_vld_vec_12;
    wire [13:0] out_chan_dep_data_12;
    wire [1:0] token_out_vec_12;
    wire dl_detect_out_12;
    wire dep_chan_vld_11_12;
    wire [13:0] dep_chan_data_11_12;
    wire token_11_12;
    wire dep_chan_vld_13_12;
    wire [13:0] dep_chan_data_13_12;
    wire token_13_12;
    wire [1:0] proc_dep_vld_vec_13;
    reg [1:0] proc_dep_vld_vec_13_reg;
    wire [1:0] in_chan_dep_vld_vec_13;
    wire [27:0] in_chan_dep_data_vec_13;
    wire [1:0] token_in_vec_13;
    wire [1:0] out_chan_dep_vld_vec_13;
    wire [13:0] out_chan_dep_data_13;
    wire [1:0] token_out_vec_13;
    wire dl_detect_out_13;
    wire dep_chan_vld_1_13;
    wire [13:0] dep_chan_data_1_13;
    wire token_1_13;
    wire dep_chan_vld_12_13;
    wire [13:0] dep_chan_data_12_13;
    wire token_12_13;
    wire [13:0] dl_in_vec;
    wire dl_detect_out;
    wire [13:0] origin;
    wire token_clear;

    reg ap_done_reg_0;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            ap_done_reg_0 <= 'b0;
        end
        else begin
            ap_done_reg_0 <= AESL_inst_myproject_axi.Loop_2_proc_U0.ap_done;
        end
    end

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$Loop_1_proc326_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$Loop_1_proc326_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$Loop_1_proc326_U0$ap_idle <= AESL_inst_myproject_axi.Loop_1_proc326_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.Loop_1_proc326_U0
    AESL_deadlock_detect_unit #(14, 0, 2, 2) AESL_deadlock_detect_unit_0 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_0),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_0),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_0),
        .token_in_vec(token_in_vec_0),
        .dl_detect_in(dl_detect_out),
        .origin(origin[0]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_0),
        .out_chan_dep_data(out_chan_dep_data_0),
        .token_out_vec(token_out_vec_0),
        .dl_detect_out(dl_in_vec[0]));

    assign proc_dep_vld_vec_0[0] = dl_detect_out ? proc_dep_vld_vec_0_reg[0] : (~AESL_inst_myproject_axi.Loop_1_proc326_U0.in_local_V_data_0_V_blk_n);
    assign proc_dep_vld_vec_0[1] = dl_detect_out ? proc_dep_vld_vec_0_reg[1] : ((~AESL_inst_myproject_axi.start_for_myproject_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_0_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_0_reg <= proc_dep_vld_vec_0;
        end
    end
    assign in_chan_dep_vld_vec_0[0] = dep_chan_vld_1_0;
    assign in_chan_dep_data_vec_0[13 : 0] = dep_chan_data_1_0;
    assign token_in_vec_0[0] = token_1_0;
    assign in_chan_dep_vld_vec_0[1] = dep_chan_vld_2_0;
    assign in_chan_dep_data_vec_0[27 : 14] = dep_chan_data_2_0;
    assign token_in_vec_0[1] = token_2_0;
    assign dep_chan_vld_0_2 = out_chan_dep_vld_vec_0[0];
    assign dep_chan_data_0_2 = out_chan_dep_data_0;
    assign token_0_2 = token_out_vec_0[0];
    assign dep_chan_vld_0_1 = out_chan_dep_vld_vec_0[1];
    assign dep_chan_data_0_1 = out_chan_dep_data_0;
    assign token_0_1 = token_out_vec_0[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0
    AESL_deadlock_detect_unit #(14, 1, 2, 2) AESL_deadlock_detect_unit_1 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_1),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_1),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_1),
        .token_in_vec(token_in_vec_1),
        .dl_detect_in(dl_detect_out),
        .origin(origin[1]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_1),
        .out_chan_dep_data(out_chan_dep_data_1),
        .token_out_vec(token_out_vec_1),
        .dl_detect_out(dl_in_vec[1]));

    assign proc_dep_vld_vec_1[0] = dl_detect_out ? proc_dep_vld_vec_1_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.pooling2d_cl_array_array_ap_fixed_1u_config2_U0.data_V_data_V_blk_n | (~AESL_inst_myproject_axi.start_for_myproject_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$ap_idle)));
    assign proc_dep_vld_vec_1[1] = dl_detect_out ? proc_dep_vld_vec_1_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_5_V_blk_n | (~AESL_inst_myproject_axi.start_for_Block_myproject_axi_exit31_proc_U0_U.if_full_n & AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_1_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_1_reg <= proc_dep_vld_vec_1;
        end
    end
    assign in_chan_dep_vld_vec_1[0] = dep_chan_vld_0_1;
    assign in_chan_dep_data_vec_1[13 : 0] = dep_chan_data_0_1;
    assign token_in_vec_1[0] = token_0_1;
    assign in_chan_dep_vld_vec_1[1] = dep_chan_vld_13_1;
    assign in_chan_dep_data_vec_1[27 : 14] = dep_chan_data_13_1;
    assign token_in_vec_1[1] = token_13_1;
    assign dep_chan_vld_1_0 = out_chan_dep_vld_vec_1[0];
    assign dep_chan_data_1_0 = out_chan_dep_data_1;
    assign token_1_0 = token_out_vec_1[0];
    assign dep_chan_vld_1_13 = out_chan_dep_vld_vec_1[1];
    assign dep_chan_data_1_13 = out_chan_dep_data_1;
    assign token_1_13 = token_out_vec_1[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$pooling2d_cl_array_array_ap_fixed_1u_config2_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$pooling2d_cl_array_array_ap_fixed_1u_config2_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$pooling2d_cl_array_array_ap_fixed_1u_config2_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.pooling2d_cl_array_array_ap_fixed_1u_config2_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.pooling2d_cl_array_array_ap_fixed_1u_config2_U0
    AESL_deadlock_detect_unit #(14, 2, 2, 2) AESL_deadlock_detect_unit_2 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_2),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_2),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_2),
        .token_in_vec(token_in_vec_2),
        .dl_detect_in(dl_detect_out),
        .origin(origin[2]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_2),
        .out_chan_dep_data(out_chan_dep_data_2),
        .token_out_vec(token_out_vec_2),
        .dl_detect_out(dl_in_vec[2]));

    assign proc_dep_vld_vec_2[0] = dl_detect_out ? proc_dep_vld_vec_2_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.pooling2d_cl_array_array_ap_fixed_1u_config2_U0.data_V_data_V_blk_n);
    assign proc_dep_vld_vec_2[1] = dl_detect_out ? proc_dep_vld_vec_2_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.pooling2d_cl_array_array_ap_fixed_1u_config2_U0.res_V_data_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_64u_confiibs_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_2_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_2_reg <= proc_dep_vld_vec_2;
        end
    end
    assign in_chan_dep_vld_vec_2[0] = dep_chan_vld_0_2;
    assign in_chan_dep_data_vec_2[13 : 0] = dep_chan_data_0_2;
    assign token_in_vec_2[0] = token_0_2;
    assign in_chan_dep_vld_vec_2[1] = dep_chan_vld_3_2;
    assign in_chan_dep_data_vec_2[27 : 14] = dep_chan_data_3_2;
    assign token_in_vec_2[1] = token_3_2;
    assign dep_chan_vld_2_0 = out_chan_dep_vld_vec_2[0];
    assign dep_chan_data_2_0 = out_chan_dep_data_2;
    assign token_2_0 = token_out_vec_2[0];
    assign dep_chan_vld_2_3 = out_chan_dep_vld_vec_2[1];
    assign dep_chan_data_2_3 = out_chan_dep_data_2;
    assign token_2_3 = token_out_vec_2[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0
    AESL_deadlock_detect_unit #(14, 3, 2, 2) AESL_deadlock_detect_unit_3 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_3),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_3),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_3),
        .token_in_vec(token_in_vec_3),
        .dl_detect_in(dl_detect_out),
        .origin(origin[3]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_3),
        .out_chan_dep_data(out_chan_dep_data_3),
        .token_out_vec(token_out_vec_3),
        .dl_detect_out(dl_in_vec[3]));

    assign proc_dep_vld_vec_3[0] = dl_detect_out ? proc_dep_vld_vec_3_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.data_stream_V_data_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_64u_confiibs_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0$ap_idle)));
    assign proc_dep_vld_vec_3[1] = dl_detect_out ? proc_dep_vld_vec_3_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_31_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_32_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_33_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_34_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_35_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_36_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_37_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_38_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_39_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_40_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_41_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_42_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_43_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_44_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_45_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_46_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_47_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_48_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_49_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_50_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_51_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_52_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_53_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_54_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_55_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_56_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_57_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_58_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_59_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_60_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_61_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_62_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_64u_config4_U0.res_stream_V_data_63_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_normalize_array_array_ap_fixed_64u_config6_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_3_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_3_reg <= proc_dep_vld_vec_3;
        end
    end
    assign in_chan_dep_vld_vec_3[0] = dep_chan_vld_2_3;
    assign in_chan_dep_data_vec_3[13 : 0] = dep_chan_data_2_3;
    assign token_in_vec_3[0] = token_2_3;
    assign in_chan_dep_vld_vec_3[1] = dep_chan_vld_4_3;
    assign in_chan_dep_data_vec_3[27 : 14] = dep_chan_data_4_3;
    assign token_in_vec_3[1] = token_4_3;
    assign dep_chan_vld_3_2 = out_chan_dep_vld_vec_3[0];
    assign dep_chan_data_3_2 = out_chan_dep_data_3;
    assign token_3_2 = token_out_vec_3[0];
    assign dep_chan_vld_3_4 = out_chan_dep_vld_vec_3[1];
    assign dep_chan_data_3_4 = out_chan_dep_data_3;
    assign token_3_4 = token_out_vec_3[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_64u_config6_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_64u_config6_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_64u_config6_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0
    AESL_deadlock_detect_unit #(14, 4, 2, 2) AESL_deadlock_detect_unit_4 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_4),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_4),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_4),
        .token_in_vec(token_in_vec_4),
        .dl_detect_in(dl_detect_out),
        .origin(origin[4]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_4),
        .out_chan_dep_data(out_chan_dep_data_4),
        .token_out_vec(token_out_vec_4),
        .dl_detect_out(dl_in_vec[4]));

    assign proc_dep_vld_vec_4[0] = dl_detect_out ? proc_dep_vld_vec_4_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_31_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_32_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_33_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_34_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_35_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_36_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_37_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_38_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_39_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_40_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_41_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_42_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_43_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_44_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_45_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_46_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_47_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_48_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_49_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_50_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_51_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_52_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_53_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_54_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_55_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_56_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_57_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_58_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_59_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_60_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_61_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_62_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.data_V_data_63_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_normalize_array_array_ap_fixed_64u_config6_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_64u_config6_U0$ap_idle)));
    assign proc_dep_vld_vec_4[1] = dl_detect_out ? proc_dep_vld_vec_4_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_31_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_32_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_33_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_34_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_35_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_36_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_37_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_38_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_39_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_40_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_41_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_42_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_43_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_44_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_45_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_46_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_47_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_48_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_49_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_50_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_51_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_52_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_53_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_54_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_55_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_56_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_57_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_58_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_59_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_60_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_61_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_62_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_64u_config6_U0.res_V_data_63_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_relu_array_array_ap_ufixed_64u_relu_config7_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_4_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_4_reg <= proc_dep_vld_vec_4;
        end
    end
    assign in_chan_dep_vld_vec_4[0] = dep_chan_vld_3_4;
    assign in_chan_dep_data_vec_4[13 : 0] = dep_chan_data_3_4;
    assign token_in_vec_4[0] = token_3_4;
    assign in_chan_dep_vld_vec_4[1] = dep_chan_vld_5_4;
    assign in_chan_dep_data_vec_4[27 : 14] = dep_chan_data_5_4;
    assign token_in_vec_4[1] = token_5_4;
    assign dep_chan_vld_4_3 = out_chan_dep_vld_vec_4[0];
    assign dep_chan_data_4_3 = out_chan_dep_data_4;
    assign token_4_3 = token_out_vec_4[0];
    assign dep_chan_vld_4_5 = out_chan_dep_vld_vec_4[1];
    assign dep_chan_data_4_5 = out_chan_dep_data_4;
    assign token_4_5 = token_out_vec_4[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_64u_relu_config7_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_64u_relu_config7_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_64u_relu_config7_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0
    AESL_deadlock_detect_unit #(14, 5, 2, 2) AESL_deadlock_detect_unit_5 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_5),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_5),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_5),
        .token_in_vec(token_in_vec_5),
        .dl_detect_in(dl_detect_out),
        .origin(origin[5]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_5),
        .out_chan_dep_data(out_chan_dep_data_5),
        .token_out_vec(token_out_vec_5),
        .dl_detect_out(dl_in_vec[5]));

    assign proc_dep_vld_vec_5[0] = dl_detect_out ? proc_dep_vld_vec_5_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_31_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_32_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_33_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_34_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_35_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_36_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_37_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_38_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_39_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_40_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_41_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_42_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_43_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_44_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_45_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_46_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_47_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_48_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_49_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_50_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_51_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_52_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_53_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_54_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_55_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_56_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_57_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_58_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_59_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_60_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_61_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_62_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.data_V_data_63_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_relu_array_array_ap_ufixed_64u_relu_config7_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_64u_relu_config7_U0$ap_idle)));
    assign proc_dep_vld_vec_5[1] = dl_detect_out ? proc_dep_vld_vec_5_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_31_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_32_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_33_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_34_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_35_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_36_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_37_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_38_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_39_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_40_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_41_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_42_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_43_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_44_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_45_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_46_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_47_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_48_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_49_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_50_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_51_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_52_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_53_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_54_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_55_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_56_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_57_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_58_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_59_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_60_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_61_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_62_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_64u_relu_config7_U0.res_V_data_63_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_32u_confijbC_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_5_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_5_reg <= proc_dep_vld_vec_5;
        end
    end
    assign in_chan_dep_vld_vec_5[0] = dep_chan_vld_4_5;
    assign in_chan_dep_data_vec_5[13 : 0] = dep_chan_data_4_5;
    assign token_in_vec_5[0] = token_4_5;
    assign in_chan_dep_vld_vec_5[1] = dep_chan_vld_6_5;
    assign in_chan_dep_data_vec_5[27 : 14] = dep_chan_data_6_5;
    assign token_in_vec_5[1] = token_6_5;
    assign dep_chan_vld_5_4 = out_chan_dep_vld_vec_5[0];
    assign dep_chan_data_5_4 = out_chan_dep_data_5;
    assign token_5_4 = token_out_vec_5[0];
    assign dep_chan_vld_5_6 = out_chan_dep_vld_vec_5[1];
    assign dep_chan_data_5_6 = out_chan_dep_data_5;
    assign token_5_6 = token_out_vec_5[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0
    AESL_deadlock_detect_unit #(14, 6, 2, 2) AESL_deadlock_detect_unit_6 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_6),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_6),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_6),
        .token_in_vec(token_in_vec_6),
        .dl_detect_in(dl_detect_out),
        .origin(origin[6]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_6),
        .out_chan_dep_data(out_chan_dep_data_6),
        .token_out_vec(token_out_vec_6),
        .dl_detect_out(dl_in_vec[6]));

    assign proc_dep_vld_vec_6[0] = dl_detect_out ? proc_dep_vld_vec_6_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_31_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_32_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_33_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_34_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_35_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_36_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_37_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_38_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_39_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_40_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_41_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_42_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_43_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_44_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_45_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_46_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_47_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_48_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_49_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_50_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_51_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_52_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_53_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_54_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_55_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_56_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_57_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_58_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_59_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_60_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_61_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_62_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.data_stream_V_data_63_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_32u_confijbC_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0$ap_idle)));
    assign proc_dep_vld_vec_6[1] = dl_detect_out ? proc_dep_vld_vec_6_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_32u_config8_U0.res_stream_V_data_31_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_normalize_array_array_ap_fixed_32u_config10_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_6_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_6_reg <= proc_dep_vld_vec_6;
        end
    end
    assign in_chan_dep_vld_vec_6[0] = dep_chan_vld_5_6;
    assign in_chan_dep_data_vec_6[13 : 0] = dep_chan_data_5_6;
    assign token_in_vec_6[0] = token_5_6;
    assign in_chan_dep_vld_vec_6[1] = dep_chan_vld_7_6;
    assign in_chan_dep_data_vec_6[27 : 14] = dep_chan_data_7_6;
    assign token_in_vec_6[1] = token_7_6;
    assign dep_chan_vld_6_5 = out_chan_dep_vld_vec_6[0];
    assign dep_chan_data_6_5 = out_chan_dep_data_6;
    assign token_6_5 = token_out_vec_6[0];
    assign dep_chan_vld_6_7 = out_chan_dep_vld_vec_6[1];
    assign dep_chan_data_6_7 = out_chan_dep_data_6;
    assign token_6_7 = token_out_vec_6[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_32u_config10_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_32u_config10_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_32u_config10_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0
    AESL_deadlock_detect_unit #(14, 7, 2, 2) AESL_deadlock_detect_unit_7 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_7),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_7),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_7),
        .token_in_vec(token_in_vec_7),
        .dl_detect_in(dl_detect_out),
        .origin(origin[7]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_7),
        .out_chan_dep_data(out_chan_dep_data_7),
        .token_out_vec(token_out_vec_7),
        .dl_detect_out(dl_in_vec[7]));

    assign proc_dep_vld_vec_7[0] = dl_detect_out ? proc_dep_vld_vec_7_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.data_V_data_31_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_normalize_array_array_ap_fixed_32u_config10_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_32u_config10_U0$ap_idle)));
    assign proc_dep_vld_vec_7[1] = dl_detect_out ? proc_dep_vld_vec_7_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_32u_config10_U0.res_V_data_31_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_relu_array_array_ap_ufixed_32u_relu_config11_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_7_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_7_reg <= proc_dep_vld_vec_7;
        end
    end
    assign in_chan_dep_vld_vec_7[0] = dep_chan_vld_6_7;
    assign in_chan_dep_data_vec_7[13 : 0] = dep_chan_data_6_7;
    assign token_in_vec_7[0] = token_6_7;
    assign in_chan_dep_vld_vec_7[1] = dep_chan_vld_8_7;
    assign in_chan_dep_data_vec_7[27 : 14] = dep_chan_data_8_7;
    assign token_in_vec_7[1] = token_8_7;
    assign dep_chan_vld_7_6 = out_chan_dep_vld_vec_7[0];
    assign dep_chan_data_7_6 = out_chan_dep_data_7;
    assign token_7_6 = token_out_vec_7[0];
    assign dep_chan_vld_7_8 = out_chan_dep_vld_vec_7[1];
    assign dep_chan_data_7_8 = out_chan_dep_data_7;
    assign token_7_8 = token_out_vec_7[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_32u_relu_config11_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_32u_relu_config11_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_32u_relu_config11_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0
    AESL_deadlock_detect_unit #(14, 8, 2, 2) AESL_deadlock_detect_unit_8 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_8),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_8),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_8),
        .token_in_vec(token_in_vec_8),
        .dl_detect_in(dl_detect_out),
        .origin(origin[8]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_8),
        .out_chan_dep_data(out_chan_dep_data_8),
        .token_out_vec(token_out_vec_8),
        .dl_detect_out(dl_in_vec[8]));

    assign proc_dep_vld_vec_8[0] = dl_detect_out ? proc_dep_vld_vec_8_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.data_V_data_31_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_relu_array_array_ap_ufixed_32u_relu_config11_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_32u_relu_config11_U0$ap_idle)));
    assign proc_dep_vld_vec_8[1] = dl_detect_out ? proc_dep_vld_vec_8_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_32u_relu_config11_U0.res_V_data_31_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_16u_confikbM_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_8_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_8_reg <= proc_dep_vld_vec_8;
        end
    end
    assign in_chan_dep_vld_vec_8[0] = dep_chan_vld_7_8;
    assign in_chan_dep_data_vec_8[13 : 0] = dep_chan_data_7_8;
    assign token_in_vec_8[0] = token_7_8;
    assign in_chan_dep_vld_vec_8[1] = dep_chan_vld_9_8;
    assign in_chan_dep_data_vec_8[27 : 14] = dep_chan_data_9_8;
    assign token_in_vec_8[1] = token_9_8;
    assign dep_chan_vld_8_7 = out_chan_dep_vld_vec_8[0];
    assign dep_chan_data_8_7 = out_chan_dep_data_8;
    assign token_8_7 = token_out_vec_8[0];
    assign dep_chan_vld_8_9 = out_chan_dep_vld_vec_8[1];
    assign dep_chan_data_8_9 = out_chan_dep_data_8;
    assign token_8_9 = token_out_vec_8[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0
    AESL_deadlock_detect_unit #(14, 9, 2, 2) AESL_deadlock_detect_unit_9 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_9),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_9),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_9),
        .token_in_vec(token_in_vec_9),
        .dl_detect_in(dl_detect_out),
        .origin(origin[9]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_9),
        .out_chan_dep_data(out_chan_dep_data_9),
        .token_out_vec(token_out_vec_9),
        .dl_detect_out(dl_in_vec[9]));

    assign proc_dep_vld_vec_9[0] = dl_detect_out ? proc_dep_vld_vec_9_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_15_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_16_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_17_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_18_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_19_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_20_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_21_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_22_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_23_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_24_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_25_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_26_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_27_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_28_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_29_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_30_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.data_stream_V_data_31_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_16u_confikbM_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0$ap_idle)));
    assign proc_dep_vld_vec_9[1] = dl_detect_out ? proc_dep_vld_vec_9_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_16u_config12_U0.res_stream_V_data_15_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_normalize_array_array_ap_fixed_16u_config14_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_9_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_9_reg <= proc_dep_vld_vec_9;
        end
    end
    assign in_chan_dep_vld_vec_9[0] = dep_chan_vld_8_9;
    assign in_chan_dep_data_vec_9[13 : 0] = dep_chan_data_8_9;
    assign token_in_vec_9[0] = token_8_9;
    assign in_chan_dep_vld_vec_9[1] = dep_chan_vld_10_9;
    assign in_chan_dep_data_vec_9[27 : 14] = dep_chan_data_10_9;
    assign token_in_vec_9[1] = token_10_9;
    assign dep_chan_vld_9_8 = out_chan_dep_vld_vec_9[0];
    assign dep_chan_data_9_8 = out_chan_dep_data_9;
    assign token_9_8 = token_out_vec_9[0];
    assign dep_chan_vld_9_10 = out_chan_dep_vld_vec_9[1];
    assign dep_chan_data_9_10 = out_chan_dep_data_9;
    assign token_9_10 = token_out_vec_9[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_16u_config14_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_16u_config14_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_16u_config14_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0
    AESL_deadlock_detect_unit #(14, 10, 2, 2) AESL_deadlock_detect_unit_10 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_10),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_10),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_10),
        .token_in_vec(token_in_vec_10),
        .dl_detect_in(dl_detect_out),
        .origin(origin[10]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_10),
        .out_chan_dep_data(out_chan_dep_data_10),
        .token_out_vec(token_out_vec_10),
        .dl_detect_out(dl_in_vec[10]));

    assign proc_dep_vld_vec_10[0] = dl_detect_out ? proc_dep_vld_vec_10_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.data_V_data_15_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_normalize_array_array_ap_fixed_16u_config14_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$normalize_array_array_ap_fixed_16u_config14_U0$ap_idle)));
    assign proc_dep_vld_vec_10[1] = dl_detect_out ? proc_dep_vld_vec_10_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.normalize_array_array_ap_fixed_16u_config14_U0.res_V_data_15_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_relu_array_array_ap_ufixed_16u_relu_config15_U0_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_10_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_10_reg <= proc_dep_vld_vec_10;
        end
    end
    assign in_chan_dep_vld_vec_10[0] = dep_chan_vld_9_10;
    assign in_chan_dep_data_vec_10[13 : 0] = dep_chan_data_9_10;
    assign token_in_vec_10[0] = token_9_10;
    assign in_chan_dep_vld_vec_10[1] = dep_chan_vld_11_10;
    assign in_chan_dep_data_vec_10[27 : 14] = dep_chan_data_11_10;
    assign token_in_vec_10[1] = token_11_10;
    assign dep_chan_vld_10_9 = out_chan_dep_vld_vec_10[0];
    assign dep_chan_data_10_9 = out_chan_dep_data_10;
    assign token_10_9 = token_out_vec_10[0];
    assign dep_chan_vld_10_11 = out_chan_dep_vld_vec_10[1];
    assign dep_chan_data_10_11 = out_chan_dep_data_10;
    assign token_10_11 = token_out_vec_10[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_16u_relu_config15_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_16u_relu_config15_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_16u_relu_config15_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0
    AESL_deadlock_detect_unit #(14, 11, 2, 2) AESL_deadlock_detect_unit_11 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_11),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_11),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_11),
        .token_in_vec(token_in_vec_11),
        .dl_detect_in(dl_detect_out),
        .origin(origin[11]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_11),
        .out_chan_dep_data(out_chan_dep_data_11),
        .token_out_vec(token_out_vec_11),
        .dl_detect_out(dl_in_vec[11]));

    assign proc_dep_vld_vec_11[0] = dl_detect_out ? proc_dep_vld_vec_11_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.data_V_data_15_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_relu_array_array_ap_ufixed_16u_relu_config15_U0_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$relu_array_array_ap_ufixed_16u_relu_config15_U0$ap_idle)));
    assign proc_dep_vld_vec_11[1] = dl_detect_out ? proc_dep_vld_vec_11_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.relu_array_array_ap_ufixed_16u_relu_config15_U0.res_V_data_15_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_6u_configlbW_U.if_full_n & AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.ap_done));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_11_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_11_reg <= proc_dep_vld_vec_11;
        end
    end
    assign in_chan_dep_vld_vec_11[0] = dep_chan_vld_10_11;
    assign in_chan_dep_data_vec_11[13 : 0] = dep_chan_data_10_11;
    assign token_in_vec_11[0] = token_10_11;
    assign in_chan_dep_vld_vec_11[1] = dep_chan_vld_12_11;
    assign in_chan_dep_data_vec_11[27 : 14] = dep_chan_data_12_11;
    assign token_in_vec_11[1] = token_12_11;
    assign dep_chan_vld_11_10 = out_chan_dep_vld_vec_11[0];
    assign dep_chan_data_11_10 = out_chan_dep_data_11;
    assign token_11_10 = token_out_vec_11[0];
    assign dep_chan_vld_11_12 = out_chan_dep_vld_vec_11[1];
    assign dep_chan_data_11_12 = out_chan_dep_data_11;
    assign token_11_12 = token_out_vec_11[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0$ap_idle <= AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0
    AESL_deadlock_detect_unit #(14, 12, 2, 2) AESL_deadlock_detect_unit_12 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_12),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_12),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_12),
        .token_in_vec(token_in_vec_12),
        .dl_detect_in(dl_detect_out),
        .origin(origin[12]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_12),
        .out_chan_dep_data(out_chan_dep_data_12),
        .token_out_vec(token_out_vec_12),
        .dl_detect_out(dl_in_vec[12]));

    assign proc_dep_vld_vec_12[0] = dl_detect_out ? proc_dep_vld_vec_12_reg[0] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_5_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_6_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_7_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_8_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_9_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_10_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_11_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_12_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_13_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_14_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.data_stream_V_data_15_V_blk_n | (~AESL_inst_myproject_axi.myproject_U0.start_for_dense_array_array_ap_fixed_16_6_5_3_0_6u_configlbW_U.if_empty_n & (AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.ap_ready | AESL_inst_myproject_axi$myproject_U0$dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0$ap_idle)));
    assign proc_dep_vld_vec_12[1] = dl_detect_out ? proc_dep_vld_vec_12_reg[1] : (~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.myproject_U0.dense_array_array_ap_fixed_16_6_5_3_0_6u_config16_U0.res_stream_V_data_5_V_blk_n);
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_12_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_12_reg <= proc_dep_vld_vec_12;
        end
    end
    assign in_chan_dep_vld_vec_12[0] = dep_chan_vld_11_12;
    assign in_chan_dep_data_vec_12[13 : 0] = dep_chan_data_11_12;
    assign token_in_vec_12[0] = token_11_12;
    assign in_chan_dep_vld_vec_12[1] = dep_chan_vld_13_12;
    assign in_chan_dep_data_vec_12[27 : 14] = dep_chan_data_13_12;
    assign token_in_vec_12[1] = token_13_12;
    assign dep_chan_vld_12_11 = out_chan_dep_vld_vec_12[0];
    assign dep_chan_data_12_11 = out_chan_dep_data_12;
    assign token_12_11 = token_out_vec_12[0];
    assign dep_chan_vld_12_13 = out_chan_dep_vld_vec_12[1];
    assign dep_chan_data_12_13 = out_chan_dep_data_12;
    assign token_12_13 = token_out_vec_12[1];

    // delay ap_idle for one cycle
    reg [0:0] AESL_inst_myproject_axi$Block_myproject_axi_exit31_proc_U0$ap_idle;
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            AESL_inst_myproject_axi$Block_myproject_axi_exit31_proc_U0$ap_idle <= 'b0;
        end
        else begin
            AESL_inst_myproject_axi$Block_myproject_axi_exit31_proc_U0$ap_idle <= AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.ap_idle;
        end
    end
    // Process: AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0
    AESL_deadlock_detect_unit #(14, 13, 2, 2) AESL_deadlock_detect_unit_13 (
        .reset(reset),
        .clock(clock),
        .proc_dep_vld_vec(proc_dep_vld_vec_13),
        .in_chan_dep_vld_vec(in_chan_dep_vld_vec_13),
        .in_chan_dep_data_vec(in_chan_dep_data_vec_13),
        .token_in_vec(token_in_vec_13),
        .dl_detect_in(dl_detect_out),
        .origin(origin[13]),
        .token_clear(token_clear),
        .out_chan_dep_vld_vec(out_chan_dep_vld_vec_13),
        .out_chan_dep_data(out_chan_dep_data_13),
        .token_out_vec(token_out_vec_13),
        .dl_detect_out(dl_in_vec[13]));

    assign proc_dep_vld_vec_13[0] = dl_detect_out ? proc_dep_vld_vec_13_reg[0] : (~AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.out_local_V_data_0_V_blk_n | ~AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.out_local_V_data_1_V_blk_n | ~AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.out_local_V_data_2_V_blk_n | ~AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.out_local_V_data_3_V_blk_n | ~AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.out_local_V_data_4_V_blk_n | ~AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.out_local_V_data_5_V_blk_n);
    assign proc_dep_vld_vec_13[1] = dl_detect_out ? proc_dep_vld_vec_13_reg[1] : ((~AESL_inst_myproject_axi.start_for_Block_myproject_axi_exit31_proc_U0_U.if_empty_n & (AESL_inst_myproject_axi.Block_myproject_axi_exit31_proc_U0.ap_ready | AESL_inst_myproject_axi$Block_myproject_axi_exit31_proc_U0$ap_idle)));
    always @ (negedge reset or posedge clock) begin
        if (~reset) begin
            proc_dep_vld_vec_13_reg <= 'b0;
        end
        else begin
            proc_dep_vld_vec_13_reg <= proc_dep_vld_vec_13;
        end
    end
    assign in_chan_dep_vld_vec_13[0] = dep_chan_vld_1_13;
    assign in_chan_dep_data_vec_13[13 : 0] = dep_chan_data_1_13;
    assign token_in_vec_13[0] = token_1_13;
    assign in_chan_dep_vld_vec_13[1] = dep_chan_vld_12_13;
    assign in_chan_dep_data_vec_13[27 : 14] = dep_chan_data_12_13;
    assign token_in_vec_13[1] = token_12_13;
    assign dep_chan_vld_13_12 = out_chan_dep_vld_vec_13[0];
    assign dep_chan_data_13_12 = out_chan_dep_data_13;
    assign token_13_12 = token_out_vec_13[0];
    assign dep_chan_vld_13_1 = out_chan_dep_vld_vec_13[1];
    assign dep_chan_data_13_1 = out_chan_dep_data_13;
    assign token_13_1 = token_out_vec_13[1];


    AESL_deadlock_report_unit #(14) AESL_deadlock_report_unit_inst (
        .reset(reset),
        .clock(clock),
        .dl_in_vec(dl_in_vec),
        .dl_detect_out(dl_detect_out),
        .origin(origin),
        .token_clear(token_clear));

endmodule
