`timescale 1 ns / 1 ps
module normalizer #(parameter STATEDISC_IN_DATAWIDTH=32,parameter STATEDISC_OUT_DATAWIDTH=18) (
    ifsd.sd sdif,
    // clk,
    // stb_start,
    // accumulated_input,
    // normalized_output,
    // NN_startTrigger,

    // input clk,
    input stb_start,
    input [(STATEDISC_IN_DATAWIDTH*2)-1:0] accumulated_input,
    output [(STATEDISC_OUT_DATAWIDTH*2)-1:0] normalized_output,
    output NN_startTrigger
);
wire signed [STATEDISC_IN_DATAWIDTH:0] minimumI;
wire signed [STATEDISC_IN_DATAWIDTH:0] minimumQ;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] sumI = 0;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] sumQ = 0;
reg signed [(STATEDISC_OUT_DATAWIDTH*2)-1:0] normalizedI = 0;
reg signed [(STATEDISC_OUT_DATAWIDTH*2)-1:0] normalizedQ = 0;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] dataI = 0;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] dataQ = 0;

reg delay1 = 0;
reg delay2 = 0;
reg delay3 = 0;
reg delay4 = 0;
reg startNN = 0;

always @(posedge sdif.clk) begin
    delay1 <= stb_start;
    delay2 <= delay1;
    delay3 <= delay2;
    delay4 <= delay3;
    startNN <= delay4;
end

assign minimumI = sdif.sdpara[65];
assign minimumQ = sdif.sdpara[66];
assign NN_startTrigger = startNN;

assign normalized_output = {normalizedQ[35:18],normalizedI[35:18]};

reg signed [STATEDISC_IN_DATAWIDTH-1:0] sumI_r = 0;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] sumQ_r = 0;

always @(posedge sdif.clk) begin  

    dataI <= accumulated_input[31:0];
    sumI_r <= dataI + minimumI;
    // sumI_r <= $signed(accumulated_input[31:0]) + $signed(minimumI);
    sumI <= sumI_r; 
    normalizedI <= sumI << 11;
    
    dataQ <= accumulated_input[63:32];
    sumQ_r <= dataQ + minimumQ;
    // sumQ_r <= $signed(accumulated_input[63:32]) + $signed(minimumQ);
    sumQ <= sumQ_r;
    normalizedQ <= sumQ << 11;
end

endmodule

