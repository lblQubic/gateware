interface ifdsp #(
	`include "plps_para.vh"
	,`include "bram_para.vh"
	,`include "braminit_para.vh"
	)();
	wire clk;
	wire reset;
	localparam NDLO=NDLO1+NDLO2;
	logic [ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1];
	logic [DAC_AXIS_DATAWIDTH-1:0] dac[0:NDAC-1];
	logic [ADC_AXIS_DATAWIDTH-1:0] dlo[0:NDLO-1];

	logic [DACMON_W_DATAWIDTH-1:0] data_dacmon[0:NDACMON-1];
	reg [DACMON_W_ADDRWIDTH-1:0] addr_dacmon[0:NDACMON-1];
	reg we_dacmon[0:NDACMON-1];

	logic [ACCBUF_W_DATAWIDTH-1:0] data_accbuf[0:NPROC-1];
	reg [ACCBUF_W_ADDRWIDTH-1:0] addr_accbuf[0:NPROC-1];
	reg we_accbuf[0:NPROC-1];

	logic [ACQBUF_W_DATAWIDTH-1:0] data_acqbuf[0:NACQ-1];
	reg [ACQBUF_W_ADDRWIDTH-1:0] addr_acqbuf[0:NACQ-1];
	reg we_acqbuf[0:NACQ-1];

	logic [COMMAND_R_DATAWIDTH-1:0] data_command[0:NPROC-1];
	reg [COMMAND_R_ADDRWIDTH-1:0] addr_command[0:NPROC-1];
	reg we_command[0:NPROC-1];

	logic [QDRVENV_R_DATAWIDTH-1:0] data_qdrvenv[0:NPROC-1];
	reg [QDRVENV_R_ADDRWIDTH-1:0] addr_qdrvenv[0:NPROC-1];
	reg we_qdrvenv[0:NPROC-1];

	logic [RDLOENV_R_DATAWIDTH-1:0] data_rdloenv[0:NPROC-1];
	reg [RDLOENV_R_ADDRWIDTH-1:0] addr_rdloenv[0:NPROC-1];
	reg we_rdloenv[0:NPROC-1];

	logic [RDRVENV_R_DATAWIDTH-1:0] data_rdrvenv[0:NPROC-1];
	reg [RDRVENV_R_ADDRWIDTH-1:0] addr_rdrvenv[0:NPROC-1];
	reg we_rdrvenv[0:NPROC-1];

	logic [RDRVFREQ_R_DATAWIDTH-1:0] data_rdrvfreq[0:NPROC-1];
	reg [RDRVFREQ_R_ADDRWIDTH-1:0] addr_rdrvfreq[0:NPROC-1];
	reg we_rdrvfreq[0:NPROC-1];

	logic [RDLOFREQ_R_DATAWIDTH-1:0] data_rdlofreq[0:NPROC-1];
	reg [RDLOFREQ_R_ADDRWIDTH-1:0] addr_rdlofreq[0:NPROC-1];
	reg we_rdlofreq[0:NPROC-1];

	logic [QDRVFREQ_R_DATAWIDTH-1:0] data_qdrvfreq[0:NPROC-1];
	reg [QDRVFREQ_R_ADDRWIDTH-1:0] addr_qdrvfreq[0:NPROC-1];
	reg we_qdrvfreq[0:NPROC-1];

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
	(* ram_style = "registers" *)
	logic [31:0]coef  [0:NDAC-1][0:NDAC-1];


	logic acqbufreset;
	logic dacmonreset;
	logic [15:0] acqchansel[0:NACQ-1];
	logic [15:0] dacmonchansel[0:NACQ-1];
	logic [31:0] delayaftertrig;
	logic [15:0] decimator;
	logic [15:0] mixbb1sel;
	logic [15:0] mixbb2sel;
	logic [4:0] shift;
	logic [NPROC-1:0] procdone;
	modport dsp(input clk,reset,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq,acqbufreset,dacmonreset,acqchansel,dacmonchansel,delayaftertrig,decimator
	,input adc
	,input stb_start,nshot,resetacc,stb_reset_bram_read
	,input coef,mixbb1sel,mixbb2sel,shift
	,output lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3,procdone
	,output dac	,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon	,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	);
	modport cfg(output adc
	,output clk,reset,data_command,data_qdrvenv,data_rdrvenv,data_rdloenv,data_qdrvfreq,data_rdrvfreq,data_rdlofreq
	,output stb_start,nshot,resetacc,stb_reset_bram_read,acqbufreset,dacmonreset,acqchansel,dacmonchansel,delayaftertrig,decimator
	,output coef,mixbb1sel,mixbb2sel,shift
	,input dac,addr_accbuf,addr_acqbuf,addr_command,addr_qdrvenv,addr_rdrvenv,addr_rdloenv,addr_qdrvfreq,addr_rdrvfreq,addr_rdlofreq,addr_dacmon,data_accbuf,we_accbuf,data_acqbuf,we_acqbuf,data_dacmon,we_dacmon
	,input lastshotdone,shotcnt,addr_accbuf_mon0,addr_accbuf_mon1,addr_accbuf_mon2,addr_accbuf_mon3,procdone
	);
endinterface
