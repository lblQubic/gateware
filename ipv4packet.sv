interface ipv4packet #(parameter HEADLEN=20,parameter TX1RX0=0) (input [31:0] ip,input clk,input reset);
	localparam MAXHEADWORDS=15;
	localparam MAXHEADBYTES=MAXHEADWORDS*4;
	wire [15:0] maxtotallength=576; // start here maybe increase to 65535 later?
	wire [3:0] version;
	wire [3:0] ihl;
	wire [5:0] dscp;
	wire [1:0] ecn;
	wire [15:0] totallength;
	wire [15:0]  identification;
	wire [2:0] flags;
	wire [12:0] fragmentoffset;
	wire [7:0] timetolive;
	wire [7:0] protocol;
	wire [15:0] headerchecksum;
	wire [31:0] srcip;
	wire [31:0] dstip;
	wire [319:0] options;
	wire [7:0] data;
	wire dven;
	wire busy;
	wire newhead;
	wire error;
	wire [MAXHEADWORDS*32-1:0] head;
	if (TX1RX0)
		assign head={version,ihl,dscp,ecn,totallength,identification,flags,fragmentoffset,timetolive,protocol,headerchecksum,srcip,dstip,options};
	else
		assign {version,ihl,dscp,ecn,totallength,identification,flags,fragmentoffset,timetolive,protocol,headerchecksum,srcip,dstip,options}=head;
	wire [490:0] dst;
	assign {version,ihl,dscp,ecn,totallength,identification,flags,fragmentoffset,timetolive,protocol,headerchecksum,srcip,dstip,options,data,dven,error,newhead}=dst;
	wire [490:0] src={version,ihl,dscp,ecn,totallength,identification,flags,fragmentoffset,timetolive,protocol,headerchecksum,srcip,dstip,options,data,dven,error,newhead};
endinterface

interface ipv4link (input reset,input clk,input [31:0] ip);
	localparam ETHERTYPEIPV4=16'h0800;
//	reg [31:0] ip=0;
	ipv4packet #(.TX1RX0(1))tx(.clk(clk),.ip(ip),.reset(reset));
	ipv4packet #(.TX1RX0(0))rx(.clk(clk),.ip(ip),.reset(reset));
	wire request_w;
	wire [15:0] requestcode;
	wire ack;
	wire [15:0] ackcode;
	wire busy;
	wire requestacpt;
	reg request=0;
	always @(posedge clk) begin
		if (request_w)
			request<=1'b1;
		else if (requestacpt)
			request<=1'b0;
	end
endinterface

module ipv4overethernet #(parameter SIM=0)
(iethernet eth, ipv4link ipv4,input reset);
//assign ipv4.tx.version=4;
wire clk=eth.clk;
localparam MAXHEADWORDS=15;
localparam MAXHEADBYTES=MAXHEADWORDS*4;

localparam TXIDLE=4'd0;
localparam TXHEADCHECKSUM=4'd1;
localparam TXHEAD=4'd2;
localparam TXPAYLOAD=4'd3;
localparam RXIDLE=4'd4;
localparam RXHEAD=4'd5;
localparam RXPAYLOAD=4'd6;
localparam RXTAIL=4'd7;
localparam TXSTART=4'd8;
localparam TXTAIL=4'd9;
localparam ETHERTYPEIPV4=16'h0800;
assign eth.requestcode=ETHERTYPEIPV4;

reg ethrxnewframehead=0;
reg [15:0] ethrxethertype=0;
reg ethrxdven=0;
reg [7:0] ethrxdata=0;
reg ethrxframeend=0;
wire protocolmatch=ethrxnewframehead & (ethrxethertype==ETHERTYPEIPV4);
reg protocolsel=0;
reg ethrxerr=0;
reg rxbusy=0;
reg [15:0] hd16=0;
reg [15:0] headsum=0;
reg carrier=0;
always @(posedge clk) begin
	ethrxnewframehead <= eth.rx.newframehead;
	ethrxethertype<=eth.rx.ethertype;
	ethrxdven<=eth.rx.dven;
	ethrxdata<=eth.rx.data;
	ethrxerr<=eth.rx.err;
	ethrxframeend<=eth.rx.frameend;
end
assign eth.tx.smac=eth.rx.dmac;
assign eth.tx.dmac=eth.rx.smac;
assign eth.tx.ethertype=16'h0800;
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
reg [MAXHEADBYTES*8-1:0] rxhead=0;
reg [7:0] rxdata=0;
reg rxdv=0;
reg [15:0] rxerrcnt=0;
reg [3:0] rxihl=0;
reg [15:0] rxtotallength=0;
reg [15:0] rxtotalcnt=0;
wire newhead=(rxstate==RXHEAD&rxnext==RXPAYLOAD);
assign ipv4.rx.newhead=newhead;
assign ipv4.rx.data=rxdata;
assign ipv4.rx.dven=rxdv;
assign ipv4.rx.dven=rxdv;
assign ipv4.rx.error=|rxerrcnt;
assign ipv4.rx.busy=rxbusy;

assign ipv4.rx.head=(rxhead<<((MAXHEADWORDS-rxihl)<<5));
always @(*) begin
	case(rxstate)
		RXIDLE: rxnext= protocolmatch ? RXHEAD : RXIDLE;
		RXHEAD: rxnext=rxcnt==((rxihl<<2)-1) ? RXPAYLOAD : RXHEAD;
		RXPAYLOAD: rxnext= rxtotalcnt==(rxtotallength) ? RXTAIL : RXPAYLOAD;
		RXTAIL: rxnext=RXIDLE;
	endcase
end
always @(posedge clk) begin
	if (protocolmatch)
		rxihl<=ethrxdata[3:0];
	if (reset)begin
		rxtotalcnt<=0;
		rxerrcnt<=0;
		rxdata<=0;
		rxdv<=1'b0;
		rxbusy<=1'b0;
	end
	else begin
		case(rxnext)
			RXIDLE:begin
				rxtotalcnt<=0;
				rxerrcnt<=0;
				rxdata<=0;
				rxdv<=1'b0;
				headsum<=0;
				hd16<=0;
				carrier<=0;
				rxbusy<=1'b0;
			end
			RXHEAD:begin
				rxtotalcnt<=rxtotalcnt+1;
				rxhead<={rxhead[MAXHEADBYTES*8-9:0],ethrxdata};
				if (rxcnt==4-1)
					rxtotallength=rxhead[15:0];
				rxerrcnt<=rxerrcnt+ethrxerr;
				rxdv<=1'b0;
				//hd16<={hd16[7:0],ethrxdata};
				hd16<={ethrxdata,hd16[15:8]};
				rxbusy<=1'b1;
			end
			RXPAYLOAD:begin
				if (newhead)
					rxerrcnt<=rxerrcnt+~(&headsum);
				rxtotalcnt<=rxtotalcnt+1;
				rxerrcnt<=rxerrcnt+ethrxerr;
				rxdata<=ethrxdata;
				rxdv<=1'b1;
				rxbusy<=1'b1;
			end
			RXTAIL:begin
				rxtotalcnt<=0;
				rxdv<=1'b0;
				rxdata<=0;
				rxdv<=1'b0;
				rxbusy<=1'b1;
			end
		endcase
	end
end
always @(negedge clk) begin
	case (rxstate)
		RXHEAD: begin
			if (rxcnt[0])
				{carrier,headsum}= headsum+hd16+carrier;
		end
	endcase
end


assign ipv4.ack=eth.ack;
assign eth.request_w=ipv4.request;
assign ipv4.requestacpt=ipv4.request;

reg [15:0] ipv4txheaderchecksum=0;
reg ethtxerr=0;
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate!=txnext) || (txstate==TXIDLE) || (txstate==TXSTART) ? 0 : txcnt+1;
	end
end
reg [MAXHEADBYTES*8-1:0] txhead=0;
reg [7:0] txdata=0;
reg txdven=0;
reg [15:0] txerrcnt=0;
reg [3:0] ipv4txihl=0;
reg [15:0] txtotallength=0;
reg [15:0] txtotalcnt=0;
reg ipv4txdven=0;
reg [7:0] ipv4txdata;
reg ipv4txerr=0;

always @(posedge clk) begin
	ipv4txdven<=ipv4.tx.dven;
	ipv4txdata<=ipv4.tx.data;
	ipv4txerr<=ipv4.tx.error;
	ipv4txihl<=ipv4.tx.ihl;
end
assign eth.tx.data=txdata;
assign eth.tx.dven=txdven;
assign eth.tx.err=|txerrcnt;

reg [MAXHEADWORDS*32-1:0] txheadsr=0;
reg txbusy=0;
reg [15:0] txhd16=0;
reg [15:0] txheadsum=0;
reg txcarrier=0;
reg txfifore=0;
wire [7:0] txfifodata;
wire txfifodvalid;
//assign ipv4.tx.head=(txhead<<((MAXHEADWORDS-ipv4txihl)<<5));
always @(*) begin
	case(txstate)
		TXIDLE: txnext= eth.ack ? TXSTART : TXIDLE;
		TXSTART: txnext= ipv4txdven ? TXHEADCHECKSUM : TXSTART;
		TXHEADCHECKSUM: txnext=txcnt==(ipv4txihl<<1) ? TXHEAD : TXHEADCHECKSUM;
		TXHEAD: txnext=txcnt==((ipv4txihl<<2)-1) ? TXPAYLOAD : TXHEAD;
		//TXPAYLOAD: txnext= txtotalcnt==(txtotallength) ? TXTAIL : TXPAYLOAD;
		TXPAYLOAD: txnext= ~txfifodvalid ? TXTAIL : TXPAYLOAD;
		TXTAIL: txnext=TXIDLE;
	endcase
end
reg [7:0] txtest=0;
always @(posedge clk) begin
	if (reset)begin
		txtotalcnt<=0;
		txerrcnt<=0;
		txdata<=0;
		txdven<=1'b0;
		txbusy<=1'b0;
	end
	else begin
		case(txnext)
			TXIDLE:begin
				txtotalcnt<=0;
				txerrcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txhd16<=0;
				carrier<=0;
				txbusy<=1'b0;
			end
			TXSTART:begin
				txtotalcnt<=0;
				txerrcnt<=0;
				txdata<=0;
				txdven<=1'b0;
				txhd16<=0;
				carrier<=0;
				txbusy<=1'b1;
				txheadsr<=ipv4.tx.head;
			end
			TXHEADCHECKSUM:begin
				txtotalcnt<=0;
				{txhd16,txheadsr}<={txheadsr,16'b0};
				txerrcnt<=txerrcnt+ethtxerr;
				txdven<=1'b0;
				txbusy<=1'b1;
				ipv4txheaderchecksum <= txcnt==((ipv4txihl<<1)-1) ? ~txheadsum: 0;
				txheadsr<= (txcnt==((ipv4txihl<<1)-1)) ? ipv4.tx.head: (txheadsr<<16);
				txhd16<=txheadsr[MAXHEADBYTES*8-1:MAXHEADBYTES*8-16];
			end
			TXHEAD:begin
				txtotalcnt<=txtotalcnt+1;
				txheadsr<= txheadsr<<8;// {txheadsr[MAXHEADBYTES*8-9:0],8'b0};
				txdata<=(txstate==TXHEAD & (txcnt==9||txcnt==10))? (ipv4txheaderchecksum>>(txcnt[0]?8:0)) : txheadsr[MAXHEADBYTES*8-1:MAXHEADBYTES*8-8];
				txtest<=(ipv4txheaderchecksum>>(txcnt[0]?8:0));
				txerrcnt<=txerrcnt+ethtxerr;
				txdven<=1'b1;
				txbusy<=1'b1;
			end
			TXPAYLOAD:begin
				txtotalcnt<=txtotalcnt+1;
				txerrcnt<=txerrcnt+ethtxerr;
				txdata<=txfifodata;
				txdven<=txfifodvalid;
				txbusy<=1'b1;
			end
			TXTAIL:begin
				txtotalcnt<=0;
				txdven<=1'b0;
				txdata<=0;
				txbusy<=1'b1;
			end
		endcase
	end
end
always @(negedge clk) begin
	case (txstate)
		TXIDLE: begin
			{txcarrier,txheadsum}=0;
			txfifore<=1'b0;
		end
		TXHEADCHECKSUM:begin
			{txcarrier,txheadsum}=txheadsum+txhd16+txcarrier;
			txfifore<=1'b0;
		end
		TXHEAD: begin
			if (txcnt==(ipv4txihl<<2)-2)
				txfifore<=1'b1;

		end
		TXPAYLOAD: begin
			txfifore<=1'b1;
		end
		TXTAIL: begin
			txfifore<=1'b0;
		end
	endcase
end
//assign ipv4.tx.headerchecksum=ipv4txheaderchecksum;

fifo#(.AW(5),.DW(9),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
fifotxd(.wclk(clk),.rclk(clk),.wen(ipv4txdven),.wdata(ipv4txdata),.ren(txfifore),.rdata(txfifodata),.full(txfifofull),.empty(txfifoempty),.reset(reset),.rdatavalid(txfifodvalid));
endmodule
