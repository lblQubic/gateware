module qubicdsp #(parameter DEBUG="false"
)(dsp.dsp dsp
,localbus.dsp lb
);
reg [31:0] test1=0;
always @(posedge dsp.clk) begin
	test1<=lb.test2+lb.err+lb.test+10;
end
assign lb.test1=test1;
endmodule

interface dsp#(parameter DEBUG="false")();
wire clk;

modport dsp(input clk
);
modport cfg(
output clk
);
endinterface
