`timescale 1 ns / 1 ps
module plpsboard #(parameter integer DATA_WIDTH	= 32
,parameter integer ADDR_WIDTH	= 4
,parameter DEBUG="true"
,parameter DAC_AXIS_DATAWIDTH=256
,parameter ADC_AXIS_DATAWIDTH=128
,parameter integer BRAMREAD_ADDRWIDTH=13
,parameter integer BRAMREAD_DATAWIDTH=64
,parameter integer BRAMWRITE_ADDRWIDTH=32
,parameter integer BRAMWRITE_DATAWIDTH=256
)(
`include "plps_port.vh"
,
`include "fpga_port.vh"
);




fpga fpga();
`include "fpga_via.vh"

hwif hw();
board board(.fpga(fpga),.hw(hw.hw));

plsv #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH),.BRAMREAD_ADDRWIDTH(BRAMREAD_ADDRWIDTH),.BRAMREAD_DATAWIDTH(BRAMREAD_DATAWIDTH),.BRAMWRITE_ADDRWIDTH(BRAMWRITE_ADDRWIDTH),.BRAMWRITE_DATAWIDTH(BRAMWRITE_DATAWIDTH))
plsv 
(
`include "plps_inst.vh"
,.hw(hw)
);

endmodule

/*wire cfgreset_w0;
wire dspreset_w0;
wire psreset_w0;
areset #(.WIDTH(1),.SRWIDTH(4))
cfgareset(.clk(cfgclk),.areset(~aresetn),.sreset(cfgreset_w0),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
dspareset(.clk(dspclk),.areset(~aresetn),.sreset(dspreset_w0),.sreset_val());
areset #(.WIDTH(1),.SRWIDTH(4))
psareset(.clk(pl_clk0),.areset(~aresetn),.sreset(psreset_w0),.sreset_val());


reg [31:0] cfgresetn_r=0;
reg [31:0] dspresetn_r=0;
reg [31:0] psresetn_r=0;
always @(posedge cfgclk) begin
    cfgresetn_r<={32{~cfgreset_w0}};
end
always @(posedge dspclk) begin
    dspresetn_r<={32{~dspreset_w0}};
end
always @(posedge pl_clk0) begin
	psresetn_r<={32{~psreset_w0}};
end
assign cfgresetn=cfgresetn_r;
assign dspresetn=dspresetn_r;
assign psresetn=psresetn_r;


//wire cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00;
assign {cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00}=cfgresetn_r;
//wire dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00;
assign {dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00}=dspresetn_r;
//wire psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03,psresetn02,psresetn01,psresetn00;
assign {psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03,psresetn02,psresetn01,psresetn00}=psresetn_r;

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


wire _clk100;
IBUFGDS ibufgds_clk100(.I(fpga.G12),.IB(fpga.G11),.O(_clk100));
BUFG clk100_bufg(.I(_clk100),.O(cfgclk));
wire _clk104_pl_clk;
IBUFGDS ibufgds_clk104_pl_clk(.I(fpga.E10),.IB(fpga.E9),.O(_clk104_pl_clk));
BUFG clk104_pl_clk_bufg(.I(_clk104_pl_clk),.O(dspclk));

wire _clk125;
IBUFGDS ibufgds_clk125(.I(fpga.A13),.IB(fpga.A12),.O(_clk125));
BUFG clk125_bufg(.I(_clk125),.O(clk125));


wire _usersi570c0;
IBUFGDS ibufgds_usersi570c0(.I(fpga.AR20),.IB(fpga.AR19),.O(_usersi570c0));
BUFG usersi570c0_bufg(.I(_usersi570c0),.O(usersi570c0));
wire _usersi570c1;
IBUFGDS ibufgds_usersi570c1(.I(fpga.G17),.IB(fpga.F17),.O(_usersi570c1));
BUFG usersi570c1_bufg(.I(_usersi570c1),.O(usersi570c1));

wire _clk104_pl_sysref;
IBUFGDS ibufgds_clk104_pl_sysref(.I(fpga.E11),.IB(fpga.D11),.O(_clk104_pl_sysref));
BUFG clk104_pl_sysref_bufg(.I(_clk104_pl_sysref),.O(clk104_pl_sysref));

ifregs #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
ctrlregs(.lb(lb1));
ifdspregs #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH))
dspregs(.lb(lb2));



/*ifbram #(.ADDR_WIDTH(32),.DATA_WIDTH(128)) bram();
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


ifbram #(.ADDR_WIDTH(14),.DATA_WIDTH(64)) bram_read();
bram_map #(.ADDR_WIDTH(14),.DATA_WIDTH(64))
bram_read_map(.bram(bram_read.map)
,.clk(BRAM_READ_clk)
,.rst(BRAM_READ_rst)
,.addr(BRAM_READ_addr)
,.din(BRAM_READ_din)
,.dout(BRAM_READ_dout)
,.en(BRAM_READ_en)
,.we(BRAM_READ_we)
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

wire [31:0] cfgresetn;
wire [31:0] dspresetn;
pltop #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DEBUG(DEBUG))
pltop(.bram(bram)
,.bram_read(bram_read)
,.lb1(lb1)
,.lb2(lb2)
,.hw(hw)
,.dac30axis(dac30axis.master)
,.dac20axis(dac20axis.master)
,.adc20axis(adc20axis.slave)
,.cfgresetn(cfgresetn)
,.dspresetn(dspresetn)
,.aresetn(aresetn)
,.cfgclk(cfgclk)
,.dspclk(dspclk)
,.clk_dac2(clk_dac2)
,.clk_dac3(clk_dac3)
,.clk_adc2(clk_adc2)
,.clkadc2_300(clkadc2_300)
,.clkadc2_600(clkadc2_600)
);

reg [7:0] resetcnt=100;
always @(posedge clk_adc2) begin
	if (|resetcnt) begin
		resetcnt<=resetcnt-1;
	end
end

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
//endmodule
