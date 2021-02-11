//`include "constants.vams"
//`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 1ps
module icc_tb(
);

reg sysclk=0;
initial begin
	$dumpfile("icc.vcd");
	$dumpvars(17,icc_tb);
    forever #(2.5) sysclk=~sysclk;
	/*while (1) begin
		sysclk=0; #2.5;
		sysclk=1; #2.5;
	end*/
	$finish();
end
localparam SIM=1;
localparam DWIDTH=16;
reg [31:0] sysclkcnt=0;
always @(posedge sysclk) begin
	sysclkcnt<=sysclkcnt+1;
end
reg sma_mgt_refclk=0;
initial begin
    forever #(4) sma_mgt_refclk=~sma_mgt_refclk;
end
reg helpclk=0;
initial begin
    forever #(8.01) helpclk=~helpclk;
end

reg [2:0] smamgtclk_cnt=0;
always @(posedge sma_mgt_refclk) begin
    smamgtclk_cnt<=smamgtclk_cnt+1;
end


wire reset_sfp=sysclkcnt==1500;
wire reset_sfp2=sysclkcnt==2000;
wire [DWIDTH-1:0] sfptestrx;
wire sfpreconnected=1'b0;
wire sfp_tx_p,sfp_tx_n,sfp_rx_p,sfp_rx_n;
wire sfp2_tx_p,sfp2_tx_n,sfp2_rx_p,sfp2_rx_n;
assign {sfp2_rx_p,sfp2_rx_n}
={sfp_tx_p,sfp_tx_n};
assign {sfp_rx_p,sfp_rx_n}
={sfp2_tx_p,sfp2_tx_n};

iicc #(.DWIDTH(16),.SIM(SIM)) sfpicc();
gticc_gt #(.SIM_CPLLREFCLK_SEL(3'h2),.DWIDTH(DWIDTH))
gticc_gt_sfp(.CPLLLOCKDETCLK(sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(1'b0),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(1'b0),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(sfp_rx_n),.GTXRXP(sfp_rx_p),.GTXTXN(sfp_tx_n),.GTXTXP(sfp_tx_p)
,.QPLLCLK(1'b0),.QPLLREFCLK(1'b0)
,.CPLLREFCLKSEL(3'h2)
,.gticc(sfpicc.gticc.gt)
);
wire reset_sfp_w;
areset resetsfpareset(.clk(sysclk),.areset(reset_sfp),.sreset(reset_sfp_w));
assign sfpicc.sreset=(reset_sfp_w|sfpreconnected);
assign sfpicc.txdata=16'h5c5c;
assign sfpicc.stbtxdata=1'b1;
assign sfptestrx=sfpicc.rxdata;
assign sfpicc.rxphdmtd=0;
assign sfpicc.master=1;

wire [DWIDTH-1:0] sfptestrx2;
wire sfpreconnected2=1'b0;
iicc #(.DWIDTH(16),.SIM(SIM)) sfpicc2();
gticc_gt #(.SIM_CPLLREFCLK_SEL(3'h2),.DWIDTH(DWIDTH))
gticc_gt_sfp2(.CPLLLOCKDETCLK(sysclk)
,.GTNORTHREFCLK0(1'b0),.GTNORTHREFCLK1(1'b0),.GTREFCLK0(1'b0),.GTREFCLK1(sma_mgt_refclk),.GTSOUTHREFCLK0(1'b0),.GTSOUTHREFCLK1(1'b0)
,.GTXRXN(sfp2_rx_n),.GTXRXP(sfp2_rx_p),.GTXTXN(sfp2_tx_n),.GTXTXP(sfp2_tx_p)
,.QPLLCLK(1'b0),.QPLLREFCLK(1'b0)
,.CPLLREFCLKSEL(3'h2)
,.gticc(sfpicc2.gticc.gt)
);
wire reset_sfp_w2;
areset resetsfpareset2(.clk(sysclk),.areset(reset_sfp2),.sreset(reset_sfp_w2));
assign sfpicc2.sreset=(reset_sfp_w2|sfpreconnected2);
assign sfpicc2.txdata=16'h7878;
assign sfpicc2.stbtxdata=1'b1;
assign sfptestrx2=sfpicc2.rxdata;
assign sfpicc2.rxphdmtd=0;
assign sfpicc2.master=0;


wire dmtdreset_w=0;
wire [31:0] dmtdnavr=3;
wire [31:0] stableval=200;
dmtd
dmtd (.clkdmtd(helpclk),.rst(dmtdreset_w),.navr(dmtdnavr),.stableval(stableval)
,.clka(smamgtclk_cnt[0]),.clkb(sfpicc.gticc.rxusrclk)
,.phdiffavr(phdiffavr),.stb_phdiffavr(stb_phdiffavr)
);
wire [31:0] phdiffavr;
wire stb_phdiffavr;
reg [31:0] phdiffavr_x=0;
reg stb_phdiffavr_x=0;
wire [32:0] phx;
wire [32:0] phxval;
areset phdiffavrxdomain(.clk(sfpicc.gticc.txusrclk),.areset({stb_phdiffavr,phdiffavr}),.sreset(phx),.sreset_val(phxval));
always @(posedge sfpicc.gticc.txusrclk) begin
	if (phx[32])
		phdiffavr_x<=phxval[31:0];
	stb_phdiffavr_x<=phx[32];
end
assign sfpicc.rxphdmtd=phdiffavr_x[31:20];
endmodule
