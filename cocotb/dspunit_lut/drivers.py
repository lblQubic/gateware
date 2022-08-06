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

    async def load_meas(self, meas_qb_ind, meas_result, meas_valid):
        #dspunit_ind = self.n_dspunit - dspunit_ind - 1 #indexing is backwards on module ports
        if len(meas_result) != len(meas_valid):
            raise Exception('data and ready arrays must be same length')
        if not np.all((meas_result==0) | (meas_result==1)):
            raise Exception('meas result must be 0 or 1')
        if not np.all((meas_valid==0) | (meas_valid==1)):
            raise Exception('meas valid must be 0 or 1')
        for i in range(len(meas_result)):
            #ipdb.set_trace()
            self._dut.meas.value = int(meas_result[i]) << meas_qb_ind
            self._dut.meas_valid.value = int(meas_valid[i]) << meas_qb_ind
            await RisingEdge(self._dut.clk)

