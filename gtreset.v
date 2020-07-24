module gtreset(input stableclk
,input readycriteria
,input resetin
,output resetout
,input donecriteria
,output done
,output donestrobe
);
parameter RESETLENGTH=1;
parameter READYLENGTH=10;
reg [15:0] clkcnt=0;
reg [15:0] reset_cnt=0;
reg [READYLENGTH-1:0] ready_sr=0;
reg [READYLENGTH-1:0] waityforready=0;

reg resethold=0;
wire start=((&ready_sr) &resethold);
reg start_r=0;
wire reset_cnt0=~|reset_cnt ;
reg resetin_d=0;
reg busy=0;
reg done_r=0;
reg done_rd=0;
always @(posedge stableclk) begin
	resetin_d<=resetin;
	ready_sr<=resetin&~resetin_d ? {READYLENGTH{1'b0}} : {ready_sr[READYLENGTH-2:0],readycriteria};
	resethold<=resetin ? 1'b1 : resetout? 1'b0 : resethold;

	start_r<=start;
	reset_cnt<=(start&~start_r) ? RESETLENGTH : reset_cnt0 ? 0 : reset_cnt-1;
	if (start) begin
		busy<=1;
		done_r<=0;
	end
	else if (busy & donecriteria) begin
		done_r<=1;
		busy<=0;
	end


	done_rd<=done_r;

end
assign resetout=|reset_cnt;
assign done=done_r;
assign donestrobe=done_r&~done_rd;
endmodule
