module qubichw_config #(parameter DEBUG="false",parameter BAUD=9600,parameter SIM=0)
(hw hw
,localbus.cfg lb
,dsp.cfg dsp
);
localparam POWERONRESET=100;
reg poweronreset_r=0;
reg poweronreset_d=0;
wire poweronreset=poweronreset_r&~poweronreset_d;
reg [31:0] poweronresetcnt=0;
always @(posedge hw.vc707.sysclk) begin
	poweronresetcnt<=poweronresetcnt+(poweronreset_r ? 1'b0 : 1'b1);
	if (poweronresetcnt==POWERONRESET & ~poweronreset_r)
		poweronreset_r<=1'b1;
	poweronreset_d<=poweronreset_r;
end
// sysclkmmcm cross wire
wire  clk100;
wire  clk125;
wire  clk200;
wire  clk250;
wire [31:0] clk100cnt;
wire [31:0] clk125cnt;
wire [31:0] clk200cnt;
wire [31:0] clk250cnt;
wire sysclkmmcm_locked;
wire sysclkmmcm_reset;
sysclkmmcm sysclkmmcm(.clk100(clk100),.clk125(clk125),.clk200(clk200),.clk250(clk250),.clk100cnt(clk100cnt),.clk125cnt(clk125cnt),.clk200cnt(clk200cnt),.clk250cnt(clk250cnt),.sysclk(hw.vc707.sysclk),.mmcm_locked(sysclkmmcm_locked),.mmcm_reset(sysclkmmcm_reset));

wire uarttx;
wire uartrx=hw.vc707.usb2uart.rx;
wire keeplbdataout;
assign hw.vc707.usb2uart.tx=lb.uartmode==0 ? hw.vc707.usb2uart.rx : lb.uartmode==1 ? uarttx : 1'b1; //serial port loopback test
assign {hw.vc707.gpio_led_7,hw.vc707.gpio_led_6,hw.vc707.gpio_led_5,hw.vc707.gpio_led_4,hw.vc707.gpio_led_3,hw.vc707.gpio_led_2,hw.vc707.gpio_led_1,hw.vc707.gpio_led_0}={keeplbdataout,clk200cnt[26:20]};
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
wire uartclk=clk100;
wire uartreset;
uart #(.DWIDTH(8),.NSTOP(1),.UARTCLK(100000000),.BAUD(BAUD))
uart (.clk(uartclk),.TX(uarttx),.RX(uartrx),.rst(uartreset),.txdata(txdata),.txstart(txstart),.rxdata(rxdata),.rxvalid(rxvalid),.txready(txready));
wire uartlbreset;
uartlb #(.UARTDWIDTH(8),.LBWIDTH(64))
uartlb64 (.clk(uartclk),.reset(uartlbreset),.fromuartdata(rxdata),.fromuartvalid(rxvalid),.touartdata(txdata),.touartready(txready),.touartstart(txstart),.lbrcmd(lb.lbrcmd),.lbrready(lb.lbrready),.lbwcmd(lb.lbwcmd),.lbwvalid(lb.lbwvalid));

wire idelayctrl_rdy;
IDELAYCTRL idelayctrl(.RST(idelayctrl_reset),.RDY(idelayctrl_rdy),.REFCLK(clk200));

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
reg [31:0] i2cdatarx_r=0;
wire [31:0] i2cdatarx_w;
reg [31:0] i2cdatarx_wd;
wire sdatx;
wire sdarx;
wire sdaasrx;
wire i2creset;
IOBUF sdaiobuf (.IO(hw.vc707.iic.sda),.I(sdatx),.O(sdarx),.T(sdaasrx));
i2cmaster #(.MAXNACK(4),.CLK4RATIO(2500))
i2cmaster (.clk(clk100),.nack(lb.i2cstart[3:0]),.stopbit(lb.i2cstart[4]),.sdatx(sdatx),.sdarx(sdarx),.sdaasrx(sdaasrx),.scl(hw.vc707.iic.scl),.clk4ratio(lb.clk4radio),.start(lb.stb_i2cstart),.datatx(lb.i2cdatatx),.datarx(lb.i2cdatarx),.rxvalid(lb.i2crxvalid),.rst(i2creset));
assign hw.vc707.iic.mux_reset_b=lb.i2cmux_reset_b;

wire sgmiiclk;
IBUFDS_GTE2 mgtrefclk_113_sgmii(.I(hw.vc707.sgmiiclk_q0_p),.IB(hw.vc707.sgmiiclk_q0_n),.O(sgmiiclk),.ODIV2(),.CEB(1'b0));
wire sma_mgt_refclk;
IBUFDS_GTE2 mgtrefclk_113_sma(.I(hw.vc707.sma_mgt_refclk_p),.IB(hw.vc707.sma_mgt_refclk_n),.O(sma_mgt_refclk),.ODIV2(),.CEB(1'b0));
wire si5324_out_c;
IBUFDS_GTE2 mgtrefclk_114_pcie(.I(hw.vc707.si5324_out_c_p),.IB(hw.vc707.si5324_out_c_n),.O(si5324_out_c),.ODIV2(),.CEB(1'b0));
wire pcie_clk_qo;
IBUFDS_GTE2 mgtrefclk1_115_pcie(.I(hw.vc707.pcie.clk_qo_p),.IB(hw.vc707.pcie.clk_qo_n),.O(pcie_clk_qo),.ODIV2());
wire sfpreconnected;
wire hwreset=lb.stb_hwreset || poweronreset;
wire pllreset;
wire qpllresetdone_113;
wire qplloutclk_113;
wire qplloutrefclk_113;
wire qpllpd_113=1'b0;
wire qpllrefclklost_113;
wire qpllreset_113;
wire [2:0] qpllrefclksel_113=3'h1;
gticc_common
gticc_common_113(.QPLLLOCKDETCLK(clk200)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(0/*si5324_out_c*/),.GTSOUTHREFCLK1(1'b0)
,.QPLLREFCLKSEL(qpllrefclksel_113)
,.QPLLOUTCLK(qplloutclk_113)
,.QPLLOUTREFCLK(qplloutrefclk_113)
,.reset(qpllreset_113)
,.resetdone(qpllresetdone_113)
);
wire rdyfortxrxreset;
wire pllresetdonestrobe;
reg sfplos=0;
reg sfplos_d=0;
assign sfpreconnected=~sfplos&sfplos_d;
always @(posedge clk200) begin
	sfplos<=hw.vc707.sfp.los;
	sfplos_d<=sfplos;
end

wire readyforreset_sfp;
wire reset_sfp;
wire readyforreset_eth;
wire reset_eth;

wire rxusrclk_sfp;
wire txusrclk_sfp;
wire [3:0] rxcharisk_sfp;
wire [31:0] rxdata_sfp;
assign lb.sfptestrx=rxdata_sfp;
wire rxuserrdy_sfp=1'b1;
wire [3:0] txcharisk_sfp=4'b0;
wire [31:0] txdata_sfp=lb.sfptesttx;//32'habcdbeef;
wire txuserrdy_sfp=1'b1;
gticc_gt gticc_gt_sfp(.CPLLLOCKDETCLK(clk200)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(hw.vc707.sfp.rx_n),.GTXRXP(hw.vc707.sfp.rx_p),.GTXTXN(hw.vc707.sfp.tx_n),.GTXTXP(hw.vc707.sfp.tx_p)
,.QPLLCLK(qplloutclk_113),.QPLLREFCLK(qplloutrefclk_113)
,.CPLLREFCLKSEL(3'b1)
,.rxusrclk(rxusrclk_sfp)
,.txusrclk(txusrclk_sfp)
,.RXCHARISK(rxcharisk_sfp)
,.RXDATA(rxdata_sfp)
,.RXUSERRDY(rxuserrdy_sfp)
,.TXCHARISK(txcharisk_sfp)
,.TXDATA(txdata_sfp)
,.TXUSERRDY(txuserrdy_sfp)
,.reset(reset_sfp||sfpreconnected)
,.resetdone(resetdone_sfp)
,.readyforreset(readyforreset_sfp)
);
wire sgmiieth_reset;
wire sgmiieth_resetdone;
gmii gmii();
sgmii_ethernet_pcs_pma #(.SIM(SIM))
sgmii_ethernet_pcs_pma_1(.gtrefclk(sgmiiclk)
,.rxn(hw.vc707.sgmii_rx_n)
,.rxp(hw.vc707.sgmii_rx_p)
,.txn(hw.vc707.sgmii_tx_n)
,.txp(hw.vc707.sgmii_tx_p)
,.gmii(gmii.phy)
,.independent_clock_bufg(hw.vc707.sysclk)
,.reset(sgmiieth_reset)
,.resetdone(sgmiieth_resetdone)
);
/*assign gmii.tx_en=gmii.rx_dv;//sgmiieth_resetdone;
assign gmii.txd=gmii.rxd;//8'hcc;
assign gmii.tx_er=1'b0;
*/
/*sgmii_ethernet_pcs_pma sgmii_ethernet_pcs_pma(.sgmiiclk
,.hw(hw)
,.gmii(gmii.phy)
,.independent_clock_bufg(clk200)
,.qplloutclk(qplloutclk_113)
,.qplloutrefclk(qplloutrefclk_113)
,.qplllock(qpllresetdone_113)
,.reset(poweronreset)//hwreset)
,.resetdone(resetdone)
,.status_vector(status_vector)
,.clk200cnt(clk200cnt)
);
reg tx_en=0;
always @(posedge gmii.tx_clk) begin
	tx_en<=clk125cnt>32'h1001;
end
assign gmii.tx_en=tx_en;
assign gmii.txd=8'hcc;
assign gmii.tx_er=1'b0;
wire [15:0] gteth_rxdata;
wire [15:0] gteth_txdata;
wire [1:0] gteth_rxcharisk;
wire [1:0] gteth_txcharisk;
wire gteth_txusrclk;
wire gteth_rxusrclk;
wire gteth_rxvalid;
wire resetdone_eth=1;
gteth_gt gteth_gt(
.CPLLLOCKDETCLK(clk200)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(hw.vc707.sgmii_rx_n),.GTXRXP(hw.vc707.sgmii_rx_p),.GTXTXN(hw.vc707.sgmii_tx_n),.GTXTXP(hw.vc707.sgmii_tx_p)
,.QPLLCLK(qplloutclk_113),.QPLLREFCLK(qplloutrefclk_113)
,.RXDATA(gteth_rxdata)
,.RXCHARISK(gteth_rxcharisk)
,.TXCHARISK(gteth_txcharisk)
,.RXVALID(gteth_rxvalid)
,.RXUSERRDY(1'b1)
,.TXDATA(gteth_txdata)
,.TXUSERRDY(1'b1)
,.CPLLREFCLKSEL(3'b001)
,.txusrclk(gteth_txusrclk)
,.rxusrclk(gteth_rxusrclk)
,.txusrclk2(gmii.tx_clk)
,.rxusrclk2(gmii.rx_clk)
,.readyforreset(readyforreset_eth)
,.reset(reset_eth)
,.resetdone(resetdone_eth)
);
*/



localparam NSTEP=8;
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] donestrobe;
wire [NSTEP-1:0] error;
wire [NSTEP-1:0] resetout;
wire [NSTEP-1:0] donecriteria={sysclkmmcm_locked,1'b1,1'b1,1'b1,idelayctrl_rdy,qpllresetdone_113,resetdone_sfp,sgmiieth_resetdone};
wire [NSTEP-1:0] readycriteria={1'b1,donecriteria[NSTEP-1:1]};
wire [NSTEP-1:0] resetin={hwreset,donestrobe[NSTEP-1:1]};
wire [NSTEP*16-1:0] readylength={NSTEP{16'd10}};
wire [NSTEP*16-1:0] resetlength={NSTEP{16'd10}};
wire [NSTEP*32-1:0] timeout={NSTEP{32'b0}};

chainreset #(.NSTEP(NSTEP))
chainreset(.clk(hw.vc707.sysclk)
,.done,.donecriteria,.donestrobe,.error,.readycriteria,.readylength,.resetin,.resetlength,.resetout,.timeout);
assign lb.hwresetstatus=done;
wire [NSTEP-2-1:0] dummyready;
assign readyforreset_sfp=qpllresetdone_113;
assign readyforreset_eth=resetdone_sfp;
assign {sysclkmmcm_reset,uartreset,uartlbreset,i2creset,idelayctrl_reset,qpllreset_113,reset_sfp,sgmiieth_reset}=resetout;

wire  mdio_i;
wire  mdio_o;
wire  mdio_t;
IOBUF mdiobuf(.O(mdio_i),.I(mdio_o),.T(mdio_t),.IO(hw.vc707.phy_mdio));
wire  opr1w0;
wire [4:0] phyaddr;
wire [4:0] regaddr;
wire [15:0] datatx;
assign {opr1w0,phyaddr,regaddr,datatx}=lb.mdiodatatx[26:0];
mdiomaster mdiomaster(.clk(clk100),.busy(),.clk4ratio(SIM ? 32'd10 : lb.mdioclk4ratio),.datarx(lb.mdiodatarx),.datatx(lb.mdiodatatx),.mdc(hw.vc707.phy_mdc),.mdio_i(mdio_i),.mdio_o(mdio_o),.mdio_t(mdio_t),.opr1w0(opr1w0),.phyaddr(phyaddr),.regaddr(regaddr),.rst(1'b0),.rxvalid(lb.mdiorxvalid),.start(lb.stb_mdiostart));

// gtxgmii cross wire 
/*wire [5:0] leds;
gtgmii gtgmii(.gmii(gmii.phy)
,.gt_rx_is_k(gteth_rxcharisk)
,.gt_rxd(gteth_rxdata)
,.gt_tx_clk(gteth_txusrclk)
,.gt_tx_is_k(gteth_txcharisk)
,.gt_txd(gteth_txdata)
,.an_bypass(1'b1)
,.rx_err_los(1'b0)
,.an_state_mon()
,.lacr_rx()
,.leds(leds)
,.operate()
);
assign gmii.tx_en=clk125cnt>32'h1001;
//assign gmii.rx_en=clk125cnt>32'h1001;
assign gmii.txd=8'hcc;
assign gmii.tx_er=1'b0;
*/
// ether_gmii cross wire 
wire [7:0] last_ip_byte=8'b0;
wire [23:0] lb_addr;
wire  lb_clk;
wire [31:0] lb_data_in=32'hdeadbeef;
wire [31:0] lb_data_out;
wire  lb_read;
wire  lb_rvalid;
wire  lb_write;
wire  pwm_out0;
wire  pwm_out1;
wire  reset=1'b0;
wire [7:0] s_tx_tdata=8'b0;
wire  s_tx_tready;
wire  s_tx_tvalid=1'b0;
wire [7:0] status;

/*parameter IP ={8'd192, 8'd168, 8'd1, 8'd224};
parameter MAC = 48'h00105ad155b2;
parameter LB_READ_DELAY = 3;
parameter JUMBO_DW=14;
ether_gmii #(.IP(IP),.MAC(MAC),.JUMBO_DW(JUMBO_DW))
//ether_gmii #(.IP(32'hc0a801e0),.MAC(48'haabbccddeeff),.JUMBO_DW(JUMBO_DW))
ether_gmii(
.reset(reset)

,.gmii_rx_clk(gmii.rx_clk)
,.gmii_rx_dv(gmii.rx_dv)
,.gmii_rx_er(gmii.rx_er)
,.gmii_rxd(gmii.rxd)
,.gmii_tx_clk(gmii.tx_clk)
//,.gmii_tx_en(gmii.tx_en)
//,.gmii_tx_er(gmii.tx_er)
//,.gmii_txd(gmii.txd)
,.last_ip_byte(last_ip_byte)
,.lb_addr(lb_addr)
,.lb_clk(lb_clk)
,.lb_data_in(lb_data_in)
,.lb_data_out(lb_data_out)
,.lb_read(lb_read)
,.lb_rvalid(lb_rvalid)
,.lb_write(lb_write)
,.pwm_out0(pwm_out0)
,.pwm_out1(pwm_out1)
,.s_tx_tdata(s_tx_tdata)
,.s_tx_tready(s_tx_tready)
,.s_tx_tvalid(s_tx_tvalid)
,.status(status));
*/
reg [47:0] mac=0;
assign keeplbdataout=&lb_data_out;
iethernet ifethernet(.reset(hwreset),.mac(mac));
wire [8:0] dbdout;
wire dbfull;
wire dbempty;
wire dbtenfifo;
wire [7:0] dbtxdfifo;
wire [3:0] dbtxstate;
wire [3:0] dbrxstate;
wire [31:0] dbtxcrc_w;
wire [31:0] dbtxcrc;;
wire dbrxcrcen;
wire dbrxcrcen1;
wire dbrxcrcen2;
wire dbrxcrcen3;
wire [3:0] dbrxnext;
wire dbtxcrcen1;
wire dbtxcrcen2;
wire dbtxcrcen;
wire dbrxcrczero;
wire dbrxcrczero_w;
wire dbethrxbusy;
ethernetovergmii #(.SIM(SIM))ethernetovergmii1 (.gmii(gmii.eth),.eth(ifethernet),.reset(hwreset)
,.dbdout
,.dbfull
,.dbempty
,.dbtenfifo
,.dbtxdfifo
,.dbtxstate
,.dbrxstate
,.dbtxcrc
,.dbtxcrc_w
,.dbrxcrczero
,.dbrxcrczero_w
,.dbrxcrcen
,.dbrxcrcen1
,.dbrxcrcen2
,.dbrxcrcen3
,.dbrxnext
,.dbtxcrcen1
,.dbtxcrcen2
,.dbtxcrcen
,.dbethrxbusy
);
reg [31:0] ip=32'hc0a801e0;
always @(posedge ifethernet.clk) begin
	mac<=48'h00105ad155b2;//MAC;//48'haabbccddeeff;
end
wire dbarpmatch;
wire dbrequest;
wire [15:0] dbtxcnt;
wire dbethkey;
iethernet ifarpethernet(.reset(hwreset),.mac(mac));
iarplink arp(.clk(ifethernet.clk));
arpoverethernet arpoverethernet (.eth(ifarpethernet), .arp(arp),.reset(hwreset),.ip(ip)
,.dbarpmatch(dbarpmatch)
,.dbrequest(dbrequest)
,.dbtxcnt(dbtxcnt)
,.dbethkey(dbethkey)
);
iethernet ifipv4ethernet(.reset(reset),.mac(mac));
ipv4link ifipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ificmpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ifudpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
assign ifudpipv4.requestcode=16'h11;
ipv4overethernet ipv4overethernet(.eth(ifipv4ethernet), .ipv4(ifipv4),.reset(reset));

wire clientackw;
wire [15:0] clientackcodew;
wire [4:0] reqcntw;
ethernetsw ethernetsw(.hardware(ifethernet),.arpethernet(ifarpethernet),.ipv4ethernet(ifipv4ethernet)
,.clientackw,.clientackcodew,.reqcntw
);
icmplink ificmp(.clk(ifethernet.clk),.reset(reset));
icmplink ifpingicmp(.clk(ifethernet.clk),.reset(reset));
icmpoveripv4 icmpoveripv4(.ipv4(ificmpipv4), .icmp(ificmp),.reset(reset));
//icmpoveripv4 icmpoveripv4_udp(.ipv4(ifudpipv4), .icmp(ificmp),.reset(reset));
wire requestping;
pingovericmp #(.SIM(1))pingovericmp(.icmp(ifpingicmp),.reset(reset));
ipv4sw ipv4sw(.ipv4(ifipv4),.icmpipv4(ificmpipv4),.udpipv4(ifudpipv4));
icmpsw icmpsw(.icmp(ificmp),.pingicmp(ifpingicmp));



`include "ilaauto.vh"
endmodule
