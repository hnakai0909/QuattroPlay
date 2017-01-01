#include <stdint.h>

// FM keycode table
uint8_t S2X_FMKeyCodes[0x80] = {
    0x00,0x01,0x02,0x04,0x05,0x06,0x08,0x09,0x0a,0x0c,0x0d,0x0e,
    0x10,0x11,0x12,0x14,0x15,0x16,0x18,0x19,0x1a,0x1c,0x1d,0x1e,
    0x20,0x21,0x22,0x24,0x25,0x26,0x28,0x29,0x2a,0x2c,0x2d,0x2e,
    0x30,0x31,0x32,0x34,0x35,0x36,0x38,0x39,0x3a,0x3c,0x3d,0x3e,
    0x40,0x41,0x42,0x44,0x45,0x46,0x48,0x49,0x4a,0x4c,0x4d,0x4e,
    0x50,0x51,0x52,0x54,0x55,0x56,0x58,0x59,0x5a,0x5c,0x5d,0x5e,
    0x60,0x61,0x62,0x64,0x65,0x66,0x68,0x69,0x6a,0x6c,0x6d,0x6e,
    0x70,0x71,0x72,0x74,0x75,0x76,0x78,0x79,0x7a,0x7c,0x7d,0x7e,
    0x80,0x81,0x82,0x84,0x85,0x86,0x88,0x89,0x8a,0x8c,0x8d,0x8e,
    0x90,0x91,0x92,0x94,0x95,0x96,0x98,0x99,0x9a,0x9c,0x9d,0x9e,
};

// FM connection carrier count
uint8_t S2X_FMConnection[8] = {
    0,0,0,0,1,2,2,3
};

// PCM pitch table
uint16_t S2X_PitchTable[0x60] = {
    0x0054,0x0059,0x005E,0x0064,0x006A,0x0070,0x0077,0x007E,0x0086,0x008E,0x0096,0x009F, // A0
    0x00A9,0x00B3,0x00BD,0x00C9,0x00D5,0x00E1,0x00EF,0x00FD,0x010C,0x011C,0x012D,0x013F, // A1
    0x0152,0x0166,0x017B,0x0192,0x01AA,0x01C3,0x01DE,0x01FA,0x0218,0x0238,0x025A,0x027E, // A2
    0x02A4,0x02CC,0x02F7,0x0324,0x0354,0x0386,0x03BC,0x03F5,0x0431,0x0471,0x04B4,0x04FC, // A3
    0x0548,0x0598,0x05EE,0x0648,0x06A8,0x070C,0x0778,0x07EA,0x0862,0x08E2,0x0968,0x09F8, // A4
    0x0A8F,0x0B30,0x0BDC,0x0C90,0x0D50,0x0E18,0x0EF0,0x0FD4,0x10C4,0x11C4,0x12D0,0x13F0, // A5
    0x151E,0x1660,0x17B8,0x1920,0x1AA0,0x1C30,0x1DE0,0x1FA8,0x2188,0x2388,0x25A0,0x27E0, // A6
    0x2A3C,0x2CC0,0x2F70,0x3240,0x3540,0x3860,0x3BC0,0x3F50,0x4310,0x4710,0x4B40,0x4FC0  // A7
};

// we'll see if we need out of bounds values later
uint16_t S2X_EnvelopeRateTable[0x80] = {
    0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0007, 0x0009, // 00
    0x000B, 0x000D, 0x000F, 0x0011, 0x0013, 0x0015, 0x0017, 0x0019,
    0x001B, 0x001D, 0x001F, 0x0022, 0x0024, 0x0027, 0x002A, 0x002D, // 10
    0x0030, 0x0033, 0x0037, 0x003B, 0x0040, 0x0044, 0x0049, 0x004F,
    0x0054, 0x005A, 0x0061, 0x0068, 0x0070, 0x0078, 0x0081, 0x008A, // 20
    0x0094, 0x009F, 0x00AA, 0x00B7, 0x00C4, 0x00D2, 0x00E1, 0x00F2,
    0x0103, 0x0116, 0x012A, 0x0140, 0x0157, 0x0170, 0x018B, 0x01AB, // 30
    0x01C7, 0x01E8, 0x020B, 0x0231, 0x025A, 0x0285, 0x02B4, 0x02E6,
    0x031C, 0x0356, 0x0394, 0x03D6, 0x041D, 0x046A, 0x04BC, 0x0514, // 40
    0x0572, 0x05D7, 0x0644, 0x06B8, 0x0735, 0x07BA, 0x084A, 0x08E4,
    0x0989, 0x0A3A, 0x0AF8, 0x0BC3, 0x0C9E, 0x0D88, 0x0E83, 0x0F91, // 50
    0x10B2, 0x11E8, 0x1334, 0x1498, 0x1617, 0x17B1, 0x1969, 0x1B40,
    0x1D3A, 0x1F59, 0x219F, 0x240F, 0x26AC, 0x297A, 0x2C7C, 0x2FB6, // 60
    0x332B, 0x36E1, 0x3ADC, 0x3F20, 0x43B4, 0x489D, 0x4DE1, 0x5386,
    0x5995, 0x6014, 0x670B, 0x6E84, 0x7687, 0x7F1F, 0x8857, 0x923A, // 70
    0x9CD4, 0xA833, 0xB465, 0xC17A, 0xCF81, 0xDE8D, 0xEEB0, 0xFFFF,
};
