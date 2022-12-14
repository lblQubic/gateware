module dsp_tb#(
	parameter DEBUG="true" ,parameter integer LB1_DATAWIDTH=32 ,parameter integer LB1_ADDRWIDTH=10 ,parameter integer LB2_DATAWIDTH=32 ,parameter integer LB2_ADDRWIDTH=10 ,parameter integer LB3_DATAWIDTH=32 ,parameter integer LB3_ADDRWIDTH=20 ,parameter integer LB4_DATAWIDTH=32 ,parameter integer LB4_ADDRWIDTH=20 ,parameter integer DAC_AXIS_DATAWIDTH=256 ,parameter integer ADC_AXIS_DATAWIDTH=64 ,parameter integer BRAMADDRWIDTH=32 
	,parameter integer ACCBUF_R_ADDRWIDTH=12,parameter integer ACCBUF_R_DATAWIDTH=32,parameter integer ACCBUF_R_DEPTH=4096,parameter integer ACCBUF_W_ADDRWIDTH=11,parameter integer ACCBUF_W_DATAWIDTH=64,parameter integer ACCBUF_W_DEPTH=2048 ,parameter integer ACQBUF_R_ADDRWIDTH=14,parameter integer ACQBUF_R_DATAWIDTH=32,parameter integer ACQBUF_R_DEPTH=16384,parameter integer ACQBUF_W_ADDRWIDTH=13,parameter integer ACQBUF_W_DATAWIDTH=64,parameter integer ACQBUF_W_DEPTH=8192 ,parameter integer COMMAND_R_ADDRWIDTH=10,parameter integer COMMAND_R_DATAWIDTH=128,parameter integer COMMAND_R_DEPTH=1024,parameter integer COMMAND_W_ADDRWIDTH=12,parameter integer COMMAND_W_DATAWIDTH=32,parameter integer COMMAND_W_DEPTH=4096 ,parameter integer DACMON_R_ADDRWIDTH=12,parameter integer DACMON_R_DATAWIDTH=32,parameter integer DACMON_R_DEPTH=4096,parameter integer DACMON_W_ADDRWIDTH=9,parameter integer DACMON_W_DATAWIDTH=256,parameter integer DACMON_W_DEPTH=512 ,parameter integer QDRVENV_R_ADDRWIDTH=10,parameter integer QDRVENV_R_DATAWIDTH=512,parameter integer QDRVENV_R_DEPTH=1024,parameter integer QDRVENV_W_ADDRWIDTH=14,parameter integer QDRVENV_W_DATAWIDTH=32,parameter integer QDRVENV_W_DEPTH=16384 ,parameter integer QDRVFREQ_R_ADDRWIDTH=9,parameter integer QDRVFREQ_R_DATAWIDTH=512,parameter integer QDRVFREQ_R_DEPTH=512,parameter integer QDRVFREQ_W_ADDRWIDTH=13,parameter integer QDRVFREQ_W_DATAWIDTH=32,parameter integer QDRVFREQ_W_DEPTH=8192 ,parameter integer RDLOENV_R_ADDRWIDTH=12,parameter integer RDLOENV_R_DATAWIDTH=128,parameter integer RDLOENV_R_DEPTH=4096,parameter integer RDLOENV_W_ADDRWIDTH=14,parameter integer RDLOENV_W_DATAWIDTH=32,parameter integer RDLOENV_W_DEPTH=16384 ,parameter integer RDLOFREQ_R_ADDRWIDTH=9,parameter integer RDLOFREQ_R_DATAWIDTH=128,parameter integer RDLOFREQ_R_DEPTH=512,parameter integer RDLOFREQ_W_ADDRWIDTH=11,parameter integer RDLOFREQ_W_DATAWIDTH=32,parameter integer RDLOFREQ_W_DEPTH=2048 ,parameter integer RDRVENV_R_ADDRWIDTH=12,parameter integer RDRVENV_R_DATAWIDTH=512,parameter integer RDRVENV_R_DEPTH=4096,parameter integer RDRVENV_W_ADDRWIDTH=16,parameter integer RDRVENV_W_DATAWIDTH=32,parameter integer RDRVENV_W_DEPTH=65536 ,parameter integer RDRVFREQ_R_ADDRWIDTH=9,parameter integer RDRVFREQ_R_DATAWIDTH=512,parameter integer RDRVFREQ_R_DEPTH=512,parameter integer RDRVFREQ_W_ADDRWIDTH=13,parameter integer RDRVFREQ_W_DATAWIDTH=32,parameter integer RDRVFREQ_W_DEPTH=8192)(
    input clk,
    input reset,
    input[32:0] mem_write_data,
    input[15:0] mem_write_addr,
    input[2:0] proc_write_sel, //index proc cores
    input[2:0] mem_write_sel, //0 for cmd, 1 for env, 2 for freq, etc
    input mem_write_en,
    input[ADC_AXIS_DATAWIDTH-1:0] adc20,
    input[ADC_AXIS_DATAWIDTH-1:0] adc21,
    output[DAC_AXIS_DATAWIDTH-1:0] dac20,
    output[DAC_AXIS_DATAWIDTH-1:0] dac22,
    output[DAC_AXIS_DATAWIDTH-1:0] dac30);

    iflocalbus lb();
    ifdspregs regs(.lb(lb));
    ifdsp dspif();

    //instantiate 3x qdrv elem mems
    genvar i;
    generate for(i=0; i<3; i=i+1) begin
        wire cmd_wen, env_wen, freq_wen;
        assign cmd_wen = (proc_write_sel == i) & (mem_write_sel == 0) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(4), .DOUT_ADDR_WIDTH(COMMAND_R_ADDRWIDTH), .READ_LATENCY(2))
            cmd_mem(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[COMMAND_W_ADDRWIDTH-1:0]),
                .write_enable(cmd_wen), .read_addr(dspif.addr_command[i]), .read_data(dspif.data_command[i]));
        assign env_wen = (proc_write_sel == i) & (mem_write_sel == 1) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(QDRVENV_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(QDRVENV_R_ADDRWIDTH), .READ_LATENCY(2))
            env_mem(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[QDRVENV_W_ADDRWIDTH-1:0]),
                .write_enable(env_wen), .read_addr(dspif.addr_qdrvenv[i]), .read_data(dspif.data_qdrvenv[i]));
        assign freq_wen = (proc_write_sel == i) & (mem_write_sel == 2) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(QDRVFREQ_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH), .READ_LATENCY(2))
            freq_mem(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[QDRVFREQ_W_ADDRWIDTH-1:0]),
                .write_enable(freq_wen), .read_addr(dspif.addr_qdrvfreq[i]), .read_data(dspif.data_qdrvfreq[i]));

    end
    endgenerate


    assign dac20 = dspif.dac20;
    assign dac22 = dspif.dac22;
    assign dac30 = dspif.dac30;
    assign dspif.clk = clk;
    assign dspif.reset = reset;
    assign regs.stb_start = reset;

    dsp dspmod(.regs(regs), .dspif(dspif));

endmodule



