//`timescale 1 ns / 1 ps

module pltop #(parameter DATA_WIDTH=32
,parameter ADDR_WIDTH=10
,parameter DEBUG="true"
,parameter integer BRAMREAD_ADDRWIDTH=13
,parameter integer BRAMREAD_DATAWIDTH=64
,parameter integer BRAMWRITE_ADDRWIDTH=32
,parameter integer BRAMWRITE_DATAWIDTH=256
)(hwif hw
,ifbram.write bram_read0
,ifbram.write bram_read1
,ifbram.read bram_write0
,ifbram.read bram_write1
,ifbram.read bram_write2
,ifbram.read bram_write3
,iflocalbus lb1
,iflocalbus lb2
,axi4stream.master dac30axis
,axi4stream.master dac20axis
,axi4stream.master dac32axis
,axi4stream.master dac22axis
,axi4stream.slave adc20axis
,input pl_clk0
,output cfgclk
,output dspclk
,input aresetn
,output [31:0] cfgresetn
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
/*areset #(.WIDTH(1),.SRWIDTH(4))
cfgareset(.clk(cfgclk),.areset(~aresetn),.sreset(cfgreset_w0),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
dspareset(.clk(dspclk),.areset(~aresetn),.sreset(dspreset_w0),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
psareset(.clk(pl_clk0),.areset(~aresetn),.sreset(psreset_w0),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
adc2areset(.clk(pl_clk0),.areset(~aresetn),.sreset(adc2reset_w0),.sreset_val());
*/

reg [31:0] cfgresetn_r=0;
reg [31:0] dspresetn_r=0;
reg [31:0] psresetn_r=0;
reg [31:0] adc2resetn_r=0;
always @(posedge cfgclk) begin
	cfgresetn_r<={32{~cfgreset}};
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


ifregs #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
ctrlregs(.lb(lb1));
ifdspregs #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
dspregs(.lb(lb2));


ifdsp dspif();
boardcfg #(.DEBUG(DEBUG))
boardcfg(.hw(hw),.regs(ctrlregs.regs)
,.bram_read0(bram_read0)
,.bram_read1(bram_read1)
	,.bram_write0(bram_write0)
	,.bram_write1(bram_write1)
	,.bram_write2(bram_write2)
	,.bram_write3(bram_write3)
,.dac30axis(dac30axis)
,.dac20axis(dac20axis)
,.dac32axis(dac32axis)
,.dac22axis(dac22axis)
,.adc20axis(adc20axis)
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
dsp dsp(.regs(dspregs.regs)
,.dspif(dspif)
);

endmodule
