module ammod(input clk
,input reset
,input [17:0] tcnt
,input [511:0] freqcossinp32x16
,input [511:0] envxy32x16
,input [16:0] pini
,input [15:0] ampx
,input [15:0] ampy
,output [16*16-1:0] multix16x16
,output [16*16-1:0] multiy16x16
);

wire [15:0] cosp[0:15];
wire [15:0] sinp[0:15];
wire [26:0] freq;
wire [31:0] freq32;
wire [15:0] envx[0:15];
wire [15:0] envy[0:15];
wire [15:0] multix[0:15];
wire [15:0] multiy[0:15];


assign {cosp[15],sinp[15],cosp[14],sinp[14],cosp[13],sinp[13],cosp[12],sinp[12],cosp[11],sinp[11],cosp[10],sinp[10],cosp[9],sinp[9],cosp[8],sinp[8],cosp[7],sinp[7],cosp[6],sinp[6],cosp[5],sinp[5],cosp[4],sinp[4],cosp[3],sinp[3],cosp[2],sinp[2],cosp[1],sinp[1],freq32}=freqcossinp32x16;
assign {cosp[0],sinp[0]}=32'h7fff0000;
assign freq=freq32[31:5];
assign {envx[15],envy[15],envx[14],envy[14],envx[13],envy[13],envx[12],envy[12],envx[11],envy[11],envx[10],envy[10],envx[9],envy[9],envx[8],envy[8],envx[7],envy[7],envx[6],envy[6],envx[5],envy[5],envx[4],envy[4],envx[3],envy[3],envx[2],envy[2],envx[1],envy[1],envx[0],envy[0]}=envxy32x16;
assign multix16x16={multix[15],multix[14],multix[13],multix[12],multix[11],multix[10],multix[9],multix[8],multix[7],multix[6],multix[5],multix[4],multix[3],multix[2],multix[1],multix[0]};
assign multiy16x16={multiy[15],multiy[14],multiy[13],multiy[12],multiy[11],multiy[10],multiy[9],multiy[8],multiy[7],multiy[6],multiy[5],multiy[4],multiy[3],multiy[2],multiy[1],multiy[0]};
//I0+jQ0=amp*exp(j*2*pi*freq*tcnt+pini)*(cosp0+j*sinp0)*(envx+j*envy)
//I1+jQ1=amp*exp(j*2*pi*freq*tcnt+pini)*(cosp1+j*sinp1)*(envx+j*envy)
//......
//If+jQf=amp*exp(j*2*pi*freq*tcnt+pini)*(cospf+j*sinpf)*(envx+j*envy)

wire [26:0] phasetime;
wire gphtime;
phtime phtime(.clk(clk),.freq(freq),.tcnt(tcnt),.reset(reset),.phasetime(phasetime),.valid(gphtime));
reg [16:0] phaseinit=0;
reg gphaseinit=0;
wire [15:0] cos_w;
wire [15:0] sin_w;
reg [15:0] cos=0;
reg [15:0] sin=0;
always @(posedge clk) begin
	phaseinit<=phasetime[26:10]+pini;
	gphaseinit<=gphtime;
	cos<=cos_w;
	sin<=sin_w;
end

wire gcordic;
cordicg1 #(.WIDTH(16),.NSTAGE(16),.NORMALIZE(1),.BUFIN(1),.GW(1),.NRIDER(0),.DRIVER(0))
cordicg1(.clk(clk), .opin(1'b0), .xin(ampx), .yin(ampy), .phasein(phaseinit), .xout(cos_w), .yout(sin_w), .phaseout(),.error(),.gin(gphaseinit),.gout(gcordic));


wire gmulti;
reg_delay1 #(.DW(1), .LEN(7))
multidelay(.clk(clk),.gate(1'b1),.din(gcordic),.dout(gmulti),.reset(reset));
generate
for (genvar i=0;i<16;i=i+1) begin
	wire [32:0] zr1,zi1;
	wire [32:0] zr,zi;
	cmultiplier #(.XWIDTH(16),.YWIDTH(16))
	mult1(.clk(clk),.xr(cos),.xi(sin),.yr(cosp[i]),.yi(sinp[i]),.zr(zr1),.zi(zi1));
	cmultiplier #(.XWIDTH(16),.YWIDTH(16))
	mult2(.clk(clk),.xr(zr1[30:15]),.xi(zi1[30:15]),.yr(envx[i]),.yi(envy[i]),.zr(zr),.zi(zi));
	assign multix[i]=zr[30:15];
	assign multiy[i]=zi[30:15];
	//assign multix[i]=zr1[30:15];
	//assign multiy[i]=zi1[30:15];
end
endgenerate

endmodule
