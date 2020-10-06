module ethernetovergmii#(parameter SIM=0)(gmii.eth gmii, iethernet eth,input reset
,output [8:0] dbdout
,output dbfull
,output dbempty
,output dbtenfifo
,output [7:0] dbtxdfifo
,output [3:0] dbtxstate
,output [3:0] dbrxstate
,output [31:0] dbtxcrc_w
,output [31:0] dbtxcrc
,output dbrxcrczero
,output dbrxcrczero_w
,output dbrxcrcen
,output dbrxcrcen1
,output dbrxcrcen2
,output dbrxcrcen3
,output [3:0] dbrxnext
,output dbtxcrcen1
,output dbtxcrcen2
,output dbtxcrcen
,output dbethrxbusy
);

localparam TXIDLE=4'd0;
localparam TXPRST=4'd1;
localparam TXHEAD=4'd2;
localparam TXPAYLOAD=4'd3;
localparam TXTAIL=4'd4;
localparam TXGAP=4'd5;
localparam RXIDLE=4'd6;
localparam RXPRST=4'd7;
localparam RXHEAD=4'd8;
localparam RXPAYLOAD=4'd9;
localparam RXTAIL=4'd10;
localparam RXGAP=4'd11;
localparam TXSTART=4'd12;

localparam HEADLEN=14;
reg [1*8-1:0] txdfifo=0;
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
reg [0:0] txcntreset=0;
reg [HEADLEN*8-1:0] txhead=0;
wire clk=gmii.tx_clk;
assign eth.clk=gmii.tx_clk;
reg ethtxdven=0;
reg ethtxdven_d=0;
reg [7:0] ethgmiitxd=0;
reg [48+48+16-1:0] ethtxhead=0;
reg ethtxerr=0;
reg tenfifo_d=0;
wire tenfifo;
always @(posedge clk) begin
	ethtxdven<=eth.tx.dven;
	ethtxdven_d<=ethtxdven;
	ethgmiitxd<=eth.tx.data;
	ethtxhead<={eth.tx.dmac,eth.tx.smac,eth.tx.ethertype};
	ethtxerr<=eth.tx.err;
	tenfifo_d<=tenfifo;
end
wire [31:0] txcrc_w;
//assign eth.tx.crc=txcrc_w;
assign eth.tx.busy=ethtxbusy;

always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate==txnext) & (txstate!=TXIDLE)? txcnt+1 : 0;
	end
end
reg txfifore=0;
localparam DATAMIN=46;
always @(*) begin
	case (txstate)
		TXIDLE: txnext= eth.ack ? TXSTART : TXIDLE;
		TXSTART: txnext=(ethtxdven&~ethtxdven_d) ? TXPRST : TXSTART;
		TXPRST: txnext=txcnt==8-1 ? TXHEAD : TXPRST;
		TXHEAD: txnext=txcnt==14-1 ? TXPAYLOAD : TXHEAD;
		TXPAYLOAD: txnext=(~tenfifo&tenfifo_d&(txcnt>=DATAMIN)|(~tenfifo&txcnt==DATAMIN-1)) ? TXTAIL : TXPAYLOAD;
		TXTAIL: txnext=txcnt==4-1 ? TXGAP : TXTAIL;
		TXGAP : txnext=txcnt==12-1 ? TXIDLE : TXGAP;
	endcase
end
reg [31:0] txcrc=0;
reg [8*8-1:0] txprst=0;
reg gmiitx_en=0;
reg [7:0] gmiitxd=0;
reg gmiitx_er=0;
reg [1:0] crcshift=0;
assign gmii.tx_en=gmiitx_en;
assign gmii.tx_er=gmiitx_er;
assign gmii.txd=gmiitxd;
reg ethtxbusy=0;
reg txcrcen=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		ethtxbusy<=0;
		gmiitx_en<=0;
		gmiitxd<=0;
		gmiitx_er<=0;
		txcrcen<=0;
	end
	else begin
		case (txnext)
			TXIDLE: begin
				ethtxbusy<=1'b0;
				gmiitx_en<=1'b0;
				gmiitxd<=8'b0;
				gmiitx_er<=1'b0;
				txcrcen<=0;
			end
			TXSTART: begin
				ethtxbusy<=1'b1;
				gmiitx_en<=1'b0;
				gmiitxd<=8'b0;
				gmiitx_er<=1'b0;
				txcrcen<=0;
			end
			TXPRST: begin
				ethtxbusy<=1'b1;
				gmiitx_en<=1'b1;
				gmiitxd<=(txcnt==6) ? eth.sfd : eth.preamble;
				gmiitx_er<=1'b0;
				txhead<=ethtxhead;//{ethtxdmac,ethtxsmac,ethtxethertype};
				txcrcen<=0;
			end
			TXHEAD: begin
				txhead<={txhead[HEADLEN*8-8-1:0],8'b0};
				ethtxbusy<=1;
				gmiitx_en<=1'b1;
				gmiitxd<=txhead[HEADLEN*8-1:HEADLEN*8-8];
				gmiitx_er<=1'b0;
				txcrcen<=1'b1;
			end
			TXPAYLOAD: begin
				ethtxbusy<=1;
				gmiitx_en<=tenfifo|(~tenfifo&txcnt<=DATAMIN);
				gmiitxd<=tenfifo ? txdfifo : 0;
				gmiitx_er<=1'b0;
				crcshift<=0;
				txcrcen<=1'b1;
			end
			TXTAIL: begin
				gmiitx_en<=1;
				crcshift<=crcshift+1;
				gmiitxd<=(txcrc>>(8*crcshift))&8'hff;
				gmiitx_er<=0;
				ethtxbusy<=1;
				txcrcen<=1'b1;
			end
			TXGAP: begin
				gmiitx_en<=0;
				gmiitxd<=0;
				gmiitx_er<=0;
				ethtxbusy<=1;
				txcrcen<=1'b0;
			end
		endcase
	end
end
wire txfifoempty_w;
reg txfifoempty=0;
reg txcrcen1=0;
reg txcrcen2=0;
always @(posedge clk) begin
	txfifoempty<=txfifoempty_w;
end
always @(negedge clk) begin
	if (txnext==TXTAIL&txstate==TXPAYLOAD)
		txcrc<=txcrc_w;
	if (txnext==TXHEAD&&(txcnt==(14-2))) // dpram need 1 cycle for block ram
		txfifore<= 1'b1;
	else if (txfifoempty)
		txfifore<= 1'b0;
	if (txnext==TXHEAD&txstate==TXPRST)
		txcrcen1<=1'b1;
	else if (txnext==TXTAIL)
		txcrcen1<=1'b0;
	txcrcen2<=txcrcen1;
end
wire txcrcen3=txcrcen1&txcrcen2;
wire  [8:0] dout;
wire txfifofull;
fifo#(.DW(9),.AW(5),.SIM(SIM),.SAMECLKDOMAIN(1))
fifotxd(.wclk(clk),.rclk(clk),.din({ethtxdven,ethgmiitxd}),.wr_en(ethtxdven),.rd_en(txfifore),.dout(dout),.empty(txfifoempty_w),.full(txfifofull)
,.rst(reset)
);
//fifo#(.AW(5),.DW(9),.SIM(SIM),.BRAM(1))
//fifotxd(.wclk(clk),.rclk(clk),.wen(ethtxdven),.wdata({ethtxdven,ethgmiitxd}),.ren(txfifore),.rdata(dout),.full(txfifofull),.empty(txfifoempty),.reset(reset));
crc_32_d8 #(.MSBFIRST(0))
txcrc_32_d8(.clk(clk),.en(txcrcen),.reset(~ethtxbusy),.crc(txcrc_w),.zero(),.d_in(gmiitxd));





assign {tenfifo,txdfifo}= txfifoempty ? 0 : dout;
assign dbdout=dout;
assign dbfull=txfifofull;
assign dbempty=txfifoempty;
assign dbtenfifo=tenfifo;
assign dbtxdfifo=txdfifo;
assign dbtxstate=txstate;
assign dbrxstate=rxstate;
assign dbtxcrc=txcrc;
assign dbtxcrc_w=txcrc_w;
reg [7:0] gmiirxd=0;
reg [7:0] gmiirxd2=0;
reg gmiirx_dv=0;
reg gmiirx_dv_d=0;
reg gmiirx_er=0;
always @(posedge clk) begin
	gmiirxd<=gmii.rxd;
	gmiirxd2<=gmiirxd;
	gmiirx_dv<=gmii.rx_dv;
	gmiirx_dv_d<=gmiirx_dv;
	gmiirx_er<=gmii.rx_er;
end

reg [3:0] rxstate=RXIDLE;
reg [3:0] rxnext=RXIDLE;
reg [3:0] rxcnt=0;
reg [0:0] rxcntreset=0;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		rxstate<=RXIDLE;
	end
	else begin
		rxstate<=rxnext;
		rxcnt<=(rxstate==rxnext)? rxcnt+1 : 0;
	end
end
wire [31:0] rxcrc_w;
reg [9:0] rc1=0;
reg [9:0] rc2=0;
reg [9:0] rc3=0;
reg  [7:0]  rxcrcrxd=0;
reg rxcrcrx_dv=0;
reg rx_dv4=0;
reg  rx_er4=0;
reg [7:0] rxd4=0;
always @(*) begin
	case (rxstate)
		RXIDLE: rxnext = gmiirx_dv &  ~gmiirx_dv_d ? RXPRST : RXIDLE;
		RXPRST: rxnext = gmiirxd2==eth.sfd ? RXHEAD : RXPRST; 
		RXHEAD: rxnext = rxcnt==14-1 ? RXPAYLOAD : RXHEAD;
		RXPAYLOAD: rxnext = ~gmiirx_dv ? RXTAIL : RXPAYLOAD;
		RXTAIL: rxnext = RXGAP;
		RXGAP: rxnext= rxcnt==12-1 ? RXIDLE: RXGAP;
	endcase
end
reg [7:0] ethrxdata=0;
reg ethrxdven=0;
reg rxcrcen=0;
reg ethrxerr=0;
wire rxcrczero_w;
reg rxcrczero=0;
reg ethrxframeend=0;
reg [HEADLEN*8-1:0] rxhead=0;
reg ethrxbusy=0;
reg newframehead=0;
always @(posedge clk) begin
	newframehead<=(rxstate==RXHEAD&rxcnt==14-1) & ( (eth.rx.dmac==eth.mac) | (&eth.rx.dmac));
end
assign eth.rx.busy=ethrxbusy;
assign eth.rx.data=ethrxdata;
assign eth.rx.dven=ethrxdven;
assign eth.rx.err=ethrxerr;
assign {eth.rx.dmac,eth.rx.smac,eth.rx.ethertype}=rxhead;
//assign eth.rx.crczero=rxcrczero;
//assign eth.rx.crc=rxcrc_w;
assign eth.rx.newframehead=newframehead;
assign eth.rx.frameend=ethrxframeend;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		ethrxdata<=8'b0;
		ethrxdven<=1'b0;
		rxcrcen<=1'b0;
		ethrxerr<=1'b0;
		ethrxbusy<=1'b0;
		ethrxframeend<=1'b0;
	end
	else begin
		case (rxnext)
			RXIDLE: begin
				ethrxdata<=8'b0;
				ethrxdven<=1'b0;
				rxcrcen<=1'b0;
				ethrxerr<=1'b0;
				ethrxbusy<=1'b0;
				ethrxframeend<=1'b0;
			end
			RXPRST: begin
				ethrxdata<=8'b0;
				ethrxdven<=1'b0;
				rxcrcen<=1'b0;
				ethrxerr<=1'b0;
				ethrxbusy<=1'b1;
				ethrxframeend<=1'b0;
			end
			RXHEAD: begin
				ethrxdven<=1'b0;
				rxcrcen<=1'b1;
				rxhead<={rxhead[HEADLEN*8-9:0],gmiirxd};
				ethrxerr<=gmiirx_er;
				ethrxdata<=gmiirxd;
				ethrxbusy<=1'b1;
				ethrxframeend<=1'b0;
			end
			RXPAYLOAD: begin
				ethrxdata<=gmiirxd;
				ethrxdven<=gmiirx_dv;//&(eth.rx.macmatch);
				rxcrcen<=1'b1;
				ethrxerr<=gmiirx_er;
				ethrxbusy<=1'b1;
				ethrxframeend<=1'b0;
			end
			RXTAIL: begin
				ethrxdata<=8'b0;
				ethrxdven<=1'b0;
				rxcrcen<=1'b0;
				ethrxerr<=~rxcrczero;
				ethrxbusy<=1'b1;
				ethrxframeend<=1'b1;
			end
			RXGAP: begin
				ethrxdata<=0;
				ethrxdven<=0;
				rxcrcen<=1'b0;
				ethrxerr<=0;
				ethrxbusy<=1'b1;
				ethrxframeend<=1'b0;
			end
		endcase
	end
end
reg rxcrcen1=0;
reg rxcrcen2=0;
always @(negedge clk) begin
	if ((rxnext==RXTAIL)&&(rxstate==RXPAYLOAD))
		rxcrczero<=rxcrczero_w;
	if ((rxnext==RXHEAD)&&(rxstate==RXHEAD))
		rxcrcen1<=1'b1;
	else if (rxnext==RXTAIL)
		rxcrcen1<=1'b0;
	rxcrcen2<=rxcrcen1;
end
wire rxcrcen3=rxcrcen1&rxcrcen2;
crc_32_d8 #(.MSBFIRST(0))
rxcrc_32_d8(.clk(clk),.en(rxcrcen),.reset(~ethrxbusy),.crc(rxcrc_w),.zero(rxcrczero_w),.d_in(ethrxdata));
assign dbrxcrczero=rxcrczero;
assign dbrxcrczero_w=rxcrczero_w;
assign dbrxcrcen=rxcrcen;
assign dbrxcrcen1=rxcrcen1;
assign dbrxcrcen2=rxcrcen2;
assign dbrxcrcen3=rxcrcen3;
assign dbrxnext=rxnext;
assign dbtxcrcen1=txcrcen1;
assign dbtxcrcen2=txcrcen2;
assign dbtxcrcen=txcrcen;
assign dbethrxbusy=ethrxbusy;
endmodule

interface iethernetframe #(parameter MTU=1500) (input [6*8-1:0] mac,input clk,input reset);
	wire [6*8-1:0] smac;
	wire [6*8-1:0] dmac;
	wire [2*8-1:0] ethertype;
	wire [7:0] data;
	wire dven;
	wire err;
//	wire [31:0] crc;
//	wire crczero;
	wire busy;
	wire newframehead;
	wire frameend;
//	wire [158-1:0] txsrc={smac,dmac,ethertype,data,dven,err};
//	wire [158-1:0] txdst;
//	assign {smac,dmac,ethertype,data,dven,err}=txdst;
	wire [124-1:0] src={smac,dmac,ethertype,data,dven,err,newframehead,frameend};
	wire [124-1:0] dst;
	assign {smac,dmac,ethertype,data,dven,err,newframehead,frameend}=dst;
	reg [7:0] datar=0;
	reg newframeheadr=0;
	reg dvenr=0;
	reg [47:0] dmacr=0;
	reg [47:0] macr=0;
	reg busyr=0;
	always @(posedge clk) begin
		datar<=data;
		dvenr<=dven;
		newframeheadr<=newframehead;
		dmacr<=dmac;
		macr<=mac;
		busyr<=busy;
	end
endinterface


interface iethernet #(parameter MTU=1500)(input reset,input [47:0] mac);
	wire [8-1:0] preamble=8'h55;
	wire [8-1:0] sfd=8'hd5;
	wire clk;
	iethernetframe #(.MTU(MTU))tx(.mac(mac),.clk(clk),.reset(reset));
	iethernetframe #(.MTU(MTU))rx(.mac(mac),.clk(clk),.reset(reset));
	wire request_w;
	wire [15:0] requestcode;
	wire ack;
	wire [15:0] ackcode;
	wire requestacpt;
	reg request=0;
	reg ackr=0;
	always @(posedge clk) begin
		if (request_w)
			request<=1'b1;
		else if (requestacpt)
			request<=1'b0;
		ackr<=ack;
	end
endinterface
