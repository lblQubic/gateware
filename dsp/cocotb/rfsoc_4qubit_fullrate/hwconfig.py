from distproc.hwconfig import ElementConfig
import distproc.command_gen as cg
import ipdb
import numpy as np

class RFSoCElementCfg(ElementConfig):
    """
    TODO: figure out how to incorporate ADC chan here. some possibilities:
        - have a channel keyword to freq buffer and env buffer
        - remove DAC/ADC distinctions, just have sample period. each element
          can then have its own hwconfig object
    """
    def __init__(self, samples_per_clk=16):
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

