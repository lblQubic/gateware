import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
from distproc.hwconfig import ElementConfig
from sim_tools import unravel_dac, ravel_adc

N_MAX_CMD = 30 #for flushing cmd buffer
N_CLKS = 100000
CLK_CYCLE = 2
N_PROC = 4
CMD_WRITE_WORDS = 4

async def generate_clock(dut):
    for i in range(N_CLKS):
        dut.clk.value = 0
        await Timer(CLK_CYCLE, units='ns')
        dut.clk.value = 1
        await Timer(CLK_CYCLE, units='ns')
    dut._log.debug("clk cycle {}".format(i))

class DSPDriver:
    """
    Class for running a program on simulated
    instances of a dsp_unit module in cocotb

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
    def __init__(self, dut, dac_samples_per_clk, dac_nbits, adc_samples_per_clk, \
            adc_nbits, mon_signals=None):
        """
        TODO: make dac_samples_per_clk, etc optionally arrays to support different 
        sample rates
        """
        self._dut = dut
        self.mon_signals = {}
        self.mon_data = {}
        self._n_dac = len(self._dut.dac)
        self._dac_out_signal = self._dut.dac
        self.dac_samples_per_clk = dac_samples_per_clk
        self.adc_samples_per_clk = adc_samples_per_clk
        self.dac_nbits = dac_nbits
        self.adc_nbits = adc_nbits
        if mon_signals is not None:
            for name, sig in mon_signals.items():
                self.add_mon(name, sig)

    @property
    def n_dac(self):
        return self._n_dac

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
        self._dut.mem_write_sel.value = 0
        for i, cmd_list in enumerate(cmd_lists):
            cmd_addr = 0
            self._dut.proc_write_sel.value = i
            for cmd in cmd_list:
                for j in range(CMD_WRITE_WORDS):
                    mem_val = (cmd >> (32*j)) & (2**32-1)
                    mem_addr = CMD_WRITE_WORDS*cmd_addr + j
                    self._dut.mem_write_data.value = int(mem_val)
                    self._dut.mem_write_addr.value = int(mem_addr)
                    await RisingEdge(self._dut.clk)
                cmd_addr += 1

        self._dut.mem_write_en.value = 0

    #async def load_env(self, env_buffer_list):
    #    """
    #    Load full envelope for program
    #    """
    #    for i, env_buffer in enumerate(env_buffer_list):
    #        await self.load_unit_env(env_buffer, i)
        

    async def load_env_buffer(self, env_buffer, elem_ind, core_ind, wave_start_addr=0):
        """
        Load envelope for a single DSP unit
        env_buffer is packed 32-bit I and Q values, one dt sample per element

        elem_ind indexes the process element: 
            currently 0 is qdrv, 1 is rdrv, and 2 is rdlo
        """
        self._dut.mem_write_en.value = 1
        self._dut.mem_write_sel.value = 1 + elem_ind*2 
        self._dut.proc_write_sel.value = core_ind
        wave_addr = wave_start_addr
        for sample in env_buffer:
            self._dut.mem_write_data.value = int(sample)
            self._dut.mem_write_addr.value = wave_addr
            await RisingEdge(self._dut.clk)
            wave_addr += 1
        
        self._dut.mem_write_en.value = 0

    async def load_freq_buffer(self, freq_buffer, elem_ind, core_ind):
        self._dut.mem_write_en.value = 1
        self._dut.mem_write_sel.value = 2 + elem_ind*2 
        self._dut.proc_write_sel.value = core_ind
        addr = 0
        for sample in freq_buffer:
            self._dut.mem_write_data.value = int(sample)
            self._dut.mem_write_addr.value = addr
            await RisingEdge(self._dut.clk)
            addr += 1
        
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
        which is a (n_dac, n_samples) numpy array of
        DAC values. Also populates self.mon_data, if any
        mon signals have been declared
        """
        dac_out = []
        for i in range(ncycles):
            await RisingEdge(self._dut.clk)
            for name, sig in self.mon_signals:
                self.mon_data[name].append(sig.value)
            dac_out.append([int(val) for val in self._dac_out_signal.value[::-1]])

        dac_out = np.transpose(np.asarray(dac_out))
        self.dac_out = np.empty((self.n_dac, ncycles*self.dac_samples_per_clk))
        for i in range(self.n_dac):
            self.dac_out[i] = unravel_dac(dac_out[i], self.dac_samples_per_clk, self.dac_nbits)

    async def run_program(self, ncycles):
        """
        For backwards compatibility with earlier tests; can be used 
        to run simple programs without external (fproc) input.
        """
        await self.reset()
        self._dut.stb_start.value = 1
        await RisingEdge(self._dut.clk)
        self._dut.stb_start.value = 0
        await self.monitor_outputs(ncycles)

class MeasDriver:
    """
    Class for running a program on simulated
    instances of a dsp_unit module in cocotb

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
            shape: (n_measunit, nsamples). values are signed 16-bit dac_i out
        self.dac_q : numpy array
            shape: (n_measunit, nsamples). values are signed 16-bit dac_q out
    """
    def __init__(self, dut, mon_signals=None):
        self._dut = dut
        self._n_measunit = len(self._dut.adc_i)
        self._adc_i_signal = self._dut.adc_i
        self._adc_q_signal = self._dut.adc_q
        self.mon_signals = {}
        self.mon_data = {}
        self.adc_timestream = np.empty(0, dtype=np.complex128)
        if mon_signals is not None:
            for name, sig in mon_signals.items():
                self.add_mon(name, sig)

    @property
    def n_measunit(self):
        """
        want this to be readonly
        """
        return self._n_measunit

    def add_mon(self, name, sig):
        self.mon_signals.update({name: sig})
        self.mon_data.update({name: []})

    async def flush_cmd_mem(self, ncmd=N_MAX_CMD):
        cmd_lists = []
        for i in range(self._n_measunit):
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
        which is a (n_measunit, n_samples) numpy array of
        DAC values. Also populates self.mon_data, if any
        mon signals have been declared
        """
        for i in range(ncycles):
            await RisingEdge(self._dut.clk)
            for name, sig in self.mon_signals:
                self.mon_data[name].append(sig.value)

    async def run_program(self, ncycles):
        """
        For backwards compatibility with earlier tests; can be used 
        to run simple programs without external (fproc) input.
        """
        await self.reset()
        cocotb.start_soon(self._generate_adc_signal())
        await self.monitor_outputs(ncycles)

    async def _generate_adc_signal(self):
        adc_i = ravel_adc(np.real(self.adc_timestream))
        adc_q = ravel_adc(np.imag(self.adc_timestream))
        for i in range(len(adc_i)):
            self._adc_i_signal.value = int(adc_i[i])
            self._adc_q_signal.value = int(adc_q[i])
            await(RisingEdge(self._dut.clk))

    def add_adc_signal(self, signal):
        """
        Add simulated ADC input -- stores signal, which is clocked in
        during run_program. Multiple signals can be added; these are summed

        Parameters
        ----------
            signal : np.ndarray
                complex numpy array of adc samples (I is real and Q is imag)
        """
        self.adc_timestream = np.pad(self.adc_timestream, (0, max(0, len(signal) - len(self.adc_timestream))))
        signal = np.pad(signal, (0, max(0, len(self.adc_timestream) - len(signal))))

        self.adc_timestream += signal

    def zero_adc_signal(self):
        self.adc_timestream = np.zeros(len(self.adc_timestream), dtype=np.complex128)

class DACElementCfg(ElementConfig):
    """
    TODO: figure out how to incorporate ADC chan here. some possibilities:
        - have a channel keyword to freq buffer and env buffer
        - remove DAC/ADC distinctions, just have sample period. each element
          can then have its own hwconfig object
    """
    def __init__(self):
        self.env_n_bits = 16
        self.freq_n_bits = 32
        self.n_phase_bits = 17
        super().__init__(2.e-9, 16)

    def get_freq_addr(self, freq_ind):
        return freq_ind

    def get_cfg_word(self, elem_ind, mode_bits=None):
        if mode_bits is not None: 
            raise Exception('mode not implemented')
        return elem_ind

    def get_freq_buffer(self, freqs):
        """
        Each frequency has 16 elements
            [0] is a 32-bit freq word
            [1:15] are 16 bit I MSB + 16 bit Q LSB
        """
        freq_buffer = np.empty(0)
        scale = 2**(self.freq_n_bits/2 - 1) - 1
        for freq in freqs:
            cur_freq_buffer = np.zeros(self.samples_per_clk)
            if freq is not None:
                cur_freq_buffer[0] = int(freq*2**self.freq_n_bits/self.fpga_clk_freq) & (2**self.freq_n_bits - 1)
                for i in range(1, self.samples_per_clk):
                    i_mult = int(round(np.cos(2*np.pi*freq*i*self.sample_period)*scale) % (2**(self.freq_n_bits/2)))
                    q_mult = int(round(np.sin(2*np.pi*freq*i*self.sample_period)*scale) % (2**(self.freq_n_bits/2)))
                    cur_freq_buffer[i] = (i_mult << (self.freq_n_bits//2)) + q_mult

            freq_buffer = np.append(freq_buffer, cur_freq_buffer)

        return freq_buffer

    def get_phase_word(self, phase):
        return int((phase/(2*np.pi) * 2**17))

    def get_env_word(self, env_ind, length):
        return env_ind//self.samples_per_clk + (int(np.ceil(length/self.samples_per_clk)) << 12)

    def get_env_buffer(self, env_samples):
        env_samples = np.pad(env_samples, (0, (self.samples_per_clk - len(env_samples) \
                % self.samples_per_clk) % self.samples_per_clk))
        return (cg.twos_complement(np.real(env_samples*(2**(self.env_n_bits-1)-1)).astype(int), nbits=self.env_n_bits) << self.env_n_bits) \
                    + cg.twos_complement(np.imag(env_samples*(2**(self.env_n_bits-1)-1)).astype(int), nbits=self.env_n_bits)

    def length_nclks(self, tlength):
        return int(np.ceil(tlength/self.fpga_clk_period))

    def get_amp_word(self, amplitude):
        return int(amplitude*(2**15 - 1))

