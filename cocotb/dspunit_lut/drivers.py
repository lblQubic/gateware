import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
from dsp_drivers import generate_clock, DSPDriver

class DSPUnitLUTDriver(DSPDriver):
    
    def __init__(self, dut, mon_signals=None):
        super().__init__(dut, mon_signals)

    async def load_meas(self, meas_result, meas_valid):
        #dspunit_ind = self.n_dspunit - dspunit_ind - 1 #indexing is backwards on module ports
        if len(meas_result) != len(meas_valid):
            raise Exception('data and ready arrays must be same length')
        for i in range(len(meas_result)):
            #ipdb.set_trace()
            self._dut.meas.value = int(meas_result[i])
            self._dut.meas_valid.value = int(meas_valid[i])
            await RisingEdge(self._dut.clk)

