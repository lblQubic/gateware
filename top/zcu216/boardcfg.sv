module boardcfg(hwif.cfg hw
,ifbram.write  bram_read0
,ifbram.write  bram_read1
,ifregs.regs regs
,ifbram.read  bram_write0
,ifbram.read  bram_write1
,ifbram.read  bram_write2
,ifbram.read  bram_write3
,axi4stream.master dac30axis 
,axi4stream.master dac20axis 
,axi4stream.slave adc20axis 
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
,output  psreset
,output adc2reset
);
parameter DEBUG="true";
wire reset=(~aresetn)|hw.gpio_sw_c;
areset #(.WIDTH(1),.SRWIDTH(4))
cfgareset(.clk(cfgclk),.areset(reset),.sreset(cfgreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
dspareset(.clk(dspclk),.areset(reset),.sreset(dspreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
psareset(.clk(pl_clk0),.areset(reset),.sreset(psreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
adc2areset(.clk(clkadc2_600),.areset(reset),.sreset(adc2reset),.sreset_val());




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
assign hw.ledrgb[0][0]=regs.test1[0];
assign hw.ledrgb[1][0]=regs.test1[1];
assign hw.ledrgb[2][0]=regs.test1[2];
assign hw.ledrgb[3][0]=regs.test1[3];
assign hw.ledrgb[4][0]=regs.test1[4];
assign hw.ledrgb[5][0]=regs.test1[5];
assign hw.ledrgb[6][0]=regs.test1[6];
assign hw.ledrgb[7][0]=regs.test1[7];
assign hw.pmod0[6]=cnt100[1];
assign hw.pmod0[5]=cnt125[1];
assign hw.pmod0[4]=hw.usersi570c0;
assign hw.pmod0[3]=hw.usersi570c1;
assign hw.pmod0[2]=hw.clk104_pl_sysref;
assign hw.pmod0[1]=hw.clk104_pl_clk;
assign hw.ledrgb[0][2]=regs.test[0];
assign hw.ledrgb[1][2]=regs.test[1];
assign hw.ledrgb[2][2]=regs.test[2];
assign hw.ledrgb[3][2]=regs.test[3];
assign hw.ledrgb[4][2]=regs.test[4];
assign hw.ledrgb[5][2]=regs.test[5];
assign hw.ledrgb[6][2]=regs.test[6];
assign hw.ledrgb[7][2]=regs.test[7];

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
assign freq_cnt={regs.fclk100
,regs.fclk125
,regs.fusersi570c0
,regs.fusersi570c1
,regs.fclk104plsysref
,regs.fclk104plclk
,regs.fclk_dac2
,regs.fclk_dac3
,regs.fclk_adc2
,regs.fclkadc2_300
,regs.fclkadc2_600
};

wire [NFCNT-1:0] freqcnt_clks = {
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

genvar jx;
generate for (jx=0; jx<NFCNT; jx=jx+1)	begin: gen_fcnt
	freq_count3 #(.REFCNTWIDTH(24))
	freq_count3(.clk(hw.clk100),.fin(freqcnt_clks[jx]),.frequency(freq_cnt[jx*32+31:jx*32]));
//		{regs.fclk100,regs.fclk125,regs.fusersi570c0,regs.fusersi570c1,regs.fclk104plsysref,regs.fclk104plclk,regs.fclk_dac2,regs.fclk_dac3,regs.fclk_adc2,regs.fclkadc2_300,regs.fclkadc2_600}
end
endgenerate

//wire bramclk=clk_adc2;
//wire bramclk=clkadc2_600;
wire bramclk=dspclk;
parameter READ_DATA_WIDTH=64;
parameter READ_ADDR_WIDTH=14;
localparam BYTEPERDATA=$clog2(READ_DATA_WIDTH)-3;
bram_write#(.ADDR_WIDTH(READ_ADDR_WIDTH),.DATA_WIDTH(READ_DATA_WIDTH))
bram_write(.bram(bram_read0)
,.addr({dspif.bramaddr,{BYTEPERDATA{1'b0}}})
//,.addr(bramaddr)
,.data(dspif.bramval)
,.we(dspif.bramwe)
);

wire adc20datavalid;
wire [READ_DATA_WIDTH-1:0] adc20data_x;
wire [READ_DATA_WIDTH-1:0] adc20data;
axi4stream_slave_handshake_data #(.DATA_WIDTH (64))
adc20hsda(.axis(adc20axis)
,.ready(1'b1)
,.datavalid(adc20datavalid)
,.data(adc20data_x)
);

samefreqxdomain #(.DW(64))
adc20data_xdomain(.clkw(clkadc2_600),.clkr(dspclk),.dataw(adc20data_x),.datar(adc20data),.reset(1'b0));

axi4stream_master_handshake_data #(.DATA_WIDTH (256))
dac30hsda(.axis(dac30axis),.datavalid(1'b1),.data(dspif.dac30));
axi4stream_master_handshake_data #(.DATA_WIDTH (256))
dac20hsda(.axis(dac20axis),.datavalid(1'b1),.data(dspif.dac20));
assign dspif.clk=dspclk;
assign dspif.reset=1'b0;
assign dspif.adc20=adc20data;

//`include "ilaauto.vh"
endmodule
