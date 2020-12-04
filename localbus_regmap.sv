interface ilocalbus#(parameter LBCWIDTH=8,parameter LBAWIDTH=24,parameter LBDWIDTH=32,parameter WRITECMD=1,parameter READCMD=0,parameter MASTER=1)();
localparam LBWIDTH=LBCWIDTH+LBAWIDTH+LBDWIDTH;
wire clk;
wire [LBWIDTH-1:0] wcmd;
wire wvalid;
wire [LBWIDTH-1:0] rcmd;
wire rready;

wire [LBCWIDTH-1:0] wctrl;
wire [LBAWIDTH-1:0] waddr;
wire [LBDWIDTH-1:0] wdata;
reg [LBCWIDTH-1:0] rctrl;
reg [LBAWIDTH-1:0] raddr;
reg [LBDWIDTH-1:0] rdata;
wire write;
wire read;
assign {wctrl,waddr,wdata}=wcmd;
assign rcmd={rctrl,raddr,rdata};
assign write=wctrl==writecmd; // 1 for uart, 0 for udp
assign read=wctrl==readcmd;  // 0 for uart, 0x10 for udp
wire [LBCWIDTH-1:0] writecmd;
wire [LBCWIDTH-1:0] readcmd;

endinterface



interface ilocalbus_regmap#(parameter LBCWIDTH=8,parameter LBAWIDTH=24,parameter LBDWIDTH=32,parameter WRITECMD=1,parameter READCMD=0)();

ilocalbus #(.LBCWIDTH(LBCWIDTH),.LBAWIDTH(LBAWIDTH),.LBDWIDTH(LBDWIDTH),.READCMD(READCMD),.WRITECMD(WRITECMD))
lb();


reg lbrready_r=0;
reg lbwvalid_r=0;
reg [LBCWIDTH-1:0] lbrcmd_r=0;
reg lbrready_r1=0;
reg lbrready_r2=0;

`include "lbwrite.vh"
always @(posedge lb.clk) begin
	//lbwvalid_r<=lb.wvalid;
	lbrready_r2<=lbrready_r1;
	lbrready_r1<=lbrready_r;
	case (lb.wctrl)
		lb.writecmd: begin
			lbrready_r<=lb.wvalid;
			lb.rctrl<=lb.wctrl;
			lb.raddr<=lb.waddr;
			lb.rdata<=lb.wdata;
		end
		lb.readcmd: begin
			lbrready_r<=lb.wvalid;
			lb.rctrl<=lb.wctrl;
			lb.raddr<=lb.waddr;
			casex (lb.waddr)
				`include "lbread.vh"
				default: lb.rdata<= 32'hdeadbeef;
			endcase
		end
		default: begin
			lbrready_r<=lb.wvalid;
			lb.rctrl<=lb.wctrl;
			lb.raddr<=lb.waddr;
			lb.rdata<=lb.wdata;
		end
	endcase
end
assign lb.rready= lbrready_r2;

//endinterface

modport cfg(
input test,test2,err,uartmode,xadcupdate,stb_i2cstart,i2cstart,i2cdatatx,clk4ratio,i2cmux_reset_b,fmcdacen,sfptesttx,stb_hwreset,sfptxdisable,mdiodatatx,stb_mdiostart,mdioclk4ratio
,axifmc1adc0_addr,axifmc1adc0_w0r1,axifmc1adc0_wdata,axifmc1adc1_addr,axifmc1adc1_w0r1,axifmc1adc1_wdata,axifmc1dac_addr,axifmc1dac_w0r1,axifmc1dac_wdata,axifmc2adc0_addr,axifmc2adc0_w0r1,axifmc2adc0_wdata,axifmc2adc1_addr,axifmc2adc1_w0r1,axifmc2adc1_wdata,axifmc2dac_addr,axifmc2dac_w0r1,axifmc2dac_wdata,stb_axifmc1adc0_start,stb_axifmc1adc1_start,stb_axifmc1dac_start,stb_axifmc2adc0_start,stb_axifmc2adc1_start,stb_axifmc2dac_start
,output xadctemp,xadcaux4,xadcaux12,i2cdatarx,i2crxvalid,fmcprsnt,fmcpgm2c,sfptestrx,hwresetstatus,mdiodatarx,mdiorxvalid,axifmc1adc0_rdata,axifmc1adc0_rdatavalid,axifmc1adc1_rdata,axifmc1adc1_rdatavalid,axifmc1dac_rdata,axifmc1dac_rdatavalid,axifmc2adc0_rdata,axifmc2adc0_rdatavalid,axifmc2adc1_rdata,axifmc2adc1_rdatavalid,axifmc2dac_rdata,axifmc2dac_rdatavalid
);
modport dsp(input test,test2,err
,output test1
);
endinterface

//interface localbus#(parameter LBCWIDTH=8,parameter LBAWIDTH=24,parameter LBDWIDTH=32)();

