module ethernetsw(iethernet hardware,iethernet arpethernet);
wire [158-1:0] hardwarerx={hardware.rx.smac,hardware.rx.dmac,hardware.rx.ethertype,hardware.rx.data,hardware.rx.dven,hardware.rx.err,hardware.rx.crc,hardware.rx.crczero,hardware.rx.busy,hardware.rx.newframehead,hardware.rx.frameend};
wire [158-1:0] hardwaretx;
assign {hardware.rx.smac,hardware.rx.dmac,hardware.rx.ethertype,hardware.rx.data,hardware.rx.dven,hardware.rx.err,hardware.rx.crc,hardware.rx.crczero,hardware.rx.busy,hardware.rx.newframehead,hardware.rx.frameend}=hardwaretx;
wire [158-1:0] arpethernetrx={arpethernet.rx.smac,arpethernet.rx.dmac,arpethernet.rx.ethertype,arpethernet.rx.data,arpethernet.rx.dven,arpethernet.rx.err,arpethernet.rx.crc,arpethernet.rx.crczero,arpethernet.rx.busy,arpethernet.rx.newframehead,arpethernet.rx.frameend};
wire [158-1:0] arpethernettx;
assign {arpethernet.rx.smac,arpethernet.rx.dmac,arpethernet.rx.ethertype,arpethernet.rx.data,arpethernet.rx.dven,arpethernet.rx.err,arpethernet.rx.crc,arpethernet.rx.crczero,arpethernet.rx.busy,arpethernet.rx.newframehead,arpethernet.rx.frameend}=arpethernettx;

assign arpethernetrx=hardwarerx;
assign hardwaretx=arpethernettx;
endmodule
