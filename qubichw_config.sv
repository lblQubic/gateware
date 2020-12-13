module qubichw_config #(parameter DEBUG="false",parameter BAUD=9600,parameter SIM=0)
(hw hw
,ilocalbus_regmap.cfg lbreg
,dsp.cfg dsp
);
wire  clk100;
wire  clk125;
wire  clk200;
wire  clk250;
// sysclkmmcm cross wire
wire [31:0] clk100cnt;
wire [31:0] clk125cnt;
wire [31:0] clk200cnt;
wire [31:0] clk250cnt;
wire clkcfg;
assign clkcfg=clk125;
wire sysclkmmcm_locked;
wire sysclkmmcm_reset;
sysclkmmcm sysclkmmcm(.clk100(clk100),.clk125(clk125),.clk200(clk200),.clk250(clk250),.clk100cnt(clk100cnt),.clk125cnt(clk125cnt),.clk200cnt(clk200cnt),.clk250cnt(clk250cnt),.sysclk(hw.vc707.sysclk),.mmcm_locked(sysclkmmcm_locked),.mmcm_reset(sysclkmmcm_reset));

localparam POWERONRESET=100;
reg poweronreset_r=0;
reg poweronreset_d=0;
wire poweronreset;
reg [31:0] poweronresetcnt=0;
reg reseted125=0;
always @(posedge hw.vc707.sysclk) begin
	poweronresetcnt<=poweronresetcnt+(poweronreset_r ? 1'b0 : 1'b1);
	if (poweronresetcnt==POWERONRESET & ~poweronreset_r)
		poweronreset_r<=1'b1;
	poweronreset_d<=poweronreset_r;
	if (poweronreset)
		reseted125=1'b1;
end
assign poweronreset = poweronreset_r& ~poweronreset_d;
//areset poweronareset(.areset(poweronreset),.clk(clk125),.sreset(poweronreset125));

ilocalbus #(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32),.WRITECMD(1),.READCMD(8'h0))
uartlb();
ilocalbus #(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32),.WRITECMD(0),.READCMD(8'h10))
udplb();
//ilocalbus #(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32),.WRITECMD(0),.READCMD(8'h10))
//lb();
reg lbseludp=1'b1;
assign lbreg.lb.clk=lbseludp ? udplb.clk : uartlb.clk;
assign lbreg.lb.wcmd=lbseludp ? udplb.wcmd : uartlb.wcmd;
assign lbreg.lb.wvalid=lbseludp ? udplb.wvalid : uartlb.wvalid;
assign uartlb.rctrl=lbseludp ? 0 : lbreg.lb.rctrl;
assign uartlb.rdata=lbseludp ? 0 : lbreg.lb.rdata;
assign uartlb.raddr=lbseludp ? 0 : lbreg.lb.raddr;
assign uartlb.rready=lbseludp ? 0 : lbreg.lb.rready;
assign udplb.rctrl=lbseludp ? lbreg.lb.rctrl : 0;
assign udplb.rdata=lbseludp ? lbreg.lb.rdata : 0;
assign udplb.raddr=lbseludp ? lbreg.lb.raddr : 0;
assign udplb.rready=lbseludp ? lbreg.lb.rready : 0;
assign lbreg.lb.readcmd=lbseludp ? udplb.readcmd : uartlb.readcmd;
assign lbreg.lb.writecmd=lbseludp ? udplb.writecmd : uartlb.writecmd;
assign lbreg.lb.readcmd=lbseludp ? udplb.READCMD : uartlb.READCMD;
assign lbreg.lb.writecmd=lbseludp ? udplb.WRITECMD : uartlb.WRITECMD;

wire uarttx;
wire uartrx=hw.vc707.usb2uart.rx;
wire keeplbdataout;
wire keepadc;
assign hw.vc707.usb2uart.tx=lbreg.uartmode==0 ? hw.vc707.usb2uart.rx : lbreg.uartmode==1 ? uarttx : 1'b1; //serial port loopback test
assign {hw.vc707.gpio_led_7,hw.vc707.gpio_led_6,hw.vc707.gpio_led_5,hw.vc707.gpio_led_4,hw.vc707.gpio_led_3,hw.vc707.gpio_led_2,hw.vc707.gpio_led_1,hw.vc707.gpio_led_0}={keepadc,keeplbdataout,clk200cnt[26:21]};
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
wire uartclk=clkcfg;
wire uartreset;
//wire lbrready;
//assign lbrready=lb.rready;
//wire lbwvalid;
//assign lb.wvalid=lbwvalid;
//wire [63:0] lbrcmd;
//assign lbrcmd=lb.rcmd;
//wire [63:0] lbwcmd;
//assign lb.wcmd=lbwcmd;
wire dbresetcmd;
uart #(.DWIDTH(8),.NSTOP(1),.UARTCLK(100000000),.BAUD(BAUD))
uart (.clk(uartclk),.TX(uarttx),.RX(uartrx),.rst(uartreset),.txdata(txdata),.txstart(txstart),.rxdata(rxdata),.rxvalid(rxvalid),.txready(txready));
wire uartlbreset;
uartlb #(.UARTDWIDTH(8),.LBWIDTH(64))
uartlb64 (.clk(uartclk),.areset(uartlbreset),.fromuartdata(rxdata),.fromuartvalid(rxvalid),.touartdata(txdata),.touartready(txready),.touartstart(txstart),.lbrcmd(uartlb.rcmd),.lbrready(uartlb.rready),.lbwcmd(uartlb.wcmd),.lbwvalid(uartlb.wvalid)
,.dbresetcmd(dbresetcmd)
);
//assign lb.rready=lb.wvalid;  // for this current uart lb, response immidiately

wire idelayctrl_rdy;
IDELAYCTRL idelayctrl(.RST(idelayctrl_reset),.RDY(idelayctrl_rdy),.REFCLK(clk200));

assign uartlb.clk=uartclk;
assign dsp.clk=clkcfg;
//assign dsp.pps=hw.vc707.pps;
assign lbreg.fmcprsnt={hw.fmc2.prsnt,hw.fmc1.prsnt};
assign lbreg.fmcpgm2c={hw.fmc2.pg_m2c,hw.fmc1.pg_m2c};
assign {hw.fmc2.dac_txen_vadj,hw.fmc1.dac_txen_vadj}=lbreg.fmcdacen;
reg [31:0] i2cdatarx_r=0;
wire [31:0] i2cdatarx_w;
reg [31:0] i2cdatarx_wd;
wire sdatx;
wire sdarx;
wire sdaasrx;
wire i2creset;
wire  dbscl=hw.vc707.iic.scl;
IOBUF sdaiobuf (.IO(hw.vc707.iic.sda),.I(sdatx),.O(sdarx),.T(sdaasrx));
i2cmaster #(.MAXNACK(4),.CLK4RATIO(2500))
i2cmaster (.clk(clkcfg),.nack(lbreg.i2cstart[3:0]),.stopbit(lbreg.i2cstart[4]),.sdatx(sdatx),.sdarx(sdarx),.sdaasrx(sdaasrx),.scl(hw.vc707.iic.scl),.clk4ratio(lbreg.clk4ratio),.start(lbreg.stb_i2cstart),.datatx(lbreg.i2cdatatx),.datarx(lbreg.i2cdatarx),.rxvalid(lbreg.i2crxvalid),.rst(i2creset));
assign hw.vc707.iic.mux_reset_b=lbreg.i2cmux_reset_b;

wire sgmiiclk;
IBUFDS_GTE2 mgtrefclk_113_sgmii(.I(hw.vc707.sgmiiclk_q0_p),.IB(hw.vc707.sgmiiclk_q0_n),.O(sgmiiclk),.ODIV2(),.CEB(1'b0));
wire sma_mgt_refclk;
IBUFDS_GTE2 mgtrefclk_113_sma(.I(hw.vc707.sma_mgt_refclk_p),.IB(hw.vc707.sma_mgt_refclk_n),.O(sma_mgt_refclk),.ODIV2(),.CEB(1'b0));
wire si5324_out_c;
IBUFDS_GTE2 mgtrefclk_114_pcie(.I(hw.vc707.si5324_out_c_p),.IB(hw.vc707.si5324_out_c_n),.O(si5324_out_c),.ODIV2(),.CEB(1'b0));
wire pcie_clk_qo;
IBUFDS_GTE2 mgtrefclk1_115_pcie(.I(hw.vc707.pcie.clk_qo_p),.IB(hw.vc707.pcie.clk_qo_n),.O(pcie_clk_qo),.ODIV2());
wire user_clock;
IBUFGDS user_clock_ibufgds(.I(hw.vc707.user_clock_p),.IB(hw.vc707.user_clock_n),.O(user_clock));
wire sfpreconnected;
reg hwreset=0;
wire hwreset_w;
always @(posedge hw.vc707.sysclk) begin
	//hwreset<=lbreg.stb_hwreset;// || poweronreset;
	hwreset<=hwreset_w;// || poweronreset;
end
reg hwresetstb=0;
always @(posedge clkcfg) begin
	hwresetstb<=lbreg.stb_hwreset;
end
areset hwresetareset(.clk(hw.vc707.sysclk),.areset(hwresetstb),.sreset(hwreset_w));
wire pllreset;
wire qpllresetdone_113;
wire qplloutclk_113;
wire qplloutrefclk_113;
wire qpllpd_113=1'b0;
wire qpllrefclklost_113;
wire qpllreset_113;
wire [2:0] qpllrefclksel_113=3'h1;
gticc_common
gticc_common_113(.QPLLLOCKDETCLK(hw.vc707.sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(0),.GTSOUTHREFCLK1(1'b0)
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
always @(posedge hw.vc707.sysclk) begin
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
assign lbreg.sfptestrx=rxdata_sfp;
wire rxuserrdy_sfp=1'b1;
wire [3:0] txcharisk_sfp=4'b0;
wire [31:0] txdata_sfp=lbreg.sfptesttx;//32'habcdbeef;
wire txuserrdy_sfp=1'b1;
gticc_gt gticc_gt_sfp(.CPLLLOCKDETCLK(hw.vc707.sysclk)
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
reg sgmiieth_reset_r=0;
wire sgmiieth_reset_s;
always @(posedge sgmiiclk) begin
	sgmiieth_reset_r<=sgmiieth_reset;
end
areset sgmiiethareset(.clk(clkcfg),.areset(sgmiieth_reset),.sreset(sgmiieth_reset_s));
gmii gmii();
sgmii_ethernet_pcs_pma #(.SIM(SIM))
sgmii_ethernet_pcs_pma_1(.gtrefclk(sgmiiclk)
,.rxn(hw.vc707.sgmii_rx_n)
,.rxp(hw.vc707.sgmii_rx_p)
,.txn(hw.vc707.sgmii_tx_n)
,.txp(hw.vc707.sgmii_tx_p)
,.gmii(gmii.phy)
,.independent_clock_bufg(clkcfg)
,.reset(sgmiieth_reset_s)
,.resetdone(sgmiieth_resetdone)
);


wire mdioreset;
wire mdioinitdone;
wire ethreset_w;
wire ethreset;
wire ethclk;
areset ethareset(.clk(ethclk),.areset(ethreset_w),.sreset(ethreset));
//flag_xdomain ethresetxdomain(.clk1(clk125),.flagin_clk1(ethreset_w),.clk2(ethclk),.flagout_clk2(ethreset));
//always @(posedge clk125) begin
//	ethreset<=ethreset_w;
//end
wire ethresetdone=~ethreset;
wire jesd_reset_done_1;
wire jesdreset;
wire axireset;
localparam NSTEP=12;
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] donestrobe;
wire [NSTEP-1:0] error;
wire [NSTEP-1:0] resetout;
wire [NSTEP-1:0] donecriteria={sysclkmmcm_locked,1'b1,1'b1,1'b1,idelayctrl_rdy,qpllresetdone_113,resetdone_sfp,sgmiieth_resetdone,mdioinitdone,ethresetdone,jesd_reset_done_1,1'b1};
wire [NSTEP-1:0] readycriteria={1'b1,donecriteria[NSTEP-1:1]};
wire [NSTEP-1:0] resetin={hwreset|poweronreset,donestrobe[NSTEP-1:1]};
wire [NSTEP*16-1:0] readylength={NSTEP{16'd10}};
wire [NSTEP*16-1:0] resetlength={NSTEP{16'd10}};
wire [NSTEP*32-1:0] timeout={NSTEP{32'b0}};


chainreset #(.NSTEP(NSTEP))
chainreset(.clk(hw.vc707.sysclk)
,.done,.donecriteria,.donestrobe,.error,.readycriteria,.readylength,.resetin,.resetlength,.resetout,.timeout);
wire [NSTEP-2-1:0] dummyready;
assign readyforreset_sfp=qpllresetdone_113;
assign readyforreset_eth=resetdone_sfp;
assign {sysclkmmcm_reset,uartreset,uartlbreset,i2creset,idelayctrl_reset,qpllreset_113,reset_sfp,sgmiieth_reset,mdioreset,ethreset_w,jesdreset,axireset}=resetout;
reg [NSTEP-1:0] done_r=0;
reg [NSTEP-1:0] done_r2=0;
reg [NSTEP-1:0] done_r3=0;
wire [NSTEP-1:0] done_w;
always@(posedge hw.vc707.sysclk) begin
	done_r<=done;
end
always @(posedge clkcfg) begin
	done_r2<=done_r;
	done_r3<=done_r2;
end
data_xdomain #(.size(10)) donexdomain(.clk_in(hw.vc707.sysclk), .gate_in(1'b1), .data_in(done),
.clk_out(clkcfg),.data_out(done_w));
assign lbreg.hwresetstatus=done_r3;


wire  mdio_i;
wire  mdio_o;
wire  mdio_t;
IOBUF mdiobuf(.O(mdio_i),.I(mdio_o),.T(mdio_t),.IO(hw.vc707.phy_mdio));
wire  opr1w0;
wire [4:0] phyaddr;
wire [4:0] regaddr;
wire [15:0] datatx;
reg stb_mdiostart_d=0;
reg [31:0] mdioclk4ratio=0;
always @(posedge clkcfg) begin
	mdioclk4ratio<=lbreg.mdioclk4ratio;
	stb_mdiostart_d<=lbreg.stb_mdiostart;
end
assign {opr1w0,phyaddr,regaddr,datatx}=lbreg.mdiodatatx[26:0];
mdiomasterinit #(.INITLENGTH(4),.INITWIDTH(27),.INITCLK4RATIO(SIM ? 2 : 100),.INITCMDS(
    {1'b0,5'b00111,5'h0,16'h0140
    ,1'b0,5'b00111,5'h4,16'h9801
    ,1'b0,5'b00111,5'h16,16'h1
    ,1'b0,5'b00111,5'h0,16'h8140
    }
))
mdiomasterinit(.clk(clkcfg)
,.busy()
,.clk4ratio(SIM ? 32'd10 : mdioclk4ratio)
,.datarx(lbreg.mdiodatarx)
,.datatx(datatx)
,.mdc(hw.vc707.phy_mdc)
,.mdio_i(mdio_i)
,.mdio_o(mdio_o)
,.mdio_t(mdio_t)
,.opr1w0(opr1w0)
,.phyaddr(phyaddr)
,.regaddr(regaddr)
,.rst(mdioreset)
,.rxvalid(lbreg.mdiorxvalid)
,.start(stb_mdiostart_d)
,.initdone(mdioinitdone)
);



// ether_gmii cross wire
wire [7:0] last_ip_byte=8'b0;
wire [23:0] lb_addr;
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

reg [47:0] mac=0;
assign keeplbdataout=&lb_data_out;
reg [31:0] ip=32'hc0a801e0;  // 192.168.1.224
assign ethclk=gmii.tx_clk;
always @(posedge ethclk) begin
	mac<=48'h515542494301;//MAC;//48'haabbccddeeff;
end
udplink ifudp(.reset(ethreset),.clk(ethclk));
gmii2udp #(.DEBUG(DEBUG),.SIM(SIM))
gmii2udp(.gmii(gmii.eth),.ifudp(ifudp),.mac(mac),.ip(ip),.reset(ethreset));
wire [63:0] udprxerr;
udplink ifudpportd001(.reset(ethreset),.clk(ethclk));
udplink ifudpportd002(.reset(ethreset),.clk(ethclk));
udplink ifudpportd003(.reset(ethreset),.clk(ethclk));
udplink ifudpportd000(.reset(ethreset),.clk(ethclk));
udpsw udpsw(.udp(ifudp),.udpportd001(ifudpportd001),.udpportd000(ifudpportd000),.udpportd002(ifudpportd002),.udpportd003(ifudpportd003));
udpecho #(.PORT(16'hd000))
udpecho(.clk(ethclk),.udp(ifudpportd000),.reset(ethreset));
udpstatic #(.PORT(16'hd001))
udpstatic(.clk(ethclk),.udp(ifudpportd001),.reset(ethreset),.staticnbyte(1472));
udpcnt #(.PORT(16'hd002))
udpcnt(.clk(ethclk),.udp(ifudpportd002),.reset(ethreset),.udprxerr(udprxerr));
wire [15:0] txlength;
wire [15:0] rxlength;
udplb64 #(.PORT(16'hd003))
udplb64 (.clk(ethclk),.udp(ifudpportd003),.reset(ethreset)//~sgmiieth_resetdone)
,.lbclk(udplb.clk)
,.lbrxdata(udplb.wcmd)
,.lbrxdv(udplb.wvalid)
,.lbtxdata(udplb.rcmd)
,.lbtxen(udplb.rready)
,.rxlength(rxlength)
,.txlength(txlength)
);
assign udplb.clk=clkcfg;
assign txlength=rxlength;
//assign lbreg.lbrready=lbreg.lbwvalid;  // for this current uart lb, response immidiately
wire [31:0] test=lbreg.test;

wire [63:0] adc0;
wire [63:0] adc1;
wire [63:0] adc2;
wire [63:0] adc3;
wire [63:0] adc4;
wire [63:0] adc5;
wire [63:0] adc6;
wire [63:0] adc7;
wire [63:0] dac0;
wire [63:0] dac1;
wire [63:0] dac2;
wire [63:0] dac3;
wire [63:0] dac4;
wire [63:0] dac5;
wire [63:0] dac6;
wire [63:0] dac7;
assign keepadc=|{adc0,adc1,adc2,adc3};
wire  rx_reset=jesdreset;//1'b0;
wire  tx_reset=jesdreset;//1'b0;
wire  rx_sys_reset=jesdreset;//1'b0;
wire  tx_sys_reset=jesdreset;//1'b0;
//wire [1:0] rx_sync_1;
//wire [1:0] rx_sync_2;
//wire  tx_sync_1;
//wire  tx_sync_2;
wire [2:0] dbaxistate;
wire [2:0] dbaxinext;
axi4lite axi_fmc1_adc0(.aclk(clkcfg));
axi4lite axi_fmc1_adc1(.aclk(clkcfg));
axi4lite axi_fmc1_dac(.aclk(clkcfg));
axi4lite axi_fmc2_adc0(.aclk(clkcfg));
axi4lite axi_fmc2_adc1(.aclk(clkcfg));
axi4lite axi_fmc2_dac(.aclk(clkcfg));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc1_adc0
(.clk(clkcfg),.slave(axi_fmc1_adc0),.addr(lbreg.axifmc1adc0_addr),.wdata(lbreg.axifmc1adc0_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc1adc0_rdata),.rdatavalid(lbreg.axifmc1adc0_rdatavalid),.start(lbreg.stb_axifmc1adc0_start),.w0r1(lbreg.axifmc1adc0_w0r1),.reset(axireset),.dbstate(dbaxistate),.dbnext(dbaxinext));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc1_adc1
(.clk(clkcfg),.slave(axi_fmc1_adc1),.addr(lbreg.axifmc1adc1_addr),.wdata(lbreg.axifmc1adc1_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc1adc1_rdata),.rdatavalid(lbreg.axifmc1adc1_rdatavalid),.start(lbreg.stb_axifmc1adc1_start),.w0r1(lbreg.axifmc1adc1_w0r1),.reset(axireset));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc1_dac
(.clk(clkcfg),.slave(axi_fmc1_dac),.addr(lbreg.axifmc1dac_addr),.wdata(lbreg.axifmc1dac_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc1dac_rdata),.rdatavalid(lbreg.axifmc1dac_rdatavalid),.start(lbreg.stb_axifmc1dac_start),.w0r1(lbreg.axifmc1dac_w0r1),.reset(axireset));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc2_adc0
(.clk(clkcfg),.slave(axi_fmc2_adc0),.addr(lbreg.axifmc2adc0_addr),.wdata(lbreg.axifmc2adc0_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc2adc0_rdata),.rdatavalid(lbreg.axifmc2adc0_rdatavalid),.start(lbreg.stb_axifmc2adc0_start),.w0r1(lbreg.axifmc2adc0_w0r1),.reset(axireset));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc2_adc1
(.clk(clkcfg),.slave(axi_fmc2_adc1),.addr(lbreg.axifmc2adc1_addr),.wdata(lbreg.axifmc2adc1_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc2adc1_rdata),.rdatavalid(lbreg.axifmc2adc1_rdatavalid),.start(lbreg.stb_axifmc2adc1_start),.w0r1(lbreg.axifmc2adc1_w0r1),.reset(axireset));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc2_dac
(.clk(clkcfg),.slave(axi_fmc2_dac),.addr(lbreg.axifmc2dac_addr),.wdata(lbreg.axifmc2dac_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc2dac_rdata),.rdatavalid(lbreg.axifmc2dac_rdatavalid),.start(lbreg.stb_axifmc2dac_start),.w0r1(lbreg.axifmc2dac_w0r1),.reset(axireset));
/*
reg [11:0] axifmc1adc0_addr=0;
reg [31:0] axifmc1adc0_wdata=0;
reg [31:0] axifmc1adc0_rdata=0;
reg [0:0] axifmc1adc0_rdatavalid=0;
reg [0:0] stb_axifmc1adc0_start=0;
reg [0:0] axifmc1adc0_start=0;
reg [0:0] axifmc1adc0_w0r1=0;
always @(posedge clkcfg) begin
axifmc1adc0_addr<=lbreg.axifmc1adc0_addr;
axifmc1adc0_wdata<=lbreg.axifmc1adc0_wdata;
axifmc1adc0_rdata<=lbreg.axifmc1adc0_rdata;
axifmc1adc0_rdatavalid<=lbreg.axifmc1adc0_rdatavalid;
stb_axifmc1adc0_start<=lbreg.stb_axifmc1adc0_start;
axifmc1adc0_start<=lbreg.axifmc1adc0_start;
axifmc1adc0_w0r1<=lbreg.axifmc1adc0_w0r1;
end
*/

jesdfmc120 jesdfmc120_1(.core_clk(hw.fmc1.llmk_dclkout_2)
,.drpclk(clkcfg)
,.qpll_refclk(hw.fmc1.lmk_dclk8_m2c_to_fpga)
,.rxn_in({hw.fmc1.adc1_db2_n,hw.fmc1.adc1_db1_n,hw.fmc1.adc1_da2_n,hw.fmc1.adc1_da1_n,hw.fmc1.adc0_db2_n,hw.fmc1.adc0_db1_n,hw.fmc1.adc0_da2_n,hw.fmc1.adc0_da1_n})
,.rxp_in({hw.fmc1.adc1_db2_p,hw.fmc1.adc1_db1_p,hw.fmc1.adc1_da2_p,hw.fmc1.adc1_da1_p,hw.fmc1.adc0_db2_p,hw.fmc1.adc0_db1_p,hw.fmc1.adc0_da2_p,hw.fmc1.adc0_da1_p})
,.tx_sysref(hw.fmc1.llmk_sclkout_3)
,.rx_sysref(hw.fmc1.llmk_sclkout_3)
,.txn_out(hw.fmc1.dac_lane_n)
,.txp_out(hw.fmc1.dac_lane_p)
,.axi_adc0(axi_fmc1_adc0)
,.axi_adc1(axi_fmc1_adc1)
,.axi_dac(axi_fmc1_dac)
,.rx_reset(rx_reset)
,.tx_reset(tx_reset)
,.rx_sys_reset(rx_sys_reset)
,.tx_sys_reset(tx_sys_reset)
,.rx_sync()
,.tx_sync()
,.adc0(adc0)
,.adc1(adc1)
,.adc2(adc2)
,.adc3(adc3)
,.dac0(dac0)
,.dac1(dac1)
,.dac2(dac2)
,.dac3(dac3)
,.rx_aresetn_0()
,.rx_aresetn_1()
,.rx_frame_error()
,.tx_aresetn()
,.tx_tready()
,.adc01_valid()
,.adc23_valid()
,.common0_qpll_lock_out()
,.common1_qpll_lock_out()
,.reset_done(jesd_reset_done_1)
);
jesdfmc120 jesdfmc120_2(.core_clk(hw.fmc1.llmk_dclkout_2)
,.drpclk(clkcfg)
,.qpll_refclk(hw.fmc2.lmk_dclk8_m2c_to_fpga)
,.rxn_in({hw.fmc2.adc1_db2_n,hw.fmc2.adc1_db1_n,hw.fmc2.adc1_da2_n,hw.fmc2.adc1_da1_n,hw.fmc2.adc0_db2_n,hw.fmc2.adc0_db1_n,hw.fmc2.adc0_da2_n,hw.fmc2.adc0_da1_n})
,.rxp_in({hw.fmc2.adc1_db2_p,hw.fmc2.adc1_db1_p,hw.fmc2.adc1_da2_p,hw.fmc2.adc1_da1_p,hw.fmc2.adc0_db2_p,hw.fmc2.adc0_db1_p,hw.fmc2.adc0_da2_p,hw.fmc2.adc0_da1_p})
,.tx_sysref(hw.fmc2.llmk_sclkout_3)
,.rx_sysref(hw.fmc2.llmk_sclkout_3)
,.txn_out(hw.fmc2.dac_lane_n)
,.txp_out(hw.fmc2.dac_lane_p)
,.axi_adc0(axi_fmc2_adc0)
,.axi_adc1(axi_fmc2_adc1)
,.axi_dac(axi_fmc2_dac)
,.rx_reset(rx_reset)
,.tx_reset(tx_reset)
,.rx_sys_reset(rx_sys_reset)
,.tx_sys_reset(tx_sys_reset)
,.rx_sync()
,.tx_sync()
,.adc0(adc4)
,.adc1(adc5)
,.adc2(adc6)
,.adc3(adc7)
,.dac0(dac4)
,.dac1(dac5)
,.dac2(dac6)
,.dac3(dac7)
,.rx_aresetn_0()
,.rx_aresetn_1()
,.rx_frame_error()
,.tx_aresetn()
,.tx_tready()
,.adc01_valid()
,.adc23_valid()
,.common0_qpll_lock_out()
,.common1_qpll_lock_out()
);
reg [31:0] dclkcnt=0;
always @(posedge hw.fmc1.llmk_dclkout_2) begin
	dclkcnt<=dclkcnt+1;
end
assign hw.fmc1.fpga_sync_out_to_trigmux=dclkcnt[6];
assign hw.fmc2.fpga_sync_out_to_trigmux=dclkcnt[6];
OBUFDS obufds_user_sma_clk(.I(dclkcnt[6]),.O(hw.vc707.user_sma_clock_p),.OB(hw.vc707.user_sma_clock_n));
OBUFDS obufds_user_sma_gpio(.I(dclkcnt[6]),.O(hw.vc707.user_sma_gpio_p),.OB(hw.vc707.user_sma_gpio_n));

localparam NFCNT = 16;
wire [28*NFCNT-1:0] freq_cnt;
assign {lbreg.freq_lb
,lbreg.freq_sgmiiclk
,lbreg.freq_sma_mgt_refclk
,lbreg.freq_si5324_out_c
,lbreg.freq_pcie_clk_qo
,lbreg.freq_user_clock
,lbreg.freq_fmc1_llmk_dclkout_2
,lbreg.freq_fmc1_llmk_sclkout_3
,lbreg.freq_fmc1_lmk_dclk8_m2c_to_fpga
,lbreg.freq_fmc1_lmk_dclk10_m2c_to_fpga
,lbreg.freq_fmc2_llmk_dclkout_2
,lbreg.freq_fmc2_llmk_sclkout_3
,lbreg.freq_fmc2_lmk_dclk8_m2c_to_fpga
,lbreg.freq_fmc2_lmk_dclk10_m2c_to_fpga
,lbreg.freq_rxusrclk_sfp
,lbreg.freq_txusrclk_sfp
}=freq_cnt;
wire [NFCNT-1:0] freqcnt_clks = {
lbreg.lb.clk
,sgmiiclk
,sma_mgt_refclk
,si5324_out_c
,pcie_clk_qo
,user_clock
,hw.fmc1.llmk_dclkout_2
,hw.fmc1.llmk_sclkout_3
,hw.fmc1.lmk_dclk8_m2c_to_fpga
,hw.fmc1.lmk_dclk10_m2c_to_fpga
,hw.fmc2.llmk_dclkout_2
,hw.fmc2.llmk_sclkout_3
,hw.fmc2.lmk_dclk8_m2c_to_fpga
,hw.fmc2.lmk_dclk10_m2c_to_fpga
,rxusrclk_sfp
,txusrclk_sfp
};

genvar jx;
generate for (jx=0; jx<NFCNT; jx=jx+1)
    begin: gen_fcnt
        freq_count freq_count(
            .clk        (freqcnt_clks[jx]),
            .usbclk     (lbreg.lb.clk),
            .frequency  (freq_cnt[jx*28+27:jx*28])
        );
    end
endgenerate



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
/*reg [NSTEP-1:0] dbdone=0;
reg [NSTEP-1:0] dbdonestrobe=0;
reg [NSTEP-1:0] dberror=0;
reg [NSTEP-1:0] dbresetout=0;
reg [NSTEP-1:0] dbdonecriteria=0;
reg [NSTEP-1:0] dbreadycriteria=0;
reg [NSTEP-1:0] dbresetin=0;
always @(posedge hw.vc707.sysclk) begin
	dbdone<=done;
	dbdonestrobe<=donestrobe;
	dberror<=error;
	dbresetout<=resetout;
	dbdonecriteria<=donecriteria;
	dbreadycriteria<=readycriteria;
	dbresetin<=resetin;
end
*/
`include "ilaauto.vh"
//`include "ila125auto.vh"
endmodule
