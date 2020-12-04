module udpecho #(parameter PORT=16'hd000)
(input clk,udplink udp,input reset);

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
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
wire [7:0] fifodata;
wire fifodven;
reg fifore=0;
reg [15:0] txcnt=0;
reg [7:0] txdata=0;
reg txdven=0;
reg [15:0] txerrcnt=0;
reg txbusy=0;
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
		TXDATA: txnext= ~fifodven ?  TXTAIL : TXDATA;
		TXTAIL: txnext=TXIDLE;
	endcase
end
always @(posedge clk) begin
	if (reset) begin
		txdata<=0;
		txdven<=0;
		txerrcnt<=0;
		txbusy<=0;
	end
	else begin
		case (txnext)
			TXIDLE: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=0;
			end
			TXDATA: begin
				txdata<=fifodata;
				txdven<=fifodven;
				txerrcnt<=txerrcnt;
				txbusy<=1;
			end
			TXTAIL: begin
				txdata<=0;
				txdven<=0;
				txerrcnt<=0;
				txbusy<=1;
			end
		endcase
	end
end

localparam AWIDTH=5;
localparam FIFODW=8;
localparam SIM=0;
fifo#(.AW(AWIDTH),.DW(FIFODW),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
udpechofifo(.wclk(clk),.rclk(clk)
,.wr_en(rxdven)
,.din(rxdata)
,.rd_en(fifore)
,.dout(fifodata)
,.doutvalid(fifodven)
,.full()
,.empty()
,.rst(reset)
);
always @(negedge clk) begin
	case (txstate)
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
	endcase
end
assign udp.request_w=protocolmatch & ~txbusy;
assign udp.requestcode=PORT;
assign udp.tx.srcport=udprxdstport;
assign udp.tx.dstport=udprxsrcport;
assign udp.tx.length=udprxlength;
//assign udp.tx.udplength=udprxlength;
assign udp.tx.checksum=0;
endmodule
/*
wire reset=0;
wire fifoempty;
reg [7:0] udprxdata=0;
reg udprxdven=0;
reg [7:0] udprxdata_d=0;
reg udprxdven_d=0;
reg key=0;
wire [7:0] fifordata;
wire fiforvalid;
always @(posedge clk) begin
	if (udp.ack) begin
		key<=1'b1;
	end
	else if (~fiforvalid) begin
		key<=1'b0;
	end
end
wire match;
reg [7:0] udptxdata=0;
reg udptxdven=0;
reg [15:0] udprxdstport=0;
reg [15:0] udprxsrcport=0;
reg [15:0] udprxlength=0;
always @(posedge clk) begin
	udprxdata<=udp.rx.data;
	udprxdven<=udp.rx.dven;
	udprxdata_d<=udprxdata;
	udprxdven_d<=udprxdven;
	udptxdata<=fifordata;
	udptxdven<=fiforvalid;
	if (match) begin
		udprxdstport<=udp.rx.dstport;
		udprxsrcport<=udp.rx.srcport;
		udprxlength<=udp.rx.length;
	end

end
assign udp.tx.srcport=udprxdstport;
assign udp.tx.dstport=udprxsrcport;
assign udp.tx.length=udprxlength;
assign udp.tx.udplength=udp.tx.length;
assign udp.tx.checksum=0;
assign match=udp.rx.newhead & udp.rx.dstport==PORT;//&udprxdven&~udprxdven_d;
assign udp.request_w=match;
assign udp.requestcode=PORT;
assign udp.tx.data=udptxdata;
assign udp.tx.dven=udptxdven;
//fifocore fifocore (.clk(clk),.srst(reset),.din(udp.rx.data),.wr_en(udp.rx.dven),.rd_en(key));
*/
