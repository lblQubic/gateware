module dsp_sim_toplevel#(
	`include "plps_para.vh"
	,`include "bram_para.vh")(
    input clk,
    input reset,
    input stb_start,
    input[31:0] nshot,
    input[31:0] mem_write_data,
    input[15:0] mem_write_addr,
    input[2:0] proc_write_sel, //index proc cores
    input[2:0] mem_write_sel, //0 for cmd, 1 for env, 2 for freq, etc
    input mem_write_en,
    input[12:0] buf_read_addr,
    input[ADC_AXIS_DATAWIDTH-1:0] adc[0:NADC-1],
    output[DAC_AXIS_DATAWIDTH-1:0] dac[0:NDAC-1],
    output[ACCBUF_W_DATAWIDTH-1:0] acc_read_data[0:NPROC-1],
    output[ACQBUF_W_DATAWIDTH-1:0] acq_read_data[0:NADC-1]);

    ifdsp dspif();

    //instantiate 3x qdrv elem mems
    genvar i;
    generate for(i=0; i<3; i=i+1) begin
        wire cmd_wen, env_qdrv_wen, freq_qdrv_wen, env_rdrv_wen, freq_rdrv_wen, env_rdlo_wen, freq_rdlo_wen;
        assign cmd_wen = (proc_write_sel == i) & (mem_write_sel == 0) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(4), .DOUT_ADDR_WIDTH(COMMAND_R_ADDRWIDTH), .READ_LATENCY(2))
            cmd_mem(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[COMMAND_W_ADDRWIDTH-1:0]),
                .write_enable(cmd_wen), .read_addr(dspif.addr_command[i]), .read_data(dspif.data_command[i]));

        assign env_qdrv_wen = (proc_write_sel == i) & (mem_write_sel == 1) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(QDRVENV_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(QDRVENV_R_ADDRWIDTH), .READ_LATENCY(2))
            env_mem_qdrv(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[QDRVENV_W_ADDRWIDTH-1:0]),
                .write_enable(env_qdrv_wen), .read_addr(dspif.addr_qdrvenv[i]), .read_data(dspif.data_qdrvenv[i]));
        assign freq_qdrv_wen = (proc_write_sel == i) & (mem_write_sel == 2) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(QDRVFREQ_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH), .READ_LATENCY(2))
            freq_mem_qdrv(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[QDRVFREQ_W_ADDRWIDTH-1:0]),
                .write_enable(freq_qdrv_wen), .read_addr(dspif.addr_qdrvfreq[i]), .read_data(dspif.data_qdrvfreq[i]));

        assign env_rdrv_wen = (proc_write_sel == i) & (mem_write_sel == 3) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(RDRVENV_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(RDRVENV_R_ADDRWIDTH), .READ_LATENCY(2))
            env_mem_rdrv(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[RDRVENV_W_ADDRWIDTH-1:0]),
                .write_enable(env_rdrv_wen), .read_addr(dspif.addr_rdrvenv[i]), .read_data(dspif.data_rdrvenv[i]));
        assign freq_rdrv_wen = (proc_write_sel == i) & (mem_write_sel == 4) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(RDRVFREQ_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH), .READ_LATENCY(2))
            freq_mem_rdrv(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[RDRVFREQ_W_ADDRWIDTH-1:0]),
                .write_enable(freq_rdrv_wen), .read_addr(dspif.addr_rdrvfreq[i]), .read_data(dspif.data_rdrvfreq[i]));

        assign env_rdlo_wen = (proc_write_sel == i) & (mem_write_sel == 5) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(RDLOENV_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(RDLOENV_R_ADDRWIDTH), .READ_LATENCY(2))
            env_mem_rdlo(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[RDLOENV_W_ADDRWIDTH-1:0]),
                .write_enable(env_rdlo_wen), .read_addr(dspif.addr_rdloenv[i]), .read_data(dspif.data_rdloenv[i]));
        assign freq_rdlo_wen = (proc_write_sel == i) & (mem_write_sel == 6) & mem_write_en;
        aligned_ram #(.DIN_WIDTH(32), .N_DIN_TO_DOUT(RDLOFREQ_R_DATAWIDTH/32), .DOUT_ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH), .READ_LATENCY(2))
            freq_mem_rdlo(.clk(clk), .write_data(mem_write_data), .write_addr(mem_write_addr[RDLOFREQ_W_ADDRWIDTH-1:0]),
                .write_enable(freq_rdlo_wen), .read_addr(dspif.addr_rdlofreq[i]), .read_data(dspif.data_rdlofreq[i]));

        aligned_ram #(.DIN_WIDTH(ACCBUF_W_DATAWIDTH), .N_DIN_TO_DOUT(1), .DOUT_ADDR_WIDTH(ACCBUF_W_ADDRWIDTH), .READ_LATENCY(1))
            acc_buf(.clk(clk), .write_data(dspif.data_accbuf[i]), .write_addr(dspif.addr_accbuf[i]),
                .write_enable(dspif.we_accbuf[i]), .read_addr(buf_read_addr[ACCBUF_W_ADDRWIDTH-1:0]), .read_data(acc_read_data[i]));

    end
    endgenerate

    generate for(i=0; i<NADC; i=i+1)
        aligned_ram #(.DIN_WIDTH(ACQBUF_W_DATAWIDTH), .N_DIN_TO_DOUT(1), .DOUT_ADDR_WIDTH(ACQBUF_W_ADDRWIDTH), .READ_LATENCY(1))
            acq_buf(.clk(clk), .write_data(dspif.data_acqbuf[i]), .write_addr(dspif.addr_acqbuf[i]),
                .write_enable(dspif.we_acqbuf[i]), .read_addr(buf_read_addr[ACQBUF_W_ADDRWIDTH-1:0]), .read_data(acq_read_data[i]));
    endgenerate



    assign dac = dspif.dac;
    assign dspif.adc = adc;
    assign dspif.clk = clk;
    assign dspif.reset = reset;
    assign dspif.resetacc = reset;
    assign dspif.stb_start = stb_start;
    assign dspif.nshot = nshot;
    assign dspif.shift = 15;

    generate for(i=0; i<3; i=i+1) begin
        assign dspif.coef[i][i] = 32'h7fff0000;
    end
    endgenerate

    generate for (genvar i=0;i<8;i=i+1) begin
         for(genvar j=0;j<65;j=j+1) begin
            assign dspif.weight_bias[i][j] = 18'h3FFFF;
        end

    end
    endgenerate

     generate for (genvar i=0;i<8;i=i+1) begin
         for(genvar j=0;j<2;j=j+1) begin
            assign dspif.normalizer_min[i][j] = 32'h3FF;
        end
    end
    endgenerate

    dsp dspmod(.dspif(dspif));

endmodule




