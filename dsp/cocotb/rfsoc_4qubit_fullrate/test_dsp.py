import cocotb
from cocotb.triggers import Timer, RisingEdge
import numpy as np
import matplotlib.pyplot as plt
import ipdb
import dsp_drivers as dsp
from hwconfig import RFSoCElementCfg
import distproc.assembler as asm
import sim_tools as st

@cocotb.test()
async def test_const_pulse(dut):
    freq = 100.e6
    phase = 0
    tstart = 8
    pulse_length = 100
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
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
    plt.plot(dspunit.dac_out[1])
    plt.plot(dacout_sim)
    plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[1])

@cocotb.test()
async def test_ramp_pulse(dut):
    """
    Using a freq that is harmonic of FPGA clock period, so
    cordic phase acc doesn't matter
    """
    freq = 2500.e6
    phase = 0
    tstart = 10
    pulse_length = 1000
    amp = 0.9
    env_i = np.arange(pulse_length)/pulse_length
    env_q = np.zeros(pulse_length)/pulse_length
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
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
    plt.plot(dspunit.dac_out[1])
    plt.plot(dacout_sim)
    plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[1])

@cocotb.test()
async def test_consecutive_id_ramp_pulse(dut):
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()

    pulse_length = 92
    env_i = np.arange(pulse_length)**2/pulse_length**2
    env_q = 0.3*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=0.85e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

    pulse_length = 92
    env_i = np.arange(pulse_length)**2/pulse_length**2
    env_q = 0.3*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=0.85e9, phase=0, amp=0.9, start_time=100, env=env_i + 1j*env_q, elem_ind=0)

    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = sim_prog[1:3]

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
async def test_consecutive_ramp_pulse(dut):
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()

    pulse_length = 100
    env_i = np.arange(pulse_length)/pulse_length
    env_q = 0.5*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=1.5e9, phase=0, amp=0.9, start_time=50, env=env_i + 1j*env_q, elem_ind=0)

    pulse_length = 92
    env_i = np.arange(pulse_length)**2/pulse_length**2
    env_q = 0.3*np.arange(pulse_length)/pulse_length
    prog.add_pulse(freq=0.85e9, phase=np.pi/4, amp=0.8, start_time=110, env=env_i + 1j*env_q, elem_ind=0)

    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = sim_prog[1:3]
    #pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)

    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16)
    plt.plot(dspunit.dac_out[1])
    plt.plot(dacout_sim)
    plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[1])

@cocotb.test()
async def test_rdrv_pulse(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 10
    pulse_length = 1000
    amp = 0.9
    env_i = np.arange(pulse_length)/pulse_length
    env_q = np.zeros(pulse_length)/pulse_length
    elemcfg = RFSoCElementCfg()

    dspunit = dsp.DSPDriver(dut, 16, 16, 16, 16)

    prog = asm.SingleCoreAssembler([elemcfg, elemcfg, elemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 1)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)

    await dspunit.run_program(500)
    dacout_sim = st.generate_sim_dacout(pulse_seq, 16, extra_delay=3)
    plt.plot(dspunit.dac_out[0])
    plt.plot(dacout_sim)
    plt.show()
    assert st.check_dacout_equal(dacout_sim, dspunit.dac_out[0])

@cocotb.test()
async def test_adc_lb(dut):
    freq = 347.e6
    phase = np.pi/8
    tstart = 10
    pulse_length = 100
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = np.zeros(pulse_length)

    dacelemcfg = RFSoCElementCfg(16)
    adcelemcfg = RFSoCElementCfg(4)

    adc_fullscale = 2**15-1

    dspunit = dsp.DSPDriver(dut, 16, 16, 4, 16)
    adc_signal = adc_fullscale*np.cos(2*np.pi*freq*(1.e-9*dsp.CLK_CYCLE/dspunit.adc_samples_per_clk)*np.arange(pulse_length) + phase)
    adc_signal[-1] = 0

    prog = asm.SingleCoreAssembler([dacelemcfg, dacelemcfg, adcelemcfg])
    prog.add_phase_reset()
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 2)
    prog.add_done_stb()
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    sim_prog = prog.get_sim_program()
    pulse_seq = [sim_prog[1]]

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.load_env_buffer(env_buffers[1], 1, 0)
    await dspunit.load_freq_buffer(freq_buffers[1], 1, 0)
    await dspunit.load_env_buffer(env_buffers[2], 2, 0)
    await dspunit.load_freq_buffer(freq_buffers[2], 2, 0)

    cocotb.start_soon(dspunit.generate_adc_signal(adc_signal, 0))
    await dspunit.run_program(1000)

    acq_buf = await dspunit.read_acq_buf(pulse_length+tstart+1000, 0)
    
    plt.plot(acq_buf)
    plt.plot(adc_signal)
    plt.show()
