`timescale 1ns / 100ps
module qubic_tb();
reg sysclk=0;
integer cc=0;
initial begin
	$dumpfile("chainreset.vcd");
	$dumpvars(17,qubic_tb);
	for (cc=0; cc<10000; cc=cc+1) begin
//	while (1) begin
		cc=cc+1;

		sysclk=0; #2.5;
		sysclk=1; #2.5;
	end
	$finish();
end
reg [31:0] clkcnt2=0;
wire [30:0] clkcnt=clkcnt2[31:1];
always @(sysclk) begin
	clkcnt2<=clkcnt2+1;
end

localparam NSTEP=3;

// chainreset cross wire 
wire [NSTEP-1:0] done;
wire [NSTEP-1:0] donestrobe;
wire [NSTEP-1:0] error;
wire [NSTEP-1:0] resetout;

wire [NSTEP-1:0] donecriteria={clkcnt==2500,clkcnt==1200,clkcnt==700};
wire [NSTEP-1:0] readycriteria={clkcnt>1500,clkcnt>200,clkcnt>500};
wire [NSTEP*16-1:0] readylength={16'd20,16'd10,16'd1};
//wire [NSTEP-1:0] resetin={clkcnt==120,clkcnt==300,clkcnt==100};
wire [NSTEP-1:0] resetin={donestrobe[1],donestrobe[0],clkcnt==100};
wire [NSTEP*16-1:0] resetlength={16'd200,16'd1,16'd10};
wire [NSTEP*32-1:0] timeout={32'd2800,32'd1500,32'd1000};
chainreset #(.NSTEP(NSTEP))
chainreset(.clk(sysclk)
,.done(done)
,.donecriteria(donecriteria)
,.donestrobe(donestrobe)
,.error(error)
,.readycriteria(readycriteria)
,.readylength(readylength)
,.resetin(resetin)
,.resetlength(resetlength)
,.resetout(resetout)
,.timeout(timeout)
);
endmodule
