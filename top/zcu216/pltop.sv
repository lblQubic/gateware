//`timescale 1 ns / 1 ps

module pltop #(
	/*parameter LB_DATAWIDTH=32
,parameter LB_ADDRWIDTH=10
,parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=128
,parameter integer BRAMTOHOST_ADDRWIDTH=13
,parameter integer BRAMTOHOST_DATAWIDTH=64
,parameter integer BRAMFROMHOST_ADDRWIDTH=32
,parameter integer BRAMFROMHOST_DATAWIDTH=256
,parameter integer ACCBUF_ADDRWIDTH=64
,parameter integer ACCBUF_DATAWIDTH=32
,parameter integer COMMAND_ADDRWIDTH=128
,parameter integer COMMAND_DATAWIDTH=32*/
`include "plps_para.vh"
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(hwif hw
,`include "bramif_port.vh"
/*,ifbram bram_tohost0
,ifbram bram_tohost1
,ifbram bram_fromhost0
,ifbram bram_fromhost1
,ifbram bram_fromhost2
,ifbram bram_fromhost3
,ifbram bram_fromhost4
,ifbram bram_fromhost5
,ifbram bram_fromhost6
,ifbram bram_fromhost7
,ifbram bram_accbuf
,ifbram bram_command
*/
,iflocalbus lb1
,iflocalbus lb2
/*,axi4stream.master dac30axis
,axi4stream.master dac20axis
,axi4stream.master dac32axis
,axi4stream.master dac22axis
,axi4stream.slave adc20axis
,axi4stream.slave adc21axis
*/
,`include "rfdcif_port.vh"
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
,`include "bramif_portinst.vh"
,`include "rfdcif_portinst.vh"
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
dsp(.regs(dspregs.regs)
,.dspif(dspif)
);

endmodule
