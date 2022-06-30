/**
* Contains the modules necessary to control a single DAC I/Q pair:
*   - distributed processor core
*   - command buffer memory
*   - element.v -- CORDIC wave generation + envelope memory
*
* Addressing scheme:
* |1b sel cmd/wave| ------------ 12b wave addr -------------|
*   0 for cmd     | 2b resrv | 2b cmd_sel | 8b buffer addr  |
*   1 for wave
* 
**/
module dsp_unit #(
    parameter CMD_ADDR_WIDTH=8,
    parameter MEM_ADDR_WIDTH=13,
    parameter DATA_WIDTH=32,
    parameter DAC_WORD_WIDTH=64)(
    sync_iface.proc sync,
    fproc_iface.proc fproc,
    input clk,
    input reset,
    input[12:0] mem_write_addr,
    input[DATA_WIDTH-1:0] mem_write_data,
    input mem_write_en,
    output[DAC_WORD_WIDTH-1:0] dac_i,
    output[DAC_WORD_WIDTH-1:0] dac_q)

    localparam CMD_MEM_WIDTH = 32;
    localparam MEM_TO_CMD = 4;
    localparam REG_ADDR_WIDTH = 4;
    localparam SYNC_BARRIER_WIDTH = 8;

    //wire declarations
    wire[63:0] cmd_out;
    wire[71:0] cmd_raw_out;
    wire cmd_strobe;
    wire[CMD_ADDR_WIDTH-1:0] cmd_buffer_addr;
    wire[1:0] cmd_mem_sel;

    //proc side
    cmd_mem_iface #(.CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .MEM_WIDTH(CMD_MEM_WIDTH), 
        .MEM_TO_CMD(MEM_TO_CMD)) memif();
    proc #(.DATA_WIDTH(DATA_WIDTH), .CMD_WIDTH(CMD_MEM_WIDTH*MEM_TO_CMD), 
        .CMD_ADDR_WIDTH(CMD_ADDR_WIDTH), .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
        .SYNC_BARRIER_WIDTH(SYNC_BARRIER_WIDTH)) dpr(.clk(clk), .reset(reset),
        .cmd_iface(memif), .cmd_out(cmd_raw_out), .cstrobe_out(cmd_strobe), 
        .fproc(fproc), .sync(sync));
        
    assign cmd_buffer_addr = mem_write_addr[CMD_ADDR_WIDTH-1:0];
    assign cmd_mem_sel = mem_write_addr[CMD_ADDR_WIDTH+1:CMD_ADDR_WIDTH];
    genvar i;
    generate for(i = 0; i < MEM_TO_CMD; i = i + 1) 
        wire cmd_write_enable = (cmd_mem_sel == i) & (mem_write_addr[12] == 0) 
                                & mem_write_en;
        cmd_mem #(.CMD_WIDTH(MEM_WIDTH), .ADDR_WIDTH(CMD_ADDR_WIDTH)) mem(.clk(clk), 
            .write_enable(cmd_write_enable), .cmd_in(mem_write_data), 
            .write_address(cmd_buffer_addr), .read_address(memif.instr_ptr), 
            .cmd_out(memif.mem_bus[i]));
    endgenerate

    //DSP element side
    assign cmd_out = cmd_raw_out[71:8];    
    element elem(.clk(clk), .command(cmd_out), .cstrobe(cmd_strobe), .active(),
        .collision(), .waddr(mem_write_addr[11:0]), .wdata(mem_write_data),
        .wstrobe(mem_write_en & (mem_write_addr[12] == 1)), .xout(dac_i), 
        .yout(dac_q), .qsel(), .daczero());


endmodule
