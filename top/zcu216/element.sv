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
reg [15:0] busy_sr=0;
reg dummybusy=0;
reg [FREQ_ADDRWIDTH-1:0] freqaddr_r=0;
reg [FREQ_ADDRWIDTH-1:0] freqaddr_r2=0;
reg [FREQ_ADDRWIDTH-1:0] freqaddr_r3=0;
reg [FREQ_ADDRWIDTH-1:0] freqaddr_r4=0;
reg [FREQ_DATAWIDTH-1:0] freqdata_r=0;
reg [FREQ_DATAWIDTH-1:0] freqdata_r2=0;
reg [FREQ_DATAWIDTH-1:0] freqdata_r3=0;
reg [ENV_ADDRWIDTH-1:0] envaddr_r=0;
reg [ENV_ADDRWIDTH-1:0] envaddr_r2=0;
reg [ENV_ADDRWIDTH-1:0] envaddr_r3=0;
reg [ENV_DATAWIDTH-1:0] envdata_r=0;
reg [ENV_DATAWIDTH-1:0] envdata_r2=0;
wire lastenv=envaddr_cnt==elem.envstart+elem.envlength-1;
always @(posedge elem.clk) begin
	if (elem.cmdstb_sr[0]) begin
		envaddr_cnt<=elem.envstart;
	end
//	else if (lastenv) begin
//		envaddr_cnt<=envaddr_cnt;
//	end
	else if (busy) begin
		envaddr_cnt<=envaddr_cnt+1;
	end
//	envaddr_cnt<=elem.cmdstb[0] ? elem.envstart : (envaddr_cnt==elem.envstart+elem.envlength) ? envaddr_cnt : envaddr_cnt+1;
	if (elem.cmdstb_sr[0])
		busy<=1'b1;
	else if (lastenv)
		busy<=1'b0;
	{dummybusy,busy_sr}<={busy_sr,busy};
	freqdata_r<=freqdata;
	freqdata_r2<=freqdata_r;
	freqaddr_r<=elem.freqaddr;
	freqaddr_r2<=freqaddr_r;
	freqaddr_r3<=freqaddr_r2;
	freqaddr_r4<=freqaddr_r3;
	envdata_r<=envdata;
	envdata_r2<= elem.cw ? {16{32'h7fff0000}} :envdata_r ;
	envaddr_r<=envaddr_cnt;
	envaddr_r3<=envaddr_r2;
end
assign freqaddr=freqaddr_r;

reg_delay1 #(.DW(ENV_ADDRWIDTH),.LEN(31)) envaddrdelay(.clk(elem.clk),.gate(1'b1),.din(envaddr_cnt),.dout(envaddr),.reset(1'b0));

ammod #(.NSLICE(NSLICE)) 
ammod(.clk(elem.clk),.gatein(busy_sr[4]),.tcnt(elem.tcnt),.freqcossinp32x16(freqdata_r),.envxy32x16(envdata_r2),.pini(elem.pini),.multix16x16(elem.multix),.multiy16x16(elem.multiy),.ampx(elem.ampx),.gateout(elem.valid));

endmodule

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
		sumx0<=elem0.multix[i*16+15:i*16+0]+elem1.multix[i*16+15:i*16+0];
		sumx1<=elem3.multix[i*16+15:i*16+0]+elem2.multix[i*16+15:i*16+0];  //  not checking overflow, depends on usersumx0;
		sumx[i*16+15:i*16]<=sumx0+sumx1;
		sumy0<=elem0.multiy[i*16+15:i*16+0]+elem1.multiy[i*16+15:i*16+0];
		sumy1<=elem3.multiy[i*16+15:i*16+0]+elem2.multiy[i*16+15:i*16+0];  //  not checking overflow, depends on user
		sumy[i*16+15:i*16]<=sumy1+sumy0;;
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
,output gateout
,output stbout 
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
	reg signed [31:0] multixi_r=0;
	reg signed [31:0] multiyi_r=0;
	always @(posedge elem.clk) begin
		adcxi<=$signed(adcx[i*16+15:i*16]);
		adcyi<=$signed(adcy[i*16+15:i*16]);
		dloxi<=$signed(elem.multix[i*16+15:i*16]);
		dloyi<=$signed(elem.multiy[i*16+15:i*16]);
		multixi_r<=multixi_w;
		multiyi_r<=multiyi_w;
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
				multixi[i][j]<=multixi_r;
				multiyi[i][j]<=multiyi_r;
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
reg [15:0] gatesr=0;
reg gatesrdummy=0;
always @(posedge elem.clk) begin
	{gatesrdummy,gatesr}<={gatesr,elem.valid};
end
wire [ACCADDWIDTH+32+NSLICEWIDTH-1:0] sumxslicelast= (ACCADDWIDTH+32+NSLICEWIDTH)'(signed'(sumxslice[NSLICE-1]));
wire [ACCADDWIDTH+32+NSLICEWIDTH-1:0] sumyslicelast= (ACCADDWIDTH+32+NSLICEWIDTH)'(signed'(sumyslice[NSLICE-1]));
reg [ACCADDWIDTH+32+NSLICEWIDTH-1:0] accsumx=0;
reg [ACCADDWIDTH+32+NSLICEWIDTH-1:0] accsumy=0;
reg newacc=0;
always @(posedge elem.clk) begin
	newacc<=gatesr[11:10]==2'b01;
	accsumx<= newacc ? 0 : (accsumx+sumxslicelast);
	accsumy<= newacc ? 0 : (accsumy+sumyslicelast);
end

assign accx=accsumx>>>shift;
assign accy=accsumy>>>shift;
//assign valid=elem.valid; // should be a delayed version 
assign gateout=gatesr[14];
assign stbout=gatesr[15:14]==2'b10;
endmodule


interface ifelement#(parameter ENV_ADDRWIDTH=32,parameter ENV_DATAWIDTH=32,parameter TCNTWIDTH=32,parameter FREQ_ADDRWIDTH=32,parameter FREQ_DATAWIDTH=32)(
	input clk
	);
	logic reset;
	localparam NSLICE=FREQ_DATAWIDTH/32;
	logic cmdstb;
	reg [15:0] cmdstb_sr=0;
	reg [15:0] dummy_cmdstb_sr=0;
	reg [15:0] reset_sr=0;
	reg [12-1:0] envstart=0;  // force 12 bit, for the longer element
	reg [12-1:0] envlength=0;
	reg [12-1:0] envlength_d=0;
	reg [15:0] ampx=0;
	reg [15:0] ampy=0;
	reg [16:0] pini=0;
	reg [1:0] mode=0;
	logic valid;
	logic [NSLICE*16-1:0] multix;
	logic [NSLICE*16-1:0] multiy;
	logic [15:0] multix_check [0:NSLICE-1];
	logic [15:0] multiy_check [0:NSLICE-1];
	reg [TCNTWIDTH-1:0] tcnt=0;
	reg [127:0] command=0;
	reg [127:0] command_d=0;
	reg [127:0] command_d2=0;
	reg cw0=0;
	
	wire cw=cw_sr[33];
	reg [42:0] cw_sr=0;
	reg dummycw=0;
	reg [26:0] trigt=0;
	reg [FREQ_ADDRWIDTH-1:0] freqaddr;
	generate
	for (genvar i=0;i<NSLICE;i=i+1) begin
		assign multix_check[i]=multix[i*16+15:i*16];
		assign multiy_check[i]=multiy[i*16+15:i*16];
	end
	endgenerate
	always @(posedge clk) begin
		reset_sr<={reset_sr[14:0],reset};
		tcnt<= reset_sr[5] ? 0 : tcnt+1;
		{dummy_cmdstb_sr,cmdstb_sr}<={cmdstb_sr,cmdstb};
	end
/*		cw0<=((|command_d2) && (~|envlength_d));
		cw_sr<={cw_sr[41:0],cw0};
		if (cmdstb) begin
			{trigt,envstart,envlength,ampx,freqaddr,pini,mode}<=command;
			command_d<=command;
			command_d2<=command_d;
			envlength_d<=envlength;
		end
	end
	modport proc(output cmdstb,command,reset
	,input tcnt,clk
	);
	*/
	modport proc(output envstart,envlength,ampx,ampy,freqaddr,pini,mode,cmdstb,reset
,input clk
	);
	modport elem(input clk,reset,cmdstb,cmdstb_sr,cw,envstart,envlength,ampx,pini,mode,tcnt,freqaddr
	,output multix,multiy,valid
	);
	modport out(input clk,multix,multiy,valid
	);
	modport mix(input clk,multix,multiy,valid,cmdstb
	);
endinterface