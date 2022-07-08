import cocotb
import random
import ipdb
import numpy as np
import matplotlib.pyplot as plt
from cocotb.triggers import Timer, RisingEdge
import distproc.command_gen as cg

CLK_CYCLE = 5
N_CLKS = 500

PULSE_INSTR_TIME = 1
ALU_INSTR_TIME = 2
COND_JUMP_INSTR_TIME = 2
JUMP_INSTR_TIME = 1

async def generate_clock(dut):
    for i in range(N_CLKS):
        dut.clk.value = 0
        await Timer(CLK_CYCLE, units='ns')
        dut.clk.value = 1
        await Timer(CLK_CYCLE, units='ns')
    dut._log.debug("clk cycle {}".format(i))

async def load_commands(dut, cmd_list, start_addr=0):
    cmd_addr = start_addr
    ipdb.set_trace()
    for cmd in cmd_list:
        for i in range(4):
            mem_val = (cmd >> (32*i)) & (2**32-1)
            mem_addr = cmd_addr + (i << 8)
            dut.mem_write_data.value = mem_val
            dut.mem_write_addr.value = mem_addr
            dut.mem_write_en.value = 1 
            await RisingEdge(dut.clk)
        cmd_addr += 1

    dut.mem_write_en.value = 0

async def load_env(dut, env_i, env_q, wave_start_addr=0):
    """
    env_i and env_q are normalized to 1.0
    """
    ENV_BITS = 16
    assert np.all(env_i < 1) and np.all(env_q < 1)
    env_i = 2**ENV_BITS*env_i
    env_q = 2**ENV_BITS*env_q
    full_env = env_i.astype(int) + (env_q.astype(int) << ENV_BITS)
    ipdb.set_trace()

    wave_addr = wave_start_addr
    for sample in full_env:
        dut.mem_write_data.value = int(sample)
        dut.mem_write_addr.value = (1 << 12) + wave_addr
        dut.mem_write_en.value = 1
        await RisingEdge(dut.clk)
        wave_addr += 1
    
    dut.mem_write_en.value = 0


@cocotb.test()
async def pulse_out_test(dut):
    freq = 100.e6
    phase = 0
    tstart = 5
    pulse_length = 10
    env_i = 0.999*np.ones(pulse_length)
    env_q = 0.5*np.ones(pulse_length)

    cmd = cg.pulse_i(freq, phase, 0, pulse_length, tstart)

    await cocotb.start(generate_clock(dut))

    await load_commands(dut, [cmd])
    await load_env(dut, env_i, env_q, 0)

    dac_q_out = []
    dac_i_out = []

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.reset.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    await RisingEdge(dut.clk)

    for i in range(20):
        await RisingEdge(dut.clk)
        dac_i_out.append(int(dut.dac_i.value))
        dac_q_out.append(int(dut.dac_q.value))

    ipdb.set_trace()
    plt.plot(dac_i_out)
    plt.plot(dac_q_out)
