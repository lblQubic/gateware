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
reg wdatadone=0;
reg rdatadone=0;
wire waddrdatadone=waddrdone&wdatadone;
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
		RADDR: next = slave.arready ? RDATA : RADDR;
		RDATA: next = rdatadone ? IDLE : RDATA;
		WADDRDATA: next = waddrdatadone ? WACK : WADDRDATA;
		WACK: next = slave.bvalid ? IDLE : WACK;
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
			end
			RADDR: begin
				araddr<=addr_r;
				arvalid<=1'b1;
				rready<=1'b1;
				bready<=1'b1;
				rdatavalid_r<=0;
			end
			RDATA: begin
				arvalid<=1'b0;
				if (slave.rvalid) begin
					rdata_r<=slave.rdata;
					rdatavalid_r<=slave.rvalid;
					rdatadone<=1'b1;
				end
			end
			WADDRDATA: begin
				awaddr<=addr_r;
				awvalid<=1'b1;
				wdata_sm<=wdata_r;
				wstrb_sm<=wstrb_r;
				wvalid<=1'b1;
				if (slave.awready)
					waddrdone<=1'b1;
				if (slave.wready)
					wdatadone<=1'b1;
			end
			WACK: begin
				bready<=1'b1;
				waddrdone<=1'b0;
				wdatadone<=1'b0;
			end
		endcase
	end
end
assign slave.aresetn=aresetn;
assign slave.araddr=araddr;
assign slave.arvalid=arvalid;
assign slave.rready=rready;
assign slave.awaddr=awaddr;
assign slave.awvalid=awvalid;
assign slave.wdata=wdata_sm;
assign slave.wstrb=wstrb_sm;
assign slave.bready=bready;
assign slave.wvalid=wvalid;
assign rdatavalid=rdatavalid_r;
assign rdata=rdata_r;
endmodule
