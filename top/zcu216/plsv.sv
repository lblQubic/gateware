`timescale 1 ns / 1 ps
module plsv #(parameter integer DATA_WIDTH	= 32
,parameter integer ADDR_WIDTH	= 4
,parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=128
,parameter integer BRAMTOHOST_ADDRWIDTH=13
,parameter integer BRAMTOHOST_DATAWIDTH=64
,parameter integer BRAMFROMHOST_ADDRWIDTH=32
,parameter integer BRAMFROMHOST_DATAWIDTH=256
)(	`include "plps_port.vh"
,hwif hw
,input clkadc2_300
,input clkadc2_600
);

wire [31:0] cfgresetn_r;
wire [31:0] dspresetn_r;
wire [31:0] psresetn_r;
wire [31:0] adc2resetn_r;
wire cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19;//,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00;
assign {cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00}=cfgresetn_r;
wire dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08;//,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00;
assign {dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00}=dspresetn_r;
wire psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03;//,psresetn02,psresetn01,psresetn00;
assign {psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03,psresetn02,psresetn01,psresetn00}=psresetn_r;
wire adc2resetn31,adc2resetn30,adc2resetn29,adc2resetn28,adc2resetn27,adc2resetn26,adc2resetn25,adc2resetn24,adc2resetn23,adc2resetn22,adc2resetn21,adc2resetn20,adc2resetn19,adc2resetn18,adc2resetn17,adc2resetn16,adc2resetn15,adc2resetn14,adc2resetn13,adc2resetn12,adc2resetn11,adc2resetn10,adc2resetn09,adc2resetn08,adc2resetn07,adc2resetn06,adc2resetn05,adc2resetn04,adc2resetn03;//,adc2resetn02,adc2resetn01,adc2resetn00;
assign {adc2resetn31,adc2resetn30,adc2resetn29,adc2resetn28,adc2resetn27,adc2resetn26,adc2resetn25,adc2resetn24,adc2resetn23,adc2resetn22,adc2resetn21,adc2resetn20,adc2resetn19,adc2resetn18,adc2resetn17,adc2resetn16,adc2resetn15,adc2resetn14,adc2resetn13,adc2resetn12,adc2resetn11,adc2resetn10,adc2resetn09,adc2resetn08,adc2resetn07,adc2resetn06,adc2resetn05,adc2resetn04,adc2resetn03,adc2resetn02,adc2resetn01,adc2resetn00}=adc2resetn_r;

iflocalbus #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
lb1();
iflocalbus #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
lb2();

localbus_mappin #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
lb1map(.lb(lb1)
,.wren(lb1_wren)
,.rden(lb1_rden)
,.waddr(lb1_waddr)
,.rvalid(lb1_rvalid)
,.wdata(lb1_wdata)
,.raddr(lb1_raddr)
,.rdata(lb1_rdata)
,.clk(lb1_clk)
,.aresetn(lb1_aresetn)
);
localbus_mappin #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
lb2map(.lb(lb2)
,.wren(lb2_wren)
,.rden(lb2_rden)
,.waddr(lb2_waddr)
,.rvalid(lb2_rvalid)
,.wdata(lb2_wdata)
,.raddr(lb2_raddr)
,.rdata(lb2_rdata)
,.clk(lb2_clk)
,.aresetn(lb2_aresetn)
);

/*ifregs #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
ctrlregs(.lb(lb1));
ifdspregs #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
dspregs(.lb(lb2));
*/

//wire [31:0] cfgresetn;
//wire [31:0] dspresetn;

//ifbram #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH)) bram_tohost0();
//ifbram #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH)) bram_tohost1();
//	ifbram #(.ADDR_WIDTH(32),.DATA_WIDTH(128)) bram();
/*bram_map #(.ADDR_WIDTH(13),.DATA_WIDTH(64))
bram_tohost0_map(.bram(bram_tohost0.map)
,.clk(BRAM_TOHOST0_clk)
,.rst(BRAM_TOHOST0_rst)
,.addr(BRAM_TOHOST0_addr)
,.din(BRAM_TOHOST0_din)
,.dout(BRAM_TOHOST0_dout)
,.en(BRAM_TOHOST0_en)
,.we(BRAM_TOHOST0_we)
);
bram_map #(.ADDR_WIDTH(13),.DATA_WIDTH(64))
bram_tohost1_map(.bram(bram_tohost1.map)
,.clk(BRAM_TOHOST1_clk)
,.rst(BRAM_TOHOST1_rst)
,.addr(BRAM_TOHOST1_addr)
,.din(BRAM_TOHOST1_din)
,.dout(BRAM_TOHOST1_dout)
,.en(BRAM_TOHOST1_en)
,.we(BRAM_TOHOST1_we)
);
wire [1:0] bramclk;
assign {BRAM_TOHOST1_clk,BRAM_TOHOST0_clk}=bramclk;
wire [1:0] bramrst;
assign {BRAM_TOHOST1_rst,BRAM_TOHOST0_rst}=bramrst;
wire [2*BRAMTOHOST_ADDRWIDTH-1:0] bramaddr;
assign {BRAM_TOHOST1_addr,BRAM_TOHOST0_addr}=bramaddr;
wire [2*BRAMTOHOST_DATAWIDTH-1:0] bramdin;
assign {BRAM_TOHOST1_din,BRAM_TOHOST0_din}=bramdin;
wire [2*BRAMTOHOST_DATAWIDTH-1:0] bramdout;
assign bramdout={BRAM_TOHOST1_dout,BRAM_TOHOST0_dout};
wire [1:0] bramen;
assign {BRAM_TOHOST1_en,BRAM_TOHOST0_en}=bramen;
wire [15:0] bramwe;
assign {BRAM_TOHOST1_we,BRAM_TOHOST0_we}=bramwe;

*/
/*begin
bram_tohost0.mappin(
.addrpin(BRAM_TOHOST0_addr)
,.clkpin(BRAM_TOHOST0_clk)
,.rstpin(BRAM_TOHOST0_rst)
,.addrpin(BRAM_TOHOST0_addr)
,.dinpin(BRAM_TOHOST0_din)
,.doutpin(BRAM_TOHOST0_dout)
,.enpin(BRAM_TOHOST0_en)
,.wepin(BRAM_TOHOST0_we)
);
end
*/
//bram_tohost1.mappin(.clkpin(BRAM_TOHOST1_clk),.rstpin(BRAM_TOHOST1_rst),.addrpin(BRAM_TOHOST1_addr),.dinpin(BRAM_TOHOST1_din),.doutpin(BRAM_TOHOST1_dout),.enpin(BRAM_TOHOST1_en),.wepin(BRAM_TOHOST1_we));
/*generate
for (genvar i=0;i<2;i++) begin
	bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
	bram_tohost_map(.bram(bram_tohost[i])
	//bram_tohost[i].mappin(
	,.clk(bramclk[i])
	,.rst(bramrst[i])
	,.addr(bramaddr[(i+1)*BRAMTOHOST_ADDRWIDTH-1:i*BRAMTOHOST_ADDRWIDTH])
	,.din(bramdin[(i+1)*BRAMTOHOST_DATAWIDTH-1:i*BRAMTOHOST_DATAWIDTH])
	,.dout(bramdout[(i+1)*BRAMTOHOST_DATAWIDTH-1:i*BRAMTOHOST_DATAWIDTH])
	,.en(bramen[i])
	,.we(bramwe[(i+1)*8-1:i*8])
	);
end
endgenerate
*/

/*wire [3:0] bramwriteclk;
assign {BRAM_FROMHOST3_clk,BRAM_FROMHOST2_clk,BRAM_FROMHOST1_clk,BRAM_FROMHOST0_clk}=bramwriteclk;
wire [3:0] bramwriterst;
assign {BRAM_FROMHOST3_rst,BRAM_FROMHOST2_rst,BRAM_FROMHOST1_rst,BRAM_FROMHOST0_rst}=bramwriterst;
wire [4*BRAMFROMHOST_ADDRWIDTH-1:0] bramwriteaddr;
assign {BRAM_FROMHOST3_addr,BRAM_FROMHOST2_addr,BRAM_FROMHOST1_addr,BRAM_FROMHOST0_addr}=bramwriteaddr;
wire [4*BRAMFROMHOST_DATAWIDTH-1:0] bramwritedin;
assign {BRAM_FROMHOST3_din,BRAM_FROMHOST2_din,BRAM_FROMHOST1_din,BRAM_FROMHOST0_din}=bramwritedin;
wire [4*BRAMFROMHOST_DATAWIDTH-1:0] bramwritedout;
assign bramwritedout={BRAM_FROMHOST3_dout,BRAM_FROMHOST2_dout,BRAM_FROMHOST1_dout,BRAM_FROMHOST0_dout};
wire [3:0] bramwriteen;
assign {BRAM_FROMHOST3_en,BRAM_FROMHOST2_en,BRAM_FROMHOST1_en,BRAM_FROMHOST0_en}=bramwriteen;
wire [4*BRAMFROMHOST_DATAWIDTH/8-1:0] bramwritewe;
assign {BRAM_FROMHOST3_we,BRAM_FROMHOST2_we,BRAM_FROMHOST1_we,BRAM_FROMHOST0_we}=bramwritewe;
*/
ifbram #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH)) bram_tohost0();
ifbram #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH)) bram_tohost1();

ifbram #(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost0();
ifbram #(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost1();
ifbram #(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost2();
ifbram #(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost3();

bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bram_tohost0_map(.bram(bram_tohost0)
,.clk(BRAM_TOHOST0_clk),.rst(BRAM_TOHOST0_rst),.addr(BRAM_TOHOST0_addr),.din(BRAM_TOHOST0_din),.dout(BRAM_TOHOST0_dout),.en(BRAM_TOHOST0_en),.we(BRAM_TOHOST0_we));
bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bram_tohost1_map(.bram(bram_tohost1)
,.clk(BRAM_TOHOST1_clk),.rst(BRAM_TOHOST1_rst),.addr(BRAM_TOHOST1_addr),.din(BRAM_TOHOST1_din),.dout(BRAM_TOHOST1_dout),.en(BRAM_TOHOST1_en),.we(BRAM_TOHOST1_we));

bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost0_map(.bram(bram_fromhost0)
,.clk(BRAM_FROMHOST0_clk),.rst(BRAM_FROMHOST0_rst),.addr(BRAM_FROMHOST0_addr),.din(BRAM_FROMHOST0_din),.dout(BRAM_FROMHOST0_dout),.en(BRAM_FROMHOST0_en),.we(BRAM_FROMHOST0_we));
bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost1_map(.bram(bram_fromhost1)
,.clk(BRAM_FROMHOST1_clk),.rst(BRAM_FROMHOST1_rst),.addr(BRAM_FROMHOST1_addr),.din(BRAM_FROMHOST1_din),.dout(BRAM_FROMHOST1_dout),.en(BRAM_FROMHOST1_en),.we(BRAM_FROMHOST1_we));
bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost2_map(.bram(bram_fromhost2)
,.clk(BRAM_FROMHOST2_clk),.rst(BRAM_FROMHOST2_rst),.addr(BRAM_FROMHOST2_addr),.din(BRAM_FROMHOST2_din),.dout(BRAM_FROMHOST2_dout),.en(BRAM_FROMHOST2_en),.we(BRAM_FROMHOST2_we));
bram_map #(.ADDR_WIDTH(BRAMTOHOST_ADDRWIDTH),.DATA_WIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost3_map(.bram(bram_fromhost3)
,.clk(BRAM_FROMHOST3_clk),.rst(BRAM_FROMHOST3_rst),.addr(BRAM_FROMHOST3_addr),.din(BRAM_FROMHOST3_din),.dout(BRAM_FROMHOST3_dout),.en(BRAM_FROMHOST3_en),.we(BRAM_FROMHOST3_we));

/*generate
for (genvar i=0;i<4;i++) begin
	bram_map #(.ADDR_WIDTH(BRAMFROMHOST_ADDRWIDTH),.DATA_WIDTH(BRAMFROMHOST_DATAWIDTH))
	bram_fromhost_map(.bram(bram_fromhost[i].map)
	,.clk(bramwriteclk[i])
	,.rst(bramwriterst[i])
	,.addr(bramwriteaddr[(i+1)*BRAMFROMHOST_ADDRWIDTH-1:i*BRAMFROMHOST_ADDRWIDTH])
	,.din(bramwritedin[(i+1)*BRAMFROMHOST_DATAWIDTH-1:i*BRAMFROMHOST_DATAWIDTH])
	,.dout(bramwritedout[(i+1)*BRAMFROMHOST_DATAWIDTH-1:i*BRAMFROMHOST_DATAWIDTH])
	,.en(bramwriteen[i])
	,.we(bramwritewe[(i+1)*BRAMFROMHOST_DATAWIDTH/8-1:i*BRAMFROMHOST_DATAWIDTH/8])
	);
	assign bramwriteclk[i]=dspclk;
end
endgenerate
*/
pltop #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DEBUG(DEBUG),.BRAMTOHOST_DATAWIDTH(BRAMTOHOST_DATAWIDTH),.BRAMTOHOST_ADDRWIDTH(BRAMTOHOST_ADDRWIDTH))
pltop(.bram_tohost0(bram_tohost0)
,.bram_tohost1(bram_tohost1)
,.bram_fromhost0(bram_fromhost0)
,.bram_fromhost1(bram_fromhost1)
,.bram_fromhost2(bram_fromhost2)
,.bram_fromhost3(bram_fromhost3)
,.lb1(lb1)
,.lb2(lb2)
,.hw(hw)
,.dac30axis(dac30axis.master)
,.dac20axis(dac20axis.master)
,.dac32axis(dac32axis.master)
,.dac22axis(dac22axis.master)
,.adc20axis(adc20axis.slave)
,.cfgresetn(cfgresetn_r)
,.dspresetn(dspresetn_r)
,.psresetn(psresetn_r)
,.adc2resetn(adc2resetn_r)
,.aresetn(aresetn)
,.pl_clk0(pl_clk0)
,.cfgclk(cfgclk)
,.dspclk(dspclk)
,.clk_dac2(clk_dac2)
,.clk_dac3(clk_dac3)
,.clk_adc2(clk_adc2)
,.clkadc2_300(clkadc2_300)
,.clkadc2_600(clkadc2_600)
);

axi4stream #(.DATA_WIDTH(256))	dac30axis();
axi4stream #(.DATA_WIDTH(256))	dac20axis();
axi4stream #(.DATA_WIDTH(256))	dac32axis();
axi4stream #(.DATA_WIDTH(256))	dac22axis();
axi4stream #(.DATA_WIDTH(64))	adc20axis();
axi4stream_clkrst dac32axisclkrst(.axi4(dac32axis.clkrst),.clk(DAC32_M_AXIS_ACLK),.resetn(DAC32_M_AXIS_ARESETN));
axi4stream_clkrst dac22axisclkrst(.axi4(dac22axis.clkrst),.clk(DAC22_M_AXIS_ACLK),.resetn(DAC22_M_AXIS_ARESETN));
axi4stream_clkrst dac30axisclkrst(.axi4(dac30axis.clkrst),.clk(DAC30_M_AXIS_ACLK),.resetn(DAC30_M_AXIS_ARESETN));
axi4stream_clkrst dac20axisclkrst(.axi4(dac20axis.clkrst),.clk(DAC20_M_AXIS_ACLK),.resetn(DAC20_M_AXIS_ARESETN));
axi4stream_clkrst adc20axisclkrst(.axi4(adc20axis.clkrst),.clk(ADC20_S_AXIS_ACLK),.resetn(ADC20_S_AXIS_ARESETN));

axi4stream_master_map #(.DATA_WIDTH(256))
dac30axismap(.axis(dac30axis)
,.ready(DAC30_M_AXIS_TREADY)
,.valid(DAC30_M_AXIS_TVALID)
,.data(DAC30_M_AXIS_TDATA)
,.strb(DAC30_M_AXIS_TSTRB)
,.last(DAC30_M_AXIS_TLAST)
);

axi4stream_master_map #(.DATA_WIDTH(256))
dac20axismap(.axis(dac20axis)
,.ready(DAC20_M_AXIS_TREADY)
,.valid(DAC20_M_AXIS_TVALID)
,.data(DAC20_M_AXIS_TDATA)
,.strb(DAC20_M_AXIS_TSTRB)
,.last(DAC20_M_AXIS_TLAST)
);

axi4stream_master_map #(.DATA_WIDTH(256))
dac32axismap(.axis(dac32axis)
,.ready(DAC32_M_AXIS_TREADY)
,.valid(DAC32_M_AXIS_TVALID)
,.data(DAC32_M_AXIS_TDATA)
,.strb(DAC32_M_AXIS_TSTRB)
,.last(DAC32_M_AXIS_TLAST)
);

axi4stream_master_map #(.DATA_WIDTH(256))
dac22axismap(.axis(dac22axis)
,.ready(DAC22_M_AXIS_TREADY)
,.valid(DAC22_M_AXIS_TVALID)
,.data(DAC22_M_AXIS_TDATA)
,.strb(DAC22_M_AXIS_TSTRB)
,.last(DAC22_M_AXIS_TLAST)
);

axi4stream_slave_map #(.DATA_WIDTH(64))
adc20axismap(.axis(adc20axis)
,.ready(ADC20_S_AXIS_TREADY)
,.valid(ADC20_S_AXIS_TVALID)
,.data(ADC20_S_AXIS_TDATA)
,.strb(ADC20_S_AXIS_TSTRB)
,.last(ADC20_S_AXIS_TLAST)
);


reg [7:0] resetcnt=100;
always @(posedge clk_adc2) begin
	if (|resetcnt) begin
		resetcnt<=resetcnt-1;
	end
end
/*
wire clkadc2_mmcm_fb;
wire clkadc2_mmcm_out0;
wire clkadc2_mmcm_out1;
MMCME4_ADV#(.CLKIN1_PERIOD(3.333)
,.CLKFBOUT_MULT_F(4.000)
,.CLKFBOUT_PHASE(0.000)
,.CLKFBOUT_USE_FINE_PS("FALSE")
,.CLKOUT0_DIVIDE_F(4.000)
,.CLKOUT0_PHASE(0.000)
,.CLKOUT0_DUTY_CYCLE(0.500)
,.CLKOUT0_USE_FINE_PS("FALSE")
,.CLKOUT1_DIVIDE(2)
,.CLKOUT1_PHASE(0.000)
,.CLKOUT1_DUTY_CYCLE(0.500)
,.CLKOUT1_USE_FINE_PS("FALSE")
)clkadc2_mmcm(.PWRDWN(1'b0)
,.CLKIN1(clk_adc2)
,.RST((~aresetn)|(|resetcnt))
,.CLKIN2(1'b0)
,.CLKINSEL(1'b1)
,.CLKFBIN(clkadc2_mmcm_fb)
,.CLKFBOUT(clkadc2_mmcm_fb)
,.CLKOUT0(clkadc2_mmcm_out0)
,.CLKOUT1(clkadc2_mmcm_out1)
,.LOCKED(clkadc2_mmcm_locked)
,.DADDR(7'h0),.DCLK(1'b0),.DEN(1'b0),.DI(16'h0),.DWE(1'b0),.CDDCREQ(1'b0),.PSCLK(1'b0),.PSEN(1'b0),.PSINCDEC(1'b0)
);

BUFG clkout1_buf
(.I(clkadc2_mmcm_out0)
,.O(clkadc2_300));


BUFG clkout2_buf
(.I(clkadc2_mmcm_out1)
,.O(clkadc2_600));
*/
/*
reg [13:0] bram_tohost_addr=0;
reg [63:0] bram_tohost_din=0;
reg [63:0] bram_tohost_dout=0;
reg bram_tohost_en=0;
reg bram_tohost_we=0;
reg adc20axis_ready=0;
reg adc20axis_valid=0;
reg [31:0] adc20axis_cnt=0;
always @(posedge BRAM_TOHOST_clk) begin
	bram_tohost_addr<=bram_tohost.addr;
	bram_tohost_din<=bram_tohost.din;
	bram_tohost_dout<=bram_tohost.dout;
	bram_tohost_we<=bram_tohost.we;
	bram_tohost_en<=bram_tohost.en;
	adc20axis_ready<=adc20axis.ready;
	adc20axis_valid<=adc20axis.valid;
	adc20axis_cnt<=adc20axis.cnt;
end
//for debug 
//`include "ilaauto.vh"
*/
   endmodule
