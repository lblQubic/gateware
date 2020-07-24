module qubichw_config #(parameter DEBUG="false",parameter BAUD=9600)
(hw hw
,localbus.cfg lb
,dsp.cfg dsp
);
//assign hw.vc707.fmc_vadj_on_b_ls=1'b0;
wire mmcm_clk200;
wire mmcm_clk100;
wire mmcm_clk125;
wire mmcmlocked;
wire mmcmclkfbout,mmcmclkfbin;
wire mmcme2_base_sysclk_reset;
assign mmcme2_base_sysclk_reset=0;
MMCME2_BASE #(.BANDWIDTH("OPTIMIZED")
,.CLKIN1_PERIOD(5.0)  // 200MHz
,.CLKFBOUT_MULT_F(5)   //
,.DIVCLK_DIVIDE(1)     //
,.CLKFBOUT_PHASE(0.0)
,.CLKOUT0_DIVIDE_F(10)   // 100M
,.CLKOUT0_DUTY_CYCLE(0.5)
,.CLKOUT0_PHASE(0.0)
,.CLKOUT1_DIVIDE(5)   // 200M
,.CLKOUT1_DUTY_CYCLE(0.5)
,.CLKOUT1_PHASE(0.0)
,.REF_JITTER1(0.0)
,.CLKOUT2_DIVIDE(8)   // 125M 
,.CLKOUT2_DUTY_CYCLE(0.5)
,.CLKOUT2_PHASE(0.0)
//,.REF_JITTER2(0.0)
,.STARTUP_WAIT("FALSE")
) mmcme2_base_sysclk (.CLKIN1(hw.vc707.sysclk)
,.CLKOUT0(mmcm_clk100)
,.CLKOUT1(mmcm_clk200)
,.CLKOUT2(mmcm_clk125)
,.LOCKED(mmcmlocked)
,.CLKFBOUT(mmcmclkfbout)
,.CLKFBIN(mmcmclkfbin)
,.PWRDWN(1'b0)
,.RST(mmcme2_base_sysclk_reset)
);
BUFG mmcmclkfb(.I(mmcmclkfbout),.O(mmcmclkfbin));
wire clk200;
wire clk100;
wire clk125;
wire uartclk=clk100;
BUFG bufgclk100(.I(mmcm_clk100),.O(clk100));
BUFG bufgclk125(.I(mmcm_clk125),.O(clk125));
BUFG bufgclk200(.I(mmcm_clk200),.O(clk200));


reg poweronreset_r=0;
reg poweronreset_d=0;
wire poweronreset=poweronreset_r&~poweronreset_d;
reg [31:0] clk200cnt=0;
always @(posedge clk200) begin
	clk200cnt<=clk200cnt+1;
	if (clk200cnt==100 & ~poweronreset_r)
		poweronreset_r<=1'b1;
	poweronreset_d<=poweronreset_r;
end
reg txreg=0;
reg rxreg=0;
always @(posedge clk200) begin
	txreg<=hw.vc707.usb2uart.tx;
	rxreg<=hw.vc707.usb2uart.rx;
end
wire uarttx;
wire uartrx=hw.vc707.usb2uart.rx;
assign hw.vc707.usb2uart.tx=lb.uartmode==0 ? hw.vc707.usb2uart.rx : lb.uartmode==1 ? uarttx : 1'b1; //serial port loopback test
assign {hw.vc707.gpio_led_7,hw.vc707.gpio_led_6,hw.vc707.gpio_led_5,hw.vc707.gpio_led_4,hw.vc707.gpio_led_3,hw.vc707.gpio_led_2,hw.vc707.gpio_led_1,hw.vc707.gpio_led_0}=clk200cnt[27:20];
// send serial port to gps
wire [7:0] rxdata;
//wire [7:0] txdata=clk200cnt[25:18];//rxdata+1;
//wire [7:0] txdata=rxdata+1;
wire [7:0] txdata;
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
 .di_in(di_in),       // input wire [15 : 0] di_in
 .daddr_in(daddr_in),    // input wire [6 : 0] daddr_in
 .den_in(den_in),      // input wire den_in
 .dwe_in(dwe_in),      // input wire dwe_in
 .drdy_out(drdy_out),    // output wire drdy_out
 .do_out(do_out),      // output wire [15 : 0] do_out
 .dclk_in(clk200),     // input wire dclk_in
 .reset_in(reset_in),    // input wire reset_in
 .vp_in(hw.vc707.VP_0),       // input wire vp_in
 .vn_in(hw.vc707.VN_0),       // input wire vn_in
 .channel_out(channel_out), // output wire [4 : 0] channel_out
 .eoc_out(eoc_out),     // output wire eoc_out
 .alarm_out(alarm_out),   // output wire alarm_out
 .eos_out(eos_out),     // output wire eos_out
 .busy_out(busy_out)    // output wire busy_out
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
reg start=0;//lb.stb_i2cstart;
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
wire sda;
wire scl;
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

wire sgmiiclk;
IBUFDS_GTE2 mgtrefclk0_113_sgmii(.I(hw.vc707.sgmiiclk_q0_p),.IB(hw.vc707.sgmiiclk_q0_n),.O(sgmiiclk),.ODIV2(),.CEB(1'b0));
wire sma_mgt_refclk;
IBUFDS_GTE2 mO1_113_sma(.I(hw.vc707.sma_mgt_refclk_p),.IB(hw.vc707.sma_mgt_refclk_n),.O(sma_mgt_refclk),.ODIV2(),.CEB(1'b0));
wire si5324_out_c;
IBUFDS_GTE2 mO0_114_pcie(.I(hw.vc707.si5324_out_c_p),.IB(hw.vc707.si5324_out_c_n),.O(si5324_out_c),.ODIV2(),.CEB(1'b0));
wire pcie_clk_qo;
IBUFDS_GTE2 mgtrefclk1_115_pcie(.I(hw.vc707.pcie.clk_qo_p),.IB(hw.vc707.pcie.clk_qo_n),.O(pcie_clk_qo),.ODIV2());
wire sfpreconnected;
wire hwreset=lb.stb_hwreset || poweronreset || sfpreconnected;
wire pllreset;
wire qplllock_113;
wire qplloutclk_113;
wire qplloutrefclk_113;
wire qpllpd_113=1'b0;
wire qpllrefclklost_113;
wire qpllreset_113=pllreset;
wire [2:0] qpllrefclksel_113=3'h1;
gticc_common gticc_common_113(.QPLLLOCKDETCLK(clk200)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.QPLLREFCLKSEL(qpllrefclksel_113)
,.QPLLLOCK(qplllock_113)
,.QPLLOUTCLK(qplloutclk_113)
,.QPLLOUTREFCLK(qplloutrefclk_113)
,.QPLLPD(qpllpd_113)
,.QPLLREFCLKLOST(qpllrefclklost_113)
,.QPLLRESET(qpllreset_113)
);
wire rdyfortxrxreset;
wire pllresetdonestrobe;
//reg pllresetdonestrobe_d=0;
reg sfplos=0;
reg sfplos_d=0;
assign sfpreconnected=~sfplos&sfplos_d;
always @(posedge clk200) begin
	//pllresetdonestrobe_d<=pllresetdonestrobe;
	sfplos<=hw.vc707.sfp.los;
	sfplos_d<=sfplos;
end
gtreset #(.RESETLENGTH(10))
gtresetcommon(.readycriteria(mmcmlocked)
,.stableclk(clk200)
,.resetin(hwreset)
,.resetout(pllreset)
,.done()
,.donecriteria(rdyfortxrxreset)
,.donestrobe(pllresetdonestrobe)
);

wire txrxreset_0;
wire txrxreset_1;
wire txrxreset=txrxreset_0|txrxreset_1;
wire txrxresetdone;
wire txrxresetdonestrobe;
wire txrxresetdonestrobe1;
gtreset #(.RESETLENGTH(10))
gtresetchannel0(.readycriteria(rdyfortxrxreset)
,.resetout(txrxreset_0)
,.resetin(pllresetdonestrobe)//||pllresetdonestrobe_d)
,.done()
,.donecriteria(txrxresetdone)
,.donestrobe(txrxresetdonestrobe)
,.stableclk(clk200));
reg [0:0] resetcnt=0;
gtreset #(.RESETLENGTH(10))
gtresetchannel1(.readycriteria(rdyfortxrxreset&resetcnt)
,.resetout(txrxreset_1)
,.resetin(txrxresetdonestrobe)
,.done()
,.donecriteria(txrxresetdone)
,.donestrobe(txrxresetdonestrobe1)
,.stableclk(clk200));
reg resetalign=0;
reg [0:0] resetcnt_d=0;
reg reset_d=0;
wire txrxresetdone_1;
always @(posedge clk200) begin
	reset_d<=hwreset;
	resetcnt <= hwreset&~reset_d ? 0 : txrxresetdone_1 ? 1'b1 : resetcnt;
	resetcnt_d<=resetcnt;
end
wire cpllpd_sfp=1'b0;
wire [2:0] cpllrefclksel_sfp=3'b1;
wire cpllreset_sfp=pllreset;
wire gtrxreset_sfp=txrxreset;
wire gttxreset_sfp=txrxreset;
wire rxpmareset_sfp=txrxreset;
wire rxresetdone_sfp;
wire txresetdone_sfp;
wire rxusrclk_sfp;
wire rxusrclk2_sfp;
wire txusrclk_sfp;
wire txusrclk2_sfp;
wire cpllfbclklost_sfp;
wire cplllock_sfp;
wire cpllrefclklost_sfp;
wire rxbyteisaligned_sfp;
wire rxbyterealign_sfp;
wire [3:0] rxchariscomma_sfp;
wire [3:0] rxcharisk_sfp;
wire rxcommadet_sfp;
wire [31:0] rxdata_sfp;
assign lb.sfptestrx=rxdata_sfp;
wire rxuserrdy_sfp=1'b1;
wire [3:0] txcharisk_sfp=4'b0;
wire [31:0] txdata_sfp=lb.sfptesttx;//32'habcdbeef;
wire txuserrdy_sfp=1'b1;
assign rdyfortxrxreset=&{mmcmlocked,qplllock_113,~qpllrefclklost_113,cplllock_sfp,~cpllfbclklost_sfp,~cpllrefclklost_sfp};
assign txrxresetdone=&{txresetdone_sfp,rxresetdone_sfp,rdyfortxrxreset,resetcnt_d};
gticc_gt gticc_gt_sfp(.CPLLLOCKDETCLK(clk200)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(hw.vc707.sfp.rx_n),.GTXRXP(hw.vc707.sfp.rx_p),.GTXTXN(hw.vc707.sfp.tx_n),.GTXTXP(hw.vc707.sfp.tx_p)
,.QPLLCLK(qplloutclk_113),.QPLLREFCLK(qplloutrefclk_113)
,.CPLLPD(cpllpd_sfp)
,.CPLLREFCLKSEL(cpllrefclksel_sfp) //asdfasdf
,.CPLLLOCK(cplllock_sfp),.CPLLFBCLKLOST(cpllfbclklost_sfp),.CPLLREFCLKLOST(cpllrefclklost_sfp)
,.CPLLRESET(cpllreset_sfp),.GTRXRESET(gtrxreset_sfp),.GTTXRESET(gttxreset_sfp),.RXPMARESET(rxpmareset_sfp)
,.RXRESETDONE(rxresetdone_sfp),.TXRESETDONE(txresetdone_sfp)

,.RXUSRCLK(rxusrclk_sfp),.RXUSRCLK2(rxusrclk2_sfp),.TXUSRCLK(txusrclk_sfp),.TXUSRCLK2(txusrclk2_sfp)

,.RXBYTEISALIGNED(rxbyteisaligned_sfp)
,.RXBYTEREALIGN(rxbyterealign_sfp)
,.RXCHARISCOMMA(rxchariscomma_sfp)
,.RXCHARISK(rxcharisk_sfp)
,.RXCOMMADET(rxcommadet_sfp)
,.RXDATA(rxdata_sfp)
,.RXUSERRDY(rxuserrdy_sfp)
,.TXCHARISK(rxbyteisaligned_sfp||resetalign ? txcharisk_sfp : 4'h1)
,.TXDATA(rxbyteisaligned_sfp||resetalign ? txdata_sfp : 32'h000000bc)
,.TXUSERRDY(txuserrdy_sfp)
);
gtreset #(.RESETLENGTH(10))
gtresetalign(.readycriteria(txrxresetdone)
,.resetout(resetalign)
,.resetin(txrxresetdonestrobe1)
,.done()
,.donecriteria(rxbyteisaligned_sfp)
,.donestrobe()
,.stableclk(clk200));
assign hw.vc707.sfp.tx_disable=lb.sfptxdisable;
assign txrxresetdone_1=&{txresetdone_sfp,rxresetdone_sfp,rdyfortxrxreset};
`include "ilaauto.vh"
endmodule
