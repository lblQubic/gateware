module jesd204_clocking (
  input  refclk_pad_n,
  input  refclk_pad_p,
  input  glblclk_pad_n,
  input  glblclk_pad_p,
  input  sysref_pad_n,
  input  sysref_pad_p,

  output refclk,
  output coreclk,
  output sysref
);

wire  glblclk_i;
wire  glblclk_bufg;
wire  sysref_i;
wire  sysref_bufg;

IBUFDS_GTE2 ibufds_refclk0 (
    .O     (refclk),
    .ODIV2 (),
    .CEB   (1'b0),
    .I     (refclk_pad_p),
    .IB    (refclk_pad_n)
);

IBUFDS i_glblclk_ibufds (
    .I  (glblclk_pad_p),
    .IB (glblclk_pad_n),
    .O  (glblclk_i)
);

BUFG glbl_bufg_i (
    .O (glblclk_bufg),
    .I (glblclk_i)
);

IBUFDS i_sysref_ibufds (
    .I  (sysref_pad_p),
    .IB (sysref_pad_n),
    .O  (sysref_i)
);

BUFG sysref_bufg_i (
    .O (sysref_bufg),
    .I (sysref_i)
);

assign coreclk = glblclk_bufg;
assign sysref = sysref_bufg;

endmodule
