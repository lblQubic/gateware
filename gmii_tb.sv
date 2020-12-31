//`include "constants.vams"
//`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 100ps
module gmii_tb(
//gmii ifgmii
);
gmii ifgmii();

reg sysclk=0;
integer cc=0;
initial begin
	$dumpfile("gmii.vcd");
	$dumpvars(17,gmii_tb);
//	for (cc=0; cc<300; cc=cc+1) begin
	while (1) begin
		cc=cc+1;

		sysclk=0; #2.5;
		sysclk=1; #2.5;
	end
	$finish();
end
reg [31:0] sysclkcnt=0;
always @(posedge sysclk) begin
	sysclkcnt<=sysclkcnt+1;
end
reg clk250=0;
initial begin
    forever #(4) clk250=~clk250;
end
reg [31:0] clk250cnt=0;
always @(posedge clk250) begin
	clk250cnt<=clk250cnt+1;
end
reg sgmiiclk=0;
initial begin
    forever #(4) sgmiiclk=~sgmiiclk;
end
assign ifgmii.tx_clk=sgmiiclk;
assign ifgmii.rx_clk=sgmiiclk;
/*assign gmii.tx_en=tx_en;
assign gmii.txd=8'hde;
assign gmii.tx_er=1'b0;*/
// ping example
localparam MAXNBYTES=200*8;
localparam PINGNBYTES=14*8-2;
localparam PINGDATA={
64'h55555555555555d5
,64'h00105ad155b2c46e
,64'h1f01d90d08004500
,64'h0054a66240004001
,64'h0f4ec0a801c8c0a8
,64'h01e00800b0285ae8
,64'h00936b39235f0000
,64'h00009af004000000
,64'h0000101112131415
,64'h161718191a1b1c1d
,64'h1e1f202122232425
,64'h262728292a2b2c2d
,64'h2e2f303132333435
,48'h36370cb55572
};

// arp example
localparam ARPNBYTES=9*8;
localparam ARPDATA={
64'h55555555555555d5
,64'hffffffffffffc46e
,64'h1f01d90d08060001
,64'h080006040001c46e
,64'h1f01d90dc0a801c8
,64'h000000000000c0a8
,64'h01e0000000000000
,64'h0000000000000000
,64'h0000000072bda56a
};

localparam UDPNBYTES=9*8;
localparam UDPDATA={64'h55555555555555d5
,64'h00105ad155b2c46e
,64'h1f01d90d08004500
,64'h0024903540004011
,64'h259bc0a801c8c0a8
,64'h01e0df33d0000010
,64'h3446deadbeefface
,64'hfeed000000000000
,64'h0000000026b628c7
};
localparam UDP2NBYTES=8*13;
localparam UDP2DATA={64'h55555555555555d5
,64'h00105ad155b2c46e
,64'h1f01d90d08004500
,64'h004ed03640004011
,64'he56fc0a801c8c0a8
,64'h01e0ce070d00003a
,64'h36f4c0dedeadbeef
,64'hfacefeed01020304
,64'h0506070800000007
,64'h0000000700000007
,64'h0000000700000007
,64'h0000000700000007
,64'h00000007107136b8
};
localparam UDP1NBYTES=8*13;
localparam UDP1DATA={64'h55555555555555d5
,64'h00105ad155b2c46e
,64'h1f01d90d08004500
,64'h004ea74f40004011
,64'h0e57c0a801c8c0a8
,64'h01e0d2b3d001003a
,64'h6f46c0dedeadbeef
,64'hfacefeed01020304
,64'h0506070800000007
,64'h0000000700000007
,64'h0000000700000007
,64'h0000000700000007
,64'h00000007fbb2e448
};
localparam UDP3NBYTES=8*13;
localparam UDP3DATA={64'h55555555555555d5
,64'h00105ad155b2c46e
,64'h1f01d90d08004500
,64'h004e750a40004011
,64'h409cc0a801c8c0a8
,64'h01e0d353d001003a
,64'h6ea6c0dedeadbeef
,64'hfacefeed01020304
,64'h0506070800000007
,64'h0000000700000007
,64'h0000000700000007
,64'h0000000700000007
,64'h00000007af287e44
};



localparam UDP4NBYTES=8*9;
localparam UDP4DATA={
64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h0024b88540004011
,64'hfd4ac0a801c8c0a8
,64'h01e0d5c1d0020010
,64'hcf64000000000000
,64'h05ac000000000000
,64'h000000007f6df0e0
};


localparam UDP5NBYTES=8*9;
localparam UDP5DATA={
64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h0024b88740004011
,64'hfd48c0a801c8c0a8
,64'h01e0d5c1d0020010
,64'hcf63000000000000
,64'h05ad000000000000
,64'h0000000026375324
};
localparam UDP6NBYTES=8*9;
localparam UDP6DATA={
64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h0024b8ac40004011
,64'hfd23c0a801c8c0a8
,64'h01e0d5c1d0020010
,64'hcf62000000000000
,64'h05ae000000000000
,64'h00000000068a7a2b
};

localparam UDP7NBYTES=8*9;
localparam UDP7DATA={
64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h0024b8c540004011
,64'hfd0ac0a801c8c0a8
,64'h01e0d5c1d0020010
,64'hcf61000000000000
,64'h05af000000000000
,64'h000000008877b513
};

localparam UDPLBNBYTES=8*10+6;
localparam UDPLBDATA={
64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h003cef6540004011
,64'hc652c0a801c8c0a8
,64'h01e09997d0030028
,64'ha9d484b678b2829d
,64'h497900000000dead
,64'hbeef000000020000
,64'h000a000000020000
,64'h000a30c21a75
};
localparam UDPLBWNBYTES=8*10+6;
localparam UDPLBWDATA={
	64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h003cd40d40004011
,64'he1aac0a801c8c0a8
,64'h01e0b6c3d0030028
,64'h8ca884b678b2829d
,64'h497900000000dead
,64'hbeef000000020000
,64'h000a000000020000
,48'h000a182eac34
};
localparam UDPLBRNBYTES=8*10+6;
localparam UDPLBRDATA={
16'h5555
,64'h5555555555d55155
,64'h42494301c46e1f01
,64'hd90d08004500003c
,64'hd40e40004011e1a9
,64'hc0a801c8c0a801e0
,64'hb6c3d0030028fa59
,64'h84b678b2829d4979
,64'h1000000000000000
,64'h1000000200000000
,64'h1000000200000000
,32'h62260e62
};
localparam tdata0={64'h55555555555555d5
,64'h515542494301c46e
,64'h1f01d90d08004500
,64'h003c26c640004011
,64'h8ef2c0a801c8c0a8
,64'h01e0a78cd0030028
,64'h9bdf84b678b2829d
,64'h497900000000dead
,64'hbeef000000020000
,64'h000a000000020000
,48'h000a5ee962d6
};



localparam UDPD002NBYTES=72;
localparam UDPD002DATA={
64'h55555555555555d5
,64'h55aabbccddeec46e
,64'h1f01d90d08004500
,64'h002495a140004011
,64'h202fc0a801c8c0a8
,64'h01e08baad0020010
,64'h1f28000000000000
,64'h0000000000000000
,64'h00000000ace0b70f
};
reg [6:0] inc=0;
reg [31:0] txclkcnt=0;
wire reset=txclkcnt<100;
//reg [47:0] mac=48'h00105ad155b2;
//reg [47:0] mac=48'h515542494301;
//reg [47:0] mac=48'hc46e1f01d90d;
//reg [47:0] mac=48'h55aabbccddee;
reg [31:0] ip=32'hc0a801e0;

reg [47:0] mac=48'h503eaa059701;
iethernet ifethernet(.reset(reset),.mac(mac));
wire ethstart= txclkcnt[7]&(txclkcnt[6:0]==inc);
reg ethstart_d=0;
reg [8*MAXNBYTES-1:0] datasr=0;
reg simdv=0;
always @(posedge ifgmii.tx_clk) begin
	txclkcnt<=txclkcnt+1;
end
/*always @(posedge ifgmii.tx_clk) begin
	txclkcnt<=txclkcnt+1;
	ethstart_d<=ethstart;
	if (ethstart&~ethstart_d) begin
		datasr<=txclkcnt < 1000 ? ARPDATA<<(8*(MAXNBYTES-ARPNBYTES))
		 :txclkcnt<2000 ? PINGDATA <<(8*(MAXNBYTES-PINGNBYTES))
		//: txclkcnt<2500 ?  UDPDATA<<(8*(MAXNBYTES-UDPNBYTES))
		: txclkcnt<2500 ?  UDP2DATA<<(8*(MAXNBYTES-UDP2NBYTES))
		//:	UDP1DATA<<(8*(MAXNBYTES-UDP1NBYTES));
		: txclkcnt<8000 ? UDPD002DATA<<(8*(MAXNBYTES-UDPD002NBYTES))
		: txclkcnt<20000 ? UDPLBDATA<<(8*(MAXNBYTES-UDPLBNBYTES))
		: txclkcnt[0:0]==0 ? UDPLBWDATA<<(8*(MAXNBYTES-UDPLBWNBYTES))
		: txclkcnt[0:0]==1 ? UDPLBRDATA<<(8*(MAXNBYTES-UDPLBRNBYTES))
		//: txclkcnt[1:0]==0 ? UDP4DATA<<(8*(MAXNBYTES-UDP4NBYTES))
		//: txclkcnt[1:0]==1 ? UDP5DATA<<(8*(MAXNBYTES-UDP5NBYTES))
		//: txclkcnt[1:0]==2 ? UDP6DATA<<(8*(MAXNBYTES-UDP6NBYTES))
		//: txclkcnt[1:0]==3 ? UDP7DATA<<(8*(MAXNBYTES-UDP7NBYTES))
		: 0
		;
		inc<=inc+1;
	end
end
*/
//assign ethernet.mac={48'h00105ad155b2};
//assign ifethernet.mac={48'haabbccddeeff};
/*assign gmii.tx_en= |datasr;
assign gmii.tx_er= 1'b0;
assign gmii.txd=datasr[8*NBYTES-1:8*NBYTES-8];
*/

`include "simin.vh"
assign ifgmii.rx_dv= simdv;//|datasr;
assign ifgmii.rx_er=1'b0;
assign ifgmii.rxd=datasr[8*MAXNBYTES-1:8*MAXNBYTES-8];

wire dven4;
wire [7:0] data4;
reg_delay1 #(.dw(9),.len(4))
reg_delay (.clk(ifethernet.clk),.gate(1'b1),.din({ifethernet.rx.dven,ifethernet.rx.data}),.dout({dven4,data4}),.reset(reset));
ethernetovergmii #(.SIM(1))ethernetovergmii (.gmii(ifgmii.eth),.eth(ifethernet),.reset(reset));
//assign ethernet.tx.dven=ethernet.rx.dven&dven4;
//assign ethernet.tx.data=data4;//ethernet.rx.data;

/*iethernet #(.MTU(1500)) arpeth(.reset(reset));
assign arpeth.rx=ethernet.tx;
assign arpeth.tx=ethernet.rx;*/
iarplink ifarp(.clk(ifethernet.clk));
iethernet ifarpethernet(.reset(reset),.mac(mac));
arpoverethernet arpoverethernet (.eth(ifarpethernet), .arp(ifarp),.reset(reset),.ip(ip));
//assign {ethernet.tx.dmac,ethernet.tx.smac,ethernet.tx.ethertype}={ethernet.rx.dmac,ethernet.rx.smac,ethernet.rx.ethertype};
iethernet ifipv4ethernet(.reset(reset),.mac(mac));


ipv4link ifipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ificmpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ifudpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
assign ifudpipv4.requestcode=8'h11;
ipv4overethernet ipv4overethernet(.eth(ifipv4ethernet), .ipv4(ifipv4),.reset(reset));

ethernetsw ethernetsw(.hardware(ifethernet),.arpethernet(ifarpethernet),.ipv4ethernet(ifipv4ethernet));
icmplink ificmp(.clk(ifethernet.clk),.reset(reset));
icmplink ifpingicmp(.clk(ifethernet.clk),.reset(reset));
icmpoveripv4 icmpoveripv4(.ipv4(ificmpipv4), .icmp(ificmp),.reset(reset));
wire requestping;
pingovericmp #(.SIM(1))pingovericmp(.icmp(ifpingicmp),.reset(reset));
ipv4sw ipv4sw(.ipv4(ifipv4),.icmpipv4(ificmpipv4),.udpipv4(ifudpipv4));
icmpsw icmpsw(.icmp(ificmp),.pingicmp(ifpingicmp));
udplink ifudp(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd001(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd002(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd003(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd000(.reset(reset),.clk(ifethernet.clk));
udpoveripv4 udpovreipv4(.ipv4(ifudpipv4),.udp(ifudp),.reset(reset));
udpsw udpsw(.udp(ifudp),.udpportd001(ifudpportd001),.udpportd000(ifudpportd000)
,.udpportd002(ifudpportd002)
,.udpportd003(ifudpportd003)
);
//icmpoveripv4 icmpoveripv4_udp(.ipv4(ifudpipv4), .icmp(ificmp),.reset(reset));
/*reg [7:0] udprxdata=0;
reg udprxdven=0;
reg [7:0] udprxdata_d=0;
reg udprxdven_d=0;
always @(posedge ifethernet.clk) begin
	udprxdata<=ifudpd000.rx.data;
	udprxdven<=ifudpd000.rx.dven;
	udprxdata_d<=udprxdata;
	udprxdven_d<=udprxdven;
end
assign ifudpd000.tx.srcport=ifudpd000.rx.dstport;
assign ifudpd000.tx.dstport=ifudpd000.rx.srcport;
assign ifudpd000.tx.length=ifudpd000.rx.length;
assign ifudpd000.tx.checksum=0;
assign ifudpd000.request_w=udprxdven&~udprxdven_d;
assign ifudpd000.tx.data=udprxdata_d;
assign ifudpd000.tx.dven=udprxdven_d;
*/
udpecho #(.PORT(16'hd000))
udpecho(.clk(ifethernet.clk),.udp(ifudpportd000),.reset(reset));
udpstatic #(.PORT(16'hd001))
udpstatic(.clk(ifethernet.clk),.udp(ifudpportd001),.reset(reset),.staticnbyte(0));
udpcnt #(.PORT(16'hd002))
udpcnt(.clk(ifethernet.clk),.udp(ifudpportd002),.reset(reset),.countperrequest(18));
//udpstatic(.clk(ifethernet.clk),.udp(ifudpportd001),.reset(reset),.staticnbyte(1472));
wire [63:0] lbrxdata;
wire [63:0] lbtxdata;
wire lbtxen;
wire lbrxdv;
wire [15:0] rxlength;
wire [15:0] txlength;
ilocalbus#(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32),.WRITECMD(0),.READCMD(8'h10))
udplb();
udplb64 #(.PORT(16'hd003))
udplb64 (.clk(ifethernet.clk),.udp(ifudpportd003),.reset(reset)
,.lbclk(udplb.clk)
,.lbrxdata(udplb.wcmd)
,.lbrxdv(udplb.wvalid)
,.lbtxdata(udplb.rcmd)
,.lbtxen(udplb.rready)
,.lbrxen(udplb.wen)
,.rxlength(rxlength)
,.txlength(txlength)
);
assign udplb.clk=sysclk;
assign txlength=rxlength;
regmap#(.LBCWIDTH(8),.LBAWIDTH(24),.LBDWIDTH(32))
lbreg();
assign udplb.wen=lbreg.lb.wen;
assign lbreg.lb.clk=udplb.clk;
assign lbreg.lb.wcmd=udplb.wcmd;
assign lbreg.lb.wvalid=udplb.wvalid;
//assign udplb.rcmd=lbreg.lb.rcmd;
assign udplb.rctrl=lbreg.lb.rctrl;
assign udplb.raddr=lbreg.lb.raddr;
assign udplb.rdata=lbreg.lb.rdata;
assign udplb.rready=lbreg.lb.rready;
assign lbreg.lb.readcmd=udplb.READCMD;
assign lbreg.lb.writecmd=udplb.WRITECMD;

/*assign lbreg.cntbuf_buf.buf0.wr.clk=sysclk;
assign lbreg.cntbuf_buf.buf0.wr.en=1'b1;
assign lbreg.cntbuf_buf.buf0.wr.data=sysclkcnt;//8'h3c;
*/
assign lbreg.bufreadtest.wclk=clk250;
assign lbreg.bufreadtest.wren=1'b1;
assign lbreg.bufreadtest.wrdata=clk250cnt;
areset areset_bufreadtestreset(.clk(clk250),.areset(lbreg.stb_bufreadtestreset),.sreset(lbreg.bufreadtest.reset));
//assign lbreg.bufreadtest.flip=lbreg.stb_bufreadtestflip;
assign lbreg.bufreadtestfull=lbreg.bufreadtest.full;

//assign udplb.lbrready=udplb.lbwvalid;  // for this current uart lb, response immidiately
//assign lbtxen=lbrxdv;
//assign lbtxdata=lbrxdata;//64'hfffe0001deadbeef
endmodule
