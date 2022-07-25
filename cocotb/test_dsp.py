import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg
from distproc.assembler import SingleUnitAssembler, ENV_BITS

CLK_CYCLE = 4
N_CLKS = 500
DAC_SAMPLES_PER_CLK = 4
CORDIC_DELAY = 84

N_MAX_CMD = 10 #for flushing cmd buffer

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

    async def flush_cmd_mem(self, ncmd=N_MAX_CMD):
        cmd_list = np.zeros(ncmd, dtype=int)
        await self.load_program(cmd_list)

    async def load_program(self, cmd_list):
        cmd_addr = 0
        self._dut.reset.value = 1
        for cmd in cmd_list:
            for i in range(4):
                mem_val = (cmd >> (32*i)) & (2**32-1)
                mem_addr = cmd_addr + (i << 8)
                self._dut.mem_write_data.value = int(mem_val)
                self._dut.mem_write_addr.value = int(mem_addr)
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


def check_pulse_output(program, dac_i, dac_q, tol=.005):
    """
    Parameters
    ----------
        program : list of dict:
            {'freq': <freq in Hz>, 'phase': initial phase in rad
             'start_time': pulse start time in clks, 'env_i': env samples
             'env_q': env samples}
        tol : float
            tolerance as a fraction of max value
    """
    dac_i_sim, dac_q_sim = generate_sim_output(program)

    tol = tol*np.max(np.append(dac_i, dac_q))
    max_len = max(len(dac_i), len(dac_i_sim))
    dac_i = np.pad(dac_i, (0, max_len-len(dac_i)))
    dac_q = np.pad(dac_q, (0, max_len-len(dac_q)))
    dac_i_sim = np.pad(dac_i_sim, (0, max_len-len(dac_i_sim)))
    dac_q_sim = np.pad(dac_q_sim, (0, max_len-len(dac_q_sim)))
    return np.all((np.abs(dac_i - dac_i_sim) < tol) & (np.abs(dac_q - dac_q_sim) < tol))

def debug_plots(program, dac_i, dac_q):
    dac_i_sim, dac_q_sim = generate_sim_output(program)
    plt.plot(dac_i, '-', label='I')
    plt.plot(dac_q, '-', label='Q')
    plt.plot(dac_i_sim, ':', label='Sim I')
    plt.plot(dac_q_sim, ':', label='Sim Q')
    plt.legend()
    plt.show()

def generate_sim_output(program, ncycles=N_CLKS):
    dac_i_sim = np.zeros(ncycles)
    dac_q_sim = np.zeros(ncycles)
    scale_factor = 2**(ENV_BITS - 1)
    for pulse in program:
        sample_inds = np.arange(0, pulse['length'])
        phases = pulse['phase'] + 2*np.pi*(CLK_CYCLE/DAC_SAMPLES_PER_CLK)*1.e-9*sample_inds*pulse['freq']
        env_i = scale_factor*np.real(pulse['env'])[:pulse['length']]
        env_q = scale_factor*np.imag(pulse['env'])[:pulse['length']]
        pulse_i = env_i*np.cos(phases) - env_q*np.sin(phases)
        pulse_q = env_q*np.cos(phases) + env_i*np.sin(phases)

        dac_i_sim[CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] : CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] + pulse['length']] = pulse_i
        dac_q_sim[CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] : CORDIC_DELAY + DAC_SAMPLES_PER_CLK*pulse['start_time'] + pulse['length']] = pulse_q

    return dac_i_sim.astype(int), dac_q_sim.astype(int)

@cocotb.test()
async def const_pulse_out_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 0
    pulse_length = 40
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    prog = SingleUnitAssembler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    dspunit = DSPUnitDriver(dut)
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)
    assert check_pulse_output(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)

@cocotb.test()
async def two_const_pulse_out_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 30
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    prog = SingleUnitAssembler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)

    env_i = 0.7*np.ones(pulse_length)
    env_q = 0.5*np.ones(pulse_length)
    prog.add_pulse(freq, phase, 50, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()


    

    cocotb.start_soon(generate_clock(dut))
    dspunit = DSPUnitDriver(dut)
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)
    assert check_pulse_output(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)

@cocotb.test()
async def two_const_pulse_out_same_env_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 30
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    prog = SingleUnitAssembler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)

    #env_i = 0.7*np.ones(pulse_length)
    #env_q = 0.5*np.ones(pulse_length)
    phase = np.pi/4
    prog.add_pulse(freq, phase, 50, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()


    

    cocotb.start_soon(generate_clock(dut))
    dspunit = DSPUnitDriver(dut)
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)
    assert check_pulse_output(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)

@cocotb.test()
async def two_gauss_pulse(dut):
    freq = 425.e6
    phase = 0
    tstart = 5
    pulse_length = 30
    env_t = np.arange(pulse_length)
    env_i = 0.4*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)
    env_q = 0.3*np.exp(-(pulse_length/2 - env_t)**2/pulse_length/2)

    prog = SingleUnitAssembler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)

    #env_i = 0.7*np.ones(pulse_length)
    #env_q = 0.5*np.ones(pulse_length)
    phase = np.pi/4
    prog.add_pulse(freq, phase, 50, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()


    

    cocotb.start_soon(generate_clock(dut))
    dspunit = DSPUnitDriver(dut)
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)
    assert check_pulse_output(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)

@cocotb.test()
async def ramp_pulse(dut):
    freq = 20.e6
    phase = np.pi
    tstart = 40
    pulse_length = 40
    
    env_i = np.arange(pulse_length)/pulse_length
    env_q = 0

    prog = SingleUnitAssembler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    dspunit = DSPUnitDriver(dut)
    await dspunit.flush_cmd_mem()
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)
    assert check_pulse_output(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)

@cocotb.test()
async def neg_pulse(dut):
    freq = 100.e6
    phase = 0
    tstart = 0
    pulse_length = 40
    env_i = -0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)

    prog = SingleUnitAssembler()
    prog.add_pulse(freq, phase, tstart, env_i + 1j*env_q)
    cmd_list, env_buffer = prog.get_compiled_program()

    cocotb.start_soon(generate_clock(dut))
    dspunit = DSPUnitDriver(dut)
    await dspunit.load_program(cmd_list)
    await dspunit.load_env(env_buffer)
    await dspunit.run_program(200)

    #debug_plots(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)
    assert check_pulse_output(prog.get_sim_program(), dspunit.dac_i, dspunit.dac_q)

def unravel_dac(dac_out):
    dac_out_unravel = []
    for val in dac_out:
        for i in range(4):
            sliced_val = (val >> (i*16)) & (2**16 - 1)
            dac_out_unravel.append(twoscomp_to_signed(sliced_val, 16))

    return np.asarray(dac_out_unravel)

def twoscomp_to_signed(value, nbits=16):
    sval = value & (2**(nbits - 1) - 1)
    sval += -1*(value & (2**(nbits - 1)))
    return sval

