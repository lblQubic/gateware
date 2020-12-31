module qubicdsp #(parameter DEBUG="false"
)(dsp.dsp dsp
,regmap.dsp lbreg
);
reg [31:0] test1=0;
always @(posedge dsp.clk) begin
	test1<=lbreg.test2+lbreg.err+lbreg.test+10;
end
assign lbreg.test1=test1;
endmodule

interface dsp#(parameter DEBUG="false")();
wire clk;

modport dsp(input clk
);
modport cfg(
output clk
);
endinterface
