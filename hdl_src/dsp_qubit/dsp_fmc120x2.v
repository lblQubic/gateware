`define LB_DECODE_dsp_fmc120x2
`include "dsp_fmc120x2_auto.vh"

module dsp_fmc120x2 #(
    parameter N_CHAN = 8
,parameter aw=10
,parameter DEBUG="true"
) (
   input          reset,
   input          lb_clk,
   input  [19:0]  lb_addr,
   input          lb_write,
   input          lb_read,
   input  [31:0]  lb_wdata,
   output [31:0]  lb_rdata,
   input          lb_rvalid,

   input          fmc_clk0,
   input          fmc_trigger0,
   input          fmc_sysref0,
   input          fmc_clk1,
   input          fmc_trigger1,
   input          fmc_sysref1,
   output [1:0]   trigger_out,

   input  [63:0]  adc0_out,
   input          adc0_val,
   input  [63:0]  adc1_out,
   input          adc1_val,
   input  [63:0]  adc2_out,
   input          adc2_val,
   input  [63:0]  adc3_out,
   input          adc3_val,
   input  [63:0]  adc4_out,
   input          adc4_val,
   input  [63:0]  adc5_out,
   input          adc5_val,
   input  [63:0]  adc6_out,
   input          adc6_val,
   input  [63:0]  adc7_out,
   input          adc7_val,
   output [63:0]  dac0_in,
   output         dac0_val,
   output [63:0]  dac1_in,
   output         dac1_val,
   output [63:0]  dac2_in,
   output         dac2_val,
   output [63:0]  dac3_in,
   output         dac3_val,
   output [63:0]  dac4_in,
   output         dac4_val,
   output [63:0]  dac5_in,
   output         dac5_val,
   output [63:0]  dac6_in,
   output         dac6_val,
   output [63:0]  dac7_in,
   output         dac7_val
   ,output user_sma_gpio_p
   ,output user_sma_gpio_n

	   /*,

   // stream input
   input [15:0]   s_rx_tdata,
   input          s_rx_tvalid,
   // stream output
   output [15:0]  s_tx_tdata,
   output         s_tx_tvalid*/
);

wire [31:0] lb_data = lb_wdata;
`AUTOMATIC_decode
// reg [0:0] dsp_reset; top-level we-strobe
// reg [0:0] dac_buf_flip; top-level single-cycle
// reg [11:0] adc_wfm_len; top-level
// reg [11:0] dac_wfm_len; top-level
// reg [0:0] dac_permit; top-level
// reg [15:0] bias_dac0; top-level
// reg [15:0] bias_dac1; top-level
// reg [31:0] period_dac0; top-level
// reg [31:0] period_dac1; top-level
// reg [31:0] period_dac2; top-level
// reg [31:0] period_dac3; top-level
// reg [31:0] period_dac4; top-level
// reg [31:0] period_dac5; top-level
// reg [31:0] period_dac6; top-level
// reg [31:0] period_dac7; top-level
// reg [31:0] period_stream; top-level
// reg [31:0] period_adc; top-level

wire dsp_clk = fmc_clk0; // master clk

reg [25:0] clk_cnt=0;
always @(posedge dsp_clk) clk_cnt <= dsp_reset ? 0 : clk_cnt+1'b1;

// individual channel triggers:
localparam N_TRIG = 10;
// default 400kHz
localparam [31:0] DEFAULT_PERIOD = 32'd250000;

reg [31:0] trig_cnts [N_TRIG-1:0];
wire trig_chan [N_TRIG-1:0];
assign trig_chan[0] = trig_cnts[0] == period_dac0-1;
assign trig_chan[1] = trig_cnts[1] == period_dac1-1;
assign trig_chan[2] = trig_cnts[2] == period_dac2-1;
assign trig_chan[3] = trig_cnts[3] == period_dac3-1;
assign trig_chan[4] = trig_cnts[4] == period_dac4-1;
assign trig_chan[5] = trig_cnts[5] == period_dac5-1;
assign trig_chan[6] = trig_cnts[6] == period_dac6-1;
assign trig_chan[7] = trig_cnts[7] == period_dac7-1;

assign trig_chan[8] = trig_cnts[8] == period_stream-1;
assign trig_chan[9] = trig_cnts[9] == period_adc-1;

wire stream_trig = trig_chan[8];      // stream period
wire adc_trigger = trig_chan[9];      // ADC scan period

wire [31:0] default_period=DEFAULT_PERIOD;
wire trig_chan0=trig_chan[0];
wire [31:0] trig_cnts0=trig_cnts[0];
wire [31:0] period_dac0_w=period_dac0;

integer chan=0;
initial begin
    period_dac0   = DEFAULT_PERIOD;
    period_dac1   = DEFAULT_PERIOD;
    period_dac2   = DEFAULT_PERIOD;
    period_dac3   = DEFAULT_PERIOD;
    period_dac4   = DEFAULT_PERIOD;
    period_dac5   = DEFAULT_PERIOD;
    period_dac6   = DEFAULT_PERIOD;
    period_dac7   = DEFAULT_PERIOD;
    period_adc    = DEFAULT_PERIOD;
    period_stream = DEFAULT_PERIOD;
    for (chan=0; chan<N_TRIG; chan=chan+1)
        trig_cnts[chan] = 32'd0;
end

always @(posedge dsp_clk) begin
    if (dsp_reset) begin
        for (chan=0; chan<N_TRIG; chan=chan+1)
            trig_cnts[chan] <= 32'd0;
    end else begin
        for (chan=0; chan<N_TRIG; chan=chan+1)
            trig_cnts[chan] <= (trig_chan[chan]) ? 0 : trig_cnts[chan] + 1'b1;
    end
end

//assign s_tx_tdata = 16'h0;
//assign s_tx_tvalid = 1'b0;

// Mapping
wire [63:0]  testdata;
reg [63:0] adc_buf_in [0:7];
reg [ 7:0] adc_phy_val=0;
wire [11:0] bufsel;
wire [2:0] bufsel0,bufsel1,bufsel2,bufsel3;
wire [16*tslice-1:0] xbase [3:0];
wire [16*tslice-1:0] ybase [3:0];
wire [16*tslice-1:0] xlo_w [3:0];
wire [16*tslice-1:0] ylo_w [3:0];
reg [16*tslice-1:0] xlo [3:0];
reg [16*tslice-1:0] ylo [3:0];
wire measact0, measact1, measact2, measact3;  // XXX placeholder
assign {bufsel3,bufsel2,bufsel1,bufsel0}=bufsel;
always @(posedge dsp_clk) begin
	{adc_buf_in[0],adc_buf_in[1]} <= (bufsel0 == 3'b00) ? {adc0_out,adc1_out} : (bufsel0==3'b01) ? {dac0_in,dac1_in} : (bufsel0==3'b10) ?  {xbase[0],ybase[0]} : bufsel0==3'b011 ? {adc0_out,adc1_out} : bufsel0==3'b100 ? {xlo[0],ylo[0]} : bufsel0==3'b101 ? {xlo[0],ylo[0]} : {testdata,testdata};
	{adc_buf_in[2],adc_buf_in[3]} <= (bufsel1 == 3'b00) ? {adc2_out,adc3_out} : (bufsel1==3'b01) ? {dac2_in,dac3_in} : (bufsel1==3'b10) ?  {xbase[1],ybase[1]} : bufsel1==3'b011 ? {adc2_out,adc3_out} : bufsel1==3'b100 ? {xlo[1],ylo[1]} :  bufsel1==3'b101 ? {xlo[1],ylo[1]} :{testdata,testdata};
	{adc_buf_in[4],adc_buf_in[5]} <= (bufsel2 == 3'b00) ? {adc4_out,adc5_out} : (bufsel2==3'b01) ? {dac4_in,dac5_in} : (bufsel2==3'b10) ?  {xbase[2],ybase[2]} : bufsel2==3'b011 ? {adc4_out,adc5_out} : bufsel2==3'b100 ? {xlo[2],ylo[2]} :  bufsel2==3'b101 ? {xlo[2],ylo[2]} :{testdata,testdata};
	{adc_buf_in[6],adc_buf_in[7]} <= (bufsel3 == 3'b00) ? {adc6_out,adc7_out} : (bufsel3==3'b01) ? {dac6_in,dac7_in} : (bufsel3==3'b10) ?  {xbase[3],ybase[3]} : bufsel3==3'b011 ? {adc6_out,adc7_out} : bufsel3==3'b100 ? {xlo[3],ylo[3]} :  bufsel3==3'b101 ? {xlo[3],ylo[3]} :{testdata,testdata};
	{adc_phy_val[0],adc_phy_val[1]} <= (bufsel0 == 3'b00) ? {adc0_val,adc1_val} : (bufsel0==3'b01) ? 3'b11 : (bufsel0==3'b10) ?  {measact0,measact0} : bufsel0==3'b011 ? {measact0,measact0} : bufsel0==3'b100 ? {measact0,measact0} : bufsel0==3'b101 ? 2'b11 : 2'b11;
	{adc_phy_val[2],adc_phy_val[3]} <= (bufsel1 == 3'b00) ? {adc2_val,adc3_val} : (bufsel1==3'b01) ? 3'b11 : (bufsel1==3'b10) ?  {measact1,measact1} : bufsel1==3'b011 ? {measact1,measact1} : bufsel1==3'b100 ? {measact1,measact1} : bufsel1==3'b101 ? 2'b11 : 2'b11;
	{adc_phy_val[4],adc_phy_val[5]} <= (bufsel2 == 3'b00) ? {adc4_val,adc5_val} : (bufsel2==3'b01) ? 3'b11 : (bufsel2==3'b10) ?  {measact2,measact2} : bufsel2==3'b011 ? {measact2,measact2} : bufsel2==3'b100 ? {measact2,measact2} : bufsel2==3'b101 ? 2'b11 : 2'b11;
	{adc_phy_val[6],adc_phy_val[7]} <= (bufsel3 == 3'b00) ? {adc6_val,adc7_val} : (bufsel3==3'b01) ? 3'b11 : (bufsel3==3'b10) ?  {measact3,measact3} : bufsel3==3'b011 ? {measact3,measact3} : bufsel3==3'b100 ? {measact3,measact3} : bufsel3==3'b101 ? 2'b11 : 2'b11;
end
wire [15:0] adc_buf_out [0:7];

// Note that this whole module started as a copy of ../dsp_fmc120x2/dsp_fmc120x2.v
// If you uncomment the following line, the original behavior will be recovered.
/*`define PROTOTYPE
`ifdef PROTOTYPE
wire [63:0] dac_phy_dat [0:7];
wire [ 7:0] dac_phy_val;
assign dac0_in  = dac_phy_dat[0];
assign dac0_val = dac_phy_val[0];
assign dac1_in  = dac_phy_dat[1];
assign dac1_val = dac_phy_val[1];
assign dac2_in  = dac_phy_dat[2];
assign dac2_val = dac_phy_val[2];
assign dac3_in  = dac_phy_dat[3];
assign dac3_val = dac_phy_val[3];
assign dac4_in  = dac_phy_dat[4];
assign dac4_val = dac_phy_val[4];
assign dac5_in  = dac_phy_dat[5];
assign dac5_val = dac_phy_val[5];
assign dac6_in  = dac_phy_dat[6];
assign dac6_val = dac_phy_val[6];
assign dac7_in  = dac_phy_dat[7];
assign dac7_val = dac_phy_val[7];
`endif
*/
wire [15:0] dac_buf_out [0:7];

wire [7:0] dac_ram_wen;
assign dac_ram_wen[0] = lb_write & (lb_addr[19:12]==8'h30);
assign dac_ram_wen[1] = lb_write & (lb_addr[19:12]==8'h31);
assign dac_ram_wen[2] = lb_write & (lb_addr[19:12]==8'h32);
assign dac_ram_wen[3] = lb_write & (lb_addr[19:12]==8'h33);
assign dac_ram_wen[4] = lb_write & (lb_addr[19:12]==8'h34);
assign dac_ram_wen[5] = lb_write & (lb_addr[19:12]==8'h35);
assign dac_ram_wen[6] = lb_write & (lb_addr[19:12]==8'h36);
assign dac_ram_wen[7] = lb_write & (lb_addr[19:12]==8'h37);

genvar ix;
generate for (ix=0; ix<N_CHAN; ix=ix+1)
    begin: gen_buf

    adc_buf #(.AW(12), .DW(16)) adc_buf_i (
        .wfm_len        (adc_wfm_len    ),
        .adc_trigger    (adc_trigger    ),
        .adc_phy_clk    (dsp_clk ),
        .adc_phy_dat    (adc_buf_in[ix]),
        .adc_phy_val    (adc_phy_val[ix]),
        .lb_clk         (lb_clk         ),
        .lb_read        (lb_read        ),
        .lb_rvalid      (lb_rvalid      ),
        .lb_addr        (lb_addr[11:0]  ),
        .lb_rdata       (adc_buf_out[ix])
    );

`ifdef PROTOTYPE
    dac_buf #(.AW(12), .DW(16)) dac_buf_i (
        .wfm_len        (dac_wfm_len    ),
        .lb_clk         (lb_clk         ),
        .lb_write       (dac_ram_wen[ix]),
        .lb_addr        (lb_addr[11:0]  ),
        .lb_wdata       (lb_wdata[15:0] ),
        .lb_rdata       (dac_buf_out[ix]),
        .buf_flip       (dac_buf_flip   ),
        .dac_trigger    (trig_chan[ix] & dac_permit ),      // individual trigger rate
        .dac_phy_clk    (dsp_clk ),
        .dac_phy_val    (dac_phy_val[ix]),
        .dac_phy_dat    (dac_phy_dat[ix])
    );
`endif
    end
endgenerate

assign trigger_out[0] = stream_trig;
assign trigger_out[1] = stream_trig;

`ifndef PROTOTYPE

// Move localbus writes to dsp_clk domain for phalanx's use
// if aw==10, addr base of 0x38000 yields lb_addr[19:15] == 7
wire phalanx_gstrobe0 = lb_write;// & (lb_addr[19:10+5] == 7);
wire phalanx_gstrobe;
wire [10+9:0] d_addr;
wire [31:0] d_wdata;
wire [0:0] d_write;
data_xdomain #(.size(20+32)) dxw(.clk_in(lb_clk),
	.gate_in(phalanx_gstrobe0),
	.data_in({lb_addr[19:0], lb_wdata}),
	.clk_out(dsp_clk), .gate_out(phalanx_gstrobe),
	.data_out({d_addr, d_wdata})
);
assign d_write=phalanx_gstrobe;

// Command memory - temporary placeholder for a real program generator
//wire phalanx_cstrobe = d_write & (d_addr[19:12]==8'b01000000);// 0x40000
wire phalanx_cstrobe = d_write & (d_addr[19:CMDAW]==2'b10);// 0x80000 to 0xbffff
wire cstrobe;
wire [7:0] cmda;
wire [63:0] command;
wire [71:0] command_raw;
assign command = command_raw[63:0];
assign cmda = command_raw[71:64];

wire  [31:0]  extra;
parameter CMDAW=18;
//qcmd_gen #(.aw(CMDAW))
//qcmd(.clk(dsp_clk),
//        .waddr(d_addr[CMDAW-1:0]), .wdata(d_wdata), .wstrobe(phalanx_cstrobe),
//	.trig(trig_chan[0]),
//	.command(command), .cmda(cmda), .cstrobe(cstrobe)
//	,.extra(extra)
//);

proc dpr(.clk(dsp_clk), .reset(trig_chan[0]), 
    .cmd_addr(d_addr[7:0]), .cmd_data(d_wdata), .write_prog_enable(phalanx_cstrobe),
    .cmd_out(command_raw), .cstrobe(cstrobe));

wire [3:0]resultx;
wire [3:0]resulty;
wire daczero=extra[0]&resultx[0];
wire [63:0] command_test={2'b0,12'b0,12'd999,14'b0,24'd167772};
// Heavy DSP; well simulated
localparam dw=16;
localparam nel=8;  // maybe move to 16 later
localparam nell=3;  // maybe move to 16 later
localparam qbits=4;
localparam tslice=4;
wire fault0;
wire [qbits*2*tslice*dw-1:0] dacout;
//wire phalanx_wstrobe = d_addr[aw+5] & phalanx_gstrobe;
wire phalanx_wstrobe = d_write & (d_addr[19:15]==6'b00111);  // 0x38000
phalanx #(.aw(10), .dw(dw), .nel(nel), .qbits(qbits), .tslice(tslice)) phalanx(
        .clk(dsp_clk), .fault(fault0),
        .command(command), .cmda(cmda[nell-1:0]), .cstrobe(cstrobe&~cmda[nell]),
        .waddr(d_addr[10+3+2-1:0]), .wdata(d_wdata), .wstrobe(phalanx_wstrobe),
        .dacout(dacout)
		,.daczero(daczero)
);

wire [7:0] valid;
wire bufreset;
wire start;
wire digiloopback;
wire [5:0] mon_navr;
wire [31:0] mon_dt;
wire [1:0] mon_slice;
wire [4:0] mon_sel0;
wire [4:0] mon_sel1;
wire panzoom_reset;
wire test;
wire [2:0] opsel;
wire [15:0] dac0_dc;
wire [15:0] dac1_dc;
wire [15:0] dac2_dc;
wire [15:0] dac3_dc;
wire [15:0] dac4_dc;
wire [15:0] dac5_dc;
wire [15:0] dac6_dc;
wire [15:0] dac7_dc;
wire [31:0] xoffset;
wire [31:0] yoffset;
wire [17:0] iqrot;

reg [7:0] reg_valid=32'hff; wire stb_valid=((d_addr==20'h50000)&d_write); always @(posedge dsp_clk) if(stb_valid) reg_valid<=d_wdata[7:0]; assign valid=reg_valid;
reg [11:0] reg_bufsel=12'b0; wire stb_bufsel=((d_addr==20'h50001)&d_write); always @(posedge dsp_clk) if(stb_bufsel) reg_bufsel<=d_wdata[11:0]; assign bufsel=reg_bufsel;
reg [0:0] reg_start=8'b0; wire stb_start=((d_addr==20'h50002)& d_write); always @(posedge dsp_clk) if(stb_start) reg_start<=d_wdata[7:0]; assign start=reg_start;
reg [0:0] reg_bufreset=8'b0; wire stb_bufreset=((d_addr==20'h50003)& d_write); always @(posedge dsp_clk) if(stb_bufreset) reg_bufreset<=d_wdata[7:0]; assign bufreset=reg_bufreset;
reg [0:0] reg_digiloopback=8'b0; wire stb_digiloopback=((d_addr==20'h50004)& d_write); always @(posedge dsp_clk) if(stb_digiloopback) reg_digiloopback<=d_wdata[7:0]; assign digiloopback=reg_digiloopback;
reg [5:0] reg_mon_navr=6'b0; wire stb_mon_navr=((d_addr==20'h50006)&d_write); always @(posedge dsp_clk) if(stb_mon_navr) reg_mon_navr<=d_wdata[5:0]; assign mon_navr=reg_mon_navr;
reg [31:0] reg_mon_dt=32'b0; wire stb_mon_dt=((d_addr==20'h50007)&d_write); always @(posedge dsp_clk) if(stb_mon_dt) reg_mon_dt<=d_wdata[31:0]; assign mon_dt=reg_mon_dt;
reg [1:0] reg_mon_slice=2'b0; wire stb_mon_slice=((d_addr==20'h50008)&d_write); always @(posedge dsp_clk) if(stb_mon_slice) reg_mon_slice<=d_wdata[1:0]; assign mon_slice=reg_mon_slice;
reg [4:0] reg_mon_sel0=5'b0; wire stb_mon_sel0=((d_addr==20'h50009)&d_write); always @(posedge dsp_clk) if(stb_mon_sel0) reg_mon_sel0<=d_wdata[4:0]; assign mon_sel0=reg_mon_sel0;
reg [4:0] reg_mon_sel1=5'b0; wire stb_mon_sel1=((d_addr==20'h5000a)&d_write); always @(posedge dsp_clk) if(stb_mon_sel1) reg_mon_sel1<=d_wdata[4:0]; assign mon_sel1=reg_mon_sel1;
reg [0:0] reg_panzoom_reset=1'b0; wire stb_panzoom_reset=((d_addr==20'h5000b)&d_write); always @(posedge dsp_clk) if(stb_panzoom_reset) reg_panzoom_reset<=d_wdata[0:0]; assign panzoom_reset=reg_panzoom_reset;
reg [0:0] reg_test=1'b0; wire stb_test=((d_addr==20'h5000c)&d_write); always @(posedge dsp_clk) if(stb_test) reg_test<=d_wdata[0:0]; assign test=reg_test;
reg [2:0] reg_opsel=3'b0; wire stb_opsel=((d_addr==20'h5000f)&d_write); always @(posedge dsp_clk) if(stb_opsel) reg_opsel<=d_wdata[2:0]; assign opsel=reg_opsel;
reg [15:0] reg_dac0_dc=16'b0; wire stb_dac0_dc=((d_addr==20'h50020)&d_write); always @(posedge dsp_clk) if(stb_dac0_dc) reg_dac0_dc<=d_wdata[15:0]; assign dac0_dc=reg_dac0_dc;
reg [15:0] reg_dac1_dc=16'b0; wire stb_dac1_dc=((d_addr==20'h50021)&d_write); always @(posedge dsp_clk) if(stb_dac1_dc) reg_dac1_dc<=d_wdata[15:0]; assign dac1_dc=reg_dac1_dc;
reg [15:0] reg_dac2_dc=16'b0; wire stb_dac2_dc=((d_addr==20'h50022)&d_write); always @(posedge dsp_clk) if(stb_dac2_dc) reg_dac2_dc<=d_wdata[15:0]; assign dac2_dc=reg_dac2_dc;
reg [15:0] reg_dac3_dc=16'b0; wire stb_dac3_dc=((d_addr==20'h50023)&d_write); always @(posedge dsp_clk) if(stb_dac3_dc) reg_dac3_dc<=d_wdata[15:0]; assign dac3_dc=reg_dac3_dc;
reg [15:0] reg_dac4_dc=16'b0; wire stb_dac4_dc=((d_addr==20'h50024)&d_write); always @(posedge dsp_clk) if(stb_dac4_dc) reg_dac4_dc<=d_wdata[15:0]; assign dac4_dc=reg_dac4_dc;
reg [15:0] reg_dac5_dc=16'b0; wire stb_dac5_dc=((d_addr==20'h50025)&d_write); always @(posedge dsp_clk) if(stb_dac5_dc) reg_dac5_dc<=d_wdata[15:0]; assign dac5_dc=reg_dac5_dc;
reg [15:0] reg_dac6_dc=16'b0; wire stb_dac6_dc=((d_addr==20'h50026)&d_write); always @(posedge dsp_clk) if(stb_dac6_dc) reg_dac6_dc<=d_wdata[15:0]; assign dac6_dc=reg_dac6_dc;
reg [15:0] reg_dac7_dc=16'b0; wire stb_dac7_dc=((d_addr==20'h50027)&d_write); always @(posedge dsp_clk) if(stb_dac7_dc) reg_dac7_dc<=d_wdata[15:0]; assign dac7_dc=reg_dac7_dc;
reg [31:0] reg_xoffset=32'b0; wire stb_xoffset=((d_addr==20'h50028)&d_write); always @(posedge dsp_clk) if(stb_xoffset) reg_xoffset<=d_wdata[31:0]; assign xoffset=reg_xoffset;
reg [31:0] reg_yoffset=32'b0; wire stb_yoffset=((d_addr==20'h50029)&d_write); always @(posedge dsp_clk) if(stb_yoffset) reg_yoffset<=d_wdata[31:0]; assign yoffset=reg_yoffset;
reg [17:0] reg_iqrot=18'b0; wire stb_iqrot=((d_addr==20'h5002a)&d_write); always @(posedge dsp_clk) if(stb_iqrot) reg_iqrot<=d_wdata[17:0]; assign iqrot=reg_iqrot;
wire [qbits*2*tslice*dw-1:0] dacout_d;
wire [16*8-1:0] dac_dc={dac7_dc,dac6_dc,dac5_dc,dac4_dc,dac3_dc,dac2_dc,dac1_dc,dac0_dc};
genvar idac;
genvar islice;
generate
for (idac=0; idac<8; idac=idac+1) begin: gen_dac
	for (islice=0; islice<4; islice=islice+1) begin: gen_slice
		wire signed [15:0] dacout_16=dacout[(idac)*64+(islice+1)*16-1:(idac*64)+islice*16];
		wire signed [15:0] dacdc_16 = dac_dc[(idac+1)*16-1:idac*16];
		reg signed [15:0] dacout_d16=0;
		always @(posedge dsp_clk) begin
			dacout_d16 <= dacout_16+dacdc_16;
		end
		assign dacout_d[(idac)*64+(islice+1)*16-1:(idac*64)+islice*16] = dacout_d16;
	end
end
endgenerate
localparam NMEAS=4;
wire [NMEAS-1:0] meas_wstrobe;
//assign meas_wstrobe[0] = d_write & (d_addr[19:12]==8'b01000001);  //  0x41000
//assign meas_wstrobe[1] = d_write & (d_addr[19:12]==8'b01000010);  //  0x42000
//assign meas_wstrobe[2] = d_write & (d_addr[19:12]==8'b01000011);  //  0x43000
//assign meas_wstrobe[3] = d_write & (d_addr[19:12]==8'b01000100);  //  0x44000
assign meas_wstrobe[0] = d_write & (d_addr[19:12]==8'hc0);  //  0xc0000
assign meas_wstrobe[1] = d_write & (d_addr[19:12]==8'hc4);  //  0xc4000
assign meas_wstrobe[2] = d_write & (d_addr[19:12]==8'hc8);  //  0xc8000
assign meas_wstrobe[3] = d_write & (d_addr[19:12]==8'hcc);  //  0xcc000
(* mark_debug = DEBUG *) wire [NMEAS-1:0] meas_cstrobe ;
assign meas_cstrobe[0]= cstrobe & (cmda==8'h8);
assign meas_cstrobe[1]= cstrobe & (cmda==8'h9);
assign meas_cstrobe[2]= cstrobe & (cmda==8'ha);
assign meas_cstrobe[3]= cstrobe & (cmda==8'hb);
//wire [16*tslice-1:0] xmeasin=adc0_out;
//wire [16*tslice-1:0] ymeasin=adc1_out;
wire [16*tslice-1:0] xmeasin [NMEAS-1:0];
wire [16*tslice-1:0] ymeasin [NMEAS-1:0];
assign xmeasin[0]=digiloopback ? dac0_in : adc0_out;
assign ymeasin[0]=digiloopback ? dac1_in : adc1_out;
//reg [16*tslice-1:0] xmeasin_d=0;
//reg [16*tslice-1:0] ymeasin_d=0;
//always @(posedge dsp_clk) begin
//	xmeasin_d <= xmeasin[0];
//	ymeasin_d <= ymeasin[0];
//end
reg [16*tslice-1:0] xmeasin_d1=0, xmeasin_d2=0;
reg [16*tslice-1:0] ymeasin_d1=0, ymeasin_d2=0;
always @(posedge dsp_clk) begin
	xmeasin_d1 <= xmeasin[0];
	xmeasin_d2 <= xmeasin_d1;
	ymeasin_d1 <= ymeasin[0];
	ymeasin_d2 <= ymeasin_d1;
end
//assign xmeasin[1]=digiloopback ? dac2_in : adc2_out;
//assign ymeasin[1]=digiloopback ? dac3_in : adc3_out;
//assign xmeasin[2]=digiloopback ? dac4_in : adc4_out;
//assign ymeasin[2]=digiloopback ? dac5_in : adc5_out;

wire [dw-1:0] adc0_min, adc1_min, adc2_min, adc3_min, adc4_min, adc5_min;
wire [dw-1:0] adc0_max, adc1_max, adc2_max, adc3_max, adc4_max, adc5_max;
minmax2 #(.dw(dw),.n(tslice)) adc0_minmax(.clk(dsp_clk), .xin(adc0_out), .reset(meas_cstrobe[0]), .xmin(adc0_min), .xmax(adc0_max));
minmax2 #(.dw(dw),.n(tslice)) adc1_minmax(.clk(dsp_clk), .xin(adc1_out), .reset(meas_cstrobe[0]), .xmin(adc1_min), .xmax(adc1_max));
//minmax2 #(.dw(dw),.n(tslice)) adc2_minmax(.clk(dsp_clk), .xin(adc2_out), .reset(meas_cstrobe[1]), .xmin(adc2_min), .xmax(adc2_max));
//minmax2 #(.dw(dw),.n(tslice)) adc3_minmax(.clk(dsp_clk), .xin(adc3_out), .reset(meas_cstrobe[1]), .xmin(adc3_min), .xmax(adc3_max));
//minmax2 #(.dw(dw),.n(tslice)) adc4_minmax(.clk(dsp_clk), .xin(adc4_out), .reset(meas_cstrobe[2]), .xmin(adc4_min), .xmax(adc4_max));
//minmax2 #(.dw(dw),.n(tslice)) adc5_minmax(.clk(dsp_clk), .xin(adc5_out), .reset(meas_cstrobe[2]), .xmin(adc5_min), .xmax(adc5_max));

(* mark_debug = DEBUG *)  wire [16+16-1:0] xacc [3:0];
(* mark_debug = DEBUG *)  wire [16+16-1:0] yacc [3:0];
(* mark_debug = DEBUG *) wire [NMEAS-1:0] meas_active_w;
wire [NMEAS-1:0] meas_done;//=meas_active_d&~meas_active;
genvar imeas;
generate
for (imeas=0; imeas<NMEAS; imeas=imeas+1) begin: gen_meas
	meas2 #(.tslice(tslice),.qbits(qbits),.aw(12),.dw(dw))
	meas2(.clk(dsp_clk)
,.active(meas_active_w[imeas])
,.collision()
,.command(command)
,.cstrobe(meas_cstrobe[imeas])
,.reset(meas_cstrobe[imeas])

,.waddr(d_addr[13:0])
,.wdata(d_wdata)
,.wstrobe(meas_wstrobe[imeas])

,.xacc(xacc[imeas])
,.yacc(yacc[imeas])
//,.xmeasin(xmeasin[imeas])
//,.ymeasin(ymeasin[imeas])
//,.xmeasin(xmeasin[0])
//,.ymeasin(ymeasin[0])
//,.xmeasin(xmeasin_d)
//,.ymeasin(ymeasin_d)
,.xmeasin(xmeasin_d2)
,.ymeasin(ymeasin_d2)
,.xbase(xbase[imeas])
,.ybase(ybase[imeas])
,.xlo(xlo_w[imeas])
,.ylo(ylo_w[imeas])
,.xoffset(xoffset)
,.yoffset(yoffset)
,.iqrot(iqrot)
,.done(meas_done[imeas])
,.resultx(resultx[imeas])
,.resulty(resulty[imeas])
);
end
endgenerate
// Help timing along?
reg [NMEAS-1:0] meas_active_d=0;
wire [NMEAS-1:0] meas_active;
reg_delay #(.dw(NMEAS),.len(5)) delay_meas_active(.clk(dsp_clk),.din(meas_active_w),.dout(meas_active),.gate(1'b1));
//wire [NMEAS-1:0] meas_done=meas_active_d&~meas_active;
assign measact0=meas_active_w[0];
assign measact1=meas_active_w[1];
assign measact2=meas_active_w[2];
assign measact3=meas_active_w[3];
(* mark_debug = DEBUG *)  reg [NMEAS-1:0] meas_done_d=0;
reg [31:0] xacc_d [3:0];
reg [31:0] yacc_d [3:0];
reg [12:0] accaddr [NMEAS-1:0];
wire [NMEAS-1:0] full;
assign full[0]=accaddr[0][12];
assign full[1]=accaddr[1][12];
assign full[2]=accaddr[2][12];
assign full[3]=accaddr[3][12];
reg [NMEAS-1:0] firstrun=0;
wire [NMEAS-1:0] meas_done_2cycle;
assign meas_done_2cycle=meas_done|meas_done_d;
wire [NMEAS-1:0] measxypush;
assign measxypush=~full&meas_done_2cycle;
initial begin
	accaddr[0] = {1'b1,12'b0};
	accaddr[1] = {1'b1,12'b0};
	accaddr[2] = {1'b1,12'b0};
	accaddr[3] = {1'b1,12'b0};
end
//(* mark_debug = DEBUG *)  reg [31:0] yacc_d=0;
//(* mark_debug = DEBUG *)  reg [31:0] xacc_d=0;
//(* mark_debug = DEBUG *) reg [12:0] accaddr=0;
//wire full=accaddr[12];
//reg firstrun=0;
//wire meas_done0_2cycle=&meas_done[0]|meas_done_d[0];
//wire measxypush=~full&meas_done0_2cycle;

reg [31:0] clkcnt=0;
always @(posedge dsp_clk) begin
	clkcnt <= clkcnt+1;
end
//wire [12:0] accaddrnext=(meas_done0_2cycle ? (accaddr+1'b1) : accaddr);

wire [31:0] accout [3:0];
genvar iacc;
generate for (iacc=0; iacc<NMEAS; iacc=iacc+1) begin: gen_accbuf
	always @(posedge dsp_clk) begin
		xlo[iacc] <= xlo_w[iacc];
		ylo[iacc] <= ylo_w[iacc];
		xacc_d[iacc] <= xacc[iacc];
		yacc_d[iacc] <= yacc[iacc];
		meas_active_d[iacc] <= meas_active[iacc];
		meas_done_d[iacc] <= meas_done[iacc];
		firstrun[iacc] <= stb_start ? 1'b1 : trig_chan[0] ? 1'b0 : firstrun[iacc];
		//firstrun[iacc] <= stb_start&(&full) ? 1'b1 : trig_chan[0] ? 1'b0 : firstrun[iacc];
		if (firstrun[iacc])//&trig_chan[0])
			accaddr[iacc] <= 0;
		else if (~full[iacc]&meas_done_2cycle[iacc])
			accaddr[iacc] <= accaddr[iacc]+1'b1;
	end
	//(* mark_debug = DEBUG *) wire [31:0] accout;
	dpram #(.dw(32),.aw(12)) accbuf(.clka(dsp_clk)
	,.addra(accaddr[iacc][11:0])
	,.dina(accaddr[iacc][0] ? yacc_d[iacc] : xacc[iacc])
	,.wena(measxypush[iacc])
	,.clkb(lb_clk)
	,.addrb(lb_addr[11:0])
	,.doutb(accout[iacc])
	);
end
endgenerate

localparam NMON=2;
localparam MEMAW=10;
wire mon_ena;
wire [MEMAW-1:0] mon_addr;
reg [dw-1:0] mon_in1=0,mon_in0=0;
wire [dw*NMON-1:0] mon_in,mon_out;
wire [dw-1:0] mon0_1slice [15:0];
wire [dw-1:0] mon1_1slice [15:0];
reg [dw*tslice-1:0] mon_4slice [31:0];
integer inittrigcnts=0;
initial begin
    for (inittrigcnts=0; inittrigcnts<32; inittrigcnts=inittrigcnts+1)
        mon_4slice[inittrigcnts] = {dw*tslice{1'b0}};
end
always @(posedge dsp_clk) begin
 mon_4slice[0] <= xmeasin_d2;
 mon_4slice[1] <= ymeasin_d2;
 mon_4slice[2] <= xlo_w[0];
 mon_4slice[3] <= ylo_w[0];
 mon_4slice[4] <= xlo_w[1];
 mon_4slice[5] <= ylo_w[1];
 mon_4slice[6] <= xlo_w[2];
 mon_4slice[7] <= ylo_w[2];
 mon_4slice[8] <= dac0_in;
 mon_4slice[9] <= dac1_in;
 mon_4slice[10] <= dac2_in;
 mon_4slice[11] <= dac3_in;
 mon_4slice[12] <= dac4_in;
 mon_4slice[13] <= dac5_in;
 mon_4slice[14] <= dac6_in;
 mon_4slice[15] <= dac7_in;
end
genvar imux;
generate for (imux=0; imux<32; imux=imux+1) begin: gen_slice_mux
	assign mon0_1slice[imux] = (mon_slice==0) ? mon_4slice[imux][15:0] : (mon_slice==1) ? mon_4slice[imux][31:16] : (mon_slice==2) ? mon_4slice[imux][47:32] : mon_4slice[imux][63:48];
	assign mon1_1slice[imux] = (mon_slice==0) ? mon_4slice[imux][15:0] : (mon_slice==1) ? mon_4slice[imux][31:16] : (mon_slice==2) ? mon_4slice[imux][47:32] : mon_4slice[imux][63:48];
end
endgenerate
reg [15:0] testcnt=0;
always @(posedge dsp_clk) begin
	if (trig_chan[0]==1)
		testcnt <= 0;
	else
		testcnt<=testcnt+1;
	case(mon_sel0)
		5'h0: mon_in0 <= mon0_1slice[0];
		5'h1: mon_in0 <= mon0_1slice[1];
		5'h2: mon_in0 <= mon0_1slice[2];
		5'h3: mon_in0 <= mon0_1slice[3];
		5'h4: mon_in0 <= mon0_1slice[4];
		5'h5: mon_in0 <= mon0_1slice[5];
		5'h6: mon_in0 <= mon0_1slice[6];
		5'h7: mon_in0 <= mon0_1slice[7];
		5'h8: mon_in0 <= mon0_1slice[8];
		5'h9: mon_in0 <= mon0_1slice[9];
		5'ha: mon_in0 <= mon0_1slice[10];
		5'hb: mon_in0 <= mon0_1slice[11];
		5'hc: mon_in0 <= mon0_1slice[12];
		5'hd: mon_in0 <= mon0_1slice[13];
		5'he: mon_in0 <= mon0_1slice[14];
		5'hf: mon_in0 <= mon0_1slice[15];
		5'h10: mon_in0 <= 16'hdead;
		5'h11: mon_in0 <= testcnt;
		default: mon_in0 <= mon0_1slice[0];
	endcase
end
always @(posedge dsp_clk) begin
	case(mon_sel1)
		5'h0: mon_in1 <= mon1_1slice[0];
		5'h1: mon_in1 <= mon1_1slice[1];
		5'h2: mon_in1 <= mon1_1slice[2];
		5'h3: mon_in1 <= mon1_1slice[3];
		5'h4: mon_in1 <= mon1_1slice[4];
		5'h5: mon_in1 <= mon1_1slice[5];
		5'h6: mon_in1 <= mon1_1slice[6];
		5'h7: mon_in1 <= mon1_1slice[7];
		5'h8: mon_in1 <= mon1_1slice[8];
		5'h9: mon_in1 <= mon1_1slice[9];
		5'ha: mon_in1 <= mon1_1slice[10];
		5'hb: mon_in1 <= mon1_1slice[11];
		5'hc: mon_in1 <= mon1_1slice[12];
		5'hd: mon_in1 <= mon1_1slice[13];
		5'he: mon_in1 <= mon1_1slice[14];
		5'hf: mon_in1 <= mon1_1slice[15];
		5'h10: mon_in1 <= 16'hbeef;
		5'h11: mon_in1 <= testcnt;
		default: mon_in1 <= mon1_1slice[2];
	endcase
end
assign mon_in={mon_in1,mon_in0};
wire stopped;
panzoom #(.DW(dw),.MAXDAVR(20),.NCHAN(NMON),.MEMAW(MEMAW)) panzoom(.clk(dsp_clk)
,.trig(trig_chan[0])
,.reset(stb_panzoom_reset)
,.din(mon_in)
,.opsel(opsel)
,.dout(mon_out)
,.navr(mon_navr)
,.dt(mon_dt)
,.gout(mon_ena)
,.addrcnt(mon_addr)
,.stopped(stopped)
);
wire [dw-1:0] buf_monout [NMON-1:0];
genvar imon;
generate for (imon=0; imon<NMON; imon=imon+1) begin: gen_monitor
	dpram #(.dw(dw),.aw(MEMAW)) monitor(.clka(dsp_clk)
	,.addra(mon_addr)
	,.dina(test ? testcnt : mon_out[(imon+1)*dw-1:imon*dw])
	,.wena(mon_ena)
	,.clkb(lb_clk)
	,.addrb(lb_addr[MEMAW-1:0])
	,.doutb(buf_monout[imon])
	);
end
endgenerate

// Drive the DAC datapath
//assign dac0_in = dacout_d[0*64 +: 64];  // qubit 0 I
assign testdata= {4{clkcnt[20:5]}};
assign dac0_in = dacout_d[0*64 +: 64];  // qubit 0 Q
assign {dac7_val,dac6_val,dac5_val,dac4_val,dac3_val,dac2_val,dac1_val,dac0_val}= valid;
assign dac1_in = dacout_d[1*64 +: 64];  // qubit 0 Q
assign dac2_in = dacout_d[2*64 +: 64];  // qubit 1 I
assign dac3_in = dacout_d[3*64 +: 64];  // qubit 1 Q
assign dac4_in = dacout_d[4*64 +: 64];  // qubit 2 I
assign dac5_in = dacout_d[5*64 +: 64];  // qubit 2 Q
assign dac6_in = dacout_d[6*64 +: 64];  // qubit 3 I
//assign dac7_in = dacout_d[7*64 +: 64];  // qubit 3 Q
assign dac7_in = dacout_d[7*64 +: 64];  // qubit 3 I
//assign dac7_in = {4{clkcnt[20:5]}};
//assign dac1_val = 1'b1;
//assign dac2_val = 1'b1;
//assign dac3_val = 1'b1;
//assign dac4_val = 1'b1;
//assign dac5_val = 1'b1;
//assign dac6_val = 1'b1;
//assign dac7_val = 1'b1;
`endif

// localbus slaves
wire [15:0] config_rom_out;
config_romx config_romx(.clk(lb_clk), .address(lb_addr[10:0]), .data(config_rom_out));

// Collect "unknown" clocks for frequency measurement
localparam N_FCNT = 7;
wire [27:0] freq_count [0:N_FCNT-1];
wire [0:N_FCNT-1] test_clks = {
    lb_clk,
    fmc_clk0,        // dclk,   250MHz
    fmc_sysref0,     // sclk,   0
    fmc_trigger0,    // trigger,0
    fmc_clk1,        // dclk,   250MHz
    fmc_sysref1,     // sclk,   0
    fmc_trigger1     // trigger,0
};

// Bank of frequency counters, better to use freq_multi_count?
genvar jx;
generate for (jx=0; jx<N_FCNT; jx=jx+1)
    begin: gen_fcnt
        freq_count freq_count_i (
            .clk        (test_clks[jx]),
            .usbclk     (lb_clk),
            .frequency  (freq_count[jx])
        );
    end
endgenerate

// Local FPGA analog input
wire [15:0] xadc_mon_out;
wire [8:0] xadc_alarm_out;
xadc_mon xadc_mon_int (
    .lb_clk         (lb_clk         ),
    .reset          (reset          ),
    .lb_addr        (lb_addr[4:0]   ),
    .lb_data_out    (xadc_mon_out   ),
    .alarm_out      (xadc_alarm_out ),
    .vp_in          (1'b0           ),
    .vn_in          (1'b0           )
);
wire [31:0] waveread;
reg [31:0] lb_data_out=0;
always @(posedge lb_clk) if (lb_read) casex(lb_addr[19:0])
    20'h00xxx: lb_data_out <= mirror_out_0;
    20'h10xxx: lb_data_out <= config_rom_out;
    20'h11xxx: lb_data_out <= xadc_mon_out;
    20'h12000: lb_data_out <= freq_count[0];
    20'h12001: lb_data_out <= freq_count[1];
    20'h12002: lb_data_out <= freq_count[2];
    20'h12003: lb_data_out <= freq_count[3];
    20'h12004: lb_data_out <= freq_count[4];
    20'h12005: lb_data_out <= freq_count[5];
    20'h12006: lb_data_out <= freq_count[6];
    20'h60xxx: lb_data_out <= adc_buf_out[0];
    20'h61xxx: lb_data_out <= adc_buf_out[1];
    20'h62xxx: lb_data_out <= adc_buf_out[2];
    20'h63xxx: lb_data_out <= adc_buf_out[3];
    20'h64xxx: lb_data_out <= adc_buf_out[4];
    20'h65xxx: lb_data_out <= adc_buf_out[5];
    20'h66xxx: lb_data_out <= adc_buf_out[6];
    20'h67xxx: lb_data_out <= adc_buf_out[7];
    20'h30xxx: lb_data_out <= dac_buf_out[0];
    20'h31xxx: lb_data_out <= dac_buf_out[1];
    20'h32xxx: lb_data_out <= dac_buf_out[2];
    20'h33xxx: lb_data_out <= dac_buf_out[3];
    20'h34xxx: lb_data_out <= dac_buf_out[4];
    20'h35xxx: lb_data_out <= dac_buf_out[5];
    20'h36xxx: lb_data_out <= dac_buf_out[6];
    20'h37xxx: lb_data_out <= dac_buf_out[7];
    20'h42xxx: lb_data_out <= accout[0];
    20'h4axxx: lb_data_out <= accout[1];
    20'h4bxxx: lb_data_out <= accout[2];
    20'h4cxxx: lb_data_out <= accout[3];
    20'h50000: lb_data_out <= valid;
    20'h50005: lb_data_out <= full;
    20'h5000d: lb_data_out <= {adc0_min,adc0_max};
    20'h5000e: lb_data_out <= {adc1_min,adc1_max};
    20'h50010: lb_data_out <= stopped;
    20'h50020: lb_data_out <= dac0_dc;
    20'h50021: lb_data_out <= dac1_dc;
    20'h50022: lb_data_out <= dac2_dc;
    20'h50023: lb_data_out <= dac3_dc;
    20'h50024: lb_data_out <= dac4_dc;
    20'h50025: lb_data_out <= dac5_dc;
    20'h50026: lb_data_out <= dac6_dc;
    20'h50027: lb_data_out <= dac7_dc;
    20'h72xxx: lb_data_out <= buf_monout[0];
    20'h73xxx: lb_data_out <= buf_monout[1];
	//{4'h7,16'hxxxx}: lb_data_out <=waveread;
    default: lb_data_out <= 32'hdeadbeaf;
endcase
/*
reg bufvalid=0;
always @(posedge dsp_clk) begin
	bufvalid <= (bufsel0 == 1'b0) ? adc1_val : (bufsel0==2'b01) ? 1'b1 : (bufsel0==2'b10) ?  measact0 : 1'b1;
end
wire wavefull;
wavebuf #(.AWIDTH(16*8*4)
,.ADEPTH(4096)
,.BWIDTH(32)) measwave (.clkA(dsp_clk)
,.reset(bufreset)
,.dataAvalid(bufvalid)
,.writeAw({adc_buf_in[7],adc_buf_in[6],adc_buf_in[5],adc_buf_in[4],adc_buf_in[3],adc_buf_in[2],adc_buf_in[1],adc_buf_in[0]})
,.clkB(lb_clk)
,.addrBr(lb_addr[15:0])
,.reB(lb_addr[19:16]==4'h7)
,.readBr(waveread)
,.full(wavefull));

*/
wire [3:0] markpin;
assign {user_sma_gpio_n,user_sma_gpio_p}=markpin[1:0];
genvar idigi;
generate for (idigi=0; idigi<4; idigi=idigi+1) begin: digigen
	wire [1:0] idigi_w=idigi;
	wire [7:0] stbdigi={6'b000011,idigi_w};
	wire digi_cstrobe= cstrobe & (cmda==stbdigi);
	digimark mark1(.clk(dsp_clk),.cstrobe(digi_cstrobe),.command(command),.mark(markpin[idigi]));
end
endgenerate

assign lb_rdata = lb_data_out;

endmodule
