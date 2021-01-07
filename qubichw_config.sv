module qubichw_config #(parameter DEBUG="false",parameter BAUD=9600,parameter SIM=0)
(hw.cfg hw
,regmap.cfg lbreg
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
assign lbreg.lb.clk=udplb.clk;
assign lbreg.lb.wcmd=udplb.wcmd;
assign lbreg.lb.wvalid=udplb.wvalid;
//assign udplb.rcmd=lbreg.lb.rcmd;
assign udplb.rctrl=lbreg.lb.rctrl;
assign udplb.rdata=lbreg.lb.rdata;
assign udplb.raddr=lbreg.lb.raddr;
assign udplb.rready=lbreg.lb.rready;
//assign lbreg.lb.readcmd=udplb.readcmd;
//assign lbreg.lb.writecmd=udplb.writecmd;
assign lbreg.lb.readcmd=udplb.READCMD;
assign lbreg.lb.writecmd=udplb.WRITECMD;


/*assign lbreg.cntbuf_buf.buf0.wr.clk=clk250;
assign lbreg.cntbuf_buf.buf0.wr.data=clk250cnt;
assign lbreg.cntbuf_buf.buf0.wr.en=1'b1;
*/
assign udplb.wen=lbreg.lb.wen;
/*

>>>>>>> 09e637b74e066aa20ae868c862dcffb1fa346b44
//assign lbreg.bufreadtest.wclk=clk250;
//assign lbreg.bufreadtest.wren=1'b1;
//assign lbreg.bufreadtest.wrdata=clk250cnt;
//areset areset_bufreadtestreset(.clk(clk250),.areset(lbreg.stb_bufreadtestreset),.sreset(lbreg.bufreadtest.reset));
//assign lbreg.bufreadtestfull=lbreg.bufreadtest.full;

reg [9:0]	bufreadtestwaddr=0;
=======
/*reg [9:0]	bufreadtestwaddr=0;
>>>>>>> 09e637b74e066aa20ae868c862dcffb1fa346b44
reg [15:0] 	bufreadtestwrdata=0;
always @(posedge clkcfg) begin
	bufreadtestwaddr<=lbreg.bufreadtest.waddr;
	bufreadtestwrdata<=lbreg.bufreadtest.wrdata;
end
*/
iuart_regmap#(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32))
uartreg();
assign uartreg.lb.clk=uartlb.clk;
assign uartreg.lb.wcmd=uartlb.wcmd;
assign uartreg.lb.wvalid=uartlb.wvalid;
assign uartlb.rcmd=uartreg.lb.rcmd;
//assign uartlb.rctrl=uartreg.lb.rctrl;
//assign uartlb.rdata=uartreg.lb.rdata;
//assign uartlb.raddr=uartreg.lb.raddr;
assign uartlb.rready=uartreg.lb.rready;
//assign uartreg.lb.readcmd=uartlb.readcmd;
//assign uartreg.lb.writecmd=uartlb.writecmd;
assign uartreg.lb.readcmd=uartlb.READCMD;
assign uartreg.lb.writecmd=uartlb.WRITECMD;


wire uarttx;
wire uartrx=hw.vc707.usb2uart.rx;
wire keeplbdataout;
wire keepadc;
assign hw.vc707.usb2uart.tx=uartreg.uartmode==0 ? hw.vc707.usb2uart.rx : uartreg.uartmode==1 ? uarttx : 1'b1; //serial port loopback test
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
wire uartclk=clk100;//cfg;
wire uartreset;
wire idelayctrl_reset;
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
IDELAYCTRL idelayctrl(.RST(idelayctrl_reset),.RDY(idelayctrl_rdy),.REFCLK(hw.vc707.sysclk));

assign uartlb.clk=uartclk;
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
wire i2cresetdone;
wire  dbscl=hw.vc707.iic.scl;
wire [3:0] nack;
wire stopbit;
wire [31:0] i2cdatatx;
wire [31:0] i2cdatarx;
wire i2crxvalid;
wire i2cstart;
wire [2:0] i2cinitdone;
wire [36:0] i2ccmd;
reg [36:0] i2ccmd_r=0;
reg [36:0] i2ccmd_rd=0;
wire [32:0] i2cresult;
wire [2:0] i2cinitreset;
wire si2cinitreset;
wire i2cbusy;
IOBUF sdaiobuf (.IO(hw.vc707.iic.sda),.I(sdatx),.O(sdarx),.T(sdaasrx));
i2cmaster #(.MAXNACK(4),.CLK4RATIO(SIM ? 2 : 2500))
i2cmaster (.clk(clkcfg)
,.sdatx(sdatx)
,.sdarx(sdarx)
,.sdaasrx(sdaasrx)
,.scl(hw.vc707.iic.scl)
,.clk4ratio(SIM ? 2 : uartreg.uarti2c ? uartreg.clk4ratio : lbreg.clk4ratio)
,.nack(nack)//lbreg.i2cstart[3:0])
,.stopbit(stopbit)//lbreg.i2cstart[4])
,.datatx(i2cdatatx)//lbreg.i2cdatatx)
,.datarx(i2cdatarx)//lbreg.i2cdatarx)
,.resetdone(i2cresetdone)
,.start(i2cstart)//lbreg.stb_i2cstart)
,.rxvalid(i2crxvalid)//lbreg.i2crxvalid)
,.rst(i2creset)
,.busy(i2cbusy)
);
assign hw.vc707.iic.mux_reset_b=lbreg.i2cmux_reset_b | uartreg.i2cmux_reset_b | ~&i2cinitdone;
assign {stopbit,nack,i2cdatatx}=i2ccmd;
wire [3:0] dbi2cstate;
wire [3:0] dbi2cnext;
wire dbsi2cinitreset;
`include "i2cinit.vh"
seqinit #(.NSTEP(3),.INITWIDTH(32+4+1),.INITLENGTH(I2CCMDLENGTH/*21*/),.RESULTWIDTH(33)
,.INITCMDS(SIM ? {{1'h1,4'h2,32'he8080000},{1'h0,4'h2,32'ha8000000}} : I2CINITCMD)
/*	{{1'h1,4'h2,32'he8080000}  // read eeprom for mac and ip address
,{1'h0,4'h2,32'ha8000000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8010000}
,{1'h1,4'h2,32'ha9000000}
nn,{1'h0,4'h2,32'ha8020000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8030000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8040000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8050000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8060000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8070000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8080000}
,{1'h1,4'h2,32'ha9000000}
,{1'h0,4'h2,32'ha8090000}
,{1'h1,4'h2,32'ha9000000}
})*/
)
i2cinit(.clk(clkcfg)
,.areset(i2cinitreset)
,.cmd(i2ccmd)
,.resultwire({i2crxvalid,i2cdatarx})
,.start(i2cstart)
,.runing(i2cbusy)//~i2crxvalid)
,.initdone(i2cinitdone)
,.result(i2cresult)
,.livecmd(uartreg.uarti2c ? {uartreg.i2cstart[4],uartreg.i2cstart[3:0],uartreg.i2cdatatx} :	{lbreg.i2cstart[4],lbreg.i2cstart[3:0],lbreg.i2cdatatx})
,.livestart(uartreg.uarti2c ? uartreg.stb_i2cstart :lbreg.stb_i2cstart)
,.dbsreset(dbsi2cinitreset)
,.dbstate(dbi2cstate)
,.dbnext(dbi2cnext)
);
assign {lbreg.i2crxvalid[0],lbreg.i2cdatarx}=uartreg.uarti2c ? 0 : i2cresult;
assign {uartreg.i2crxvalid[0],uartreg.i2cdatarx}=uartreg.uarti2c ? i2cresult : 0;
reg [2:0] i2crxvalid_d=0;
reg [2:0] i2crxvalid_d2=0;
reg [31:0] i2cdatarx_d=0;
reg [48+32:0] eepromrd=0;
reg [7:0] i2cswlocation=0;
reg [2:0] i2cinitdone_d=0;
reg [2:0] i2cinitdone_d2=0;
always @(posedge clkcfg) begin
	i2cinitdone_d<=i2cinitdone;
	i2cinitdone_d2<=i2cinitdone_d;

	{i2crxvalid_d,i2cdatarx_d}<=i2cresult;
	i2crxvalid_d2<=i2crxvalid_d;
	i2ccmd_r<=i2ccmd;
	i2ccmd_rd<=i2ccmd_r;
	if (~(i2cinitdone[1]&i2cinitdone_d2[1]) & i2crxvalid_d & ~i2crxvalid_d2 & (i2cswlocation==8) & i2ccmd_rd[24]) begin
		eepromrd<={eepromrd[80-8-1:0],i2cdatarx_d[7:0]};
	end
	if ((i2ccmd_rd&{1'b1,4'hf,32'hff00ffff})=={1'h1,4'h2,32'he8000000}) begin
	//if ((i2ccmd[31+5:24+5]==8'he8)&&(i2ccmd[15:0]=={16'h0,1'h1,4'h2})) begin
		i2cswlocation<=i2ccmd_rd[23:16];
	end

end
assign {lbreg.macmsb24,lbreg.maclsb24,lbreg.ipaddr}=eepromrd;
assign {uartreg.macmsb24,uartreg.maclsb24,uartreg.ipaddr}=eepromrd;

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
wire uarthwreset_w;
always @(posedge hw.vc707.sysclk) begin
	//hwreset<=lbreg.stb_hwreset;// || poweronreset;
	hwreset<=hwreset_w||uarthwreset_w;// || poweronreset;
end
reg hwresetstb=0;
always @(posedge lbreg.lb.clk) begin
	hwresetstb<=lbreg.stb_hwreset;
end
reg uarthwresetstb=0;
always @(posedge uartreg.lb.clk) begin
	uarthwresetstb<=uartreg.stb_hwreset;
end
areset hwresetareset(.clk(hw.vc707.sysclk),.areset(hwresetstb),.sreset(hwreset_w));
areset uarthwresetareset(.clk(hw.vc707.sysclk),.areset(uarthwresetstb),.sreset(uarthwreset_w));
wire pllreset;
wire qpllresetdone_113;
wire qplloutclk_113;
wire qplloutrefclk_113;
wire qpllpd_113=1'b0;
wire qpllrefclklost_113;
wire qpllreset_113;
//wire [2:0] qpllrefclksel_113=3'h1;
wire [2:0] qpllrefclksel_113=3'h5;
gticc_common
gticc_common_113(.QPLLLOCKDETCLK(hw.vc707.sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
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
assign hw.vc707.sfp.tx_disable=lbreg.sfptxdisable;
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
//,.CPLLREFCLKSEL(3'b1)
,.CPLLREFCLKSEL(3'h5)
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

wire reset_smasfp=reset_sfp;
wire rxusrclk_smasfp;
wire txusrclk_smasfp;
wire [3:0] rxcharisk_smasfp;
wire [31:0] rxdata_smasfp;
assign lbreg.smasfptestrx=rxdata_smasfp;
wire rxuserrdy_smasfp=1'b1;
wire [3:0] txcharisk_smasfp=4'b0;
wire [31:0] txdata_smasfp=lbreg.smasfptesttx;//32'habcdbeef;
wire txuserrdy_smasfp=1'b1;
gticc_gt gticc_gt_smasfp(.CPLLLOCKDETCLK(hw.vc707.sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(sgmiiclk),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(si5324_out_c),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(hw.vc707.sma_mgt_rx_n),.GTXRXP(hw.vc707.sma_mgt_rx_p),.GTXTXN(hw.vc707.sma_mgt_tx_n),.GTXTXP(hw.vc707.sma_mgt_tx_p)
,.QPLLCLK(qplloutclk_113),.QPLLREFCLK(qplloutrefclk_113)
//,.CPLLREFCLKSEL(3'b1)
,.CPLLREFCLKSEL(3'h5)
,.rxusrclk(rxusrclk_smasfp)
,.txusrclk(txusrclk_smasfp)
,.RXCHARISK(rxcharisk_smasfp)
,.RXDATA(rxdata_smasfp)
,.RXUSERRDY(rxuserrdy_smasfp)
,.TXCHARISK(txcharisk_smasfp)
,.TXDATA(txdata_smasfp)
,.TXUSERRDY(txuserrdy_smasfp)
,.reset(reset_smasfp)//||smasfpreconnected)
,.resetdone(resetdone_smasfp)
,.readyforreset(readyforreset_smasfp)
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
sgmii_ethernet_pcs_pma(.gtrefclk(sgmiiclk)
,.rxn(hw.vc707.sgmii_rx_n)
,.rxp(hw.vc707.sgmii_rx_p)
,.txn(hw.vc707.sgmii_tx_n)
,.txp(hw.vc707.sgmii_tx_p)
,.gmii(gmii.phy)
,.independent_clock_bufg(clk125)
,.reset(sgmiieth_reset_s)
,.resetdone(sgmiieth_resetdone)
);

assign clkcfg=gmii.tx_clk;
//assign clkcfg=clk125;//gmii.tx_clk;

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
wire jesdreset0_done;
wire jesdreset1_done;
wire jesd_reset_done_1;//&jesd_reset_done_2;
wire jesdreset0;
wire jesdreset1;
wire axireset;
wire loadmacip;
localparam NSTEP=17;
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] donestrobe;
wire [NSTEP-1:0] error;
wire [NSTEP-1:0] resetout;
wire [NSTEP-1:0] dbresetout;
wire [NSTEP-1:0] donecriteria;
wire [NSTEP-1:0] readycriteria={1'b1,donecriteria[NSTEP-1:1]};
wire [NSTEP-1:0] resetin={hwreset|poweronreset,donestrobe[NSTEP-1:1]};
wire [NSTEP*16-1:0] readylength={NSTEP{16'd20}};
wire [NSTEP*16-1:0] resetlength={NSTEP{16'd20}};
wire [NSTEP*32-1:0] timeout={NSTEP{32'b0}};

wire [2:0] dbchainstate,dbchainnext;
wire dbrising0;
wire [15:0] dbshift;
wire [15:0] dbshiftnext;
chainreset #(.NSTEP(NSTEP))
chainreset(.clk(hw.vc707.sysclk)
,.done,.donecriteria,.donestrobe,.error,.readycriteria,.readylength,.resetin,.resetlength,.resetout,.timeout
,.dbstate(dbchainstate),.dbnext(dbchainnext),.dbrising0(dbrising0),.dbshift(dbshift),.dbshiftnext(dbshiftnext),.dbresetout(dbresetout)
);
wire [NSTEP-2-1:0] dummyready;
assign readyforreset_sfp=qpllresetdone_113;

wire testi2cinitreset;
	//genvar simtest;
	//generate
	//	if (SIM) begin
	//		assign {sysclkmmcm_reset,idelayctrl_reset,qpllreset_113,reset_sfp,sgmiieth_reset,uartreset,uartlbreset,jesdreset0,jesdreset1,i2creset,i2cinitreset[2],i2cinitreset[1],loadmacip,mdioreset,ethreset_w,axireset}=resetout;
	//		assign donecriteria={sysclkmmcm_locked,idelayctrl_rdy,qpllresetdone_113,resetdone_sfp,sgmiieth_resetdone,1'b1,1'b1,jesdreset0_done,jesdreset1_done,i2cresetdone,i2cinitdone[2],i2cinitdone[1],~loadmacip,mdioinitdone,ethresetdone,1'b1};
	//	end
	//	else begin
			assign {sysclkmmcm_reset,idelayctrl_reset,sgmiieth_reset,uartreset,uartlbreset,i2creset,i2cinitreset[2],i2cinitreset[1],loadmacip,mdioreset,ethreset_w,axireset,jesdreset0,jesdreset1,i2cinitreset[0],qpllreset_113,reset_sfp}=resetout;
//			assign {sysclkmmcm_reset,idelayctrl_reset,sgmiieth_reset,uartreset,uartlbreset,i2creset,i2cinitreset[2],testi2cinitreset,loadmacip,mdioreset,ethreset_w,axireset,jesdreset0,jesdreset1,i2cinitreset[0],qpllreset_113,reset_sfp}=resetout;
			assign donecriteria={sysclkmmcm_locked,idelayctrl_rdy,sgmiieth_resetdone,1'b1,1'b1,i2cresetdone,i2cinitdone[2],i2cinitdone[1],~loadmacip,mdioinitdone,ethresetdone,1'b1,jesdreset0_done,jesdreset1_done,i2cinitdone[0],qpllresetdone_113,resetdone_sfp};
	//	end
	//endgenerate

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
data_xdomain #(.size(NSTEP)) donexdomain(.clk_in(hw.vc707.sysclk), .gate_in(1'b1), .data_in(done),
.clk_out(clkcfg),.data_out(done_w));
assign lbreg.hwresetstatus=done_r3;
assign uartreg.hwresetstatus=done_r3;


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

reg [47:0] mac=48'h503eaa059701;
assign keeplbdataout=&lb_data_out;
reg [31:0] ip=32'hc0a801e0;
assign ethclk=gmii.tx_clk;
always @(posedge ethclk) begin
//	mac<=48'h525542494301;//MAC;//48'haabbccddeeff;
//	mac<=48'h001924515501;  // LBNL oui
	if (loadmacip)
		{mac,ip}<=hw.vc707.gpio_sw_c ? {48'h503eaa059701,32'hc0a801e0} : eepromrd;  // TPLINK OUI
//	ip<=hw.gpio_sw_c ? : ;  // 192.168.1.224
// new:	50:3e:aa:05:96:50
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
udpstatic(.clk(ethclk),.udp(ifudpportd001),.reset(ethreset),.staticnbyte(16'd1472));
udpcnt #(.PORT(16'hd002))
udpcnt(.clk(ethclk),.udp(ifudpportd002),.reset(ethreset),.udprxerr(udprxerr),.countperrequest(lbreg.countperrequest));
wire [15:0] txlength;
wire [15:0] rxlength;
udplb64 #(.PORT(16'hd003))
udplb64 (.clk(ethclk),.udp(ifudpportd003),.reset(ethreset)//~sgmiieth_resetdone)
,.lbclk(udplb.clk)
,.lbrxdata(udplb.wcmd)
,.lbrxdv(udplb.wvalid)
,.lbtxdata(udplb.rcmd)
,.lbtxen(udplb.rready)
,.lbrxen(udplb.wen)
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
assign keepadc=|{adc0,adc1,adc2,adc3,adc4,adc5,adc6,adc7};
wire  rx_reset=jesdreset1;//1'b0;
wire  tx_reset=jesdreset1;//1'b0;
wire  rx_sys_reset=jesdreset0;//1'b0;
wire  tx_sys_reset=jesdreset0;//1'b0;
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
wire [3:0] jesd_reset_status_1;
wire [3:0] jesd_reset_status_2;
wire adc01_valid;
wire adc23_valid;
wire fmc1_tx_tready;
wire common0_qpll_lock_out_1;
wire common1_qpll_lock_out_2;
wire rxencommaalign_0;
wire rxencommaalign_1;
reg [1:0] rxencommaalign;
always @(posedge clkcfg) begin
	rxencommaalign<={rxencommaalign_0,rxencommaalign_1};
end
reg [31:0] dbgt0_rxdata_r=0, dbgt0_txdata_r=0, dbgt1_rxdata_r=0, dbgt1_txdata_r=0, dbgt2_rxdata_r=0, dbgt2_txdata_r=0, dbgt3_rxdata_r=0, dbgt3_txdata_r=0, dbgt4_rxdata_r=0, dbgt4_txdata_r=0, dbgt5_rxdata_r=0, dbgt5_txdata_r=0, dbgt6_rxdata_r=0, dbgt6_txdata_r=0, dbgt7_rxdata_r=0, dbgt7_txdata_r=0;
wire [31:0] dbgt0_rxdata, dbgt0_txdata, dbgt1_rxdata, dbgt1_txdata, dbgt2_rxdata, dbgt2_txdata, dbgt3_rxdata, dbgt3_txdata, dbgt4_rxdata, dbgt4_txdata, dbgt5_rxdata, dbgt5_txdata, dbgt6_rxdata, dbgt6_txdata, dbgt7_rxdata, dbgt7_txdata;
always @(posedge hw.fmc1.llmk_dclkout_2) begin
	{dbgt0_rxdata_r, dbgt0_txdata_r, dbgt1_rxdata_r, dbgt1_txdata_r, dbgt2_rxdata_r, dbgt2_txdata_r, dbgt3_rxdata_r, dbgt3_txdata_r, dbgt4_rxdata_r, dbgt4_txdata_r, dbgt5_rxdata_r, dbgt5_txdata_r, dbgt6_rxdata_r, dbgt6_txdata_r, dbgt7_rxdata_r, dbgt7_txdata_r}<={dbgt0_rxdata, dbgt0_txdata, dbgt1_rxdata, dbgt1_txdata, dbgt2_rxdata, dbgt2_txdata, dbgt3_rxdata, dbgt3_txdata, dbgt4_rxdata, dbgt4_txdata, dbgt5_rxdata, dbgt5_txdata, dbgt6_rxdata, dbgt6_txdata, dbgt7_rxdata, dbgt7_txdata};
end
wire [1:0] rx_sync_1;
wire [1:0] rx_sync_2;
assign {hw.fmc1__adca_sync_in_l_vadj,hw.fmc1__adcb_sync_in_l_vadj}=rx_sync_1;
assign {hw.fmc2__adca_sync_in_l_vadj,hw.fmc2__adcb_sync_in_l_vadj}=rx_sync_2;

jesdfmc120 jesdfmc120_1(.core_clk(hw.fmc1.llmk_dclkout_2)
,.drpclk(clkcfg)
,.qpll_refclk(hw.fmc1.lmk_dclk8_m2c_to_fpga)
,.rxn_in({hw.fmc1__adc1_db2_n,hw.fmc1__adc1_db1_n,hw.fmc1__adc1_da2_n,hw.fmc1__adc1_da1_n,hw.fmc1__adc0_db2_n,hw.fmc1__adc0_db1_n,hw.fmc1__adc0_da2_n,hw.fmc1__adc0_da1_n})
,.rxp_in({hw.fmc1__adc1_db2_p,hw.fmc1__adc1_db1_p,hw.fmc1__adc1_da2_p,hw.fmc1__adc1_da1_p,hw.fmc1__adc0_db2_p,hw.fmc1__adc0_db1_p,hw.fmc1__adc0_da2_p,hw.fmc1__adc0_da1_p})
,.tx_sysref(hw.fmc1.llmk_sclkout_3)
,.rx_sysref(hw.fmc1.llmk_sclkout_3)
,.txn_out(hw.fmc1__dac_lane_n)
,.txp_out(hw.fmc1__dac_lane_p)
,.axi_adc0(axi_fmc1_adc0)
,.axi_adc1(axi_fmc1_adc1)
,.axi_dac(axi_fmc1_dac)
,.rx_reset(rx_reset)
,.tx_reset(tx_reset)
,.rx_sys_reset(rx_sys_reset)
,.tx_sys_reset(tx_sys_reset)
,.rx_sync(rx_sync_1)
,.tx_sync(hw.fmc1.dac_sync_req_to_fpga)
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
,.tx_tready(fmc1_tx_tready)
,.adc01_valid(adc01_valid)
,.adc23_valid(adc23_valid)
,.common0_qpll_lock_out(common0_qpll_lock_out_1)
,.common1_qpll_lock_out(common1_qpll_lock_out_2)
,.reset_done(jesd_reset_done_1)
,.reset_status(jesd_reset_status_1)
,.rxencommaalign_0(rxencommaalign_0)
,.rxencommaalign_1(rxencommaalign_1)
,.dbgt0_rxdata
,.dbgt0_txdata
,.dbgt1_rxdata
,.dbgt1_txdata
,.dbgt2_rxdata
,.dbgt2_txdata
,.dbgt3_rxdata
,.dbgt3_txdata
,.dbgt4_rxdata
,.dbgt4_txdata
,.dbgt5_rxdata
,.dbgt5_txdata
,.dbgt6_rxdata
,.dbgt6_txdata
,.dbgt7_rxdata
,.dbgt7_txdata
);
assign jesdreset0_done=common0_qpll_lock_out_1& common1_qpll_lock_out_2;
assign jesdreset1_done=&{jesd_reset_done_1};
//wire [7:0] dbfmc1rx={hw.fmc1.adc1_db2_p,hw.fmc1.adc1_db1_p,hw.fmc1.adc1_da2_p,hw.fmc1.adc1_da1_p,hw.fmc1.adc0_db2_p,hw.fmc1.adc0_db1_p,hw.fmc1.adc0_da2_p,hw.fmc1.adc0_da1_p};
//wire [7:0] dbfmc1tx=hw.fmc1.dac_lane_p;
//wire [7:0] dbfmc2rx={hw.fmc2.adc1_db2_p,hw.fmc2.adc1_db1_p,hw.fmc2.adc1_da2_p,hw.fmc2.adc1_da1_p,hw.fmc2.adc0_db2_p,hw.fmc2.adc0_db1_p,hw.fmc2.adc0_da2_p,hw.fmc2.adc0_da1_p};
//wire [7:0] dbfmc2tx=hw.fmc2.dac_lane_p;
jesdfmc120 jesdfmc120_2(.core_clk(hw.fmc1.llmk_dclkout_2)
,.drpclk(clkcfg)
,.qpll_refclk(hw.fmc2.lmk_dclk8_m2c_to_fpga)
//,.rxn_in(8'h0)
//,.rxp_in(8'hff)
,.rxn_in({hw.fmc2__adc1_db2_n,hw.fmc2__adc1_db1_n,hw.fmc2__adc1_da2_n,hw.fmc2__adc1_da1_n,hw.fmc2__adc0_db2_n,hw.fmc2__adc0_db1_n,hw.fmc2__adc0_da2_n,hw.fmc2__adc0_da1_n})
,.rxp_in({hw.fmc2__adc1_db2_p,hw.fmc2__adc1_db1_p,hw.fmc2__adc1_da2_p,hw.fmc2__adc1_da1_p,hw.fmc2__adc0_db2_p,hw.fmc2__adc0_db1_p,hw.fmc2__adc0_da2_p,hw.fmc2__adc0_da1_p})
,.tx_sysref(hw.fmc2.llmk_sclkout_3)
,.rx_sysref(hw.fmc2.llmk_sclkout_3)
,.txn_out(hw.fmc2__dac_lane_n)
,.txp_out(hw.fmc2__dac_lane_p)
,.axi_adc0(axi_fmc2_adc0)
,.axi_adc1(axi_fmc2_adc1)
,.axi_dac(axi_fmc2_dac)
,.rx_reset(rx_reset)
,.tx_reset(tx_reset)
,.rx_sys_reset(rx_sys_reset)
,.tx_sys_reset(tx_sys_reset)
,.rx_sync(rx_sync_2)//{hw.fmc2__adca_sync_in_l_vadj,hw.fmc2__adcb_sync_in_l_vadj})
,.tx_sync(hw.fmc2.dac_sync_req_to_fpga)
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
,.reset_done(jesd_reset_done_2)
,.reset_status(jesd_reset_status_2)
);

reg [31:0] dclkcnt=0;
always @(posedge hw.fmc1.llmk_dclkout_2) begin
	dclkcnt<=dclkcnt+1;
end
wire sclk=dclkcnt[lbreg.sclkdclkdiv];
assign hw.fmc1.fpga_sync_out_to_trigmux=sclk;//dclkcnt[6];
assign hw.fmc2.fpga_sync_out_to_trigmux=sclk;//dclkcnt[6];
OBUFDS obufds_user_sma_clk(.I(sclk),.O(hw.vc707.user_sma_clock_p),.OB(hw.vc707.user_sma_clock_n));
OBUFDS obufds_user_sma_gpio(.I(sclk),.O(hw.vc707.user_sma_gpio_p),.OB(hw.vc707.user_sma_gpio_n));
OBUFDS obufds_rec_clk(.I(hw.fmc2.lmk_dclk10_m2c_to_fpga),.O(hw.vc707.rec_clock_c_p),.OB(hw.vc707.rec_clock_c_n));

assign hw.vc707.si5324_rst=lbreg.si5324_rst;

localparam NFCNT = 17;
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
,lbreg.freq_clkcfg
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
,clkcfg
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
/*assign lbreg.adc0buf.wclk=hw.fmc1.llmk_dclkout_2;
assign lbreg.adc0buf.wren=1'b1;
assign lbreg.adc0buf.wrdata=adc0;
areset areset_adc0bufreset(.clk(hw.fmc1.llmk_dclkout_2),.areset(lbreg.stb_adc0bufreset),.sreset(lbreg.adc0buf.reset));
assign lbreg.adc0buffull=lbreg.adc0buf.full;
*/
/*ibufio #(.DW(32),.AW(10)) bufreadtestrdif();
assign bufreadtestrdif.clk=udplb.clk;
assign lbreg.bufreadtestrdif__data=bufreadtestrdif.data;
assign bufreadtestrdif.en=lbreg.stb_bufreadtestrdif;
assign bufreadtestrdif.addr=lbreg.bufreadtestrdif__addr;
ibufio #(.DW(32),.AW(10)) bufreadtestwrif();
assign bufreadtestwrif.clk=clk250;
assign bufreadtestwrif.data=clk250cnt;
assign bufreadtestwrif.en=1'b1;
*/
bufread #(.AWW(10)
,.DWW(32)
,.DWR(32)) bufreadtest(.wclk(clk250)
,.rclk(udplb.clk)
,.wdata(clk250cnt)
,.waddr(0)
,.wen(1'b1)
,.ren(lbreg.bufreadtest__en)
,.raddr(lbreg.bufreadtest__addr)
,.rdata(lbreg.bufreadtest__data)
,.full(lbreg.bufreadtestfull)
,.reset(lbreg.stb_bufreadtestreset));

bufread #(.AWW(10)
,.DWW(32)
,.DWR(32)) adc0buf(.wclk(hw.fmc1.llmk_dclkout_2)
,.rclk(udplb.clk)
,.wdata(adc0)
,.waddr(0)
,.wen(1'b1)
,.ren(lbreg.adc0buf__en)
,.raddr(lbreg.adc0buf__addr)
,.rdata(lbreg.adc0buf__data)
,.full(lbreg.adc0buffull)
,.reset(lbreg.stb_adc0bufreset));


assign dsp.clk=hw.fmc1.llmk_dclkout_2;;
/*reg [16:0] phacc=0;
reg [15:0] amp=0;
always @(posedge hw.fmc1.llmk_dclkout_2) begin
	phacc<=phacc+lbreg.dacfreq;
	amp<=lbreg.dacamp;
end
wire [15:0] x16,y16;
cordicg1 #(.WIDTH(16),.NSTAGE(16),.NORMALIZE(1),.BUFIN(0),.GW(1),.NRIDER(0))
cordicg1(.clk(hw.fmc1.llmk_dclkout_2),.opin(1'b0),.xin(amp),.yin(16'h0),.phasein(phacc),.xout(x16),.yout(y16),.phaseout(),.error(),.gin(1'b1),.gout());
*/
wire signed [15:0] x01_0,x01_1,x01_2,x01_3,x01_4,x01_5,x01_6,x01_7;
wire signed [15:0] x23_0,x23_1,x23_2,x23_3,x23_4,x23_5,x23_6,x23_7;
wire signed [15:0] x45_0,x45_1,x45_2,x45_3,x45_4,x45_5,x45_6,x45_7;
wire signed [15:0] x67_0,x67_1,x67_2,x67_3,x67_4,x67_5,x67_6,x67_7;
wire signed [15:0] y01_0,y01_1,y01_2,y01_3,y01_4,y01_5,y01_6,y01_7;
wire signed [15:0] y23_0,y23_1,y23_2,y23_3,y23_4,y23_5,y23_6,y23_7;
wire signed [15:0] y45_0,y45_1,y45_2,y45_3,y45_4,y45_5,y45_6,y45_7;
wire signed [15:0] y67_0,y67_1,y67_2,y67_3,y67_4,y67_5,y67_6,y67_7;
wire signed [15:0] x01,y01,x23,y23,x45,y45,x67,y67;
reg signed [15:0] x01add1=0,x01add2=0,x01add3=0;
reg signed [15:0] x23add1=0,x23add2=0,x23add3=0;
reg signed [15:0] x45add1=0,x45add2=0,x45add3=0;
reg signed [15:0] x67add1=0,x67add2=0,x67add3=0;
reg signed [15:0] y01add1=0,y01add2=0,y01add3=0;
reg signed [15:0] y23add1=0,y23add2=0,y23add3=0;
reg signed [15:0] y45add1=0,y45add2=0,y45add3=0;
reg signed [15:0] y67add1=0,y67add2=0,y67add3=0;
always @(posedge dsp.clk) begin
	x01add1<=x01_0+x01_1+x01_2+x01_3;	x01add2<=x01_4+x01_5+x01_6+x01_7; x01add3=x01add1+x01add2;
	x23add1<=x23_0+x23_1+x23_2+x23_3;	x23add2<=x23_4+x23_5+x23_6+x23_7; x23add3=x23add1+x23add2;
	x45add1<=x45_0+x45_1+x45_2+x45_3;	x45add2<=x45_4+x45_5+x45_6+x45_7; x45add3=x45add1+x45add2;
	x67add1<=x67_0+x67_1+x67_2+x67_3;	x67add2<=x67_4+x67_5+x67_6+x67_7; x67add3=x67add1+x67add2;
	y01add1<=y01_0+y01_1+y01_2+y01_3;	y01add2<=y01_4+y01_5+y01_6+y01_7; y01add3=y01add1+y01add2;
	y23add1<=y23_0+y23_1+y23_2+y23_3;	y23add2<=y23_4+y23_5+y23_6+y23_7; y23add3=y23add1+y23add2;
	y45add1<=y45_0+y45_1+y45_2+y45_3;	y45add2<=y45_4+y45_5+y45_6+y45_7; y45add3=y45add1+y45add2;
	y67add1<=y67_0+y67_1+y67_2+y67_3;	y67add2<=y67_4+y67_5+y67_6+y67_7; y67add3=y67add1+y67add2;
end
assign x01=x01add3;
assign x23=x23add3;
assign x45=x45add3;
assign x67=x67add3;
assign y01=y01add3;
assign y23=y23add3;
assign y45=y45add3;
assign y67=y67add3;
assign dac0={x01,x01,x01,x01};
assign dac1={y01,y01,y01,y01};
assign dac2={x23,x23,x23,x23};
assign dac3={y23,y23,y23,y23};
assign dac4={x45,x45,x45,x45};
assign dac5={y45,y45,y45,y45};
assign dac6={x67,x67,x67,x67};
assign dac7={y67,y67,y67,y67};

wire reset01=|{lbreg.stb_dac01_0freq,lbreg.stb_dac01_1freq,lbreg.stb_dac01_2freq,lbreg.stb_dac01_3freq,lbreg.stb_dac01_4freq,lbreg.stb_dac01_5freq,lbreg.stb_dac01_6freq,lbreg.stb_dac01_7freq};
wire reset23=|{lbreg.stb_dac23_0freq,lbreg.stb_dac23_1freq,lbreg.stb_dac23_2freq,lbreg.stb_dac23_3freq,lbreg.stb_dac23_4freq,lbreg.stb_dac23_5freq,lbreg.stb_dac23_6freq,lbreg.stb_dac23_7freq};
wire reset45=|{lbreg.stb_dac45_0freq,lbreg.stb_dac45_1freq,lbreg.stb_dac45_2freq,lbreg.stb_dac45_3freq,lbreg.stb_dac45_4freq,lbreg.stb_dac45_5freq,lbreg.stb_dac45_6freq,lbreg.stb_dac45_7freq};
wire reset67=|{lbreg.stb_dac67_0freq,lbreg.stb_dac67_1freq,lbreg.stb_dac67_2freq,lbreg.stb_dac67_3freq,lbreg.stb_dac67_4freq,lbreg.stb_dac67_5freq,lbreg.stb_dac67_6freq,lbreg.stb_dac67_7freq};

dlo dlo01_0(.reset(reset01),.amp(lbreg.dac01_0amp),.clk(dsp.clk),.freq(lbreg.dac01_0freq),.xout(x01_0),.yout(y01_0));
/*dlo dlo01_1(.reset(reset01),.amp(lbreg.dac01_1amp),.clk(dsp.clk),.freq(lbreg.dac01_1freq),.xout(x01_1),.yout(y01_1));
dlo dlo01_2(.reset(reset01),.amp(lbreg.dac01_2amp),.clk(dsp.clk),.freq(lbreg.dac01_2freq),.xout(x01_2),.yout(y01_2));
dlo dlo01_3(.reset(reset01),.amp(lbreg.dac01_3amp),.clk(dsp.clk),.freq(lbreg.dac01_3freq),.xout(x01_3),.yout(y01_3));
dlo dlo01_4(.reset(reset01),.amp(lbreg.dac01_4amp),.clk(dsp.clk),.freq(lbreg.dac01_4freq),.xout(x01_4),.yout(y01_4));
dlo dlo01_5(.reset(reset01),.amp(lbreg.dac01_5amp),.clk(dsp.clk),.freq(lbreg.dac01_5freq),.xout(x01_5),.yout(y01_5));
dlo dlo01_6(.reset(reset01),.amp(lbreg.dac01_6amp),.clk(dsp.clk),.freq(lbreg.dac01_6freq),.xout(x01_6),.yout(y01_6));
dlo dlo01_7(.reset(reset01),.amp(lbreg.dac01_7amp),.clk(dsp.clk),.freq(lbreg.dac01_7freq),.xout(x01_7),.yout(y01_7));
dlo dlo23_0(.reset(reset23),.amp(lbreg.dac23_0amp),.clk(dsp.clk),.freq(lbreg.dac23_0freq),.xout(x23_0),.yout(y23_0));
dlo dlo23_1(.reset(reset23),.amp(lbreg.dac23_1amp),.clk(dsp.clk),.freq(lbreg.dac23_1freq),.xout(x23_1),.yout(y23_1));
dlo dlo23_2(.reset(reset23),.amp(lbreg.dac23_2amp),.clk(dsp.clk),.freq(lbreg.dac23_2freq),.xout(x23_2),.yout(y23_2));
dlo dlo23_3(.reset(reset23),.amp(lbreg.dac23_3amp),.clk(dsp.clk),.freq(lbreg.dac23_3freq),.xout(x23_3),.yout(y23_3));
dlo dlo23_4(.reset(reset23),.amp(lbreg.dac23_4amp),.clk(dsp.clk),.freq(lbreg.dac23_4freq),.xout(x23_4),.yout(y23_4));
dlo dlo23_5(.reset(reset23),.amp(lbreg.dac23_5amp),.clk(dsp.clk),.freq(lbreg.dac23_5freq),.xout(x23_5),.yout(y23_5));
dlo dlo23_6(.reset(reset23),.amp(lbreg.dac23_6amp),.clk(dsp.clk),.freq(lbreg.dac23_6freq),.xout(x23_6),.yout(y23_6));
dlo dlo23_7(.reset(reset23),.amp(lbreg.dac23_7amp),.clk(dsp.clk),.freq(lbreg.dac23_7freq),.xout(x23_7),.yout(y23_7));
dlo dlo45_0(.reset(reset45),.amp(lbreg.dac45_0amp),.clk(dsp.clk),.freq(lbreg.dac45_0freq),.xout(x45_0),.yout(y45_0));
dlo dlo45_1(.reset(reset45),.amp(lbreg.dac45_1amp),.clk(dsp.clk),.freq(lbreg.dac45_1freq),.xout(x45_1),.yout(y45_1));
dlo dlo45_2(.reset(reset45),.amp(lbreg.dac45_2amp),.clk(dsp.clk),.freq(lbreg.dac45_2freq),.xout(x45_2),.yout(y45_2));
dlo dlo45_3(.reset(reset45),.amp(lbreg.dac45_3amp),.clk(dsp.clk),.freq(lbreg.dac45_3freq),.xout(x45_3),.yout(y45_3));
dlo dlo45_4(.reset(reset45),.amp(lbreg.dac45_4amp),.clk(dsp.clk),.freq(lbreg.dac45_4freq),.xout(x45_4),.yout(y45_4));
dlo dlo45_5(.reset(reset45),.amp(lbreg.dac45_5amp),.clk(dsp.clk),.freq(lbreg.dac45_5freq),.xout(x45_5),.yout(y45_5));
dlo dlo45_6(.reset(reset45),.amp(lbreg.dac45_6amp),.clk(dsp.clk),.freq(lbreg.dac45_6freq),.xout(x45_6),.yout(y45_6));
dlo dlo45_7(.reset(reset45),.amp(lbreg.dac45_7amp),.clk(dsp.clk),.freq(lbreg.dac45_7freq),.xout(x45_7),.yout(y45_7));
dlo dlo67_0(.reset(reset67),.amp(lbreg.dac67_0amp),.clk(dsp.clk),.freq(lbreg.dac67_0freq),.xout(x67_0),.yout(y67_0));
dlo dlo67_1(.reset(reset67),.amp(lbreg.dac67_1amp),.clk(dsp.clk),.freq(lbreg.dac67_1freq),.xout(x67_1),.yout(y67_1));
dlo dlo67_2(.reset(reset67),.amp(lbreg.dac67_2amp),.clk(dsp.clk),.freq(lbreg.dac67_2freq),.xout(x67_2),.yout(y67_2));
dlo dlo67_3(.reset(reset67),.amp(lbreg.dac67_3amp),.clk(dsp.clk),.freq(lbreg.dac67_3freq),.xout(x67_3),.yout(y67_3));
dlo dlo67_4(.reset(reset67),.amp(lbreg.dac67_4amp),.clk(dsp.clk),.freq(lbreg.dac67_4freq),.xout(x67_4),.yout(y67_4));
dlo dlo67_5(.reset(reset67),.amp(lbreg.dac67_5amp),.clk(dsp.clk),.freq(lbreg.dac67_5freq),.xout(x67_5),.yout(y67_5));
dlo dlo67_6(.reset(reset67),.amp(lbreg.dac67_6amp),.clk(dsp.clk),.freq(lbreg.dac67_6freq),.xout(x67_6),.yout(y67_6));
dlo dlo67_7(.reset(reset67),.amp(lbreg.dac67_7amp),.clk(dsp.clk),.freq(lbreg.dac67_7freq),.xout(x67_7),.yout(y67_7));
*/

//bufread #(.AWW(10),.DWW(32),.DWR(32)) adc0buf(.full(lbreg.adc0buffull),.reset(lbreg.stb_adc0bufreset),.rd(lbreg.adc0bufrdif.source),.wr(adc0bufwrif.destin));

//`include "ilaadcauto.vh"
//`include "ila125auto.vh"
//`include "ilaauto.vh"

endmodule
