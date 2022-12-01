//qdrvelem qdrvelem (.elem(qdrvelem),.envaddr(addr_qdrvenv),.envdata(data_qdrvenv),.freqaddr(addr_qdrvfreq),.freqdata(data_qdrvfreq));
module elementconn#(parameter ENV_ADDRWIDTH=32,parameter ENV_DATAWIDTH=32,parameter TCNTWIDTH=32,parameter FREQ_ADDRWIDTH=32,parameter FREQ_DATAWIDTH=32)(ifelement.elem elem
,output [ENV_ADDRWIDTH-1:0] envaddr
,input [ENV_DATAWIDTH-1:0] envdata
,output [FREQ_ADDRWIDTH-1:0] freqaddr
,input [FREQ_DATAWIDTH-1:0] freqdata
);
localparam NSLICE=FREQ_DATAWIDTH/32;
reg [ENV_ADDRWIDTH-1:0] envaddr_cnt=0;
reg busy=0;
always @(posedge elem.clk) begin
	envaddr_cnt<=elem.cmdstb ? elem.envstart : (envaddr_cnt==elem.envstart+elem.envlength) ? envaddr_cnt : envaddr_cnt+1;
	if (elem.cmdstb)
		busy<=1'b1;
	else if (envaddr_cnt==elem.envstart+elem.envlength)
		busy<=1'b0;
end
assign envaddr=envaddr_cnt;
assign freqaddr=elem.freqaddr;
assign elem.valid=busy; // need adjust for delay
ammod #(.NSLICE(NSLICE)) 
qdrvammod(.clk(elem.clk),.reset(~busy),.tcnt(elem.tcnt),.freqcossinp32x16(freqdata),.envxy32x16(envdata),.pini(elem.pini),.multix16x16(elem.multix),.multiy16x16(elem.multiy),.ampx(elem.ampx),.ampy(elem.ampy));

endmodule

interface ifelement#(parameter ENV_ADDRWIDTH=32,parameter ENV_DATAWIDTH=32,parameter TCNTWIDTH=32,parameter FREQ_ADDRWIDTH=32,parameter FREQ_DATAWIDTH=32)(
	input clk
	,input reset
	,input [TCNTWIDTH-1:0] tcnt
	);
	localparam NSLICE=FREQ_DATAWIDTH/32;
	logic cmdstb;
	logic [ENV_ADDRWIDTH-1:0] envstart;
	logic [ENV_ADDRWIDTH-1:0] envlength;
	logic [15:0] ampx;
	logic [15:0] ampy;
	logic [16:0] pini;
	logic [1:0] mode;
	logic valid;
	logic [NSLICE*16-1:0] multix;
	logic [NSLICE*16-1:0] multiy;
	logic [FREQ_ADDRWIDTH-1:0] freqaddr;
	modport proc(output cmdstb,envstart,envlength,ampx,ampy,freqaddr,pini,mode
	);
	modport elem(input clk,reset,cmdstb,envstart,envlength,ampx,ampy,pini,mode,tcnt,freqaddr
	,output multix,multiy,valid
	);
	modport out(input clk,multix,multiy,valid
	);
	modport mix(input clk,multix,multiy,valid,cmdstb
	);
endinterface

module elementout#(parameter ENV_ADDRWIDTH=32,parameter ENV_DATAWIDTH=32,parameter TCNTWIDTH=32,parameter FREQ_ADDRWIDTH=32,parameter FREQ_DATAWIDTH=32)(ifelement.out elem
,output valid
,output [NSLICE*16-1:0] multix
,output [NSLICE*16-1:0] multiy
);
localparam NSLICE=FREQ_DATAWIDTH/32;
assign valid=elem.valid;
assign multix=elem.multix;
assign multiy=elem.multiy;
endmodule

module elementsum4#(parameter ENV_ADDRWIDTH=32,parameter ENV_DATAWIDTH=32,parameter TCNTWIDTH=32,parameter FREQ_ADDRWIDTH=32,parameter FREQ_DATAWIDTH=32)(ifelement.out elem0
,ifelement.out elem1
,ifelement.out elem2
,ifelement.out elem3
,output valid
,output [NSLICE*16-1:0] multix
,output [NSLICE*16-1:0] multiy
);

localparam NSLICE=FREQ_DATAWIDTH/32;
reg [NSLICE*16-1:0] sumx=0;
reg [NSLICE*16-1:0] sumy=0;

generate
for (genvar i=0;i<NSLICE;i++) begin : stepslice
	reg [15:0] sumx0=0;
	reg [15:0] sumx1=0;
	reg [15:0] sumy0=0;
	reg [15:0] sumy1=0;
	always @(posedge elem0.clk) begin
		sumx0<=elem0.multix[i*16+15:i*16+0]+elem1.multix[i*16+15:i*16+0]+elem2.multix[i*16+15:i*16+0];  //  not checking overflow, depends on user
		sumx1<=elem3.multix[i*16+15:i*16+0]+sumx0;
		sumx[i*16+15:i*16]<=sumx1;
		sumy0<=elem0.multiy[i*16+15:i*16+0]+elem1.multiy[i*16+15:i*16+0]+elem2.multiy[i*16+15:i*16+0];  //  not checking overflow, depends on user
		sumy1<=elem3.multiy[i*16+15:i*16+0]+sumy0;
		sumy[i*16+15:i*16]<=sumy1;
	end
end
endgenerate
reg valid0=0;
reg valid1=0;
reg valid2=0;
always @(posedge elem0.clk) begin
	valid0<=|{elem0.valid,elem1.valid,elem2.valid,elem3.valid};
	valid1<=valid0;
	valid2<=valid1;
end
assign multix=sumx;
assign multiy=sumy;
assign valid=valid2;
endmodule


module elementmixacc#(parameter ENV_ADDRWIDTH=32,parameter ENV_DATAWIDTH=32,parameter TCNTWIDTH=32,parameter FREQ_ADDRWIDTH=32,parameter FREQ_DATAWIDTH=32,parameter ACCADDWIDTH=16)(ifelement.mix elem
,input [NSLICE*16-1:0] adcx
,input [NSLICE*16-1:0] adcy
,input [4:0] shift
,output valid
,output [31:0] accx
,output [31:0] accy
);

reg signed [31:0] multixi[0:NSLICE-1][0:NSLICE-1];
reg signed [31:0] multiyi[0:NSLICE-1][0:NSLICE-1];
reg [32+NSLICEWIDTH-1:0] sumxslice[0:NSLICE-1];
reg [32+NSLICEWIDTH-1:0] sumyslice[0:NSLICE-1];
localparam NSLICE=FREQ_DATAWIDTH/32;
localparam NSLICEWIDTH=$clog2(NSLICE);
generate for (genvar i =0; i<NSLICE; i=i+1) begin
	reg signed [15:0] adcxi=0;
	reg signed [15:0] adcyi=0;
	reg signed [15:0] dloxi=0;
	reg signed [15:0] dloyi=0;
	wire signed [31:0] multixi_w;
	wire signed [31:0] multiyi_w;
	always @(posedge elem.clk) begin
		adcxi<=$signed(adcx[i*16+15:i*16]);
		adcyi<=$signed(adcy[i*16+15:i*16]);
		dloxi<=$signed(elem.multix[i*16+15:i*16]);
		dloyi<=$signed(elem.multiy[i*16+15:i*16]);
	end
	cmultiplier #(.XWIDTH(16),.YWIDTH(16))
	mult1(.clk(elem.clk),.xr(adcxi),.xi(adcyi),.yr(dloxi),.yi(dloyi),.zr(multixi_w),.zi(multiyi_w));
	for (genvar j=0;j<=i; j=j+1) begin
		reg [3:0] indexi=0;
		reg [3:0] indexj=0;
		always @(posedge elem.clk) begin
			indexi<=i;
			indexj<=j;
		end
		if (j==0) begin
			always @(posedge elem.clk) begin
				multixi[i][j]<=multixi_w;
				multiyi[i][j]<=multiyi_w;
			end
		end
		else begin
			always @(posedge elem.clk) begin
				multixi[i][j]<=multixi[i][j-1];
				multiyi[i][j]<=multiyi[i][j-1];
			end
		end
	end
	if (i==0) begin
		always @(posedge elem.clk) begin
			sumxslice[i]<=(32+NSLICEWIDTH)'(signed'(multixi[i+1][i])) +(32+NSLICEWIDTH)'(signed'(multixi[i][i])) ;
			sumyslice[i]<=(32+NSLICEWIDTH)'(signed'(multiyi[i+1][i])) +(32+NSLICEWIDTH)'(signed'(multiyi[i][i])) ;
		end
	end
	else if (i<NSLICE-1) begin
		always @(posedge elem.clk) begin
			sumxslice[i]<=sumxslice[i-1]+(32+NSLICEWIDTH)'(signed'(multixi[i+1][i])) ;
			sumyslice[i]<=sumyslice[i-1]+(32+NSLICEWIDTH)'(signed'(multiyi[i+1][i])) ;
		end
	end
	else begin
		always @(posedge elem.clk) begin
			sumxslice[i]<=sumxslice[i-1];
			sumyslice[i]<=sumyslice[i-1];
		end
	end
end
endgenerate
wire [ACCADDWIDTH+32+NSLICEWIDTH-1:0] sumxslicelast= (ACCADDWIDTH+32+NSLICEWIDTH)'(signed'(sumxslice[NSLICE-1]));
wire [ACCADDWIDTH+32+NSLICEWIDTH-1:0] sumyslicelast= (ACCADDWIDTH+32+NSLICEWIDTH)'(signed'(sumyslice[NSLICE-1]));
reg [ACCADDWIDTH+32+NSLICEWIDTH-1:0] accsumx=0;
reg [ACCADDWIDTH+32+NSLICEWIDTH-1:0] accsumy=0;
always @(posedge elem.clk) begin
	accsumx<= elem.cmdstb ? 0 : (accsumx+sumxslicelast);
	accsumy<= elem.cmdstb ? 0 : (accsumy+sumyslicelast);
end
assign accx=accsumx>>>shift;
assign accy=accsumy>>>shift;
assign valid=elem.valid; // should be a delayed version 
endmodule
