//`timescale 1 ns / 1 ps

module pltop #(
`include "plps_para.vh"
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(hwif hw
,`include "bramif_port.vh"
,iflocalbus lb1
,iflocalbus lb2
,axi4stream.master dac30axis
,axi4stream.master dac20axis
,axi4stream.master dac32axis
,axi4stream.master dac22axis
,axi4stream.slave adc20axis
,axi4stream.slave adc21axis
,input pl_clk0
,output cfgclk
,output dspclk
,input aresetn
,output [127:0] cfgresetn
,output [31:0] dspresetn
,output [31:0] psresetn
,output [31:0] adc2resetn
,input clk_dac2
,input clk_dac3
,input clk_adc2
,input clkadc2_300
,input clkadc2_600
);



wire cfgreset;
wire dspreset;
wire psreset;
wire adc2reset;

reg [127:0] cfgresetn_r=0;
reg [31:0] dspresetn_r=0;
reg [31:0] psresetn_r=0;
reg [31:0] adc2resetn_r=0;
always @(posedge cfgclk) begin
	cfgresetn_r<={128{~cfgreset}};
end
always @(posedge dspclk) begin
	dspresetn_r<={32{~dspreset}};
end
always @(posedge pl_clk0) begin
	psresetn_r<={32{~psreset}};
end
always @(posedge clkadc2_600) begin
	adc2resetn_r<={32{~adc2reset}};
end
assign cfgresetn=cfgresetn_r;
assign dspresetn=dspresetn_r;
assign psresetn=psresetn_r;
assign adc2resetn=adc2resetn_r;


ifcfgregs #(.DATA_WIDTH(LB1_DATAWIDTH),.ADDR_WIDTH(LB1_ADDRWIDTH))
cfgregs(.lb(lb1));
ifdspregs #(.DATA_WIDTH(LB2_DATAWIDTH),.ADDR_WIDTH(LB2_ADDRWIDTH))
dspregs(.lb(lb2));


ifdsp #(
`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
dspif();
boardcfg #(
	`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
boardcfg(.hw(hw),.cfgregs(cfgregs.regs)
,.dspregs(dspregs.regs)
,`include "bramif_portinst.vh"
,.dac30axis(dac30axis)
,.dac20axis(dac20axis)
,.dac32axis(dac32axis)
,.dac22axis(dac22axis)
,.adc20axis(adc20axis)
,.adc21axis(adc21axis)
,.dspif(dspif.cfg)
,.pl_clk0(pl_clk0)
,.cfgclk(cfgclk)
,.dspclk(dspclk)
,.clk_dac2(clk_dac2)
,.clk_dac3(clk_dac3)
,.clk_adc2(clk_adc2)
,.clkadc2_300(clkadc2_300)
,.clkadc2_600(clkadc2_600)
,.aresetn(aresetn)
,.cfgreset(cfgreset)
,.dspreset(dspreset)
,.psreset(psreset)
,.adc2reset(adc2reset)
);
dsp #(
`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
dsp(.dspif(dspif)
);

endmodule
