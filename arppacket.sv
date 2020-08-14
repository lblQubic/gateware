interface iarppacket #(parameter TX1RX0=0) (input [47:0] mac, input [31:0] ip,input clk);
	wire [15:0] htype;
	wire [15:0] ptype;
	wire [7:0] hlen;
	wire [7:0] plen;
	wire [15:0] oper;
	wire [47:0] sha;
	wire [31:0] spa;
	wire [47:0] tha;
	wire [31:0] tpa;
	reg busy=0;
	reg error=0;
	wire [28*8-1:0] head;
	wire [5:0] headlen8=28;
	wire ipmatch=(tpa==ip);
	wire newhead;
	if (TX1RX0)
		assign head={htype,ptype,hlen,plen,oper,sha,spa,tha,tpa};
	else
		assign {htype,ptype,hlen,plen,oper,sha,spa,tha,tpa}=head;
	reg [28*8-1:0] headr=0;
	always @(posedge clk) begin
		headr<=head;
	end
	reg [15:0] operr=0;
	reg ipmatchr=0;
	reg [31:0] tpar=0;
	reg [31:0] ipr=0;
	always @(posedge clk) begin
		operr<=oper;
		ipmatchr<=ipmatch;
		tpar<=tpa;
		ipr<=ip;
	end
endinterface
interface iarplink (input clk);
	wire [6*8-1:0] mac;
	wire [4*8-1:0] ip;
	iarppacket #(.TX1RX0(1)) tx(.clk(clk),.ip(ip),.mac(mac));
	iarppacket #(.TX1RX0(0)) rx(.clk(clk),.ip(ip),.mac(mac));
endinterface

module arpoverethernet(iethernet eth, iarplink arp,input reset,input [4*8-1:0] ip
,output dbarpmatch
,output [2:0] dbarpmatch3
,output dbrequest
,output [15:0] dbtxcnt
,output dbethkey
,output [3:0] dbtxstate
,output [3:0] dbrxstate
);
assign arp.mac=eth.mac;
assign arp.ip=ip;
wire clk=eth.clk;
localparam TXIDLE=4'd0;
localparam TXSTART=4'd1;
localparam TXHEAD=4'd2;
localparam TXTAIL=4'd3;
localparam RXIDLE=4'd4;
localparam RXHEAD=4'd5;
localparam RXTAIL=4'd6;
localparam RXPAYLOAD=4'd7;
localparam ETHERTYPEARP=16'h0806;
parameter HEADLEN=28;
localparam OPREQUEST=1;
localparam OPREPLY=2;
assign eth.requestcode=ETHERTYPEARP;
reg ethrxnewframehead=0;
reg [15:0] ethrxethertype=0;
reg ethrxdven=0;
reg [7:0] ethrxdata=0;
reg ethrxcrczero=0;
reg ethrxframeend=0;
wire protocolmatch=ethrxnewframehead & (ethrxethertype==ETHERTYPEARP);
reg protocolsel=0;
reg ethrxerr=0;
always @(posedge clk) begin
/*	if (protocolmatch) begin
		protocolsel<=1'b1;
	end
	else if (ethrxframeend) begin
		protocolsel<=1'b0;
	end
	*/
	ethrxnewframehead <= eth.rx.newframehead;
	ethrxethertype<=eth.rx.ethertype;
//	if (protocolsel|protocolmatch) begin
	ethrxdven<=eth.rx.dven;
	ethrxdata<=eth.rx.data;
	ethrxerr<=eth.rx.err;
	ethrxframeend<=eth.rx.frameend;
//		if (ethrxframeend)
//	ethrxcrczero<=eth.rx.crczero;
//	end
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
reg [HEADLEN*8-1:0] rxhead=0;
assign arp.rx.head=rxhead;
assign arp.rx.newhead=(rxstate==RXHEAD&rxnext==RXPAYLOAD);
reg [7:0] rxdata=0;
reg [15:0] rxerrcnt=0;
always @(*) begin
	case(rxstate)
		RXIDLE: rxnext= protocolmatch ? RXHEAD : RXIDLE;
		RXHEAD: rxnext=rxcnt==HEADLEN-1 ? RXPAYLOAD : RXHEAD;
		RXPAYLOAD: rxnext= (~ethrxdven) ? RXTAIL : RXPAYLOAD;
		RXTAIL: rxnext=RXIDLE;
	endcase
end
reg arpmatch=0;
always @(posedge clk) begin
	case (rxnext)
		RXIDLE: begin
			arpmatch<=0;
			rxerrcnt<=0;
		end
		RXHEAD: begin
			rxhead<={rxhead[HEADLEN*8-9:0],ethrxdata};
			rxerrcnt<=rxerrcnt+ethrxerr;
		end
		RXPAYLOAD: begin
			rxdata<=ethrxdata;
			rxerrcnt<=rxerrcnt+ethrxerr;
		end
		RXTAIL: begin
			arpmatch<=(~|rxerrcnt & arp.rx.ipmatch & (arp.rx.oper==OPREQUEST));
		//	arpmatch<=(arp.rx.ipmatch & (arp.rx.oper==OPREQUEST));
			rxerrcnt<=rxerrcnt+ethrxerr;
		end
	endcase
end
reg [47:0] txsha=0;
reg [31:0] txspa=0;
reg [47:0] txtha=0;
reg [31:0] txtpa=0;

always @(posedge clk) begin
	if (arpmatch) begin
		txsha<=arp.mac;
		txspa<=arp.ip;
		txtha<=arp.rx.sha;
		txtpa<=arp.rx.spa;
	end
end


reg [15:0] txcnt=0;
reg ethkey=0;
reg request=0;
reg ethgo=1'b1;
reg arpmatch_d=0;
/*
always @(posedge clk) begin
	arpmatch_d<=arpmatch;
	if (arpmatch) begin
		request<=1;
	end
	else begin
		if (~|txcnt)
			request<=1'b0;
	end

	if (arpmatch_d) begin
		txcnt<=HEADLEN-1;
	end
	else begin
		if (ethkey) begin
			txcnt<=txcnt-|txcnt;
		end
	end
	if (eth.ack)
		ethkey<=1'b1;
	else if (~|txcnt)
		ethkey<=1'b0;
end*/
reg ethtxdven=0;
reg [7:0] ethtxdata=0;
reg [47:0] ethtxsmac=0;
reg [47:0] ethtxdmac=0;
reg ethtxerr=0;
/*always @(posedge clk) begin
	ethtxdven<=ethkey ? 1'b1 : 0;
	ethtxdata<=ethkey ? arp.tx.head>>((txcnt)*8) : 0;
	ethtxsmac<=ethkey ? arp.mac: 0;
	ethtxdmac<=ethkey ? arp.tx.tha: 0;
end*/
assign eth.tx.dven=ethtxdven;
assign eth.tx.data=ethtxdata;
assign eth.tx.smac=ethtxsmac;
assign eth.tx.dmac=ethtxdmac;
assign eth.tx.ethertype=ETHERTYPEARP;
assign eth.tx.err=ethtxerr;

assign dbarpmatch=arpmatch;
assign dbarpmatch3={~|ethrxerr , arp.rx.ipmatch , (arp.rx.oper==OPREQUEST)};
assign dbrequest=request;
assign dbtxcnt=txcnt;
assign dbethkey=ethkey;



reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate==txnext) & (txstate!=TXIDLE) ? txcnt+1 : 0;
	end
end
reg [HEADLEN*8-1:0] txheadsr=0;
reg [7:0] txdata=0;
reg [15:0] txerrcnt=0;
always @(*) begin
	case(txstate)
		TXIDLE: txnext= eth.ack ? TXSTART : TXIDLE;
		TXSTART: txnext=TXHEAD;
		TXHEAD: txnext=txcnt==HEADLEN-1 ? TXTAIL : TXHEAD;
		TXTAIL: txnext=TXIDLE;
	endcase
end
reg arpmatch=0;
always @(posedge clk) begin
	case (txnext)
		TXIDLE: begin
			ethtxdven<=1'b0;
			ethtxdata<=0;
			ethtxerr<=0;
		end
		TXSTART: begin
			ethtxsmac<=arp.mac;
			ethtxdmac<=txtha;
			ethtxdven<=1'b0;
			ethtxdata<=0;
			ethtxerr<=0;
			txheadsr<=arp.tx.head;
		end
		TXHEAD: begin
			txheadsr<=txheadsr<<8;
			ethtxdata<=txheadsr[HEADLEN*8-1:HEADLEN*8-8];
			ethtxerr<=0;
			ethtxdven<=1'b1;
		end
		TXTAIL: begin
			ethtxdata<=0;
			ethtxerr<=0;
			ethtxdven<=1'b0;
		end
	endcase
end
assign arp.tx.htype=16'h1;
assign arp.tx.ptype=16'h0800;
assign arp.tx.hlen=8'h6;
assign arp.tx.plen=8'h4;
assign arp.tx.oper=OPREPLY;
assign arp.tx.sha=txsha;
assign arp.tx.spa=txspa;
assign arp.tx.tha=txtha;
assign arp.tx.tpa=txtpa;
assign eth.request_w=arpmatch;
assign dbtxstate=txstate;
assign dbrxstate=rxstate;
endmodule
