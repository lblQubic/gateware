module xmultadd #(parameter NDAC=4)
(ifxma.xma xmaif)
;
localparam NRATIO=16;
localparam ZADDWIDTH=$clog2(NRATIO);
generate
for (genvar r=0;r<NRATIO;r=r+1) begin: ratio
	reg signed [15:0] zr[0:NDAC-1][0:NDAC-1];
	reg signed [15:0] zi[0:NDAC-1][0:NDAC-1];
	for (genvar i=0;i<NDAC;i=i+1) begin: multirow
		for (genvar j=0;j<NDAC;j=j+1) begin: multicol
			reg signed [15:0] yr=0;
			reg signed [15:0] yi=0;
			reg signed [15:0] xr=0;
			reg signed [15:0] xi=0;
			reg signed [15:0] zr_r=0;
			reg signed [15:0] zi_r=0;
			wire signed [32:0] zr_w;
			wire signed [32:0] zi_w;
			cmultiplier #(.XWIDTH(16),.YWIDTH(16))
			mult1(.clk(xmaif.clk),.xr(xr),.xi(xi),.yr(yr),.yi(yi),.zr(zr_w),.zi(zi_w));
			always @(posedge xmaif.clk) begin
				yr<=signed'(xmaif.coef[i][j][31:16]);
				yi<=signed'(xmaif.coef[i][j][15:0]);
				xr<=signed'(xmaif.daccplxx[i][r*16+15:r*16]);
				xi<=signed'(xmaif.daccplxy[i][r*16+15:r*16]);
				zr_r<=zr_w[30:15];
				zi_r<=zi_w[30:15];
				zr[i][j]<=zr_r;
				zi[i][j]<=zi_r;
			end
		end
	end
	for (genvar m=0;m<NDAC;m=m+1) begin: sumrow
		reg signed [16+ZADDWIDTH-1:0] sumzr[0:NDAC];
		reg signed [16+ZADDWIDTH-1:0] sumzi[0:NDAC];
		for (genvar n=0;n<NDAC;n=n+1) begin:sumcol
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
						sumzr[k]<=sumzr[k-1]+(16+ZADDWIDTH)'(zr_d[k-1]);
						sumzi[k]<=sumzi[k-1]+(16+ZADDWIDTH)'(zi_d[k-1]);
					end
					else begin
						zr_d[k]<=zr_d[k-1];
						zi_d[k]<=zi_d[k-1];
					end
				end
			end
		end
		reg signed [15:0] sumcplxx=0;
		reg signed [15:0] sumcplxy=0;
		always @(posedge xmaif.clk) begin
			sumcplxx<=sumzr[NDAC][15:0];
			sumcplxy<=sumzi[NDAC][15:0];
		end
		assign xmaif.sumcplxx[m][r*16+15:r*16]=sumcplxx;
		assign xmaif.sumcplxy[m][r*16+15:r*16]=sumcplxy;
	end
end

endgenerate
endmodule

interface ifxma #(parameter NDAC=4,parameter DAC_AXIS_DATAWIDTH=256)
	(input clk);
	logic [31:0] coef [0:NDAC-1][0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] sumcplxx[0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] sumcplxy[0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] daccplxx[0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] daccplxy[0:NDAC-1];
	modport xma(input clk,coef,daccplxx,daccplxy
	,output sumcplxx,sumcplxy
	);
endinterface
