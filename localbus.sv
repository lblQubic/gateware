interface localbus#(parameter LBCWIDTH=8,parameter LBAWIDTH=24,parameter LBDWIDTH=32)();

`include "localbus.vh"

modport cfg(output lbclk,lbwcmd,lbwvalid
,input lbrcmd,lbrready
,input test,test2,err,uartmode,xadcupdate,stb_i2cstart,i2cstart,i2cdatatx,clk4radio,i2cmux_reset_b,fmcdacen
,output xadctemp,xadcaux4,xadcaux12,i2cdatarx,i2crxvalid,fmcprsnt,fmcpgm2c
);
modport dsp(input test,test2,err
,output test1
);
endinterface
