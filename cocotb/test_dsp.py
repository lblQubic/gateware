import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
from distproc.assembler import SingleUnitScheduler

CLK_CYCLE = 5
N_CLKS = 500

PULSE_INSTR_TIME = 1
ALU_INSTR_TIME = 2
COND_JUMP_INSTR_TIME = 2
JUMP_INSTR_TIME = 1

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
        self.dac_i : list of int
            Signed 16-bit dac_i out
        self.dac_q : list of int
            Signed 16-bit dac_q out
    """
    def __init__(self, dut, mon_signals=None):
        self._dut = dut
        self._dac_i_signal = self._dut.dac_i
        self._dac_q_signal = self._dut.dac_q
        self.mon_signals = {}
        self.mon_data = {}
        self.dac_i = []
        self.dac_q = []
        if mon_signals is not None:
            for name, sig in mon_signals.items():
                self.add_mon(name, sig)

    def add_mon(self, name, sig):
        self.mon_signals.update({name: sig})
        self.mon_data.update({name: []})

    async def load_program(self, cmd_list):
        cmd_addr = 0
        self._dut.reset.value = 1
        for cmd in cmd_list:
            for i in range(4):
                mem_val = (cmd >> (32*i)) & (2**32-1)
                mem_addr = cmd_addr + (i << 8)
                self._dut.mem_write_data.value = mem_val
                self._dut.mem_write_addr.value = mem_addr
                self._dut.mem_write_en.value = 1 
                await RisingEdge(self._dut.clk)
            cmd_addr += 1

        self._dut.mem_write_en.value = 0

    async def load_env(self, env_buffer, wave_start_addr=0):
        """
        env_i and env_q are raw 16-bit values
        """
        #ENV_BITS = 15
        #assert np.all(env_i < 1) and np.all(env_q < 1)
        #env_i = 2**ENV_BITS*env_i
        #env_q = 2**ENV_BITS*env_q
        #full_env = env_i.astype(int) + (env_q.astype(int) << ENV_BITS)
    
        wave_addr = wave_start_addr
        for sample in env_buffer:
            self._dut.mem_write_data.value = int(sample)
            self._dut.mem_write_addr.value = (1 << 12) + wave_addr
            self._dut.mem_write_en.value = 1
            await RisingEdge(self._dut.clk)
            wave_addr += 1
        
        self._dut.mem_write_en.value = 0

    async def run_program(self, ncycles):
        await RisingEdge(self._dut.clk)
        await RisingEdge(self._dut.clk)
        self._dut.reset.value = 1
        await RisingEdge(self._dut.clk)
        await RisingEdge(self._dut.clk)
        self._dut.reset.value = 0
        await RisingEdge(self._dut.clk)

        for i in range(ncycles):
            await RisingEdge(self._dut.clk)
            for name, sig in self.mon_signals:
                self.mon_data[name].append(sig.value)
            self.dac_i.append(self._dac_i_signal.value)
            self.dac_q.append(self._dac_q_signal.value)

        self.dac_i = unravel_dac(self.dac_i)
        self.dac_q = unravel_dac(self.dac_q)

async def generate_clock(dut):
    for i in range(N_CLKS):
        dut.clk.value = 0
        await Timer(CLK_CYCLE, units='ns')
        dut.clk.value = 1
        await Timer(CLK_CYCLE, units='ns')
    dut._log.debug("clk cycle {}".format(i))


def check_pulse_output(prog_dict, dac_i, dac_q):
    """
    Parameters
    ----------
        prog_dict : dict
            {'freq': <freq in Hz>, 'phase': initial phase in rad
             'tstart': pulse start time in clks, 'env': complex
             env samples}
    """
    pass

def generate_pulse_output(prog_dict):
    """
    Parameters
    ----------
        prog_dict : dict
            {'freq': <freq in Hz>, 'phase': initial phase in rad
             'tstart': pulse start time in clks, 'env_i': env samples
             'env_q': env samples}
    """
    pass

@cocotb.test()
async def pulse_out_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    prog = SingleUnitScheduler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    

    cocotb.start_soon(generate_clock(dut))

    #await load_commands(dut, [cmd])
    #await load_env(dut, env_i, env_q, 0)

    #dac_q_out = []
    #dac_i_out = []

    #await RisingEdge(dut.clk)
    #await RisingEdge(dut.clk)
    #dut.reset.value = 1
    #await RisingEdge(dut.clk)
    #await RisingEdge(dut.clk)
    #dut.reset.value = 0
    #await RisingEdge(dut.clk)

    #for i in range(200):
    #    await RisingEdge(dut.clk)
    #    dac_i_out.append(int(dut.dac_i.value))
    #    dac_q_out.append(int(dut.dac_q.value))

    #ipdb.set_trace()
    #dac_i = unravel_dac(dac_i_out)
    #dac_q = unravel_dac(dac_q_out)
    #plt.plot(dac_i)
    #plt.plot(dac_q)
    #plt.show()
    dspunit = DSPUnitDriver(dut)
    ipdb.set_trace()
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)
    plt.plot(dspunit.dac_i)
    plt.plot(dspunit.dac_q)
    plt.show()

def unravel_dac(dac_out):
    dac_out_unravel = []
    for val in dac_out:
        for i in range(4):
            sliced_val = (val >> (i*16)) & (2**16 - 1)
            dac_out_unravel.append(convert_to_signed(sliced_val, 16))

    return np.asarray(dac_out_unravel)

def convert_to_signed(value, nbits=16):
    sval = value & (2**(nbits - 1) - 1)
    sval += -1*(value & (2**(nbits - 1)))
    return sval

