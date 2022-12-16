import cocotb
from cocotb.triggers import Timer, RisingEdge
import numpy as np
import matplotlib.pyplot as plt
import ipdb
import dsp_drivers as dsp
import distproc.assembler as asm
import sim_tools as st

@cocotb.test()
async def test_const_pulse(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 100
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    hwconf = dsp.DSPSimHWConf()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler(hwconf, 3)
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    #plt.plot(dspunit.dac_out[1])
    #plt.plot(dacout_sim)
    #plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[1])

@cocotb.test()
async def test_ramp_pulse(dut):
    """
    Using a freq that is harmonic of FPGA clock period, so
    cordic phase acc doesn't matter
    """
    freq = 2500.e6
    phase = 0
    tstart = 3
    pulse_length = 1000
    amp = 0.9
    env_i = np.arange(pulse_length)/pulse_length
    env_q = np.zeros(pulse_length)/pulse_length
    hwconf = dsp.DSPSimHWConf()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler(hwconf, 3)
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    ipdb.set_trace()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    #plt.plot(dspunit.dac_out[1])
    #plt.plot(dacout_sim)
    #plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[1])
