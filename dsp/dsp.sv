module dsp #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"

)(	
	ifdsp.dsp dspif
);
localparam TCNTWIDTH=27;
reg procreset=0;
reg procreset_d=0;
reg done=0;
reg [31:0] nshot=0;
wire [NPROC-1:0] stbprocend;
wire [NPROC-1:0] procdone;
wire [NPROC-1:0] nobusy;
reg [31:0] shotcnt=0;
reg [NPROC-1:0]proccorereset;
always @(posedge dspif.clk) begin
	procreset_d<=procreset;
	//	proccorereset<={NPROC{procreset|procreset_d}};
	proccorereset<={NPROC{procreset}};
end

/*
reg stbstart=0;
reg stbstart_d=0;
reg moreshot=0;
reg moreshot_d=0;
reg moreshot_d2=0;
reg moreshot_d3=0;
//localparam NPROC=4;
reg allprocend_d=0;
wire lastshot=shotcnt==nshot-1;
reg lastshotdone=0;
wire allprocend=&stbprocend;
wire stballprocend=allprocend&~allprocend_d;
reg shotbusy=0;
reg shotbusy_d=0;
always @(posedge dspif.clk) begin
	stbstart<=dspif.stb_start;
	stbstart_d<=stbstart;
	if (stbstart)
		nshot<=dspif.nshot;
	allprocend_d<=allprocend;
	if (stbstart)
		shotbusy<=1'b1;
	else if (lastshot)
		shotbusy<=1'b0;
	shotbusy_d<=shotbusy;
	shotcnt<=stbstart ? 0 : shotcnt+ stballprocend&(~lastshot);
	moreshot<=shotbusy & stballprocend&~lastshot;
	moreshot_d<=moreshot;
	moreshot_d2<=moreshot_d;
	moreshot_d3<=moreshot_d2;
	lastshotdone<=lastshot&allprocend;	
	proccorereset<={NPROC{stbstart|stbstart_d|moreshot_d2|moreshot_d3}};
end

assign dspif.lastshotdone=lastshotdone;
*/
assign dspif.shotcnt=shotcnt;
assign dspif.lastshotdone=done;
//wire proccorereset=~shotbusy|moreshot|moreshot_d;
ifelement #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrvelem[0:3](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvelem[0:3](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdloelem[0:3](.clk(dspif.clk));


generate for (genvar i =0; i<NPROC; i=i+1) begin
	proc_core 
	proc_core(.clk(dspif.clk),.reset(proccorereset[i]),.command(dspif.data_command[i]), .cmd_read_addr(dspif.addr_command[i]),.qdrvelem(qdrvelem[i]),.rdrvelem(rdrvelem[i]),.rdloelem(rdloelem[i]),.stbend(stbprocend[i]),.procdone_mon(procdone[i]),.nobusy_mon(nobusy[i]));
	elementconn #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
	qdrvelemconn(.elem(qdrvelem[i]),.envaddr(dspif.addr_qdrvenv[i]),.envdata(dspif.data_qdrvenv[i]),.freqaddr(dspif.addr_qdrvfreq[i]),.freqdata(dspif.data_qdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH))
	rdrvelemconn(.elem(rdrvelem[i]),.envaddr(dspif.addr_rdrvenv[i]),.envdata(dspif.data_rdrvenv[i]),.freqaddr(dspif.addr_rdrvfreq[i]),.freqdata(dspif.data_rdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH))
	rdloelemconn(.elem(rdloelem[i]),.envaddr(dspif.addr_rdloenv[i]),.envdata(dspif.data_rdloenv[i]),.freqaddr(dspif.addr_rdlofreq[i]),.freqdata(dspif.data_rdlofreq[i]));
end
endgenerate


elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
qdrv0out (.elem(qdrvelem[0]),.valid(),.multix(dspif.daccplxx[1]),.multiy(dspif.daccplxy[1]));
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(dspif.daccplxx[2]),.multiy(dspif.daccplxy[2]));
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(dspif.daccplxx[3]),.multiy(dspif.daccplxy[3]));

elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(dspif.daccplxx[0]),.multiy(dspif.daccplxy[0]));
//elementsum8 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.elem4(rdrvelem[4]),.elem5(rdrvelem[5]),.elem6(rdrvelem[6]),.elem7(rdrvelem[7]),.valid(),.multix(dspif.dac[0]),.multiy());


assign dspif.dac[0]=dspif.sumcplxx[0];
assign dspif.dac[1]=dspif.sumcplxx[1];
assign dspif.dac[2]=dspif.sumcplxx[2];
assign dspif.dac[3]=dspif.sumcplxx[3];

reg [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
reg [NPROC-1:0] resetacc=0;
generate 
for (genvar i=0;i<NADC;i=i+1) begin
	always @(posedge dspif.clk) begin
		adc[i]<=dspif.adc[i];
	end
end
endgenerate
always @(posedge dspif.clk) begin
	resetacc<={NPROC{dspif.resetacc}};
end
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
wire locklast_accbuf[0:7];
reg we_accbuf[0:7];
generate 
for (genvar i=0;i<NPROC;i=i+1) begin: rdlomixacc
	wire accvalid;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(adc[0]),.adcy(adc[1]),.shift(15),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
	assign locklast_accbuf[i]=&addr_accbuf[i];
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accvalid;
		addr_accbuf[i]<=resetacc[i] ? 0 : addr_accbuf[i]+ (~locklast_accbuf[i] & accvalid);
	end

end
endgenerate
assign dspif.data_accbuf=data_accbuf;
assign dspif.addr_accbuf=addr_accbuf;
assign dspif.we_accbuf=we_accbuf;
assign dspif.addr_accbuf_mon0=addr_accbuf[0];
assign dspif.addr_accbuf_mon1=addr_accbuf[1];
assign dspif.addr_accbuf_mon2=addr_accbuf[2];
assign dspif.addr_accbuf_mon3=addr_accbuf[3];


/*panzoomtrig #(.NADC(NADC),.NDAC(NDAC),.NDLO(NDLO),.NACQBUF(NACQBUF),.NDACMON(NDACMON))
panzoomtrig(.clk(dspif.clk),.adc(adc),.dac(dac),.dlo(dlo),.acqbuf(acqbuf),.dacmon(dacmon)
,.trigout(trigout),.acqsel(acqsel),.dacmonsel(dacmonsel),.zoomratio(zoomratio),.panshift(panshift),.triglevel(triglevel),.trigchan(trigchan)
);

*/
xmultadd #(.NDAC(NDAC))
xmultadd(.dspif(dspif));

reg [DAC_AXIS_DATAWIDTH-1:0] dac[0:3];
reg [8:0] reset_bram_read=0;
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon=0;
wire we_dacmon=~locklast_dacmon;
wire locklast_dacmon=&addr_dacmon;
always @(posedge dspif.clk) begin
	reset_bram_read<={9{dspif.stb_reset_bram_read}};
end
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf0=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf1=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf0_d=0;
reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf1_d=0;
reg we_acqbuf0_d=0;
reg we_acqbuf1_d=0;
wire we_acqbuf0=~locklast_acqbuf0;
wire locklast_acqbuf0=&addr_acqbuf0;
wire we_acqbuf1=~locklast_acqbuf1;
wire locklast_acqbuf1=&addr_acqbuf1;
always @(posedge dspif.clk) begin
	addr_acqbuf0<=reset_bram_read[0] ? 0 : (addr_acqbuf0+ (locklast_acqbuf0 ? 0 : 1));
	addr_acqbuf1<=reset_bram_read[2] ? 0 : (addr_acqbuf1+ (locklast_acqbuf1 ? 0 : 1));
	addr_acqbuf0_d<=addr_acqbuf0;
	addr_acqbuf1_d<=addr_acqbuf1;
	addr_dacmon<=reset_bram_read[1] ? 0 : (addr_dacmon+ (locklast_dacmon ? 0 : 1));
	we_acqbuf0_d<=we_acqbuf0;
	we_acqbuf1_d<=we_acqbuf1;
end
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
reg [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf_d[0:1];
always @(posedge dspif.clk) begin
	data_acqbuf[0]<=adc[0];
	data_acqbuf[1]<=adc[1];
	data_acqbuf_d[0]<=data_acqbuf[0];
	data_acqbuf_d[1]<=data_acqbuf[1];
	dspif.data_acqbuf[0]<=data_acqbuf_d[0];
	dspif.data_acqbuf[1]<=data_acqbuf_d[1];
	dspif.addr_acqbuf[0]<=addr_acqbuf0_d;
	dspif.addr_acqbuf[1]<=addr_acqbuf1_d;
	dspif.we_acqbuf[0]<=we_acqbuf0_d;
	dspif.we_acqbuf[1]<=we_acqbuf1_d;
	dspif.we_dacmon[0]<=we_dacmon;
	dspif.we_dacmon[1]<=we_dacmon;
	dspif.we_dacmon[2]<=we_dacmon;
	dspif.we_dacmon[3]<=we_dacmon;
	dspif.addr_dacmon[0]<=addr_dacmon;
	dspif.addr_dacmon[1]<=addr_dacmon;
	dspif.addr_dacmon[2]<=addr_dacmon;
	dspif.addr_dacmon[3]<=addr_dacmon;
end

generate
for (genvar i=0;i<16;i=i+1) begin : step16
	for (genvar j=0;j<NDAC;j=j+1) begin
		always @(posedge dspif.clk) begin
			dac[j][(i+1)*16-1:i*16]<=dspif.dac[j][(i+1)*16-1:i*16];
		end
	end
	for (genvar k=0;k<NDACMON;k=k+1) begin
		always @(posedge dspif.clk) begin
			dspif.data_dacmon[k][(i+1)*16-1:i*16]<=dac[k][(i+1)*16-1:i*16];
		end
	end
end
endgenerate
//

enum {IDLE
,START
,PROCRUN
,ELEMBUSY
,MORESHOT
,DONE
,NSTATE
} state,nextstate;
always @(posedge dspif.clk) begin
	if (dspif.reset) begin
		state <= IDLE;
	end
	else begin
		state <= nextstate;
	end
end
always @(*) begin
	if (dspif.reset) begin
		nextstate = IDLE;
	end
	else begin
		case (state)
			IDLE: begin
				nextstate= dspif.stb_start ? START : IDLE;
			end
			START: begin
				nextstate=PROCRUN;
			end
			PROCRUN: begin
				nextstate= &procdone ? ELEMBUSY : PROCRUN;
			end
			ELEMBUSY: begin
				nextstate= &nobusy ? MORESHOT : ELEMBUSY;
			end
			MORESHOT: begin
				nextstate=shotcnt==nshot-1 ? DONE : START;
			end
			DONE: begin
				nextstate=IDLE;
			end
		endcase
	end
end
always @(posedge dspif.clk) begin
	if (dspif.reset) begin
	end
	else begin
		case (nextstate)
			IDLE: begin
				done<=1'b0;
				procreset<=1'b1;
			end
			START: begin
				done<=1'b0;
				procreset<=1'b0;
			end
			PROCRUN: begin
				done<=1'b0;
				procreset<=1'b0;
			end
			ELEMBUSY: begin
				done<=1'b0;
				procreset<=1'b1;
			end
			MORESHOT: begin
				done<=1'b0;
				shotcnt<=shotcnt+1;
				procreset<=1'b1;
			end
			DONE: begin
				done<=1'b1;
			end
		endcase
	end
end


//`include "iladsp.vh"
endmodule

interface ifdsp #(
	`include "plps_para.vh"
	,`include "bram_para.vh"
	,`include "braminit_para.vh"
	)();
	wire clk;
	wire reset;
	logic [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] dac[0:NDAC-1];
	logic [ADC_AXIS_DATAWIDTH-1:0] dlo[0:NDLO-1];

	logic [DAC_AXIS_DATAWIDTH-1:0] daccplxx[0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] daccplxy[0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] sumcplxx[0:NDAC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] sumcplxy[0:NDAC-1];
	logic [1-1:0] errsum[0:NDAC-1];

	logic [DACMON_W_DATAWIDTH-1:0] data_dacmon[0:7];
	reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon[0:7];
	reg we_dacmon[0:7];

	logic [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
	reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
	reg we_accbuf[0:7];

	logic [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:1];
	reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf[0:1];
	reg we_acqbuf[0:1];

	logic [COMMAND_R_DATAWIDTH-1:0] data_command[0:16];
	reg [COMMAND_R_ADDRWIDTH-1:0] addr_command[0:16];
	reg we_command[0:16];

	logic [QDRVENV_R_DATAWIDTH-1:0] data_qdrvenv[0:15];
	reg [QDRVENV_R_ADDRWIDTH-1:0] addr_qdrvenv[0:15];
	reg we_qdrvenv[0:15];

	logic [RDLOENV_R_DATAWIDTH-1:0] data_rdloenv[0:7];
	reg [RDLOENV_R_ADDRWIDTH-1:0] addr_rdloenv[0:7];
	reg we_rdloenv[0:7];

	logic [RDRVENV_R_DATAWIDTH-1:0] data_rdrvenv[0:7];
	reg [RDRVENV_R_ADDRWIDTH-1:0] addr_rdrvenv[0:7];
	reg we_rdrvenv[0:7];

	logic [RDRVFREQ_R_DATAWIDTH-1:0] data_rdrvfreq[0:7];
	reg [RDRVFREQ_R_ADDRWIDTH-1:0] addr_rdrvfreq[0:7];
	reg we_rdrvfreq[0:7];

	logic [RDLOFREQ_R_DATAWIDTH-1:0] data_rdlofreq[0:7];
	reg [RDLOFREQ_R_ADDRWIDTH-1:0] addr_rdlofreq[0:7];
	reg we_rdlofreq[0:7];

	logic [QDRVFREQ_R_DATAWIDTH-1:0] data_qdrvfreq[0:7];
	reg [QDRVFREQ_R_ADDRWIDTH-1:0] addr_qdrvfreq[0:7];
	reg we_qdrvfreq[0:7];

	logic stb_start;
	logic [31:0] nshot;
	logic resetacc;
	logic stb_reset_bram_read;
	logic lastshotdone;
	logic [31:0] shotcnt;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon0;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon1;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon2;
	logic [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf_mon3;
	logic [31:0] coef [0:NDAC-1][0:NDAC-1];
	modport dsp(input adc
	,output dac
	,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon
	,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	,input clk,reset
	,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
	,input stb_start,nshot,resetacc,stb_reset_bram_read
	,output lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3
	,inout dlo,daccplxx,daccplxy,sumcplxx,sumcplxy,coef,errsum
	);
	modport cfg(output adc
	,input dac
	,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon
	,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	,output clk,reset
	,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
	,output stb_start,nshot,resetacc,stb_reset_bram_read
	,input lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3
	,output coef
	,input errsum

	);
endinterface

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
		wire [15:0] sumzrall;
		wire [15:0] sumziall;
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
//				if (k==n) begin
//					assign sumzrall=sumzr[NDAC-1][15:0];
//					assign sumziall=sumzi[NDAC-1][15:0];
//				end
			end
		end
		assign dspif.sumcplxx[m][r*16+15:r*16]=sumzr[NDAC-1][15:0];
		assign dspif.sumcplxy[m][r*16+15:r*16]=sumzi[NDAC-1][15:0];
	end
end

endgenerate
endmodule

