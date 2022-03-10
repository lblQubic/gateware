`timescale 1ns / 1ns

module minmax2 #(
	parameter dw=16,
	parameter n=4
) (
	input clk,
	input reset,
	input [dw*n-1:0] xin,
	output signed [dw-1:0] xmin,
	output signed [dw-1:0] xmax
);

//reg signed [dw-1:0] xmin_r={dw{1'b1}};
//reg signed [dw-1:0] xmax_r={dw{1'b0}};
reg signed [dw-1:0] xmin_r={1'b0,{(dw-1){1'b1}}};
reg signed [dw-1:0] xmax_r={1'b1,{(dw-1){1'b0}}};
generate if (n>1) begin: halvsies
	wire signed [dw-1:0] xtop_min;
	wire signed [dw-1:0] xtop_max;
	wire signed [dw-1:0] xbot_min;
	wire signed [dw-1:0] xbot_max;
	minmax2 #(.dw(dw), .n(n-n/2)) top(.clk(clk), .reset(reset), .xin(xin[n*dw-1:(n/2)*dw]), .xmin(xtop_min), .xmax(xtop_max));
	minmax2 #(.dw(dw), .n(  n/2)) bot(.clk(clk), .reset(reset), .xin(xin[(n/2)*dw-1:0]),    .xmin(xbot_min), .xmax(xbot_max));
	always @(posedge clk) begin
		xmin_r <= (xtop_min < xbot_min) ? xtop_min : xbot_min;
		xmax_r <= (xtop_max > xbot_max) ? xtop_max : xbot_max;
	end
end else begin: passthrough
	//always @(posedge clk) begin
		//xmin_r <= xin;
		//xmax_r <= xin;
	//end
	reg signed [dw-1:0] xin_d=0;
	always @(posedge clk) begin
		xin_d <= xin;
		xmin_r <= reset ? xin_d : (xin_d < xmin_r) ? xin_d : xmin_r;
		xmax_r <= reset ? xin_d : (xin_d > xmax_r) ? xin_d : xmax_r;
	end
end endgenerate
assign xmin = xmin_r;
assign xmax = xmax_r;

endmodule
