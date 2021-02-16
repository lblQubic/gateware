module gticc_gt #
(parameter DWIDTH=16
,parameter GT_SIM_GTRESET_SPEEDUP = "TRUE"
,parameter RX_DFE_KL_CFG2_IN = 32'h301148AC
,parameter SIM_CPLLREFCLK_SEL = 3'b001
,parameter PMA_RSV_IN = 32'h00018480
,parameter PCS_RSVD_ATTR_IN = 48'h000000000000
,localparam DBYTE=DWIDTH/8
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
,igticc.gt gticc
,output RXOUTCLKFABRIC
,output TXOUTCLKFABRIC
,output RXOUTCLKPCS
,output TXOUTCLKPCS
,output dblocked
,output dbrxcdrlock
,output [3:0] dbdonecriteria
,input [3:0] mask
);

wire RXUSERRDY=gticc.rxuserrdy;
wire TXUSERRDY=gticc.txuserrdy;
wire [DBYTE-1:0] TXCHARISK=gticc.txcharisk;
wire [DWIDTH-1:0] TXDATA=gticc.txdata;
wire reset=gticc.reset;
wire [DBYTE-1:0] RXCHARISK;
wire [DBYTE-1:0] RXCHARISCOMMA;
wire [DBYTE-1:0] RXDISPERR;
wire [DBYTE-1:0] RXNOTINTABLE;
wire [DWIDTH-1:0] RXDATA;
wire resetdone;
wire rxusrclk;
wire txusrclk;


wire txrxreset1;
wire txrxreset0;
wire txrxreset=txrxreset0|txrxreset1;
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
assign txcharisk8=~resetdone ? 8'h1 : {{8-DBYTE-1{1'b0}},TXCHARISK};
assign txdata64=~resetdone ? 64'h000000bc : {{64-DWIDTH{1'b0}},TXDATA} ;
assign {rxdata_float_i,RXDATA}=rxdata64;
assign {rxdisperr_float_i,RXDISPERR}=rxdisperr8;
assign {rxcharisk_float_i,RXCHARISK}=rxcharisk8;
assign {rxchariscomma_float_i,RXCHARISCOMMA}=rxchariscomma8;
assign {rxnotintable_float_i,RXNOTINTABLE}=rxnotintable8;
wire RXCDRRESET=txrxreset;
wire CPLLRESET;
wire GTTXRESET=txrxreset;
wire GTRXRESET=txrxreset;
wire RXPMARESET=txrxreset;
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
assign txusrclk=TXUSRCLK2;
assign rxusrclk=RXUSRCLK2;
//wire RXDISPERR;

wire TXOUTCLK;
wire RXOUTCLK;
reg locked=0;
assign dblocked=locked;
reg [2:0] unlockcnt=0;
wire rxuserrdy=RXUSERRDY&locked;
wire RXCDRLOCK;
assign dbrxcdrlock=RXCDRLOCK;

`include "iccgt.vh"

BUFG txoutclk_bufg(.I(TXOUTCLK),.O(TXUSRCLK));
assign TXUSRCLK2=TXUSRCLK;
BUFG rxoutclk_bufg(.I(RXOUTCLK),.O(RXUSRCLK));
assign RXUSRCLK2=RXUSRCLK;
localparam LOCKMAX=3;
always @(posedge RXUSRCLK or posedge reset) begin
	if (reset) begin
		unlockcnt<=0;
		locked<=1'b0;
	end
	else begin
		if (~RXCDRLOCK) begin
			if (locked!=LOCKMAX) begin
				unlockcnt<=unlockcnt+1;
			end
			else begin
				locked<=1'b0;
			end
		end
		else begin
			unlockcnt<=0;
			locked<=1'b1;
		end
	end
end


wire txalign;
wire rdyfortxrxreset=&{CPLLLOCK,~CPLLFBCLKLOST,~CPLLREFCLKLOST};
wire txrxresetdone=&{TXRESETDONE,RXRESETDONE,rdyfortxrxreset};
localparam NSTEP=4;
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] resetout;
wire [NSTEP-1:0] donecriteria={1'b1,txrxresetdone,txrxresetdone,rdyfortxrxreset} | ~mask;
assign {txalign,txrxreset1,txrxreset0,CPLLRESET}=resetout&mask;
assign dbdonecriteria=donecriteria;
wire [NSTEP*16-1:0] readylength={NSTEP{16'd10}};//,16'd10,16'd10};
wire [NSTEP*16-1:0] resetlength={NSTEP{16'd100}};//,16'd10,16'd10};
wire [NSTEP*16-1:0] resettodonecheck={NSTEP{16'd10}};//,16'd10,16'd10};
wire [NSTEP*32-1:0] resettimeout={NSTEP{32'h10000000}};
assign resetdone=&done & txrxresetdone;

chainreset #(.NSTEP(NSTEP))
chainreset(.clk(CPLLLOCKDETCLK)
,.resetin(reset)
,.resetout(resetout)
,.donecriteria(donecriteria)
,.resetlength(resetlength)
,.readylength(readylength)
,.resettodonecheck(resettodonecheck)
,.resettimeout(resettimeout)
,.done(done)
);

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

