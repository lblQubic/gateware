module adder_bank #(
	parameter dw=16,
	parameter n=4,
	parameter logn=$clog2(n)  // Don't change this
) (
	input clk,
	input [dw*n-1:0] xin,
	output signed [dw+logn-1:0] xout
);

reg signed [dw+logn-1:0] sum=0;
generate if (n > 1) begin: halvsies
	wire signed [dw+$clog2(n-n/2)-1:0] xtop;
	wire signed [dw+$clog2(  n/2)-1:0] xbot;
	adder_bank #(.dw(dw), .n(n-n/2)) top(.clk(clk), .xin(xin[n*dw-1:(n/2)*dw]), .xout(xtop));
	adder_bank #(.dw(dw), .n(  n/2)) bot(.clk(clk), .xin(xin[(n/2)*dw-1:0]),    .xout(xbot));
	always @(posedge clk) sum <= xtop + xbot;
end else begin: passthrough
	// base of recursion
	always @(posedge clk) sum <= xin;
end endgenerate
assign xout = sum;

endmodule
