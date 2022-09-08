/** Addressing scheme:
* |log2(N_DSP_UNIT) unit sel |1b sel cmd/wave| ------------ 12b wave addr -------------|
*                              0 for cmd     | 2b resrv | 2b cmd_sel | 8b buffer addr  |
*                              1 for wave
* 
**/

module dsp_fproc_lut_sim#(
    parameter DATA_WIDTH=32,
    parameter DAC_WORD_WIDTH=64,
    parameter N_DSP_UNIT=5,
    parameter FPROC_ID_WIDTH=8)(
    input clk,
    input reset,
    input[12+$clog2(N_DSP_UNIT):0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    input[N_DSP_UNIT-1:0] meas,
    input[N_DSP_UNIT-1:0] meas_valid,
    output[DAC_WORD_WIDTH-1:0] dac_i[N_DSP_UNIT-1:0],
    output[DAC_WORD_WIDTH-1:0] dac_q[N_DSP_UNIT-1:0]);

    sync_iface sync[N_DSP_UNIT-1:0];
    fproc_iface #(.FPROC_RESULT_WIDTH(DATA_WIDTH),
                  .FPROC_ID_WIDTH(FPROC_ID_WIDTH)) fproc[N_DSP_UNIT-1:0];

    fproc_lut #(.N_CORES(N_DSP_UNIT)) lut(.clk(clk), .reset(reset), 
        .core(fproc), .meas(meas), .meas_valid(meas_valid));

    genvar i;
    generate 
        for(i = 0; i < N_DSP_UNIT; i = i + 1) begin
            dsp_unit unit(.clk(clk), .reset(reset),
                .sync(sync[i]), .fproc(fproc[i]),
                .mem_write_addr(mem_write_addr[12:0]),
                .mem_write_data(mem_write_data),
                .mem_write_en(mem_write_en & (mem_write_addr[12+$clog2(N_DSP_UNIT):13] == i)),
                .dac_i(dac_i[i]), .dac_q(dac_q[i]));
        end
    endgenerate
        

endmodule
