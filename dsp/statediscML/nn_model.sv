// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 
module nn_model #(parameter IN=35, parameter DS=17) //Change the size
(
        ifsd.sd sdif,
        // clk,
        // rst,
        // nn_start,
        // normalized_input,
        // ready,
        // idle,
        // done,
        // state_probability,
        // state

        input   rst,
        input   nn_start,
        output   nn_done,
        output   nn_idle,
        output   nn_ready,
        input  [IN:0] normalized_input,
        output  [DS:0] state_probability,
        output state
);

wire    ap_ST_fsm_pp0_stage0 = 1'b1;
// localparam IN=IN;
// localparam DS=OUT;
localparam SS=11;
// input   clk;
// input   rst;
// input   nn_start;
// output   done;
// output   idle;
// output   ready;
// input  [IN:0] normalized_input;
// output  [DS:0] state_probability;
// output state;

reg done;
reg idle;
reg ready;
reg input_2_V_ap_vld = 1'b1;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter9;
reg    ap_enable_reg_pp0_iter10;
reg    ap_enable_reg_pp0_iter11;
reg    ap_enable_reg_pp0_iter12;
reg    ap_enable_reg_pp0_iter13;
reg    ap_enable_reg_pp0_iter14;
reg    ap_enable_reg_pp0_iter15;
reg    ap_enable_reg_pp0_iter16;
reg    ap_enable_reg_pp0_iter17;
reg    ap_enable_reg_pp0_iter18;
reg    ap_enable_reg_pp0_iter19;
reg    ap_enable_reg_pp0_iter20;
reg    ap_enable_reg_pp0_iter21;


reg    ap_idle_pp0;
reg    input_2_V_ap_vld_in_sig;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_state6_pp0_stage0_iter5;
wire    ap_block_state7_pp0_stage0_iter6;
wire    ap_block_state8_pp0_stage0_iter7;
wire    ap_block_state9_pp0_stage0_iter8;
wire    ap_block_state10_pp0_stage0_iter9;
wire    ap_block_state11_pp0_stage0_iter10;
wire    ap_block_state12_pp0_stage0_iter11;
wire    ap_block_state13_pp0_stage0_iter12;
reg    ap_block_pp0_stage0_11001;
reg   [IN:0] input_2_V_in_sig;
reg    input_2_V_ap_vld_preg;
reg    input_2_V_blk_n;
wire    ap_block_pp0_stage0;
reg   [DS:0] layer2_out_0_V_reg_209;
reg   [DS:0] layer2_out_1_V_reg_214;
reg   [DS:0] layer2_out_2_V_reg_219;
reg   [DS:0] layer2_out_3_V_reg_224;
reg   [DS:0] layer2_out_4_V_reg_229;
reg   [DS:0] layer2_out_5_V_reg_234;
reg   [DS:0] layer2_out_6_V_reg_239;
reg   [DS:0] layer2_out_7_V_reg_244;
reg   [DS:0] layer3_out_0_V_reg_249;
reg   [DS:0] layer3_out_1_V_reg_254;
reg   [DS:0] layer3_out_2_V_reg_259;
reg   [DS:0] layer3_out_3_V_reg_264;
reg   [DS:0] layer3_out_4_V_reg_269;
reg   [DS:0] layer3_out_5_V_reg_274;
reg   [DS:0] layer3_out_6_V_reg_279;
reg   [DS:0] layer3_out_7_V_reg_284;
reg   [DS:0] layer4_out_0_V_reg_289;
reg   [DS:0] layer4_out_1_V_reg_294;
reg   [DS:0] layer4_out_2_V_reg_299;
reg   [DS:0] layer4_out_3_V_reg_304;
reg   [DS:0] layer5_out_0_V_reg_309;
reg   [DS:0] layer5_out_1_V_reg_314;
reg   [DS:0] layer5_out_2_V_reg_319;
reg   [DS:0] layer5_out_3_V_reg_324;
wire   [DS:0] grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return;
reg   [DS:0] layer6_out_0_V_reg_329;
reg    ap_block_pp0_stage0_subdone;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3;
reg    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce;
reg    ap_block_state1_pp0_stage0_iter0_ignore_call25;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call25;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call25;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call25;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call25;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call25;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call25;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call25;
wire    ap_block_state9_pp0_stage0_iter8_ignore_call25;
wire    ap_block_state10_pp0_stage0_iter9_ignore_call25;
wire    ap_block_state11_pp0_stage0_iter10_ignore_call25;
wire    ap_block_state12_pp0_stage0_iter11_ignore_call25;
wire    ap_block_state13_pp0_stage0_iter12_ignore_call25;
reg    ap_block_pp0_stage0_11001_ignoreCallOp34;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6;
wire   [DS:0] grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7;
reg    grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce;
reg    ap_block_state1_pp0_stage0_iter0_ignore_call7;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call7;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call7;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call7;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call7;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call7;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call7;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call7;
wire    ap_block_state9_pp0_stage0_iter8_ignore_call7;
wire    ap_block_state10_pp0_stage0_iter9_ignore_call7;
wire    ap_block_state11_pp0_stage0_iter10_ignore_call7;
wire    ap_block_state12_pp0_stage0_iter11_ignore_call7;
wire    ap_block_state13_pp0_stage0_iter12_ignore_call7;
reg    ap_block_pp0_stage0_11001_ignoreCallOp15;
wire    call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_ready;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
wire   [DS:0] call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
wire    grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start;
wire    grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done;
wire    grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle;
wire    grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready;
reg    grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce;
wire   [SS:0] grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return;
reg    ap_block_state1_pp0_stage0_iter0_ignore_call36;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call36;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call36;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call36;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call36;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call36;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call36;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call36;
wire    ap_block_state9_pp0_stage0_iter8_ignore_call36;
wire    ap_block_state10_pp0_stage0_iter9_ignore_call36;
wire    ap_block_state11_pp0_stage0_iter10_ignore_call36;
wire    ap_block_state12_pp0_stage0_iter11_ignore_call36;
wire    ap_block_state13_pp0_stage0_iter12_ignore_call36;
reg    ap_block_pp0_stage0_11001_ignoreCallOp49;
reg    grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce;
reg    ap_block_state1_pp0_stage0_iter0_ignore_call35;
wire    ap_block_state2_pp0_stage0_iter1_ignore_call35;
wire    ap_block_state3_pp0_stage0_iter2_ignore_call35;
wire    ap_block_state4_pp0_stage0_iter3_ignore_call35;
wire    ap_block_state5_pp0_stage0_iter4_ignore_call35;
wire    ap_block_state6_pp0_stage0_iter5_ignore_call35;
wire    ap_block_state7_pp0_stage0_iter6_ignore_call35;
wire    ap_block_state8_pp0_stage0_iter7_ignore_call35;
wire    ap_block_state9_pp0_stage0_iter8_ignore_call35;
wire    ap_block_state10_pp0_stage0_iter9_ignore_call35;
wire    ap_block_state11_pp0_stage0_iter10_ignore_call35;
wire    ap_block_state12_pp0_stage0_iter11_ignore_call35;
wire    ap_block_state13_pp0_stage0_iter12_ignore_call35;
reg    ap_block_pp0_stage0_11001_ignoreCallOp47;
wire    call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_ready;
wire   [DS:0] call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
wire   [DS:0] call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
wire   [DS:0] call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
wire   [DS:0] call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
reg    grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg;
reg    ap_block_pp0_stage0_01001;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_delays;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
ap_CS_fsm = 1'd1;
ap_enable_reg_pp0_iter1 = 1'b0;
ap_enable_reg_pp0_iter2 = 1'b0;
ap_enable_reg_pp0_iter3 = 1'b0;
ap_enable_reg_pp0_iter4 = 1'b0;
ap_enable_reg_pp0_iter5 = 1'b0;
ap_enable_reg_pp0_iter6 = 1'b0;
ap_enable_reg_pp0_iter7 = 1'b0;
ap_enable_reg_pp0_iter8 = 1'b0;
ap_enable_reg_pp0_iter9 = 1'b0;
ap_enable_reg_pp0_iter10 = 1'b0;
ap_enable_reg_pp0_iter11 = 1'b0;
ap_enable_reg_pp0_iter12 = 1'b0;
ap_enable_reg_pp0_iter13 = 1'b0;
ap_enable_reg_pp0_iter14 = 1'b0;
ap_enable_reg_pp0_iter15 = 1'b0;
ap_enable_reg_pp0_iter16 = 1'b0;
ap_enable_reg_pp0_iter17 = 1'b0;
ap_enable_reg_pp0_iter18 = 1'b0;
ap_enable_reg_pp0_iter19 = 1'b0;
ap_enable_reg_pp0_iter20 = 1'b0;
ap_enable_reg_pp0_iter21 = 1'b0;

input_2_V_ap_vld_preg = 1'b0;
grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg = 1'b0;
end

dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0 #(.DS(17),.MS(29)) grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55(
    .sdif(sdif),
    // .ap_clk(sdif.clk),
    .ap_rst(rst),
    .data_0_V_read(layer3_out_0_V_reg_249),
    .data_1_V_read(layer3_out_1_V_reg_254),
    .data_2_V_read(layer3_out_2_V_reg_259),
    .data_3_V_read(layer3_out_3_V_reg_264),
    .data_4_V_read(layer3_out_4_V_reg_269),
    .data_5_V_read(layer3_out_5_V_reg_274),
    .data_6_V_read(layer3_out_6_V_reg_279),
    .data_7_V_read(layer3_out_7_V_reg_284),
    .ap_return_0(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0),
    .ap_return_1(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1),
    .ap_return_2(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2),
    .ap_return_3(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3),
    .ap_ce(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce)
);

dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0 #(.DS(17),.MS(29)) grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67(
    .sdif(sdif),
    // .ap_clk(sdif.clk),
    .ap_rst(rst),
    .data_V_read(input_2_V_in_sig),
    .ap_return_0(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0),
    .ap_return_1(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1),
    .ap_return_2(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2),
    .ap_return_3(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3),
    .ap_return_4(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4),
    .ap_return_5(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5),
    .ap_return_6(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6),
    .ap_return_7(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7),
    .ap_ce(grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce)
);

relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73(
    .ap_ready(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_ready),
    .data_0_V_read(layer2_out_0_V_reg_209),
    .data_1_V_read(layer2_out_1_V_reg_214),
    .data_2_V_read(layer2_out_2_V_reg_219),
    .data_3_V_read(layer2_out_3_V_reg_224),
    .data_4_V_read(layer2_out_4_V_reg_229),
    .data_5_V_read(layer2_out_5_V_reg_234),
    .data_6_V_read(layer2_out_6_V_reg_239),
    .data_7_V_read(layer2_out_7_V_reg_244),
    .ap_return_0(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0),
    .ap_return_1(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1),
    .ap_return_2(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2),
    .ap_return_3(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3),
    .ap_return_4(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4),
    .ap_return_5(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5),
    .ap_return_6(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6),
    .ap_return_7(call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7)
);

sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85(
    .ap_clk(sdif.clk),
    .ap_rst(rst),
    .ap_start(grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start),
    .ap_done(grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_done),
    .ap_idle(grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_idle),
    .ap_ready(grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready),
    .ap_ce(grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce),
    .data_V_read(layer6_out_0_V_reg_329),
    .ap_return(grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return)
);

dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0 #(.DS(17),.MS(29)) grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92(
    .sdif(sdif),
    // .ap_clk(sdif.clk),
    .ap_rst(rst),
    .data_0_V_read(layer5_out_0_V_reg_309),
    .data_1_V_read(layer5_out_1_V_reg_314),
    .data_2_V_read(layer5_out_2_V_reg_319),
    .data_3_V_read(layer5_out_3_V_reg_324),
    .ap_return(grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return),
    .ap_ce(grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce)
);

relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100(
    .ap_ready(call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_ready),
    .data_0_V_read(layer4_out_0_V_reg_289),
    .data_1_V_read(layer4_out_1_V_reg_294),
    .data_2_V_read(layer4_out_2_V_reg_299),
    .data_3_V_read(layer4_out_3_V_reg_304),
    .ap_return_0(call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0),
    .ap_return_1(call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1),
    .ap_return_2(call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2),
    .ap_return_3(call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3)
);

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

// Constant delay counter of 12 sdif.clk (start->iter0->iter1->iter2 -----> iter12)
always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= nn_start;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter11 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter11 <= ap_enable_reg_pp0_iter10;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter12 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter12 <= ap_enable_reg_pp0_iter11;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter13 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter13 <= ap_enable_reg_pp0_iter12;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter14 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter14 <= ap_enable_reg_pp0_iter13;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter15 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter15 <= ap_enable_reg_pp0_iter14;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter16 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter16 <= ap_enable_reg_pp0_iter15;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter17 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter17 <= ap_enable_reg_pp0_iter16;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter18 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter18 <= ap_enable_reg_pp0_iter17;
        end
    end
end

always @ (posedge sdif.clk) begin
   if (rst == 1'b1) begin
       ap_enable_reg_pp0_iter19 <= 1'b0;
   end else begin
       if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
           ap_enable_reg_pp0_iter19 <= ap_enable_reg_pp0_iter18;
       end
   end
end

always @ (posedge sdif.clk) begin
   if (rst == 1'b1) begin
       ap_enable_reg_pp0_iter20 <= 1'b0;
   end else begin
       if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
           ap_enable_reg_pp0_iter20 <= ap_enable_reg_pp0_iter19;
       end
   end
end

always @ (posedge sdif.clk) begin
   if (rst == 1'b1) begin
       ap_enable_reg_pp0_iter21 <= 1'b0;
   end else begin
       if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
           ap_enable_reg_pp0_iter21 <= ap_enable_reg_pp0_iter20;
       end
   end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter18 == 1'b1))) begin
            grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg <= 1'b1;
        end else if ((grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ready == 1'b1)) begin
            grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge sdif.clk) begin
    if (rst == 1'b1) begin
        input_2_V_ap_vld_preg <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_11001) & (nn_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            input_2_V_ap_vld_preg <= 1'b0;
        end else if ((~((nn_start == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0)) & (input_2_V_ap_vld == 1'b1))) begin
            input_2_V_ap_vld_preg <= input_2_V_ap_vld;
        end
    end
end


always @ (posedge sdif.clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        layer2_out_0_V_reg_209 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_0;
        layer2_out_1_V_reg_214 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_1;
        layer2_out_2_V_reg_219 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_2;
        layer2_out_3_V_reg_224 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_3;
        layer2_out_4_V_reg_229 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_4;
        layer2_out_5_V_reg_234 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_5;
        layer2_out_6_V_reg_239 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_6;
        layer2_out_7_V_reg_244 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_return_7;
    end
end

always @ (posedge sdif.clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        layer3_out_0_V_reg_249 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_0;
        layer3_out_1_V_reg_254 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_1;
        layer3_out_2_V_reg_259 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_2;
        layer3_out_3_V_reg_264 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_3;
        layer3_out_4_V_reg_269 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_4;
        layer3_out_5_V_reg_274 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_5;
        layer3_out_6_V_reg_279 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_6;
        layer3_out_7_V_reg_284 <= call_ret1_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config3_s_fu_73_ap_return_7;
        layer4_out_0_V_reg_289 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_0;
        layer4_out_1_V_reg_294 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_1;
        layer4_out_2_V_reg_299 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_2;
        layer4_out_3_V_reg_304 <= grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_return_3;
        layer5_out_0_V_reg_309 <= call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_0;
        layer5_out_1_V_reg_314 <= call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_1;
        layer5_out_2_V_reg_319 <= call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_2;
        layer5_out_3_V_reg_324 <= call_ret3_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_100_ap_return_3;
        layer6_out_0_V_reg_329 <= grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_return;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter21 == 1'b1))) begin
        done = 1'b1;
    end else begin
        done = 1'b0;
    end
end

always @ (*) begin
    if (((nn_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        idle = 1'b1;
    end else begin
        idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter21 == 1'b0) & (ap_enable_reg_pp0_iter20 == 1'b0) & (ap_enable_reg_pp0_iter19 == 1'b0) & (ap_enable_reg_pp0_iter18 == 1'b0) & (ap_enable_reg_pp0_iter17 == 1'b0) & (ap_enable_reg_pp0_iter16 == 1'b0) & (ap_enable_reg_pp0_iter15 == 1'b0) & (ap_enable_reg_pp0_iter14 == 1'b0) & (ap_enable_reg_pp0_iter13 == 1'b0) & (ap_enable_reg_pp0_iter12 == 1'b0) & (ap_enable_reg_pp0_iter11 == 1'b0) & (ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter20 == 1'b0) & (ap_enable_reg_pp0_iter19 == 1'b0) & (ap_enable_reg_pp0_iter18 == 1'b0) & (ap_enable_reg_pp0_iter17 == 1'b0) & (ap_enable_reg_pp0_iter16 == 1'b0) & (ap_enable_reg_pp0_iter15 == 1'b0) & (ap_enable_reg_pp0_iter14 == 1'b0) & (ap_enable_reg_pp0_iter13 == 1'b0) & (ap_enable_reg_pp0_iter12 == 1'b0) & (ap_enable_reg_pp0_iter11 == 1'b0) & (ap_enable_reg_pp0_iter10 == 1'b0) & (ap_enable_reg_pp0_iter9 == 1'b0) & (ap_enable_reg_pp0_iter8 == 1'b0) & (ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_delays = 1'b1;
    end else begin
        ap_idle_pp0_delays = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (nn_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ready = 1'b1;
    end else begin
        ready = 1'b0;
    end
end

always @ (*) begin
    if (((nn_start == 1'b0) & (ap_idle_pp0_delays == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp47) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce = 1'b1;
    end else begin
        grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_92_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp15) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce = 1'b1;
    end else begin
        grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config2_0_0_0_0_0_0_0_0_0_fu_67_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp34) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce = 1'b1;
    end else begin
        grp_dense_latency_ap_fixed_ap_fixed_16_6_5_3_0_config4_0_0_0_0_0_fu_55_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001_ignoreCallOp49) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce = 1'b1;
    end else begin
        grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_ce = 1'b0;
    end
end

always @ (*) begin
    if ((input_2_V_ap_vld == 1'b1)) begin
        input_2_V_ap_vld_in_sig = input_2_V_ap_vld;
    end else begin
        input_2_V_ap_vld_in_sig = input_2_V_ap_vld_preg;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (nn_start == 1'b1) & (nn_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        input_2_V_blk_n = input_2_V_ap_vld;
    end else begin
        input_2_V_blk_n = 1'b1;
    end
end
always @ (posedge sdif.clk) begin
    if ((input_2_V_ap_vld == 1'b1)) begin
        input_2_V_in_sig = normalized_input;

    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001_ignoreCallOp15 = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001_ignoreCallOp34 = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001_ignoreCallOp47 = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_11001_ignoreCallOp49 = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((nn_start == 1'b1) & ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0)));
end

assign ap_block_state10_pp0_stage0_iter9 = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter9_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter9_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter9_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter9_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter10 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter10_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter10_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter10_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage0_iter10_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter11 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter11_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter11_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter11_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter11_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter12 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter12_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter12_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter12_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter12_ignore_call7 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0_ignore_call25 = ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0_ignore_call35 = ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0_ignore_call36 = ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0_ignore_call7 = ((input_2_V_ap_vld_in_sig == 1'b0) | (nn_start == 1'b0));
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter5_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter6_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter7_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8_ignore_call25 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8_ignore_call35 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8_ignore_call36 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter8_ignore_call7 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = nn_start;

assign grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start = grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_start_reg;

assign state_probability = grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_85_ap_return;

assign nn_done = done;

assign nn_ready = ready;

assign nn_idle = idle;

//assign state = state_pred;
assign state = (state_probability > 2048) ? 1'b1 : 1'b0;

endmodule 
