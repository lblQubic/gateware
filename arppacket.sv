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
	reg readyvalid=0;
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
	iarppacket #(.TX1RX0(1)) tx(.clk(clk),.ip(ip));
	iarppacket #(.TX1RX0(0)) rx(.clk(clk),.ip(ip));
endinterface

module arpoverethernet(iethernet eth, iarplink arp,input reset,input [4*8-1:0] ip);
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
reg ethnewframehead=0;
reg [15:0] ethrxethertype=0;
reg ethrxdven=0;
reg [7:0] ethrxdata=0;
reg ethrxcrczero=0;
always @(posedge clk) begin
	ethnewframehead <= eth.rx.newframehead_r;
	ethrxethertype<=eth.rx.ethertype;
	ethrxdven<=eth.rx.dven;
	ethrxdata<=eth.rx.data;
	ethrxcrczero<=eth.rx.crczero;
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
always @(*) begin
	case(rxstate)
		RXIDLE: rxnext=(ethnewframehead & ethrxethertype==ETHERTYPEARP) ? RXHEAD : RXIDLE;
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
		end
		RXHEAD: begin
			rxhead<={rxhead[HEADLEN*8-9:0],ethrxdata};
		end
		RXPAYLOAD: begin
			rxdata<=ethrxdata;
		end
		RXTAIL: begin
			arpmatch<=(ethrxcrczero & arp.rx.ipmatch & arp.rx.oper==OPREQUEST);
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
		txtpa<=arp.rx.tpa;
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
assign eth.tx.dven=ethkey ? 1'b1 : 0;
assign eth.tx.data=ethkey ? arp.tx.head>>((txcnt)*8) : 0;
assign eth.tx.smac=ethkey ? arp.mac: 0;
assign eth.tx.dmac=ethkey ? arp.tx.tha: 0;
assign eth.tx.ethertype=ethkey ? ETHERTYPEARP: 0;
endmodule
/*
localparam TXIDLE=4'd0;
localparam TXHEAD=4'd2;
localparam TXPAYLOAD=4'd3;


reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
reg [0:0] txcntreset=0;
reg [HEADLEN*8-1:0] txhead=0;
reg [HEADLEN*8-1:0] txheadchecksum=0;
wire clk=eth.tx.clk;
assign arp.tx.clk=eth.tx.clk;
assign arp.rx.clk=eth.rx.clk;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
	end
	if (txcntreset) begin
		txcnt<=0;
	end
	else begin
		txcnt<=txcnt+1;
	end
end
reg txten_d=0;
wire ten;
wire txtohead=(txstate==TXIDLE) & (arp.tx.readyvalid &~txten_d);
wire txtoidle=(txstate==TXHEAD) & (txcnt==arp.tx.headlen8-1);
reg txfifore=0;
always @(txtohead or txtoidle) begin
	case (txstate)
		TXIDLE:if (txtohead) begin
			txnext=TXHEAD;txcntreset=1;txfifore=0;
		end
		else begin
			txnext=TXIDLE; txcntreset=0; txfifore=0;
		end
		TXHEAD: if (txtoidle) begin
			txnext=TXIDLE; txcntreset=1; txfifore=0;
		end
		else begin
			txnext=TXHEAD; txcntreset=0; txfifore=0;
		end
	endcase
end
reg [31:0] txcrc=0;
wire [31:0] txcrc_w;
reg [7:0] txd=0;
reg ter=0;
reg [19:0] checksum=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		arp.tx.txbusy<=0;
		eth.tx.readyvalid<=0;
		eth.tx.data<=0;
		eth.tx.error<=0;
	end
	else begin
		case (txstate)
			TXIDLE: begin
				arp.tx.txbusy<=0;
				eth.tx.readyvalid<=0;
				eth.tx.data<=0;
				eth.tx.error<=0;
				txhead<=arp.tx.header;
			end
			TXHEAD: begin
				txhead<=txhead<<8;
				eth.tx.readyvalid<=1;
				eth.tx.data<=txhead[28*8-1:27*8];
				eth.tx.error<=0;
				arp.tx.txbusy<=1;
			end
		endcase
	end
end
always @(posedge clk) begin
	txten_d<=arp.tx.readyvalid;
	eth.tx.errorcnt <= eth.tx.errorcnt + (txtohead & eth.tx.busy);
	if (txtohead)
		eth.tx.ethertype<=ETHERTYPEARP;
end
reg rdv_d=0;
reg [7:0] rxd=0;
reg rdv=0;
reg rer=0;
always @(posedge clk) begin
	rxd<=eth.rx.data;
	rdv<=eth.rx.readyvalid;
	rer<=eth.rx.error;
end

reg [3:0] rxstate=RXIDLE;
reg [3:0] rxnext=RXIDLE;
reg [15:0] rxcnt=0;
reg [0:0] rxcntreset=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		rxstate<=RXIDLE;
	end
	else begin
		rxstate<=rxnext;
	end
	if (rxcntreset) begin
		rxcnt<=0;
	end
	else begin
		rxcnt<=rxcnt+1;
	end
end
wire [31:0] rxcrc_w;
wire rxtohead=(rxstate==RXIDLE)&(eth.rx.readyvalid&~rdv)&(eth.rx.ethertype==ETHERTYPEARP);
wire rxtoidle=(rxstate==RXHEAD) & (rxcnt==arp.rx.headlen8-1);
reg [9:0] rc1=0;
reg [9:0] rc2=0;
reg [9:0] rc3=0;
reg rxcrcrdv=0;
reg  rxcrcrer=0;
reg rdv1=0;
reg  rer1=0;
reg [7:0] rxd1=0;
reg rdv4=0;
reg  rer4=0;
reg [7:0] rxd4=0;
reg [15:0] rx16=0;
reg [19:0] rxchecksum=0;
reg [15:0] rxchecksumresult=0;
reg [7:0] rxd_d=0;
reg [15:0] arperr=0;
always @(rxtohead or rxtoidle) begin
	case (rxstate)
		RXIDLE:if (rxtohead) begin
			rxnext=RXHEAD; rxcntreset=1;
		end
		else begin
			rxnext=RXIDLE; rxcntreset=0;
		end
		RXHEAD: if (rxtoidle) begin
			rxnext=RXIDLE; rxcntreset=1;
		end
		else begin
			rxnext=RXHEAD; rxcntreset=0;
		end
	endcase
end
always @(posedge clk or posedge reset) begin
	if (reset) begin
		arp.rx.readyvalid<=1'b0;
		arp.rx.error<=1'b0;
	end
	else begin
		case (rxstate)
			RXIDLE: begin
				arp.rx.readyvalid<=1'b0;
				arp.rx.error<=1'b0;
				rxchecksum<=0;
				arperr<=0;
			end
			RXHEAD: begin
				arp.rx.readyvalid<=rxtoidle;
				case (rxcnt)
					0: arp.rx.htype[15:8]<=rxd;
					1: arp.rx.htype[7:0] <= rxd;
					2: arp.rx.ptype[15:8]<=rxd;
					3: arp.rx.ptype[7:0] <= rxd;
					4: arp.rx.hlen<=rxd;
					5: arp.rx.plen<=rxd;
					6: arp.rx.oper[15:8]<=rxd;
					7: arp.rx.oper[7:0] <= rxd;
					8: arp.rx.sha[6*8-1:5*8]<=rxd;
					9: arp.rx.sha[5*8-1:4*8]<=rxd;
					10: arp.rx.sha[4*8-1:3*8]<=rxd;
					11: arp.rx.sha[3*8-1:2*8]<=rxd;
					12: arp.rx.sha[2*8-1:1*8]<=rxd;
					13: arp.rx.sha[1*8-1:0*8]<=rxd;
					14: arp.rx.spa[4*8-1:3*8]<=rxd;
					15: arp.rx.spa[3*8-1:2*8]<=rxd;
					16: arp.rx.spa[2*8-1:1*8]<=rxd;
					17: arp.rx.spa[1*8-1:0*8]<=rxd;
					18: arp.rx.tha[6*8-1:5*8]<=rxd;
					19: arp.rx.tha[5*8-1:4*8]<=rxd;
					20: arp.rx.tha[4*8-1:3*8]<=rxd;
					21: arp.rx.tha[3*8-1:2*8]<=rxd;
					22: arp.rx.tha[2*8-1:1*8]<=rxd;
					23: arp.rx.tha[1*8-1:0*8]<=rxd;
					24: arp.rx.tpa[4*8-1:3*8]<=rxd;
					25: arp.rx.tpa[3*8-1:2*8]<=rxd;
					26: arp.rx.tpa[2*8-1:1*8]<=rxd;
					27: arp.rx.tpa[1*8-1:0*8]<=rxd;
					default: begin
						arperr<=arperr+1;
					end
				endcase
				arp.rx.error<=arp.rx.error | eth.rx.error | (|arperr);// | (rxd==rxhead[7:0]);
			end
		endcase
	end
end
always @(posedge clk) begin
	rc1<={rdv,rer,rxd};
	rc2<=rc1;
	rc3<=rc2;
	{rdv4,rer4,rxd4}<=rc3;
	{rdv1,rer1,rxd1}<={rdv,rer,rxd};
	rxd_d<=rxd;
	rdv_d<=rdv;
	rxchecksumresult<=rxchecksum[15:0]+rxchecksum[19:16];
end
endmodule

module arpresponse(arplink arp,input reset);
reg [10:0] clkcnt=0;
always @(posedge arp.rx.clk) begin
	clkcnt<=clkcnt+1;
end
always @(posedge arp.rx.clk) begin
	if (arp.rx.readyvalid) begin
		if (arp.rx.tpa==arp.tx.spa & arp.rx.oper==1) begin
			arp.tx.oper<=2;
			arp.tx.tpa<=arp.rx.spa;
			arp.tx.tha<=arp.rx.sha;
			arp.tx.readyvalid<=1;
		end
	end
	else begin
			arp.tx.oper<=1;
			arp.tx.readyvalid<=clkcnt==000;
		end

end
endmodule
*/
