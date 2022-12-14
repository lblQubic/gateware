module boardcfg #(
`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(hwif.cfg hw
,ifcfgregs.regs cfgregs
,ifdspregs.regs dspregs
,`include "bramif_port.vh"
,`include "rfdcif_port.vh"
,ifdsp.cfg dspif
,output cfgclk
,output dspclk
,input pl_clk0
,input clk_dac2
,input clk_dac3
,input clk_adc2
,input clkadc2_300
,input clkadc2_600
,input aresetn
,output cfgreset
,output dspreset
,output psreset
,output adc2reset
);
wire reset=(~aresetn)|hw.gpio_sw_c;
areset #(.WIDTH(1),.SRWIDTH(4))
cfgareset(.clk(cfgclk),.areset(reset),.sreset(cfgreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
dspareset(.clk(dspclk),.areset(reset),.sreset(dspreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
psareset(.clk(pl_clk0),.areset(reset),.sreset(psreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
adc2areset(.clk(clkadc2_600),.areset(reset),.sreset(adc2reset),.sreset_val());

gitrevision gitrevision(cfgregs.gitrevision);


reg [31:0] cnt100=0;
always @(posedge hw.clk100) begin
	cnt100<=cnt100+1;
end
reg [31:0] cnt125=0;
always @(posedge hw.clk125) begin
	cnt125<=cnt125+1;
end
assign cfgclk=hw.clk100;
wire t1=hw.clk100;
//assign dspclk=hw.clk104_pl_clk;// clk_dac2;
assign dspclk=clk_dac2;
assign hw.ledrgb[0][1]=cnt100[27];
assign hw.ledrgb[1][1]=cnt100[26];
assign hw.ledrgb[2][1]=cnt100[25];
assign hw.ledrgb[3][1]=cnt100[24];

assign hw.ledrgb[4][1]=cnt125[27];
assign hw.ledrgb[5][1]=cnt125[26];
assign hw.ledrgb[6][1]=cnt125[25];
assign hw.ledrgb[7][1]=cnt125[24];

//assign regs.test1=regs.r0+regs.r1+regs.r2+regs.r3;
assign hw.ledrgb[0][0]=cfgregs.test1[0];
assign hw.ledrgb[1][0]=cfgregs.test1[1];
assign hw.ledrgb[2][0]=cfgregs.test1[2];
assign hw.ledrgb[3][0]=cfgregs.test1[3];
assign hw.ledrgb[4][0]=cfgregs.test1[4];
assign hw.ledrgb[5][0]=cfgregs.test1[5];
assign hw.ledrgb[6][0]=cfgregs.test1[6];
assign hw.ledrgb[7][0]=cfgregs.test1[7];
assign hw.pmod0[6]=cnt100[1];
assign hw.pmod0[5]=cnt125[1];
assign hw.pmod0[4]=hw.usersi570c0;
assign hw.pmod0[3]=hw.usersi570c1;
assign hw.pmod0[2]=hw.clk104_pl_sysref;
assign hw.pmod0[1]=hw.clk104_pl_clk;
assign hw.ledrgb[0][2]=cfgregs.test[0];
assign hw.ledrgb[1][2]=cfgregs.test[1];
assign hw.ledrgb[2][2]=cfgregs.test[2];
assign hw.ledrgb[3][2]=cfgregs.test[3];
assign hw.ledrgb[4][2]=cfgregs.test[4];
assign hw.ledrgb[5][2]=cfgregs.test[5];
assign hw.ledrgb[6][2]=cfgregs.test[6];
assign hw.ledrgb[7][2]=cfgregs.test[7];

enum {CLK100
,CLK125
,USERSI570C0
,USERSI570C1
,CLK104PLSYSREF
,CLK104PLCLK
,CLKDAC2
,CLKDAC3
,CLKADC2
,CLKADC2_300
,CLKADC2_600
,NFCNT
} fcnt;

wire [32*NFCNT-1:0] freq_cnt;
assign freq_cnt={cfgregs.fclk100
,cfgregs.fclk125
,cfgregs.fusersi570c0
,cfgregs.fusersi570c1
,cfgregs.fclk104plsysref
,cfgregs.fclk104plclk
,cfgregs.fclk_dac2
,cfgregs.fclk_dac3
,cfgregs.fclk_adc2
,cfgregs.fclkadc2_300
,cfgregs.fclkadc2_600
};

wire [NFCNT-1:0] freqcnt_clks= {
	hw.clk100
	,hw.clk125
	,hw.usersi570c0
	,hw.usersi570c1
	,hw.clk104_pl_sysref
	,hw.clk104_pl_clk
	,clk_dac2
	,clk_dac3
	,clk_adc2
	,clkadc2_300
	,clkadc2_600
};
/*
genvar jx;
generate for (jx=0; jx<NFCNT; jx=jx+1)	begin: gen_fcnt
	freq_count3 #(.REFCNTWIDTH(24))
	freq_count3(.clk(hw.clk100),.fin(freqcnt_clks[jx]),.frequency(freq_cnt[jx*32+31:jx*32]));
//		{regs.fclk100,regs.fclk125,regs.fusersi570c0,regs.fusersi570c1,regs.fclk104plsysref,regs.fclk104plclk,regs.fclk_dac2,regs.fclk_dac3,regs.fclk_adc2,regs.fclkadc2_300,regs.fclkadc2_600}
end
endgenerate
*/


`include "bram_read.vh"
`include "bram_write.vh"

wire adc20datavalid;
wire [ADC_AXIS_DATAWIDTH-1:0] adc20data_x;
axi4stream_slave_handshake_data #(.DATA_WIDTH (ADC_AXIS_DATAWIDTH))adc20hsda(.axis(adc20axis),.ready(1'b1),.datavalid(adc20datavalid),.data(adc20data_x));
samefreqxdomain #(.DW(ADC_AXIS_DATAWIDTH))adc20data_xdomain(.clkw(clkadc2_600),.clkr(dspclk),.dataw(adc20data_x),.datar(dspif.adc[0]),.reset(1'b0));

wire adc21datavalid;
wire [ADC_AXIS_DATAWIDTH-1:0] adc21data_x;
axi4stream_slave_handshake_data #(.DATA_WIDTH (ADC_AXIS_DATAWIDTH))adc21hsda(.axis(adc21axis),.ready(1'b1),.datavalid(adc21datavalid),.data(adc21data_x));
samefreqxdomain #(.DW(ADC_AXIS_DATAWIDTH))adc21data_xdomain(.clkw(clkadc2_600),.clkr(dspclk),.dataw(adc21data_x),.datar(dspif.adc[1]),.reset(1'b0));

axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))dac20hsda(.axis(dac20axis),.datavalid(1'b1),.data(dspif.dac[0]));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))dac22hsda(.axis(dac22axis),.datavalid(1'b1),.data(dspif.dac[1]));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))dac30hsda(.axis(dac30axis),.datavalid(1'b1),.data(dspif.dac[2]));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))dac32hsda(.axis(dac32axis),.datavalid(1'b1),.data(dspif.dac[3]));
assign dspif.clk=dspclk;
reg dspreset_r=0;
always @(posedge dspclk) begin
	dspreset_r<=dspreset;
end
assign dspif.reset=dspreset_r;

assign dspif.stb_start=dspregs.stb_start;
assign dspif.nshot=dspregs.nshot;
assign dspif.resetacc=dspregs.resetacc;
assign dspif.stb_reset_bram_read=dspregs.stb_reset_bram_read;
assign dspregs.lastshotdone=dspif.lastshotdone;
assign dspregs.shotcnt=dspif.shotcnt;
assign dspregs.addr_accbuf_mon0=dspif.addr_accbuf_mon0;
assign dspregs.addr_accbuf_mon1=dspif.addr_accbuf_mon1;
assign dspregs.addr_accbuf_mon2=dspif.addr_accbuf_mon2;
assign dspregs.addr_accbuf_mon3=dspif.addr_accbuf_mon3;
//`include "ilaauto.vh"
endmodule
