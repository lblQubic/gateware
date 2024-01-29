// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s (
        ap_ready,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3
);


output   ap_ready;
localparam DS = 17;
input  [DS:0] data_0_V_read;
input  [DS:0] data_1_V_read;
input  [DS:0] data_2_V_read;
input  [DS:0] data_3_V_read;
output  [DS:0] ap_return_0;
output  [DS:0] ap_return_1;
output  [DS:0] ap_return_2;
output  [DS:0] ap_return_3;

wire   [0:0] tmp_1_fu_50_p2;
wire   [DS-1:0] tmp_fu_56_p1;
wire   [DS-1:0] res_0_V_write_assign_fu_60_p3;
wire   [0:0] tmp_1_1_fu_72_p2;
wire   [DS-1:0] tmp_7_fu_78_p1;
wire   [DS-1:0] res_1_V_write_assign_fu_82_p3;
wire   [0:0] tmp_1_2_fu_94_p2;
wire   [DS-1:0] tmp_8_fu_100_p1;
wire   [DS-1:0] res_2_V_write_assign_fu_104_p3;
wire   [0:0] tmp_1_3_fu_116_p2;
wire   [DS-1:0] tmp_9_fu_122_p1;
wire   [DS-1:0] res_3_V_write_assign_fu_126_p3;
wire   [DS:0] res_0_V_write_assign_cast_fu_68_p1;
wire   [DS:0] res_1_V_write_assign_cast_fu_90_p1;
wire   [DS:0] res_2_V_write_assign_cast_fu_112_p1;
wire   [DS:0] res_3_V_write_assign_cast_fu_134_p1;

assign ap_ready = 1'b1;

assign ap_return_0 = res_0_V_write_assign_cast_fu_68_p1;

assign ap_return_1 = res_1_V_write_assign_cast_fu_90_p1;

assign ap_return_2 = res_2_V_write_assign_cast_fu_112_p1;

assign ap_return_3 = res_3_V_write_assign_cast_fu_134_p1;

assign res_0_V_write_assign_cast_fu_68_p1 = res_0_V_write_assign_fu_60_p3;

assign res_0_V_write_assign_fu_60_p3 = ((tmp_1_fu_50_p2[0:0] === 1'b1) ? tmp_fu_56_p1 :0);

assign res_1_V_write_assign_cast_fu_90_p1 = res_1_V_write_assign_fu_82_p3;

assign res_1_V_write_assign_fu_82_p3 = ((tmp_1_1_fu_72_p2[0:0] === 1'b1) ? tmp_7_fu_78_p1 :0);

assign res_2_V_write_assign_cast_fu_112_p1 = res_2_V_write_assign_fu_104_p3;

assign res_2_V_write_assign_fu_104_p3 = ((tmp_1_2_fu_94_p2[0:0] === 1'b1) ? tmp_8_fu_100_p1 :0);

assign res_3_V_write_assign_cast_fu_134_p1 = res_3_V_write_assign_fu_126_p3;

assign res_3_V_write_assign_fu_126_p3 = ((tmp_1_3_fu_116_p2[0:0] === 1'b1) ? tmp_9_fu_122_p1 :0);

assign tmp_1_1_fu_72_p2 = (($signed(data_1_V_read) > $signed(0)) ? 1'b1 : 1'b0);

assign tmp_1_2_fu_94_p2 = (($signed(data_2_V_read) > $signed(0)) ? 1'b1 : 1'b0);

assign tmp_1_3_fu_116_p2 = (($signed(data_3_V_read) > $signed(0)) ? 1'b1 : 1'b0);

assign tmp_1_fu_50_p2 = (($signed(data_0_V_read) > $signed(0)) ? 1'b1 : 1'b0);

assign tmp_7_fu_78_p1 = data_1_V_read[DS-1:0];

assign tmp_8_fu_100_p1 = data_2_V_read[DS-1:0];

assign tmp_9_fu_122_p1 = data_3_V_read[DS-1:0];

assign tmp_fu_56_p1 = data_0_V_read[DS-1:0];

endmodule //relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s
