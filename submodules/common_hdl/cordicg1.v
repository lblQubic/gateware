`timescale 1ns / 1ns
module cordicg1(clk, opin, xin, yin, phasein, xout, yout, phaseout,error,gin,gout);
parameter WIDTH=19;
parameter NSTAGE=19;
parameter NORMALIZE=0;
localparam ZWIDTH=NSTAGE+1;
parameter BUFIN=0;
parameter GW=1;
parameter NRIDER=0;// one driver, n rider, the LSB side are the drive, the MSB side are the rider
parameter DRIVER=0;
input clk;   // timespec 8.33 ns
input [0:0] opin;  //  1 forces y to zero (rect to polar), 0 forces theta to zero (polar to rect)
input signed [(NRIDER+1)*WIDTH-1:0] xin;
input signed [(NRIDER+1)*WIDTH-1:0] yin;
input [(NRIDER+1)*ZWIDTH-1:0] phasein;
output signed [(NRIDER+1)*WIDTH-1:0] xout;
output signed [(NRIDER+1)*WIDTH-1:0] yout;
output [(NRIDER+1)*ZWIDTH-1:0] phaseout;
output error;
input [GW-1:0] gin;
output [GW-1:0] gout;
localparam PHASE={32'd0,32'd0,32'd1,32'd1,32'd3,32'd5,32'd10,32'd20,32'd41,32'd81,32'd163,32'd326,32'd652,32'd1304,32'd2608,32'd5215,32'd10430,32'd20861,32'd41722,32'd83443,32'd166886,32'd333772,32'd667544,32'd1335087,32'd2670163,32'd5340245,32'd10679838,32'd21354465,32'd42667331,32'd85004756,32'd167458907,32'd316933406,32'd536870912
};// print ','.join(["%d'd%d"%(32,int(i)) for i in floor(arctan(1.0/(2**arange(32,-1,-1)))*2/2/pi*2**(32-1)+0.5)]). I guess this is the highest zwidth we should use, if not, we can generate something even bigger, and adjust ain location accordingly

reg signed [(NRIDER+1)*WIDTH-1:0] xout_r=0;
reg signed [(NRIDER+1)*WIDTH-1:0] yout_r=0;
reg [(NRIDER+1)*ZWIDTH-1:0] phaseout_r=0;
reg [NRIDER:0] errorr=0;
wire signed [(NRIDER+1)*WIDTH-1:0] xin_1;
wire signed [(NRIDER+1)*WIDTH-1:0] yin_1;
wire [(NRIDER+1)*ZWIDTH-1:0] phasein_1;
wire [0:0] opin_1;
assign error=|errorr;
localparam WIDTHP1=WIDTH+1;
generate
	if (BUFIN==0) begin
		assign xin_1=xin;
		assign yin_1=yin;
		assign phasein_1=phasein;
		assign opin_1=opin;
	end
	else begin
		reg signed [(NRIDER+1)*WIDTH-1:0] xin_d=0;
		reg signed [(NRIDER+1)*WIDTH-1:0] yin_d=0;
		reg [(NRIDER+1)*ZWIDTH-1:0] phasein_d=0;
		reg [0:0] opin_d=0;
		always @(posedge clk) begin
			xin_d<=xin;
			yin_d<=yin;
			phasein_d<=phasein;
			opin_d<=opin;
		end
		assign xin_1=xin_d;
		assign yin_1=yin_d;
		assign phasein_1=phasein_d;
		assign opin_1=opin_d;
	end
endgenerate
wire shiftpi=(opin_1&xin_1[WIDTH-1])|((~opin_1)&(phasein_1[ZWIDTH-1]^phasein_1[ZWIDTH-2]));
wire [NSTAGE:0] plusall [NRIDER+1:0];
genvar irider;
genvar istage;
generate for (irider=0; irider<NRIDER+1; irider=irider+1) begin: rider
	reg [NSTAGE:0] op=0;
	reg [NSTAGE:0] pluscheck=0;
	reg [NSTAGE:0] pluscheck0=0;
	reg [(NRIDER+1)*WIDTHP1*(NSTAGE+1)-1:0] x=0;
	reg [(NRIDER+1)*WIDTHP1*(NSTAGE+1)-1:0] y=0;
	reg [(NRIDER+1)*ZWIDTH*(NSTAGE+1)-1:0] z=0;
	wire [WIDTH-1:0] xinr=xin_1[(irider+1)*WIDTH-1:irider*WIDTH];
	wire [WIDTH-1:0] yinr=yin_1[(irider+1)*WIDTH-1:irider*WIDTH];
	wire [ZWIDTH-1:0] phaseinr=phasein_1[(irider+1)*ZWIDTH-1:irider*ZWIDTH];
	always @(posedge clk) begin
		x[WIDTHP1-1:0] <= shiftpi ? {~xinr[WIDTH-1],~xinr}+1'b1 : {xinr[WIDTH-1],xinr};
		y[WIDTHP1-1:0] <= shiftpi ? {~yinr[WIDTH-1],~yinr}+1'b1 : {yinr[WIDTH-1],yinr};
		z[ZWIDTH-1:0] <= shiftpi ? {{2{~phaseinr[ZWIDTH-1]}},phaseinr[ZWIDTH-2:0]} : {phaseinr[ZWIDTH-1],phaseinr[ZWIDTH-1:0]};
		op[0]<=opin_1[0];
	end
	for (istage=0; istage<NSTAGE; istage=istage+1) begin: stage
		wire oping =op[istage];
		wire signed[WIDTHP1-1:0] xinp =(x[WIDTHP1*(istage+1)-1:WIDTHP1*istage]);
		wire signed[WIDTHP1-1:0] yinp =(y[WIDTHP1*(istage+1)-1:WIDTHP1*istage]);
		wire [ZWIDTH-1:0] zin =z[ZWIDTH*istage+ZWIDTH-1:ZWIDTH*istage];
		wire [ZWIDTH-1:0] ain=PHASE[32*(istage+1)-1:32*(istage+1)-ZWIDTH]+(ZWIDTH<32 ? PHASE[32*(istage+1)-ZWIDTH-1]: 0);
		assign plusall[irider][istage]=oping ? ~yinp[WIDTHP1-1] : zin[ZWIDTH-1];
		wire plus=oping ? ~yinp[WIDTHP1-1] : zin[ZWIDTH-1];
		wire x_1;
		wire y_1;
		if (istage>=1) begin
			assign x_1 = (&xinp[WIDTHP1-1:istage-1]) | (~|(xinp[WIDTHP1-1:istage-1]));
			assign y_1 = (&yinp[WIDTHP1-1:istage-1]) | (~|(yinp[WIDTHP1-1:istage-1]));
		end
		else begin
			assign x_1=0;
			assign y_1=0;
		end
		wire [WIDTHP1-1:0] xshift =  x_1 & (istage>0) ? 0 : xinp>>>istage;  // not accumating -1 because -1>>>1 = -1
		wire [WIDTHP1-1:0] yshift =  y_1 & (istage>0) ? 0 : yinp>>>istage;
		wire [ZWIDTH-1:0]  zshift = ain;
		always @(posedge clk) begin
			x[WIDTHP1*(istage+2)-1:WIDTHP1*(istage+1)]<= plusall[DRIVER][istage] ? (xinp + yshift) : (xinp - yshift) ;
			y[WIDTHP1*(istage+2)-1:WIDTHP1*(istage+1)]<= plusall[DRIVER][istage] ? (yinp - xshift) : (yinp + xshift);
			z[ZWIDTH*(istage+2)-1:ZWIDTH*(istage+1)]<= plusall[DRIVER][istage] ? zin + zshift : zin - zshift;
			op[istage+1]<= oping;
			pluscheck[istage+1]<=plusall[irider][istage];
			pluscheck0[istage+1]<=plusall[0][istage];
		end
	end

	wire signed [WIDTHP1-1:0] xg=x[WIDTHP1*NSTAGE-1:WIDTHP1*NSTAGE-WIDTHP1];
	wire signed [WIDTHP1-1:0] yg=y[WIDTHP1*NSTAGE-1:WIDTHP1*NSTAGE-WIDTHP1];
	wire         [ZWIDTH-1:0] zg=z[ZWIDTH *NSTAGE-1:ZWIDTH *NSTAGE-ZWIDTH];

	if (NORMALIZE==1) begin
		reg xdummy=0,ydummy=0,zdummy=0;
		// cordic gain= 1/0.6072529350088812561694
		// (1./2**1)+(1./2**3)-(1./2**6)-(1./2**9)-(1./2**12)+(1./2**14)=0.607238
		// (1./2**1)+(1./2**3)-(1./2**6)-(1./2**9)-(1./2**12)+(1./2**14)+(1./2**16)-(1./2**19)+(1./2**20)-(1./2**23)-(1./2**25)=0.6072529256
		always @(posedge clk) begin
			{xdummy,xout_r[(irider+1)*WIDTH-1:irider*WIDTH]}<=(xg>>>1)+(xg>>>3)-(xg>>>6)-(xg>>>9)-(xg>>>12)+(xg>>>14);//+(xg>>>16)-(xg>>>19)+(xg>>>20)-(xg>>>23)-(xg>>>25);
			{ydummy,yout_r[(irider+1)*WIDTH-1:irider*WIDTH]}<=(yg>>>1)+(yg>>>3)-(yg>>>6)-(yg>>>9)-(yg>>>12)+(yg>>>14);//+(yg>>>16)-(yg>>>19)+(yg>>>20)-(yg>>>23)-(yg>>>25);
			phaseout_r[(irider+1)*ZWIDTH-1:irider*ZWIDTH] <= zg;
			errorr[irider]<=(xdummy^xout_r[(irider+1)*WIDTH-1])|(ydummy^yout[(irider+1)*WIDTH-1]);
	end
		// 0x9b74eda8/(2.0**32)=0.607252934947
		//wire signed [WIDTHP1+32-1:0] xmulti=xg*32'h9b74eda8;
		//wire signed [WIDTHP1+32-1:0] ymulti=yg*32'h9b74eda8;
		//assign {xdummy,xout}=xmulti[WIDTHP1+32-2:32];
		//assign {ydummy,yout}=ymulti[WIDTHP1+32-2:32];
		// (int(0.6072529350088812561694*2**17))/2.0**17=0.6072463989257812
		wire signed [17:0] gain=18'h136e9;
		wire signed [WIDTHP1+18-1:0] xmulti=xg*gain;
		wire signed [WIDTHP1+18-1:0] ymulti=yg*gain;
		//assign {xdummy,xout[(irider+1)*WIDTH-1:irider*WIDTH]}=xmulti[WIDTHP1+18-1:17];
		//assign {ydummy,yout[(irider+1)*WIDTH-1:irider*WIDTH]}=ymulti[WIDTHP1+18-1:17];

	end
	else begin
		always @(posedge clk) begin
		xout_r[(irider+1)*WIDTH-1:irider*WIDTH]<=xg[WIDTH-1:0];
		yout_r[(irider+1)*WIDTH-1:irider*WIDTH]<=yg[WIDTH-1:0];
		phaseout_r[(irider+1)*ZWIDTH-1:irider*ZWIDTH] <= zg;
		errorr[irider]<=1'b0;
	end
	end
end
endgenerate
assign xout=xout_r;
assign yout=yout_r;
assign phaseout=phaseout_r;
wire signed [(NRIDER+1)*WIDTH-1:0] xout1=xout;
wire signed [(NRIDER+1)*WIDTH-1:0] yout1=yout;
wire [(NRIDER+1)*ZWIDTH-1:0] phaseout1=phaseout;

localparam BUFINDELAY=(BUFIN==0)? 0 : 1 ;
reg_delay1 #(.dw(GW), .len(NSTAGE+1+BUFINDELAY)) reg_delay(.clk(clk), .gate(1'b1), .din(gin),   .dout(gout),.reset(1'b0));
endmodule
