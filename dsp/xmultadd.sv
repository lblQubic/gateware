module xmultadd #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(ifxma.xma xmaif)
;
localparam NRATIO=16;
(* ram_style = "registers" *) 
reg [31:0] coef [0:NQDRV-1][0:NQDRV-1];
reg [DAC_AXIS_DATAWIDTH-1:0] daccplxx[0:NQDRV-1];
reg [DAC_AXIS_DATAWIDTH-1:0] daccplxy[0:NQDRV-1];
always @(posedge xmaif.clk) begin
	coef<=xmaif.coef;
	daccplxx<=xmaif.daccplxx;
	daccplxy<=xmaif.daccplxy;
end
generate
for (genvar r=0;r<NRATIO;r=r+1) begin: ratio

	(* ram_style = "registers" *) 
	reg signed [15:0] zr[0:NQDRV-1][0:NQDRV-1];
	(* ram_style = "registers" *) 
	reg signed [15:0] zi[0:NQDRV-1][0:NQDRV-1];
	for (genvar i=0;i<NQDRV;i=i+1) begin: multirow
//		for (genvar j=0;j<NQDRV;j=j+1) begin: multicol
		//for (genvar j=(i-1)%NQDRV;j<(i+1)%NQDRV;j=j+1) begin: multicol
		for (genvar jj=i;jj<(i+NMULTI);jj=jj+1) begin: multicol
			wire [4:0] j=(jj>=NMULTI/2)?(jj-NMULTI/2)%NQDRV:(NPROC-NMULTI/2+jj)%NQDRV;
			wire [31:0] coefij=coef[i][j];
			//integer j=(jj-2)%NQDRV;
			wire [15:0] iii=i;
			wire [15:0] jjj=j;
			reg signed [15:0] yr=0;
			reg signed [15:0] yi=0;
			reg signed [15:0] xr=0;
			reg signed [15:0] xi=0;
			reg signed [15:0] yr_r1=0;
			reg signed [15:0] yi_r1=0;
			reg signed [15:0] xr_r1=0;
			reg signed [15:0] xi_r1=0;
			reg signed [15:0] zr_r1=0;
			reg signed [15:0] zi_r1=0;
			reg signed [15:0] zr_r2=0;
			reg signed [15:0] zi_r2=0;
			reg signed [15:0] zr_r3=0;
			reg signed [15:0] zi_r3=0;
			reg signed [15:0] zr_r4=0;
			reg signed [15:0] zi_r4=0;
			reg signed [15:0] zr_r5=0;
			reg signed [15:0] zi_r5=0;
			reg signed [15:0] zr_r6=0;
			reg signed [15:0] zi_r6=0;
			reg signed [15:0] zr_r7=0;
			reg signed [15:0] zi_r7=0;
			wire signed [32:0] zr_w;
			wire signed [32:0] zi_w;
			reg signed [32:0] zr_r=0;
			reg signed [32:0] zi_r=0;
			if (jj==i+NMULTI/2) begin
			//if (j==i) begin
				always @(posedge xmaif.clk) begin
					zr_r1<=signed'(daccplxx[j][r*16+15:r*16]);
					zi_r1<=signed'(daccplxy[j][r*16+15:r*16]);
					zr_r2<=zr_r1;
					zi_r2<=zi_r1;
					{zr_r3,zi_r3}<={zr_r2,zi_r2};
					{zr_r4,zi_r4}<={zr_r3,zi_r3};
					{zr_r5,zi_r5}<={zr_r4,zi_r4};
					{zr_r6,zi_r6}<={zr_r5,zi_r5};
					{zr_r7,zi_r7}<={zr_r6,zi_r6};
					zr_r<=zr_r7<<<15;
					zi_r<=zi_r7<<<15;
					zr[i][j]<=zr_r[30:15];
					zi[i][j]<=zi_r[30:15];
				end
			end
			else begin
				
				cmultiplier #(.XWIDTH(16),.YWIDTH(16))
				mult1(.clk(xmaif.clk),.xr(xr),.xi(xi),.yr(yr),.yi(yi),.zr(zr_w),.zi(zi_w));
				always @(posedge xmaif.clk) begin
					xr<=signed'(coefij[31:16]);
					xi<=signed'(coefij[15:0]);
					yr<=signed'(daccplxx[j][r*16+15:r*16]);
					yi<=signed'(daccplxy[j][r*16+15:r*16]);
					zr_r<=zr_w;
					zi_r<=zi_w;
					xr_r1<=xr;
					xi_r1<=xi;
					yr_r1<=yr;
					yi_r1<=yi;
					zr_r1<=zr_r[30:15];
					zi_r1<=zi_r[30:15];
					zr_r2<=zr_r1;
					zi_r2<=zi_r1;
					zr[i][j]<=zr_r[30:15];
					zi[i][j]<=zi_r[30:15];
				end
			end
		end
	end
	for (genvar m=0;m<NQDRV;m=m+1) begin: sumrow
		reg signed [16-1:0] sumzr[0:NQDRV];
		reg signed [16-1:0] sumzi[0:NQDRV];
		reg signed [16-1:0] sumzr_d;
		reg signed [16-1:0] sumzi_d;
		for (genvar n=0;n<NQDRV;n=n+1) begin:sumcol
			reg signed [15:0] zr_d[0:n];
			reg signed [15:0] zi_d[0:n];
			for (genvar k=0;k<=n+1;k=k+1) begin: sumdelay
				always @(posedge xmaif.clk) begin
					if (k==0) begin
						zr_d[0]<=zr[m][n];
						zi_d[0]<=zi[m][n];
						sumzr[0]<=0;
						sumzi[0]<=0;
					end
					else if (k==n+1) begin
						sumzr[k]<=sumzr[k-1]+zr_d[k-1];
						sumzi[k]<=sumzi[k-1]+zi_d[k-1];
					end
					else begin
						zr_d[k]<=zr_d[k-1];
						zi_d[k]<=zi_d[k-1];
					end
				end
			end
		end
		assign xmaif.sumcplxx[m][r*16+15:r*16]=sumzr[NQDRV];
		assign xmaif.sumcplxy[m][r*16+15:r*16]=sumzi[NQDRV];
	end
end

endgenerate
endmodule

interface ifxma #(parameter NQDRV=4,parameter DAC_AXIS_DATAWIDTH=256)
	(input clk);
	logic [31:0]coef  [0:NQDRV-1][0:NQDRV-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] sumcplxx[0:NQDRV-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] sumcplxy[0:NQDRV-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] daccplxx[0:NQDRV-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] daccplxy[0:NQDRV-1];
	modport xma(input clk,coef,daccplxx,daccplxy
	,output sumcplxx,sumcplxy
	);
endinterface
