interface udppacket #(parameter TX1RX0=0) (input clk,input reset);
	wire [31:0] srcip;
	wire [31:0] dstip;
	wire [7:0] zeros=0;
	wire [7:0] protocol;
//	wire [15:0] udplength;
	wire [15:0] srcport;
	wire [15:0] dstport;
	wire [15:0] length;
	wire [15:0] checksum;
	wire [7:0] data;
	wire dven;
	wire busy;
	wire newhead;
	wire error;
	wire [63:0] head;
	wire [144-1-8:0] pseudohead;
	if (TX1RX0) begin
		assign head={srcport,dstport,length,checksum};
		assign pseudohead={srcip,dstip,protocol,srcport,dstport,length,checksum};
	end
	else begin
		assign {srcport,dstport,length,checksum}=head;
		assign {srcip,dstip,protocol,srcport,dstport,length,checksum}=pseudohead;
	end
	wire [135+11:0] src={srcip,dstip,protocol,srcport,dstport,length,checksum,data,dven,error,newhead};
	wire [135+11:0] dst;
	assign {srcip,dstip,protocol,srcport,dstport,length,checksum,data,dven,error,newhead}=dst;
	reg [7:0] dbdata=0;
	reg dbdven=0;
	always @(posedge clk) begin
		dbdata<=data;
		dbdven<=dven;
	end
endinterface

interface udplink (input reset,input clk);
	localparam PROTOCOLUDP=8'h11;
	udppacket #(.TX1RX0(1))tx(.clk(clk),.reset(reset));
	udppacket #(.TX1RX0(0))rx(.clk(clk),.reset(reset));
	wire request_w;
	wire [15:0] requestcode;
	reg [7:0] txrequesttype=0;
	wire ack;
	wire [15:0] ackcode;
	reg request=0;
	wire requestacpt;
	always @(posedge clk) begin
		if (request_w)
			request<=1'b1;
		else if (requestacpt)
			request<=1'b0;
	end
	reg dback=0;
	reg [15:0] dbackcode=0;
	always @(posedge clk) begin
		dback<=ack;
		dbackcode<=ackcode;
	end
endinterface

module udpoveripv4#(parameter SIM=0)
(ipv4link ipv4, udplink udp,input reset
,output [3:0] dbtxstate
,output [3:0] dbrxstate
);
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

localparam PROTOCOLUDP=8'h11;
assign ipv4.requestcode=PROTOCOLUDP;

reg ipv4rxnewframehead=0;
reg [7:0] ipv4rxprotocol=0;
reg ipv4rxdven=0;
reg [7:0] ipv4rxdata=0;
wire protocolmatch=ipv4rxnewframehead & (ipv4rxprotocol==PROTOCOLUDP);
reg ipv4rxerr=0;
reg rxbusy=0;
reg [15:0] hd16=0;
reg [15:0] rxchecksum=0;
reg carrier=0;
reg [31:0] udprxsrcip=0;
reg [31:0] udprxdstip=0;
reg [7:0] udprxprotocol=0;
//reg [15:0] udprxudplength=0;
reg [3:0] ipv4rxihl=0;
reg [5:0] ipv4rxdscp=0;
reg [1:0] ipv4rxecn=0;
reg [15:0] ipv4rxidentification=0;
always @(posedge clk) begin
	ipv4rxnewframehead <= ipv4.rx.newhead;
	ipv4rxprotocol<=ipv4.rx.protocol;
	ipv4rxdven<=ipv4.rx.dven;
	ipv4rxdata<=ipv4.rx.data;
	ipv4rxerr<=ipv4.rx.error;
	if (protocolmatch) begin
		udprxsrcip<=ipv4.rx.srcip;
		udprxdstip<=ipv4.rx.dstip;
		udprxprotocol<=ipv4.rx.protocol;
		ipv4rxihl<=ipv4.rx.ihl;
		ipv4rxdscp<=ipv4.rx.dscp;
		ipv4rxecn<=ipv4.rx.ecn;
		ipv4rxidentification<=ipv4.rx.identification;
	end
end
reg [3:0] rxstate=RXIDLE;
reg [3:0] rxnext=RXIDLE;
reg [15:0] rxcnt=0;
reg [15:0] rxtotalcnt=0;
reg [8*8-1:0] rxhead=0;
reg [7:0] rxdata=0;
reg rxdven=0;
reg [15:0] rxerrcnt=0;
reg [3:0] rxihl=0;
reg [15:0] rxtotallength=0;
assign udp.rx.newhead=newhead;
assign udp.rx.data=rxdata;
assign udp.rx.dven=rxdven;
assign udp.rx.error=|rxerrcnt;
assign udp.rx.busy=rxbusy;
assign udp.rx.srcip=udprxsrcip;
assign udp.rx.dstip=udprxdstip;
assign udp.rx.protocol=udprxprotocol;
//assign udp.rx.udplength=udp.rx.length;

wire newhead=(rxstate==RXHEAD&rxnext==RXPAYLOAD);
assign udp.rx.head=rxhead;
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
reg [7:0] udptxdata=0;
reg udptxdven;
wire [7:0] txfifodata;
wire txfifodven;
reg txfifore=0;
reg txbusy=0;
reg [63:0] txheadsr=0;
assign udp.tx.busy=txbusy;
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
wire txfifofull;
always @(*) begin
	case(txstate)
		TXIDLE: txnext= udp.ack ? TXSTART : TXIDLE;
		TXSTART: txnext= udptxdven ? TXHEAD : TXSTART;
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
		txtotalcnt<=0;
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
			txheadsr<=udp.tx.head;
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
	requestacpt<=udp.request;
end
assign ipv4.tx.version=4;
assign ipv4.tx.ihl=ipv4rxihl;
assign ipv4.tx.dscp=ipv4rxdscp;
assign ipv4.tx.ecn=ipv4rxecn;
assign ipv4.tx.totallength=(ipv4rxihl<<2)+udp.tx.length;//    ipv4.rx.totallength; // ?
assign ipv4.tx.identification=ipv4rxidentification;
assign ipv4.tx.flags=3'b010;//ipv4.rx.flags;// ?
assign ipv4.tx.fragmentoffset=0;//ipv4.rx.fragmentoffset; // ?
assign ipv4.tx.timetolive=8'h40;//ipv4.rx.timetolive;
assign ipv4.tx.protocol=PROTOCOLUDP;//8'h11;/ipv4.rx.protocol;
assign ipv4.tx.headerchecksum=0;
assign ipv4.tx.srcip=ipv4.rx.dstip;
assign ipv4.tx.dstip=ipv4.rx.srcip;
assign ipv4.tx.options=0;//ipv4.rx.options;
assign ipv4.tx.data=txdata;
assign ipv4.tx.dven=txdven;
assign ipv4.tx.error=|txerrcnt;
assign ipv4.tx.newhead=0;

assign ipv4.request_w=udp.request;
assign udp.requestacpt=udp.request;
assign udp.ack=ipv4.ack;

always @(posedge clk) begin
	udptxdata<=udp.tx.data;
	udptxdven<=udp.tx.dven;
end
fifo#(.AW(5),.DW(8),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
fifotxd(.wclk(clk),.rclk(clk),.wr_en(udptxdven),.din(udptxdata),.rd_en(txfifore),.dout(txfifodata),.full(txfifofull),.empty(txfifoempty),.rst(reset),.doutvalid(txfifodven));
assign dbtxstate=txstate;
assign dbrxstate=rxstate;
endmodule

