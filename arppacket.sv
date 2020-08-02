interface iarppacket #(parameter HEADLEN=20,parameter TX1RX0=0) (input [47:0] mac, input [31:0] ip,input clk);
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
endinterface
interface iarplink (input clk);
	wire [6*8-1:0] mac;
	wire [4*8-1:0] ip;
	iarppacket #(.TX1RX0(1)) tx(.clk(clk),.ip(ip),.mac(mac));
	iarppacket #(.TX1RX0(0)) rx(.clk(clk),.ip(ip),.mac(mac));
endinterface

module arpoverethernet(iethernet eth, iarplink arp,input reset,input [4*8-1:0] ip
,output dbarpmatch
,output dbrequest
,output [15:0] dbtxcnt
,output dbethkey
);
assign arp.mac=eth.mac;
assign arp.ip=ip;
assign arp.tx.htype=16'h1;
assign arp.tx.ptype=16'h0800;
assign arp.tx.hlen=8'h6;
assign arp.tx.plen=8'h4;
assign arp.tx.oper=OPREPLY;
wire clk=eth.clk;
localparam RXIDLE=4'd4;
localparam RXHEAD=4'd5;
localparam RXTAIL=4'd6;
localparam RXPAYLOAD=4'd7;
localparam ETHERTYPEARP=16'h0806;
parameter HEADLEN=28;
localparam OPREQUEST=1;
localparam OPREPLY=2;
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
	end*/
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
			arpmatch<=(~|ethrxerr & arp.rx.ipmatch & arp.rx.oper==OPREQUEST);
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
assign arp.tx.sha=txsha;
assign arp.tx.spa=txspa;
assign arp.tx.tha=txtha;
assign arp.tx.tpa=txtpa;
reg [15:0] txcnt=0;
reg ethkey=0;
reg request=0;
reg ethgo=1'b1;
reg arpmatch_d=0;

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
	if (request & ethgo)
		ethkey<=1'b1;
	else if (~|txcnt)
		ethkey<=1'b0;
end
reg ethtxdven=0;
reg [7:0] ethtxdata=0;
reg [47:0] ethtxsmac=0;
reg [47:0] ethtxdmac=0;
always @(posedge clk) begin
	ethtxdven<=ethkey ? 1'b1 : 0;
	ethtxdata<=ethkey ? arp.tx.head>>((txcnt)*8) : 0;
	ethtxsmac<=ethkey ? arp.mac: 0;
	ethtxdmac<=ethkey ? arp.tx.tha: 0;
end
assign eth.tx.dven=ethtxdven;
assign eth.tx.data=ethtxdata;
assign eth.tx.smac=ethtxsmac;
assign eth.tx.dmac=ethtxdmac;
assign eth.tx.ethertype=ethkey ? ETHERTYPEARP: 0;
assign eth.tx.err=1'b0;

assign dbarpmatch=arpmatch;
assign dbrequest=request;
assign dbtxcnt=txcnt;
assign dbethkey=ethkey;
endmodule
