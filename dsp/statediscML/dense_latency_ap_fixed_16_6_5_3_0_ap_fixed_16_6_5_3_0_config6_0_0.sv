// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0 #(parameter DS = 17, parameter MS = 29) (
        ifsd.sd sdif,
        // ap_clk,
        // ap_rst,
        // data_0_V_read,
        // data_1_V_read,
        // data_2_V_read,
        // data_3_V_read,
        // ap_return,
        // ap_ce
        input   ap_rst,
        input  [DS:0] data_0_V_read,
        input  [DS:0] data_1_V_read,
        input  [DS:0] data_2_V_read,
        input  [DS:0] data_3_V_read,
        output  [DS:0] ap_return,
        input   ap_ce
);


// input   ap_clk;
// input   ap_rst;
// localparam DS = 17;
// localparam MS = 29;
// input  [DS:0] data_0_V_read;
// input  [DS:0] data_1_V_read;
// input  [DS:0] data_2_V_read;
// input  [DS:0] data_3_V_read;
// output  [DS:0] ap_return;
// input   ap_ce;

reg[DS:0] return0;

reg   [DS:0] tmp_5_reg_247;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [DS:0] tmp_5_1_reg_252;
reg   [DS:0] tmp_5_2_reg_257;
reg   [DS:0] tmp_5_3_reg_262;
wire  signed [DS:0] r_V_6_2_fu_70_p0;
wire    ap_block_pp0_stage0;
wire  signed [DS:0] r_V_6_fu_71_p0;
wire  signed [DS:0] r_V_6_3_fu_72_p0;
wire  signed [DS:0] r_V_6_1_fu_73_p0;
wire   [MS:0] r_V_6_fu_71_p2;
wire   [MS:0] r_V_6_1_fu_73_p2;
wire   [MS:0] r_V_6_2_fu_70_p2;
wire   [MS:0] r_V_6_3_fu_72_p2;
wire   [DS:0] tmp2_fu_231_p2;
wire   [DS:0] tmp1_fu_236_p2;
wire   [DS:0] tmp_fu_227_p2;
wire   [DS:0] res_V_write_assign_fu_241_p2;
reg    ap_ce_reg;
reg   [DS:0] ap_return_int_reg;


reg signed [DS:0] w0;
reg signed [DS:0] w1;
reg signed [DS:0] w2;
reg signed [DS:0] w3;
reg signed [DS:0] b;

wire signed [DS:0] w0_w;
wire signed [DS:0] w1_w;
wire signed [DS:0] w2_w;
wire signed [DS:0] w3_w;
wire signed [DS:0] b_w;
// Buffer for delays
reg signed [DS:0] node0;
reg signed [DS:0] node1;
reg signed [DS:0] node2;
reg signed [DS:0] node3;


assign w0_w = sdif.sdpara[48][17:0];
assign w1_w = sdif.sdpara[49][17:0];
assign w2_w = sdif.sdpara[50][17:0];
assign w3_w = sdif.sdpara[51][17:0];
assign b_w = sdif.sdpara[64][17:0];


always @ (posedge sdif.clk) begin
    ap_ce_reg <= ap_ce;
end

always @ (posedge sdif.clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        w0 <= w0_w;
        w1 <= w1_w;
        w2 <= w2_w;
        w3 <= w3_w;
        b <= b_w;
    end
end

always @ (posedge sdif.clk) begin
    if ((1'b1 == ap_ce_reg)) begin
        ap_return_int_reg <= res_V_write_assign_fu_241_p2;
    end
end

always @ (posedge sdif.clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == 1'b1))) begin
        tmp_5_1_reg_252 <= {{r_V_6_1_fu_73_p2[MS:MS-DS]}};
        node1 <= tmp_5_1_reg_252;
        tmp_5_2_reg_257 <= {{r_V_6_2_fu_70_p2[MS:MS-DS]}};
        node2 <= tmp_5_2_reg_257;
        tmp_5_3_reg_262 <= {{r_V_6_3_fu_72_p2[MS:MS-DS]}};
        node3 <= tmp_5_3_reg_262;
        tmp_5_reg_247 <= {{r_V_6_fu_71_p2[MS:MS-DS]}};
        node0 <= tmp_5_reg_247;
    end
end

always @ (*) begin
    if ((1'b0 == ap_ce_reg)) begin
        return0 = ap_return_int_reg;
    end else if ((1'b1 == ap_ce_reg)) begin
        return0 = res_V_write_assign_fu_241_p2;
    end
end

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign r_V_6_1_fu_73_p0 = data_1_V_read;

assign r_V_6_1_fu_73_p2 = ($signed(r_V_6_1_fu_73_p0) * $signed(w1));

assign r_V_6_2_fu_70_p0 = data_2_V_read;

assign r_V_6_2_fu_70_p2 = ($signed(r_V_6_2_fu_70_p0) * $signed(w2));

assign r_V_6_3_fu_72_p0 = data_3_V_read;

assign r_V_6_3_fu_72_p2 = ($signed(r_V_6_3_fu_72_p0) * $signed(w3));

assign r_V_6_fu_71_p0 = data_0_V_read;

assign r_V_6_fu_71_p2 = ($signed(r_V_6_fu_71_p0) * $signed(w0));

assign res_V_write_assign_fu_241_p2 = (tmp1_fu_236_p2 + tmp_fu_227_p2);

assign tmp1_fu_236_p2 = (tmp2_fu_231_p2 + node2);

assign tmp2_fu_231_p2 = (node3 + b);

assign tmp_fu_227_p2 = (node0 + node1);

assign ap_return = return0;

endmodule //dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0