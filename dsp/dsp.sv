module dsp #(`include "plps_para.vh"	
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(ifdsp.dsp dspif
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
reg [31:0] nextshotcnt=0;//shotcnt+1;
reg [31:0] currentshotcnt=0;
reg [NPROC-1:0]proccorereset;
always @(posedge dspif.clk) begin
	procreset_d<=procreset;
	//	proccorereset<={NPROC{procreset|procreset_d}};
	proccorereset<={NPROC{procreset}};
end

assign dspif.shotcnt=currentshotcnt;
assign dspif.lastshotdone=done;
//wire proccorereset=~shotbusy|moreshot|moreshot_d;
ifelement #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
qdrvelem[0:3](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdrvelem[0:3](.clk(dspif.clk));
ifelement #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.TCNTWIDTH(TCNTWIDTH))
rdloelem[0:3](.clk(dspif.clk));


wire [3:0] state_dbg[0:3];
wire [3:0] nextstate_dbg[0:3];
generate for (genvar i =0; i<NPROC; i=i+1) begin: procelem
	proc_core 
	proc_core(.clk(dspif.clk),.reset(proccorereset[i]),.command(dspif.data_command[i]), .cmd_read_addr(dspif.addr_command[i]),.qdrvelem(qdrvelem[i]),.rdrvelem(rdrvelem[i]),.rdloelem(rdloelem[i]),.stbend(stbprocend[i]),.procdone_mon(procdone[i]),.nobusy_mon(nobusy[i])
	,.state_dbg(state_dbg[i]),.nextstate_dbg(nextstate_dbg[i])
	);
	elementconn #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
	qdrvelemconn(.elem(qdrvelem[i]),.envaddr(dspif.addr_qdrvenv[i]),.envdata(dspif.data_qdrvenv[i]),.freqaddr(dspif.addr_qdrvfreq[i]),.freqdata(dspif.data_qdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDRVFREQ_R_DATAWIDTH))
	rdrvelemconn(.elem(rdrvelem[i]),.envaddr(dspif.addr_rdrvenv[i]),.envdata(dspif.data_rdrvenv[i]),.freqaddr(dspif.addr_rdrvfreq[i]),.freqdata(dspif.data_rdrvfreq[i]));
	elementconn #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH))
	rdloelemconn(.elem(rdloelem[i]),.envaddr(dspif.addr_rdloenv[i]),.envdata(dspif.data_rdloenv[i]),.freqaddr(dspif.addr_rdlofreq[i]),.freqdata(dspif.data_rdlofreq[i]));
end
endgenerate

ifxma #(.NDAC(NDAC),.DAC_AXIS_DATAWIDTH(DAC_AXIS_DATAWIDTH)) xmaif(.clk(dspif.clk));

elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
qdrv0out (.elem(qdrvelem[0]),.valid(),.multix(xmaif.daccplxx[1]),.multiy(xmaif.daccplxy[1]));
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
qdrv1out (.elem(qdrvelem[1]),.valid(),.multix(xmaif.daccplxx[2]),.multiy(xmaif.daccplxy[2]));
elementout #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))
qdrv2out (.elem(qdrvelem[2]),.valid(),.multix(xmaif.daccplxx[3]),.multiy(xmaif.daccplxy[3]));

elementsum4 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.valid(),.multix(xmaif.daccplxx[0]),.multiy(xmaif.daccplxy[0]));
//elementsum8 #(.ENV_ADDRWIDTH(QDRVENV_R_ADDRWIDTH),.ENV_DATAWIDTH(QDRVENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(QDRVFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(QDRVFREQ_R_DATAWIDTH))rdrvout (.elem0(rdrvelem[0]),.elem1(rdrvelem[1]),.elem2(rdrvelem[2]),.elem3(rdrvelem[3]),.elem4(rdrvelem[4]),.elem5(rdrvelem[5]),.elem6(rdrvelem[6]),.elem7(rdrvelem[7]),.valid(),.multix(dspif.dac[0]),.multiy());

assign dspif.dac[0]=xmaif.daccplxx[0];
assign dspif.dac[1]=xmaif.daccplxx[1];
assign dspif.dac[2]=xmaif.daccplxx[2];
assign dspif.dac[3]=xmaif.daccplxx[3];
//assign dspif.dac[0]=xmaif.sumcplxx[0];
//assign dspif.dac[1]=xmaif.sumcplxx[1];
//assign dspif.dac[2]=xmaif.sumcplxx[2];
//assign dspif.dac[3]=xmaif.sumcplxx[3];
assign xmaif.coef=dspif.coef;

reg [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
reg [ADC_AXIS_DATAWIDTH-1:0] dacundersample[0:NDAC-1];
reg [ADC_AXIS_DATAWIDTH-1:0] mixbbx=0;
reg [ADC_AXIS_DATAWIDTH-1:0] mixbby=0;
reg [NPROC-1:0] resetacc=0;
generate 
for (genvar i=0;i<NADC;i=i+1) begin
	always @(posedge dspif.clk) begin
		adc[i]<=dspif.adc[i];
	end
end
endgenerate
generate
for (genvar i=0;i<NDAC;i=i+1) begin
	for (genvar j=0;j<4;j=j+1) begin
		assign dacundersample[i][j*16+:16]=dspif.dac[i][j*16*4+:16];
	end
end
endgenerate
always @(posedge dspif.clk) begin
	resetacc<={NPROC{dspif.resetacc}};

	case (dspif.mixbbxsel)
		0: 	mixbbx<=adc[0];
		1: 	mixbbx<=adc[1];
		2: 	mixbbx<=dacundersample[0];
		3: 	mixbbx<=dacundersample[1];
		4: 	mixbbx<=dacundersample[2];
		5: 	mixbbx<=dacundersample[3];
		6: 	mixbbx<=0;
	endcase
	case (dspif.mixbbysel)
		0: 	mixbby<=adc[0];
		1: 	mixbby<=adc[1];
		2: 	mixbby<=dacundersample[0];
		3: 	mixbby<=dacundersample[1];
		4: 	mixbby<=dacundersample[2];
		5: 	mixbby<=dacundersample[3];
		6: 	mixbby<=0;
	endcase

end
reg [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:7];
reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:7];
wire locklast_accbuf[0:7];
reg we_accbuf[0:7];
generate 
for (genvar i=0;i<NPROC;i=i+1) begin: rdlomixacc
	wire accvalid;
	elementmixacc #(.ENV_ADDRWIDTH(RDLOENV_R_ADDRWIDTH),.ENV_DATAWIDTH(RDLOENV_R_DATAWIDTH),.FREQ_ADDRWIDTH(RDLOFREQ_R_ADDRWIDTH),.FREQ_DATAWIDTH(RDLOFREQ_R_DATAWIDTH),.ACCADDWIDTH(16))
	rdlo0mixacc(.adcx(mixbbx),.adcy(mixbby),.shift(dspif.shift),.elem(rdloelem[i].mix),.gateout(),.accx(data_accbuf[i][63:32]),.accy(data_accbuf[i][31:0]),.stbout(accvalid));
	assign locklast_accbuf[i]=&addr_accbuf[i];
	always @(posedge dspif.clk) begin
		we_accbuf[i]<=accvalid;
		addr_accbuf[i]<=resetacc[i] ? 0 : addr_accbuf[i]+ (~locklast_accbuf[i] & we_accbuf[i]);
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

reg [DAC_AXIS_DATAWIDTH-1:0] dac[0:3];

panzoomtrigif #(.NCHAN(10),.ADDRWIDTH(ACQBUF_W_ADDRWIDTH),.DATAWIDTH(ACQBUF_W_DATAWIDTH))acqpztif[0:1]();
panzoomtrigif #(.NCHAN(4),.ADDRWIDTH(DACMON_W_ADDRWIDTH),.DATAWIDTH(DACMON_W_DATAWIDTH))dacmonpztif[0:4]();
generate 
for (genvar i=0;i<2;i=i+1) begin: acqpztifwire
	reg stb_start_r=0;
	always @(posedge dspif.clk) begin
		stb_start_r<=dspif.stb_start;
	end
	assign acqpztif[i].clk=dspif.clk;
	assign acqpztif[i].reset=dspif.acqbufreset;
	assign acqpztif[i].chansel=dspif.acqchansel[i];
	assign acqpztif[i].stb_start=stb_start_r;
	assign acqpztif[i].delayaftertrig=dspif.delayaftertrig;
	assign acqpztif[i].decimator=dspif.decimator;
	assign acqpztif[i].chan[0]=adc[0];
	assign acqpztif[i].chan[1]=adc[1];
	assign acqpztif[i].chan[2]=rdloelem[0].multix;
	assign acqpztif[i].chan[3]=rdloelem[0].multiy;
	assign acqpztif[i].chan[4]=rdloelem[1].multix;
	assign acqpztif[i].chan[5]=rdloelem[1].multiy;
	assign acqpztif[i].chan[6]=rdloelem[2].multix;
	assign acqpztif[i].chan[7]=rdloelem[2].multiy;
	assign acqpztif[i].chan[8]=rdloelem[3].multix;
	assign acqpztif[i].chan[9]=rdloelem[3].multiy;
	assign dspif.we_acqbuf[i]=acqpztif[i].we;
	assign dspif.addr_acqbuf[i]=acqpztif[i].addr;
	assign dspif.data_acqbuf[i]=acqpztif[i].data;
end
endgenerate
generate 
for (genvar i=0;i<4;i=i+1) begin: dacmonpztifwire
	reg stb_start_r=0;
	always @(posedge dspif.clk) begin
		stb_start_r<=dspif.stb_start;
	end
	assign dacmonpztif[i].clk=dspif.clk;
	assign dacmonpztif[i].reset=dspif.dacmonreset;
	assign dacmonpztif[i].chansel=dspif.dacmonchansel[i];
	assign dacmonpztif[i].stb_start=stb_start_r;
	assign dacmonpztif[i].delayaftertrig=dspif.delayaftertrig;
	assign dacmonpztif[i].decimator=dspif.decimator;
	assign dacmonpztif[i].chan[0]=dac[0];
	assign dacmonpztif[i].chan[1]=dac[1];
	assign dacmonpztif[i].chan[2]=dac[2];
	assign dacmonpztif[i].chan[3]=dac[3];
	assign dspif.we_dacmon[i]=dacmonpztif[i].we;
	assign dspif.addr_dacmon[i]=dacmonpztif[i].addr;
	assign dspif.data_dacmon[i]=dacmonpztif[i].data;
end
endgenerate


xmultadd #(`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
) xmultadd(.xmaif(xmaif));

/*reg [8:0] reset_bram_read=0;
reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon=0;
wire we_dacmon=~locklast_dacmon;
wire locklast_dacmon=&addr_dacmon;
reg stb_reset_bram_read=0;
always @(posedge dspif.clk) begin
stb_reset_bram_read<=dspif.stb_reset_bram_read;
reset_bram_read<={9{stb_reset_bram_read}};
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
data_acqbuf_d[0]<=data_acqbuf[0];// one more?
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
*/
generate
for (genvar i=0;i<16;i=i+1) begin : step16
	for (genvar j=0;j<NDAC;j=j+1) begin
		always @(posedge dspif.clk) begin
			dac[j][(i+1)*16-1:i*16]<=dspif.dac[j][(i+1)*16-1:i*16];
		end
	end
	/*	for (genvar k=0;k<NDACMON;k=k+1) begin
	always @(posedge dspif.clk) begin
	dspif.data_dacmon[k][(i+1)*16-1:i*16]<=dac[k][(i+1)*16-1:i*16];
	end
	end
	*/
end
endgenerate
//

enum {IDLE	=4'b0000
,START		=4'b0001
,PROCRUN	=4'b0011
,ELEMBUSY	=4'b0010
,MORESHOT	=4'b0110
,SHOTADD	=4'b0111
,DONE		=4'b0101
} state=IDLE,nextstate=IDLE;
reg shotadd=0;

always @(posedge dspif.clk) begin
	if (dspif.reset) begin
		state <= IDLE;
	end
	else begin
		state <= nextstate;
	end
end
always @(state) begin
	nextstate=IDLE;
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
			//nextstate=(|nshot)  & (|(nextshotcnt^nshot)) ? SHOTADD : DONE;
			nextstate=shotadd ? SHOTADD : DONE;
		end
		SHOTADD: begin
			nextstate=START;
		end
		DONE: begin
			nextstate=IDLE;
		end
	endcase
end
always @(posedge dspif.clk) begin
	nextshotcnt<=shotcnt+1;
	shotadd<=|(nextshotcnt^nshot) | (~|nshot);
	if (dspif.reset) begin
		shotcnt<=0;
		done<=1'b0;
		procreset<=1'b1;
	end
	else begin
		case (nextstate)
			IDLE: begin
				done<=1'b0;
				procreset<=1'b1;
				shotcnt<=0;
				nshot<=dspif.nshot;
			end
			START: begin
				done<=1'b0;
				procreset<=1'b0;
				shotcnt<=shotcnt;
			end
			PROCRUN: begin
				done<=1'b0;
				procreset<=1'b0;
				shotcnt<=shotcnt;
			end
			ELEMBUSY: begin
				done<=1'b0;
				procreset<=1'b1;
				shotcnt<=shotcnt;
			end
			MORESHOT: begin
				done<=1'b0;
				shotcnt<=shotcnt;
				procreset<=1'b1;
			end
			SHOTADD: begin
				done<=1'b0;
				shotcnt<=nextshotcnt;//+32'h1;
				currentshotcnt<=shotcnt;
				procreset<=1'b1;
			end
			DONE: begin
				done<=1'b1;
				shotcnt<=0;
				procreset<=1'b1;
			end
		endcase
	end
end

`include "iladsp.vh"
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


	logic acqbufreset;
	logic dacmonreset;
	logic [15:0] acqchansel[0:NACQ-1];
	logic [15:0] dacmonchansel[0:NACQ-1];
	logic [31:0] delayaftertrig;
	logic [15:0] decimator;
	logic [15:0] mixbbxsel;
	logic [15:0] mixbbysel;
	logic [4:0] shift;
	modport dsp(input clk,reset,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq,acqbufreset,dacmonreset,acqchansel,dacmonchansel,delayaftertrig,decimator
	,input adc
	,input stb_start,nshot,resetacc,stb_reset_bram_read
	,input coef,mixbbxsel,mixbbysel,shift
	,output lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3
	,output dac	,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon	,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	);
	modport cfg(output adc
	,output clk,reset,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
	,output stb_start,nshot,resetacc,stb_reset_bram_read,acqbufreset,dacmonreset,acqchansel,dacmonchansel,delayaftertrig,decimator
	,output coef,mixbbxsel,mixbbysel,shift
	,input dac,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	,input lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3
	);
endinterface
