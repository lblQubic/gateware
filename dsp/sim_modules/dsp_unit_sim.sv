/** Addressing scheme:
* |log2(N_DSP_UNIT) unit sel |1b sel cmd/wave| ------------ 12b wave addr -------------|
*                              0 for cmd     | 2b resrv | 2b cmd_sel | 8b buffer addr  |
*                              1 for wave
* 
**/

module dsp_unit_sim#(
    parameter DATA_WIDTH=32,
    parameter DAC_WORD_WIDTH=64,
    parameter N_DSP_UNIT=8,
    parameter FPROC_ID_WIDTH=8)(
    input clk,
    input reset,
    input[12+$clog2(N_DSP_UNIT):0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    input[0:0] fproc_ready[N_DSP_UNIT-1:0], //[0:0] is there to force unpacked array (list) in cocotb
    input[DATA_WIDTH-1:0] fproc_data[N_DSP_UNIT-1:0],
    output[0:0] fproc_enable[N_DSP_UNIT-1:0],
    output[FPROC_ID_WIDTH-1:0] fproc_id[N_DSP_UNIT-1:0],
    output[DAC_WORD_WIDTH-1:0] dac_i[N_DSP_UNIT-1:0],
    output[DAC_WORD_WIDTH-1:0] dac_q[N_DSP_UNIT-1:0]);

    parameter LOG_N_DSP = $clog2(N_DSP_UNIT);

    sync_iface sync[N_DSP_UNIT-1:0];
    fproc_iface #(.FPROC_RESULT_WIDTH(DATA_WIDTH),
                  .FPROC_ID_WIDTH(FPROC_ID_WIDTH)) fproc[N_DSP_UNIT-1:0];

    genvar i;
    generate 
        for(i = 0; i < N_DSP_UNIT; i = i + 1) begin
            assign fproc[i].data = fproc_data[i];
            assign fproc[i].ready = fproc_ready[i];
            assign fproc_enable[i] = fproc[i].enable;
            assign fproc_id[i] = fproc[i].id;
            dsp_unit unit(.clk(clk), .reset(reset),
                .sync(sync[i]), .fproc(fproc[i]),
                .mem_write_addr(mem_write_addr[12:0]),
                .mem_write_data(mem_write_data),
                .mem_write_en(mem_write_en & (mem_write_addr[12+LOG_N_DSP:13] == i)),
                .dac_i(dac_i[i]), .dac_q(dac_q[i]));
        end
    endgenerate
        

endmodule
