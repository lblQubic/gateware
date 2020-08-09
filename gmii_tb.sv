//`include "constants.vams"
//`include "xc7vx485tffg1761pkg.vh"
`timescale 1ns / 100ps
module gmii_tb();

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

reg sgmiiclk=0;
initial begin
    forever #(4) sgmiiclk=~sgmiiclk;
end
gmii ifgmii();
assign ifgmii.tx_clk=sgmiiclk;
assign ifgmii.rx_clk=sgmiiclk;
/*assign gmii.tx_en=tx_en;
assign gmii.txd=8'hde;
assign gmii.tx_er=1'b0;*/
// ping example
localparam MAXNBYTES=20*8;
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
reg [6:0] inc=0;
reg [31:0] txclkcnt=0;
wire reset=txclkcnt<100;
reg [47:0] mac=48'h00105ad155b2;
iethernet ifethernet(.reset(reset),.mac(mac));
wire ethstart= txclkcnt[7]&(txclkcnt[6:0]==inc);
reg ethstart_d=0;
reg [8*MAXNBYTES-1:0] datasr=0;
always @(posedge ifgmii.tx_clk) begin
	txclkcnt<=txclkcnt+1;
	ethstart_d<=ethstart;
	if (ethstart&~ethstart_d) begin
		datasr<=txclkcnt > 32'h500 ? PINGDATA <<(8*(MAXNBYTES-PINGNBYTES)) : ARPDATA<<(8*(MAXNBYTES-ARPNBYTES));
		inc<=inc+1;
	end
	if (|datasr)
		datasr<= datasr<<8;
end
//assign ethernet.mac={48'h00105ad155b2};
//assign ifethernet.mac={48'haabbccddeeff};
/*assign gmii.tx_en= |datasr;
assign gmii.tx_er= 1'b0;
assign gmii.txd=datasr[8*NBYTES-1:8*NBYTES-8];
*/

assign ifgmii.rx_dv= |datasr;
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
reg [31:0] ip=32'hc0a801e0;
iarplink ifarp(.clk(ifethernet.clk));
iethernet ifarpethernet(.reset(reset),.mac(mac));
arpoverethernet arpoverethernet (.eth(ifarpethernet), .arp(ifarp),.reset(reset),.ip(ip));
//assign {ethernet.tx.dmac,ethernet.tx.smac,ethernet.tx.ethertype}={ethernet.rx.dmac,ethernet.rx.smac,ethernet.rx.ethertype};
iethernet ifipv4ethernet(.reset(reset),.mac(mac));


ipv4link ifipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ificmpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ifudpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
assign ifudpipv4.requestcode=16'h11;
ipv4overethernet ipv4overethernet(.eth(ifipv4ethernet), .ipv4(ifipv4),.reset(reset));

ethernetsw ethernetsw(.hardware(ifethernet),.arpethernet(ifarpethernet),.ipv4ethernet(ifipv4ethernet));
icmplink ificmp(.clk(ifethernet.clk),.reset(reset));
icmplink ifpingicmp(.clk(ifethernet.clk),.reset(reset));
icmpoveripv4 icmpoveripv4(.ipv4(ificmpipv4), .icmp(ificmp),.reset(reset));
//icmpoveripv4 icmpoveripv4_udp(.ipv4(ifudpipv4), .icmp(ificmp),.reset(reset));
wire requestping;
pingovericmp #(.SIM(1))pingovericmp(.icmp(ifpingicmp),.reset(reset));
ipv4sw ipv4sw(.ipv4(ifipv4),.icmpipv4(ificmpipv4),.udpipv4(ifudpipv4));
icmpsw icmpsw(.icmp(ificmp),.pingicmp(ifpingicmp));
endmodule
