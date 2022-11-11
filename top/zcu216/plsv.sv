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
)(	input aresetn//`include "plps_port.vh"
,input pl_clk0
,output cfgresetn00
,output cfgresetn01
,output cfgresetn02
,output cfgresetn03
,output cfgresetn04
,output cfgresetn05
,output cfgresetn06
,output cfgresetn07
,output cfgresetn08
,output cfgresetn09
,output cfgresetn10
,output cfgresetn11
,output cfgresetn12
,output cfgresetn13
,output cfgresetn14
,output cfgresetn15
,output dspresetn00
,output dspresetn01
,output psresetn00
,output psresetn01
,output psresetn02

,input lb1_wvalid
,input [ADDR_WIDTH-1:0] lb1_waddr
,input [DATA_WIDTH/8-1:0] lb1_wstrb
,input [DATA_WIDTH-1:0] lb1_wdata
,input [ADDR_WIDTH-1:0] lb1_raddr
,output [DATA_WIDTH-1:0] lb1_rdata
,input lb1_clk
,input  lb1_aresetn
,input lb2_wvalid
,input [ADDR_WIDTH-1:0] lb2_waddr
,input [DATA_WIDTH/8-1:0] lb2_wstrb
,input [DATA_WIDTH-1:0] lb2_wdata
,input [ADDR_WIDTH-1:0] lb2_raddr
,output [DATA_WIDTH-1:0] lb2_rdata
,input lb2_clk
,input  lb2_aresetn

,output BRAM_READ0_clk
,output BRAM_READ0_rst
,output [BRAMREAD_ADDRWIDTH-1:0]BRAM_READ0_addr
,output [BRAMREAD_DATAWIDTH-1:0] BRAM_READ0_din
,input [BRAMREAD_DATAWIDTH-1:0] BRAM_READ0_dout
,output BRAM_READ0_en
,output [7:0] BRAM_READ0_we

//,input bram_rsta_busy
//,input bram_rstb_busy

,output BRAM_READ1_clk
,output BRAM_READ1_rst
,output [BRAMREAD_ADDRWIDTH-1:0]BRAM_READ1_addr
,output [BRAMREAD_DATAWIDTH-1:0] BRAM_READ1_din
,input [BRAMREAD_DATAWIDTH-1:0] BRAM_READ1_dout
,output BRAM_READ1_en
,output [7:0] BRAM_READ1_we


,output BRAM_WRITE0_clk
,output BRAM_WRITE0_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE0_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE0_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE0_dout
,output BRAM_WRITE0_en
,output [BRAMWRITE_DATAWIDTH/8-1:0] BRAM_WRITE0_we


,output BRAM_WRITE1_clk
,output BRAM_WRITE1_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE1_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE1_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE1_dout
,output BRAM_WRITE1_en
,output [BRAMWRITE_DATAWIDTH/8-1:0] BRAM_WRITE1_we


,output BRAM_WRITE2_clk
,output BRAM_WRITE2_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE2_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE2_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE2_dout
,output BRAM_WRITE2_en
,output [BRAMWRITE_DATAWIDTH/8-1:0] BRAM_WRITE2_we


,output BRAM_WRITE3_clk
,output BRAM_WRITE3_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE3_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE3_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE3_dout
,output BRAM_WRITE3_en
,output [BRAMWRITE_DATAWIDTH/8-1:0] BRAM_WRITE3_we



/*,input  DAC20_M_AXIS_ACLK
,input  DAC20_M_AXIS_ARESETN
,input  DAC20_M_AXIS_TREADY
,output  DAC20_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC20_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC20_M_AXIS_TSTRB
,output  DAC20_M_AXIS_TLAST
,input clk_dac2

,input  DAC30_M_AXIS_ACLK
,input  DAC30_M_AXIS_ARESETN
,input  DAC30_M_AXIS_TREADY
,output  DAC30_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC30_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC30_M_AXIS_TSTRB
,output  DAC30_M_AXIS_TLAST
,input clk_dac3

,input  ADC20_S_AXIS_ACLK
,input  ADC20_S_AXIS_ARESETN
,output  ADC20_S_AXIS_TREADY
,input  ADC20_S_AXIS_TVALID
,input  [ADC_AXIS_DATAWIDTH-1 : 0] ADC20_S_AXIS_TDATA
,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC20_S_AXIS_TSTRB
,input  ADC20_S_AXIS_TLAST
,input clk_adc2

,input  ADC21_S_AXIS_ACLK
,input  ADC21_S_AXIS_ARESETN
,output  ADC21_S_AXIS_TREADY
,input  ADC21_S_AXIS_TVALID
,input  [ADC_AXIS_DATAWIDTH-1 : 0] ADC21_S_AXIS_TDATA
,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC21_S_AXIS_TSTRB
,input  ADC21_S_AXIS_TLAST


*/

   ,output cfgclk
   ,output dspclk
   ,output clkadc2_300
   ,output clkadc2_600
   ,hwif hw
   );
   //wire dspclk;
   /*(*dont_touch = "true" *) wire _dspclk0;
   (*dont_touch = "true" *) wire _dspclk1;
   (*dont_touch = "true" *) wire _dspclk2;
   (*dont_touch = "true" *) wire _dspclk3;
   (*dont_touch = "true" *) wire _dspclk4;
   (*dont_touch = "true" *) wire _dspclk5;
   (*dont_touch = "true" *) wire _dspclk6;
   (*dont_touch = "true" *) wire _dspclk7;
   (*dont_touch = "true" *) wire _dspclk8;
   */
  /*BUFG bufgdspclk0(.I(dspclk),.O(dspclk0));
  BUFG bufgdspclk1(.I(dspclk),.O(dspclk1));
  BUFG bufgdspclk2(.I(dspclk),.O(dspclk2));
  BUFG bufgdspclk3(.I(dspclk),.O(dspclk3));
  BUFG bufgdspclk4(.I(dspclk),.O(dspclk4));
  BUFG bufgdspclk5(.I(dspclk),.O(dspclk5));
  BUFG bufgdspclk6(.I(dspclk),.O(dspclk6));
  BUFG bufgdspclk7(.I(dspclk),.O(dspclk7));
  BUFG bufgdspclk8(.I(dspclk),.O(dspclk8));
  */
 /*assign dspclk0=_dspclk0;
 assign dspclk1=_dspclk1;
 assign dspclk2=_dspclk2;
 assign dspclk3=_dspclk3;
 assign dspclk4=_dspclk4;
 assign dspclk5=_dspclk5;
 assign dspclk6=_dspclk6;
 assign dspclk7=_dspclk7;
 assign dspclk8=_dspclk8;
 */
//assign  cfgclk=hw.clk100;
//assign dspclk=hw.clk104_pl_clk;

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
*/

wire [31:0] cfgresetn_r;
wire [31:0] dspresetn_r;
wire [31:0] psresetn_r;
wire cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16;//,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00;
assign {cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00}=cfgresetn_r;
wire dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02;//,dspresetn01,dspresetn00;
assign {dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00}=dspresetn_r;
wire psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03;//,psresetn02,psresetn01,psresetn00;
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

	pltop #(.DATA_WIDTH(DATA_WIDTH),.ADDR_WIDTH(ADDR_WIDTH),.DEBUG(DEBUG))
	pltop(.bram_read0(bram_read[0])
	,.bram_read1(bram_read[1])
	,.bram_write0(bram_write[0])
	,.bram_write1(bram_write[1])
	,.bram_write2(bram_write[2])
	,.bram_write3(bram_write[3])
	,.lb1(lb1)
	,.lb2(lb2)
	,.hw(hw)
	//,.dac30axis(dac30axis.master)
	//,.dac20axis(dac20axis.master)
	//,.adc20axis(adc20axis.slave)
	,.cfgresetn(cfgresetn_r)
	,.dspresetn(dspresetn_r)
	,.psresetn(psresetn_r)
	,.aresetn(aresetn)
	,.pl_clk0(pl_clk0)
	,.cfgclk(cfgclk)
	,.dspclk(dspclk)
	//,.clk_dac2(clk_dac2)
	//,.clk_dac3(clk_dac3)
	//,.clk_adc2(clk_adc2)
	,.clkadc2_300(clkadc2_300)
	,.clkadc2_600(clkadc2_600)
	);
	/*hwif hw();

	board board(.fpga(fpga),.hw(hw.hw));

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
   endmodule
