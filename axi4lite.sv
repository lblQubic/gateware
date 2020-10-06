interface axi4lite#(parameter AWIDTH=12,parameter DWIDTH=32)(input aclk);
wire aresetn;

wire [AWIDTH-1:0] araddr;
wire arready;
wire arvalid;
wire [DWIDTH-1:0] rdata;
wire rready;
wire [1:0] rresp;
wire rvalid;

wire [AWIDTH-1:0] awaddr;
wire awready;
wire awvalid;
wire [DWIDTH-1:0] wdata;
localparam DBYTES=DWIDTH/8;
wire [DBYTES-1:0] wstrb;
wire bready;
wire [1:0] bresp;
wire bvalid;

wire wready;
wire wvalid;

wire [2:0] awport=0;
wire [2:0] arport=0;

modport master(output aresetn,araddr,arvalid,rready,awaddr,awvalid,wdata,wstrb,bready,wvalid
,input arready,rdata,rresp,rvalid,awready,bresp,bvalid,wready
);
modport slave(input aresetn,araddr,arvalid,rready,awaddr,awvalid,wdata,wstrb,bready,wvalid
,output arready,rdata,rresp,rvalid,awready,bresp,bvalid,wready
);
endinterface


module axi4lite_read(axi4lite.master master, ax4lite.slave slave);
endmodule

module axi4lite_write(axi4lite.master master, axi4lite.slave slave);
endmodule

module lb_axi4lite #(parameter AWIDTH=12,parameter DWIDTH=32)
(axi4lite.slave slave
,input clk
,input [AWIDTH-1:0] addr
,input [DWIDTH-1:0] wdata
,output [DWIDTH-1:0] rdata
,input [DBYTES-1:0] wstrb
,output rdatavalid
,input start
,input w0r1
,input reset
);
localparam DBYTES=DWIDTH/8;
lb_axi4lite_core #(.AWIDTH(AWIDTH),.DWIDTH(DWIDTH))
lb_axi4lite_core(.addr,.clk,.rdata,.rdatavalid,.reset,.start,.w0r1,.wdata,.wstrb
,.slave_araddr(slave.araddr),.slave_arready(slave.arready),.slave_arvalid(slave.arvalid),.slave_awaddr(slave.awaddr),.slave_awready(slave.awready),.slave_awvalid(slave.awvalid),.slave_bready(slave.bready),.slave_bresp(slave.bresp),.slave_bvalid(slave.bvalid),.slave_rdata(slave.rdata),.slave_rready(slave.rready),.slave_rresp(slave.rresp),.slave_rvalid(slave.rvalid),.slave_wdata(slave.wdata),.slave_wready(slave.wready),.slave_wstrb(slave.wstrb),.slave_wvalid(slave.wvalid),.slave_aresetn(slave.aresetn)
);
endmodule
module lb_axi4lite_core #(parameter AWIDTH=12,parameter DWIDTH=32)
(output slave_aresetn
,output [AWIDTH-1:0] slave_araddr
,output slave_arvalid
,output slave_rready
,output [AWIDTH-1:0] slave_awaddr
,output slave_awvalid
,output [DWIDTH-1:0] slave_wdata
,output [DBYTES-1:0] slave_wstrb
,output slave_bready
,output slave_wvalid
,input slave_arready
,input [DWIDTH-1:0] slave_rdata
,input [1:0] slave_rresp
,input slave_rvalid
,input slave_awready
,input [1:0] slave_bresp
,input slave_bvalid
,input slave_wready
,input clk
,input [AWIDTH-1:0] addr
,input [DWIDTH-1:0] wdata
,output [DWIDTH-1:0] rdata
,input [DBYTES-1:0] wstrb
,output rdatavalid
,input start
,input w0r1
,input reset
);
localparam DBYTES=DWIDTH/8;

reg [DWIDTH-1:0] rdata_r=0;
reg rdatavalid_r=0;
reg aresetn=0;
reg [AWIDTH-1:0] araddr=0;
reg arvalid=0;
reg rready=0;
reg [AWIDTH-1:0] awaddr=0;
reg awvalid=0;
reg [DWIDTH-1:0] wdata_sm=0;
reg [DBYTES-1:0] wstrb_sm=0;
reg bready=0;
reg wvalid=0;

reg start_d=0;
reg [AWIDTH-1:0] addr_r=0;
reg [DWIDTH-1:0] wdata_r=0;
reg [DBYTES-1:0] wstrb_r=0;
reg w0r1_r=0;
wire startrising=start&~start_d;
reg startrising_d=0;
always @(posedge clk) begin
	start_d<=start;
	if (startrising) begin
		addr_r<=addr;
		wdata_r<=wdata;
		wstrb_r<=wstrb;
		w0r1_r<=w0r1;
	end
	startrising_d<=startrising;
end

localparam IDLE=4'd0;
localparam RADDR=4'd1;
localparam RDATA=4'd2;
localparam WADDRDATA=4'd3;
localparam WACK=4'd4;
reg [2:0] state=IDLE;
reg [2:0] next=IDLE;
reg waddrdone=0;
wire waddrdone_w=slave_awvalid&slave_awready;
reg wdatadone=0;
wire wdatadone_w=slave_wvalid&slave_wready;
reg rdatadone=0;
wire rdatadone_w=slave_rvalid&slave_rready;
reg raddrdone=0;
wire raddrdone_w=slave_arvalid&slave_arready;
wire waddrdatadone=(waddrdone|waddrdone_w)&(wdatadone|wdatadone_w);
always @(posedge clk or posedge reset) begin
    if (reset) begin
        state<=IDLE;
    end
    else begin
        state<=next;
    end
end
always @(*) begin
    case(state)
		IDLE: next= startrising_d ? (w0r1_r ? RADDR : WADDRDATA ) : IDLE;
		RADDR: next = raddrdone|raddrdone_w? RDATA : RADDR;
		RDATA: next = rdatadone|rdatadone_w ? IDLE : RDATA;
		WADDRDATA: next = waddrdatadone ? WACK : WADDRDATA;
		WACK: next = slave_bvalid&slave_bready ? IDLE : WACK;
    endcase
end
always @(posedge clk) begin
    if (reset)begin
		aresetn<=1'b0;
		araddr<=0;
		arvalid<=0;
		rready<=0;
		awaddr<=0;
		awvalid<=0;
		wdata_sm<=0;
		wstrb_sm<=0;
		bready<=0;
		wvalid<=0;
		waddrdone<=1'b0;
		wdatadone<=1'b0;
    end
    else begin
		case(next)
			IDLE:begin
				aresetn<=1'b1;
				araddr<=0;
				arvalid<=0;
				rready<=0;
				awaddr<=0;
				awvalid<=0;
				wdata_sm<=0;
				wstrb_sm<=0;
				bready<=0;
				wvalid<=0;
				rdatadone<=1'b0;
				waddrdone<=1'b0;
				wdatadone<=1'b0;
			end
			RADDR: begin
				araddr<=addr_r;
				arvalid<=~(raddrdone|raddrdone_w);
				bready<=1'b1;
			end
			RDATA: begin
				arvalid<=1'b0;
				rready<=1'b1;
				if (rdatadone_w)
					rdatadone<=1'b1;
			end
			WADDRDATA: begin
				awaddr<=addr_r;
				awvalid<=~(waddrdone|waddrdone_w);
				wdata_sm<=wdata_r;
				wstrb_sm<=wstrb_r;
				wvalid<=~(wdatadone|wdatadone_w);
				if (waddrdone_w)
					waddrdone<=1'b1;
				if (wdatadone_w)
					wdatadone<=1'b1;
			end
			WACK: begin
				awvalid<=1'b0;
				wvalid<=1'b0;
				bready<=1'b1;
				waddrdone<=1'b0;
				wdatadone<=1'b0;
			end
		endcase
		if (next==RADDR) begin
			rdata_r<=0;
			rdatavalid_r<=1'b0;
		end
		else begin
			if (rdatadone_w) begin
				rdata_r<=slave_rdata;
				rdatavalid_r<=slave_rvalid;
			end
		end
	end
end
assign slave_aresetn=aresetn;
assign slave_araddr=araddr;
assign slave_arvalid=arvalid;
assign slave_rready=rready;
assign slave_awaddr=awaddr;
assign slave_awvalid=awvalid;
assign slave_wdata=wdata_sm;
assign slave_wstrb=wstrb_sm;
assign slave_bready=bready;
assign slave_wvalid=wvalid;
assign rdatavalid=rdatavalid_r;
assign rdata=rdata_r;
endmodule
