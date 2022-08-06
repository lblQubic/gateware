import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
from dsp_drivers import generate_clock, DSPDriver

class DSPUnitSimDriver(DSPDriver):
    
    def __init__(self, dut, mon_signals=None):
        super().__init__(dut, mon_signals)

    async def load_fproc(self, dspunit_ind, fproc_data, fproc_ready):
        #dspunit_ind = self.n_dspunit - dspunit_ind - 1 #indexing is backwards on module ports
        if len(fproc_data) != len(fproc_ready):
            raise Exception('data and ready arrays must be same length')
        for i in range(len(fproc_data)):
            #ipdb.set_trace()
            self._dut.fproc_data[dspunit_ind].value = int(fproc_data[i])
            self._dut.fproc_ready[dspunit_ind].value = int(fproc_ready[i])
            await RisingEdge(self._dut.clk)

    async def load_fproc_async(self, dspunit_ind, fproc_data):
        #TODO: this will probably hang if enough ready signals aren't 
        # provided...
        #dspunit_ind = self.n_dspunit - dspunit_ind - 1 #indexing is backwards on module ports
        for i in range(len(fproc_data)):
            await RisingEdge(self._dut.fproc_enable[dspunit_ind])
            self._dut.fproc_data[dspunit_ind].value = fproc_data[i]
            self._dut.fproc_ready[dspunit_ind].value = fproc_ready[i]



