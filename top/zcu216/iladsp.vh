generate
if (DEBUG=="true") begin
    iladsp iladsp(.clk(dspif.clk)
,.probe0(adc[0])  // WIDTH 16
,.probe1(dspif.adc[0])  // WIDTH 16
,.probe2(dspif.dac[0])  // WIDTH 16
,.probe3(dspif.dac[1])  // WIDTH 16
,.probe4(dspif.dac[2])  // WIDTH 16
,.probe5(dspif.dac[3])  // WIDTH 16
,.probe6(dspif.stb_start)  // WIDTH 1
,.probe7(state)  // WIDTH 4
,.probe8(nextstate)  // WIDTH 4
,.probe9(procreset)  // WIDTH 1
,.probe10(state_dbg[0])  // WIDTH 4
,.probe11(state_dbg[1])  // WIDTH 4
,.probe12(state_dbg[2])  // WIDTH 4
,.probe13(state_dbg[3])  // WIDTH 4
,.probe14(nextstate_dbg[0])  // WIDTH 4
,.probe15(nextstate_dbg[1])  // WIDTH 4
,.probe16(nextstate_dbg[2])  // WIDTH 4
,.probe17(nextstate_dbg[3])  // WIDTH 4
,.probe18(acqpztif[0].addr)  // WIDTH 13
,.probe19(acqpztif[0].data)  // WIDTH 64
,.probe20(acqpztif[0].state)  // WIDTH 5
,.probe21(acqpztif[0].nextstate)  // WIDTH 5
,.probe22(stbprocend)  // WIDTH 16
,.probe23(procdone)  // WIDTH 16
,.probe24(nobusy)  // WIDTH 16
    );
end
endgenerate
