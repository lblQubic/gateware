module gticc_gt #
(parameter DWIDTH=16
,parameter GT_SIM_GTRESET_SPEEDUP = "TRUE"
,parameter RX_DFE_KL_CFG2_IN = 32'h301148AC
,parameter SIM_CPLLREFCLK_SEL = 3'b001
,parameter PMA_RSV_IN = 32'h00018480
,parameter PCS_RSVD_ATTR_IN = 48'h000000000000
,localparam DBYTE=DWIDTH/8
,localparam NSTEP=6
,parameter TXPHTARGET=5'h1
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
,igticc.gt gticc
,input bypasstxphcheck
,output RXOUTCLKFABRIC
,output TXOUTCLKFABRIC
,output RXOUTCLKPCS
,output TXOUTCLKPCS
,output dblocked
,output dbrxcdrlock
,output [NSTEP-1:0] dbdonecriteria
,input [NSTEP-1:0] mask
,output  [24:0] dbdone
,output [NSTEP-1:0] dbresetout
,output [4:0] dbstate
,output [4:0] dbnext
,output [15:0] dbattemptcnt
,output [4:0] dbtxphase5
,output [31:0] dbcnt
);

//wire waitrxpcommaalignen;
wire RXUSERRDY=gticc.rxuserrdy;
wire TXUSERRDY=gticc.txuserrdy;
reg [DBYTE-1:0] txcharisk_r=0;//waitrxpcommaalignen ? 4'h1 : gticc.txcharisk;
reg [DWIDTH-1:0] txdata_r=0;//waitrxpcommaalignen ? 32'h01bc : gticc.txdata;
wire [DBYTE-1:0] txcharisk=txcharisk_r;
wire [DWIDTH-1:0] txdata=txdata_r;
wire reset;
assign reset=gticc.reset;//|(lost_d&~lost);
wire [DBYTE-1:0] RXCHARISK;
wire [DBYTE-1:0] RXCHARISCOMMA;
wire [DBYTE-1:0] RXDISPERR;
wire [DBYTE-1:0] RXNOTINTABLE;
wire RXELECIDLE;
wire [DWIDTH-1:0] RXDATA;
wire resetdone;
wire rxusrclk;
wire txusrclk;


//wire txrxreset1;
//wire txrxreset0=1'b0;
//wire txrxreset=txrxreset0|txrxreset1;
wire [63:0] txdata64;
wire [7:0] txcharisk8;
wire [63:0] rxdata64;
wire [7:0] rxdisperr8;
wire [7:0] rxcharisk8;
wire [7:0] rxchariscomma8;
wire [7:0] rxnotintable8;
wire [64-DWIDTH-1:0] rxdata_float_i;
wire [8-DBYTE-1:0] rxcharisk_float_i;
wire [8-DBYTE-1:0] rxchariscomma_float_i;
wire [8-DBYTE-1:0] rxdisperr_float_i;
wire [8-DBYTE-1:0] rxnotintable_float_i;
assign txcharisk8={{8-DBYTE-1{1'b0}},txcharisk};
assign txdata64={{64-DWIDTH{1'b0}},txdata} ;
assign {rxdata_float_i,RXDATA}=rxdata64;
assign {rxdisperr_float_i,RXDISPERR}=rxdisperr8;
assign {rxcharisk_float_i,RXCHARISK}=rxcharisk8;
assign {rxchariscomma_float_i,RXCHARISCOMMA}=rxchariscomma8;
assign {rxnotintable_float_i,RXNOTINTABLE}=rxnotintable8;
wire RXCDRRESET=1'b0;
wire CPLLRESET;
wire GTTXRESET;//=txrxreset;
wire GTRXRESET;//=txrxreset;
wire RXPMARESET=GTRXRESET;//=txrxreset;
wire RXRESETDONE;
wire TXRESETDONE;
wire CPLLFBCLKLOST;
wire CPLLLOCK;
wire CPLLREFCLKLOST;
wire RXBYTEISALIGNED;
wire RXBYTEREALIGN;
wire RXUSRCLK;
wire RXUSRCLK2;
wire TXUSRCLK;
wire TXUSRCLK2;
wire RXDLYEN=1'b0;
wire RXDLYSRESET;
wire RXPHALIGN=1'b0;
wire RXPHALIGNEN=1'b0;
wire RXPHDLYRESET=1'b0;
wire RXLPMHFHOLD=1'b0;
wire RXLPMLFHOLD=1'b0;

wire TXDLYEN=1'b0;
wire TXDLYSRESET;
wire TXPHALIGN=1'b0;
wire TXPHALIGNEN=1'b0;
wire TXPHDLYRESET;//=txrxreset;
wire TXPHINIT=1'b0;
wire TXPHINITDONE;
wire TXPHALIGNDONE;
wire TXDLYSRESETDONE;
wire RXPHSLIPMONITOR;
wire RXPHMONITOR;
wire RXPHALIGNDONE;
wire RXDLYSRESETDONE;

wire RXPCOMMAALIGNEN=1'b1;
assign txusrclk=TXUSRCLK2;
assign rxusrclk=RXUSRCLK2;
//wire RXDISPERR;

wire TXOUTCLK;
wire RXOUTCLK;
reg cdrlocked=0;
wire mmcmlocked=1'b1;
assign dblocked=cdrlocked;
reg [2:0] unlockcnt=0;
wire rxuserrdy=RXUSERRDY&cdrlocked&mmcmlocked;
wire RXCDRLOCK;
assign dbrxcdrlock=RXCDRLOCK;

`include "iccgt.vh"

//wire txoutclk2;
BUFG txoutclk_bufg(.I(TXOUTCLK),.O(TXUSRCLK));
//BUFG txoutclk_bufg(.I(txoutclk2),.O(TXUSRCLK));
//BUFG txoutclk_bufg(.I(RXOUTCLK),.O(TXUSRCLK));
assign TXUSRCLK2=TXUSRCLK;

wire mmcmreset;
/*wire mmcmclkfb;
wire rdyfortxrxreset;
MMCME2_ADV#(.BANDWIDTH("OPTIMIZED"),.CLKFBOUT_MULT_F(5.0),.CLKOUT0_DIVIDE_F(10),.CLKIN1_PERIOD(8),.DIVCLK_DIVIDE(1)
)mmcm_adv_inst
(.CLKIN1(TXOUTCLK),.CLKIN2(1'b0),.CLKINSEL(1'b1)
,.CLKOUT0(txoutclk2)
,.CLKFBOUT(mmcmclkfb)
,.CLKFBIN(mmcmclkfb)
,.DADDR(7'h0),.DCLK(1'b0),.DEN(1'b0),.DI(16'h0),.DO(),.DRDY(),.DWE(1'b0)
,.PSCLK(1'b0),.PSEN(1'b0),.PSINCDEC(1'b0),.PSDONE()
,.LOCKED(mmcmlocked)
,.RST(mmcmreset)
,.PWRDWN(1'b0)
);
*/

BUFG rxoutclk_bufg(.I(RXOUTCLK),.O(RXUSRCLK));
assign RXUSRCLK2=RXUSRCLK;
localparam LOCKMAX=3;
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
reg txphaligndone=0;
wire txphaligndonerising=TXPHALIGNDONE&~txphaligndone_d;
reg txphaligndone1st=0;
always @(posedge CPLLLOCKDETCLK) begin
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
reg rxphaligndone=0;
wire rxphaligndonerising=RXPHALIGNDONE&~rxphaligndone_d;
reg rxphaligndone1st=0;
always @(posedge CPLLLOCKDETCLK) begin
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

wire [DWIDTH-1:0] palignchar=16'h01bc;//{{(DWIDTH-8){1'b0}},8'hbc};
wire [DBYTE-1:0] paligncharisk=2'b01;//{{(DBYTE-1){1'b0}},1'b1};
wire [DWIDTH-1:0] palignreq=16'h02bc;
wire [DBYTE-1:0] palignreqisk=2'b01;
//typedef
enum {IDLE//0
,STWAIT500NS//1
,STCPLLRESET//2
,STCPLLRESETING//3
,STMMCMRESETING//4
,STGTTXRESET//5
,STGTTXRESETING//6
,STGTTXRESET2//7
,STGTTXRESETING2//8
,STTXPHSTB1//9
,STTXPHSTB2//a
,STTXPHCHECK//b
,STRXCDRRDY//c
,STRXCDRSTABLE//d
,STGTRXRESET//e
,STGTRXRESETING//f
,STGTRXRESET2//10
,STGTRXRESETING2//11
,STRXDLYSRESET//12
,STRXDLYSRESETD1//13
,STRXDLYSRESETD2//14
,ALIGNREQ//15
,RXALIGN//16
,DATA//17
,ERR//18
} state=IDLE,next=IDLE;
//fsmstate;
assign dbstate=state;
assign dbnext=next;
//fsmstate state=IDLE;
//fsmstate next=IDLE;

wire alignchar_w=RXDATA==palignchar & RXCHARISK==paligncharisk;
reg alignchar_r=0;
always @(posedge RXUSRCLK) begin
	alignchar_r<=alignchar_w;
end
wire clk=CPLLLOCKDETCLK;
wire sreset;
reg sreset_d=0;
wire [13:0] txphase14=txphase&14'h3fff;
wire [16:0] txphase17=((txphase14<<<2)+(txphase14));
wire [4:0] txphase5=txphase17>>>12;


reg [31:0] cnt=0;
assign dbcnt=cnt;
areset resetxdomain (.clk(clk),.areset(reset),.sreset(sreset));
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
wire err=RXDISPERR|RXNOTINTABLE;
always @(*) begin
	if (sreset) begin
		next=IDLE;
	end
	else begin
		case (state)
			IDLE: next = sreset_d ? STWAIT500NS : IDLE;
			STWAIT500NS: next = (cnt==200) ? STCPLLRESET : STWAIT500NS;
			STCPLLRESET: next = cnt==2 ? STCPLLRESETING : STCPLLRESET;
			STCPLLRESETING: next = CPLLLOCK ? STMMCMRESETING : STCPLLRESETING;
			STMMCMRESETING: next = mmcmlocked ? STGTTXRESET : STMMCMRESETING;
			STGTTXRESET: next = cnt==100 ? STGTTXRESETING : STGTTXRESET;
			STGTTXRESETING: next = &{TXRESETDONE,CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST} ? STGTTXRESET2 : STGTTXRESETING;
			STGTTXRESET2: next = cnt==100 ? STGTTXRESETING2 : STGTTXRESET2;
			STGTTXRESETING2: next = &{TXRESETDONE,CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST} ? STTXPHSTB1 : STGTTXRESETING2;
			STTXPHSTB1: next = stb_txphase ? STTXPHSTB2 : STTXPHSTB1;
			STTXPHSTB2: next = stb_txphase ? STTXPHCHECK : STTXPHSTB2;
			STTXPHCHECK: next =  bypasstxphcheck | (txphase5 ==TXPHTARGET) ?  STRXCDRRDY : STWAIT500NS;
			STRXCDRRDY: next= cdrlocked ? STRXCDRSTABLE : STRXCDRRDY;
			STRXCDRSTABLE: next =  (cnt==300) ? STGTRXRESET : cdrlocked ? STRXCDRSTABLE : STRXCDRRDY;
			STGTRXRESET: next = cnt==100 ? STGTRXRESETING : STGTRXRESET;
			STGTRXRESETING: next = &{TXRESETDONE,RXRESETDONE,CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST} ? STGTRXRESET2 : STGTRXRESETING;
			STGTRXRESET2: next = cnt==100 ? STGTRXRESETING2 : STGTRXRESET2;
			STGTRXRESETING2: next = &{TXRESETDONE,RXRESETDONE,CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST} ? STRXDLYSRESET : STGTRXRESETING2;
			STRXDLYSRESET: next = cnt==2 ? STRXDLYSRESETD1 : STRXDLYSRESET;
			STRXDLYSRESETD1: next= rxphaligndonerising ? STRXDLYSRESETD2 : STRXDLYSRESETD1;
			STRXDLYSRESETD2: next= rxphaligndonerising ? ALIGNREQ : STRXDLYSRESETD2;
			ALIGNREQ: next= RXBYTEISALIGNED ? RXALIGN : ~cdrlocked ? STRXCDRRDY :ALIGNREQ;
			RXALIGN: next= alignchar_r & cnt>10 ? DATA : ~cdrlocked ? STRXCDRRDY : RXALIGN;
			DATA: next = 1'b0 & err ? ERR : cdrlocked ? DATA : STRXCDRRDY;
			ERR: next= STWAIT500NS;
		endcase
	end
end
reg [15:0] attemptcnt_r=0;
assign dbattemptcnt=attemptcnt_r;
assign dbtxphase5=txphase5;
reg cpllreset_r=0;
reg mmcmreset_r=0;
reg gttxreset_r=0;
reg gtrxreset_r=0;
reg rxdlysreset_r=0;
assign RXDLYSRESET=rxdlysreset_r;
reg done_r=0;
always @(posedge clk) begin
	if (sreset) begin
	end
	else begin
		case (next)
			IDLE: begin
				txdata_r<=palignreq;
				txcharisk_r<=palignreqisk;
			end
			STWAIT500NS: begin
				cpllreset_r<=1'b1;
				mmcmreset_r<=1'b1;
				gttxreset_r<=1'b1;
				gtrxreset_r<=1'b1;
				rxdlysreset_r<=1'b0;
				attemptcnt_r<=0;
				done_r<=0;
			end
			STCPLLRESET: begin
				cpllreset_r<=1'b1;
				if (cnt==1)
					attemptcnt_r<=attemptcnt_r+1;
				done_r<=0;
			end
			STCPLLRESETING: begin
				cpllreset_r<=1'b0;
			end
			STMMCMRESETING: begin
				mmcmreset_r<=1'b0;
				gttxreset_r<=1'b0;
				gtrxreset_r<=1'b0;
			end
			STGTTXRESET,STGTTXRESET2: begin
				gttxreset_r<=1'b1;
				gtrxreset_r<=1'b1;
			end
			STGTTXRESETING,STGTTXRESETING2: begin
				gttxreset_r<=1'b0;
				gtrxreset_r<=1'b0;
			end
			STGTRXRESET,STGTRXRESET2: begin
				gttxreset_r<=1'b0;
				gtrxreset_r<=1'b1;
			end
			STGTRXRESETING,STGTRXRESETING2: begin
				gttxreset_r<=1'b0;
				gtrxreset_r<=1'b0;
			end
			STTXPHSTB1: begin
				done_r<=1'b1;
			end
			STTXPHSTB2: begin
			end
			STTXPHCHECK: begin
			end
			STRXDLYSRESET: begin
				rxdlysreset_r<=1'b1;
			end
			STRXDLYSRESETD1: begin
				rxdlysreset_r<=1'b0;
			end
			ALIGNREQ: begin
				txdata_r<=palignreq;
				txcharisk_r<=palignreqisk;
			end
			RXALIGN: begin
				txdata_r<=palignchar;
				txcharisk_r<=paligncharisk;
			end
			DATA: begin
				txdata_r<=gticc.txdata;
				txcharisk_r<=gticc.txcharisk;
			end
			ERR: begin
				done_r<=1'b0;
			end
		endcase

	end
end
assign CPLLRESET=cpllreset_r;
assign mmcmreset=mmcmreset_r;
assign GTTXRESET=gttxreset_r;
assign GTRXRESET=gtrxreset_r;
assign resetdone=done_r;
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
*/
//,TXPHINITDONE,TXPHALIGNDONE,TXDLYSRESETDONE,RXPHSLIPMONITOR,RXPHMONITOR,RXPHALIGNDONE,RXDLYSRESETDONE
assign dbresetout={cpllreset_r,mmcmreset_r,gttxreset_r,gtrxreset_r};
assign dbdone={RXBYTEISALIGNED
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
assign gticc.rxusrclk=rxusrclk;
assign gticc.txusrclk=txusrclk;
endmodule

