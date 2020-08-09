interface pingpacket #(parameter TX1RX0=0) (input clk,input reset);
	wire [7:0] data;
	wire dven;
	wire busy;
	wire newhead;
	wire error;
	wire [63:0] head;
endinterface

interface pinglink (input reset,input clk);
	localparam ECHOREQUEST=8'h08;
	localparam ECHOREPLY=8'h0;
	pingpacket #(.TX1RX0(1))tx(.clk(clk),.reset(reset));
	pingpacket #(.TX1RX0(0))rx(.clk(clk),.reset(reset));
	wire request_w;
	wire requestacpt;
	wire ack;
	wire [7:0] ackcode;
	wire [7:0] requestcode;
	reg request=0;
	always @(posedge clk) begin
		if (request_w)
			request<=1'b1;
		else if (requestacpt)
			request<=1'b0;
	end
endinterface


module pingovericmp#(parameter SIM=0)(icmplink icmp,input reset);
wire clk=icmp.clk;
pinglink ping(.reset(reset),.clk(clk));

localparam TXIDLE=4'd0;
localparam TXSTART=4'd1;
localparam TXHEAD=4'd2;
localparam TXPAYLOAD=4'd3;
localparam TXTAIL=4'd4;
localparam RXIDLE=4'd5;
localparam RXPAYLOAD=4'd6;
localparam RXTAIL=4'd7;

localparam ECHOREQUEST=8'h08;
localparam ECHOREPLY=8'h0;
localparam CODE=8'h0;

reg icmprxnewframehead=0;
reg [7:0] icmprxicmptype=0;
reg [7:0] icmprxcode=0;
reg icmprxdven=0;
reg [7:0] icmprxdata=0;
wire icmptypematch=icmprxnewframehead & (icmprxicmptype==ECHOREQUEST);
reg icmprxerror=0;
reg rxbusy=0;
reg [15:0] rxchecksum=0;
reg carrier=0;
reg txcheckcarrier=0;
reg [15:0] icmprxchecksum=0;
reg [15:0] icmptxchecksum=0;
always @(posedge clk) begin
	icmprxnewframehead <= icmp.rx.newhead;
	icmprxicmptype<=icmp.rx.icmptype;
	icmprxdven<=icmp.rx.dven;
	icmprxdata<=icmp.rx.data;
	icmprxerror<=icmp.rx.error;
end
reg [3:0] rxstate=RXIDLE;
reg [3:0] rxnext=RXIDLE;
reg [15:0] rxcnt=0;
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
reg [15:0] rxerrorcnt=0;
reg [3:0] rxihl=0;
reg [15:0] rxtotallength=0;
assign ping.rx.newhead=newhead;
assign ping.rx.data=rxdata;
assign ping.rx.dven=rxdven;
assign ping.rx.error=|rxerrorcnt;
assign ping.rx.busy=rxbusy;
wire newhead=(rxstate==RXIDLE&rxnext==RXPAYLOAD);
assign ping.rx.head=rxhead;
reg newhead_d=0;
reg newhead_d2=0;
reg newhead_d3=0;
always @(posedge clk) begin
	if (newhead) begin
		icmprxchecksum<=icmp.rx.checksum;
		{txcheckcarrier,icmptxchecksum}<=icmp.rx.checksum+{ECHOREQUEST,CODE}-{ECHOREPLY,CODE};
	end
	else if (newhead_d) begin
		icmptxchecksum<=icmptxchecksum+txcheckcarrier;
	end
	newhead_d<=newhead;
	newhead_d2<=newhead_d;
	newhead_d3<=newhead_d2;
end
always @(*) begin
	case(rxstate)
		RXIDLE: rxnext= icmptypematch ? RXPAYLOAD : RXIDLE;
		RXPAYLOAD: rxnext= ~icmprxdven ?  RXTAIL : RXPAYLOAD;
		RXTAIL: rxnext=RXIDLE;
	endcase
end
always @(posedge clk) begin
	if (reset)begin
		rxerrorcnt<=0;
		rxdata<=0;
		rxdven<=1'b0;
		rxbusy<=1'b0;
	end
	else begin
		case(rxnext)
			RXIDLE:begin
				rxerrorcnt<=0;
				rxdata<=0;
				rxdven<=1'b0;
				rxchecksum<=0;
				carrier<=0;
				rxbusy<=1'b0;
			end
			RXPAYLOAD:begin
				rxerrorcnt<=rxerrorcnt+icmprxerror;
				rxdata<=icmprxdata;
				rxdven<=icmprxdven;
				rxbusy<=1'b1;
			end
			RXTAIL:begin
				rxdven<=1'b0;
				rxdata<=0;
				rxbusy<=1'b1;
				rxerrorcnt<=rxerrorcnt+~&(rxchecksum+carrier);
			end
		endcase
	end
end

/*localparam RXTXIDLE=
localparam RXTXREQ
localparam RXTXACK
localparam RXTXDATA
reg [3:0] rxtxstate=0;
reg [3:0] rxtxnext=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		rxtxstate<=RXTXIDLE;
	end
	else begin
		rxtxstate<=rxtxnext;
		rxtxcnt<=(rxtxstate==rxtxnext) & (rxtxstate!=RXTXIDLE) ? rxtxcnt+1 : 0;
	end
end
always @(*) begin
	case(txstate)
		RXTXIDLE:rxtxnext= reply ? RXTXREQ : RXTXIDLE;
		RXTXREQ:rxtxnext= ack ? RXTXACK : RXTXREQ;
		RXTXACK:rxtxnext= datago ? RXTXDATA : RXTXACK;
		RXTXDATA: rxtxnext= ~txen ? RXTXIDLE : RXTXDATA;
	endcase
end
*/
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
wire txfifofull;
wire txfifoempty;
wire txdone=txfifoempty;
reg key=0;
wire [7:0] txfifodata;
always @(posedge clk) begin
	if (icmp.ack)
		key<=1'b1;
	else if (txdone)
		key<=1'b0;
end
reg txfiforen=0;//&icmp.datago;
reg icmptxdven=0;
reg [7:0] icmptxdata=0;
wire txfifodven;
always @(posedge clk) begin
	icmptxdven<=key ? txfifodven :0;//~(newhead|newhead_d|newhead_d2|newhead_d3) : 0;
	icmptxdata<=key ? txfifodata : 0;
end

wire txready=~(newhead|newhead_d|newhead_d2|newhead_d3);
fifo#(.AW(5),.DW(8),.SIM(SIM),.BRAM(0),.SAMECLKDOMAIN(1))
fifotxd(.wclk(clk),.rclk(clk)
,.wen(rxdven)
,.wdata(rxdata)
,.ren(txfiforen)
,.rdata(txfifodata)
,.full(txfifofull)
,.empty(txfifoempty)
,.reset(reset)
,.rdatavalid(txfifodven)
);


always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate==txnext) & (txstate!=TXIDLE) ? txcnt+1 : 0;
	end
end
reg [7:0] txdata=0;
reg txdven=0;
reg txbusy=0;
reg [15:0] txerrorcnt=0;
/*assign ping.tx.data=txdata;
assign ping.tx.dven=txdven;
assign ping.tx.error=|txerrorcnt;
assign ping.tx.busy=txbusy;
*/
reg test=0;
reg [7:0] testd=0;
reg ackd=0;
always @(posedge clk) begin
	ackd<=icmp.ack;
	test<=txfifodven;
	testd<=txfifodata;
end
always @(*) begin
	case(txstate)
		TXIDLE: txnext= icmp.ack ? TXSTART : TXIDLE;
		TXSTART: txnext= txfifodven ?  TXPAYLOAD : TXSTART;
		TXPAYLOAD: txnext= txfifoempty ?  TXTAIL : TXPAYLOAD;
		TXTAIL: txnext=TXIDLE;
	endcase
end
always @(posedge clk) begin
	if (reset)begin
		txerrorcnt<=0;
		txdata<=0;
		txdven<=1'b0;
		txbusy<=1'b0;
	end
	else begin
		case(txnext)
			TXIDLE:begin
				txerrorcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txbusy<=1'b0;
			end
			TXSTART:begin
				txerrorcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txbusy<=1'b1;
			end
	   TXPAYLOAD:begin
		   txerrorcnt<=0;
		   txdata<=txfifodata;
		   txdven<=txfifodven;
		   txbusy<=1'b1;
	   end
	   TXTAIL:begin
		   txdven<=1'b0;
		   txdata<=0;
		   txbusy<=1'b1;
		   txerrorcnt<=0;
	   end
   endcase
	end
end
always @(negedge clk) begin
	if (txstate==TXPAYLOAD || txstate==TXSTART) begin
		txfiforen<=1'b1;
	end
	else begin
		if (txfifoempty) begin
			txfiforen<=1'b0;
		end
	end
end

assign icmp.tx.dven=txdven;//icmptxdven;
assign icmp.tx.data=txdata;//icmptxdata;
assign icmp.tx.checksum=icmptxchecksum;
assign icmp.tx.icmptype=ECHOREPLY;
assign icmp.tx.code=0;
assign icmp.tx.restofheader=icmp.rx.restofheader;
assign icmp.tx.error=1'b0;
assign icmp.request_w=ping.request;
assign icmp.requestcode=ping.requestcode;
assign ping.request_w=newhead;
assign ping.requestcode=ECHOREQUEST;
assign ping.requestacpt=ping.request;
assign ping.ack=icmp.ack;
endmodule
