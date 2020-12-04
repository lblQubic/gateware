module gmii2udp#(parameter DEBUG="false",parameter SIM=0)
(gmii.eth gmii
,udplink ifudp
,input reset
,input [47:0] mac
,input [31:0] ip
);

iethernet ifethernet(.reset(reset),.mac(mac));
iethernet ifarpethernet(.reset(reset),.mac(mac));
iethernet ifipv4ethernet(.reset(reset),.mac(mac));
ethernetovergmii #(.SIM(SIM))ethernetovergmii1 (.gmii(gmii),.eth(ifethernet),.reset(reset));
ethernetsw ethernetsw(.hardware(ifethernet),.arpethernet(ifarpethernet),.ipv4ethernet(ifipv4ethernet));

iarplink arp(.clk(ifethernet.clk));
arpoverethernet arpoverethernet (.eth(ifarpethernet), .arp(arp),.reset(reset),.ip(ip));

ipv4link ifipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ificmpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4link ifudpipv4(.clk(ifethernet.clk),.reset(reset),.ip(ip));
ipv4overethernet ipv4overethernet(.eth(ifipv4ethernet), .ipv4(ifipv4),.reset(reset));
ipv4sw ipv4sw(.ipv4(ifipv4),.icmpipv4(ificmpipv4),.udpipv4(ifudpipv4));


icmplink ificmp(.clk(ifethernet.clk),.reset(reset));
icmplink ifpingicmp(.clk(ifethernet.clk),.reset(reset));
icmpoveripv4 icmpoveripv4(.ipv4(ificmpipv4), .icmp(ificmp),.reset(reset));
pingovericmp #(.SIM(SIM))pingovericmp(.icmp(ifpingicmp),.reset(reset));
icmpsw icmpsw(.icmp(ificmp),.pingicmp(ifpingicmp));

udpoveripv4 udpovreipv4(.ipv4(ifudpipv4),.udp(ifudp),.reset(reset));

endmodule

/*wire udprxerr;
udplink ifudpportd001(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd002(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd003(.reset(reset),.clk(ifethernet.clk));
udplink ifudpportd000(.reset(reset),.clk(ifethernet.clk));
udpsw udpsw(.udp(ifudp),.udpportd001(ifudpportd001),.udpportd000(ifudpportd000),.udpportd002(ifudpportd002),.udpportd003(ifudpportd003));
udpecho #(.PORT(16'hd000))
udpecho(.clk(ifethernet.clk),.udp(ifudpportd000),.reset(reset));
udpstatic #(.PORT(16'hd001))
udpstatic(.clk(ifethernet.clk),.udp(ifudpportd001),.reset(reset),.staticnbyte(1472));
udpcnt #(.PORT(16'hd002))
udpcnt(.clk(ifethernet.clk),.udp(ifudpportd002),.reset(reset),.udprxerr(udprxerr));
wire [15:0] txlength;
wire [15:0] rxlength;
udplb64 #(.PORT(16'hd003))
udplb64 (.clk(ifethernet.clk),.udp(ifudpportd003),.reset(reset)//~sgmiieth_resetdone)
,.lbclk(udplb.clk)
,.lbrxdata(udplb.wcmd)
,.lbrxdv(udplb.wvalid)
,.lbtxdata(udplb.rcmd)
,.lbtxen(udplb.rready)
,.rxlength(rxlength)
,.txlength(txlength)
);
assign udplb.clk=hw.vc707.sysclk;
assign txlength=rxlength;
*/
