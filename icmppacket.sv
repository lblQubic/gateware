interface icmppacket #(parameter TX1RX0=0) (input clk,input reset);
	wire [7:0] icmptype;
	wire [7:0] code;
	wire [15:0] checksum;
	wire [31:0] restofheader;
	wire [7:0] data;
	wire dven;
	wire busy;
	wire newhead;
	wire error;
	wire [63:0] head;
	if (TX1RX0)
		assign head={icmptype,code,checksum,restofheader};
	else
		assign {icmptype,code,checksum,restofheader}=head;
	wire [74:0] src={icmptype,code,checksum,restofheader,data,dven,error,newhead};
	wire [74:0] dst;
	assign {icmptype,code,checksum,restofheader,data,dven,error,newhead}=dst;
endinterface

interface icmplink (input reset,input clk);
	localparam PROTOCOLICMP=8'h01;
	icmppacket #(.TX1RX0(1))tx(.clk(clk),.reset(reset));
	icmppacket #(.TX1RX0(0))rx(.clk(clk),.reset(reset));
	wire request_w;
	wire [7:0] requestcode;
	reg [7:0] txrequesttype=0;
	wire ack;
	wire [7:0] ackcode;
	reg request=0;
	wire requestacpt;
	always @(posedge clk) begin
		if (request_w)
			request<=1'b1;
		else if (requestacpt)
			request<=1'b0;
	end
endinterface

module icmpoveripv4#(parameter SIM=0)
(ipv4link ipv4, icmplink icmp,input reset);
wire clk=ipv4.clk;

localparam TXIDLE=4'd0;
localparam TXSTART=4'd1;
localparam TXHEAD=4'd2;
localparam TXPAYLOAD=4'd3;
localparam TXTAIL=4'd4;
localparam RXIDLE=4'd5;
localparam RXHEAD=4'd6;
localparam RXPAYLOAD=4'd7;
localparam RXTAIL=4'd8;

localparam PROTOCOLICMP=8'h01;
assign ipv4.requestcode=PROTOCOLICMP;

reg ipv4rxnewframehead=0;
reg [15:0] ipv4rxprotocol=0;
reg ipv4rxdven=0;
reg [7:0] ipv4rxdata=0;
wire protocolmatch=ipv4rxnewframehead & (ipv4rxprotocol==PROTOCOLICMP);
reg ipv4rxerr=0;
reg rxbusy=0;
reg [15:0] hd16=0;
reg [15:0] rxchecksum=0;
reg carrier=0;
always @(posedge clk) begin
	ipv4rxnewframehead <= ipv4.rx.newhead;
	ipv4rxprotocol<=ipv4.rx.protocol;
	ipv4rxdven<=ipv4.rx.dven;
	ipv4rxdata<=ipv4.rx.data;
	ipv4rxerr<=ipv4.rx.error;
end
reg [3:0] rxstate=RXIDLE;
reg [3:0] rxnext=RXIDLE;
reg [15:0] rxcnt=0;
reg [15:0] rxtotalcnt=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		rxstate<=RXIDLE;
	end
	else begin
		rxstate<=rxnext;
		rxcnt<=(rxstate==rxnext) & (rxstate!=RXIDLE) ? rxcnt+1 : 0;
	end
end
reg [8*8-1:0] rxhead=0;
reg [7:0] rxdata=0;
reg rxdven=0;
reg [15:0] rxerrcnt=0;
reg [3:0] rxihl=0;
reg [15:0] rxtotallength=0;
assign icmp.rx.newhead=newhead;
assign icmp.rx.data=rxdata;
assign icmp.rx.dven=rxdven;
assign icmp.rx.error=|rxerrcnt;
assign icmp.rx.busy=rxbusy;

wire newhead=(rxstate==RXHEAD&rxnext==RXPAYLOAD);
assign icmp.rx.head=rxhead;
always @(*) begin
	case(rxstate)
		RXIDLE: rxnext= protocolmatch ? RXHEAD : RXIDLE;
		RXHEAD: rxnext=rxcnt==8 ? RXPAYLOAD : RXHEAD;
		RXPAYLOAD: rxnext= ~ipv4rxdven ?  RXTAIL : RXPAYLOAD;
		RXTAIL: rxnext=RXIDLE;
	endcase
end
always @(posedge clk) begin
	if (reset)begin
		rxerrcnt<=0;
		rxdata<=0;
		rxdven<=1'b0;
		rxbusy<=1'b0;
		rxtotalcnt<=1'b0;
	end
	else begin
		case(rxnext)
			RXIDLE:begin
				rxerrcnt<=0;
				rxdata<=0;
				rxdven<=1'b0;
				rxchecksum<=0;
				hd16<=0;
				carrier<=0;
				rxbusy<=1'b0;
				rxtotalcnt<=1'b0;
			end
			RXHEAD:begin
				rxhead<={rxhead[8*8-9:0],ipv4rxdata};
				rxerrcnt<=rxerrcnt+ipv4rxerr;
				rxdven<=1'b0;
				hd16<={hd16[7:0],ipv4rxdata};
				//hd16<={ipv4rxdata,hd16[15:8]};
				rxbusy<=1'b1;
				rxtotalcnt<=rxtotalcnt+1;
			end
			RXPAYLOAD:begin
				if (newhead)
					rxerrcnt<=rxerrcnt+~(&rxchecksum);
				rxerrcnt<=rxerrcnt+ipv4rxerr;
				rxdata<=ipv4rxdata;
				rxdven<=1'b1;
				rxbusy<=1'b1;
				hd16<={hd16[7:0],ipv4rxdata};
				// hd16<={ipv4rxdata,hd16[15:8]};
				rxtotalcnt<=rxtotalcnt+1;
			end
			RXTAIL:begin
				rxdven<=1'b0;
				hd16<=0;
				rxdata<=0;
				rxbusy<=1'b1;
				rxtotalcnt<=rxtotalcnt+1;
			end
		endcase
	end
end
always @(negedge clk) begin
	case (rxstate)
		RXHEAD,RXPAYLOAD,RXTAIL: begin
			if (rxtotalcnt[0])
				{carrier,rxchecksum}= rxchecksum+hd16+carrier;
		end
	endcase
end


reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
reg [7:0] icmptxdata=0;
reg icmptxdven;
wire [7:0] txfifodata;
wire txfifodven;
reg txfifore=0;
reg txbusy=0;
reg [63:0] txheadsr=0;
assign icmp.tx.busy=txbusy;
assign ipv4.request_w=icmp.request;
assign icmp.ack=ipv4.ack;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate==txnext) & (txstate!=TXIDLE) ? txcnt+1 : 0;
	end
end
reg [15:0] txerrcnt=0;
reg [7:0] txdata=0;
reg txdven=0;
reg [15:0] txtotalcnt=0;
wire txfifoempty;
always @(*) begin
	case(txstate)
		TXIDLE: txnext= icmp.ack ? TXSTART : TXIDLE;
		TXSTART: txnext=TXHEAD;
		TXHEAD: txnext=txcnt==8-1 ? TXPAYLOAD : TXHEAD;
		TXPAYLOAD: txnext= ~txfifodven ?  TXTAIL : TXPAYLOAD;
		TXTAIL: txnext=TXIDLE;
	endcase
end
always @(posedge clk) begin
	if (reset)begin
		txerrcnt<=0;
		txdata<=0;
		txdven<=1'b0;
		txbusy<=1'b0;
		txtotalcnt<=1'b0;
	end
	else begin
		case(txnext)
			TXIDLE: begin
				txerrcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txbusy<=1'b0;
			end
			TXSTART: begin
				txerrcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txbusy<=1'b0;
			end
			TXHEAD: begin
				txerrcnt<=0;
				txdata<=txheadsr[63:56];
				txdven<=1'b1;
				txbusy<=1'b0;
			end
			TXPAYLOAD: begin
				txerrcnt<=0;
				txdata<=txfifodata;
				txdven<=txfifodven;
				txbusy<=1'b0;
			end
			TXTAIL: begin
				txerrcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txbusy<=1'b0;
			end
		endcase
	end
end
reg requestacpt=0;
always @(negedge clk) begin
	case (txstate)
		TXIDLE: begin
			txfifore<=1'b0;
		end
		TXSTART: begin
			txheadsr<=icmp.tx.head;
		end
		TXHEAD: begin
			txheadsr<=txheadsr<<8;
			if (txcnt==6)
				txfifore<=1'b1;
		end
		TXPAYLOAD: begin
			txfifore<=1'b1;
		end
		TXTAIL: begin
			txfifore<=1'b0;
		end

	endcase
	requestacpt<=icmp.request;
end
assign ipv4.tx.version=ipv4.rx.version;
assign ipv4.tx.ihl=ipv4.rx.ihl;
assign ipv4.tx.dscp=ipv4.rx.dscp;
assign ipv4.tx.ecn=ipv4.rx.ecn;
assign ipv4.tx.totallength=ipv4.rx.totallength;
assign ipv4.tx.identification=ipv4.rx.identification;
assign ipv4.tx.flags=ipv4.rx.flags;
assign ipv4.tx.fragmentoffset=ipv4.rx.fragmentoffset;
assign ipv4.tx.timetolive=ipv4.rx.timetolive;
assign ipv4.tx.protocol=ipv4.rx.protocol;
assign ipv4.tx.headerchecksum=0;
assign ipv4.tx.srcip=ipv4.rx.dstip;
assign ipv4.tx.dstip=ipv4.rx.srcip;
assign ipv4.tx.options=ipv4.rx.options;
assign ipv4.tx.data=txdata;
assign ipv4.tx.dven=txdven;
assign ipv4.tx.error=|txerrcnt;
assign ipv4.tx.newhead=0;
assign icmp.ack=ipv4.ack;
assign ipv4.request_w=icmp.request;
assign icmp.requestacpt=icmp.request;
always @(posedge clk) begin
	icmptxdata<=icmp.tx.data;
	icmptxdven<=icmp.tx.dven;
end
fifo#(.AW(5),.DW(9),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
fifotxd(.wclk(clk),.rclk(clk),.wr_en(icmptxdven),.din(icmptxdata),.rd_en(txfifore),.dout(txfifodata),.full(txfifofull),.empty(txfifoempty),.reset(reset),.doutvalid(txfifodven));
endmodule

