module qubichw_config #(parameter DEBUG="false",parameter BAUD=9600)
(hw hw
,localbus.cfg lb
,dsp.cfg dsp
);
//assign hw.vc707.fmc_vadj_on_b_ls=1'b0;
wire mmcm_clk200;
wire mmcm_clk100;
wire mmcmlocked;
wire mmcmclkfbout,mmcmclkfbin;
wire mmcme2_base_sysclk_reset;
assign mmcme2_base_sysclk_reset=0;
MMCME2_BASE #(.BANDWIDTH("OPTIMIZED")
,.CLKIN1_PERIOD(5.0)   // 200MHz
,.CLKFBOUT_MULT_F(6)     //
,.DIVCLK_DIVIDE(1)         //
,.CLKFBOUT_PHASE(0.0)
,.CLKOUT0_DIVIDE_F(12)     //  100M
,.CLKOUT0_DUTY_CYCLE(0.5)
,.CLKOUT0_PHASE(0.0)
,.CLKOUT1_DIVIDE(6)     // 200M
,.CLKOUT1_DUTY_CYCLE(0.5)
,.CLKOUT1_PHASE(0.0)
,.REF_JITTER1(0.0)
,.STARTUP_WAIT("FALSE")
) mmcme2_base_sysclk (.CLKIN1(hw.vc707.sysclk)
,.CLKOUT0(mmcm_clk100)
,.CLKOUT1(mmcm_clk200)
,.LOCKED(mmcmlocked)
,.CLKFBOUT(mmcmclkfbout)
,.CLKFBIN(mmcmclkfbin)
,.PWRDWN(1'b0)
,.RST(mmcme2_base_sysclk_reset)
);
BUFG mmcmclkfb(.I(mmcmclkfbout),.O(mmcmclkfbin));
wire clk200;
wire clk100;
wire uartclk=clk100;
BUFG bufgclk100(.I(mmcm_clk100),.O(clk100));
BUFG bufgclk200(.I(mmcm_clk200),.O(clk200));


reg [31:0] clk200cnt=0;
always @(posedge clk200) begin
	clk200cnt<=clk200cnt+1;
end
reg txreg=0;
reg rxreg=0;
always @(posedge clk200) begin
	txreg<=hw.vc707.usb2uart.tx;
	rxreg<=hw.vc707.usb2uart.rx;
end
wire uarttx;
wire uartrx=hw.vc707.usb2uart.rx;
assign hw.vc707.usb2uart.tx=lb.uartmode==0 ? hw.vc707.usb2uart.rx : lb.uartmode==1 ? uarttx : 1'b1;  //serial port loopback test
assign {hw.vc707.gpio_led_7,hw.vc707.gpio_led_6,hw.vc707.gpio_led_5,hw.vc707.gpio_led_4,hw.vc707.gpio_led_3,hw.vc707.gpio_led_2,hw.vc707.gpio_led_1,hw.vc707.gpio_led_0}=clk200cnt[27:20];
// send serial port to gps
wire [7:0] rxdata;
//wire [7:0]  txdata=clk200cnt[25:18];//rxdata+1;
//wire [7:0]  txdata=rxdata+1;
wire [7:0]  txdata;
//wire txstart=&clk200cnt[15:0];//rxvalid;
//wire txstart=rxvalid;
wire txstart;
wire rxvalid;
wire [1:0] txstate;
wire [1:0] txnext;
wire txready;
wire txbaudclk;
wire txstop;
wire startfromtx;
wire [5:0] txtxcnt;
wire rxbaudclk;
wire [1:0] rxstate;
wire [1:0] rxnext;
wire [5:0] rxrxcnt;
wire [15:0] rxbaudcnt;
wire [15:0] txbaudcnt;
wire txline_r;
wire rxline_r;
uart #(.DWIDTH(8),.NSTOP(1),.UARTCLK(100000000),.BAUD(BAUD))
uart (.clk(uartclk)
,.TX(uarttx)
,.RX(uartrx)
,.rst(1'b0)
,.txdata(txdata)
,.txstart(txstart)
,.rxdata(rxdata)
,.rxvalid(rxvalid)

,.txstate(txstate)
,.txnext(txnext)
,.txready(txready)
,.txbaudclk(txbaudclk)
,.txstop(txstop)
,.txtxcnt(txtxcnt)
,.startfromtx(startfromtx)
,.rxbaudclk(rxbaudclk)
,.rxstate(rxstate)
,.rxnext(rxnext)
,.rxrxcnt(rxrxcnt)
,.rxbaudcnt(rxbaudcnt)
,.txbaudcnt(txbaudcnt)
,.txline_r(txline_r)
,.rxline_r(rxline_r)
);
reg [31:0] uartcnt=0;
always @(posedge uartclk) begin
	uartcnt<=uartcnt+1;
end
uartlb #(.UARTDWIDTH(8),.LBWIDTH(64)
)uartlb64 (.clk(uartclk)
,.reset(1'b0)
,.fromuartdata(rxdata)
,.fromuartvalid(rxvalid)
,.touartdata(txdata)
,.touartready(txready)
,.touartstart(txstart)
,.lbrcmd(lb.lbrcmd) //64'hdeadbeeffacefeed)
,.lbrready(lb.lbrready) //1'b1)
,.lbwcmd(lb.lbwcmd)
,.lbwvalid(lb.lbwvalid)
);

wire idelayctrl_rdy;
IDELAYCTRL idelayctrl(.RST(1'b0),.RDY(idelayctrl_rdy),.REFCLK(clk200));

assign lb.lbclk=uartclk;
assign dsp.clk=clk200;
//assign dsp.pps=hw.vc707.pps;
wire [63:0] lbrcmd=lb.lbrcmd;
wire [63:0] lbwcmd=lb.lbwcmd;
wire lbrready=lb.lbrready;
wire lbwvalid=lb.lbwvalid;
assign lb.fmcprsnt={hw.fmc2.prsnt,hw.fmc1.prsnt};
assign lb.fmcpgm2c={hw.fmc2.pg_m2c,hw.fmc1.pg_m2c};
assign {hw.fmc2.dac_txen_vadj,hw.fmc1.dac_txen_vadj}=lb.fmcdacen;
/*reg [3*7-1:0] daddrsr={7'h0,7'h14,7'h1c};
localparam RESETCNT=200;
wire reset_in=clk200cnt==RESETCNT;
reg den_in_0=0;//&clk200cnt[9:0];
reg reset_d=0;
wire den_in=den_in_0;//&clk200cnt[9:0];
//wire den_in=&clk200cnt[9:0];
wire dwe_in=1'b0;
wire [6:0] daddr_in;//=7'h0;
wire [15:0] di_in=0;
wire drdy_out;
reg firstreset=1'b1;
reg [31:0] xadcupdatecnt=0;
wire xadcupdatestb=~|xadcupdatecnt;
reg xadcupdate_r=0;
reg xadcupdate_d=0;
wire xadcupdate=~xadcupdate_r&xadcupdate_d;
always @(posedge clk200) begin
	reset_d<=reset_in;
	if (clk200cnt==RESETCNT) begin
		firstreset<=0;
	end
	xadcupdatecnt<=(~|xadcupdatecnt | firstreset) ? (lb.xadcupdate-1) : (xadcupdatecnt-1);
	if (xadcupdatestb) begin
		xadcupdate_r<=1'b1;
	end
	else begin
		if (~drdy_out) begin
			xadcupdate_r<=1'b0;
		end
	end
	xadcupdate_d<=xadcupdate_r;
	if (xadcupdate) begin
		daddrsr<={daddrsr[13:0],daddrsr[20:14]};
	end
	den_in_0<=xadcupdate;
end
assign daddr_in=daddrsr[6:0];
wire [15:0] do_out;
wire [4:0] channel_out;
wire eoc_out;
wire alarm_out;
wire eos_out;
wire busy_out;
xadc_qubic xadc(
  .di_in(di_in),              // input wire [15 : 0] di_in
  .daddr_in(daddr_in),        // input wire [6 : 0] daddr_in
  .den_in(den_in),            // input wire den_in
  .dwe_in(dwe_in),            // input wire dwe_in
  .drdy_out(drdy_out),        // output wire drdy_out
  .do_out(do_out),            // output wire [15 : 0] do_out
  .dclk_in(clk200),          // input wire dclk_in
  .reset_in(reset_in),        // input wire reset_in
  .vp_in(hw.vc707.VP_0),              // input wire vp_in
  .vn_in(hw.vc707.VN_0),              // input wire vn_in
  .channel_out(channel_out),  // output wire [4 : 0] channel_out
  .eoc_out(eoc_out),          // output wire eoc_out
  .alarm_out(alarm_out),      // output wire alarm_out
  .eos_out(eos_out),          // output wire eos_out
  .busy_out(busy_out)        // output wire busy_out
);
reg [15:0] xadctemp=0;
reg [15:0] xadcaux4=0;
reg [15:0] xadcaux12=0;
always @(posedge clk200) begin
	if (drdy_out) begin
		case (daddr_in)
			7'h0: xadctemp<=do_out;
			7'h14: xadcaux4<=do_out;
			7'h1c: xadcaux12<=do_out;
		endcase
	end
end

assign lb.xadctemp=xadctemp;
assign lb.xadcaux4=xadcaux4;
assign lb.xadcaux12=xadcaux12;
*/
reg  start=0;//lb.stb_i2cstart;
wire i2crxvalid_w;
reg i2crxvalid_r=0;
reg [31:0] i2cdatarx_r=0;
wire [1:0] dbclkstate;
wire [2:0] dbstate;
wire [2:0] dbnext;
wire [31:0] i2cdatarx_w;
reg [31:0] i2cdatarx_wd;
wire [15:0] dbdatacnt;
wire [15:0] dbackcnt;
wire dbtick1;
wire dbtick0;
wire  sda;
wire  scl;
wire dbidledone;
wire dbstartdone;
wire dbdatadone;
wire dbackdone;
wire dbstopdone;
wire sdatx;
wire sdarx;
wire sdaasrx;
wire [31:0] dbclkcnt;
IOBUF sdaiobuf (.IO(hw.vc707.iic.sda),.I(sdatx),.O(sdarx),.T(sdaasrx));
i2cmaster #(.MAXNACK(4),.CLK4RATIO(2500))
i2cmaster (.clk(clk100)
,.nack(lb.i2cstart[3:0])
,.stopbit(lb.i2cstart[4])
,.sdatx(sdatx)
,.sdarx(sdarx)
,.sdaasrx(sdaasrx)
,.scl(hw.vc707.iic.scl)
,.clk4ratio(lb.clk4radio)
//,.SDA(sda)
//,.SCL(scl)
,.start(start)
,.datatx(lb.i2cdatatx)
,.datarx(i2cdatarx_w)
,.rxvalid(i2crxvalid_w)
,.rst(1'b0)
,.dbclkstate(dbclkstate)
,.dbstate(dbstate)
,.dbnext(dbnext)
,.dbdatacnt(dbdatacnt)
,.dbackcnt(dbackcnt)
,.dbtick1(dbtick1)
,.dbtick0(dbtick0)
,.dbidledone(dbidledone)
,.dbstartdone(dbstartdone)
,.dbdatadone(dbdatadone)
,.dbackdone(dbackdone)
,.dbstopdone(dbstopdone)
,.dbclkcnt(dbclkcnt)
);
assign sda=hw.vc707.iic.sda;
assign scl=hw.vc707.iic.scl;
wire r1w0=lb.i2cdatatx[24];
always @(posedge clk100) begin
	start<=lb.stb_i2cstart;
	if (start & r1w0)
		i2crxvalid_r<= 1'b0;
	else if (i2crxvalid_w)
		i2crxvalid_r<= 1'b1;
	i2cdatarx_wd<=i2cdatarx_w;
	if (i2crxvalid_r) begin
		i2cdatarx_r<=i2cdatarx_wd;
	end
	else
		i2cdatarx_r<=0;
end
assign lb.i2crxvalid=i2crxvalid_r;
assign lb.i2cdatarx=i2cdatarx_r;
assign hw.vc707.iic.mux_reset_b=lb.i2cmux_reset_b;
/*assign hw.fmc1.cpld_ctrl[0]=lb.fmccpldctrl[1:0]==0? 1'b0 : lb.fmccpldctrl[1:0]==1 ? 1'b1 : 1'bz;
assign hw.fmc1.cpld_ctrl[1]=lb.fmccpldctrl[3:2]==0? 1'b0 : lb.fmccpldctrl[3:2]==1 ? 1'b1 : 1'bz;
assign hw.fmc1.cpld_ctrl[2]=lb.fmccpldctrl[5:4]==0? 1'b0 : lb.fmccpldctrl[5:4]==1 ? 1'b1 : 1'bz;
assign hw.fmc1.cpld_ctrl[3]=lb.fmccpldctrl[7:6]==0? 1'b0 : lb.fmccpldctrl[7:6]==1 ? 1'b1 : 1'bz;
assign hw.fmc2.cpld_ctrl[0]=lb.fmccpldctrl[9:8]==0? 1'b0 : lb.fmccpldctrl[9:8]==1 ? 1'b1 : 1'bz;
assign hw.fmc2.cpld_ctrl[1]=lb.fmccpldctrl[11:10]==0? 1'b0 : lb.fmccpldctrl[1:0]==1 ? 1'b1 : 1'bz;
assign hw.fmc2.cpld_ctrl[2]=lb.fmccpldctrl[13:12]==0? 1'b0 : lb.fmccpldctrl[3:2]==1 ? 1'b1 : 1'bz;
assign hw.fmc2.cpld_ctrl[3]=lb.fmccpldctrl[15:14]==0? 1'b0 : lb.fmccpldctrl[5:4]==1 ? 1'b1 : 1'bz;
*/
generate
if (DEBUG=="true") begin
	ila_auto ila_auto(.clk(clk200)
	,.probe0(rxdata)      // ILAWIDTH 8
	,.probe1(txdata)      // ILAWIDTH 8
	,.probe2(lbrcmd)      // ILAWIDTH 64
	,.probe3(lbrready)      // ILAWIDTH 1
	,.probe4(lbwcmd)      // ILAWIDTH 64
	,.probe5(lbwvalid)      // ILAWIDTH 1
	,.probe6(uartmode)    // ILAWIDTH 2
	,.probe7(start)   // ILAWIDTH 1
	,.probe8(lb.i2cdatatx)   // ILAWIDTH 32
	,.probe9(lb.i2cdatarx)   // ILAWIDTH 32
	,.probe10(i2crxvalid_r)   // ILAWIDTH 1
	,.probe11(dbclkstate) //ILAWIDTH 2
	,.probe12(dbstate) //ILAWIDTH 3
	,.probe13(dbnext) //ILAWIDTH 3
	,.probe14(sdatx) //ILAWIDTH 1
	,.probe15(scl) //ILAWIDTH 1
	,.probe16(dbdatacnt) //ILAWIDTH 16
	,.probe17(dbackcnt) //ILAWIDTH 16
	,.probe18(dbtick1) //ILAWIDTH 1
	,.probe19(dbtick0) //ILAWIDTH 1
	,.probe20(uartcnt) //ILAWIDTH 32
	,.probe21(dbidledone) //ILAWIDTH 1
	,.probe22(dbdatadone) //ILAWIDTH 1
	,.probe23(dbackdone) //ILAWIDTH 1
	,.probe24(dbstopdone) //ILAWIDTH 1
	,.probe25(dbstartdone) //ILAWIDTH 1
	,.probe26(sdarx) //ILAWIDTH 1
	,.probe27(sdaasrx) //ILAWIDTH 1
	,.probe28(dbclkcnt) //ILAWIDTH 32
	,.probe29(i2cdatarx_w)   // ILAWIDTH 32
	,.probe30(i2crxvalid_w)   // ILAWIDTH 1
	,.probe31(hw.fmc1.cpld_ctrl) // ILAWIDTH 4
	,.probe32(hw.fmc2.cpld_ctrl) // ILAWIDTH 4
	);
end
endgenerate
endmodule
