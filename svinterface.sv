interface gmii();
//	wire clk_en;
//	wire tx_clk_62_5;
//	wire rx_clk_62_5;
	wire tx_clk;
	wire rx_clk;
	wire [7:0] txd;
	wire tx_en;
	wire tx_er;
	wire [7:0] rxd;
	wire rx_dv;
	wire rx_er;
//	wire isolate;
/*	reg [31:0] txcnt=0;
	reg [31:0] rxcnt=0;
	reg clk_en_d_tx=0;
	reg clk_en_d_rx=0;
	always @(posedge tx_clk_62_5) begin
		clk_en_d_tx<=clk_en;
		txcnt<=clk_en&~clk_en_d_tx ? 0 : txcnt+clk_en;
	end
	always @(posedge rx_clk_62_5) begin
		clk_en_d_rx<=clk_en;
		rxcnt<=clk_en&~clk_en_d_rx ? 0 : rxcnt+clk_en;
	end
	wire [7:0] testdata;
	assign testdata= ~tx_en ? 8'h00 : (txclkcnt<7)? 8'h55 : (txclkcnt==7) ? 8'hd5 : 8'hcd;
	reg [31:0] txclkcnt=0;
	always @(posedge tx_clk) begin
		txclkcnt<=~tx_en ? 0 : txclkcnt+1;
	end*/
modport phy(output rxd,rx_dv,rx_er,rx_clk,tx_clk
,input txd,tx_en,tx_er);
modport eth(input tx_clk,rx_clk,rxd,rx_dv,rx_er
,output txd,tx_en,tx_er);

endinterface
