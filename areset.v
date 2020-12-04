module areset #(parameter WIDTH=1)
(input [WIDTH-1:0] areset
,input clk
,output [WIDTH-1:0] sreset
);
 (* KEEP = "TRUE" *) reg [WIDTH-1:0] reset_p=0;
 (* KEEP = "TRUE" *) reg [WIDTH-1:0] reset_r=0;
 (* KEEP = "TRUE" *) reg [WIDTH-1:0] reset_d=0;
 (* KEEP = "TRUE" *) reg [WIDTH-1:0] reset_d2=0;
 (* KEEP = "TRUE" *) reg [WIDTH-1:0] reset_d3=0;
genvar iw;
generate
	for (iw=0;iw<WIDTH;iw=iw+1) begin
		always @(posedge clk or posedge areset[iw]) begin
			if (areset[iw]) begin
				reset_p[iw]<=areset[iw];
			end
			else begin
				reset_p[iw]<=0;
			end
		end
		always @(posedge clk) begin
			reset_r[iw]<=reset_p[iw];
			reset_d[iw]<=reset_r[iw];
			reset_d2[iw]<=reset_d[iw];
			reset_d3[iw]<=reset_d2[iw];
		end
		assign sreset[iw]=reset_d2[iw] & ~reset_d3[iw];
	end
endgenerate
endmodule
