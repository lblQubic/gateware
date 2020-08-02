//x^32 + x^26 + x^23 + x^22 + x^16 + x^12 + x^11 + x^10 + x^8 + x^7 + x^5 + x^4 + x^2 + x^1 + 1
//1 0000 0100 1100 0001 0001 1101 1011 0111
//1  0    4    c    1    1    d     b     7
//data width: 8
`timescale 1ns / 1ns
module crc_32_d8 #(parameter MSBFIRST=1,parameter INIT=32'hffffffff,VXOR=32'hffffffff,ZERO=32'hC704DD7B)
(input clk
,input [7:0] d_in
,input en
,output [31:0] crc
,input reset
,output zero
);
wire [7:0] din=MSBFIRST ? d_in : {d_in[0],d_in[1],d_in[2],d_in[3],d_in[4],d_in[5],d_in[6],d_in[7]};
reg [31:0] rcalc=0;
//wire [31:0] rin;
//assign rin=first ? INIT : rcalc;
reg [31:0] rin=0;
always @(posedge clk) begin
	if (reset)
		rin<=INIT;
	else
		if (en)
			rin<=rcalc;
end
//always  @(posedge clk) begin
always  @(*) begin
	if (reset)
		rcalc=0;
	else
		if (en)  begin
			rcalc[0]=din[6]^din[0]^rin[24]^rin[30];
			rcalc[1]=din[7]^din[6]^din[1]^din[0]^rin[24]^rin[25]^rin[30]^rin[31];
			rcalc[2]=din[7]^din[6]^din[2]^din[1]^din[0]^rin[24]^rin[25]^rin[26]^rin[30]^rin[31];
			rcalc[3]=din[7]^din[3]^din[2]^din[1]^rin[25]^rin[26]^rin[27]^rin[31];
			rcalc[4]=din[6]^din[4]^din[3]^din[2]^din[0]^rin[24]^rin[26]^rin[27]^rin[28]^rin[30];
			rcalc[5]=din[7]^din[6]^din[5]^din[4]^din[3]^din[1]^din[0]^rin[24]^rin[25]^rin[27]^rin[28]^rin[29]^rin[30]^rin[31];
			rcalc[6]=din[7]^din[6]^din[5]^din[4]^din[2]^din[1]^rin[25]^rin[26]^rin[28]^rin[29]^rin[30]^rin[31];
			rcalc[7]=din[7]^din[5]^din[3]^din[2]^din[0]^rin[24]^rin[26]^rin[27]^rin[29]^rin[31];
			rcalc[8]=din[4]^din[3]^din[1]^din[0]^rin[0]^rin[24]^rin[25]^rin[27]^rin[28];
			rcalc[9]=din[5]^din[4]^din[2]^din[1]^rin[1]^rin[25]^rin[26]^rin[28]^rin[29];
			rcalc[10]=din[5]^din[3]^din[2]^din[0]^rin[2]^rin[24]^rin[26]^rin[27]^rin[29];
			rcalc[11]=din[4]^din[3]^din[1]^din[0]^rin[3]^rin[24]^rin[25]^rin[27]^rin[28];
			rcalc[12]=din[6]^din[5]^din[4]^din[2]^din[1]^din[0]^rin[4]^rin[24]^rin[25]^rin[26]^rin[28]^rin[29]^rin[30];
			rcalc[13]=din[7]^din[6]^din[5]^din[3]^din[2]^din[1]^rin[5]^rin[25]^rin[26]^rin[27]^rin[29]^rin[30]^rin[31];
			rcalc[14]=din[7]^din[6]^din[4]^din[3]^din[2]^rin[6]^rin[26]^rin[27]^rin[28]^rin[30]^rin[31];
			rcalc[15]=din[7]^din[5]^din[4]^din[3]^rin[7]^rin[27]^rin[28]^rin[29]^rin[31];
			rcalc[16]=din[5]^din[4]^din[0]^rin[8]^rin[24]^rin[28]^rin[29];
			rcalc[17]=din[6]^din[5]^din[1]^rin[9]^rin[25]^rin[29]^rin[30];
			rcalc[18]=din[7]^din[6]^din[2]^rin[10]^rin[26]^rin[30]^rin[31];
			rcalc[19]=din[7]^din[3]^rin[11]^rin[27]^rin[31];
			rcalc[20]=din[4]^rin[12]^rin[28];
			rcalc[21]=din[5]^rin[13]^rin[29];
			rcalc[22]=din[0]^rin[14]^rin[24];
			rcalc[23]=din[6]^din[1]^din[0]^rin[15]^rin[24]^rin[25]^rin[30];
			rcalc[24]=din[7]^din[2]^din[1]^rin[16]^rin[25]^rin[26]^rin[31];
			rcalc[25]=din[3]^din[2]^rin[17]^rin[26]^rin[27];
			rcalc[26]=din[6]^din[4]^din[3]^din[0]^rin[18]^rin[24]^rin[27]^rin[28]^rin[30];
			rcalc[27]=din[7]^din[5]^din[4]^din[1]^rin[19]^rin[25]^rin[28]^rin[29]^rin[31];
			rcalc[28]=din[6]^din[5]^din[2]^rin[20]^rin[26]^rin[29]^rin[30];
			rcalc[29]=din[7]^din[6]^din[3]^rin[21]^rin[27]^rin[30]^rin[31];
			rcalc[30]=din[7]^din[4]^rin[22]^rin[28]^rin[31];
			rcalc[31]=din[5]^rin[23]^rin[29];
		end
end

wire [31:0] rxor = rcalc ^ VXOR;

wire [31:0] rev={rxor[0],rxor[1],rxor[2],rxor[3],rxor[4],rxor[5],rxor[6],rxor[7],rxor[8],rxor[9],rxor[10],rxor[11],rxor[12],rxor[13],rxor[14],rxor[15],rxor[16],rxor[17],rxor[18],rxor[19],rxor[20],rxor[21],rxor[22],rxor[23],rxor[24],rxor[25],rxor[26],rxor[27],rxor[28],rxor[29],rxor[30],rxor[31]};
assign crc= MSBFIRST ? rxor : rev;
assign zero = rcalc==ZERO;
endmodule

module crc_32_d8_2(
	input clk,
	input gate,
	input first,  // set this during the first clock cycle of a new block of data
	input [7:0] d_in,
	output [7:0] d_out,
	output zero
);
// http://en.wikipedia.org/wiki/Cyclic_redundancy_check
parameter wid=32;
parameter init=32'hffffffff;

reg [wid-1:0] rcalc=0;
wire [7:0] din = d_in;
wire [wid-1:0] rin = first ? init : rcalc;
always @(posedge clk) if (gate) begin
	rcalc[0] <= din[7]^din[1]^rin[24]^rin[30];
	rcalc[1] <= din[7]^din[6]^din[1]^din[0]^rin[24]^rin[25]^rin[30]^rin[31];
	rcalc[2] <= din[7]^din[6]^din[5]^din[1]^din[0]^rin[24]^rin[25]^rin[26]^rin[30]^rin[31];
	rcalc[3] <= din[6]^din[5]^din[4]^din[0]^rin[25]^rin[26]^rin[27]^rin[31];
	rcalc[4] <= din[7]^din[5]^din[4]^din[3]^din[1]^rin[24]^rin[26]^rin[27]^rin[28]^rin[30];
	rcalc[5] <= din[7]^din[6]^din[4]^din[3]^din[2]^din[1]^din[0]^rin[24]^rin[25]^rin[27]^rin[28]^rin[29]^rin[30]^rin[31];
	rcalc[6] <= din[6]^din[5]^din[3]^din[2]^din[1]^din[0]^rin[25]^rin[26]^rin[28]^rin[29]^rin[30]^rin[31];
	rcalc[7] <= din[7]^din[5]^din[4]^din[2]^din[0]^rin[24]^rin[26]^rin[27]^rin[29]^rin[31];
	rcalc[8] <= din[7]^rin[0]^din[6]^din[4]^din[3]^rin[24]^rin[25]^rin[27]^rin[28];
	rcalc[9] <= din[6]^rin[1]^din[5]^din[3]^din[2]^rin[25]^rin[26]^rin[28]^rin[29];
	rcalc[10] <= din[7]^din[5]^rin[2]^din[4]^din[2]^rin[24]^rin[26]^rin[27]^rin[29];
	rcalc[11] <= din[7]^din[6]^din[4]^rin[3]^din[3]^rin[24]^rin[25]^rin[27]^rin[28];
	rcalc[12] <= din[7]^din[6]^din[5]^din[3]^rin[4]^din[2]^din[1]^rin[24]^rin[25]^rin[26]^rin[28]^rin[29]^rin[30];
	rcalc[13] <= din[6]^din[5]^din[4]^din[2]^rin[5]^din[1]^din[0]^rin[25]^rin[26]^rin[27]^rin[29]^rin[30]^rin[31];
	rcalc[14] <= din[5]^din[4]^din[3]^din[1]^rin[6]^din[0]^rin[26]^rin[27]^rin[28]^rin[30]^rin[31];
	rcalc[15] <= din[4]^din[3]^din[2]^din[0]^rin[7]^rin[27]^rin[28]^rin[29]^rin[31];
	rcalc[16] <= din[7]^din[3]^din[2]^rin[8]^rin[24]^rin[28]^rin[29];
	rcalc[17] <= din[6]^din[2]^din[1]^rin[9]^rin[25]^rin[29]^rin[30];
	rcalc[18] <= din[5]^din[1]^din[0]^rin[10]^rin[26]^rin[30]^rin[31];
	rcalc[19] <= din[4]^din[0]^rin[11]^rin[27]^rin[31];
	rcalc[20] <= din[3]^rin[12]^rin[28];
	rcalc[21] <= din[2]^rin[13]^rin[29];
	rcalc[22] <= din[7]^rin[14]^rin[24];
	rcalc[23] <= din[7]^din[6]^din[1]^rin[15]^rin[24]^rin[25]^rin[30];
	rcalc[24] <= din[6]^din[5]^din[0]^rin[16]^rin[25]^rin[26]^rin[31];
	rcalc[25] <= din[5]^din[4]^rin[17]^rin[26]^rin[27];
	rcalc[26] <= din[7]^din[4]^din[3]^din[1]^rin[18]^rin[24]^rin[27]^rin[28]^rin[30];
	rcalc[27] <= din[6]^din[3]^din[2]^din[0]^rin[19]^rin[25]^rin[28]^rin[29]^rin[31];
	rcalc[28] <= din[5]^din[2]^din[1]^rin[20]^rin[26]^rin[29]^rin[30];
	rcalc[29] <= din[4]^din[1]^din[0]^rin[21]^rin[27]^rin[30]^rin[31];
	rcalc[30] <= din[3]^din[0]^rin[22]^rin[28]^rin[31];
	rcalc[31] <= din[2]^rin[23]^rin[29];
end
wire [7:0] dr = ~rcalc[wid-1:wid-8]; // note polarity inversion
assign d_out = {dr[0],dr[1],dr[2],dr[3],dr[4],dr[5],dr[6],dr[7]};
wire [31:0] rev={~rcalc[0],~rcalc[1],~rcalc[2],~rcalc[3],~rcalc[4],~rcalc[5],~rcalc[6],~rcalc[7],~rcalc[8],~rcalc[9],~rcalc[10],~rcalc[11],~rcalc[12],~rcalc[13],~rcalc[14],~rcalc[15],~rcalc[16],~rcalc[17],~rcalc[18],~rcalc[19],~rcalc[20],~rcalc[21],~rcalc[22],~rcalc[23],~rcalc[24],~rcalc[25],~rcalc[26],~rcalc[27],~rcalc[28],~rcalc[29],~rcalc[30],~rcalc[31]};

// note bit order reversal

// assign zero = ~(|rcalc);
assign zero = rcalc==32'hc704dd7b;
endmodule

