module ethernetsw(iethernet hardware,iethernet arpethernet,iethernet ipv4ethernet,input sel);
assign arpethernet.clk=hardware.clk;
assign ipv4ethernet.clk=hardware.clk;
assign hardware.tx.dst=sel==0 ? arpethernet.tx.src : ipv4ethernet.tx.src;
assign arpethernet.rx.dst=hardware.rx.src;
assign ipv4ethernet.rx.dst=hardware.rx.src;
endmodule
