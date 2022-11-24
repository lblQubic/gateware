module boardcfg #(
parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=64
,parameter integer BRAMTOHOST_ADDRWIDTH=13
,parameter integer BRAMTOHOST_DATAWIDTH=64
,parameter integer BRAMFROMHOST_ADDRWIDTH=32
,parameter integer BRAMFROMHOST_DATAWIDTH=256
,parameter integer ACCBUF_ADDRWIDTH=64
,parameter integer ACCBUF_DATAWIDTH=32
,parameter integer COMMAND_ADDRWIDTH=128
,parameter integer COMMAND_DATAWIDTH=32
)(hwif.cfg hw
,ifregs.regs regs
,ifbram bram_tohost0
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
,axi4stream.master dac30axis
,axi4stream.master dac20axis
,axi4stream.master dac32axis
,axi4stream.master dac22axis
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
wire reset=(~aresetn)|hw.gpio_sw_c;
areset #(.WIDTH(1),.SRWIDTH(4))
cfgareset(.clk(cfgclk),.areset(reset),.sreset(cfgreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
dspareset(.clk(dspclk),.areset(reset),.sreset(dspreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
psareset(.clk(pl_clk0),.areset(reset),.sreset(psreset),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
adc2areset(.clk(clkadc2_600),.areset(reset),.sreset(adc2reset),.sreset_val());


bram_cfg bram_tohost0_cfg(.bram(bram_tohost0),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_tohost1_cfg(.bram(bram_tohost1),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost0_cfg(.bram(bram_fromhost0),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost1_cfg(.bram(bram_fromhost1),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost2_cfg(.bram(bram_fromhost2),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost3_cfg(.bram(bram_fromhost3),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost4_cfg(.bram(bram_fromhost4),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost5_cfg(.bram(bram_fromhost5),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost6_cfg(.bram(bram_fromhost6),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_fromhost7_cfg(.bram(bram_fromhost7),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_accbuf_cfg(.bram(bram_accbuf),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_cfg bram_command_cfg(.bram(bram_command),.clk(dspclk),.rst(1'b0),.en(1'b1));


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

localparam BRAMTOHOST_ADDRPERDATA=$clog2(BRAMTOHOST_DATAWIDTH)-3;
localparam BRAMFROMHOST_ADDRPERDATA=$clog2(BRAMFROMHOST_DATAWIDTH)-3;
bram_write#(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH+BRAMTOHOST_ADDRPERDATA),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bramtohost0_write(.bram(bram_tohost0)
,.addr({dspif.bramtohost0_addr,{BRAMTOHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramtohost0_data)
,.we(dspif.bramtohost0_we)
);

bram_write#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost0_write(.bram(bram_fromhost0)
,.addr({dspif.bramfromhost0_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost0_data)
,.we(dspif.bramfromhost0_we)
);

bram_write#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost1_write(.bram(bram_fromhost1)
,.addr({dspif.bramfromhost1_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost1_data)
,.we(dspif.bramfromhost1_we)
);

bram_write#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost2_write(.bram(bram_fromhost2)
,.addr({dspif.bramfromhost2_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost2_data)
,.we(dspif.bramfromhost2_we)
);

bram_read#(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH+BRAMFROMHOST_ADDRPERDATA),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
bramfromhost3_read(.bram(bram_fromhost3)
,.addr({dspif.bramfromhost3_addr,{BRAMFROMHOST_ADDRPERDATA{1'b0}}})
,.data(dspif.bramfromhost3_data)
);

wire adc20datavalid;
wire [ADC_AXIS_DATAWIDTH-1:0] adc20data_x;
wire [ADC_AXIS_DATAWIDTH-1:0] adc20data;
axi4stream_slave_handshake_data #(.DATA_WIDTH (ADC_AXIS_DATAWIDTH))
adc20hsda(.axis(adc20axis)
,.ready(1'b1)
,.datavalid(adc20datavalid)
,.data(adc20data_x)
);

samefreqxdomain #(.DW(ADC_AXIS_DATAWIDTH))
adc20data_xdomain(.clkw(clkadc2_600),.clkr(dspclk),.dataw(adc20data_x),.datar(adc20data),.reset(1'b0));

axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac30hsda(.axis(dac30axis),.datavalid(1'b1),.data(dspif.dac30));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac20hsda(.axis(dac20axis),.datavalid(1'b1),.data(dspif.dac20));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac32hsda(.axis(dac32axis),.datavalid(1'b1),.data(dspif.dac32));
axi4stream_master_handshake_data #(.DATA_WIDTH (DAC_AXIS_DATAWIDTH))
dac22hsda(.axis(dac22axis),.datavalid(1'b1),.data(dspif.dac22));
assign dspif.clk=dspclk;
assign dspif.reset=1'b0;
assign dspif.adc20=adc20data;

//`include "ilaauto.vh"
endmodule
