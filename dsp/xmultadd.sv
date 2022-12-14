module xmultadd #(parameter NDAC=4)
(ifdsp.dsp dspif)
;
localparam NRATIO=16;
localparam ZADDWIDTH=$clog2(NRATIO);
generate
for (genvar r=0;r<NRATIO;r=r+1) begin: ratio
	reg signed [15:0] zr[0:NDAC-1][0:NDAC-1];
	reg signed [15:0] zi[0:NDAC-1][0:NDAC-1];
	for (genvar i=0;i<NDAC;i=i+1) begin: multirow
		for (genvar j=0;j<NDAC;j=j+1) begin: multicol
			wire signed [15:0] yr=signed'(dspif.coef[i][j][31:16]);
			wire signed [15:0] yi=signed'(dspif.coef[i][j][15:0]);
			wire signed [15:0] xr=signed'(dspif.daccplxx[i][r*16+15:r*16]);
			wire signed [15:0] xi=signed'(dspif.daccplxy[i][r*16+15:r*16]);
			wire signed [32:0] zr_w;
			wire signed [32:0] zi_w;
			cmultiplier #(.XWIDTH(16),.YWIDTH(16))
			mult1(.clk(dspif.clk),.xr(xr),.xi(xi),.yr(yr),.yi(yi),.zr(zr_w),.zi(zi_w));
			always @(posedge dspif.clk) begin
				zr[i][j]<=zr_w[30:15];
				zi[i][j]<=zi_w[30:15];
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
				always @(posedge dspif.clk) begin
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
		assign dspif.sumcplxx[m][r*16+15:r*16]=sumzr[NDAC-1][15:0];
		assign dspif.sumcplxy[m][r*16+15:r*16]=sumzi[NDAC-1][15:0];
	end
end

endgenerate
endmodule

