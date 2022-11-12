`timescale 1 ns / 1 ps
module plsv #(parameter integer DATA_WIDTH	= 32
,parameter integer ADDR_WIDTH	= 4
,parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=128
,parameter integer BRAMREAD_ADDRWIDTH=13
,parameter integer BRAMREAD_DATAWIDTH=64
,parameter integer BRAMWRITE_ADDRWIDTH=32
,parameter integer BRAMWRITE_DATAWIDTH=256
)(	`include "plps_port.vh"
,hwif hw
,output clkadc2_300
,output clkadc2_600
);

wire [31:0] cfgresetn_r;
wire [31:0] dspresetn_r;
wire [31:0] psresetn_r;
wire [31:0] adc2resetn_r;
wire cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19;//,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00;
assign {cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00}=cfgresetn_r;
wire dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06;//,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00;
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
,.wvalid        (lb1_wvalid)
,.waddr          (lb1_waddr)
,.wstrb           (lb1_wstrb)
,.wdata            (lb1_wdata)
,.raddr          (lb1_raddr)
,.rdata     (lb1_rdata)
,.clk(lb1_clk)
,.aresetn(lb1_aresetn)
);
localbus_mappin #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
lb2map(.lb(lb2)
,.wvalid        (lb2_wvalid)
,.waddr          (lb2_waddr)
,.wstrb           (lb2_wstrb)
,.wdata            (lb2_wdata)
,.raddr          (lb2_raddr)
,.rdata     (lb2_rdata)
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

/*	ifbram #(.ADDR_WIDTH(32),.DATA_WIDTH(128)) bram();
bram_map #(.ADDR_WIDTH(32),.DATA_WIDTH(128))
bram_map(.bram(bram.map)
,.clk(BRAM_PORTA_clk)
,.rst(BRAM_PORTA_rst)
,.addr(BRAM_PORTA_addr)
,.din(BRAM_PORTA_din)
,.dout(BRAM_PORTA_dout)
,.en(BRAM_PORTA_en)
,.we(BRAM_PORTA_we)
);
*/
wire [1:0] bramclk;
assign {BRAM_READ1_clk,BRAM_READ0_clk}=bramclk;
wire [1:0] bramrst;
assign {BRAM_READ1_rst,BRAM_READ0_rst}=bramrst;
wire [2*BRAMREAD_ADDRWIDTH-1:0] bramaddr;
assign {BRAM_READ1_addr,BRAM_READ0_addr}=bramaddr;
wire [2*BRAMREAD_DATAWIDTH-1:0] bramdin;
assign {BRAM_READ1_din,BRAM_READ0_din}=bramdin;
wire [2*BRAMREAD_DATAWIDTH-1:0] bramdout;
assign bramdout={BRAM_READ1_dout,BRAM_READ0_dout};
wire [1:0] bramen;
assign {BRAM_READ1_en,BRAM_READ0_en}=bramen;
wire [15:0] bramwe;
assign {BRAM_READ1_we,BRAM_READ0_we}=bramwe;

ifbram #(.ADDR_WIDTH(BRAMREAD_ADDRWIDTH),.DATA_WIDTH(BRAMREAD_DATAWIDTH)) bram_read[1:0]();

generate
for (genvar i=0;i<2;i++) begin
	bram_map #(.ADDR_WIDTH(BRAMREAD_ADDRWIDTH),.DATA_WIDTH(BRAMREAD_DATAWIDTH))
	bram_read_map(.bram(bram_read[i].map)
	,.clk(bramclk[i])
	,.rst(bramrst[i])
	,.addr(bramaddr[(i+1)*BRAMREAD_ADDRWIDTH-1:i*BRAMREAD_ADDRWIDTH])
	,.din(bramdin[(i+1)*BRAMREAD_DATAWIDTH-1:i*BRAMREAD_DATAWIDTH])
	,.dout(bramdout[(i+1)*BRAMREAD_DATAWIDTH-1:i*BRAMREAD_DATAWIDTH])
	,.en(bramen[i])
	,.we(bramwe[(i+1)*8-1:i*8])
	);
end
endgenerate


wire [3:0] bramwriteclk;
assign {BRAM_WRITE3_clk,BRAM_WRITE2_clk,BRAM_WRITE1_clk,BRAM_WRITE0_clk}=bramwriteclk;
wire [3:0] bramwriterst;
assign {BRAM_WRITE3_rst,BRAM_WRITE2_rst,BRAM_WRITE1_rst,BRAM_WRITE0_rst}=bramwriterst;
wire [4*BRAMWRITE_ADDRWIDTH-1:0] bramwriteaddr;
assign {BRAM_WRITE3_addr,BRAM_WRITE2_addr,BRAM_WRITE1_addr,BRAM_WRITE0_addr}=bramwriteaddr;
wire [4*BRAMWRITE_DATAWIDTH-1:0] bramwritedin;
assign {BRAM_WRITE3_din,BRAM_WRITE2_din,BRAM_WRITE1_din,BRAM_WRITE0_din}=bramwritedin;
wire [4*BRAMWRITE_DATAWIDTH-1:0] bramwritedout;
assign bramwritedout={BRAM_WRITE3_dout,BRAM_WRITE2_dout,BRAM_WRITE1_dout,BRAM_WRITE0_dout};
wire [3:0] bramwriteen;
assign {BRAM_WRITE3_en,BRAM_WRITE2_en,BRAM_WRITE1_en,BRAM_WRITE0_en}=bramwriteen;
wire [4*BRAMWRITE_DATAWIDTH/8-1:0] bramwritewe;
assign {BRAM_WRITE3_we,BRAM_WRITE2_we,BRAM_WRITE1_we,BRAM_WRITE0_we}=bramwritewe;

ifbram #(.ADDR_WIDTH(BRAMWRITE_ADDRWIDTH),.DATA_WIDTH(BRAMWRITE_DATAWIDTH)) bram_write[3:0]();

generate
for (genvar i=0;i<4;i++) begin
	bram_map #(.ADDR_WIDTH(BRAMWRITE_ADDRWIDTH),.DATA_WIDTH(BRAMWRITE_DATAWIDTH))
	bram_write_map(.bram(bram_write[i].map)
	,.clk(bramwriteclk[i])
	,.rst(bramwriterst[i])
	,.addr(bramwriteaddr[(i+1)*BRAMWRITE_ADDRWIDTH-1:i*BRAMWRITE_ADDRWIDTH])
	,.din(bramwritedin[(i+1)*BRAMWRITE_DATAWIDTH-1:i*BRAMWRITE_DATAWIDTH])
	,.dout(bramwritedout[(i+1)*BRAMWRITE_DATAWIDTH-1:i*BRAMWRITE_DATAWIDTH])
	,.en(bramwriteen[i])
	,.we(bramwritewe[(i+1)*BRAMWRITE_DATAWIDTH/8-1:i*BRAMWRITE_DATAWIDTH/8])
	);
end
endgenerate

pltop #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DEBUG(DEBUG),.BRAMREAD_DATAWIDTH(BRAMREAD_DATAWIDTH),.BRAMREAD_ADDRWIDTH(BRAMREAD_ADDRWIDTH))
pltop(.bram_read0(bram_read[0])
,.bram_read1(bram_read[1])
,.bram_write0(bram_write[0])
,.bram_write1(bram_write[1])
,.bram_write2(bram_write[2])
,.bram_write3(bram_write[3])
,.lb1(lb1)
,.lb2(lb2)
,.hw(hw)
,.dac30axis(dac30axis.master)
,.dac20axis(dac20axis.master)
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
axi4stream #(.DATA_WIDTH(64))	adc20axis();
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
reg [13:0] bram_read_addr=0;
reg [63:0] bram_read_din=0;
reg [63:0] bram_read_dout=0;
reg bram_read_en=0;
reg bram_read_we=0;
reg adc20axis_ready=0;
reg adc20axis_valid=0;
reg [31:0] adc20axis_cnt=0;
always @(posedge BRAM_READ_clk) begin
	bram_read_addr<=bram_read.addr;
	bram_read_din<=bram_read.din;
	bram_read_dout<=bram_read.dout;
	bram_read_we<=bram_read.we;
	bram_read_en<=bram_read.en;
	adc20axis_ready<=adc20axis.ready;
	adc20axis_valid<=adc20axis.valid;
	adc20axis_cnt<=adc20axis.cnt;
end
//for debug 
//`include "ilaauto.vh"
*/
   endmodule
