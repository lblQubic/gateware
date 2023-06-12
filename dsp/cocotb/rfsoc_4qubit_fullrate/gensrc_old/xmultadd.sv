module xmultadd #(parameter DEBUG="true" ,parameter integer LB1_DATAWIDTH=32 ,parameter integer LB1_ADDRWIDTH=10 ,parameter integer LB2_DATAWIDTH=32 ,parameter integer LB2_ADDRWIDTH=10 ,parameter integer LB3_DATAWIDTH=32 ,parameter integer LB3_ADDRWIDTH=20 ,parameter integer LB4_DATAWIDTH=32 ,parameter integer LB4_ADDRWIDTH=20 ,parameter integer DAC_AXIS_DATAWIDTH=256 ,parameter integer ADC_AXIS_DATAWIDTH=64 ,parameter integer BRAMADDRWIDTH=32 ,parameter integer NPROC=4 ,parameter integer NADC=2 ,parameter integer NDLO=4 ,parameter integer NDAC=4 ,parameter integer NDACMON=4 ,parameter integer NACQ=2 ,parameter NCFGRESETN=8 ,parameter NDSPRESETN=8 ,parameter NPSRESETN=3 ,parameter NADC2RESETN=3 	
,parameter integer ACCBUF_R_ADDRWIDTH=12,parameter integer ACCBUF_R_DATAWIDTH=32,parameter integer ACCBUF_R_DEPTH=4096,parameter integer ACCBUF_W_ADDRWIDTH=11,parameter integer ACCBUF_W_DATAWIDTH=64,parameter integer ACCBUF_W_DEPTH=2048 ,parameter integer ACQBUF_R_ADDRWIDTH=14,parameter integer ACQBUF_R_DATAWIDTH=32,parameter integer ACQBUF_R_DEPTH=16384,parameter integer ACQBUF_W_ADDRWIDTH=13,parameter integer ACQBUF_W_DATAWIDTH=64,parameter integer ACQBUF_W_DEPTH=8192 ,parameter integer COMMAND_R_ADDRWIDTH=10,parameter integer COMMAND_R_DATAWIDTH=128,parameter integer COMMAND_R_DEPTH=1024,parameter integer COMMAND_W_ADDRWIDTH=12,parameter integer COMMAND_W_DATAWIDTH=32,parameter integer COMMAND_W_DEPTH=4096 ,parameter integer DACMON_R_ADDRWIDTH=12,parameter integer DACMON_R_DATAWIDTH=32,parameter integer DACMON_R_DEPTH=4096,parameter integer DACMON_W_ADDRWIDTH=9,parameter integer DACMON_W_DATAWIDTH=256,parameter integer DACMON_W_DEPTH=512 ,parameter integer QDRVENV_R_ADDRWIDTH=10,parameter integer QDRVENV_R_DATAWIDTH=512,parameter integer QDRVENV_R_DEPTH=1024,parameter integer QDRVENV_W_ADDRWIDTH=14,parameter integer QDRVENV_W_DATAWIDTH=32,parameter integer QDRVENV_W_DEPTH=16384 ,parameter integer QDRVFREQ_R_ADDRWIDTH=9,parameter integer QDRVFREQ_R_DATAWIDTH=512,parameter integer QDRVFREQ_R_DEPTH=512,parameter integer QDRVFREQ_W_ADDRWIDTH=13,parameter integer QDRVFREQ_W_DATAWIDTH=32,parameter integer QDRVFREQ_W_DEPTH=8192 ,parameter integer RDLOENV_R_ADDRWIDTH=12,parameter integer RDLOENV_R_DATAWIDTH=128,parameter integer RDLOENV_R_DEPTH=4096,parameter integer RDLOENV_W_ADDRWIDTH=14,parameter integer RDLOENV_W_DATAWIDTH=32,parameter integer RDLOENV_W_DEPTH=16384 ,parameter integer RDLOFREQ_R_ADDRWIDTH=9,parameter integer RDLOFREQ_R_DATAWIDTH=128,parameter integer RDLOFREQ_R_DEPTH=512,parameter integer RDLOFREQ_W_ADDRWIDTH=11,parameter integer RDLOFREQ_W_DATAWIDTH=32,parameter integer RDLOFREQ_W_DEPTH=2048 ,parameter integer RDRVENV_R_ADDRWIDTH=12,parameter integer RDRVENV_R_DATAWIDTH=512,parameter integer RDRVENV_R_DEPTH=4096,parameter integer RDRVENV_W_ADDRWIDTH=16,parameter integer RDRVENV_W_DATAWIDTH=32,parameter integer RDRVENV_W_DEPTH=65536 ,parameter integer RDRVFREQ_R_ADDRWIDTH=9,parameter integer RDRVFREQ_R_DATAWIDTH=512,parameter integer RDRVFREQ_R_DEPTH=512,parameter integer RDRVFREQ_W_ADDRWIDTH=13,parameter integer RDRVFREQ_W_DATAWIDTH=32,parameter integer RDRVFREQ_W_DEPTH=8192
,parameter INIT_rdrvenv0="" ,parameter INIT_rdrvenv1="" ,parameter INIT_rdrvenv2="" ,parameter INIT_rdrvenv3="" ,parameter INIT_acqbuf0="" ,parameter INIT_acqbuf1="" ,parameter INIT_qdrvenv0="" ,parameter INIT_qdrvenv1="" ,parameter INIT_qdrvenv2="" ,parameter INIT_qdrvenv3="" ,parameter INIT_rdloenv0="" ,parameter INIT_rdloenv1="" ,parameter INIT_rdloenv2="" ,parameter INIT_rdloenv3="" ,parameter INIT_qdrvfreq0="" ,parameter INIT_qdrvfreq1="" ,parameter INIT_qdrvfreq2="" ,parameter INIT_qdrvfreq3="" ,parameter INIT_rdrvfreq0="" ,parameter INIT_rdrvfreq1="" ,parameter INIT_rdrvfreq2="" ,parameter INIT_rdrvfreq3="" ,parameter INIT_accbuf0="" ,parameter INIT_accbuf1="" ,parameter INIT_accbuf2="" ,parameter INIT_accbuf3="" ,parameter INIT_command0="" ,parameter INIT_command1="" ,parameter INIT_command2="" ,parameter INIT_command3="" ,parameter INIT_dacmon0="" ,parameter INIT_dacmon1="" ,parameter INIT_dacmon2="" ,parameter INIT_dacmon3="" ,parameter INIT_rdlofreq0="" ,parameter INIT_rdlofreq1="" ,parameter INIT_rdlofreq2="" ,parameter INIT_rdlofreq3=""
)(ifxma.xma xmaif)
;
localparam NRATIO=16;

reg [31:0] coef [0:NDAC-1][0:NDAC-1];
always @(posedge xmaif.clk) begin
	coef<=xmaif.coef;
end
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
			reg signed [15:0] yr_r1=0;
			reg signed [15:0] yi_r1=0;
			reg signed [15:0] xr_r1=0;
			reg signed [15:0] xi_r1=0;
			reg signed [15:0] zr_r1=0;
			reg signed [15:0] zi_r1=0;
			reg signed [15:0] zr_r2=0;
			reg signed [15:0] zi_r2=0;
			wire signed [32:0] zr_w;
			wire signed [32:0] zi_w;
			reg signed [32:0] zr_r=0;
			reg signed [32:0] zi_r=0;
			cmultiplier #(.XWIDTH(16),.YWIDTH(16))
			mult1(.clk(xmaif.clk),.xr(xr),.xi(xi),.yr(yr),.yi(yi),.zr(zr_w),.zi(zi_w));
			always @(posedge xmaif.clk) begin
				xr<=signed'(coef[i][j][31:16]);
				xi<=signed'(coef[i][j][15:0]);
				yr<=signed'(xmaif.daccplxx[j][r*16+15:r*16]);
				yi<=signed'(xmaif.daccplxy[j][r*16+15:r*16]);
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
	for (genvar m=0;m<NDAC;m=m+1) begin: sumrow
		reg signed [16-1:0] sumzr[0:NDAC];
		reg signed [16-1:0] sumzi[0:NDAC];
		reg signed [16-1:0] sumzr_d;
		reg signed [16-1:0] sumzi_d;
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
		assign xmaif.sumcplxx[m][r*16+15:r*16]=sumzr[NDAC];
		assign xmaif.sumcplxy[m][r*16+15:r*16]=sumzi[NDAC];
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
