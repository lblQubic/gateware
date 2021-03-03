# gateware
```
git clone --recursive git@gitlab.com:LBL-QubiC/gateware.git
cd gateware
```
Synthesis:
`make qubic.bit`

Simulation:
`make qubic.fst `
Simulate longer time:
`make qubic.fst TEND=100us`

Program the fpga, edit a local configuration file, e.g. testb71.sh as below:

```
export QUBICIP=192.168.1.225
export HWSERVER="baci-desktop.dhcp.lbl.gov:3121"
```

`source testb71.sh`

The test software are located in the run/ether directory
`cd run/ether`

Check the frequencies:
`python freqcheck.sh`

DAC output:
`python dacampfreq.py -c 01 23 45 67 -f 2e6 -a 0.5 0 0 0 0 0 0 0`

ADC buf read:
`python bufread.py`

SFP tx and rx Check
`python sfprw -sfptx 0xabcd1234 -smatx 0xffaabbdd`

If the board doesn't response ping, try to access it through the uart port:
`python macip.py `
read the ip and mac read from eeprom, if wrong, use the
`python macip.py -ip 192.168.1.225 `
and/or
`python macip.py -mac aa:bb:cc:dd:ee:ff`
to rewrite the eeprom.


