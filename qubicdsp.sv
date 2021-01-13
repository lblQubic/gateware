module qubicdsp #(parameter DEBUG="false"
)(dsp.dsp dsp
,regmap.dsp lbreg
);
reg [31:0] test1=0;
always @(posedge dsp.clk) begin
	test1<=lbreg.test2+lbreg.err+lbreg.test+10;
end
assign lbreg.test1=test1;
wire signed [15:0] x01_0,x01_1,x01_2,x01_3,x01_4,x01_5,x01_6,x01_7;
wire signed [15:0] x23_0,x23_1,x23_2,x23_3,x23_4,x23_5,x23_6,x23_7;
wire signed [15:0] x45_0,x45_1,x45_2,x45_3,x45_4,x45_5,x45_6,x45_7;
wire signed [15:0] x67_0,x67_1,x67_2,x67_3,x67_4,x67_5,x67_6,x67_7;
wire signed [15:0] y01_0,y01_1,y01_2,y01_3,y01_4,y01_5,y01_6,y01_7;
wire signed [15:0] y23_0,y23_1,y23_2,y23_3,y23_4,y23_5,y23_6,y23_7;
wire signed [15:0] y45_0,y45_1,y45_2,y45_3,y45_4,y45_5,y45_6,y45_7;
wire signed [15:0] y67_0,y67_1,y67_2,y67_3,y67_4,y67_5,y67_6,y67_7;
wire signed [15:0] x01,y01,x23,y23,x45,y45,x67,y67;
reg signed [15:0] x01add1=0,x01add2=0,x01add3=0;
reg signed [15:0] x23add1=0,x23add2=0,x23add3=0;
reg signed [15:0] x45add1=0,x45add2=0,x45add3=0;
reg signed [15:0] x67add1=0,x67add2=0,x67add3=0;
reg signed [15:0] y01add1=0,y01add2=0,y01add3=0;
reg signed [15:0] y23add1=0,y23add2=0,y23add3=0;
reg signed [15:0] y45add1=0,y45add2=0,y45add3=0;
reg signed [15:0] y67add1=0,y67add2=0,y67add3=0;
always @(posedge dsp.clk) begin
	x01add1<=x01_0+x01_1+x01_2+x01_3;	x01add2<=x01_4+x01_5+x01_6+x01_7; x01add3=x01add1+x01add2;
	x23add1<=x23_0+x23_1+x23_2+x23_3;	x23add2<=x23_4+x23_5+x23_6+x23_7; x23add3=x23add1+x23add2;
	x45add1<=x45_0+x45_1+x45_2+x45_3;	x45add2<=x45_4+x45_5+x45_6+x45_7; x45add3=x45add1+x45add2;
	x67add1<=x67_0+x67_1+x67_2+x67_3;	x67add2<=x67_4+x67_5+x67_6+x67_7; x67add3=x67add1+x67add2;
	y01add1<=y01_0+y01_1+y01_2+y01_3;	y01add2<=y01_4+y01_5+y01_6+y01_7; y01add3=y01add1+y01add2;
	y23add1<=y23_0+y23_1+y23_2+y23_3;	y23add2<=y23_4+y23_5+y23_6+y23_7; y23add3=y23add1+y23add2;
	y45add1<=y45_0+y45_1+y45_2+y45_3;	y45add2<=y45_4+y45_5+y45_6+y45_7; y45add3=y45add1+y45add2;
	y67add1<=y67_0+y67_1+y67_2+y67_3;	y67add2<=y67_4+y67_5+y67_6+y67_7; y67add3=y67add1+y67add2;
end
assign x01=x01add3;
assign x23=x23add3;
assign x45=x45add3;
assign x67=x67add3;
assign y01=y01add3;
assign y23=y23add3;
assign y45=y45add3;
assign y67=y67add3;
assign dsp.dac0={x01,x01,x01,x01};
assign dsp.dac1={y01,y01,y01,y01};
assign dsp.dac2={x23,x23,x23,x23};
assign dsp.dac3={y23,y23,y23,y23};
assign dsp.dac4={x45,x45,x45,x45};
assign dsp.dac5={y45,y45,y45,y45};
assign dsp.dac6={x67,x67,x67,x67};
assign dsp.dac7={y67,y67,y67,y67};

wire reset01=|{lbreg.stb_dac01_0freq,lbreg.stb_dac01_1freq,lbreg.stb_dac01_2freq,lbreg.stb_dac01_3freq,lbreg.stb_dac01_4freq,lbreg.stb_dac01_5freq,lbreg.stb_dac01_6freq,lbreg.stb_dac01_7freq};
wire reset23=|{lbreg.stb_dac23_0freq,lbreg.stb_dac23_1freq,lbreg.stb_dac23_2freq,lbreg.stb_dac23_3freq,lbreg.stb_dac23_4freq,lbreg.stb_dac23_5freq,lbreg.stb_dac23_6freq,lbreg.stb_dac23_7freq};
wire reset45=|{lbreg.stb_dac45_0freq,lbreg.stb_dac45_1freq,lbreg.stb_dac45_2freq,lbreg.stb_dac45_3freq,lbreg.stb_dac45_4freq,lbreg.stb_dac45_5freq,lbreg.stb_dac45_6freq,lbreg.stb_dac45_7freq};
wire reset67=|{lbreg.stb_dac67_0freq,lbreg.stb_dac67_1freq,lbreg.stb_dac67_2freq,lbreg.stb_dac67_3freq,lbreg.stb_dac67_4freq,lbreg.stb_dac67_5freq,lbreg.stb_dac67_6freq,lbreg.stb_dac67_7freq};

dlo dlo01_0(.reset(reset01),.amp(lbreg.dac01_0amp),.clk(dsp.clk),.freq(lbreg.dac01_0freq),.xout(x01_0),.yout(y01_0));
/*dlo dlo01_1(.reset(reset01),.amp(lbreg.dac01_1amp),.clk(dsp.clk),.freq(lbreg.dac01_1freq),.xout(x01_1),.yout(y01_1));
dlo dlo01_2(.reset(reset01),.amp(lbreg.dac01_2amp),.clk(dsp.clk),.freq(lbreg.dac01_2freq),.xout(x01_2),.yout(y01_2));
dlo dlo01_3(.reset(reset01),.amp(lbreg.dac01_3amp),.clk(dsp.clk),.freq(lbreg.dac01_3freq),.xout(x01_3),.yout(y01_3));
dlo dlo01_4(.reset(reset01),.amp(lbreg.dac01_4amp),.clk(dsp.clk),.freq(lbreg.dac01_4freq),.xout(x01_4),.yout(y01_4));
dlo dlo01_5(.reset(reset01),.amp(lbreg.dac01_5amp),.clk(dsp.clk),.freq(lbreg.dac01_5freq),.xout(x01_5),.yout(y01_5));
dlo dlo01_6(.reset(reset01),.amp(lbreg.dac01_6amp),.clk(dsp.clk),.freq(lbreg.dac01_6freq),.xout(x01_6),.yout(y01_6));
dlo dlo01_7(.reset(reset01),.amp(lbreg.dac01_7amp),.clk(dsp.clk),.freq(lbreg.dac01_7freq),.xout(x01_7),.yout(y01_7));
*/
dlo dlo23_0(.reset(reset23),.amp(lbreg.dac23_0amp),.clk(dsp.clk),.freq(lbreg.dac23_0freq),.xout(x23_0),.yout(y23_0));
/*dlo dlo23_1(.reset(reset23),.amp(lbreg.dac23_1amp),.clk(dsp.clk),.freq(lbreg.dac23_1freq),.xout(x23_1),.yout(y23_1));
dlo dlo23_2(.reset(reset23),.amp(lbreg.dac23_2amp),.clk(dsp.clk),.freq(lbreg.dac23_2freq),.xout(x23_2),.yout(y23_2));
dlo dlo23_3(.reset(reset23),.amp(lbreg.dac23_3amp),.clk(dsp.clk),.freq(lbreg.dac23_3freq),.xout(x23_3),.yout(y23_3));
dlo dlo23_4(.reset(reset23),.amp(lbreg.dac23_4amp),.clk(dsp.clk),.freq(lbreg.dac23_4freq),.xout(x23_4),.yout(y23_4));
dlo dlo23_5(.reset(reset23),.amp(lbreg.dac23_5amp),.clk(dsp.clk),.freq(lbreg.dac23_5freq),.xout(x23_5),.yout(y23_5));
dlo dlo23_6(.reset(reset23),.amp(lbreg.dac23_6amp),.clk(dsp.clk),.freq(lbreg.dac23_6freq),.xout(x23_6),.yout(y23_6));
dlo dlo23_7(.reset(reset23),.amp(lbreg.dac23_7amp),.clk(dsp.clk),.freq(lbreg.dac23_7freq),.xout(x23_7),.yout(y23_7));
*/
dlo dlo45_0(.reset(reset45),.amp(lbreg.dac45_0amp),.clk(dsp.clk),.freq(lbreg.dac45_0freq),.xout(x45_0),.yout(y45_0));
/*
dlo dlo45_1(.reset(reset45),.amp(lbreg.dac45_1amp),.clk(dsp.clk),.freq(lbreg.dac45_1freq),.xout(x45_1),.yout(y45_1));
dlo dlo45_2(.reset(reset45),.amp(lbreg.dac45_2amp),.clk(dsp.clk),.freq(lbreg.dac45_2freq),.xout(x45_2),.yout(y45_2));
dlo dlo45_3(.reset(reset45),.amp(lbreg.dac45_3amp),.clk(dsp.clk),.freq(lbreg.dac45_3freq),.xout(x45_3),.yout(y45_3));
dlo dlo45_4(.reset(reset45),.amp(lbreg.dac45_4amp),.clk(dsp.clk),.freq(lbreg.dac45_4freq),.xout(x45_4),.yout(y45_4));
dlo dlo45_5(.reset(reset45),.amp(lbreg.dac45_5amp),.clk(dsp.clk),.freq(lbreg.dac45_5freq),.xout(x45_5),.yout(y45_5));
dlo dlo45_6(.reset(reset45),.amp(lbreg.dac45_6amp),.clk(dsp.clk),.freq(lbreg.dac45_6freq),.xout(x45_6),.yout(y45_6));
dlo dlo45_7(.reset(reset45),.amp(lbreg.dac45_7amp),.clk(dsp.clk),.freq(lbreg.dac45_7freq),.xout(x45_7),.yout(y45_7));
*/
dlo dlo67_0(.reset(reset67),.amp(lbreg.dac67_0amp),.clk(dsp.clk),.freq(lbreg.dac67_0freq),.xout(x67_0),.yout(y67_0));
/*
dlo dlo67_1(.reset(reset67),.amp(lbreg.dac67_1amp),.clk(dsp.clk),.freq(lbreg.dac67_1freq),.xout(x67_1),.yout(y67_1));
dlo dlo67_2(.reset(reset67),.amp(lbreg.dac67_2amp),.clk(dsp.clk),.freq(lbreg.dac67_2freq),.xout(x67_2),.yout(y67_2));
dlo dlo67_3(.reset(reset67),.amp(lbreg.dac67_3amp),.clk(dsp.clk),.freq(lbreg.dac67_3freq),.xout(x67_3),.yout(y67_3));
dlo dlo67_4(.reset(reset67),.amp(lbreg.dac67_4amp),.clk(dsp.clk),.freq(lbreg.dac67_4freq),.xout(x67_4),.yout(y67_4));
dlo dlo67_5(.reset(reset67),.amp(lbreg.dac67_5amp),.clk(dsp.clk),.freq(lbreg.dac67_5freq),.xout(x67_5),.yout(y67_5));
dlo dlo67_6(.reset(reset67),.amp(lbreg.dac67_6amp),.clk(dsp.clk),.freq(lbreg.dac67_6freq),.xout(x67_6),.yout(y67_6));
dlo dlo67_7(.reset(reset67),.amp(lbreg.dac67_7amp),.clk(dsp.clk),.freq(lbreg.dac67_7freq),.xout(x67_7),.yout(y67_7));
*/

endmodule

interface dsp#(parameter DEBUG="false")();
wire clk;
wire [63:0] adc0;
wire [63:0] adc1;
wire [63:0] adc2;
wire [63:0] adc3;
wire [63:0] adc4;
wire [63:0] adc5;
wire [63:0] adc6;
wire [63:0] adc7;
wire [63:0] dac0;
wire [63:0] dac1;
wire [63:0] dac2;
wire [63:0] dac3;
wire [63:0] dac4;
wire [63:0] dac5;
wire [63:0] dac6;
wire [63:0] dac7;

modport dsp(input clk,adc0,adc1,adc2,adc3,adc4,adc5,adc6,adc7
,output dac0,dac1,dac2,dac3,dac4,dac5,dac6,dac7
);
modport cfg(output clk,adc0,adc1,adc2,adc3,adc4,adc5,adc6,adc7
,input dac0,dac1,dac2,dac3,dac4,dac5,dac6,dac7
);
endinterface
