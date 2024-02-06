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
// reg signed [STATEDISC_IN_DATAWIDTH-1:0] minimumI_w;
// reg signed [STATEDISC_IN_DATAWIDTH-1:0] minimumQ_w;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] minimumI;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] minimumQ;
reg [(STATEDISC_IN_DATAWIDTH * 2):0] sumI = 0;
reg [(STATEDISC_IN_DATAWIDTH * 2):0] sumQ = 0;
reg signed [(STATEDISC_OUT_DATAWIDTH*2)-1:0] normalizedI = 0;
reg signed [(STATEDISC_OUT_DATAWIDTH*2)-1:0] normalizedQ = 0;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] dataI = 0;
reg signed [STATEDISC_IN_DATAWIDTH-1:0] dataQ = 0;
wire [4:0] NI; 
wire [4:0] NQ; 

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

assign NI = sdif.sdpara[65];
assign NQ = sdif.sdpara[66];
assign NN_startTrigger = startNN;
assign normalized_output = {normalizedI[35:18],normalizedQ[35:18]};

reg [(STATEDISC_IN_DATAWIDTH * 2):0] sumI_r = 0;
reg [(STATEDISC_IN_DATAWIDTH * 2):0] sumQ_r = 0;

always @(posedge sdif.clk) begin  
    dataI <= accumulated_input[63:32];
    // minimumI <= minimumI_w;
    minimumI <= (1 >> NI) - 1;
    sumI_r <= dataI + minimumI;
    sumI <= sumI_r; 
    // normalizedI <= sumI << 11;
    normalizedI <= (sumI << 30) >> NI;

    
    dataQ <= accumulated_input[31:0];
    // minimumQ <= minimumQ_w;
    minimumQ <= (1 >> NQ) - 1;
    sumQ_r <= dataQ + minimumQ;
    sumQ <= sumQ_r;
    // normalizedQ <= sumQ << 11;
    normalizedQ <= (sumQ << 30) >> NQ;

end

endmodule

