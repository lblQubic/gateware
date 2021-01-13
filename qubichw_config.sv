module qubichw_config #(parameter DEBUG="false",parameter BAUD=9600,parameter SIM=0)
(hw hw
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

localparam POWERONRESET=SIM ? 10 : 100000000;
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

ilocalbus #(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32),.WRITECMD(1),.READCMD(8'h0))
uartlb();
ilocalbus #(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32),.WRITECMD(0),.READCMD(8'h10))
udplb();
assign lbreg.lb.clk=udplb.clk;
assign lbreg.lb.wcmd=udplb.wcmd;
assign lbreg.lb.wvalid=udplb.wvalid;
assign udplb.rctrl=lbreg.lb.rctrl;
assign udplb.rdata=lbreg.lb.rdata;
assign udplb.raddr=lbreg.lb.raddr;
assign udplb.rready=lbreg.lb.rready;
assign lbreg.lb.readcmd=udplb.READCMD;
assign lbreg.lb.writecmd=udplb.WRITECMD;
assign udplb.wen=lbreg.lb.wen;
iuart_regmap#(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32))
uartreg();
assign uartreg.lb.clk=uartlb.clk;
assign uartreg.lb.wcmd=uartlb.wcmd;
assign uartreg.lb.wvalid=uartlb.wvalid;
assign uartlb.rcmd=uartreg.lb.rcmd;
assign uartlb.rready=uartreg.lb.rready;
assign uartreg.lb.readcmd=uartlb.READCMD;
assign uartreg.lb.writecmd=uartlb.WRITECMD;


wire uarttx;
wire uartrx=hw.vc707.usb2uart.rx;
wire keeplbdataout;
wire keepadc;
assign hw.vc707.usb2uart.tx=uartreg.uartmode==0 ? hw.vc707.usb2uart.rx : uartreg.uartmode==1 ? uarttx : 1'b1; //serial port loopback test
assign {hw.vc707.gpio_led_7,hw.vc707.gpio_led_6,hw.vc707.gpio_led_5,hw.vc707.gpio_led_4,hw.vc707.gpio_led_3,hw.vc707.gpio_led_2,hw.vc707.gpio_led_1,hw.vc707.gpio_led_0}={keepadc,keeplbdataout,clk200cnt[26:21]};
wire [7:0] rxdata;
wire [7:0] txdata;
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
wire dbresetcmd;
uart #(.DWIDTH(8),.NSTOP(1),.UARTCLK(100000000),.BAUD(BAUD))
uart (.clk(uartclk),.TX(uarttx),.RX(uartrx),.rst(uartreset),.txdata(txdata),.txstart(txstart),.rxdata(rxdata),.rxvalid(rxvalid),.txready(txready));
wire uartlbreset;
uartlb #(.UARTDWIDTH(8),.LBWIDTH(64))
uartlb64 (.clk(uartclk),.areset(uartlbreset),.fromuartdata(rxdata),.fromuartvalid(rxvalid),.touartdata(txdata),.touartready(txready),.touartstart(txstart),.lbrcmd(uartlb.rcmd),.lbrready(uartlb.rready),.lbwcmd(uartlb.wcmd),.lbwvalid(uartlb.wvalid)
,.dbresetcmd(dbresetcmd)
);

wire idelayctrl_rdy;
IDELAYCTRL idelayctrl(.RST(idelayctrl_reset),.RDY(idelayctrl_rdy),.REFCLK(hw.vc707.sysclk));

assign uartlb.clk=uartclk;
assign lbreg.fmcprsnt={hw.fmc2.prsnt,hw.fmc1.prsnt};
assign lbreg.fmcpgm2c={hw.fmc2.pg_m2c,hw.fmc1.pg_m2c};
assign {hw.fmc2.dac_txen_vadj,hw.fmc1.dac_txen_vadj}=lbreg.fmcdacen;
reg [31:0] i2cdatarx_r=0;
wire [31:0] i2cdatarx_w;
reg [31:0] i2cdatarx_wd;
wire sdatx;
wire sdarx;
wire scl=hw.vc707.iic.scl;
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
wire [3:0] i2cinitdone;
wire [36:0] i2ccmd;
wire [36:0] fmci2ccmd;
reg [36:0] i2ccmd_r=0;
reg [36:0] i2ccmd_rd=0;
reg [32:0] i2cresult=0;
wire [3:0] i2cinitreset;
reg [3:0] i2cinitreset_d=0;
reg i2creset_d=0;
always @(posedge hw.vc707.sysclk) begin
	i2cinitreset_d<=i2cinitreset;
	i2creset_d<=i2creset;
end
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
,.nack(nack)
,.stopbit(stopbit)
,.datatx(i2cdatatx)
,.start(i2cstart)
,.datarx(i2cdatarx)
,.rxvalid(i2crxvalid)
,.resetdone(i2cresetdone)
,.rst(i2creset)
,.busy(i2cbusy)
);
wire [36:0] cfgi2ccmd=0;
wire i2cinitstart;
wire fmci2cbusy;
wire [31:0] fmci2cdatatx;
wire [3:0] fmci2cnack;
wire fmci2creset;
wire fmci2crunning;
wire [27:0] fmci2cdevcmd_2;
wire [27:0] fmci2cdevcmd_3;
wire fmci2cstb_devcmd_2;
wire fmci2cstb_devcmd_3;
wire [27:0] fmci2cdevcmd_1;
wire fmci2cstb_devcmd_1;
wire [27:0] fmci2cdevcmd=~i2cinitdone[1] ? fmci2cdevcmd_1 : (~i2cinitdone[2]) ? fmci2cdevcmd_2 : (~i2cinitdone[3]) ? fmci2cdevcmd_3 :0;
wire fmci2cstb_devcmd=~i2cinitdone[1] ? fmci2cstb_devcmd_1 : (~i2cinitdone[2]) ? fmci2cstb_devcmd_2 : (~i2cinitdone[3]) ? fmci2cstb_devcmd_3:0;
wire fmci2cstart;
wire fmci2cstopbit;
assign hw.vc707.iic.mux_reset_b=lbreg.i2cmux_reset_b | uartreg.i2cmux_reset_b | ~&i2cinitdone;
assign {i2cstart,stopbit,nack,i2cdatatx}=~i2cinitdone[0] ? {i2cinitstart,i2ccmd} :
	(~i2cinitdone[1])|(~i2cinitdone[2])|(~i2cinitdone[3]) ? {fmci2cstart,fmci2ccmd} :
	uartreg.uarti2c ? {uartreg.stb_i2cstart,uartreg.i2cstart[4],uartreg.i2cstart[3:0],uartreg.i2cdatatx} :
	lbreg.lbi2c ?    {lbreg.stb_i2cstart,lbreg.i2cstart[4],lbreg.i2cstart[3:0],lbreg.i2cdatatx} :
	cfgi2ccmd;
wire [3:0] dbi2cstate;
wire [3:0] dbi2cnext;
wire dbsi2cinitreset;
`include "i2cinit.vh"

//seqinit #(.NSTEP(3),.INITWIDTH(32+4+1),.INITLENGTH(I2CCMDLENGTH/*21*/),.RESULTWIDTH(33)
seqinit #(.INITWIDTH(32+4+1),.INITLENGTH(I2CCMDLENGTH),.RESULTWIDTH(33)
,.INITCMDS(I2CINITCMD)//SIM ? {{1'h1,4'h2,32'he8080000},{1'h0,4'h2,32'ha8000000}} : //I2CINITCMD)
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
,.areset(i2cinitreset[0])
,.cmd(i2ccmd)
//,.resultwire({i2crxvalid,i2cdatarx})
,.start(i2cinitstart)
,.runing(i2cbusy)//~i2crxvalid)
,.initdone(i2cinitdone[0])
//,.result(i2cresult)
//,.livecmd(uartreg.uarti2c ? {uartreg.i2cstart[4],uartreg.i2cstart[3:0],uartreg.i2cdatatx} :	{lbreg.i2cstart[4],lbreg.i2cstart[3:0],lbreg.i2cdatatx})
//,.livestart(uartreg.uarti2c ? uartreg.stb_i2cstart :lbreg.stb_i2cstart)
,.dbsreset(dbsi2cinitreset)
,.dbstate(dbi2cstate)
,.dbnext(dbi2cnext)
);
assign {lbreg.i2crxvalid[0],lbreg.i2cdatarx}=uartreg.uarti2c ? 0 : i2cresult;
assign {uartreg.i2crxvalid[0],uartreg.i2cdatarx}=uartreg.uarti2c ? i2cresult : 0;
reg [2:0] i2crxvalid_d=0;
reg [2:0] i2crxvalid_d2=0;
reg [31:0] i2cdatarx_d=0;
reg [48+32-1:0] eepromrd=0;
reg [7:0] i2cswlocation=0;
reg [3:0] i2cinitdone_d=0;
reg [3:0] i2cinitdone_d2=0;
reg [31:0] i2cdatatx_d=0;
wire [7:0] l=i2cdatatx_d[31:24];
wire [7:0] r={7'h74,1'h1};
wire [7:0] c=i2cdatatx_d[23:16];
wire loadeeprom=(~(i2cinitdone[0]&i2cinitdone_d2[0]) & i2crxvalid_d & ~i2crxvalid_d2 & (i2cswlocation==8) & i2ccmd_rd[24]);
always @(posedge clkcfg) begin
	i2cresult<={i2crxvalid,i2cdatarx};
	i2cinitdone_d<=i2cinitdone;
	i2cinitdone_d2<=i2cinitdone_d;
	i2cdatatx_d<=i2cdatatx;

	{i2crxvalid_d,i2cdatarx_d}<=i2cresult;
	i2crxvalid_d2<=i2crxvalid_d;
	i2ccmd_r<=i2ccmd;
	i2ccmd_rd<=i2ccmd_r;
	if (loadeeprom) begin
		eepromrd<={eepromrd[80-8-1:0],i2cdatarx_d[7:0]};
	end
	if (i2cdatatx_d[31:24]=={7'h74,1'h0}) begin
		i2cswlocation<=i2cdatatx_d[23:16];
	end
//	if ((i2ccmd_rd&{1'b1,4'hf,32'hff00ffff})=={1'h1,4'h2,32'he8000000}) begin
	//if ((i2ccmd[31+5:24+5]==8'he8)&&(i2ccmd[15:0]=={16'h0,1'h1,4'h2})) begin
//		i2cswlocation<=i2ccmd_rd[23:16];
//	end

end
assign {lbreg.macmsb24,lbreg.maclsb24,lbreg.ipaddr}=eepromrd;
assign {uartreg.macmsb24,uartreg.maclsb24,uartreg.ipaddr}=eepromrd;

seqinit #(.INITWIDTH(28),.INITLENGTH(INITDACLEN),.INITCMDS(INITDAC))
fmcdacinit(.clk(clkcfg)
,.areset(i2cinitreset[2])
,.cmd(fmci2cdevcmd_2)
,.start(fmci2cstb_devcmd_2)
,.runing(fmci2cbusy)
,.initdone(i2cinitdone[2])
);
seqinit #(.INITWIDTH(28),.INITLENGTH(INITDAC2LEN),.INITCMDS(INITDAC2))
fmcdac2init(.clk(clkcfg)
,.areset(i2cinitreset[3])
,.cmd(fmci2cdevcmd_3)
,.start(fmci2cstb_devcmd_3)
,.runing(fmci2cbusy)
,.initdone(i2cinitdone[3])
);
seqinit #(.INITWIDTH(28),.INITLENGTH(INITLMKADCLEN),.INITCMDS(INITLMKADC))
fmclmkadcinit(.clk(clkcfg)
,.areset(i2cinitreset[1])
,.cmd(fmci2cdevcmd_1)
,.start(fmci2cstb_devcmd_1)
,.runing(fmci2cbusy)
,.initdone(i2cinitdone[1])
);

fmc120cpldspiwriteonvc707 fmc120cpldspiwriteonvc707(.busy(fmci2cbusy)
,.clk(clkcfg)
,.reset(i2creset)
,.stb_devcmd(fmci2cstb_devcmd)
,.devcmd({fmci2cdevcmd[27:24],4'b0,fmci2cdevcmd[23:0]})
,.running(i2cbusy)
,.nack(fmci2cnack)
,.datatx(fmci2cdatatx)
,.start(fmci2cstart)
,.stopbit(fmci2cstopbit)
,.i2cswlocation(i2cswlocation)
);
assign fmci2ccmd={fmci2cstopbit,fmci2cnack,fmci2cdatatx};
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
wire dspclk;
BUFG dspclkbufg(.I(hw.fmc1.llmk_dclkout_2),.O(dspclk));
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
wire resetdone_sfp ;
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
wire ethresetdone=~ethreset;
wire jesdreset0_done;
wire jesdreset1_done;
wire jesd_reset_done_1;//&jesd_reset_done_2;
wire jesdreset0;
wire jesdreset1;
wire axireset;
wire axiinitreset;
wire axiinitdone;
wire loadmacip;
localparam NSTEP=19;
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] donestrobe;
wire [NSTEP-1:0] error;
wire [NSTEP-1:0] resetout;
//wire [NSTEP-1:0] dbresetout;
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
//,.dbstate(dbchainstate),.dbnext(dbchainnext),.dbrising0(dbrising0),.dbshift(dbshift),.dbshiftnext(dbshiftnext),.dbresetout(dbresetout)
);
wire [NSTEP-2-1:0] dummyready;
assign readyforreset_sfp=qpllresetdone_113;

wire testi2cinitreset;
genvar simtest;
	generate
	if (SIM) begin
			assign {sysclkmmcm_reset
			,idelayctrl_reset,sgmiieth_reset,axiinitreset,uartreset,uartlbreset
			,i2creset,i2cinitreset[0],mdioreset,loadmacip
			,ethreset_w,i2cinitreset[1],axireset,jesdreset0
			,jesdreset1,i2cinitreset[2],qpllreset_113,reset_sfp,i2cinitreset[3]
		}=resetout;
			assign donecriteria={sysclkmmcm_locked
			,idelayctrl_rdy,sgmiieth_resetdone,axiinitdone,1'b1,1'b1
			,i2cresetdone	,i2cinitdone[0],mdioinitdone,~loadmacip
			,ethresetdone,i2cinitdone[1],1'b1,jesdreset0_done
			,jesdreset1_done,i2cinitdone[2],qpllresetdone_113,resetdone_sfp,i2cinitdone[3]
		};
//	assign {sysclkmmcm_reset,idelayctrl_reset,qpllreset_113,reset_sfp,sgmiieth_reset,uartreset,uartlbreset,jesdreset0,jesdreset1,i2creset,i2cinitreset[2],i2cinitreset[1],loadmacip,mdioreset,ethreset_w,axireset}=resetout;
//	assign donecriteria={sysclkmmcm_locked,idelayctrl_rdy,qpllresetdone_113,resetdone_sfp,sgmiieth_resetdone,1'b1,1'b1,jesdreset0_done,jesdreset1_done,i2cresetdone,i2cinitdone[2],i2cinitdone[1],~loadmacip,mdioinitdone,ethresetdone,1'b1};
	end
	else begin
			assign {sysclkmmcm_reset,idelayctrl_reset,sgmiieth_reset
			,uartreset,uartlbreset,i2creset,i2cinitreset[0]
			,mdioreset,loadmacip,ethreset_w,i2cinitreset[1]
			,axireset,jesdreset0,jesdreset1,axiinitreset
			,i2cinitreset[2],qpllreset_113,reset_sfp,i2cinitreset[3]
		}=resetout;
			assign donecriteria={sysclkmmcm_locked,idelayctrl_rdy,sgmiieth_resetdone
			,1'b1,1'b1,i2cresetdone,i2cinitdone[0]
			,mdioinitdone,~loadmacip,ethresetdone,i2cinitdone[1]
			,1'b1,jesdreset0_done,jesdreset1_done,axiinitdone
			,i2cinitdone[2],qpllresetdone_113,resetdone_sfp,i2cinitdone[3]
		};
			//assign {sysclkmmcm_reset,idelayctrl_reset,sgmiieth_reset,uartreset,uartlbreset,i2creset,i2cinitreset[2],i2cinitreset[1],loadmacip,mdioreset,ethreset_w,axireset,jesdreset0,jesdreset1,i2cinitreset[0],qpllreset_113,reset_sfp}=resetout;
			//assign donecriteria={sysclkmmcm_locked,idelayctrl_rdy,sgmiieth_resetdone,1'b1,1'b1,i2cresetdone,i2cinitdone[2],i2cinitdone[1],~loadmacip,mdioinitdone,ethresetdone,1'b1,jesdreset0_done,jesdreset1_done,i2cinitdone[0],qpllresetdone_113,resetdone_sfp};
	end
	endgenerate

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
mdiomasterinit(.clk(clkcfg),.busy(),.clk4ratio(SIM ? 32'd10 : mdioclk4ratio),.datarx(lbreg.mdiodatarx),.datatx(datatx),.mdc(hw.vc707.phy_mdc),.mdio_i(mdio_i),.mdio_o(mdio_o),.mdio_t(mdio_t),.opr1w0(opr1w0),.phyaddr(phyaddr),.regaddr(regaddr),.rst(mdioreset),.rxvalid(lbreg.mdiorxvalid),.start(stb_mdiostart_d),.initdone(mdioinitdone));


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

///*
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
wire [2:0] dbaxistate;
wire [2:0] dbaxinext;
axi4lite axi_fmc1_adc0(.aclk(clkcfg));
axi4lite axi_fmc1_adc1(.aclk(clkcfg));
axi4lite axi_fmc1_dac(.aclk(clkcfg));
axi4lite axi_fmc2_adc0(.aclk(clkcfg));
axi4lite axi_fmc2_adc1(.aclk(clkcfg));
axi4lite axi_fmc2_dac(.aclk(clkcfg));
reg [11:0] fmc1_adc0_addr=0,fmc1_adc1_addr=0,fmc2_adc0_addr=0,fmc2_adc1_addr=0,fmc1_dac_addr=0,fmc2_dac_addr=0;
reg [31:0] fmc1_adc0_wdata=0,fmc1_adc1_wdata=0,fmc2_adc0_wdata=0,fmc2_adc1_wdata=0,fmc1_dac_wdata=0,fmc2_dac_wdata=0;
reg [3:0] fmc1_adc0_wstrb=0,fmc1_adc1_wstrb=0,fmc2_adc0_wstrb=0,fmc2_adc1_wstrb=0,fmc1_dac_wstrb=0,fmc2_dac_wstrb=0;
reg fmc1_adc0_start=0,fmc1_adc1_start=0,fmc2_adc0_start=0,fmc2_adc1_start=0,fmc1_dac_start=0,fmc2_dac_start=0;
reg fmc1_adc0_w0r1=0,fmc1_adc1_w0r1=0,fmc2_adc0_w0r1=0,fmc2_adc1_w0r1=0,fmc1_dac_w0r1=0,fmc2_dac_w0r1=0;
wire [46:0] axiinitcmd;
wire [5:0] axibusy;
seqinit #(.INITWIDTH(3+12+32),.INITLENGTH(AXIINITCMDLENGTH),.INITCMDS(AXIINITCMD))
axiinit(.clk(clkcfg)
,.areset(axiinitreset)
,.cmd(axiinitcmd)
,.start(axiinitstart)
,.runing(|axibusy)
,.initdone(axiinitdone)
);
wire [2:0] axiid;
always @(posedge clkcfg) begin
{fmc1_adc0_addr,fmc1_adc0_wdata,fmc1_adc0_wstrb,fmc1_adc0_w0r1,fmc1_adc0_start}=(~axiinitdone & axiinitcmd[46:44]==3'h0) ? {axiinitcmd[43:0],4'hf,1'b0,axiinitstart} : {lbreg.axifmc1adc0_addr,lbreg.axifmc1adc0_wdata ,4'hf,lbreg.axifmc1adc0_w0r1,lbreg.stb_axifmc1adc0_start};
{fmc1_adc1_addr,fmc1_adc1_wdata,fmc1_adc1_wstrb,fmc1_adc1_w0r1,fmc1_adc1_start}=(~axiinitdone & axiinitcmd[46:44]==3'h1) ? {axiinitcmd[43:0],4'hf,1'b0,axiinitstart} : {lbreg.axifmc1adc1_addr,lbreg.axifmc1adc1_wdata ,4'hf,lbreg.axifmc1adc1_w0r1,lbreg.stb_axifmc1adc1_start};
{fmc1_dac_addr,fmc1_dac_wdata,fmc1_dac_wstrb,fmc1_dac_w0r1,fmc1_dac_start}=(~axiinitdone & axiinitcmd[46:44]==3'h2) ? {axiinitcmd[43:0],4'hf,1'b0,axiinitstart} : {lbreg.axifmc1dac_addr,lbreg.axifmc1dac_wdata ,4'hf,lbreg.axifmc1dac_w0r1,lbreg.stb_axifmc1dac_start};
{fmc2_adc0_addr,fmc2_adc0_wdata,fmc2_adc0_wstrb,fmc2_adc0_w0r1,fmc2_adc0_start}=(~axiinitdone & axiinitcmd[46:44]==3'h3) ? {axiinitcmd[43:0],4'hf,1'b0,axiinitstart} : {lbreg.axifmc2adc0_addr,lbreg.axifmc2adc0_wdata ,4'hf,lbreg.axifmc2adc0_w0r1,lbreg.stb_axifmc2adc0_start};
{fmc2_adc1_addr,fmc2_adc1_wdata,fmc2_adc1_wstrb,fmc2_adc1_w0r1,fmc2_adc1_start}=(~axiinitdone & axiinitcmd[46:44]==3'h4) ? {axiinitcmd[43:0],4'hf,1'b0,axiinitstart} : {lbreg.axifmc2adc1_addr,lbreg.axifmc2adc1_wdata ,4'hf,lbreg.axifmc2adc1_w0r1,lbreg.stb_axifmc2adc1_start};
{fmc2_dac_addr,fmc2_dac_wdata,fmc2_dac_wstrb,fmc2_dac_w0r1,fmc2_dac_start}=(~axiinitdone & axiinitcmd[46:44]==3'h5) ? {axiinitcmd[43:0],4'hf,1'b0,axiinitstart} : {lbreg.axifmc2dac_addr,lbreg.axifmc2dac_wdata ,4'hf,lbreg.axifmc2dac_w0r1,lbreg.stb_axifmc2dac_start};
end

lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc1_adc0
(.clk(clkcfg),.slave(axi_fmc1_adc0),.addr(fmc1_adc0_addr),.wdata(fmc1_adc0_wdata),.wstrb(fmc1_adc0_wstrb),.rdata(lbreg.axifmc1adc0_rdata),.rdatavalid(lbreg.axifmc1adc0_rdatavalid),.start(fmc1_adc0_start),.w0r1(fmc1_adc0_w0r1),.reset(axireset),.dbstate(dbaxistate),.dbnext(dbaxinext),.busy(axibusy[0]));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc1_adc1
(.clk(clkcfg),.slave(axi_fmc1_adc1),.addr(fmc1_adc1_addr),.wdata(fmc1_adc1_wdata),.wstrb(fmc1_adc1_wstrb),.rdata(lbreg.axifmc1adc1_rdata),.rdatavalid(lbreg.axifmc1adc1_rdatavalid),.start(fmc1_adc1_start),.w0r1(fmc1_adc1_w0r1),.reset(axireset),.dbstate(),.dbnext(),.busy(axibusy[1]));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc1_dac
(.clk(clkcfg),.slave(axi_fmc1_dac),.addr(fmc1_dac_addr),.wdata(fmc1_dac_wdata),.wstrb(fmc1_dac_wstrb),.rdata(lbreg.axifmc1dac_rdata),.rdatavalid(lbreg.axifmc1dac_rdatavalid),.start(fmc1_dac_start),.w0r1(fmc1_dac_w0r1),.reset(axireset),.dbstate(),.dbnext(),.busy(axibusy[2]));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc2_adc0
(.clk(clkcfg),.slave(axi_fmc2_adc0),.addr(fmc2_adc0_addr),.wdata(fmc2_adc0_wdata),.wstrb(fmc2_adc0_wstrb),.rdata(lbreg.axifmc2adc0_rdata),.rdatavalid(lbreg.axifmc2adc0_rdatavalid),.start(fmc2_adc0_start),.w0r1(fmc2_adc0_w0r1),.reset(axireset),.dbstate(),.dbnext(),.busy(axibusy[3]));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc2_adc1
(.clk(clkcfg),.slave(axi_fmc2_adc1),.addr(fmc2_adc1_addr),.wdata(fmc2_adc1_wdata),.wstrb(fmc2_adc1_wstrb),.rdata(lbreg.axifmc2adc1_rdata),.rdatavalid(lbreg.axifmc2adc1_rdatavalid),.start(fmc2_adc1_start),.w0r1(fmc2_adc1_w0r1),.reset(axireset),.dbstate(),.dbnext(),.busy(axibusy[4]));
lb_axi4lite #(.AWIDTH(12),.DWIDTH(32))
lb_axi4lite_fmc2_dac
(.clk(clkcfg),.slave(axi_fmc2_dac),.addr(fmc2_dac_addr),.wdata(fmc2_dac_wdata),.wstrb(fmc2_dac_wstrb),.rdata(lbreg.axifmc2dac_rdata),.rdatavalid(lbreg.axifmc2dac_rdatavalid),.start(fmc2_dac_start),.w0r1(fmc2_dac_w0r1),.reset(axireset),.dbstate(),.dbnext(),.busy(axibusy[5]));
//(.clk(clkcfg),.slave(axi_fmc1_adc1),.addr(lbreg.axifmc1adc1_addr),.wdata(lbreg.axifmc1adc1_wdata),.wstrb(4'hf),.rdata(lbreg.axifmc1adc1_rdata),.rdatavalid(lbreg.axifmc1adc1_rdatavalid),.start(lbreg.stb_axifmc1adc1_start),.w0r1(lbreg.axifmc1adc1_w0r1),.reset(axireset));
wire [1:0] jesd_reset_status_1;
wire [1:0] jesd_reset_status_2;
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
always @(posedge dspclk) begin
	{dbgt0_rxdata_r, dbgt0_txdata_r, dbgt1_rxdata_r, dbgt1_txdata_r, dbgt2_rxdata_r, dbgt2_txdata_r, dbgt3_rxdata_r, dbgt3_txdata_r, dbgt4_rxdata_r, dbgt4_txdata_r, dbgt5_rxdata_r, dbgt5_txdata_r, dbgt6_rxdata_r, dbgt6_txdata_r, dbgt7_rxdata_r, dbgt7_txdata_r}<={dbgt0_rxdata, dbgt0_txdata, dbgt1_rxdata, dbgt1_txdata, dbgt2_rxdata, dbgt2_txdata, dbgt3_rxdata, dbgt3_txdata, dbgt4_rxdata, dbgt4_txdata, dbgt5_rxdata, dbgt5_txdata, dbgt6_rxdata, dbgt6_txdata, dbgt7_rxdata, dbgt7_txdata};
end
wire [1:0] rx_sync_1;
wire [1:0] rx_sync_2;
assign {hw.fmc1.adca_sync_in_l_vadj,hw.fmc1.adcb_sync_in_l_vadj}=rx_sync_1;
assign {hw.fmc2.adca_sync_in_l_vadj,hw.fmc2.adcb_sync_in_l_vadj}=rx_sync_2;

jesdfmc120 jesdfmc120_1(.core_clk(dspclk)
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
jesdfmc120 jesdfmc120_2(.core_clk(dspclk)
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
,.rx_sync(rx_sync_2)//{hw.fmc2.adca_sync_in_l_vadj,hw.fmc2.adcb_sync_in_l_vadj})
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

//*/
reg [31:0] dclkcnt=0;
always @(posedge dspclk) begin
	dclkcnt<=dclkcnt+1;
end
wire sclk=dclkcnt[lbreg.sclkdclkdiv];
assign hw.fmc1.fpga_sync_out_to_trigmux=sclk;//dclkcnt[6];
assign hw.fmc2.fpga_sync_out_to_trigmux=sclk;//dclkcnt[6];
OBUFDS obufds_user_sma_clk(.I(sclk),.O(hw.vc707.user_sma_clock_p),.OB(hw.vc707.user_sma_clock_n));
OBUFDS obufds_user_sma_gpio(.I(sclk),.O(hw.vc707.user_sma_gpio_p),.OB(hw.vc707.user_sma_gpio_n));
assign hw.vc707.rec_clock=hw.fmc2.lmk_dclk10_m2c_to_fpga;
//OBUFDS obufds_rec_clk(.I(1'b0),.O(hw.vc707.rec_clock_c_p),.OB(hw.vc707.rec_clock_c_n));

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
,dspclk
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
reg [NSTEP-1:0] dbdone=0;
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
///*
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
,.DWR(32)) adc0buf(.wclk(dspclk)
,.rclk(udplb.clk)
,.wdata(adc0)
,.waddr(0)
,.wen(1'b1)
,.ren(lbreg.adc0buf__en)
,.raddr(lbreg.adc0buf__addr)
,.rdata(lbreg.adc0buf__data)
,.full(lbreg.adc0buffull)
,.reset(lbreg.stb_adc0bufreset));

assign dsp.clk=dspclk;;
assign dac0=dsp.dac0;
assign dac1=dsp.dac1;
assign dac2=dsp.dac2;
assign dac3=dsp.dac3;
assign dac4=dsp.dac4;
assign dac5=dsp.dac5;
assign dac6=dsp.dac6;
assign dac7=dsp.dac7;
assign dsp.adc0=adc0;
assign dsp.adc1=adc1;
assign dsp.adc2=adc2;
assign dsp.adc3=adc3;
assign dsp.adc4=adc4;
assign dsp.adc5=adc5;
assign dsp.adc6=adc6;
assign dsp.adc7=adc7;

//`include "ilaadcauto.vh"
`include "ila125auto.vh"
`include "ilaauto.vh"

endmodule
