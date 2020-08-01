module ethernetovergmii(gmii.eth gmii, iethernet eth,input reset);

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

localparam HEADLEN=14;
reg [1*8-1:0] txd=0;
reg [3:0] txstate=TXIDLE;
reg [3:0] txnext=TXIDLE;
reg [15:0] txcnt=0;
reg [0:0] txcntreset=0;
reg [HEADLEN*8-1:0] txhead=0;
wire clk=gmii.tx_clk;
assign eth.clk=gmii.tx_clk;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		txstate<=TXIDLE;
	end
	else begin
		txstate<=txnext;
		txcnt<=(txstate==txnext) & (txstate!=TXIDLE)? txcnt+1 : 0;
	end
end
reg ethtxdven_d=0;
wire ten;
reg ten_d=0;
reg txfifore=0;
localparam DATAMIN=46;
always @(*) begin
	case (txstate)
		TXIDLE: txnext=(eth.tx.dven&~ethtxdven_d) ? TXPRST : TXIDLE;
		TXPRST: txnext=txcnt==8-1 ? TXHEAD : TXPRST;
		TXHEAD: txnext=txcnt==14-1 ? TXPAYLOAD : TXHEAD;
		TXPAYLOAD: txnext=(~ten&ten_d&(txcnt>=DATAMIN)|(~ten&txcnt==DATAMIN)) ? TXTAIL : TXPAYLOAD;
		TXTAIL: txnext=txcnt==4-1 ? TXGAP : TXTAIL;
		TXGAP : txnext=txcnt==12-1 ? TXIDLE : TXGAP;
	endcase
end
reg [31:0] txcrc=0;
reg [8*8-1:0] txprst=0;
wire [31:0] txcrc_w;
reg tx_en=0;
reg txhden=0;
reg [7:0] txdata=0;
reg tx_er=0;
reg [1:0] crcshift=0;
assign gmii.tx_en=tx_en;
assign gmii.tx_er=tx_er;
assign gmii.txd=txdata;
assign eth.tx.hden=txhden;
always @(posedge clk or posedge reset) begin
	if (reset) begin
		eth.tx.busy<=0;
		tx_en<=0;
		txdata<=0;
		tx_er<=0;
		txhden<=0;
		txfifore<=0;
		txfifore<=0;
	end
	else begin
		case (txnext)
			TXIDLE: begin
				eth.tx.busy<=1'b0;
				tx_en<=1'b0;
				txdata<=8'b0;
				tx_er<=1'b0;
				txfifore<=0;
				txhden<=0;
			end
			TXPRST: begin
				eth.tx.busy<=1'b1;
				tx_en<=1'b1;
				txdata<=(txcnt==6) ? eth.tx.sfd : eth.tx.preamble;
				tx_er<=1'b0;
				txhead<=eth.tx.head;
				txhden<=0;
				txfifore<=0;
			end
			TXHEAD: begin
				txhead<={txhead[HEADLEN*8-8:0],8'b0};
				eth.tx.busy<=1;
				tx_en<=1'b1;
				txdata<=txhead[HEADLEN*8-1:HEADLEN*8-8];
				tx_er<=1'b0;
				txfifore<=1'b0;
				txhden<=1'b1;
			end
			TXPAYLOAD: begin
				eth.tx.busy<=1;
				tx_en<=ten|(~ten&txcnt<=DATAMIN);
				txdata<=ten ? txd : 0;
				tx_er<=1'b0;
				txfifore<=1'b1;
				txhden<=0;
				crcshift<=0;
			end
			TXTAIL: begin
				tx_en<=1;
				crcshift<=crcshift+1;
				txdata<=eth.tx.crc>>(8*crcshift);
				tx_er<=0;
				eth.tx.busy<=1;
				txfifore<=1'b0;
				txhden<=0;
			end
			TXGAP: begin
				tx_en<=0;
				txdata<=0;
				tx_er<=0;
				eth.tx.busy<=1;
				txfifore<=1'b0;
				txhden<=0;
			end
		endcase
	end
end
wire  [8:0] dout;
wire txfifoempty;
wire txfifofull;
fifo#(.AW(5),.DW(9)) txdfifo(.wclk(clk),.rclk(clk),.wen(eth.tx.dven),.wdata({eth.tx.dven,eth.tx.data}),.ren(txnext==TXPAYLOAD),.rdata(dout),.full(txfifofull),.empty(txfifoempty),.reset(reset));
crc_32_d8 #(.MSBFIRST(0))
txcrc_32_d8(.clk(eth.tx.clk),.en(txstate==TXHEAD|txstate==TXPAYLOAD),.reset(reset),.crc(eth.tx.crc),.zero(),.d_in(txdata));
assign {ten,txd}= txfifoempty ? 0 : dout;
always @(posedge clk) begin
	ethtxdven_d<=eth.tx.dven;
	ten_d<=ten;
	eth.tx.errorcnt <=  reset ? 0 : (eth.tx.err+ eth.tx.dven&~ethtxdven_d & eth.tx.busy + txfifofull);
end

reg [7:0] rxd=0;
reg [7:0] rxd2=0;
reg rx_dv=0;
reg rx_er=0;
always @(posedge clk) begin
	rxd<=gmii.rxd;
	rxd2<=rxd;
	rx_dv<=gmii.rx_dv;
	rx_er<=gmii.rx_er;
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
reg [31:0] rxcrc=0;
reg rxcrczero=0;
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
		RXIDLE: rxnext = gmii.rx_dv &  ~rx_dv ? RXPRST : RXIDLE;
		RXPRST: rxnext = rxd2==eth.rx.sfd ? RXHEAD : RXPRST; 
		RXHEAD: rxnext = rxcnt==14-1 ? RXPAYLOAD : RXHEAD;
		RXPAYLOAD: rxnext = ~rx_dv ? RXTAIL : RXPAYLOAD;
		RXTAIL: rxnext = RXGAP;
		RXGAP: rxnext= rxcnt==12-1 ? RXIDLE: RXGAP;
	endcase
end
reg [7:0] rxdata=0;
reg rxdven=0;
reg rxhden=0;
reg rxerr=0;
wire rxcrczero_w;
reg [HEADLEN*8-1:0] rxhead=0;
assign eth.rx.data=rxdata;
assign eth.rx.dven=rxdven;
assign eth.rx.hden=rxhden;
assign eth.rx.err=rxerr;
assign eth.rx.head=rxhead;
assign eth.rx.newframehead=(rxstate==RXHEAD&rxnext==RXPAYLOAD);
always @(posedge clk or posedge reset) begin
	if (reset) begin
		rxdata<=8'b0;
		rxdven<=1'b0;
		rxhden<=1'b0;
		rxerr<=1'b0;
		eth.rx.busy<=1'b0;
	end
	else begin
		case (rxnext)
			RXIDLE: begin
				rxdata<=8'b0;
				rxdven<=1'b0;
				rxhden<=1'b0;
				rxerr<=1'b0;
				eth.rx.busy<=1'b0;
			end
			RXPRST: begin
				rxdata<=8'b0;
				rxdven<=1'b0;
				rxhden<=1'b0;
				rxerr<=1'b0;
				eth.rx.busy<=1'b1;
				rxcrczero<=1'b0;
			end
			RXHEAD: begin
				rxdven<=1'b0;
				rxhden<=1'b1;
				rxhead<={rxhead[HEADLEN*8-9:0],rxd};
				rxerr<=rx_er | eth.rx.err;
				rxdata<=rxd;
				eth.rx.busy<=1'b1;
			end
			RXPAYLOAD: begin
				rxdata<=rxd;
				rxdven<=rx_dv;//&(eth.rx.macmatch);
				rxhden<=1'b0;
				rxerr<=rx_er;
				eth.rx.busy<=1'b1;
			end
			RXTAIL: begin
				rxcrc<=eth.rx.crc;
				rxcrczero<=rxcrczero_w;
				rxdata<=8'b0;
				rxdven<=1'b0;
				rxhden<=1'b0;
				rxerr<=1'b0;
				eth.rx.busy<=1'b1;
			end
			RXGAP: begin
				rxdata<=0;
				rxdven<=0;
				rxhden<=1'b0;
				rxerr<=0;
				eth.rx.busy<=1'b1;
			end
		endcase
	end
end
crc_32_d8 #(.MSBFIRST(0))
rxcrc_32_d8(.clk(eth.rx.clk),.en(eth.rx.dven|eth.rx.hden),.reset(reset),.crc(eth.rx.crc),.zero(rxcrczero_w),.d_in(eth.rx.data));
assign eth.rx.crczero=rxcrczero;
endmodule
interface iethernetframe #(parameter HEADLEN=14,parameter TX1RX0=0,parameter MTU=1500) (input [6*8-1:0] mac,input clk,input reset);
	wire [6*8-1:0] smac;
	wire [6*8-1:0] dmac;
	wire [HEADLEN*8-1:0] head;
	wire [2*8-1:0] ethertype;
	wire newframehead;
	reg newframehead_r=0;
	if (TX1RX0)
		assign head={dmac,smac,ethertype};
	else
		assign {dmac,smac,ethertype}=newframehead ? head : {dmac,smac,ethertype};
	wire macmatch=1'b1;//=dmac==mac|(&dmac);
	wire [8-1:0] preamble=8'h55;
	wire [8-1:0] sfd=8'hd5;
	wire [7:0] data;
	wire dven;
	wire hden;
	wire err;
	wire [31:0] crc;
	wire crczero;
	reg [15:0] errorcnt=0;
	reg busy=0;
	reg [15:0] datacnt=0;
	always @(posedge clk) begin
		datacnt<= dven ? datacnt+1 : 0;
		newframehead_r<=newframehead;
	end

endinterface


interface iethernet #(parameter HEADLEN=14,parameter MTU=1500)(input reset);
	wire [6*8-1:0] mac;//={8'ha0,8'ha1,8'ha2,8'ha3,8'ha4,8'ha5};
	iethernetframe #(.HEADLEN(HEADLEN),.TX1RX0(1),.MTU(MTU))tx(.mac(mac),.clk(clk),.reset(reset));
	iethernetframe #(.HEADLEN(HEADLEN),.TX1RX0(0),.MTU(MTU))rx(.mac(mac),.clk(clk),.reset(reset));
	wire clk;
endinterface
