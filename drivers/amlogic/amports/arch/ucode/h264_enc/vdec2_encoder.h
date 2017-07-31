/*
 * drivers/amlogic/amports/arch/m8_m8m2/h264_enc/vdec2_encoder.h
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
*/

const u32 MicroCode[] __initconst = {
	0x6810001, 0x6800000, 0xd000001, 0x7400040, 0x64c0800, 0x9800300,
	0x0000000, 0x60c0800, 0xc0032c0, 0x649c134, 0x6880000, 0x60c2900,
	0x80c0002, 0x6bf9ac0, 0x7c02d40, 0x6030400, 0x0400000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0xc7ffe80,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0xcc00000, 0x0400000, 0xcc00000, 0x0400000,
	0xc780640, 0x64c0007, 0xcc00000, 0x0400000, 0xc783b00, 0x0000000,
	0xcc00000, 0x0400000, 0xcc00000, 0x0400000, 0xc783980, 0x0000000,
	0xc7836c0, 0x0000000, 0xcc00000, 0x0400000, 0x7801949, 0xa212009,
	0x9c091c9, 0xc790ec0, 0x7c01949, 0x0800000, 0x7802d49, 0xc7ffdc0,
	0x6030409, 0x6bf9b89, 0x6030409, 0x0400000, 0x67f2409, 0x60c4509,
	0x64c4309, 0x5801249, 0xbaf1809, 0x0000000, 0xa2b8047, 0x7802bc9,
	0xaa0c009, 0xa608049, 0xc78a440, 0xa208807, 0xc781280, 0xa208207,
	0xc781e40, 0x64e0f07, 0x9003207, 0x9063247, 0xb403209, 0x2409209,
	0x4008249, 0xba180c9, 0xaee40c9, 0x80c3e00, 0x64c3f07, 0x90021c7,
	0xa6d40c7, 0xcb8001a, 0x0000000, 0x683ffc9, 0xaa18009, 0x649470a,
	0x910828a, 0x7802cc8, 0xa4fc20a, 0x4401249, 0xcc00000, 0x0000000,
	0xc006480, 0x0000000, 0x6490b09, 0x9809009, 0x9809089, 0x6090b09,
	0x9c09009, 0x9c09089, 0x6090b09, 0x8095007, 0x8095000, 0x683ffc9,
	0x6498f0a, 0xaa0c009, 0xa6f800a, 0x4401249, 0x64c3d0a, 0x580a28a,
	0xbef80ca, 0x0000000, 0x6498e0a, 0x980a00a, 0x68007c9, 0x9706289,
	0x6098e0a, 0x6800009, 0x9706289, 0x9c0a00a, 0x6098e0a, 0x649b80a,
	0x6800fc9, 0x9508289, 0xcc00000, 0x609b80a, 0x200ad0a, 0x603510a,
	0x6035209, 0x603500b, 0x643500c, 0x580f30c, 0xbef804c, 0x0000000,
	0x643530c, 0x900c30c, 0xa6f800c, 0x0000000, 0xcc00000, 0x240ad0a,
	0xa269007, 0x680004a, 0xc07f140, 0x7c01e4a, 0x64c000a, 0x9c0a18a,
	0x980a20a, 0x980a00a, 0x60c000a, 0x64c2908, 0x9c08348, 0x9808208,
	0x60c2908, 0x9808348, 0x9c08208, 0x60c2908, 0x64c080a, 0x980a34a,
	0x60c080a, 0xc07ef40, 0x0000000, 0x680004a, 0x60e0c0a, 0x7c026ca,
	0x680000a, 0x7c0248a, 0x80c0600, 0xfc081c0, 0x90a2207, 0x7c02048,
	0x481f1c7, 0x7c02007, 0xaa10147, 0xaa0c047, 0xc7803c0, 0x0000000,
	0xc786840, 0x0000000, 0x64c2307, 0xbefc047, 0xcc00000, 0x64c2007,
	0x40011c7, 0x6800008, 0xa20c047, 0x58011c7, 0x24071c8, 0xcc00000,
	0x0000000, 0x64c0007, 0xa2fc047, 0x0000000, 0x64c3a07, 0x90061c7,
	0xaaec647, 0x0000000, 0x80c0a01, 0x80c2800, 0x80c0002, 0xc7fd8c0,
	0x0000000, 0x680c002, 0x6094002, 0x6803003, 0x6804002, 0xd000003,
	0x6094102, 0x6800002, 0x6094002, 0xc000700, 0x0000000, 0x8002501,
	0x8002605, 0x8002708, 0x800290d, 0x8002d15, 0x8002c14, 0x649b802,
	0x6800fc3, 0x9508083, 0x609b802, 0x8032100, 0x6840008, 0x63f0808,
	0x6800008, 0x63f0808, 0x8002a09, 0x8002b17, 0x6830008, 0x6032608,
	0x8032261, 0x8032101, 0x83f2600, 0x83f2700, 0x6800032, 0xcc00000,
	0x680001b, 0x6800712, 0x6800033, 0x7c02bf3, 0x7c01933, 0x7c01973,
	0x7c01df3, 0x7c01e33, 0x6803002, 0x63f0802, 0x6800002, 0x63f0802,
	0x6800002, 0x60c0c02, 0x6c04042, 0x60c0d02, 0x80c0101, 0x6840442,
	0x60c2e02, 0xcc00000, 0x0000000, 0x67f2419, 0x60c4519, 0x64c4419,
	0x9101659, 0xa6f0019, 0xc7fc880, 0x0000000, 0xcc00000, 0x0400000,
	0x64e1214, 0x91e1514, 0xbef0054, 0x78029d5, 0x649d914, 0x900c514,
	0xacfe554, 0x7802494, 0xaa44094, 0xc782400, 0x6800015, 0x6c04015,
	0x7802857, 0x97c1557, 0x60e1215, 0x7802d15, 0xa20c055, 0x6800018,
	0x6880018, 0x6c04418, 0x2018d18, 0x6800014, 0x7c02a94, 0xc781dc0,
	0x6800114, 0x7802a95, 0xaa08095, 0xc780d40, 0x78024d6, 0xaeb4096,
	0x7802ad4, 0x5405514, 0x7802d15, 0xbe0c055, 0x6800015, 0x6880015,
	0x6c04415, 0x2015d15, 0x2014554, 0x4420514, 0x60e1314, 0x4060614,
	0x7802596, 0xaa14016, 0x6a2c215, 0xaa0c056, 0x6a2c015, 0x6a2c115,
	0xaa10017, 0x6c04015, 0x68003d4, 0x9506554, 0x97c1557, 0x60e1215,
	0x6800014, 0x7c02a94, 0x6800114, 0xc781b00, 0x7c02494, 0x78025d5,
	0x78029d6, 0x2415595, 0x2415595, 0x7802857, 0xaa0c017, 0x2415595,
	0x2415595, 0x7802694, 0x5409514, 0x2014554, 0x5403554, 0x2015d15,
	0x60e1315, 0x7802596, 0xaa34016, 0x6a44215, 0xaa2c056, 0x6a44015,
	0xc780240, 0x6a44115, 0xa64c0d5, 0x78026d4, 0x64e0c16, 0x9010596,
	0xb8e7594, 0xcc00000, 0x0400000, 0xaa10017, 0x6c0c015, 0x68005d4,
	0x9506554, 0x97c1557, 0x60e1215, 0x6800018, 0x6800014, 0x7c02a94,
	0x6800154, 0xc781100, 0x7c02494, 0x7802515, 0xaa1c015, 0x4401555,
	0x7c02515, 0x78024d5, 0x4401555, 0xc780d80, 0x7c024d5, 0x7802615,
	0x7c02655, 0x7802694, 0x5409514, 0x2014554, 0x78029d6, 0x2015595,
	0x7c02615, 0x5403554, 0x2015d15, 0x60e1315, 0x7802596, 0xaa14016,
	0x6a16215, 0xaa0c056, 0x6a16015, 0x6a16115, 0x7803056, 0xaa28016,
	0x78026d4, 0x64e0c16, 0x9010596, 0xb804594, 0x7802656, 0xc7fdec0,
	0x7c02616, 0x4001514, 0x7c026d4, 0x7c02715, 0x6c00015, 0x60e1215,
	0x6800054, 0xc780680, 0x7c02494, 0xba58114, 0x7802855, 0xa608015,
	0xc7ff4c0, 0x78026d5, 0x4001555, 0x7c026d5, 0xaa0c114, 0x6800015,
	0x80c2170, 0xc780300, 0x7c02855, 0xa6d0054, 0x78024d5, 0xaa6c015,
	0x4401555, 0xb264055, 0x7c024d5, 0x7802a54, 0xaa0c0d4, 0x0000000,
	0x80c2170, 0x6800014, 0x7c02494, 0xcc00000, 0x0400000, 0xaa0c014,
	0x6880018, 0x6800018, 0x6c04418, 0xc780940, 0x2018d18, 0x90a8518,
	0x7802c56, 0xb821594, 0xa8f7594, 0x91a1518, 0xaa20014, 0x6880018,
	0xc780180, 0x6800018, 0xaa68018, 0x78025d5, 0xc7ffd40, 0x0000000,
	0x6c04418, 0x2018d18, 0x7802694, 0x5409514, 0x78029d6, 0x2415595,
	0x2014554, 0x5403554, 0x2015d15, 0x60e1315, 0x7802714, 0x9004554,
	0xaa14015, 0x6a14214, 0xaa0c115, 0x6a14014, 0x6a14114, 0x6c08014,
	0x60e0d18, 0x4020618, 0xc7ff5c0, 0x60e1214, 0x7802694, 0x5409514,
	0x2014554, 0x78029d6, 0x2015595, 0x7c025d5, 0x5403554, 0x2015d15,
	0x60e1315, 0x7802714, 0xa618018, 0x9c141d4, 0x60e1214, 0x68000d4,
	0xc7ff1c0, 0x7c02494, 0x6c08014, 0x60e0d18, 0xc7ffe80, 0x4020618,
	0x64e1209, 0x91e1249, 0xbef8049, 0x64e0009, 0x64e030a, 0x64e0e0b,
	0x64e0c0c, 0x83f0840, 0x83f0800, 0x680020d, 0xd00000d, 0x0000000,
	0x60e0009, 0x60e030a, 0x60e0e0b, 0xcc00000, 0x60e0c0c, 0xc000940,
	0x0000000, 0x6810109, 0x6c34749, 0x6090709, 0x6490b09, 0x9809009,
	0x9809089, 0x6090b09, 0x9c09009, 0x9c09089, 0x6090b09, 0x6800009,
	0x6c04409, 0x2009d09, 0x6094409, 0x6880009, 0x6c04409, 0x2009d09,
	0x6094509, 0xcc00000, 0x0000000, 0xc000a80, 0x0000000, 0x8095007,
	0x8095000, 0x6497f08, 0x68000ca, 0x970220a, 0x6097f08, 0x6498e08,
	0x9c08788, 0x6098e08, 0x6820888, 0x6c00208, 0xcc00000, 0x6095108,
	0x683ffc8, 0x6490909, 0xa210049, 0xaa0c008, 0xc7fff40, 0x4401208,
	0x683ffc8, 0x6490909, 0x9343249, 0xa2241c9, 0xaa20008, 0x6490b09,
	0x98090c9, 0x6090b09, 0x9c090c9, 0x6090b09, 0xc7ffdc0, 0x4401208,
	0x6490b09, 0x9809009, 0x9809089, 0x6090b09, 0x9c09009, 0x9c09089,
	0x6090b09, 0xcc00000, 0x0000000, 0x683ffc9, 0x649bb08, 0x920c208,
	0x649530a, 0x900128a, 0x2008288, 0xaa10008, 0xaa0c009, 0xc7ffe40,
	0x4401249, 0xcc00000, 0x0000000, 0xc7804c0, 0x68001c7, 0xc780440,
	0x6800147, 0xc7803c0, 0x6800187, 0xc07f4c0, 0x0000000, 0xc07fb00,
	0x0000000, 0xc079740, 0x80c2301, 0x7c03c07, 0xc079680, 0x80c2301,
	0xaac41c7, 0xaac8147, 0xc780000, 0x0000000, 0x7c02087, 0xc0794c0,
	0x80c2301, 0x7803c07, 0xa614007, 0xc00d000, 0x0000000, 0xc00dac0,
	0x0000000, 0x78020c8, 0xf8001c8, 0x7c01f47, 0x68000c9, 0x7c02409,
	0x7802007, 0xa614147, 0x0000000, 0xc0790c0, 0x80c2301, 0x7c01f87,
	0x7802187, 0xf8001c7, 0x7803c07, 0xaa0c007, 0xc780ec0, 0x0000000,
	0x6800013, 0x7c02cd3, 0x7c02d13, 0x7c02e93, 0x6803fc7, 0x7c02b07,
	0x6800007, 0x7c02547, 0x7c025c7, 0x7c02607, 0x7802c07, 0x40011c7,
	0x7c024c7, 0x6800047, 0x60e0c07, 0x7c026c7, 0x7c02507, 0x68003c7,
	0x7c02807, 0x6805c07, 0x60c2107, 0x80c2170, 0x6800087, 0x7c02a47,
	0x6800018, 0x80c2410, 0x7802087, 0xaa3c147, 0x0000000, 0x80c2200,
	0x6908007, 0x6c00a07, 0x60c2207, 0x80c2204, 0x80c2200, 0x80c2205,
	0x80c2200, 0x68009c7, 0xd000007, 0x80c2200, 0xc780340, 0x0000000,
	0x6bd23c7, 0x6c00007, 0x60c2207, 0x80c2200, 0x80c2200, 0x80c2200,
	0x80c2205, 0x80c2200, 0x68009c7, 0xd000007, 0x80c2200, 0x6800007,
	0x7c01947, 0x6a00007, 0x60c3d07, 0x780248a, 0xa6fc00a, 0x0000000,
	0xc07d2c0, 0x0000000, 0x7803c07, 0xa60c007, 0xc07cd80, 0x0000000,
	0xc07d6c0, 0x0000000, 0x7802087, 0x6840009, 0x680f0da, 0xaa101c7,
	0x6800008, 0x680d11a, 0x6800048, 0x7c02788, 0x7c02689, 0x6800007,
	0x7c02a87, 0x7802c4a, 0xb20c2ca, 0x680044a, 0x6800c0a, 0x6495107,
	0x97061ca, 0x9807647, 0x6095107, 0x7802c8a, 0x7c023ca, 0x6800047,
	0x54181c7, 0x609b307, 0x649b307, 0x54081c7, 0x58081c7, 0x609b207,
	0x609b007, 0x609b107, 0x6bfffc9, 0x64c3d08, 0x9161208, 0xa6f8008,
	0x0000000, 0x60c3809, 0x7803ac7, 0x7c073c7, 0x7803b07, 0x7c07407,
	0x7802087, 0x6800148, 0xa803207, 0xc7802c0, 0x0000000, 0xfc011c0,
	0x6800808, 0x78073c7, 0x9505207, 0x7802947, 0x96a2207, 0x60c2108,
	0xfc011c0, 0x8094200, 0x6494007, 0x9c07247, 0x6094007, 0x7802047,
	0xaa18007, 0x7802007, 0x6800148, 0xa805207, 0x0000000, 0xfc011c0,
	0xc7800c0, 0x0000000, 0xfc021c0, 0x80c2400, 0x6981807, 0x6d81807,
	0x6800208, 0xd000008, 0x60c2207, 0x80c2400, 0x60c2207, 0xc076ac0,
	0x80c2301, 0xc076b40, 0x0000000, 0x401a1c7, 0x7802248, 0x2007207,
	0x7c02387, 0x7802287, 0xaa40007, 0x6800009, 0xc076800, 0x80c2301,
	0xaa30047, 0x9402247, 0xc076700, 0x80c2301, 0xc076780, 0x0000000,
	0x94c4247, 0xc0765c0, 0x80c2301, 0xc076640, 0x0000000, 0x9444247,
	0x60c3109, 0x67f2507, 0xaafc007, 0x0000000, 0x7802787, 0x7802408,
	0x94c21c8, 0x60c0407, 0x80c0a01, 0x7802387, 0x60c0a07, 0xc006280,
	0x80c0600, 0x7802a21, 0x6c00021, 0x6800022, 0x6c00022, 0x6800023,
	0x6c00023, 0x6800024, 0x6c00024, 0x6bfffe5, 0x6800189, 0x7c029c9,
	0xc780200, 0x60c0713, 0x64c0321, 0x64c0322, 0x64c0323, 0x64c0324,
	0x64c2725, 0x60c0713, 0x9210265, 0x7802cc7, 0xa638007, 0x7802a08,
	0x6c00008, 0x60c0208, 0x6800008, 0x6c00008, 0x60c0208, 0x6800008,
	0x6c00008, 0x60c0208, 0x6800008, 0x6c00008, 0x60c0208, 0x6bfffc9,
	0x60c031d, 0x60c031e, 0x60c031f, 0x60c0320, 0x7802448, 0x9610209,
	0x60c2708, 0x7802307, 0x9021247, 0x94411c9, 0x4c301c7, 0x60c2507,
	0x683ffc9, 0x780248a, 0xaa0c00a, 0xa6f8009, 0x4401249, 0x68000ca,
	0x7802749, 0x9510289, 0x7802cc9, 0x9708289, 0x6031e0a, 0x7802807,
	0x7c02887, 0x683ffcb, 0xae1000b, 0x44012cb, 0xc780000, 0x0000000,
	0x64c2307, 0x9304207, 0xa6e8008, 0x90a1207, 0x90241c7, 0x95211c8,
	0x780194b, 0xaa1000b, 0x7c02807, 0xc780dc0, 0x0000000, 0xaa64247,
	0x60c2507, 0xaa64287, 0xaa58347, 0xaa1c048, 0xaa58387, 0xa60c007,
	0xc7801c0, 0x0000000, 0x80c2605, 0x80c2606, 0x80c2602, 0x80c260f,
	0x80c2603, 0x7802a48, 0xaa100c8, 0x6800089, 0xc781700, 0x7c02a49,
	0x780248b, 0xa6fc00b, 0x0000000, 0x7c02a88, 0xc781580, 0x7c02a49,
	0x80c2602, 0x80c260f, 0x80c2603, 0x7802a48, 0xaa48088, 0x68000c9,
	0x7802cc8, 0xaa0c008, 0xc781300, 0x7c02a49, 0x683ffcb, 0x78026c8,
	0x64e0c09, 0x9010249, 0xb804248, 0xaa0c00b, 0xc7ffec0, 0x44012cb,
	0x6800088, 0x68000c9, 0x680180b, 0x60c210b, 0x780248b, 0xa6fc00b,
	0x0000000, 0x7c02a88, 0xc780e80, 0x7c02a49, 0x6800007, 0x7c02807,
	0x60c2507, 0x6431e07, 0xbefc047, 0x68fdfc8, 0x6fcffc8, 0x64e0407,
	0x2807207, 0xc7ff400, 0x60e0407, 0x64c0321, 0x64c0322, 0x64c2725,
	0x60c0713, 0x9210265, 0x7802cc7, 0xa618007, 0x7802a08, 0x6c00008,
	0x60c0208, 0x80c0200, 0x6bfffc9, 0x60c031d, 0x60c031e, 0x7802448,
	0x9610209, 0x60c2708, 0x7802307, 0x9021247, 0x94411c9, 0x4c301c7,
	0x60c2507, 0x683ffc9, 0x4401249, 0xaa0c009, 0x780248a, 0xa6f400a,
	0x68000ca, 0x7802749, 0x9510289, 0x7802cc9, 0x9708289, 0x6031e0a,
	0x7802807, 0x7c02887, 0x64c2307, 0x9304207, 0xa6f8008, 0x90241c7,
	0x7c02807, 0xaa10287, 0x60c2507, 0x80c2602, 0x80c260f, 0x80c2603,
	0x4c001c7, 0x9807207, 0x60c2107, 0x7802547, 0xaa14007, 0x6a01008,
	0xaa0c047, 0x6a22008, 0x6a40008, 0x6431e09, 0xbefc049, 0x6c00108,
	0x60e0508, 0x7802a88, 0x6801809, 0x9502248, 0x60c2109, 0x80c260e,
	0x6800088, 0x7c02587, 0xba0c087, 0x40011c7, 0x6800007, 0x7c02547,
	0x7802cc7, 0x7c02ac7, 0x7802887, 0x7c03047, 0x7c02488, 0x8030580,
	0x7802747, 0x40011c7, 0x7c02747, 0x683ffc8, 0x64c2307, 0x93041c7,
	0xaa2c007, 0x0000000, 0x80c3e01, 0x64c3f07, 0x93e11c7, 0xaae4007,
	0xb6e0048, 0x4401208, 0x6bfffc8, 0xc780000, 0x0000000, 0x7802b0d,
	0xba13fcd, 0x6800008, 0xc780fc0, 0x7c02b08, 0x6808008, 0xba1070d,
	0x400024d, 0x441c249, 0x680c008, 0x5403289, 0x200a24a, 0x2008288,
	0x7400225, 0x4001208, 0x92102e1, 0x740020b, 0x4001208, 0x7400221,
	0x4001208, 0x7400222, 0x4001208, 0x92102e2, 0x740020b, 0x4001208,
	0x7400223, 0x4001208, 0x92102e3, 0x740020b, 0x4001208, 0x7400224,
	0x4001208, 0x92102e4, 0x740020b, 0x7802c48, 0xac04488, 0x7802cca,
	0xc780240, 0x40002ca, 0xa60800a, 0xc7800c0, 0xa6146c9, 0x400128d,
	0xb60c70d, 0x680000a, 0x680070a, 0x7c02b0a, 0xb013488, 0xaa0800a,
	0xa64470a, 0x7802b4a, 0xa20c04a, 0x6a0800b, 0x6a0c00b, 0x6b80009,
	0x7802b8c, 0x540928c, 0x200a24a, 0x6c0440a, 0x200ad0a, 0x603510a,
	0x6803f0a, 0x603520a, 0x603500b, 0xc004d40, 0x0000000, 0x7802cc7,
	0x40011c7, 0x7c02cc7, 0x7802e88, 0x4001208, 0x7c02e88, 0x7802c48,
	0xb81e207, 0x6800007, 0x7c02cc7, 0x7802d08, 0x4001208, 0x63f2608,
	0x63f2708, 0x78023c9, 0xb812248, 0x7c02d08, 0x7802487, 0xa6fc007,
	0x0000000, 0x6430507, 0xa2f0107, 0x0000000, 0xc076d80, 0x0000000,
	0xc0773c0, 0x0000000, 0x6bfffc7, 0x6c00007, 0x63f2607, 0x63f2707,
	0xc780000, 0x0800000, 0x0000000, 0x67f2507, 0xb4fe1c8, 0x0000000,
	0x7801e07, 0xb214a07, 0x680004a, 0x7c01e4a, 0x680204a, 0x7c0194a,
	0x7802cc7, 0x95084c7, 0x7802d09, 0x94084c9, 0x7802c49, 0xb004489,
	0x6808008, 0xc780280, 0x0000000, 0xc7803c0, 0x7802d0a, 0x6800007,
	0xb60c709, 0x6808008, 0x680c008, 0xc780240, 0x0000000, 0xaae8007,
	0x7802b09, 0x40011c9, 0xba10707, 0xb6d8e07, 0x680c008, 0x441c1c7,
	0x5403247, 0x20091c9, 0x2008248, 0x7000209, 0x7c02449, 0x4001208,
	0x7000209, 0x4001208, 0x700021d, 0x9610749, 0x4001208, 0x700021e,
	0x4001208, 0x7000209, 0x9610789, 0x4001208, 0x700021f, 0x4001208,
	0x7000209, 0x96107c9, 0x4001208, 0x7000220, 0x4001208, 0x7000209,
	0x9610809, 0xc7eddc0, 0x0000000, 0x7802087, 0xa6101c7, 0x0000000,
	0xc781440, 0x0000000, 0x80c2400, 0x64c2207, 0x9305207, 0x93a2287,
	0x9205247, 0x92a22c7, 0x54022cb, 0x2c0a2ca, 0x9105347, 0x91a22c7,
	0x54042cb, 0x2c0a2ca, 0x9005387, 0x90a22c7, 0x54062cb, 0x2c0a2ca,
	0x80c2408, 0x5418208, 0x609b308, 0x649b308, 0x5418249, 0x609b309,
	0x649b309, 0x541834d, 0x609b30d, 0x649b30d, 0x541838e, 0x609b30e,
	0x649b30e, 0x8098002, 0x6bfffcb, 0x54102cb, 0x6bfffcc, 0x2c0c2cc,
	0x609820c, 0x48032ca, 0xa6500cb, 0x0000000, 0xc7800c0, 0x0000000,
	0xc780640, 0x54102c8, 0x58102cb, 0x5410308, 0x2c0c2cc, 0x609810c,
	0x54042ca, 0x609800b, 0xa811248, 0x0000000, 0x54102c9, 0x58102cb,
	0x5410309, 0x2c0c2cc, 0xc7802c0, 0x609820c, 0x54102c8, 0x58102cb,
	0x5410309, 0x2c0c2cc, 0x609810c, 0x54042ca, 0x4c042cb, 0xc7800c0,
	0x609800b, 0xc780380, 0x48032ca, 0x54182cb, 0x2c0b20b, 0x483030a,
	0x541430c, 0x2c0c34c, 0xa80730b, 0x0000000, 0x54102cd, 0x58102cb,
	0x541030e, 0x2c0c2cc, 0x609820c, 0x6800712, 0x6bfffcb, 0x6800021,
	0x7802a1d, 0x680001e, 0x6800022, 0x680001f, 0x6800023, 0x6800020,
	0x6800024, 0x400099d, 0x40009de, 0x4000a1f, 0x4000a60, 0x680800a,
	0x680070e, 0x740028b, 0x400128a, 0x74002a1, 0x400128a, 0x740029d,
	0x400128a, 0x740029e, 0x400128a, 0x74002a2, 0x400128a, 0x740029f,
	0x400128a, 0x74002a3, 0x400128a, 0x74002a0, 0x400128a, 0x74002a4,
	0xd07fbce, 0x400128a, 0x7c0244b, 0x7c0298b, 0x96102cb, 0x80c0700,
	0x60c270b, 0x9610761, 0x60c021d, 0x96107a2, 0x780278e, 0xaa1800e,
	0x60c021e, 0x96107e3, 0x60c021f, 0x9610824, 0x60c0220, 0x80c0701,
	0x60c270b, 0x60c021d, 0xaa1000e, 0x60c021e, 0x60c021f, 0x60c0220,
	0x7802c4e, 0xb00948e, 0x6b80007, 0x6c04407, 0x2007d07, 0x6035107,
	0x6803f07, 0x6035207, 0x6a08007, 0x6035007, 0x7802cc7, 0xa60c007,
	0x6803fc7, 0x7c02b07, 0x6800007, 0x7c02747, 0xac0b48e, 0x7802b07,
	0xb613fc7, 0xba0c707, 0x441c1c7, 0x7c02b07, 0x6435007, 0x580f1c7,
	0xbef8047, 0xcc00000, 0x0000000, 0x6435007, 0x580f1c7, 0xbef8047,
	0x0000000, 0x6435307, 0x900c1c7, 0xa6f8007, 0x6b80007, 0x6c04407,
	0x2007d07, 0x6035107, 0x6803f07, 0x6035207, 0x6b0c007, 0x6035007,
	0x54011d2, 0xac051ce, 0x6800087, 0x7c02b47, 0xc7ff8c0, 0x7c02b87,
	0x6b90008, 0x6c04408, 0x2008d08, 0x5401252, 0x2009489, 0x680008a,
	0x7c02b4a, 0x68000ca, 0x6435007, 0x580f1c7, 0xbef8047, 0x6803f07,
	0x6035108, 0x6035207, 0x6a08007, 0x6035007, 0xac0324e, 0xc7ff400,
	0x7c02b8a, 0x6808007, 0x20081c8, 0x2009489, 0xc7ffc80, 0x400128a,
	0x400130c, 0x480f30c, 0x7c02b8c, 0x980b38b, 0x7802b4c, 0x540928c,
	0x200a24a, 0x6c0440a, 0x200ad0a, 0x400130c, 0x480f30c, 0x7c02b4c,
	0x643500c, 0x580f30c, 0xbef804c, 0x0000000, 0x643530c, 0x900c30c,
	0xa6f800c, 0x0000000, 0x603510a, 0x6803f0a, 0x603520a, 0xc7fedc0,
	0x603500b, 0x64c2908, 0x9c080c8, 0x60c2908, 0x80e0000, 0x649c909,
	0x7c020c9, 0x6800007, 0x7c02147, 0x649c807, 0x7c02187, 0x6800047,
	0x7c03907, 0x6800007, 0x7c03947, 0x649ca07, 0x9010247, 0x60c0909,
	0x7c02c49, 0x4401249, 0x7c02c09, 0x9210247, 0x7c02c89, 0x6800047,
	0x7c02107, 0x4000289, 0x7802c48, 0x9610288, 0x609520a, 0x5404289,
	0x968c288, 0x609080a, 0xe000248, 0x0000000, 0x0000000, 0xf000200,
	0x7c03a48, 0x7c02947, 0x6800047, 0xaa10007, 0x54011c7, 0x7802108,
	0x94411c8, 0x7c02307, 0xcc00000, 0x0000000, 0x6800007, 0x7c02a07,
	0x6800007, 0x7c021c7, 0x6800808, 0x6800007, 0x7c03ac7, 0x9505207,
	0x6800007, 0x7c03b07, 0x9605207, 0x7802947, 0x96a2207, 0x60c2108,
	0x649cb07, 0x441a1c7, 0x7c02247, 0x6800007, 0x6800007, 0x6801008,
	0x9505207, 0x60c2108, 0x6801408, 0x9505207, 0x60c2108, 0x6800007,
	0x7c02287, 0x6800007, 0x64e0e08, 0x9401207, 0x60e0e08, 0x7802308,
	0x9c08008, 0xcc00000, 0x7c02308, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x6bff7c0, 0x6032400,
	0x0400000, 0xc780000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0xcc00000, 0x0400000, 0xcc00000, 0x0400000,
	0xcc00000, 0x0400000, 0xcc00000, 0x0400000, 0xcc00000, 0x0400000,
	0xc780200, 0x6431e07, 0xcc00000, 0x0400000, 0xcc00000, 0x0400000,
	0xcc00000, 0x0400000, 0x9027207, 0xa668048, 0x68fdfca, 0x6fcffca,
	0x64e0408, 0x2808288, 0x9110287, 0x64c0909, 0xac0924a, 0xb80324a,
	0xc7801c0, 0x9808688, 0x400128a, 0x98083c8, 0xa40324a, 0x440128a,
	0x98086c8, 0xaa1000a, 0x9308287, 0xa60c00a, 0x400128a, 0x9808388,
	0xb80324a, 0x0000000, 0x98081c8, 0xc780100, 0x60e0408, 0xc780080,
	0x0000000, 0x8031e00, 0xcc00000, 0x0400000, 0x0000000, 0x0000000,
	0x0000000, 0x0000000, 0x0000000, 0x0000000
};
