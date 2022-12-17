module dsp_tb#(
	`include "plps_para.vh"
	,`include "bram_para.vh")(
    input clk,
    input reset,
    input stb_start,
    input[32:0] mem_write_data,
    input[15:0] mem_write_addr,
    input[2:0] proc_write_sel, //index proc cores
    input[2:0] mem_write_sel, //0 for cmd, 1 for env, 2 for freq, etc
    input mem_write_en,
    input[ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1],
    output[DAC_AXIS_DATAWIDTH-1:0] dac[0:NDAC-1]);

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


    assign dac = dspif.dac;
    assign dspif.adc = adc;
    assign dspif.clk = clk;
    assign dspif.reset = reset;
    assign dspif.stb_start = stb_start;

    generate for(i=0; i<3; i=i+1) begin
        assign dspif.coef[i][i] = 32'h7fff0000;
    end
    endgenerate

    dsp dspmod(.dspif(dspif));

endmodule



