module ethernetsw #(parameter SIM=0,parameter AWIDTH=5)
(iethernet hardware,iethernet arpethernet,iethernet ipv4ethernet
,output clientackw,output [15:0] clientackcodew
,output [4:0] reqcntw
);
assign arpethernet.clk=hardware.clk;
assign ipv4ethernet.clk=hardware.clk;
//assign hardware.tx.dst=sel==0 ? arpethernet.tx.src : ipv4ethernet.tx.src;
assign arpethernet.rx.dst=hardware.rx.src;
assign ipv4ethernet.rx.dst=hardware.rx.src;

wire request=|{arpethernet.request,ipv4ethernet.request};
wire [15:0] requestcode= ipv4ethernet.request ? ipv4ethernet.requestcode :
						arpethernet.request ? arpethernet.requestcode : 0;
assign ipv4ethernet.requestacpt=ipv4ethernet.request;
assign arpethernet.requestacpt=ipv4ethernet.request ? 0 : arpethernet.request;
wire clk=hardware.clk;
wire [15:0] fifordata;
wire fiforvalid;
wire fifoempty;
reg [AWIDTH-1:0] reqcnt=0;
always @(posedge clk) begin
	if (request ^ hardware.requestacpt) begin
		reqcnt<=reqcnt+request-hardware.requestacpt;
	end
end
fifo#(.AW(AWIDTH),.DW(16),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
reqfifo(.wclk(clk),.rclk(clk)
,.wr_en(request)
,.din(requestcode)
,.rd_en(~hardware.tx.busy)
,.dout(fifordata)
,.doutvalid(fiforvalid)
,.full()
,.empty(fifoempty)
,.rst(1'b0)
);
reg clientack=0;
reg [15:0] clientackcode=0;
always@(posedge clk) begin
	if (fiforvalid)
		clientackcode<=fifordata;
		clientack<=fiforvalid;
end
//assign clientackcode= fifordata;
/*always @(posedge clk) begin`
	clientack<=fiforvalid;
	if (fiforvalid)
		clientackcode<= fifordata;
end
*/
assign hardware.ack=clientack;
assign ipv4ethernet.ack=clientack & (clientackcode==ipv4ethernet.requestcode);
assign arpethernet.ack=clientack & (clientackcode==arpethernet.requestcode);
assign ipv4ethernet.ackcode=clientackcode;
assign arpethernet.ackcode=clientackcode;
assign hardware.tx.dst=clientackcode==ipv4ethernet.requestcode ? ipv4ethernet.tx.src
					: clientackcode == arpethernet.requestcode ? arpethernet.tx.src
					: 0;
assign hardware.request_w= request;
assign hardware.requestacpt=hardware.request;
assign reqcntw=reqcnt;
assign clientackw=clientack;
assign clientackcodew=clientackcode;
endmodule



module ipv4sw #(parameter SIM=0,parameter AWIDTH=5)
(ipv4link ipv4,ipv4link icmpipv4,ipv4link udpipv4);
//assign icmpipv4.clk=ipv4.clk;
//assign udpipv4.clk=ipv4.clk;
wire clk=ipv4.clk;
assign icmpipv4.rx.dst=ipv4.rx.src;
assign udpipv4.rx.dst=ipv4.rx.src;
// priority
wire request=udpipv4.request | icmpipv4.request;
wire [7:0] ipv4requestcode=udpipv4.request ? udpipv4.requestcode : icmpipv4.request ? icmpipv4.requestcode : 0;
assign udpipv4.requestacpt=udpipv4.request;
assign icmpipv4.requestacpt=udpipv4.request? 0 : icmpipv4.request;

reg [AWIDTH-1:0] reqcnt=0;
always @(posedge clk) begin
	if (request ^ ipv4.requestacpt) begin
		reqcnt<=reqcnt+request-ipv4.requestacpt;
	end
end

wire [7:0] fifordata;
wire fiforvalid;
fifo#(.AW(5),.DW(8),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
reqfifo(.wclk(clk),.rclk(clk)
,.wr_en(request)
,.din(ipv4requestcode)
,.rd_en(ipv4.ack)
,.dout(fifordata)
,.full()
,.empty()
,.rst(1'b0)
,.doutvalid(fiforvalid)
);
reg [7:0] clientackcode=0;
reg clientack=0;
always @(posedge clk) begin
	clientack<=fiforvalid;
	if (fiforvalid)
		clientackcode<= fifordata;
end
assign ipv4.ackcode=clientackcode ;
assign udpipv4.ack=clientack & (clientackcode==udpipv4.requestcode);
assign icmpipv4.ack=clientack & (clientackcode==icmpipv4.requestcode);
assign udpipv4.ackcode=clientackcode;
assign icmpipv4.ackcode=clientackcode;
assign ipv4.tx.dst=clientackcode==udpipv4.requestcode ? udpipv4.tx.src
				: clientackcode==icmpipv4.requestcode ? icmpipv4.tx.src : 0;
assign ipv4.request_w=request;
endmodule


module icmpsw #(parameter SIM=0,parameter AWIDTH=5)
(icmplink icmp,icmplink pingicmp);
//assign pingicmp.clk=icmp.clk;
wire clk=icmp.clk;
assign pingicmp.rx.dst=icmp.rx.src;
wire [7:0] fifordata;
wire fiforvalid;
wire reqcodeempty;
wire reqempty;
wire request=pingicmp.request;
wire [7:0] requestcode=pingicmp.requestcode;
fifo#(.AW(AWIDTH),.DW(8),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
reqcodefifo(.wclk(clk),.rclk(clk)
,.wr_en(request)
,.din(requestcode)
,.rd_en(icmp.ack)
,.dout(fifordata)
,.doutvalid(fiforvalid)
,.full()
,.empty(reqcodeempty)
,.rst(1'b0)
);
reg [AWIDTH-1:0] reqcnt=0;
always @(posedge clk) begin
	if (request ^ icmp.requestacpt) begin
		reqcnt<=reqcnt+ (&reqcnt ? 0 : request)-(|reqcnt ? icmp.requestacpt:0);
	end
end
reg [7:0] clientackcode=0;
reg clientack=0;
always @(posedge clk) begin
	clientack<=fiforvalid;
	if (fiforvalid)
		clientackcode<= fifordata;
end
assign pingicmp.requestacpt=pingicmp.request;
assign pingicmp.ack=clientack & (clientackcode==pingicmp.requestcode);
assign icmp.tx.dst=clientackcode==pingicmp.requestcode ? pingicmp.tx.src : 0;
assign icmp.request_w=request;//pingicmp.request;
assign icmp.ackcode=clientackcode;
assign pingicmp.ackcode=clientackcode;
//assign icmp.request_w=pingicmp.request_w;

endmodule

module udpsw #(parameter SIM=0,parameter AWIDTH=5,parameter FIFODW=16)
(udplink udp,udplink udpportd001,udplink udpportd000,udplink udpportd002
,udpportd003
,output clientackw,output [FIFODW-1:0] clientackcodew
,output [4:0] reqcntw
);
wire clk;
wire request;
wire [FIFODW-1:0] requestcode;
reg [AWIDTH-1:0] reqcnt=0;
wire [FIFODW-1:0] fifordata;
reg clientack=0;
reg [FIFODW-1:0] clientackcode=0;
wire fiforvalid;
wire fifoempty;

assign clk=udp.clk;
//assign udpportd000.clk=udp.clk;
//assign udpportd001.clk=udp.clk;
assign udpportd003.rx.dst=udp.rx.src;
assign udpportd002.rx.dst=udp.rx.src;
assign udpportd001.rx.dst=udp.rx.src;
assign udpportd000.rx.dst=udp.rx.src;
assign udp.request_w= request;
assign udpportd000.ack=clientack & (clientackcode==udpportd000.requestcode);
assign udpportd001.ack=clientack & (clientackcode==udpportd001.requestcode);
assign udpportd002.ack=clientack & (clientackcode==udpportd002.requestcode);
assign udpportd003.ack=clientack & (clientackcode==udpportd003.requestcode);
assign udp.ackcode=clientackcode;
assign udpportd000.ackcode=clientackcode;
assign udpportd001.ackcode=clientackcode;
assign udpportd002.ackcode=clientackcode;
assign udpportd003.ackcode=clientackcode;
assign request=|{udpportd003.request,udpportd002.request,udpportd001.request,udpportd000.request};
assign requestcode= udpportd000.request ? udpportd000.requestcode :
						udpportd001.request ? udpportd001.requestcode :
						udpportd002.request ? udpportd002.requestcode :
						udpportd003.request ? udpportd003.requestcode :
						0;
assign udpportd000.requestacpt=udpportd000.request;
assign udpportd001.requestacpt=udpportd000.request ? 0 : udpportd001.request;
assign udpportd002.requestacpt=udpportd000.request ? 0 : udpportd001.request ? 0 : udpportd002.request;
assign udpportd003.requestacpt=udpportd000.request ? 0 : udpportd001.request ? 0 : udpportd002.request ? 0 : udpportd003.request;
assign udp.tx.dst=clientackcode==udpportd000.requestcode ? udpportd000.tx.src
					: clientackcode == udpportd001.requestcode ? udpportd001.tx.src
					: clientackcode == udpportd002.requestcode ? udpportd002.tx.src
					: clientackcode == udpportd003.requestcode ? udpportd003.tx.src
					: 0;

always @(posedge clk) begin
	if (request ^ udp.requestacpt) begin
		reqcnt<=reqcnt+request-udp.requestacpt;
	end
end
fifo#(.AW(AWIDTH),.DW(FIFODW),.SIM(SIM),.BRAM(1),.SAMECLKDOMAIN(1))
reqfifo(.wclk(clk),.rclk(clk)
,.wr_en(request)
,.din(requestcode)
,.rd_en(udp.ack)
,.dout(fifordata)
,.doutvalid(fiforvalid)
,.full()
,.empty(fifoempty)
,.rst(1'b0)
);
always@(posedge clk) begin
	clientack<=fiforvalid;
	if (fiforvalid)
		clientackcode<=fifordata;
end

assign reqcntw=reqcnt;
assign clientackw=clientack;
assign clientackcodew=clientackcode;
endmodule

