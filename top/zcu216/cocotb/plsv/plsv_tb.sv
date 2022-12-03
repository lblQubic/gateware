`timescale 1 ns / 1 ps
module plsv_tb#(
/*
//,parameter integer LB_DATAWIDTH	= 32
//,parameter integer LB_ADDRWIDTH	= 8
*/
`include "plps_para.vh"
,`include "bram_para.vh"
,parameter integer ID_WIDTH    = 1
,parameter integer AXI_DATAWIDTH       = 32
,parameter integer AXI_ADDRWIDTH       = 32
,parameter integer AWUSER_WIDTH        = 1
,parameter integer ARUSER_WIDTH        = 1
,parameter integer WUSER_WIDTH = 1
,parameter integer RUSER_WIDTH = 1
,parameter integer BUSER_WIDTH = 1

)(
input aresetn
,input pl_clk0
,output cfgresetn00,output cfgresetn01,output cfgresetn02,output cfgresetn03,output cfgresetn04,output cfgresetn05,output cfgresetn06,output cfgresetn07,output cfgresetn08,output cfgresetn09
,output cfgresetn10,output cfgresetn11,output cfgresetn12,output cfgresetn13,output cfgresetn14,output cfgresetn15,output cfgresetn16,output cfgresetn17,output cfgresetn18,output cfgresetn19
,output cfgresetn20,output cfgresetn21,output cfgresetn22,output cfgresetn23,output cfgresetn24,output cfgresetn25,output cfgresetn26,output cfgresetn27,output cfgresetn28,output cfgresetn29
,output cfgresetn30,output cfgresetn31,output cfgresetn32,output cfgresetn33,output cfgresetn34,output cfgresetn35,output cfgresetn36,output cfgresetn37,output cfgresetn38,output cfgresetn39
,output cfgresetn40,output cfgresetn41,output cfgresetn42,output cfgresetn43,output cfgresetn44,output cfgresetn45,output cfgresetn46,output cfgresetn47,output cfgresetn48,output cfgresetn49
,output cfgresetn50,output cfgresetn51,output cfgresetn52,output cfgresetn53,output cfgresetn54,output cfgresetn55,output cfgresetn56,output cfgresetn57,output cfgresetn58,output cfgresetn59
,output cfgresetn60,output cfgresetn61,output cfgresetn62,output cfgresetn63,output cfgresetn64,output cfgresetn65,output cfgresetn66,output cfgresetn67,output cfgresetn68,output cfgresetn69
,output cfgresetn70,output cfgresetn71,output cfgresetn72,output cfgresetn73,output cfgresetn74,output cfgresetn75,output cfgresetn76,output cfgresetn77,output cfgresetn78,output cfgresetn79
,output cfgresetn80,output cfgresetn81,output cfgresetn82,output cfgresetn83,output cfgresetn84,output cfgresetn85,output cfgresetn86,output cfgresetn87,output cfgresetn88,output cfgresetn89
,output cfgresetn90,output cfgresetn91

,output dspresetn00
,output dspresetn01
,output dspresetn02
,output dspresetn03
,output dspresetn04
,output dspresetn05
,output dspresetn06
,output dspresetn07
,output psresetn00
,output psresetn01
,output psresetn02
,output adc2resetn00
,output adc2resetn01
,output adc2resetn02

//,input wire  cfgregsaxi_aclk
//,input wire  cfgregsaxi_aresetn
,input wire  cfgregsaxi_arlock
,input wire  cfgregsaxi_arvalid
,input wire  cfgregsaxi_awlock
,input wire  cfgregsaxi_awvalid
,input wire  cfgregsaxi_bready
,input wire  cfgregsaxi_rready
,input wire  cfgregsaxi_wlast
,input wire  cfgregsaxi_wvalid
,input wire [(AXI_DATAWIDTH/8)-1 : 0] cfgregsaxi_wstrb
,input wire [1 : 0] cfgregsaxi_arburst
,input wire [1 : 0] cfgregsaxi_awburst
,input wire [2 : 0] cfgregsaxi_arprot
,input wire [2 : 0] cfgregsaxi_arsize
,input wire [2 : 0] cfgregsaxi_awprot
,input wire [2 : 0] cfgregsaxi_awsize
,input wire [3 : 0] cfgregsaxi_arcache
,input wire [3 : 0] cfgregsaxi_arqos
,input wire [3 : 0] cfgregsaxi_arregion
,input wire [3 : 0] cfgregsaxi_awcache
,input wire [3 : 0] cfgregsaxi_awqos
,input wire [3 : 0] cfgregsaxi_awregion
,input wire [7 : 0] cfgregsaxi_arlen
,input wire [7 : 0] cfgregsaxi_awlen
,input wire [AXI_ADDRWIDTH-1 : 0] cfgregsaxi_araddr
,input wire [AXI_ADDRWIDTH-1 : 0] cfgregsaxi_awaddr
,input wire [ARUSER_WIDTH-1 : 0] cfgregsaxi_aruser
,input wire [AWUSER_WIDTH-1 : 0] cfgregsaxi_awuser
,input wire [AXI_DATAWIDTH-1 : 0] cfgregsaxi_wdata
,input wire [ID_WIDTH-1 : 0] cfgregsaxi_arid
,input wire [ID_WIDTH-1 : 0] cfgregsaxi_awid
,input wire [WUSER_WIDTH-1 : 0] cfgregsaxi_wuser
,output wire  cfgregsaxi_arready
,output wire  cfgregsaxi_awready
,output wire  cfgregsaxi_bvalid
,output wire  cfgregsaxi_rlast
,output wire  cfgregsaxi_rvalid
,output wire  cfgregsaxi_wready
,output wire [1 : 0] cfgregsaxi_bresp
,output wire [1 : 0] cfgregsaxi_rresp
,output wire [BUSER_WIDTH-1 : 0] cfgregsaxi_buser
,output wire [AXI_DATAWIDTH-1 : 0] cfgregsaxi_rdata
,output wire [ID_WIDTH-1 : 0] cfgregsaxi_bid
,output wire [ID_WIDTH-1 : 0] cfgregsaxi_rid
,output wire [RUSER_WIDTH-1 : 0] cfgregsaxi_ruser


//,input wire  dspregsaxi_aclk
//,input wire  dspregsaxi_aresetn
,input wire  dspregsaxi_arlock
,input wire  dspregsaxi_arvalid
,input wire  dspregsaxi_awlock
,input wire  dspregsaxi_awvalid
,input wire  dspregsaxi_bready
,input wire  dspregsaxi_rready
,input wire  dspregsaxi_wlast
,input wire  dspregsaxi_wvalid
,input wire [(AXI_DATAWIDTH/8)-1 : 0] dspregsaxi_wstrb
,input wire [1 : 0] dspregsaxi_arburst
,input wire [1 : 0] dspregsaxi_awburst
,input wire [2 : 0] dspregsaxi_arprot
,input wire [2 : 0] dspregsaxi_arsize
,input wire [2 : 0] dspregsaxi_awprot
,input wire [2 : 0] dspregsaxi_awsize
,input wire [3 : 0] dspregsaxi_arcache
,input wire [3 : 0] dspregsaxi_arqos
,input wire [3 : 0] dspregsaxi_arregion
,input wire [3 : 0] dspregsaxi_awcache
,input wire [3 : 0] dspregsaxi_awqos
,input wire [3 : 0] dspregsaxi_awregion
,input wire [7 : 0] dspregsaxi_arlen
,input wire [7 : 0] dspregsaxi_awlen
,input wire [AXI_ADDRWIDTH-1 : 0] dspregsaxi_araddr
,input wire [AXI_ADDRWIDTH-1 : 0] dspregsaxi_awaddr
,input wire [ARUSER_WIDTH-1 : 0] dspregsaxi_aruser
,input wire [AWUSER_WIDTH-1 : 0] dspregsaxi_awuser
,input wire [AXI_DATAWIDTH-1 : 0] dspregsaxi_wdata
,input wire [ID_WIDTH-1 : 0] dspregsaxi_arid
,input wire [ID_WIDTH-1 : 0] dspregsaxi_awid
,input wire [WUSER_WIDTH-1 : 0] dspregsaxi_wuser
,output wire  dspregsaxi_arready
,output wire  dspregsaxi_awready
,output wire  dspregsaxi_bvalid
,output wire  dspregsaxi_rlast
,output wire  dspregsaxi_rvalid
,output wire  dspregsaxi_wready
,output wire [1 : 0] dspregsaxi_bresp
,output wire [1 : 0] dspregsaxi_rresp
,output wire [BUSER_WIDTH-1 : 0] dspregsaxi_buser
,output wire [AXI_DATAWIDTH-1 : 0] dspregsaxi_rdata
,output wire [ID_WIDTH-1 : 0] dspregsaxi_bid
,output wire [ID_WIDTH-1 : 0] dspregsaxi_rid
,output wire [RUSER_WIDTH-1 : 0] dspregsaxi_ruser

//,input wire  bramaxi_aclk
//,input wire  bramaxi_aresetn
,input wire  bramaxi_arlock
,input wire  bramaxi_arvalid
,input wire  bramaxi_awlock
,input wire  bramaxi_awvalid
,input wire  bramaxi_bready
,input wire  bramaxi_rready
,input wire  bramaxi_wlast
,input wire  bramaxi_wvalid
,input wire [(AXI_DATAWIDTH/8)-1 : 0] bramaxi_wstrb
,input wire [1 : 0] bramaxi_arburst
,input wire [1 : 0] bramaxi_awburst
,input wire [2 : 0] bramaxi_arprot
,input wire [2 : 0] bramaxi_arsize
,input wire [2 : 0] bramaxi_awprot
,input wire [2 : 0] bramaxi_awsize
,input wire [3 : 0] bramaxi_arcache
,input wire [3 : 0] bramaxi_arqos
,input wire [3 : 0] bramaxi_arregion
,input wire [3 : 0] bramaxi_awcache
,input wire [3 : 0] bramaxi_awqos
,input wire [3 : 0] bramaxi_awregion
,input wire [7 : 0] bramaxi_arlen
,input wire [7 : 0] bramaxi_awlen
,input wire [AXI_ADDRWIDTH-1 : 0] bramaxi_araddr
,input wire [AXI_ADDRWIDTH-1 : 0] bramaxi_awaddr
,input wire [ARUSER_WIDTH-1 : 0] bramaxi_aruser
,input wire [AWUSER_WIDTH-1 : 0] bramaxi_awuser
,input wire [AXI_DATAWIDTH-1 : 0] bramaxi_wdata
,input wire [ID_WIDTH-1 : 0] bramaxi_arid
,input wire [ID_WIDTH-1 : 0] bramaxi_awid
,input wire [WUSER_WIDTH-1 : 0] bramaxi_wuser
,output wire  bramaxi_arready
,output wire  bramaxi_awready
,output wire  bramaxi_bvalid
,output wire  bramaxi_rlast
,output wire  bramaxi_rvalid
,output wire  bramaxi_wready
,output wire [1 : 0] bramaxi_bresp
,output wire [1 : 0] bramaxi_rresp
,output wire [BUSER_WIDTH-1 : 0] bramaxi_buser
,output wire [AXI_DATAWIDTH-1 : 0] bramaxi_rdata
,output wire [ID_WIDTH-1 : 0] bramaxi_bid
,output wire [ID_WIDTH-1 : 0] bramaxi_rid
,output wire [RUSER_WIDTH-1 : 0] bramaxi_ruser




/*,output BRAM_TOHOST0_clk
,output BRAM_TOHOST0_rst
,output [32-1:0]BRAM_TOHOST0_addr
,output [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST0_din
,input [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST0_dout
,output BRAM_TOHOST0_en
,output [BRAMTOHOST_DATAWIDTH/8-1:0] BRAM_TOHOST0_we

//,input _rsta_busy
//,input _rstb_busy

,output BRAM_TOHOST1_clk
,output BRAM_TOHOST1_rst
,output [32-1:0]BRAM_TOHOST1_addr
,output [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST1_din
,input [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST1_dout
,output BRAM_TOHOST1_en
,output [BRAMTOHOST_DATAWIDTH/8-1:0] BRAM_TOHOST1_we


,output BRAM_FROMHOST0_clk
,output BRAM_FROMHOST0_rst
,output [32-1:0]BRAM_FROMHOST0_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST0_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST0_dout
,output BRAM_FROMHOST0_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST0_we


,output BRAM_FROMHOST1_clk
,output BRAM_FROMHOST1_rst
,output [32-1:0]BRAM_FROMHOST1_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST1_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST1_dout
,output BRAM_FROMHOST1_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST1_we


,output BRAM_FROMHOST2_clk
,output BRAM_FROMHOST2_rst
,output [32-1:0]BRAM_FROMHOST2_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST2_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST2_dout
,output BRAM_FROMHOST2_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST2_we


,output BRAM_FROMHOST3_clk
,output BRAM_FROMHOST3_rst
,output [32-1:0]BRAM_FROMHOST3_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST3_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST3_dout
,output BRAM_FROMHOST3_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST3_we
*/

//,input  DAC20_M_AXIS_ACLK
//,input  DAC20_M_AXIS_ARESETN
,input  DAC20_M_AXIS_TREADY
,output  DAC20_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC20_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC20_M_AXIS_TSTRB
,output  DAC20_M_AXIS_TLAST
,input clk_dac2

//,input  DAC30_M_AXIS_ACLK
//,input  DAC30_M_AXIS_ARESETN
,input  DAC30_M_AXIS_TREADY
,output  DAC30_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC30_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC30_M_AXIS_TSTRB
,output  DAC30_M_AXIS_TLAST
,input clk_dac3

//,input  DAC22_M_AXIS_ACLK
//,input  DAC22_M_AXIS_ARESETN
,input  DAC22_M_AXIS_TREADY
,output  DAC22_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC22_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC22_M_AXIS_TSTRB
,output  DAC22_M_AXIS_TLAST

//,input  DAC32_M_AXIS_ACLK
//,input  DAC32_M_AXIS_ARESETN
/*,input  DAC32_M_AXIS_TREADY
,output  DAC32_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC32_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC32_M_AXIS_TSTRB
,output  DAC32_M_AXIS_TLAST
*/
//,input  ADC20_S_AXIS_ACLK
//,input  ADC20_S_AXIS_ARESETN
/*,output  ADC20_S_AXIS_TREADY
,input  ADC20_S_AXIS_TVALID
,input  [ADC_AXIS_DATAWIDTH-1 : 0] ADC20_S_AXIS_TDATA
,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC20_S_AXIS_TSTRB
,input  ADC20_S_AXIS_TLAST
*/
,input clk_adc2

//,input  ADC21_S_AXIS_ACLK
//,input  ADC21_S_AXIS_ARESETN
,output  ADC21_S_AXIS_TREADY
,input  ADC21_S_AXIS_TVALID
,input  [ADC_AXIS_DATAWIDTH-1 : 0] ADC21_S_AXIS_TDATA
,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC21_S_AXIS_TSTRB
,input  ADC21_S_AXIS_TLAST



,output cfgclk
,output dspclk
,input clkadc2_300
,input clkadc2_600

,input clk100
,input clk125
,input usersi570c0
,input usersi570c1
,input clk104_pl_sysref
,input clk104_pl_clk
);

localparam INIT_accbuf0="INIT_accbuf0.mem";
localparam INIT_accbuf1="INIT_accbuf1.mem";
localparam INIT_accbuf2="INIT_accbuf2.mem";
localparam INIT_accbuf3="INIT_accbuf3.mem";
localparam INIT_acqbuf0="INIT_acqbuf0.mem";
localparam INIT_acqbuf1="INIT_acqbuf1.mem";
localparam INIT_command0="INIT_command0.mem";
localparam INIT_command1="INIT_command1.mem";
localparam INIT_command2="INIT_command2.mem";
localparam INIT_command3="INIT_command3.mem";
localparam INIT_dacmon0="INIT_dacmon0.mem";
localparam INIT_dacmon1="INIT_dacmon1.mem";
localparam INIT_dacmon2="INIT_dacmon2.mem";
localparam INIT_dacmon3="INIT_dacmon3.mem";
localparam INIT_qdrvenv0="INIT_qdrvenv0.mem";
localparam INIT_qdrvenv1="INIT_qdrvenv1.mem";
localparam INIT_qdrvenv2="INIT_qdrvenv2.mem";
localparam INIT_qdrvenv3="INIT_qdrvenv3.mem";
localparam INIT_qdrvfreq0="INIT_qdrvfreq0.mem";
localparam INIT_qdrvfreq1="INIT_qdrvfreq1.mem";
localparam INIT_qdrvfreq2="INIT_qdrvfreq2.mem";
localparam INIT_qdrvfreq3="INIT_qdrvfreq3.mem";
localparam INIT_rdloenv0="INIT_rdloenv0.mem";
localparam INIT_rdloenv1="INIT_rdloenv1.mem";
localparam INIT_rdloenv2="INIT_rdloenv2.mem";
localparam INIT_rdloenv3="INIT_rdloenv3.mem";
localparam INIT_rdlofreq0="INIT_rdlofreq0.mem";
localparam INIT_rdlofreq1="INIT_rdlofreq1.mem";
localparam INIT_rdlofreq2="INIT_rdlofreq2.mem";
localparam INIT_rdlofreq3="INIT_rdlofreq3.mem";
localparam INIT_rdrvenv0="INIT_rdrvenv0.mem";
localparam INIT_rdrvenv1="INIT_rdrvenv1.mem";
localparam INIT_rdrvenv2="INIT_rdrvenv2.mem";
localparam INIT_rdrvenv3="INIT_rdrvenv3.mem";
localparam INIT_rdrvfreq0="INIT_rdrvfreq0.mem";
localparam INIT_rdrvfreq1="INIT_rdrvfreq1.mem";
localparam INIT_rdrvfreq2="INIT_rdrvfreq2.mem";
localparam INIT_rdrvfreq3="INIT_rdrvfreq3.mem";
//localparam integer ADDR_LSB = (AXI_DATAWIDTH/32)+ 1;
//localparam integer LB_ADDRWIDTH	 =AXI_ADDRWIDTH-ADDR_LSB;
//localparam integer LB_DATAWIDTH	 = AXI_DATAWIDTH;

reg [13:0] addr_acqbuf=0;
always @(posedge pl_clk0) begin
	addr_acqbuf<=addr_acqbuf+1;
end

wire [LB1_ADDRWIDTH-1:0] lb1_raddr;
wire [LB1_ADDRWIDTH-1:0] lb1_waddr;
wire lb1_wren;
wire lb1_rden;
wire lb1_rdenlast;
wire lb1_rvalid;
wire lb1_rvalidlast;
wire [LB1_DATAWIDTH-1 : 0] lb1_wdata;
wire [LB1_DATAWIDTH-1 : 0] lb1_rdata;
wire lb1_clk;
wire lb1_aresetn;

wire [LB2_ADDRWIDTH-1:0] lb2_raddr;
wire [LB2_ADDRWIDTH-1:0] lb2_waddr;
wire lb2_wren;
wire lb2_rden;
wire lb2_rdenlast;
wire lb2_rvalid;
wire lb2_rvalidlast;
wire [LB2_DATAWIDTH-1 : 0] lb2_wdata;
wire [LB2_DATAWIDTH-1 : 0] lb2_rdata;
wire lb2_clk;
wire lb2_aresetn;

wire [LB3_ADDRWIDTH-1:0] lb3_raddr;
wire [LB3_ADDRWIDTH-1:0] lb3_waddr;
wire lb3_wren;
wire lb3_rden;
wire lb3_rdenlast;
wire lb3_rvalid;
wire lb3_rvalidlast;
wire [LB3_DATAWIDTH-1 : 0] lb3_wdata;
wire [LB3_DATAWIDTH-1 : 0] lb3_rdata;
wire lb3_clk;
wire lb3_aresetn;

wire [LB4_ADDRWIDTH-1:0] lb4_raddr;
wire [LB4_ADDRWIDTH-1:0] lb4_waddr;
wire lb4_wren;
wire lb4_rden;
wire lb4_rdenlast;
wire lb4_rvalid;
wire lb4_rvalidlast;
wire [LB4_DATAWIDTH-1 : 0] lb4_wdata;
wire [LB4_DATAWIDTH-1 : 0] lb4_rdata;
wire lb4_clk;
wire lb4_aresetn;

wire ADC20_S_AXIS_ACLK=clk_adc2;
wire ADC21_S_AXIS_ACLK=clk_adc2;
wire DAC20_M_AXIS_ARESETN=aresetn;
wire DAC30_M_AXIS_ARESETN=aresetn;
wire DAC22_M_AXIS_ARESETN=aresetn;
wire DAC32_M_AXIS_ARESETN=aresetn;
wire ADC20_S_AXIS_ARESETN=aresetn;
wire ADC21_S_AXIS_ARESETN=aresetn;

wire DAC32_M_AXIS_TREADY;
wire DAC32_M_AXIS_TVALID;
wire [DAC_AXIS_DATAWIDTH-1 : 0] DAC32_M_AXIS_TDATA;
wire [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC32_M_AXIS_TSTRB;
wire DAC32_M_AXIS_TLAST;
// DAC20 loop back to ADC20
wire ADC20_S_AXIS_TREADY;
wire ADC20_S_AXIS_TVALID=DAC32_M_AXIS_TVALID;
wire DAC32_M_AXIS_TREADY=ADC20_S_AXIS_TREADY;
wire [ADC_AXIS_DATAWIDTH-1 : 0] ADC20_S_AXIS_TDATA=
{DAC32_M_AXIS_TDATA[3*64+15:3*64]
,DAC32_M_AXIS_TDATA[2*64+15:2*64]
,DAC32_M_AXIS_TDATA[1*64+15:1*64]
,DAC32_M_AXIS_TDATA[0*64+15:0*64]
};
wire [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC20_S_AXIS_TSTRB={
DAC32_M_AXIS_TSTRB[28]
,DAC32_M_AXIS_TSTRB[24]
,DAC32_M_AXIS_TSTRB[20]
,DAC32_M_AXIS_TSTRB[16]
,DAC32_M_AXIS_TSTRB[12]
,DAC32_M_AXIS_TSTRB[8]
,DAC32_M_AXIS_TSTRB[4]
,DAC32_M_AXIS_TSTRB[0]};
wire ADC20_S_AXIS_TLAST=DAC32_M_AXIS_TLAST;


//assign BRAM_TOHOST0_clk=dspclk;
//assign BRAM_TOHOST1_clk=dspclk;
//assign BRAM_FROMHOST0_clk=dspclk;
//assign BRAM_FROMHOST1_clk=dspclk;
//assign BRAM_FROMHOST2_clk=dspclk;
//assign BRAM_FROMHOST3_clk=dspclk;
wire DAC20_M_AXIS_ACLK=dspclk;
wire DAC22_M_AXIS_ACLK=dspclk;
wire DAC30_M_AXIS_ACLK=dspclk;
wire DAC32_M_AXIS_ACLK=dspclk;
wire cfgregsaxi_aclk=cfgclk;
wire bramaxi_aclk=cfgclk;
wire dspregsaxi_aclk=dspclk;
wire cfgregsaxi_aresetn=cfgresetn00;
wire dspregsaxi_aresetn=dspresetn00;
wire bramaxi_aresetn=cfgresetn00;

axi4_lb #(.DATA_WIDTH(LB1_DATAWIDTH),.ADDR_WIDTH(LB1_ADDRWIDTH+$clog2(LB1_DATAWIDTH/8))
,.ID_WIDTH(ID_WIDTH),.AWUSER_WIDTH(AWUSER_WIDTH),.ARUSER_WIDTH(ARUSER_WIDTH),.WUSER_WIDTH(WUSER_WIDTH),.RUSER_WIDTH(RUSER_WIDTH),.BUSER_WIDTH(BUSER_WIDTH)
)axi4lbctrl(.axi_aclk                (cfgregsaxi_aclk)
,.axi_aresetn             (cfgregsaxi_aresetn)
,.axi_arlock              (cfgregsaxi_arlock)
,.axi_arvalid             (cfgregsaxi_arvalid)
,.axi_awlock              (cfgregsaxi_awlock)
,.axi_awvalid             (cfgregsaxi_awvalid)
,.axi_bready              (cfgregsaxi_bready)
,.axi_rready              (cfgregsaxi_rready)
,.axi_wlast               (cfgregsaxi_wlast)
,.axi_wvalid              (cfgregsaxi_wvalid)
,.axi_wstrb               (cfgregsaxi_wstrb)
,.axi_arburst             (cfgregsaxi_arburst)
,.axi_awburst             (cfgregsaxi_awburst)
,.axi_arprot              (cfgregsaxi_arprot)
,.axi_arsize              (cfgregsaxi_arsize)
,.axi_awprot              (cfgregsaxi_awprot)
,.axi_awsize              (cfgregsaxi_awsize)
,.axi_arcache             (cfgregsaxi_arcache)
,.axi_arqos               (cfgregsaxi_arqos)
,.axi_arregion            (cfgregsaxi_arregion)
,.axi_awcache             (cfgregsaxi_awcache)
,.axi_awqos               (cfgregsaxi_awqos)
,.axi_awregion            (cfgregsaxi_awregion)
,.axi_arlen               (cfgregsaxi_arlen)
,.axi_awlen               (cfgregsaxi_awlen)
,.axi_araddr              (cfgregsaxi_araddr)
,.axi_awaddr              (cfgregsaxi_awaddr)
,.axi_aruser              (cfgregsaxi_aruser)
,.axi_awuser              (cfgregsaxi_awuser)
,.axi_wdata               (cfgregsaxi_wdata)
,.axi_arid                (cfgregsaxi_arid)
,.axi_awid                (cfgregsaxi_awid)
,.axi_wuser               (cfgregsaxi_wuser)
,.axi_arready             (cfgregsaxi_arready)
,.axi_awready             (cfgregsaxi_awready)
,.axi_bvalid              (cfgregsaxi_bvalid)
,.axi_rlast               (cfgregsaxi_rlast)
,.axi_rvalid              (cfgregsaxi_rvalid)
,.axi_wready              (cfgregsaxi_wready)
,.axi_bresp               (cfgregsaxi_bresp)
,.axi_rresp               (cfgregsaxi_rresp)
,.axi_buser               (cfgregsaxi_buser)
,.axi_rdata               (cfgregsaxi_rdata)
,.axi_bid                 (cfgregsaxi_bid)
,.axi_rid                 (cfgregsaxi_rid)
,.axi_ruser               (cfgregsaxi_ruser)

,.lb_waddr    (lb1_waddr)
,.lb_wren    (lb1_wren)
,.lb_rden    (lb1_rden)
,.lb_rdenlast    (lb1_rdenlast)
,.lb_rvalid    (lb1_rvalid)
,.lb_rvalidlast    (lb1_rvalidlast)
,.lb_wdata    (lb1_wdata)
,.lb_raddr    (lb1_raddr)
,.lb_rdata    (lb1_rdata)
,.lb_clk      (lb1_clk)
,.lb_aresetn  (lb1_aresetn)

,.awstate_dbg()
,.arstate_dbg()
,.wstate_dbg()
,.rstate_dbg()
,.bstate_dbg()
);
axi4_lb #(.DATA_WIDTH(LB2_DATAWIDTH),.ADDR_WIDTH(LB2_ADDRWIDTH+$clog2(LB2_DATAWIDTH/8))
,.ID_WIDTH(ID_WIDTH),.AWUSER_WIDTH(AWUSER_WIDTH),.ARUSER_WIDTH(ARUSER_WIDTH),.WUSER_WIDTH(WUSER_WIDTH),.RUSER_WIDTH(RUSER_WIDTH),.BUSER_WIDTH(BUSER_WIDTH)
)axi4lbdsp(.axi_aclk                (dspregsaxi_aclk)
,.axi_aresetn             (dspregsaxi_aresetn)
,.axi_arlock              (dspregsaxi_arlock)
,.axi_arvalid             (dspregsaxi_arvalid)
,.axi_awlock              (dspregsaxi_awlock)
,.axi_awvalid             (dspregsaxi_awvalid)
,.axi_bready              (dspregsaxi_bready)
,.axi_rready              (dspregsaxi_rready)
,.axi_wlast               (dspregsaxi_wlast)
,.axi_wvalid              (dspregsaxi_wvalid)
,.axi_wstrb               (dspregsaxi_wstrb)
,.axi_arburst             (dspregsaxi_arburst)
,.axi_awburst             (dspregsaxi_awburst)
,.axi_arprot              (dspregsaxi_arprot)
,.axi_arsize              (dspregsaxi_arsize)
,.axi_awprot              (dspregsaxi_awprot)
,.axi_awsize              (dspregsaxi_awsize)
,.axi_arcache             (dspregsaxi_arcache)
,.axi_arqos               (dspregsaxi_arqos)
,.axi_arregion            (dspregsaxi_arregion)
,.axi_awcache             (dspregsaxi_awcache)
,.axi_awqos               (dspregsaxi_awqos)
,.axi_awregion            (dspregsaxi_awregion)
,.axi_arlen               (dspregsaxi_arlen)
,.axi_awlen               (dspregsaxi_awlen)
,.axi_araddr              (dspregsaxi_araddr)
,.axi_awaddr              (dspregsaxi_awaddr)
,.axi_aruser              (dspregsaxi_aruser)
,.axi_awuser              (dspregsaxi_awuser)
,.axi_wdata               (dspregsaxi_wdata)
,.axi_arid                (dspregsaxi_arid)
,.axi_awid                (dspregsaxi_awid)
,.axi_wuser               (dspregsaxi_wuser)
,.axi_arready             (dspregsaxi_arready)
,.axi_awready             (dspregsaxi_awready)
,.axi_bvalid              (dspregsaxi_bvalid)
,.axi_rlast               (dspregsaxi_rlast)
,.axi_rvalid              (dspregsaxi_rvalid)
,.axi_wready              (dspregsaxi_wready)
,.axi_bresp               (dspregsaxi_bresp)
,.axi_rresp               (dspregsaxi_rresp)
,.axi_buser               (dspregsaxi_buser)
,.axi_rdata               (dspregsaxi_rdata)
,.axi_bid                 (dspregsaxi_bid)
,.axi_rid                 (dspregsaxi_rid)
,.axi_ruser               (dspregsaxi_ruser)

,.lb_waddr    (lb2_waddr)
,.lb_wren    (lb2_wren)
,.lb_rden    (lb2_rden)
,.lb_rdenlast    (lb2_rdenlast)
,.lb_rvalid    (lb2_rvalid)
,.lb_rvalidlast    (lb2_rvalidlast)
,.lb_wdata    (lb2_wdata)
,.lb_raddr    (lb2_raddr)
,.lb_rdata    (lb2_rdata)
,.lb_clk      (lb2_clk)
,.lb_aresetn  (lb2_aresetn)
,.awstate_dbg()
,.arstate_dbg()
,.wstate_dbg()
,.rstate_dbg()
,.bstate_dbg()
);

axi4_lb #(.DATA_WIDTH(LB3_DATAWIDTH),.ADDR_WIDTH(LB3_ADDRWIDTH+$clog2(LB3_DATAWIDTH/8))
,.ID_WIDTH(ID_WIDTH),.AWUSER_WIDTH(AWUSER_WIDTH),.ARUSER_WIDTH(ARUSER_WIDTH),.WUSER_WIDTH(WUSER_WIDTH),.RUSER_WIDTH(RUSER_WIDTH),.BUSER_WIDTH(BUSER_WIDTH)
)axi4lbbram(.axi_aclk                (bramaxi_aclk)
,.axi_aresetn             (bramaxi_aresetn)
,.axi_arlock              (bramaxi_arlock)
,.axi_arvalid             (bramaxi_arvalid)
,.axi_awlock              (bramaxi_awlock)
,.axi_awvalid             (bramaxi_awvalid)
,.axi_bready              (bramaxi_bready)
,.axi_rready              (bramaxi_rready)
,.axi_wlast               (bramaxi_wlast)
,.axi_wvalid              (bramaxi_wvalid)
,.axi_wstrb               (bramaxi_wstrb)
,.axi_arburst             (bramaxi_arburst)
,.axi_awburst             (bramaxi_awburst)
,.axi_arprot              (bramaxi_arprot)
,.axi_arsize              (bramaxi_arsize)
,.axi_awprot              (bramaxi_awprot)
,.axi_awsize              (bramaxi_awsize)
,.axi_arcache             (bramaxi_arcache)
,.axi_arqos               (bramaxi_arqos)
,.axi_arregion            (bramaxi_arregion)
,.axi_awcache             (bramaxi_awcache)
,.axi_awqos               (bramaxi_awqos)
,.axi_awregion            (bramaxi_awregion)
,.axi_arlen               (bramaxi_arlen)
,.axi_awlen               (bramaxi_awlen)
,.axi_araddr              (bramaxi_araddr)
,.axi_awaddr              (bramaxi_awaddr)
,.axi_aruser              (bramaxi_aruser)
,.axi_awuser              (bramaxi_awuser)
,.axi_wdata               (bramaxi_wdata)
,.axi_arid                (bramaxi_arid)
,.axi_awid                (bramaxi_awid)
,.axi_wuser               (bramaxi_wuser)
,.axi_arready             (bramaxi_arready)
,.axi_awready             (bramaxi_awready)
,.axi_bvalid              (bramaxi_bvalid)
,.axi_rlast               (bramaxi_rlast)
,.axi_rvalid              (bramaxi_rvalid)
,.axi_wready              (bramaxi_wready)
,.axi_bresp               (bramaxi_bresp)
,.axi_rresp               (bramaxi_rresp)
,.axi_buser               (bramaxi_buser)
,.axi_rdata               (bramaxi_rdata)
,.axi_bid                 (bramaxi_bid)
,.axi_rid                 (bramaxi_rid)
,.axi_ruser               (bramaxi_ruser)

,.lb_waddr    (lb3_waddr)
,.lb_wren    (lb3_wren)
,.lb_rden    (lb3_rden)
,.lb_rdenlast    (lb3_rdenlast)
,.lb_rvalid    (lb3_rvalid)
,.lb_rvalidlast    (lb3_rvalidlast)
,.lb_wdata    (lb3_wdata)
,.lb_raddr    (lb3_raddr)
,.lb_rdata    (lb3_rdata)
,.lb_clk      (lb3_clk)
,.lb_aresetn  (lb3_aresetn)
,.awstate_dbg()
,.arstate_dbg()
,.wstate_dbg()
,.rstate_dbg()
,.bstate_dbg()
);
/*ifbram #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH)) bram_tohost0();
ifbram #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH)) bram_tohost1();

ifbram #(.ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.DATAWIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost0();
ifbram #(.ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.DATAWIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost1();
ifbram #(.ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.DATAWIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost2();
ifbram #(.ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.DATAWIDTH(BRAMFROMHOST_DATAWIDTH)) bram_fromhost3();

bram_map #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH))
bram_tohost0_map(.bram(bram_tohost0)
,.clk(BRAM_TOHOST0_clk),.rst(BRAM_TOHOST0_rst),.addr(BRAM_TOHOST0_addr),.din(BRAM_TOHOST0_din),.dout(BRAM_TOHOST0_dout),.en(BRAM_TOHOST0_en),.we(BRAM_TOHOST0_we));
bram_map #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH))
bram_tohost1_map(.bram(bram_tohost1)
,.clk(BRAM_TOHOST1_clk),.rst(BRAM_TOHOST1_rst),.addr(BRAM_TOHOST1_addr),.din(BRAM_TOHOST1_din),.dout(BRAM_TOHOST1_dout),.en(BRAM_TOHOST1_en),.we(BRAM_TOHOST1_we));

bram_map #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost0_map(.bram(bram_fromhost0)
,.clk(BRAM_FROMHOST0_clk),.rst(BRAM_FROMHOST0_rst),.addr(BRAM_FROMHOST0_addr),.din(BRAM_FROMHOST0_din),.dout(BRAM_FROMHOST0_dout),.en(BRAM_FROMHOST0_en),.we(BRAM_FROMHOST0_we));
bram_map #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost1_map(.bram(bram_fromhost1)
,.clk(BRAM_FROMHOST1_clk),.rst(BRAM_FROMHOST1_rst),.addr(BRAM_FROMHOST1_addr),.din(BRAM_FROMHOST1_din),.dout(BRAM_FROMHOST1_dout),.en(BRAM_FROMHOST1_en),.we(BRAM_FROMHOST1_we));
bram_map #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost2_map(.bram(bram_fromhost2)
,.clk(BRAM_FROMHOST2_clk),.rst(BRAM_FROMHOST2_rst),.addr(BRAM_FROMHOST2_addr),.din(BRAM_FROMHOST2_din),.dout(BRAM_FROMHOST2_dout),.en(BRAM_FROMHOST2_en),.we(BRAM_FROMHOST2_we));
bram_map #(.ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.DATAWIDTH(BRAMTOHOST_DATAWIDTH))
bram_fromhost3_map(.bram(bram_fromhost3)
,.clk(BRAM_FROMHOST3_clk),.rst(BRAM_FROMHOST3_rst),.addr(BRAM_FROMHOST3_addr),.din(BRAM_FROMHOST3_din),.dout(BRAM_FROMHOST3_dout),.en(BRAM_FROMHOST3_en),.we(BRAM_FROMHOST3_we));
*/

hwif hw();

//localparam integer DATAWIDTH  = 32;
//localparam integer ADDRWIDTH   = 14;
//localparam DEBUG="true";
//localparam DAC_AXIS_DATAWIDTH=256;
//localparam ADC_AXIS_DATAWIDTH=64;
//localparam integer BRAMTOHOST_ADDRWIDTH=15;
//localparam integer BRAMTOHOST_DATAWIDTH=64;
//localparam integer BRAMFROMHOST_ADDRWIDTH=13;
//localparam integer BRAMFROMHOST_DATAWIDTH=512;
plsv #(`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"

	//.LB_DATAWIDTH(LB_DATAWIDTH),.LB_ADDRWIDTH(LB_ADDRWIDTH),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH),.ADC_AXIS_DATAWIDTH(ADC_AXIS_DATAWIDTH),.BRAMTOHOST_ADDRWIDTH(BRAMTOHOST_ADDRWIDTH),.BRAMTOHOST_DATAWIDTH(BRAMTOHOST_DATAWIDTH),.BRAMFROMHOST_ADDRWIDTH(BRAMFROMHOST_ADDRWIDTH),.BRAMFROMHOST_DATAWIDTH(BRAMFROMHOST_DATAWIDTH)
)
plsv
(
`include "plps_portinst.vh"
,.hw(hw)
);
hwifsim hwifsim(.hw(hw)
,.clk100(clk100),.clk125(clk125),.usersi570c0(usersi570c0),.usersi570c1(usersi570c1),.clk104_pl_sysref(clk104_pl_sysref),.clk104_pl_clk(clk104_pl_clk)
);
//assign lb1_aresetn=cfgresetn00;
//assign lb2_aresetn=dspresetn00;
endmodule
