module udplb64 #(parameter PORT=16'hd002)
(input clk,udplink udp,input reset
,input lbclk
,output [63:0] lbrxdata
,output lbrxdv
,input [63:0] lbtxdata
,input lbtxen
,input [15:0] txlength //
,output [15:0] rxlength  // used to help calculate the tx length if needed
);

localparam TXIDLE=4'd0;
localparam TXREQUEST=4'd1;
localparam TXREQACK=4'd2;
localparam TXSTART=4'd3;
localparam TXDATA=4'd4;
localparam TXTAIL=4'd5;
localparam RXIDLE=4'd6;
localparam RXSTART=4'd7;
localparam RXHEAD=4'd8;
localparam RXDATA=4'd9;
localparam RXTAIL=4'd10;
reg [3:0] rxstate=RXIDLE;
reg [3:0] rxnext=RXIDLE;
reg [15:0] rxcnt=0;
reg [7:0] rxdata=0;
reg rxdven=0;
reg [15:0] rxerrcnt=0;
reg rxbusy=0;
reg [15:0] udprxdstport=0;
reg [15:0] udprxsrcport=0;
reg [15:0] udprxlength=0;
assign rxlength=udprxlength-8;
reg [31:0] udprxsrcip=0;
wire protocolmatch=udp.rx.newhead & udp.rx.dstport==PORT;//&udprxdven&~udprxdven_d;
always @(posedge clk) begin
	if (protocolmatch) begin
		udprxdstport<=udp.rx.dstport;
		udprxsrcport<=udp.rx.srcport;
		udprxlength<=udp.rx.length;
	end
end
always @(posedge clk) begin
	if (reset) begin
		rxstate<=RXIDLE;
	end
	else begin
		rxstate<=rxnext;
		rxcnt<=(rxstate==rxnext) & (rxstate!=RXIDLE) ? rxcnt+1 : 0;
	end
end
always @(*) begin
	case(rxstate)
		RXIDLE: rxnext= protocolmatch ? RXDATA: RXIDLE;
		RXDATA: rxnext= ~udp.rx.dven ?  RXTAIL : RXDATA;
		RXTAIL: rxnext=RXIDLE;
	endcase
end
always @(posedge clk) begin
	if (reset) begin
		rxdata<=0;
		rxdven<=0;
		rxerrcnt<=0;
		rxbusy<=0;
	end
	else begin
		case (rxnext)
			RXIDLE: begin
				rxdata<=0;
				rxdven<=0;
				rxerrcnt<=0;
				rxbusy<=0;
			end
			RXDATA: begin
				rxdata<=udp.rx.data;
				rxdven<=udp.rx.dven;
				rxerrcnt<=rxerrcnt+udp.rx.error;
				rxbusy<=1;
			end
			RXTAIL: begin
				rxdata<=0;
				rxdven<=0;
				rxerrcnt<=0;
				rxbusy<=0;
			end
		endcase
	end
end
reg [15:0] cntbyte=0;
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
wire [7:0] fifodata;
wire fifodven;
reg txfifore=0;
reg [15:0] txcnt=0;
reg [7:0] txdata=0;
reg [7:0] datacnt=0;
reg txrequest=0;
reg txdven=0;
reg [15:0] txerrcnt=0;
reg txbusy=0;
reg txbusy_d=0;
reg [15:0] bufcnt=0;
wire txfifoempty;
reg txfifoempty_d=0;
always @(posedge clk) begin
	txbusy_d<=txbusy;
	txfifoempty_d<=txfifoempty;
end
assign udp.tx.data=txdata;
assign udp.tx.dven=txdven;
assign udp.tx.error=|txerrcnt;
wire validfromlb64;
always @(posedge clk) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate==txnext) & (txstate!=TXIDLE) ? txcnt+1 : 0;
	end
end
always @(*) begin
	case(txstate)
		TXIDLE: txnext= ~txfifoempty ? TXREQUEST : TXIDLE;
		TXREQUEST: txnext=TXREQACK;
		TXREQACK: txnext= udp.ack ? TXSTART : TXREQACK;
		TXSTART: txnext=TXDATA;
		TXDATA: txnext= ~validfromlb64 ?  TXTAIL : TXDATA;
		TXTAIL: txnext=TXIDLE;
	endcase
end
reg [15:0] nbuf=1;
wire [7:0] txfifodata;
always @(posedge clk) begin
	if (reset) begin
		txdata<=0;
		txdven<=0;
		txerrcnt<=0;
		txbusy<=0;
		datacnt<=0;
		txrequest<=0;
	end
	else begin
		case (txnext)
			TXIDLE: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
				datacnt<=0;
				txrequest<=0;
			end
			TXREQUEST: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
				datacnt<=0;
				txrequest<=1;
			end
			TXREQACK: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
				datacnt<=0;
				txrequest<=0;
			end
			TXSTART: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
				datacnt<=txlength;
				txrequest<=0;
			end
			TXDATA: begin
				txdata<=txfifodata;
				txdven<=1'b1;
				txerrcnt<=0;
				txbusy<=1;
				txrequest<=0;
				datacnt<=datacnt-1;
			end
			TXTAIL: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=txerrcnt+(|datacnt);
				txbusy<=1;
				datacnt<=0;
				txrequest<=0;
			end
		endcase
	end
end

/*localparam AWIDTH=5;
localparam FIFODW=8;
localparam SIM=0;
fifo#(.AW(AWIDTH),.DW(FIFODW),.SIM(SIM),.BRAM(0),.SAMECLKDOMAIN(1))
udpechofifo(.wclk(clk),.rclk(clk)
,.wr_en(rxdven)
,.din(rxdata)
,.rd_en(fifore)
,.dout(fifodata)
,.doutvalid(fifodven)
,.full()
,.empty(fifoempty)
,.reset(reset)
);
*/
always @(negedge clk) begin
	if (udp.ack) begin
		txfifore<=1'b1;
	end
	else if (txfifoempty_d) begin
		txfifore<=1'b0;
	end
/*	unique case (txstate)
		TXIDLE,TXREQUEST,TXREQACK,TXTAIL: begin
			txfifore<=1'b0;
		end
		TXSTART,TXDATA: begin
			txfifore<=1'b1;
		end
		default: begin
			txfifore<=1'bx;
		end
	endcase
	*/
end
always @(posedge clk) begin
end
assign udp.request_w= txrequest;//(~txbusy & ~txfifoempty & txfifoempty_d)  ;
assign udp.requestcode=PORT;
assign udp.tx.srcport=udprxdstport;
assign udp.tx.dstport=udprxsrcport;
assign udp.tx.length=txlength +8;
//assign udp.tx.udplength=CNTBYTE+8;
assign udp.tx.checksum=0;
fifocore_8_64 rxfifo_8_64 (.rst(reset),.wr_clk(clk),.rd_clk(lbclk),.din(rxdata),.wr_en(rxdven),.rd_en(1'b1),.dout(lbrxdata),.valid(lbrxdv)
,.full(),.empty(),.wr_rst_busy(),.rd_rst_busy());
fifocore_64_8 txfifo_64_8 (.rst(reset)
,.wr_clk(lbclk)
,.rd_clk(clk)
,.din(lbtxdata)
,.wr_en(lbtxen)
,.rd_en(txfifore)
,.dout(txfifodata)
,.valid(validfromlb64)
,.full(),.empty(txfifoempty),.wr_rst_busy(),.rd_rst_busy());
endmodule
