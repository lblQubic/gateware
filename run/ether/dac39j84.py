vid=[[0x7f,0x800a],]
if4lane=[(0x02,0x2082),]
default=[[0x00,0x0218],[0x01,0x0003],[0x02,0x2082],[0x03,0xf380],[0x04,0x00ff],[0x05,0xffff],[0x06,0xffff],[0x07,0x0000],[0x08,0x0000],[0x09,0x0000],[0x0a,0x0000],[0x0b,0x0000],[0x0c,0x0400],[0x0d,0x0400],[0x0e,0x0400],[0x0f,0x0400],[0x10,0x0000],[0x11,0x0000],[0x12,0x0000],[0x13,0x0000],[0x14,0x0000],[0x15,0x0000],[0x16,0x0000],[0x17,0x0000],[0x18,0x0000],[0x19,0x0000],[0x1a,0x0020],[0x1b,0x0000],[0x1c,0x0000],[0x1d,0x0000],[0x1e,0x1111],[0x1f,0x1140],[0x20,0x0000],[0x21,0x0000],[0x22,0x1b1b],[0x23,0xffff],[0x24,0x0000]
,[0x25,0x8000]#		,[0x25,0x0000]
,[0x26,0x0000],[0x27,0x0000],[0x28,0x0003],[0x29,0xffff],[0x2a,0x0000],[0x2b,0x0000],[0x2c,0x0000],[0x2d,0x0000],[0x2e,0xffff],[0x2f,0x0004],[0x30,0x0000],[0x31,0x0000],[0x32,0x0000]
,[0x33,0x0000] #,[0x33,0x0100]
,[0x34,0x0000],[0x35,0x0000],[0x36,0x0000],[0x37,0x0000],[0x38,0x0000],[0x39,0x0000],[0x3a,0x0000],[0x3b,0x0000],[0x3c,0x0000],[0x3d,0x0000],[0x3e,0x0000],[0x3f,0x0000],[0x40,0x0000],[0x41,0x0000],[0x42,0x0000],[0x43,0x0000],[0x44,0x0000],[0x45,0x0000],[0x46,0x0044],[0x47,0x190a],[0x48,0x31c3],[0x49,0x0000],[0x4a,0x001e],[0x4b,0x0000],[0x4c,0x0000],[0x4d,0x0300],[0x4e,0x0f0f],[0x4f,0x1cc1],[0x50,0x0000],[0x51,0x00ff],[0x52,0x00ff],[0x53,0x0000],[0x54,0x00ff],[0x55,0x00ff],[0x56,0x0000],[0x57,0x00ff],[0x58,0x00ff],[0x59,0x0000],[0x5a,0x00ff],[0x5b,0x00ff],[0x5c,0x1111],[0x5d,0x0000],[0x5e,0x0000],[0x5f,0x0123],[0x60,0x4567],[0x61,0x000f],[0x62,0x0000],[0x63,0x0000],[0x64,0x0000],[0x65,0x0000],[0x66,0x0000],[0x67,0x0000],[0x68,0x0000],[0x69,0x0000],[0x6a,0x0000],[0x6b,0x0000],[0x6c,0x0000],[0x6d,0x0000],[0x6e,0x0000],[0x6f,0x0000],[0x70,0x0000],[0x71,0x0000],[0x72,0x0000],[0x73,0x0000],[0x74,0x0000],[0x75,0x0000],[0x76,0x0000],[0x77,0x0000],[0x78,0x0000],[0x79,0x0000],[0x7a,0x0000],[0x7b,0x0000],[0x7c,0x0000],[0x7d,0x0000],[0x7e,0x0000]
,[0x7f,0x000a]#,[0x7f,0x0009]
]
alarm=(
[0x64,0x0000],
[0x65,0x0000],
[0x66,0x0000],
[0x67,0x0000],
[0x68,0x0000],
[0x69,0x0000],
[0x6a,0x0000],
[0x6b,0x0000],
[0x6c,0x0000],
[0x6d,0x0000],
[0x7f,0x000a]
)
reset=((0x02,0x2083),)
init0=(
(0x02,0x2082) #2
,(0x1a,0x0020) #26
,(0x3b,0x0800) #0x0800) #59
,(0x3c,0x0228) #60
,(0x3e,0x0108) #62
,(0x25,0x2000) #37
,(0x24,0x0020) #0x0030) #36
,(0x00,0x0018) #0
,(0x4a,0xff1e) #74
,(0x4b,0x0000) #75
,(0x4c,0x1f07) #76
,(0x4d,0x0300) #77
,(0x4e,0x0f4f) #78
,(0x51,0x00df) #81
,(0x61,0x0001) #97
,(0x1e,0x4444) #30
,(0x1f,0x4440) #31
,(0x20,0x4044) #32
,(0x01,0x00a0) #1 ,(0x01,0x0050) #1 ???
,(0x4a,0xff1f) #74
,(0x4a,0xff01) #74
)
resync=(
(0x4a,0xff1f) #74
,(0x4a,0xff01) #74
		)
init=(
(0x00,0x0018) #0
,(0x4a,0xff1e) #74
,(0x01,0x00a0) #1 ,(0x01,0x0050) #1 ???
,(0x02,0x2082) #2
,(0x1a,0x0020) #26
,(0x1e,0x4444) #30
,(0x1f,0x4440) #31
,(0x20,0x4044) #32
,(0x24,0x0020) #0x0030) #36
,(0x25,0x2000) #37
,(0x3b,0x0800) #0x0800) #59
,(0x3c,0x0228) #60
,(0x3e,0x0108) #62
,(0x4b,0x0000) #75
,(0x4c,0x1f07) #76
,(0x4d,0x0300) #77
,(0x4e,0x0f4f) #78
,(0x51,0x00df) #81
,(0x61,0x0001) #97
,(0x4a,0xff1f) #74
,(0x4a,0xff01) #74
)
