module iccgt_1G_125M_no8b10b#
(parameter DWIDTH=16
,parameter GT_SIM_GTRESET_SPEEDUP = "TRUE"
,parameter RX_DFE_KL_CFG2_IN = 32'h301148AC
,parameter SIM_CPLLREFCLK_SEL = 3'b001
,parameter PMA_RSV_IN = 32'h00018480
,parameter PCS_RSVD_ATTR_IN = 48'h000000000000
,localparam DBYTE=DWIDTH/8
,localparam NSTEP=6
,parameter SIM=0
)
(input GTXRXP
,input GTXRXN
,output GTXTXN
,output GTXTXP
,input GTNORTHREFCLK0
,input GTNORTHREFCLK1
,input GTREFCLK0
,input GTREFCLK1
,input GTSOUTHREFCLK0
,input GTSOUTHREFCLK1
,input QPLLCLK
,input QPLLREFCLK
,input CPLLLOCKDETCLK
,input [2:0] CPLLREFCLKSEL
,input stb_txphase
,input [15:0] txphase
,input [4:0] txphtarget
,input sfplos
,igticc.gt gticc
,input bypasstxphcheck
,output RXOUTCLKFABRIC
,output TXOUTCLKFABRIC
,output RXOUTCLKPCS
,output TXOUTCLKPCS
,output dblocked
,output dbrxcdrlock
,output [NSTEP-1:0] dbdonecriteria
,output  [24:0] dbdone
,output [NSTEP-1:0] dbresetout
,output [4:0] dbstate
,output [4:0] dbnext
,output [15:0] dbattemptcnt
,output [4:0] dbtxphase5
,output [31:0] dbcnt
);

localparam TIMEOUTSHORT= SIM ? 32'h80 : 32'h40000000;
localparam TIMEOUTLONG= SIM ? 32'h160 : 32'hc0000000;
//wire waitrxpcommaalignen;
wire RXUSERRDY=gticc.rxuserrdy;
wire TXUSERRDY=gticc.txuserrdy;
reg [DBYTE-1:0] txcharisk_r=0;//waitrxpcommaalignen ? 4'h1 : gticc.txcharisk;
reg [DWIDTH-1:0] txdata_r=0;//waitrxpcommaalignen ? 32'h01bc : gticc.txdata;
wire [DBYTE-1:0] txcharisk=txcharisk_r;
wire [DWIDTH-1:0] txdata;//=txdata_r;
wire reset;
assign reset=gticc.reset;//|(lost_d&~lost);
wire resetdone;
wire rxusrclk;
wire txusrclk;


wire [63:0] rxdata64;
wire [7:0] rxdisperr8;
wire [7:0] rxcharisk8;
wire [7:0] txchardispmode8;
wire [7:0] txchardispval8;
wire [63:0] txdata64;
wire [64-DWIDTH-1:0] rxdata_float_i;
wire [8-DBYTE-1:0] rxcharisk_float_i;
wire [8-DBYTE-1:0] rxdisperr_float_i;
wire [2:0] TXOUTCLKSEL;
`include "iccgt_1G_125M_no8b10b.vh"

wire [19:0] txdata20;//=20'h01cfa;
assign txdata=txdata20;
wire [19:0] rxdata20;

assign txdata64={48'b0,txdata20[17:10],txdata20[7:0]};
assign txchardispval8={6'b0,txdata20[18],txdata20[8]};
assign txchardispmode8={6'b0,txdata20[19],txdata20[9]};
assign rxdata20={rxdisperr8[1],rxcharisk8[1],rxdata64[15:8],rxdisperr8[0],rxcharisk8[0],rxdata64[7:0]};
//assign txdata20=20'haaaaa;

assign txusrclk=TXUSRCLK2;
assign rxusrclk=TXUSRCLK2;
reg rxaligned=0;
wire rxdone;
assign rxdone=&{rxaligned,RXRESETDONE};
ifcodec8b10b codec(.txclk(txusrclk),.rxclk(txusrclk),.rxreset(~rxdone),.txreset(reset));
//wire RXDISPERR;

wire TXOUTCLK;
wire RXOUTCLK;
reg cdrlocked=0;
wire mmcmtxlocked;
wire mmcmrxlocked;
wire mmcmlocked=mmcmtxlocked&mmcmrxlocked;
assign dblocked=cdrlocked;
reg [2:0] unlockcnt=0;
wire rxuserrdy=RXUSERRDY&cdrlocked&mmcmlocked;
//assign dbrxcdrlock=RXCDRLOCK;


wire rxoutclk62_5;
wire rxoutclk125;
wire txoutclk62_5;
wire txoutclk125;
//BUFG txoutclk_bufg(.I(SIM ? txoutclk2 : TXOUTCLK),.O(TXUSRCLK));
//assign TXUSRCLK2=TXUSRCLK;

wire mmcmreset;
wire mmcmtxclkfb;
wire mmcmrxclkfb;
wire rdyfortxrxreset;

generate
if (SIM) begin
	BUFG txoutclk_bufg(.I(txoutclk62_5),.O(TXUSRCLK));
	BUFG txusrclk2_bufg(.I(txoutclk125),.O(TXUSRCLK2));
	assign TXOUTCLKSEL=3'b011;//SIM ? 3'b011 : 3'b010;
	MMCME2_ADV#(.BANDWIDTH("OPTIMIZED"),.CLKFBOUT_MULT_F(10.0),.CLKOUT0_DIVIDE_F(10),.CLKIN1_PERIOD(16),.DIVCLK_DIVIDE(1),.CLKOUT1_DIVIDE(5))mmcmtx
	(.CLKIN1(TXOUTCLK),.CLKIN2(1'b0),.CLKINSEL(1'b1)
	,.CLKOUT0(txoutclk62_5)
	,.CLKOUT1(txoutclk125)
	,.CLKFBOUT(mmcmtxclkfb)
	,.CLKFBIN(mmcmtxclkfb)
	,.DADDR(7'h0),.DCLK(1'b0),.DEN(1'b0),.DI(16'h0),.DO(),.DRDY(),.DWE(1'b0)
	,.PSCLK(1'b0),.PSEN(1'b0),.PSINCDEC(1'b0),.PSDONE()
	,.LOCKED(mmcmtxlocked)
	,.RST(mmcmreset)
	,.PWRDWN(1'b0)
	);

end
else begin
	BUFG txoutclk_bufg(.I(TXOUTCLK),.O(TXUSRCLK));
	assign mmcmlocked=1'b1;
	assign TXOUTCLKSEL=3'b010;//SIM ? 3'b011 : 3'b010;
end
endgenerate

wire [19:0] rxdata20_x;
wire rxfifoempty;
wire rxfifofull;

fifo#(.DW(20),.AW(2),.SIM(SIM),.SAMECLKDOMAIN(1))
fiforxd(.wclk(RXUSRCLK),.rclk(TXUSRCLK),.din(rxdata20),.wr_en(1'b1),.rd_en(1'b1),.dout(rxdata20_x),.empty(rxfifoempty),.full(rxfifofull)
,.rst(1'b0)
);

/*
assign rxdata20_x=rxdata20;
assign rxfifoempty=1'b0;
assign rxfifofull=1'b0;
*/

reg [4:0] shiftpos=0;
reg [39:0] rxdatasr40=0;
wire [39:0] rxdata40_shifted=rxdatasr40<<shiftpos;
reg [19:0] rxdata20_shifted=0;
always @(posedge TXUSRCLK) begin
	rxdatasr40<=~RXRESETDONE ? 0 : {(rxfifoempty ? 20'd0 : rxdata20_x),rxdatasr40[39:20]};
	{shiftpos,rxaligned}<=~RXRESETDONE ? 0 :
				(rxdatasr40[39:30]==10'h17c) ? {5'd10,1'b1} :  // only check pcomma not check mcomma : rxdatasr40[]==10'h283
				(rxdatasr40[38:29]==10'h17c) ? {5'd11,1'b1} :
				(rxdatasr40[37:28]==10'h17c) ? {5'd12,1'b1} :
				(rxdatasr40[36:27]==10'h17c) ? {5'd13,1'b1} :
				(rxdatasr40[35:26]==10'h17c) ? {5'd14,1'b1} :
				(rxdatasr40[34:25]==10'h17c) ? {5'd15,1'b1} :
				(rxdatasr40[33:24]==10'h17c) ? {5'd16,1'b1} :
				(rxdatasr40[32:23]==10'h17c) ? {5'd17,1'b1} :
				(rxdatasr40[31:22]==10'h17c) ? {5'd18,1'b1} :
				(rxdatasr40[30:21]==10'h17c) ? {5'd19,1'b1} :
				(rxdatasr40[29:20]==10'h17c) ? {5'd0,1'b1} :
				(rxdatasr40[28:19]==10'h17c) ? {5'd1,1'b1} :
				(rxdatasr40[27:18]==10'h17c) ? {5'd2,1'b1} :
				(rxdatasr40[26:17]==10'h17c) ? {5'd3,1'b1} :
				(rxdatasr40[25:16]==10'h17c) ? {5'd4,1'b1} :
				(rxdatasr40[24:15]==10'h17c) ? {5'd5,1'b1} :
				(rxdatasr40[23:14]==10'h17c) ? {5'd6,1'b1} :
				(rxdatasr40[22:13]==10'h17c) ? {5'd7,1'b1} :
				(rxdatasr40[21:12]==10'h17c) ? {5'd8,1'b1} :
				(rxdatasr40[20:11]==10'h17c) ? {5'd9,1'b1} :
				{shiftpos,rxaligned};
	rxdata20_shifted<=rxaligned ? rxdata40_shifted[39:20] : 0;
end
reg rx2sw=0;
reg tx2sw=0;
reg [9:0] rxdata10=0;
reg [19:0] txdata20_r=0;
reg [19:0] txdata20sr=0;
reg [19:0] txdata20sr_d=0;
reg [15:0] rxdata16sr=0;
reg [15:0] rxdata16sr_d=0;
reg [15:0] rxdata16=0;
reg [31:0] txcnt=0;
reg [15:0] txdata16=0;
reg [1:0] txdata16isk=0;
reg [1:0] rxdataisksr=0;
reg [1:0] rxdataisk=0;
reg [1:0] rxdataisksr_d=0;
always @(posedge TXUSRCLK2) begin
//	txcnt<=txcnt+1;
	rx2sw<=~rx2sw;
	rxdata10<=~TXUSRCLK ? rxdata20_shifted[19:10] : rxdata20_shifted[9:0];
	tx2sw<=~tx2sw;
	txdata20sr<={codec.tx10b,txdata20sr[19:10]};
	txdata20sr_d<=txdata20sr;
	rxdata16sr<={rxdata16sr[7:0],codec.rx8b};
	rxdata16sr_d<=rxdata16sr;
	rxdataisksr<={rxdataisksr[0],codec.rx8bisk};
	rxdataisksr_d<=rxdataisksr;
end
always @(posedge TXUSRCLK) begin
	txdata16<=gticc.txdata;//txcnt[5:1]==0 ? 16'h5cbc : txcnt[16:1];//{8'hf0,txcnt[8:1]};
	txdata16isk<=gticc.txcharisk;//txcnt[5:1]==0 ? 2'b11 : 0;
	txdata20_r<=txdata20sr_d;
	rxdata16<=rxdata16sr;
	rxdataisk<=rxdataisksr;
end
assign txdata20=txdata20_r;

assign codec.tx8b= TXUSRCLK ? txdata16[7:0] : txdata16[15:8];//8'hbc : 8'h0;
assign codec.tx8bisk= TXUSRCLK ? txdata16isk[0] : txdata16isk[1];//1'b1 : 1'b0;
assign codec.rx10b=rxdata10;


BUFG rxoutclk_bufg(.I(RXOUTCLK),.O(RXUSRCLK));
assign RXUSRCLK2=RXUSRCLK;

wire clk=CPLLLOCKDETCLK;
enum {IDLE//0
,STTXWAIT500NS//1
,STCPLLRESET//2
,STCPLLRESETING//3
,STMMCMRESETING//4
,STTXRXRESET//5
,STTXRXRESETING//6
,STTXRESETDONE//7
,STRXRESETDONE//8
,STTXRXRESETDONE//9
,DATA//18
,STEPS
} state=IDLE,next=IDLE;

localparam WSTEPS=$clog2(STEPS)+1;
reg [31:0] cnt=0;
assign tmo=cnt==TIMEOUTSHORT;
assign tmolong=cnt==TIMEOUTLONG;
reg txreq1=0;
reg txreq2=0;
reg txreq3=0;
reg txseldata=0;
reg cpllreset_r=0;
reg mmcmreset_r=0;
reg gttxrxreset_r=0;
reg rxdlysreset_r=0;
reg txdlysreset_r=0;
assign RXDLYSRESET=rxdlysreset_r;
assign TXDLYSRESET=txdlysreset_r;
reg done_r=0;
reg [15:0] attempt_r=0;
reg [15:0] attemptcnt_r=0;
wire sreset;
areset resetxdomain (.clk(clk),.areset(reset),.sreset(sreset));
always @(posedge clk) begin
	if (sreset)begin
		state<=IDLE;
	end
	else begin
		state<=next;
		cnt<=(state==next) & (state !=IDLE) ? cnt+1 : 0;
	end
end
always @(*) begin
	if (sreset) begin
		next=IDLE;
	end
	else begin
		case (state)
			IDLE: next = STTXWAIT500NS ;//: IDLE;
			STTXWAIT500NS: next = (cnt==200) ? STCPLLRESET : STTXWAIT500NS;
			STCPLLRESET: next = cnt==2 ? STCPLLRESETING : STCPLLRESET;
			STCPLLRESETING: next =CPLLLOCK ? STMMCMRESETING : STCPLLRESETING;
			STMMCMRESETING: next =mmcmlocked? STTXRXRESET : STMMCMRESETING;
			STTXRXRESET: next = cnt==100 ? STTXRXRESETING : STTXRXRESET;
			STTXRXRESETING: next = TXRESETDONE ? STTXRESETDONE : RXRESETDONE ? STRXRESETDONE : STTXRXRESETING;
			STTXRESETDONE: next = |{~CPLLLOCK, CPLLFBCLKLOST,CPLLREFCLKLOST} ? STTXWAIT500NS : RXRESETDONE ? STTXRXRESETDONE : STTXRESETDONE;
			STRXRESETDONE: next = |{~CPLLLOCK, CPLLFBCLKLOST,CPLLREFCLKLOST} ? STTXWAIT500NS : TXRESETDONE ? STTXRXRESETDONE : STRXRESETDONE;
			STTXRXRESETDONE: next =  &{TXRESETDONE,RXRESETDONE,CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST} ? DATA : STTXWAIT500NS;
			DATA: next = DATA;
		endcase
	end
end

always @(posedge clk) begin
	if (sreset) begin
	end
	else begin
		case (next)
			IDLE: begin
				txreq1<=1'b1;txreq2<=1'b0;txreq3<=1'b0;txseldata<=1'b0;
			end
			STTXWAIT500NS: begin
				cpllreset_r<=1'b1;
				mmcmreset_r<=1'b1;
				gttxrxreset_r<=1'b1;
				rxdlysreset_r<=1'b0;
				done_r<=0;
			end
			STCPLLRESET: begin
				cpllreset_r<=1'b1;
				if (cnt==1)
					attempt_r<=attempt_r+1;
				done_r<=0;
			end
			STCPLLRESETING: begin
				cpllreset_r<=1'b0;
			end
			STMMCMRESETING: begin
				mmcmreset_r<=1'b0;
				gttxrxreset_r<=1'b0;
			end
			STTXRXRESET: begin
				gttxrxreset_r<=1'b1;
			end
			STTXRXRESETING: begin
				gttxrxreset_r<=1'b0;
			end
			STTXRESETDONE,STRXRESETDONE: begin
				gttxrxreset_r<=1'b0;
			end
			STTXRXRESETDONE: begin
				gttxrxreset_r<=1'b0;
				done_r<=1'b1;
			end
		endcase
	end
end

assign CPLLRESET=cpllreset_r;
assign mmcmreset=mmcmreset_r;
assign GTTXRESET=gttxrxreset_r;
assign GTRXRESET=gttxrxreset_r;
assign resetdone=done_r;
assign gticc.txdataout=txdata;
assign gticc.txchariskout=txcharisk;


/*localparam LOCKMAX=3;
always @(posedge RXUSRCLK or posedge reset) begin
	if (reset) begin
		unlockcnt<=0;
		cdrlocked<=1'b0;
	end
	else begin
		if (~RXCDRLOCK) begin
			if (cdrlocked!=LOCKMAX) begin
				unlockcnt<=unlockcnt+1;
			end
			else begin
				cdrlocked<=1'b0;
			end
		end
		else begin
			unlockcnt<=0;
			cdrlocked<=1'b1;
		end
	end
end

reg txphaligndone_d=0;
reg txphaligndone_d2=0;
reg txphaligndone_d3=0;
reg txphaligndone_d4=0;
reg txphaligndone=0;
//wire txphaligndonerising=txphaligndone_d3&~txphaligndone_d4;
wire txphaligndonerising=TXPHALIGNDONE&~txphaligndone_d;
reg txphaligndone1st=0;
always @(posedge CPLLLOCKDETCLK) begin
	txphaligndone_d2<=txphaligndone_d;
	txphaligndone_d3<=txphaligndone_d2;
	txphaligndone_d4<=txphaligndone_d3;
end
always @(posedge TXUSRCLK) begin
	txphaligndone_d<=TXPHALIGNDONE;
	if (TXDLYSRESET|TXDLYSRESETDONE) begin
		txphaligndone1st<=1'b1;
		txphaligndone<=1'b0;
	end
	else begin
		if (txphaligndonerising) begin
			txphaligndone1st<=1'b0;
			if (~txphaligndone1st) begin
				txphaligndone<=1'b1;
			end
		end
	end
end
reg rxphaligndone_d=0;
reg rxphaligndone_d2=0;
reg rxphaligndone_d3=0;
reg rxphaligndone_d4=0;
reg rxphaligndone=0;
wire rxphaligndonerising=RXPHALIGNDONE&~rxphaligndone;
reg rxphaligndone1st=0;
always @(posedge CPLLLOCKDETCLK) begin
	rxphaligndone_d2<=rxphaligndone_d;
	rxphaligndone_d3<=rxphaligndone_d2;
	rxphaligndone_d4<=rxphaligndone_d3;
end
always @(posedge RXUSRCLK) begin
	rxphaligndone_d<=RXPHALIGNDONE;
	if (RXDLYSRESET|RXDLYSRESETDONE) begin
		rxphaligndone1st<=1'b1;
		rxphaligndone<=1'b0;
	end
	else begin
		if (rxphaligndonerising) begin
			rxphaligndone1st<=1'b0;
			if (~rxphaligndone1st) begin
				rxphaligndone<=1'b1;
			end
		end
	end
end

wire [DWIDTH-1:0] palign3data=16'h03bc;
wire [DBYTE-1:0] palign3isk=2'b01;
wire [DWIDTH-1:0] palign2data=16'h02bc;//{{(DWIDTH-8){1'b0}},8'hbc};
wire [DBYTE-1:0] palign2isk=2'b01;//{{(DBYTE-1){1'b0}},1'b1};
wire [DWIDTH-1:0] palign1data =16'h01bc;
wire [DBYTE-1:0] palign1isk=2'b01;
wire [DWIDTH-1:0] comma=16'h00bc;//{{(DWIDTH-8){1'b0}},8'hbc};
wire [DBYTE-1:0] commaisk=2'b01;//{{(DBYTE-1){1'b0}},1'b1};


wire align1req=RXDATA==palign1data & RXCHARISK==palign1isk;
wire align2req=RXDATA==palign2data & RXCHARISK==palign2isk;
wire align3req=RXDATA==palign3data & RXCHARISK==palign3isk;

wire sreset;
reg sreset_d=0;
wire [13:0] txphase14=txphase&14'h3fff;
wire [16:0] txphase17=((txphase14<<<2)+(txphase14));
wire [4:0] txphase5=txphase17>>>12;
wire [4:0] txphase5_x;
reg farendaligned=0;

reg txreq1=0;
reg txreq2=0;
reg txreq3=0;
reg txseldata=0;
wire sfplos_x,stb_txphase_x,mmcmlocked_x,bypasstxphcheck_x,txphaligndone_x,rxphaligndone_x,cdrlocked_x,farendaligned_x,align1req_x,align2req_x,align3req_x;
alatch #(.DWIDTH(5+9)) xdomaintostable(.clk(clk),.datain(
	{sfplos,stb_txphase,mmcmlocked,bypasstxphcheck,cdrlocked,farendaligned,align1req,align2req,align3req,txphase5}
),.dataout(
	{sfplos_x,stb_txphase_x,mmcmlocked_x,bypasstxphcheck_x,cdrlocked_x,farendaligned_x,align1req_x,align2req_x,align3req_x,txphase5_x}
));
areset txphaligndone_areset(.clk(clk),.areset(txphaligndone),.sreset(txphaligndone_x));
areset rxphaligndone_areset(.clk(clk),.areset(rxphaligndone),.sreset(rxphaligndone_x));
wire txreq1_x,txreq2_x,txreq3_x,txseldata_x;
alatch #(.DWIDTH(4)) xdomaintotx(.clk(txusrclk),.datain({txreq1,txreq2,txreq3,txseldata}),.dataout({txreq1_x,txreq2_x,txreq3_x,txseldata_x}));
//typedef
enum {IDLE//0
,STTXWAIT500NS//1
,STCPLLRESET//2
,STCPLLRESETING//3
,STMMCMRESETING//4
,STTXRXRESET//5
,STTXRXRESETING//6
,STTXRESETDONE//7
,STRXRESETDONE//8
,STTXRXRESETDONE//9

,STTXDLYSRESET//a
,STTXDLYSRESETD1//b
,STTXPHSTB1//c
,STTXPHSTB2//d
,STTXPHCHECK//e
,STRXWAIT500NS//f
,STRXCDRRDY//10
,STRXCDRSTABLE//11
,STRXDLYSRESET//12
,STRXDLYSRESETD1//13

,ALIGN1REQ//14
,ALIGN2REQ//15
,ALIGN2CHK//16
,ALIGN3REQ//17
,DATA//18
,RXERR//19
,TXTMO//1a
,RXTMO//1b
} state=IDLE,next=IDLE;
//fsmstate;
assign dbstate=state;
assign dbnext=next;
//fsmstate state=IDLE;
//fsmstate next=IDLE;

//alatch xdomaintorx(.clk(rxusrclk),.datain(),.dataout());
reg [31:0] cnt=0;
assign tmo=cnt==TIMEOUTSHORT;
assign tmolong=cnt==TIMEOUTLONG;
assign dbcnt=cnt;
areset resetxdomain (.clk(clk),.areset(reset),.sreset(sreset));
reg txphgood=0;
always @(posedge clk) begin
	txphgood<=bypasstxphcheck_x | (txphase5_x ==txphtarget) ;
end
always @(posedge clk) begin
	sreset_d<=sreset;
	if (sreset)begin
		state<=IDLE;
	end
	else begin
		state<=next;
		cnt<=(state==next) & (state !=IDLE) ? cnt+1 : 0;
	end
end
wire rxerr=|{RXDISPERR,RXNOTINTABLE};
always @(*) begin
	if (sreset) begin
		next=IDLE;
	end
	else begin
		case (state)
			IDLE: next = STTXWAIT500NS ;//: IDLE;
			STTXWAIT500NS: next = tmo ? TXTMO : (cnt==200) ? STCPLLRESET : STTXWAIT500NS;
			STCPLLRESET: next = tmo ? TXTMO : cnt==2 ? STCPLLRESETING : STCPLLRESET;
			STCPLLRESETING: next =tmo ? TXTMO :  CPLLLOCK ? STMMCMRESETING : STCPLLRESETING;
			STMMCMRESETING: next =tmo ? TXTMO :  mmcmlocked_x ? STTXRXRESET : STMMCMRESETING;
			STTXRXRESET: next = tmo ? TXTMO : cnt==100 ? STTXRXRESETING : STTXRXRESET;
			STTXRXRESETING: next = tmolong ? TXTMO : TXRESETDONE ? STTXRESETDONE : RXRESETDONE ? STRXRESETDONE : STTXRXRESETING;
			STTXRESETDONE: next = tmo ? TXTMO : |{~CPLLLOCK, CPLLFBCLKLOST,CPLLREFCLKLOST} ? STTXWAIT500NS : RXRESETDONE ? STTXRXRESETDONE : STTXRESETDONE;
			STRXRESETDONE: next = tmo ? TXTMO : |{~CPLLLOCK, CPLLFBCLKLOST,CPLLREFCLKLOST} ? STTXWAIT500NS : TXRESETDONE ? STTXRXRESETDONE : STRXRESETDONE;
			STTXRXRESETDONE: next =  tmolong ? RXTMO :&{TXRESETDONE,RXRESETDONE,CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST} ? STTXDLYSRESET : STTXWAIT500NS;

			STTXDLYSRESET: next =cnt==5 ? STTXDLYSRESETD1: STTXDLYSRESET;
			STTXDLYSRESETD1: next = tmo ? TXTMO : txphaligndone_x ? STTXPHSTB1 : STTXDLYSRESETD1;
			STTXPHSTB1: next = stb_txphase_x ? STTXPHSTB2 : STTXPHSTB1;
			STTXPHSTB2: next = stb_txphase_x ? STTXPHCHECK : STTXPHSTB2;
			STTXPHCHECK: next = txphgood ?  STRXWAIT500NS : STTXWAIT500NS;
			STRXWAIT500NS: next = ~txphgood ? STTXWAIT500NS :  (cnt==200) ? STRXCDRRDY : STRXWAIT500NS;
			STRXCDRRDY: next= ~txphgood ? STTXWAIT500NS :  ~sfplos_x & cdrlocked_x ? STRXCDRSTABLE : STRXCDRRDY;
			STRXCDRSTABLE: next = ~txphgood ? STTXWAIT500NS :  ~cdrlocked_x|sfplos_x  ?  STRXCDRRDY :  cnt==32'hffffff ? STRXDLYSRESET :STRXCDRSTABLE  ;
			STRXDLYSRESET: next = tmo ? RXTMO : ~txphgood ? STTXWAIT500NS :  cnt==5 ? STRXDLYSRESETD1 : STRXDLYSRESET;
			STRXDLYSRESETD1: next= tmo ? RXTMO : rxphaligndone_x ? ALIGN1REQ : STRXDLYSRESETD1;


			ALIGN1REQ: next= tmo ? RXTMO : ~cdrlocked_x  ? STRXWAIT500NS  :  RXBYTEISALIGNED ? ALIGN2REQ : ALIGN1REQ;
			ALIGN2REQ:       next= tmo ? RXTMO : ~cdrlocked_x  ? STRXWAIT500NS  :~RXBYTEISALIGNED ? ALIGN1REQ : cnt==100 ? ALIGN2CHK : ALIGN2REQ;
			ALIGN2CHK: next= tmo ? RXTMO : ~cdrlocked_x  ? STRXWAIT500NS  : ~RXBYTEISALIGNED ? ALIGN1REQ : farendaligned_x  ? ALIGN3REQ : ALIGN2REQ;
			ALIGN3REQ: next= tmo ? RXTMO : ~cdrlocked_x  ? STRXWAIT500NS  : ~RXBYTEISALIGNED ? ALIGN1REQ : cnt==100 ? DATA : ALIGN3REQ;
			//ALIGN3REQ: next= tmo ? RXTMO : ~cdrlocked_x  ? STRXWAIT500NS  : ~RXBYTEISALIGNED ? ALIGN1REQ : cnt==100 ? STRXWAIT500NS : ALIGN3REQ;
			DATA: next = |{~CPLLLOCK,CPLLFBCLKLOST,CPLLREFCLKLOST,~mmcmlocked_x,~txphgood } ? STTXWAIT500NS :
				~cdrlocked_x  ? STRXWAIT500NS :
				rxerr ? RXERR :
				~RXBYTEISALIGNED ? ALIGN1REQ :
				align1req_x ? ALIGN2REQ :
				align2req_x ? ALIGN3REQ :
				DATA ;
			RXERR: next= ALIGN1REQ;//STRXWAIT500NS ;
			TXTMO: next = STTXWAIT500NS;
			RXTMO: next = STTXWAIT500NS;
			default: next=STTXWAIT500NS;
		endcase
	end
end
reg [15:0] attempt_r=0;
reg [15:0] attemptcnt_r=0;
assign dbattemptcnt=attemptcnt_r;
assign dbtxphase5=txphase5;
reg cpllreset_r=0;
reg mmcmreset_r=0;
reg gttxrxreset_r=0;
reg rxdlysreset_r=0;
reg txdlysreset_r=0;
assign RXDLYSRESET=rxdlysreset_r;
assign TXDLYSRESET=txdlysreset_r;
reg done_r=0;
always @(posedge clk) begin
	if (sreset) begin
	end
	else begin
		case (next)
			IDLE: begin
				txreq1<=1'b1;txreq2<=1'b0;txreq3<=1'b0;txseldata<=1'b0;
			end
			STTXWAIT500NS: begin
				cpllreset_r<=1'b1;
				mmcmreset_r<=1'b1;
				gttxrxreset_r<=1'b1;
				rxdlysreset_r<=1'b0;
				done_r<=0;
			end
			STCPLLRESET: begin
				cpllreset_r<=1'b1;
				if (cnt==1)
					attempt_r<=attempt_r+1;
				done_r<=0;
			end
			STCPLLRESETING: begin
				cpllreset_r<=1'b0;
			end
			STMMCMRESETING: begin
				mmcmreset_r<=1'b0;
				gttxrxreset_r<=1'b0;
			end
			STTXRXRESET: begin
				gttxrxreset_r<=1'b1;
			end
			STTXRXRESETING: begin
				gttxrxreset_r<=1'b0;
			end
			STTXRESETDONE,STRXRESETDONE: begin
				gttxrxreset_r<=1'b0;
			end
			STTXRXRESETDONE: begin
				gttxrxreset_r<=1'b0;
				done_r<=1'b1;
			end
			STTXPHSTB1: begin
			end
			STTXPHSTB2: begin
			end
			STTXPHCHECK: begin
			end
			STTXDLYSRESET: begin
				txdlysreset_r<= 1'b1;
				farendaligned<=1'b0;
			end
			STTXDLYSRESETD1: begin
				txdlysreset_r<=1'b0;
			end
			STRXWAIT500NS: begin
				txreq1<=1'b1;txreq2<=1'b0;txreq3<=1'b0;txseldata<=1'b0;
			end
			STRXDLYSRESET: begin
				rxdlysreset_r<=1'b1;
			end
			STRXDLYSRESETD1: begin
				rxdlysreset_r<=1'b0;
			end
			ALIGN1REQ: begin
				if (align2req_x) begin
					farendaligned<=1'b1;
				end
				txreq1<=1'b1;txreq2<=1'b0;txreq3<=1'b0;txseldata<=1'b0;
			end
			ALIGN2CHK,ALIGN2REQ: begin
				if (align2req_x) begin
					farendaligned<=1'b1;
				end
				txreq1<=1'b0;txreq2<=1'b1;txreq3<=1'b0;txseldata<=1'b0;
			end
			ALIGN3REQ: begin
				txreq1<=1'b0;txreq2<=1'b0;txreq3<=1'b1;txseldata<=1'b0;
			end
			DATA: begin
				attempt_r<=0;
				attemptcnt_r<=attempt_r;
				done_r<=1'b1;
				farendaligned<=1'b0;
				txreq1<=1'b0;txreq2<=1'b0;txreq3<=1'b0;txseldata<=1'b1;
			end
			RXERR: begin
				done_r<=1'b0;
			end
		endcase

	end
end
always @(posedge txusrclk) begin
	txdata_r <=  txreq1_x ? palign1data : txreq2_x ? palign2data : txreq3_x ? palign3data : txseldata_x ? gticc.txdata : comma;
	txcharisk_r<=txreq1_x ? palign1isk : txreq2_x ? palign2isk : txreq3_x ? palign3isk : txseldata_x ? gticc.txcharisk : commaisk;
end
assign CPLLRESET=cpllreset_r;
assign mmcmreset=mmcmreset_r;
assign GTTXRESET=gttxrxreset_r;
assign GTRXRESET=gttxrxreset_r;
assign resetdone=done_r;
assign gticc.txdataout=txdata;
assign gticc.txchariskout=txcharisk;
*/

/*
wire txalign;
assign rdyfortxrxreset=&{CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST};
wire txrxresetdone=&{TXRESETDONE,RXRESETDONE,rdyfortxrxreset,mmcmlocked};
wire rxalign=&{rxphaligndone,~RXNOTINTABLE,~RXDISPERR};
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] resetout;
wire [NSTEP-1:0] resetoutmask=resetout&mask;
assign RXPCOMMAALIGNEN=1'b1;
//wire [NSTEP-1:0] donecriteria={1'b1,RXPHALIGNDONE,txrxresetdone,txrxresetdone,rdyfortxrxreset} | ~mask;
//assign {txalign,rxdlyreset,txrxreset1,txrxreset0,CPLLRESET}=resetout&mask;
//wire [NSTEP-1:0] donecriteria={rxalign,rxphaligndone,txphaligndone&RXCDRLOCK&~RXELECIDLE,txrxresetdone,txrxresetdone,rdyfortxrxreset} | ~mask;
wire [NSTEP-1:0] donecriteria={rxalign,rxphaligndone,txphaligndone&RXCDRLOCK&~RXELECIDLE,txrxresetdone,mmcmlocked,rdyfortxrxreset} | ~mask;
assign {waitrxpcommaalignen,RXDLYSRESET,TXDLYSRESET,txrxreset1,mmcmreset,CPLLRESET}=resetoutmask;
assign dbdonecriteria=donecriteria;
wire [NSTEP*16-1:0] readylength={{3{16'd10}},16'd100,16'd100,16'd100};//,16'd10,16'd10};
wire [NSTEP*16-1:0] resetlength={16'd10,16'd2,16'd2,{3{16'd10}}};//,16'd10,16'd10};
wire [NSTEP*16-1:0] resettodonecheck={NSTEP{16'd100}};//,16'd10,16'd10};
wire [NSTEP*32-1:0] resettimeout={NSTEP{32'h10000000}};
wire [NSTEP*32-1:0] donelength={NSTEP{16'd10}};
assign resetdone=&done & txrxresetdone;
reg [NSTEP-1:0] dbresetout_r=0;
reg lost_d=0;
reg lost=0;
always @(posedge CPLLLOCKDETCLK)  begin
	dbresetout_r<=resetoutmask;
	lost_d<=reset ? 1'b0 : lost;
	lost<= reset ? 1'b0 : CPLLREFCLKLOST;
end
assign reset=gticc.reset;//|(lost_d&~lost);

assign dbresetout=dbresetout_r;
chainreset #(.NSTEP(NSTEP))
chainreset(.clk(CPLLLOCKDETCLK)
,.resetin(reset)
,.resetout(resetout)
,.donecriteria(donecriteria)
,.resetlength(resetlength)
,.readylength(readylength)
,.resettodonecheck(resettodonecheck)
,.resettimeout(resettimeout)
,.donelength(donelength)
,.done(done)
,.dbstate(dbstate)
,.dbnext(dbnext)
);
//,TXPHINITDONE,TXPHALIGNDONE,TXDLYSRESETDONE,RXPHSLIPMONITOR,RXPHMONITOR,RXPHALIGNDONE,RXDLYSRESETDONE
assign dbresetout={
	rxdlysreset_r
	,txdlysreset_r
	,gttxrxreset_r
	,mmcmreset_r
	,cpllreset_r
};
assign dbdone={RXBYTEISALIGNED
,RXDLYSRESETDONE,RXPHALIGNDONE,TXDLYSRESETDONE,TXPHALIGNDONE
,RXDISPERR,RXNOTINTABLE
,~RXELECIDLE,RXCDRLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST
,TXRESETDONE,RXRESETDONE,mmcmlocked,CPLLLOCK};
assign gticc.resetdone=resetdone;
assign gticc.rxbyteisaligned=RXBYTEISALIGNED;
assign gticc.rxbyterealign=RXBYTEREALIGN;
assign gticc.rxcharisk=RXCHARISK;
assign gticc.rxdata=RXDATA;
assign gticc.rxdisperr=RXDISPERR;
assign gticc.rxnotintable=RXNOTINTABLE;
*/
assign gticc.rxusrclk=rxusrclk;
assign gticc.txusrclk=txusrclk;

endmodule

