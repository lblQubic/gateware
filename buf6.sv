`timescale 1ns / 1ns

interface lbbuf #(parameter DWW=8
	,parameter DWR=32
	,parameter AWW=8
	,parameter MAXPERFRAME=184
	)(
		input reset
	);
	localparam AWR=DWW>DWR ? (AWW+$clog2(DWW/DWR)) : (AWW-$clog2(DWR/DWW));
	localparam SZR=(32'b1<<AWR)-1;
	localparam WMAX=$clog2(MAXPERFRAME);
	ipingpong_buf #(.DWW(DWW),.DWR(DWR),.AWW(AWW)) buf0(reset);
	wire stb_read;
	reg bufrden=0;
	reg stb_read_d=0;
	always @(posedge buf0.rclk)  begin
		stb_read_d<=stb_read;
		if (stb_read_d)
			bufrden<=1'b1;
		else if (buf0.raddrlast_sr[0]) begin
			bufrden<=1'b0;
		end
	end
	assign buf0.rd.en=bufrden;
	wire rdbusy=bufrden|(|buf0.raddrlast_sr[2:0]);
	reg [AWR-1:0] rdleft=0;
	reg [DWR-1:0] header=0;
	reg [WMAX-1:0] cntperframe=0;
	reg [DWR-1:0] readdata=0;
	reg readdv=0;
/*	always @(posedge buf0.rclk) begin
		if (stb_rdad_d) begin
			if (buf0.rd.dv) 
		end
		else begin
		end
	end
	*/
endinterface


interface ibufstatus();
	wire writable;
	wire readable;
endinterface
interface ipingpong_buf #(parameter DWW=8
	,parameter DWR=32
	,parameter AWW=8
	)(
		input reset
	);
	localparam AWR=DWW>DWR ? (AWW+$clog2(DWW/DWR)) : (AWW-$clog2(DWR/DWW));
	wire rclk;
	wire wclk;
	ibufio #(.DW(DWR),.AW(AWR))rd(rclk);
	ibufio #(.DW(DWW),.AW(AWW))wr(wclk);
	ibufstatus status();
	idpram #(.DWW(DWW),.DWR(DWR),.AWW(AWW+1))
	dpram();
	assign dpram.wclk=wclk;
	assign dpram.rclk=rclk;
	localparam WDATA=4'd0;
	localparam WLAST=4'd1;
	localparam WSKIP=4'd2;
	localparam RDATA=4'd3;
	localparam RLAST=4'd4;
	localparam RSKIP=4'd5;
	reg [3:0] wstate=WDATA;
	reg [3:0] wnext=WDATA;
	reg [3:0] rstate=RSKIP;
	reg [3:0] rnext=RSKIP;

	reg [1:0] readable=0;
	reg [1:0] writable=2'b11;
	reg [1:0] readable_w=0;
	reg [1:0] readable_r=0;
	reg [1:0] readable_rd=0;
	reg [1:0] readable_x=0;
	reg [1:0] readable_xd=0;
	reg [1:0] writable_xd=2'b11;
	reg [1:0] writable_x=2'b11;
	reg [1:0] writable_w=2'b11;
	reg [1:0] writable_wd=2'b11;
	reg [1:0] writable_r=2'b11;
	always @(posedge wclk) begin
		writable_x<=writable_r;
		writable_xd<=writable_x;
		writable_wd<=writable_w;
	end
	always @(posedge rclk) begin
		readable_x<=readable_w;
		readable_xd<=readable_x;
		readable_rd<=readable_r;
	end
	genvar il;
	generate
	for (il=0;il<2;il=il+1) begin
		always @(posedge wclk or posedge reset) begin
			if (reset) begin
				writable[il]<=1'b1;
			end
			else begin
				if (writable_x[il]&~writable_xd[il])
					writable[il]<=1'b1;
				else if (~writable_w[il]&writable_wd[il])
					writable[il]<=1'b0;
			end
		end
		always @(posedge rclk or posedge reset) begin
			if (reset) begin
				readable[il]<=1'b0;
			end
			else begin
				if (readable_x[il]&~readable_xd[il])
					readable[il]<=1'b1;
				else if (~readable_r[il]&readable_rd[il])
					readable[il]<=1'b0;
			end
		end
	end
	endgenerate
	reg [AWW:0] waddr=0;
	reg [AWW:0] waddr_d=0;
	reg [AWW:0] waddr_next=1;
	reg [DWW-1:0] wdata=0;
	reg wen=0;
	reg [AWR:0] raddr=0;
	reg [AWR:0] raddr_d=0;
	reg [AWR:0] raddr_next=1;
	reg rdv=0;
	reg ren=0;
	wire wbank=waddr[AWW];
	wire rbank=raddr[AWR];
	wire waddrlast= &waddr_next[AWW-1:0];
	wire raddrlast= &raddr_next[AWR-1:0];
	wire waddrlast_w;
	wire raddrlast_w;
	reg [4:0] waddrlast_sr=0;
	reg [4:0] raddrlast_sr=0;
	always @(posedge wclk) begin
		waddrlast_sr<={waddrlast_sr[3:0],waddrlast};
	end
	always @(posedge rclk) begin
		raddrlast_sr<={raddrlast_sr[3:0],raddrlast};
	end
	assign waddrlast_w=waddrlast_sr[2];
	assign raddrlast_w=raddrlast_sr[2];
	always @(posedge wclk or posedge reset) begin
		if (reset) begin
			wstate<=WDATA;
		end
		else begin
			wstate<=wnext;
		end
	end
	always @(*) begin
		case (wstate)
			WDATA: wnext= waddrlast ? WLAST : WDATA ;
			WLAST: wnext= (writable[waddr_next[AWW]]) ? WDATA : WSKIP;
			WSKIP: wnext= (writable[waddr_next[AWW]]) ? WDATA : WSKIP;
		endcase
	end
	always @(posedge wclk or posedge reset) begin
		if (reset) begin
			waddr<=0;
			waddr_next<=1;
			readable_w<=2'b0;
			writable_w<=2'b11;
		end
		else begin
			case (wnext)
				WDATA: begin
					if (wr.en) begin
						waddr<=waddr+1;
						waddr_next<=waddr_next+1;
						wdata<=wr.data;
						if (~&waddr[AWW-1:0]) begin
							readable_w[waddr[AWW]]<=1'b0;
							writable_w[waddr[AWW]]<=1'b1;
						end
					end
					wen<=wr.en ;
				end
				WLAST: begin
					wen<=wr.en;
					if (wr.en) begin
						waddr<=waddr+1 ;
						wdata<=wr.data;
						waddr_next<=waddr_next+1;
						readable_w[waddr[AWW]]<=1'b1;
						writable_w[waddr[AWW]]<=1'b0;
					end
				end
				WSKIP: begin
					wen<=1'b0;
				end

			endcase
		end
		waddr_d<=waddr;
	end
	always @(posedge rclk or posedge reset) begin
		if (reset) begin
			rstate<=RSKIP;
		end
		else begin
			rstate<=rnext;
		end
	end
	always @(*) begin
		case (rstate)
			RDATA: rnext= raddrlast ? RLAST : RDATA ;
			RLAST: rnext= (readable[raddr_next[AWR]]) ? RDATA : RSKIP;
			RSKIP: rnext= (readable[raddr_next[AWR]]) ? RDATA : RSKIP;
		endcase
	end
	always @(posedge rclk or posedge reset) begin
		if (reset) begin
			raddr<=0;
			raddr_next<=1;
			writable_r<=2'b11;
			readable_r<=2'b0;

		end
		else begin
			case (rnext)
				RDATA: begin
					if (rd.en) begin
						raddr<=raddr+1;
						raddr_next<=raddr_next+1;
						if (~&raddr[AWR-1:0]) begin
							writable_r[raddr[AWR]]<=1'b0;
							readable_r[raddr[AWR]]<=1'b1;
						end
					end
					ren<=rd.en ;
				end
				RLAST: begin
					if (rd.en) begin
						raddr<=raddr+1;
						raddr_next<=raddr_next+1;
						writable_r[raddr[AWR]]<=1'b1;
						readable_r[raddr[AWR]]<=1'b0;
					end
					ren<=rd.en ;
				end
				RSKIP: begin
					ren<=1'b0;
				end
			endcase
		end
		raddr_d<=raddr;
	end



	assign dpram.wr.data=wdata;
	assign dpram.wr.en=wen;
	assign dpram.wr.addr=waddr_d;

	assign rd.data=dpram.rd.data;
	assign rd.dv=dpram.rd.dv;
	assign dpram.rd.en=ren;
	assign dpram.rd.addr=raddr_d;

	assign status.writable=|writable;//[~waddr[AW]];
	assign status.readable=|readable;//[~raddr[AW]];

endinterface

interface ibufio #(parameter DW=8
	,parameter AW=8
	)(
		input clk
	);

	wire [DW-1:0] data;
	wire [AW-1:0] addr;
	wire dv;
	wire en;

	modport src ( input data,addr,dv,en
	);
	modport dst ( output data,addr
	);
endinterface


interface idpram
	#(parameter DWW=8
	,parameter DWR=32
	,parameter AWW=8
	,parameter BUFIN=0
	,parameter BUFOUT=1
	,parameter SIM=0
	)(
	);
	`define max(a,b) {(a) > (b) ? (a) : (b)}
	`define min(a,b) {(a) < (b) ? (a) : (b)}
	localparam AWR=DWW>DWR ? (AWW+$clog2(DWW/DWR)) : (AWW-$clog2(DWR/DWW));
	localparam SZW=(32'b1<<AWW)-1;
	localparam SZR=(32'b1<<AWR)-1;
	localparam DWMIN=`min(DWR,DWW);
	localparam SZMAX=`max(SZR,SZW);

	//	localparam SZ=(32'b1<<AWW)-1;
	//	localparam AWR=DWW*AWW/DWR;
	localparam RATIO=DWW>DWR ? DWW/DWR : DWR/DWW;
	localparam WRATIO=$clog2(RATIO);
	reg [DWMIN-1:0] mem[SZMAX:0];
	integer k=0;
	initial begin
		for (k=0;k<SZMAX+1;k=k+1) begin
			mem[k]=0;
		end
	end
	wire wclk;
	wire rclk;

	ibufio #(.DW(DWW),.AW(AWW)) wr(wclk);
	ibufio #(.DW(DWR),.AW(AWR)) rd(rclk);
	wire [DWW-1:0] dina_w;
	wire [AWW-1:0] addra_w;
	wire [AWR-1:0] addrb_w;
	wire renb_w;
	wire wena_w;

	if (BUFIN) begin
		reg [AWW-1:0] addra_r=0;
		reg [AWR-1:0] addrb_r=0;
		reg [DWW-1:0] dina_r=0;
		reg wena_r=0;
		reg renb_r=0;
		always @(posedge wclk) begin
			addra_r<=wr.addr;
			wena_r<=wr.en;
			dina_r<=wr.data;
		end
		always @(posedge rclk) begin
			addrb_r<=rd.addr;
			renb_r<=rd.en;
		end
		assign addra_w=addra_r;
		assign wena_w=wena_r;
		assign dina_w=dina_r;
		assign addrb_w=addrb_r;
		assign renb_w=renb_r;

	end
	else begin
		assign addra_w=wr.addr;
		assign wena_w=wr.en;
		assign dina_w=wr.data;
		assign addrb_w=rd.addr;
		assign renb_w=rd.en;

	end
	wire [DWR-1:0] doutb_w;

	reg rdv=0;
	reg [DWR-1:0] doutb_r=0;
	wire [WRATIO*RATIO-1:0] waddaddr;
	wire [WRATIO*RATIO-1:0] raddaddr;
	genvar i,j;
	generate
	if (DWW <= DWR) begin
		always @(posedge wclk) begin
			if (wena_w) begin
				mem[addra_w]<=dina_w;
			end
		end
	end
	else begin
		for (i=0;i<RATIO;i++) begin: write
			assign waddaddr[(i+1)*WRATIO-1:i*WRATIO]=i;
			always @(posedge wclk) begin
				if (wena_w) begin
					mem[{addra_w,waddaddr[(i+1)*WRATIO-1:i*WRATIO]}]=dina_w[(i+1)*DWR-1:i*DWR];
				end
			end
		end
	end
	if (DWW >= DWR) begin
		assign doutb_w=mem[addrb_w];
	end
	else begin
		for (j=0;j<RATIO;j++) begin: read
			assign raddaddr[(j+1)*WRATIO-1:j*WRATIO]=j;
			assign doutb_w[(j+1)*DWMIN-1:j*DWMIN]=mem[{addrb_w,raddaddr[(j+1)*WRATIO-1:j*WRATIO]}];
		end
	end
	endgenerate
	always @(posedge rclk) begin
		if (renb_w) begin
			doutb_r<=doutb_w;
		end
		rdv<=renb_w;
	end
	assign rd.data=BUFOUT ? doutb_r : doutb_w;
	assign rd.dv=BUFOUT ? rdv : renb_w;
endinterface
