import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
from sim_tools import unravel_dac

N_MAX_CMD = 10 #for flushing cmd buffer
N_CLKS = 500
CLK_CYCLE = 4

async def generate_clock(dut):
    for i in range(N_CLKS):
        dut.clk.value = 0
        await Timer(CLK_CYCLE, units='ns')
        dut.clk.value = 1
        await Timer(CLK_CYCLE, units='ns')
    dut._log.debug("clk cycle {}".format(i))

class DSPUnitDriver:
    """
    Class for running a program on a (simulated) 
    instance of a dsp_unit module in cocotb

    Attributes
    ----------
        dut : SimHandleBase
            top-level dsp_unit_sim module 
            under test
        self.mon_signals : dict -> [str : SimHandleBase]
            Dictionary of signals to monitor
                key: user assigned name
                value: SimHandleBase object (e.g. dut.dpr.regs)
        self.mon_data : dict -> [str : list]
            Dictionary of data corresponding to mon_signals;
            list indexed by clock cycle
        self.dac_i : numpy array
            shape: (n_dspunit, nsamples). values are signed 16-bit dac_i out
        self.dac_q : numpy array
            shape: (n_dspunit, nsamples). values are signed 16-bit dac_q out
    """
    def __init__(self, dut, mon_signals=None):
        self._dut = dut
        self._n_dspunit = len(self._dut.dac_i)
        self._dac_i_signal = self._dut.dac_i
        self._dac_q_signal = self._dut.dac_q
        self.mon_signals = {}
        self.mon_data = {}
        if mon_signals is not None:
            for name, sig in mon_signals.items():
                self.add_mon(name, sig)

    @property
    def n_dspunit(self):
        """
        want this to be readonly
        """
        return self._n_dspunit

    def add_mon(self, name, sig):
        self.mon_signals.update({name: sig})
        self.mon_data.update({name: []})

    async def flush_cmd_mem(self, ncmd=N_MAX_CMD):
        cmd_lists = []
        for i in range(self._n_dspunit):
            cmd_lists.append(np.zeros(ncmd, dtype=int))
        await self.load_program(cmd_lists)

    async def load_program(self, cmd_lists):
        """
        cmd_lists : list of lists
            Each element n is a list of commands for the nth
            DSP unit
        """
        if not (isinstance(cmd_lists[0], list) or isinstance(cmd_lists[0], np.ndarray)):
            raise Exception('cmd_lists must be list of lists')
        self._dut.reset.value = 1
        self._dut.mem_write_en.value = 1 
        for i, cmd_list in enumerate(cmd_lists):
            cmd_addr = 0
            for cmd in cmd_list:
                for j in range(4):
                    mem_val = (cmd >> (32*j)) & (2**32-1)
                    mem_addr = cmd_addr + (i << 13) + (j << 8)
                    self._dut.mem_write_data.value = int(mem_val)
                    self._dut.mem_write_addr.value = int(mem_addr)
                    await RisingEdge(self._dut.clk)
                cmd_addr += 1

        self._dut.mem_write_en.value = 0

    async def load_env(self, env_buffer_list):
        """
        Load full envelope for program
        """
        for i, env_buffer in enumerate(env_buffer_list):
            await self.load_unit_env(env_buffer, i)
        

    async def load_unit_env(self, env_buffer, dspunit_ind, wave_start_addr=0):
        """
        Load envelope for a single DSP unit
        env_i and env_q are raw 16-bit values
        """
        self._dut.mem_write_en.value = 1
        wave_addr = wave_start_addr
        for sample in env_buffer:
            self._dut.mem_write_data.value = int(sample)
            self._dut.mem_write_addr.value = (dspunit_ind << 13) + (1 << 12) + wave_addr
            self._dut.mem_write_en.value = 1
            await RisingEdge(self._dut.clk)
            wave_addr += 1
        
        self._dut.mem_write_en.value = 0

    async def reset(self):
        """
        Reset all of the proc cores and DSP elements
        """
        await RisingEdge(self._dut.clk)
        await RisingEdge(self._dut.clk)
        self._dut.reset.value = 1
        await RisingEdge(self._dut.clk)
        await RisingEdge(self._dut.clk)
        self._dut.reset.value = 0

    async def monitor_outputs(self, ncycles):
        """
        Monitor program output for ncycles clocks.
        Sets class attributes dac_i and dac_q, each of
        which is a (n_dspunit, n_samples) numpy array of
        DAC values. Also populates self.mon_data, if any
        mon signals have been declared
        """
        dac_i = []
        dac_q = []

        for i in range(ncycles):
            await RisingEdge(self._dut.clk)
            for name, sig in self.mon_signals:
                self.mon_data[name].append(sig.value)
            dac_i.append([int(val) for val in self._dac_i_signal.value[::-1]])
            dac_q.append([int(val) for val in self._dac_q_signal.value[::-1]])

        dac_i = np.transpose(np.asarray(dac_i, dtype=np.uint64))
        dac_q = np.transpose(np.asarray(dac_q, dtype=np.uint64))
        self.dac_i = np.empty((self._n_dspunit, ncycles*4))
        self.dac_q = np.empty((self._n_dspunit, ncycles*4))
        for i in range(self._n_dspunit):
            self.dac_i[i] = unravel_dac(dac_i[i])
            self.dac_q[i] = unravel_dac(dac_q[i])

    async def run_program(self, ncycles):
        """
        For backwards compatibility with earlier tests; can be used 
        to run simple programs without external (fproc) input.
        """
        await self.reset()
        await self.monitor_outputs(ncycles)

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


