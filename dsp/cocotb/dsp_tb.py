import cocotb
from cocotb.triggers import Timer, RisingEdge
import numpy as np
import ipdb
import dsp_drivers as dsp
import distproc.assembler as asm

@cocotb.test()
async def test_pulse(dut):
    freq = 100.e6
    phase = 0
    tstart = 0
    pulse_length = 40
    amp = 0.9
    env_i = 0.2*np.ones(pulse_length)
    env_q = 0.1*np.ones(pulse_length)
    hwconf = dsp.DSPSimHWConf()

    dspunit = dsp.DSPDriver(dut)

    prog = asm.SingleCoreAssembler(hwconf, 3)
    prog.add_pulse(freq, phase, amp, tstart, env_i + 1j*env_q, 0)
    cmd_list, env_buffers, freq_buffers = prog.get_compiled_program()
    ipdb.set_trace()

    cocotb.start_soon(dsp.generate_clock(dut))
    await dspunit.load_program([cmd_list])
    await dspunit.load_env_buffer(env_buffers[0], 0, 0)
    await dspunit.load_freq_buffer(freq_buffers[0], 0, 0)
    await dspunit.reset()
    for i in range(200):
        await(RisingEdge(dut.clk))
