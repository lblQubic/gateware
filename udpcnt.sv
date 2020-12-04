module udpcnt #(parameter PORT=16'hd002,CNTWIDTH=64)
(input clk,udplink udp,input reset
,output [CNTWIDTH-1:0] udprxerr
);

reg [CNTWIDTH-1:0] udptxcnt=0;
reg [CNTWIDTH-1:0] udprxcnt=0;
reg [CNTWIDTH-1:0] udprxcnt_pre=0;
reg [CNTWIDTH-1:0] udprxsr=0;
reg [CNTWIDTH-1:0] udptxsr=0;
reg [CNTWIDTH-1:0] udprxerrcnt=0;
reg [CNTWIDTH-1:0] udprxerr_r=0;
assign udprxerr=udprxerr_r;
wire [CNTWIDTH-1:0] udprxdiff;
assign udprxdiff=udprxcnt-udprxcnt_pre;
localparam CNTBYTE=CNTWIDTH/8;
localparam TXIDLE=4'd0;
localparam TXSTART=4'd1;
localparam TXDATA=4'd2;
localparam TXTAIL=4'd3;
localparam RXIDLE=4'd4;
localparam RXSTART=4'd5;
localparam RXHEAD=4'd6;
localparam RXDATA=4'd7;
localparam RXTAIL=4'd8;
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
reg [31:0] udprxsrcip=0;
wire protocolmatch=udp.rx.newhead & udp.rx.dstport==PORT;//&udprxdven&~udprxdven_d;
always @(posedge clk) begin
	if (protocolmatch) begin
		udprxdstport<=udp.rx.dstport;
		udprxsrcport<=udp.rx.srcport;
		udprxlength<=udp.rx.length;
	end
end
always @(posedge clk or posedge reset) begin
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
reg rxdven_d=0;
reg udprxerr_rd=0;
always @(posedge clk) begin
	rxdven_d<=rxdven;
	udprxerr_rd<=udprxerr_r;
	if (~rxdven) begin
		if (rxdven_d) begin
			udprxcnt<=udprxsr;
			udprxcnt_pre<=udprxcnt;
			udprxerrcnt<=udprxerrcnt+udprxerr_r;
			udprxsr<=0;
		end
	end
	else begin
		udprxsr<={udprxsr[55:0],rxdata};
	end
end
always @(*) begin
	if (udprxdiff!=1) begin
		udprxerr_r<=1'b1;
	end
	else begin
		if (udprxerr_rd) begin
			udprxerr_r<=1'b0;
		end
	end
end
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
wire [7:0] fifodata;
wire fifodven;
reg fifore=0;
reg [15:0] txcnt=0;
reg [7:0] txdata=0;
reg [7:0] datacnt=0;
reg txdven=0;
reg [15:0] txerrcnt=0;
reg txbusy=0;
reg txbusy_d=0;
reg [15:0] bufcnt=0;
always @(posedge clk) begin
	txbusy_d<=txbusy;
end
assign udp.tx.data=txdata;
assign udp.tx.dven=txdven;
assign udp.tx.error=|txerrcnt;
always @(posedge clk or posedge reset) begin
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
		TXIDLE: txnext= udp.ack ? TXSTART: TXIDLE;
		TXSTART: txnext=TXDATA;
		TXDATA: txnext= txcnt== CNTBYTE-1 ?  TXTAIL : TXDATA;
		TXTAIL: txnext=TXIDLE;
	endcase
end
reg [15:0] nbuf=1;

always @(posedge clk) begin
	if (reset) begin
		txdata<=0;
		txdven<=0;
		txerrcnt<=0;
		txbusy<=0;
				datacnt<=0;
	end
	else begin
		case (txnext)
			TXIDLE: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
				datacnt<=0;
			end
			TXSTART: begin
				udptxcnt<=udptxcnt+1;
				udptxsr<={udprxerrcnt[7:0], udptxcnt[55:0]};
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
				datacnt<=0;
			end
			TXDATA: begin
				datacnt<=datacnt+1;
				udptxsr<=udptxsr<<8;
				txdata<=(udptxsr >>(CNTWIDTH-8))&8'hff;
				txdven<=1'b1;
				txerrcnt<=0;
				txbusy<=1;
			end
			TXTAIL: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=1;
				datacnt<=0;
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
	unique case (txstate)
		TXIDLE: begin
			fifore<=1'b0;
		end
		TXSTART: begin
			fifore<=1'b1;
		end
		TXDATA: begin
			fifore<=1'b1;
		end
		TXTAIL: begin
			fifore<=1'b0;
		end
		default: begin
			fifore<=1'bx;
		end
	endcase
end
assign udp.request_w= (protocolmatch & ~txbusy)  ;
assign udp.requestcode=PORT;
assign udp.tx.srcport=udprxdstport;
assign udp.tx.dstport=udprxsrcport;
assign udp.tx.length=CNTBYTE+8;
//assign udp.tx.udplength=CNTBYTE+8;
assign udp.tx.checksum=0;
endmodule
