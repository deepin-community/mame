// license:BSD-3-Clause
// copyright-holders:Wilbert Pol

/* CGA palettes
 *
 * The first 16 are for RGB monitors
 * The next  16 are for greyscale modes
 * The next  16 are for text modes on colour composite
 * The next  16*16 are Mode 6 (colour composite) }
 * The next  64*16 are Mode 4 (colour composite) } both indexed by the CGA colour select register 0x3D9
 *
 */

#include "emu.h"
#include "video/cgapal.h"

const unsigned char cga_palette[16 * CGA_PALETTE_SETS][3] =
{
/* RGB colours */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0xaa }, { 0x00, 0xaa, 0x00 }, { 0x00, 0xaa, 0xaa },
	{ 0xaa, 0x00, 0x00 }, { 0xaa, 0x00, 0xaa }, { 0xaa, 0x55, 0x00 }, { 0xaa, 0xaa, 0xaa },
	{ 0x55, 0x55, 0x55 }, { 0x55, 0x55, 0xff }, { 0x55, 0xff, 0x55 }, { 0x55, 0xff, 0xff },
	{ 0xff, 0x55, 0x55 }, { 0xff, 0x55, 0xff }, { 0xff, 0xff, 0x55 }, { 0xff, 0xff, 0xff },
/* Greyscale */
	{ 0x00, 0x00, 0x00 }, { 0x11, 0x11, 0x11 }, { 0x44, 0x44, 0x44 }, { 0x55, 0x55, 0x55 },
	{ 0x22, 0x22, 0x22 }, { 0x33, 0x33, 0x33 }, { 0x66, 0x66, 0x66 }, { 0x77, 0x77, 0x77 },
	{ 0x88, 0x88, 0x88 }, { 0x99, 0x99, 0x99 }, { 0xCC, 0xCC, 0xCC }, { 0xDD, 0xDD, 0xDD },
	{ 0xAA, 0xAA, 0xAA }, { 0xBB, 0xBB, 0xBB }, { 0xEE, 0xEE, 0xEE }, { 0xFF, 0xFF, 0xFF },
/* Text mode, composite monitor */
	{ 0x00, 0x00, 0x00 }, { 0x0E, 0x00, 0x7A }, { 0x07, 0x55, 0x00 }, { 0x02, 0x65, 0x39 },
	{ 0x51, 0x00, 0x1A }, { 0x54, 0x00, 0x76 }, { 0x48, 0x63, 0x00 }, { 0x8c, 0x8c, 0x8c },
	{ 0x38, 0x38, 0x38 }, { 0x58, 0x49, 0xD5 }, { 0x5F, 0xAD, 0x26 }, { 0x5B, 0xB9, 0xAC },
	{ 0xAA, 0x4A, 0x5E }, { 0xA7, 0x55, 0xD2 }, { 0xA2, 0xB9, 0x31 }, { 0xE2, 0xE2, 0xE2 },
/* Composite hi-res, colour reg = 0 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 }, { 0x00, 0x00, 0x00 },
/* Composite hi-res, colour reg = 1 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x04, 0x04 }, { 0x00, 0x00, 0x61 }, { 0x00, 0x00, 0x6b },
	{ 0x25, 0x00, 0x1E }, { 0x15, 0x00, 0x23 }, { 0x18, 0x00, 0x87 }, { 0x06, 0x00, 0x91 },
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x0b, 0x00 }, { 0x00, 0x00, 0x4C }, { 0x00, 0x02, 0x52 },
	{ 0x24, 0x00, 0x08 }, { 0x0E, 0x00, 0x0D }, { 0x18, 0x00, 0x6f }, { 0x07, 0x00, 0x7C },
/* Composite hi-res, colour reg = 2 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x28, 0x00 }, { 0x01, 0x00, 0x46 }, { 0x00, 0x21, 0x36 },
	{ 0x22, 0x00, 0x01 }, { 0x00, 0x21, 0x00 }, { 0x1b, 0x00, 0x43 }, { 0x00, 0x22, 0x33 },
	{ 0x07, 0x0D, 0x00 }, { 0x00, 0x4B, 0x00 }, { 0x04, 0x0E, 0x00 }, { 0x00, 0x57, 0x00 },
	{ 0x25, 0x02, 0x00 }, { 0x01, 0x46, 0x00 }, { 0x30, 0x04, 0x00 }, { 0x04, 0x53, 0x00 },
/* Composite hi-res, colour reg = 3 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x30, 0x00 }, { 0x00, 0x00, 0x8E }, { 0x00, 0x38, 0x87 },
	{ 0x2E, 0x00, 0x01 }, { 0x00, 0x21, 0x00 }, { 0x22, 0x00, 0x8C }, { 0x00, 0x35, 0x95 },
	{ 0x00, 0x0F, 0x00 }, { 0x00, 0x4F, 0x00 }, { 0x00, 0x0B, 0x3F }, { 0x00, 0x62, 0x45 },
	{ 0x29, 0x00, 0x00 }, { 0x00, 0x4E, 0x00 }, { 0x35, 0x04, 0x48 }, { 0x01, 0x62, 0x49 },
/* Composite hi-res, colour reg = 4 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x06, 0x02 }, { 0x01, 0x00, 0x1f }, { 0x00, 0x00, 0x24 },
	{ 0x54, 0x00, 0x38 }, { 0x25, 0x00, 0x23 }, { 0x3A, 0x00, 0x4f }, { 0x29, 0x00, 0x56 },
	{ 0x10, 0x03, 0x00 }, { 0x06, 0x08, 0x00 }, { 0x15, 0x00, 0x00 }, { 0x02, 0x03, 0x00 },
	{ 0x82, 0x00, 0x00 }, { 0x49, 0x00, 0x00 }, { 0x5B, 0x00, 0x0b }, { 0x52, 0x00, 0x0c },
/* Composite hi-res, colour reg = 5 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x2c, 0x00 }, { 0x06, 0x01, 0x57 }, { 0x00, 0x22, 0x42 },
	{ 0x33, 0x00, 0x01 }, { 0x00, 0x26, 0x00 }, { 0x3a, 0x00, 0x54 }, { 0x08, 0x1D, 0x54 },
	{ 0x13, 0x17, 0x00 }, { 0x00, 0x64, 0x00 }, { 0x29, 0x15, 0x00 }, { 0x00, 0x64, 0x00 },
	{ 0x59, 0x0A, 0x00 }, { 0x30, 0x61, 0x00 }, { 0x7A, 0x06, 0x00 }, { 0x4A, 0x64, 0x00 },
/* Composite hi-res, colour reg = 6 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x33, 0x00 }, { 0x06, 0x00, 0x5E }, { 0x00, 0x22, 0x45 },
	{ 0x34, 0x00, 0x04 }, { 0x00, 0x1e, 0x00 }, { 0x3d, 0x00, 0x4c }, { 0x0c, 0x22, 0x58 },
	{ 0x18, 0x19, 0x00 }, { 0x00, 0x62, 0x00 }, { 0x2b, 0x14, 0x00 }, { 0x01, 0x64, 0x00 },
	{ 0x57, 0x0f, 0x00 }, { 0x29, 0x63, 0x00 }, { 0x78, 0x09, 0x00 }, { 0x51, 0x61, 0x00 },
/* Composite hi-res, colour reg = 7 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x3C, 0x01 }, { 0x04, 0x00, 0xC5 }, { 0x00, 0x4C, 0xC7 },
	{ 0x6A, 0x00, 0x15 }, { 0x28, 0x28, 0x24 }, { 0x8A, 0x00, 0xF8 }, { 0x70, 0x61, 0xFF },
	{ 0x20, 0x33, 0x00 }, { 0x00, 0x85, 0x00 }, { 0x2E, 0x25, 0x28 }, { 0x00, 0x98, 0x3B },
	{ 0xb1, 0x11, 0x00 }, { 0x6A, 0x75, 0x00 }, { 0xcc, 0x16, 0x81 }, { 0x91, 0x8e, 0x91 },
/* Composite hi-res, colour reg = 8 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x12, 0x0F }, { 0x04, 0x00, 0x5F }, { 0x00, 0x02, 0x67 },
	{ 0x31, 0x00, 0x01 }, { 0x04, 0x01, 0x04 }, { 0x37, 0x00, 0x52 }, { 0x17, 0x00, 0x6d },
	{ 0x00, 0x10, 0x00 }, { 0x00, 0x29, 0x00 }, { 0x04, 0x03, 0x04 }, { 0x00, 0x24, 0x16 },
	{ 0x2f, 0x00, 0x00 }, { 0x07, 0x23, 0x00 }, { 0x43, 0x00, 0x08 }, { 0x25, 0x23, 0x24 },
/* Composite hi-res, colour reg = 9 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x19, 0x14 }, { 0x00, 0x00, 0xc2 }, { 0x00, 0x1c, 0xed },
	{ 0x5e, 0x00, 0x13 }, { 0x2c, 0x03, 0x3a }, { 0x78, 0x00, 0xfa }, { 0x49, 0x11, 0xff },
	{ 0x00, 0x15, 0x00 }, { 0x00, 0x40, 0x00 }, { 0x0d, 0x11, 0x68 }, { 0x00, 0x4f, 0x9c },
	{ 0x67, 0x00, 0x00 }, { 0x39, 0x36, 0x00 }, { 0x91, 0x05, 0xa6 }, { 0x62, 0x45, 0xdc },
/* Composite hi-res, colour reg = A */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x4B, 0x08 }, { 0x05, 0x00, 0xAA }, { 0x00, 0x50, 0xc7 },
	{ 0x58, 0x00, 0x06 }, { 0x05, 0x44, 0x06 }, { 0x75, 0x00, 0xb0 }, { 0x2e, 0x4f, 0xdc },
	{ 0x0c, 0x2f, 0x00 }, { 0x00, 0xa7, 0x00 }, { 0x26, 0x2e, 0x03 }, { 0x00, 0xb4, 0x24 },
	{ 0x84, 0x1b, 0x00 }, { 0x2d, 0xa5, 0x00 }, { 0xa5, 0x2a, 0x16 }, { 0x5f, 0xb2, 0x2a },
/* Composite hi-res, colour reg = B */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x59, 0x07 }, { 0x00, 0x08, 0xf0 }, { 0x00, 0x06, 0xfd },
	{ 0x69, 0x00, 0x09 }, { 0x0d, 0x4c, 0x10 }, { 0x8f, 0x00, 0xf4 }, { 0x38, 0x66, 0xff },
	{ 0x02, 0x27, 0x00 }, { 0x00, 0xac, 0x00 }, { 0x19, 0x2f, 0x6d }, { 0x00, 0xc5, 0x82 },
	{ 0x7b, 0x18, 0x00 }, { 0x30, 0xa7, 0x00 }, { 0xac, 0x2b, 0x81 }, { 0x5b, 0xc0, 0xa4 },
/* Composite hi-res, colour reg = C */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x1C, 0x0C }, { 0x0a, 0x00, 0x7c }, { 0x00, 0x0d, 0x8f },
	{ 0x6e, 0x00, 0x18 }, { 0x48, 0x02, 0x4a }, { 0x95, 0x00, 0xc3 }, { 0x68, 0x01, 0xef },
	{ 0x12, 0x1d, 0x00 }, { 0x00, 0x53, 0x00 }, { 0x33, 0x21, 0x00 }, { 0x05, 0x52, 0x13 },
	{ 0xb4, 0x09, 0x00 }, { 0x87, 0x41, 0x00 }, { 0xd8, 0x07, 0x3a }, { 0xb0, 0x49, 0x63 },
/* Composite hi-res, colour reg = D */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x1d, 0x17 }, { 0x00, 0x08, 0xcf }, { 0x00, 0x1b, 0xf2 },
	{ 0x83, 0x00, 0x30 }, { 0x4c, 0x08, 0x53 }, { 0xae, 0x00, 0xfa }, { 0x85, 0x0b, 0xff },
	{ 0x09, 0x19, 0x00 }, { 0x00, 0x57, 0x00 }, { 0x21, 0x15, 0x4f }, { 0x00, 0x5e, 0x89 },
	{ 0xb0, 0x04, 0x00 }, { 0x76, 0x4e, 0x00 }, { 0xe2, 0x0a, 0xa9 }, { 0xae, 0x56, 0xe1 },
/* Composite hi-res, colour reg = E */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x57, 0x06 }, { 0x17, 0x00, 0xc3 }, { 0x00, 0x55, 0xd9 },
	{ 0x6f, 0x00, 0x06 }, { 0x18, 0x49, 0x0d }, { 0xa4, 0x00, 0xcd }, { 0x4e, 0x4c, 0xf7 },
	{ 0x1c, 0x3f, 0x00 }, { 0x00, 0xbf, 0x00 }, { 0x51, 0x35, 0x00 }, { 0x06, 0xc4, 0x1b },
	{ 0xb6, 0x2d, 0x00 }, { 0x73, 0xb2, 0x00 }, { 0xf5, 0x30, 0x21 }, { 0xaa, 0xbf, 0x2f },
/* Composite hi-res, colour reg = F */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x68, 0x10 }, { 0x10, 0x00, 0xff }, { 0x00, 0x7c, 0xFF },
	{ 0xb3, 0x00, 0x2A }, { 0x53, 0x55, 0x51 }, { 0xf0, 0x00, 0xff }, { 0x95, 0x72, 0xff },
	{ 0x25, 0x3e, 0x00 }, { 0x00, 0xda, 0x00 }, { 0x58, 0x52, 0x56 }, { 0x00, 0xf8, 0x7f },
	{ 0xf8, 0x2c, 0x00 }, { 0xa8, 0xcf, 0x00 }, { 0xff, 0x41, 0xb8 }, { 0xed, 0xea, 0xed },
/* Composite lo-res, colour reg = 0 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x26, 0x34 }, { 0x00, 0x00, 0x24 }, { 0x00, 0x25, 0x46 },
	{ 0x29, 0x03, 0x00 }, { 0x04, 0x55, 0x00 }, { 0x1f, 0x0c, 0x00 }, { 0x0e, 0x53, 0x03 },
	{ 0x50, 0x00, 0x00 }, { 0x33, 0x36, 0x2b }, { 0x51, 0x00, 0x0b }, { 0x43, 0x37, 0x44 },
	{ 0x60, 0x07, 0x00 }, { 0x3c, 0x61, 0x00 }, { 0x59, 0x1c, 0x00 }, { 0x4a, 0x64, 0x00 },
/* Composite lo-res, colour reg = 1 */
	{ 0x07, 0x00, 0x7d }, { 0x00, 0x21, 0x4e }, { 0x15, 0x00, 0x36 }, { 0x04, 0x19, 0x77 },
	{ 0x16, 0x1a, 0x00 }, { 0x04, 0x55, 0x00 }, { 0x23, 0x0b, 0x00 }, { 0x13, 0x51, 0x03 },
	{ 0x41, 0x02, 0x3e }, { 0x2e, 0x33, 0x24 }, { 0x51, 0x00, 0x14 }, { 0x41, 0x33, 0x46 },
	{ 0x51, 0x2b, 0x00 }, { 0x3f, 0x60, 0x00 }, { 0x60, 0x17, 0x00 }, { 0x4d, 0x61, 0x00 },
/* Composite lo-res, colour reg = 2 */
	{ 0x03, 0x55, 0x00 }, { 0x03, 0x55, 0x00 }, { 0x21, 0x0c, 0x00 }, { 0x11, 0x51, 0x03 },
	{ 0x03, 0x55, 0x00 }, { 0x03, 0x55, 0x00 }, { 0x21, 0x0c, 0x00 }, { 0x11, 0x51, 0x03 },
	{ 0x31, 0x37, 0x29 }, { 0x30, 0x36, 0x2a }, { 0x51, 0x00, 0x11 }, { 0x41, 0x34, 0x46 },
	{ 0x3c, 0x63, 0x00 }, { 0x3d, 0x63, 0x00 }, { 0x5f, 0x17, 0x00 }, { 0x4d, 0x61, 0x00 },
/* Composite lo-res, colour reg = 3 */
	{ 0x04, 0x61, 0x4e }, { 0x05, 0x49, 0x02 }, { 0x1f, 0x04, 0x00 }, { 0x12, 0x47, 0x13 },
	{ 0x03, 0x68, 0x2f }, { 0x05, 0x54, 0x00 }, { 0x1e, 0x0e, 0x00 }, { 0x0f, 0x51, 0x01 },
	{ 0x26, 0x46, 0x73 }, { 0x2f, 0x34, 0x27 }, { 0x50, 0x00, 0x0b }, { 0x48, 0x31, 0x47 },
	{ 0x3e, 0x70, 0x1e }, { 0x40, 0x5f, 0x00 }, { 0x57, 0x1d, 0x00 }, { 0x4a, 0x62, 0x00 },
/* Composite lo-res, colour reg = 4 */
	{ 0x52, 0x00, 0x14 }, { 0x2e, 0x32, 0x25 }, { 0x52, 0x00, 0x14 }, { 0x46, 0x2f, 0x47 },
	{ 0x1f, 0x09, 0x00 }, { 0x04, 0x55, 0x00 }, { 0x21, 0x0e, 0x00 }, { 0x11, 0x50, 0x02 },
	{ 0x52, 0x00, 0x14 }, { 0x2d, 0x33, 0x25 }, { 0x52, 0x00, 0x14 }, { 0x40, 0x36, 0x3f },
	{ 0x5c, 0x18, 0x00 }, { 0x40, 0x5f, 0x00 }, { 0x5e, 0x19, 0x00 }, { 0x4b, 0x62, 0x00 },
/* Composite lo-res, colour reg = 5 */
	{ 0x51, 0x00, 0x81 }, { 0x2a, 0x2a, 0x3f }, { 0x4f, 0x00, 0x1c }, { 0x3b, 0x2b, 0x5c },
	{ 0x22, 0x1b, 0x13 }, { 0x04, 0x55, 0x00 }, { 0x21, 0x0e, 0x00 }, { 0x0e, 0x52, 0x04 },
	{ 0x4c, 0x03, 0x59 }, { 0x2e, 0x32, 0x25 }, { 0x51, 0x00, 0x0b }, { 0x3e, 0x37, 0x3d },
	{ 0x5d, 0x2a, 0x03 }, { 0x3d, 0x60, 0x00 }, { 0x5d, 0x19, 0x00 }, { 0x4a, 0x63, 0x00 },
/* Composite lo-res, colour reg = 6 */
	{ 0x4b, 0x60, 0x00 }, { 0x41, 0x5f, 0x00 }, { 0x5b, 0x1a, 0x00 }, { 0x4b, 0x60, 0x00 },
	{ 0x0e, 0x51, 0x03 }, { 0x03, 0x55, 0x00 }, { 0x22, 0x0b, 0x00 }, { 0x12, 0x51, 0x03 },
	{ 0x41, 0x34, 0x47 }, { 0x31, 0x37, 0x29 }, { 0x50, 0x00, 0x10 }, { 0x3f, 0x32, 0x43 },
	{ 0x4b, 0x60, 0x00 }, { 0x3d, 0x61, 0x00 }, { 0x62, 0x16, 0x00 }, { 0x4b, 0x60, 0x00 },
/* Composite lo-res, colour reg = 7 */
	{ 0x8b, 0x8b, 0x8b }, { 0x83, 0x5b, 0x00 }, { 0xa4, 0x1b, 0x00 }, { 0x92, 0x5a, 0x09 },
	{ 0x07, 0x79, 0x6f }, { 0x06, 0x55, 0x00 }, { 0x1f, 0x0d, 0x00 }, { 0x10, 0x52, 0x01 },
	{ 0x23, 0x62, 0xa4 }, { 0x2b, 0x33, 0x29 }, { 0x51, 0x00, 0x11 }, { 0x40, 0x36, 0x42 },
	{ 0x46, 0x86, 0x63 }, { 0x42, 0x5e, 0x00 }, { 0x5e, 0x17, 0x00 }, { 0x4a, 0x62, 0x00 },
/* Composite lo-res, colour reg = 8 */
	{ 0x26, 0x26, 0x26 }, { 0x0a, 0x49, 0x00 }, { 0x25, 0x07, 0x00 }, { 0x16, 0x4c, 0x0e },
	{ 0x1c, 0x29, 0x12 }, { 0x06, 0x55, 0x00 }, { 0x21, 0x0c, 0x00 }, { 0x11, 0x51, 0x02 },
	{ 0x4d, 0x10, 0x5f }, { 0x2c, 0x33, 0x26 }, { 0x51, 0x00, 0x0f }, { 0x41, 0x35, 0x47 },
	{ 0x5a, 0x35, 0x00 }, { 0x43, 0x5f, 0x00 }, { 0x5f, 0x15, 0x00 }, { 0x4d, 0x62, 0x00 },
/* Composite lo-res, colour reg = 9 */
	{ 0x92, 0x47, 0xd3 }, { 0x47, 0x47, 0x1b }, { 0x66, 0x00, 0x09 }, { 0x54, 0x44, 0x37 },
	{ 0x15, 0x4b, 0x8a }, { 0x05, 0x55, 0x00 }, { 0x00, 0x10, 0x00 }, { 0x10, 0x52, 0x02 },
	{ 0x40, 0x33, 0xd4 }, { 0x2f, 0x33, 0x26 }, { 0x51, 0x00, 0x0d }, { 0x3e, 0x37, 0x3e },
	{ 0x51, 0x59, 0x75 }, { 0x3b, 0x63, 0x00 }, { 0x5b, 0x1a, 0x00 }, { 0x49, 0x64, 0x00 },
/* Composite lo-res, colour reg = A */
	{ 0x57, 0xac, 0x33 }, { 0x54, 0x7f, 0x00 }, { 0x7f, 0x2e, 0x00 }, { 0x6a, 0x77, 0x00 },
	{ 0x05, 0x80, 0x70 }, { 0x03, 0x54, 0x00 }, { 0x22, 0x0c, 0x00 }, { 0x13, 0x52, 0x00 },
	{ 0x31, 0x64, 0xbe }, { 0x30, 0x35, 0x2a }, { 0x52, 0x00, 0x12 }, { 0x41, 0x33, 0x46 },
	{ 0x3c, 0x91, 0x50 }, { 0x3c, 0x62, 0x00 }, { 0x60, 0x15, 0x00 }, { 0x4f, 0x61, 0x00 },
/* Composite lo-res, colour reg = B */
	{ 0x5b, 0xb9, 0xa7 }, { 0x5b, 0x6d, 0x00 }, { 0x7f, 0x29, 0x00 }, { 0x6c, 0x6e, 0x00 },
	{ 0x05, 0x95, 0xcb }, { 0x04, 0x54, 0x00 }, { 0x23, 0x0a, 0x00 }, { 0x12, 0x51, 0x02 },
	{ 0x28, 0x77, 0xfb }, { 0x32, 0x37, 0x2f }, { 0x52, 0x00, 0x12 }, { 0x3e, 0x34, 0x40 },
	{ 0x3a, 0xa3, 0xaf }, { 0x3c, 0x63, 0x00 }, { 0x60, 0x15, 0x00 }, { 0x50, 0x61, 0x00 },
/* Composite lo-res, colour reg = C */
	{ 0xaa, 0x45, 0x6a }, { 0x8c, 0x59, 0x00 }, { 0xa8, 0x1a, 0x00 }, { 0x96, 0x60, 0x05 },
	{ 0x20, 0x35, 0x41 }, { 0x03, 0x55, 0x00 }, { 0x22, 0x0b, 0x00 }, { 0x10, 0x52, 0x02 },
	{ 0x4f, 0x1e, 0xa2 }, { 0x2e, 0x34, 0x25 }, { 0x50, 0x00, 0x10 }, { 0x42, 0x36, 0x45 },
	{ 0x56, 0x48, 0x2a }, { 0x41, 0x5e, 0x00 }, { 0x5d, 0x19, 0x00 }, { 0x49, 0x64, 0x00 },
/* Composite lo-res, colour reg = D */
	{ 0xa9, 0x54, 0xd6 }, { 0x85, 0x52, 0x09 }, { 0xa5, 0x17, 0x00 }, { 0x96, 0x52, 0x23 },
	{ 0x1e, 0x48, 0x9f }, { 0x06, 0x55, 0x00 }, { 0x1f, 0x0c, 0x00 }, { 0x0f, 0x52, 0x01 },
	{ 0x46, 0x35, 0xe1 }, { 0x2b, 0x32, 0x26 }, { 0x51, 0x00, 0x0e }, { 0x3e, 0x39, 0x3e },
	{ 0x5d, 0x58, 0x88 }, { 0x41, 0x60, 0x00 }, { 0x57, 0x1c, 0x00 }, { 0x4a, 0x62, 0x00 },
/* Composite lo-res, colour reg = E */
	{ 0xa4, 0xbb, 0x30 }, { 0x9d, 0x84, 0x00 }, { 0xb6, 0x3f, 0x00 }, { 0xa1, 0x8c, 0x00 },
	{ 0x14, 0x7b, 0x8a }, { 0x06, 0x55, 0x00 }, { 0x21, 0x0b, 0x00 }, { 0x13, 0x51, 0x02 },
	{ 0x3f, 0x67, 0xd5 }, { 0x2d, 0x36, 0x29 }, { 0x52, 0x00, 0x11 }, { 0x41, 0x33, 0x46 },
	{ 0x4c, 0x8e, 0x6e }, { 0x3e, 0x61, 0x00 }, { 0x5f, 0x16, 0x00 }, { 0x4c, 0x61, 0x00 },
/* Composite lo-res, colour reg = F */
	{ 0xe3, 0xe3, 0xe3 }, { 0xdb, 0x82, 0x00 }, { 0xf5, 0x43, 0x00 }, { 0xee, 0x83, 0x00 },
	{ 0x08, 0xa6, 0xf5 }, { 0x04, 0x53, 0x00 }, { 0x1c, 0x0d, 0x00 }, { 0x13, 0x52, 0x00 },
	{ 0x25, 0x91, 0xfc }, { 0x2c, 0x35, 0x30 }, { 0x51, 0x00, 0x0e }, { 0x3b, 0x36, 0x38 },
	{ 0x43, 0xb5, 0xf7 }, { 0x3b, 0x62, 0x00 }, { 0x56, 0x1c, 0x00 }, { 0x4d, 0x61, 0x00 },
/* Composite lo-res, colour reg = 10 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x58, 0xb9 }, { 0x00, 0x11, 0x8a }, { 0x00, 0x4a, 0xe1 },
	{ 0x73, 0x22, 0x00 }, { 0x5a, 0xad, 0x2e }, { 0x78, 0x61, 0x0d }, { 0x6a, 0xa9, 0x4c },
	{ 0xac, 0x0a, 0x00 }, { 0x87, 0x8d, 0x80 }, { 0xab, 0x46, 0x6c }, { 0x95, 0x8b, 0x97 },
	{ 0xac, 0x30, 0x00 }, { 0x91, 0xbc, 0x16 }, { 0xb8, 0x6d, 0x07 }, { 0xa7, 0xb9, 0x2d },
/* Composite lo-res, colour reg = 11 */
	{ 0x60, 0x00, 0x7c }, { 0x01, 0x54, 0xdb }, { 0x09, 0x11, 0xb9 }, { 0x07, 0x47, 0xf8 },
	{ 0x76, 0x46, 0x02 }, { 0x5a, 0xae, 0x2e }, { 0x78, 0x62, 0x0c }, { 0x68, 0xa9, 0x4b },
	{ 0x99, 0x2a, 0x09 }, { 0x87, 0x8d, 0x80 }, { 0xab, 0x46, 0x6b }, { 0x93, 0x89, 0x95 },
	{ 0xa4, 0x54, 0x00 }, { 0x93, 0xbb, 0x16 }, { 0xb9, 0x6b, 0x04 }, { 0xa4, 0xb9, 0x30 },
/* Composite lo-res, colour reg = 12 */
	{ 0x07, 0x55, 0x00 }, { 0x03, 0x83, 0x70 }, { 0x1c, 0x3a, 0x42 }, { 0x0e, 0x81, 0x82 },
	{ 0x58, 0x7e, 0x00 }, { 0x5b, 0xad, 0x2f }, { 0x77, 0x60, 0x0f }, { 0x67, 0xac, 0x49 },
	{ 0x87, 0x5a, 0x00 }, { 0x89, 0x8c, 0x81 }, { 0xa9, 0x49, 0x5e }, { 0x9b, 0x8a, 0x96 },
	{ 0x9f, 0x83, 0x00 }, { 0x94, 0xb9, 0x19 }, { 0xb0, 0x72, 0x03 }, { 0xa5, 0xbb, 0x30 },
/* Composite lo-res, colour reg = 13 */
	{ 0x03, 0x63, 0x48 }, { 0x04, 0x76, 0x8c }, { 0x1d, 0x34, 0x5a }, { 0x0d, 0x7a, 0x9c },
	{ 0x5a, 0x8e, 0x03 }, { 0x58, 0xac, 0x33 }, { 0x76, 0x60, 0x0b }, { 0x68, 0xaa, 0x4b },
	{ 0x7e, 0x6e, 0x3b }, { 0x88, 0x8c, 0x80 }, { 0xaa, 0x48, 0x64 }, { 0x94, 0x91, 0x92 },
	{ 0x94, 0x9b, 0x00 }, { 0x96, 0xb9, 0x16 }, { 0xb0, 0x73, 0x01 }, { 0xa7, 0xb8, 0x2e },
/* Composite lo-res, colour reg = 14 */
	{ 0x52, 0x00, 0x13 }, { 0x29, 0x61, 0xb6 }, { 0x52, 0x1e, 0xa1 }, { 0x41, 0x63, 0xdb },
	{ 0x7b, 0x2f, 0x00 }, { 0x5d, 0xac, 0x2c }, { 0x77, 0x63, 0x0a }, { 0x67, 0xa9, 0x51 },
	{ 0xaf, 0x18, 0x00 }, { 0x83, 0x8a, 0x7d }, { 0xa9, 0x46, 0x66 }, { 0x9a, 0x8c, 0xa0 },
	{ 0xb1, 0x43, 0x00 }, { 0x9a, 0xb7, 0x19 }, { 0xb7, 0x6e, 0x05 }, { 0xa4, 0xb9, 0x2f },
/* Composite lo-res, colour reg = 15 */
	{ 0x52, 0x00, 0x7a }, { 0x2e, 0x55, 0xdc }, { 0x4e, 0x1b, 0xb1 }, { 0x3c, 0x55, 0xec },
	{ 0x80, 0x3f, 0x00 }, { 0x5b, 0xad, 0x2e }, { 0x73, 0x61, 0x0a }, { 0x66, 0xaa, 0x50 },
	{ 0xa7, 0x29, 0x29 }, { 0x86, 0x8a, 0x7d }, { 0xa8, 0x48, 0x60 }, { 0x98, 0x8e, 0x9b },
	{ 0xc0, 0x4a, 0x00 }, { 0x9a, 0xb5, 0x18 }, { 0xb3, 0x72, 0x06 }, { 0xa2, 0xba, 0x31 },
/* Composite lo-res, colour reg = 16 */
	{ 0x4d, 0x61, 0x00 }, { 0x3b, 0x91, 0x53 }, { 0x59, 0x46, 0x2c }, { 0x48, 0x95, 0x63 },
	{ 0x6c, 0x77, 0x00 }, { 0x5a, 0xac, 0x31 }, { 0x75, 0x63, 0x09 }, { 0x66, 0xa9, 0x4e },
	{ 0x8e, 0x6a, 0x0f }, { 0x87, 0x8b, 0x7f }, { 0xa9, 0x47, 0x66 }, { 0x9b, 0x8c, 0x9f },
	{ 0xab, 0x86, 0x00 }, { 0x9a, 0xb6, 0x18 }, { 0xae, 0x74, 0x01 }, { 0xa2, 0xba, 0x2f },
/* Composite lo-res, colour reg = 17 */
	{ 0x8b, 0x8b, 0x8b }, { 0x7f, 0x89, 0x79 }, { 0xa4, 0x4a, 0x5c }, { 0x96, 0x8a, 0x95 },
	{ 0x5c, 0xa1, 0x36 }, { 0x5d, 0xad, 0x2b }, { 0x77, 0x62, 0x0a }, { 0x68, 0xa8, 0x4f },
	{ 0x83, 0x88, 0x6f }, { 0x85, 0x8d, 0x81 }, { 0xa9, 0x46, 0x69 }, { 0x99, 0x8b, 0x9f },
	{ 0x97, 0xb1, 0x22 }, { 0x99, 0xb7, 0x18 }, { 0xb8, 0x6c, 0x04 }, { 0xa2, 0xba, 0x2e },
/* Composite lo-res, colour reg = 18 */
	{ 0x25, 0x25, 0x25 }, { 0x0b, 0x78, 0x8b }, { 0x25, 0x34, 0x5a }, { 0x14, 0x7d, 0x9d },
	{ 0x76, 0x4f, 0x00 }, { 0x5a, 0xac, 0x2e }, { 0x74, 0x64, 0x07 }, { 0x66, 0xaa, 0x49 },
	{ 0xa7, 0x37, 0x25 }, { 0x87, 0x8b, 0x80 }, { 0xa8, 0x48, 0x64 }, { 0x9a, 0x8f, 0x9a },
	{ 0xb6, 0x5a, 0x00 }, { 0x96, 0xba, 0x17 }, { 0xae, 0x73, 0x01 }, { 0xa2, 0xba, 0x30 },
/* Composite lo-res, colour reg = 19 */
	{ 0x5d, 0x48, 0xd5 }, { 0x4a, 0x77, 0xb3 }, { 0x65, 0x35, 0x86 }, { 0x4d, 0x77, 0xc2 },
	{ 0x6f, 0x72, 0x53 }, { 0x5a, 0xac, 0x30 }, { 0x75, 0x62, 0x09 }, { 0x68, 0xa9, 0x48 },
	{ 0x9c, 0x57, 0xa1 }, { 0x87, 0x8b, 0x80 }, { 0xa7, 0x49, 0x62 }, { 0x92, 0x90, 0x92 },
	{ 0xab, 0x7d, 0x3a }, { 0x97, 0xb8, 0x17 }, { 0xb0, 0x74, 0x03 }, { 0xa2, 0xba, 0x2e },
/* Composite lo-res, colour reg = 1A */
	{ 0x59, 0xad, 0x2e }, { 0x59, 0xad, 0x2e }, { 0x75, 0x64, 0x08 }, { 0x69, 0xa7, 0x4d },
	{ 0x59, 0xad, 0x2e }, { 0x59, 0xad, 0x2e }, { 0x75, 0x64, 0x08 }, { 0x69, 0xa7, 0x4d },
	{ 0x87, 0x8d, 0x82 }, { 0x85, 0x8b, 0x7d }, { 0xa9, 0x47, 0x67 }, { 0x99, 0x8c, 0x9d },
	{ 0x94, 0xba, 0x17 }, { 0x94, 0xba, 0x17 }, { 0xb6, 0x6e, 0x06 }, { 0xa2, 0xbb, 0x30 },
/* Composite lo-res, colour reg = 1B */
	{ 0x5b, 0xb9, 0xa6 }, { 0x5c, 0xa2, 0x4a }, { 0x7a, 0x5c, 0x24 }, { 0x6a, 0x9a, 0x6c },
	{ 0x56, 0xbf, 0x8e }, { 0x59, 0xae, 0x31 }, { 0x78, 0x60, 0x0d }, { 0x68, 0xa9, 0x4f },
	{ 0x7f, 0xa3, 0xcd }, { 0x85, 0x8c, 0x80 }, { 0xaa, 0x47, 0x6a }, { 0x98, 0x8b, 0x9c },
	{ 0x93, 0xcd, 0x72 }, { 0x92, 0xbd, 0x14 }, { 0xb8, 0x6c, 0x06 }, { 0xa4, 0xb9, 0x2f },
/* Composite lo-res, colour reg = 1C */
	{ 0xa9, 0x44, 0x63 }, { 0x85, 0x8a, 0x7f }, { 0xa9, 0x44, 0x63 }, { 0x99, 0x8e, 0x9d },
	{ 0x74, 0x5f, 0x0d }, { 0x5c, 0xad, 0x2c }, { 0x77, 0x63, 0x0a }, { 0x68, 0xa8, 0x4e },
	{ 0xa9, 0x44, 0x63 }, { 0x84, 0x8b, 0x7e }, { 0xa9, 0x44, 0x63 }, { 0x99, 0x8c, 0x9e },
	{ 0xad, 0x72, 0x01 }, { 0x9b, 0xb6, 0x1a }, { 0xb3, 0x6e, 0x05 }, { 0xa4, 0xb9, 0x2f },
/* Composite lo-res, colour reg = 1D */
	{ 0xaa, 0x55, 0xd4 }, { 0x83, 0x81, 0x9b }, { 0xa6, 0x43, 0x7b }, { 0x95, 0x80, 0xbd },
	{ 0x76, 0x72, 0x66 }, { 0x5a, 0xad, 0x2c }, { 0x7b, 0x61, 0x0c }, { 0x68, 0xa9, 0x50 },
	{ 0xa5, 0x59, 0xaa }, { 0x87, 0x8e, 0x7f }, { 0xa9, 0x45, 0x6a }, { 0x97, 0x8b, 0x98 },
	{ 0xb2, 0x82, 0x48 }, { 0x93, 0xbb, 0x16 }, { 0xb9, 0x6d, 0x05 }, { 0xa4, 0xb9, 0x2f },
/* Composite lo-res, colour reg = 1E */
	{ 0xa5, 0xb8, 0x2d }, { 0xa5, 0xb8, 0x2d }, { 0xb4, 0x70, 0x05 }, { 0xa5, 0xb8, 0x2d },
	{ 0x64, 0xaa, 0x4e }, { 0x5b, 0xad, 0x2c }, { 0x77, 0x63, 0x0b }, { 0x68, 0xa8, 0x4f },
	{ 0x94, 0x91, 0x95 }, { 0x83, 0x8a, 0x7b }, { 0xa9, 0x47, 0x67 }, { 0x98, 0x8a, 0x9e },
	{ 0xa5, 0xb8, 0x2d }, { 0x9a, 0xb6, 0x1a }, { 0xb2, 0x70, 0x05 }, { 0xa5, 0xb8, 0x2d },
/* Composite lo-res, colour reg = 1F */
	{ 0xe3, 0xe3, 0xe3 }, { 0xde, 0xb1, 0x45 }, { 0xf8, 0x71, 0x3e }, { 0xeb, 0xb3, 0x5e },
	{ 0x58, 0xd3, 0xc4 }, { 0x5b, 0xad, 0x2d }, { 0x78, 0x63, 0x0b }, { 0x68, 0xa8, 0x4f },
	{ 0x7f, 0xb7, 0xf4 }, { 0x86, 0x8b, 0x7d }, { 0xa8, 0x46, 0x69 }, { 0x9a, 0x8c, 0x9f },
	{ 0x99, 0xe0, 0xbc }, { 0x99, 0xb6, 0x1a }, { 0xb8, 0x6d, 0x07 }, { 0xa5, 0xb8, 0x30 },
/* Composite lo-res, colour reg = 20 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x3a, 0x85 }, { 0x00, 0x00, 0x6c }, { 0x00, 0x46, 0xce },
	{ 0x26, 0x01, 0x00 }, { 0x03, 0x61, 0x4a }, { 0x24, 0x16, 0x2a }, { 0x09, 0x72, 0x8d },
	{ 0x4d, 0x00, 0x00 }, { 0x2d, 0x45, 0x9c }, { 0x51, 0x00, 0x7c }, { 0x30, 0x58, 0xe1 },
	{ 0x9e, 0x0f, 0x00 }, { 0x86, 0x7b, 0x45 }, { 0xab, 0x29, 0x2c }, { 0x8b, 0x89, 0x88 },
/* Composite lo-res, colour reg = 21 */
	{ 0x06, 0x00, 0x7C }, { 0x00, 0x3B, 0xA0 }, { 0x14, 0x00, 0x93 }, { 0x00, 0x49, 0xF7 },
	{ 0x19, 0x12, 0x13 }, { 0x02, 0x63, 0x3f }, { 0x25, 0x16, 0x2b }, { 0x09, 0x71, 0x93 },
	{ 0x46, 0x00, 0x65 }, { 0x28, 0x45, 0x93 }, { 0x50, 0x00, 0x80 }, { 0x32, 0x55, 0xe6 },
	{ 0x9c, 0x2d, 0x0c }, { 0x86, 0x78, 0x44 }, { 0xaa, 0x29, 0x33 }, { 0x92, 0x84, 0x84 },
/* Composite lo-res, colour reg = 22 */
	{ 0x05, 0x56, 0x00 }, { 0x04, 0x69, 0x32 }, { 0x21, 0x1d, 0x13 }, { 0x07, 0x76, 0x7e },
	{ 0x05, 0x48, 0x03 }, { 0x03, 0x64, 0x43 }, { 0x24, 0x16, 0x28 }, { 0x08, 0x70, 0x92 },
	{ 0x45, 0x41, 0x74 }, { 0x27, 0x44, 0x92 }, { 0x4f, 0x00, 0x7f }, { 0x36, 0x58, 0xe8 },
	{ 0x85, 0x57, 0x02 }, { 0x87, 0x77, 0x45 }, { 0xa6, 0x2c, 0x2c }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 23 */
	{ 0x02, 0x61, 0x49 }, { 0x02, 0x61, 0x49 }, { 0x24, 0x15, 0x27 }, { 0x05, 0x73, 0x84 },
	{ 0x02, 0x61, 0x49 }, { 0x02, 0x61, 0x49 }, { 0x24, 0x15, 0x27 }, { 0x05, 0x73, 0x84 },
	{ 0x2a, 0x43, 0x96 }, { 0x2a, 0x43, 0x96 }, { 0x51, 0x00, 0x7d }, { 0x31, 0x5a, 0xdc },
	{ 0x86, 0x79, 0x3d }, { 0x86, 0x79, 0x3d }, { 0xa8, 0x2a, 0x21 }, { 0x8a, 0x8a, 0x8a },
/* Composite lo-res, colour reg = 24 */
	{ 0x51, 0x00, 0x0e }, { 0x2b, 0x49, 0x76 }, { 0x4c, 0x04, 0x53 }, { 0x23, 0x5a, 0xf5 },
	{ 0x22, 0x05, 0x00 }, { 0x04, 0x06, 0x4b }, { 0x22, 0x13, 0x22 }, { 0x03, 0x74, 0x82 },
	{ 0x4e, 0x00, 0x25 }, { 0x2d, 0x46, 0x9d }, { 0x52, 0x00, 0x7c }, { 0x34, 0x59, 0xe3 },
	{ 0xaa, 0x17, 0x00 }, { 0x85, 0x79, 0x3d }, { 0xa7, 0x2e, 0x24 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 25 */
	{ 0x50, 0x00, 0x7e }, { 0x2d, 0x45, 0x9d }, { 0x50, 0x00, 0x7e }, { 0x30, 0x57, 0xde },
	{ 0x23, 0x16, 0x29 }, { 0x05, 0x61, 0x49 }, { 0x23, 0x13, 0x26 }, { 0x04, 0x75, 0x87 },
	{ 0x50, 0x00, 0x7e }, { 0x28, 0x44, 0x96 }, { 0x50, 0x00, 0x7e }, { 0x31, 0x59, 0xdf },
	{ 0xac, 0x28, 0x33 }, { 0x85, 0x79, 0x3c }, { 0xa7, 0x2d, 0x23 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 26 */
	{ 0x4f, 0x62, 0x00 }, { 0x3d, 0x71, 0x1f }, { 0x60, 0x2a, 0x07 }, { 0x43, 0x88, 0x69 },
	{ 0x13, 0x42, 0x19 }, { 0x05, 0x63, 0x46 }, { 0x24, 0x16, 0x27 }, { 0x07, 0x72, 0x91 },
	{ 0x3c, 0x2b, 0x5f }, { 0x2a, 0x45, 0x92 }, { 0x4f, 0x00, 0x82 }, { 0x36, 0x57, 0xe9 },
	{ 0x92, 0x5a, 0x0b }, { 0x87, 0x78, 0x45 }, { 0xa7, 0x2c, 0x2a }, { 0x8b, 0x8b, 0x8c },
/* Composite lo-res, colour reg = 27 */
	{ 0x8b, 0x8b, 0x8b }, { 0x89, 0x78, 0x47 }, { 0xa8, 0x2a, 0x2d }, { 0x8b, 0x8b, 0x8b },
	{ 0x08, 0x71, 0x93 }, { 0x02, 0x62, 0x4a }, { 0x26, 0x16, 0x2a }, { 0x06, 0x73, 0x87 },
	{ 0x35, 0x58, 0xe6 }, { 0x2f, 0x45, 0x9e }, { 0x50, 0x00, 0x78 }, { 0x2f, 0x59, 0xe0 },
	{ 0x8b, 0x8b, 0x8b }, { 0x87, 0x7a, 0x46 }, { 0xaa, 0x29, 0x30 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 28 */
	{ 0x25, 0x25, 0x25 }, { 0x08, 0x5f, 0x4b }, { 0x2b, 0x15, 0x25 }, { 0x09, 0x71, 0x88 },
	{ 0x1e, 0x23, 0x26 }, { 0x04, 0x62, 0x47 }, { 0x21, 0x19, 0x28 }, { 0x06, 0x74, 0x88 },
	{ 0x48, 0x0b, 0x70 }, { 0x26, 0x42, 0x95 }, { 0x52, 0x00, 0x7c }, { 0x34, 0x58, 0xe6 },
	{ 0xa1, 0x37, 0x1c }, { 0x85, 0x78, 0x3e }, { 0xa6, 0x2e, 0x23 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 29 */
	{ 0x5e, 0x44, 0xd3 }, { 0x45, 0x61, 0x73 }, { 0x6c, 0x18, 0x53 }, { 0x4c, 0x72, 0xbf },
	{ 0x14, 0x45, 0xa3 }, { 0x04, 0x61, 0x49 }, { 0x22, 0x15, 0x25 }, { 0x06, 0x72, 0x8d },
	{ 0x41, 0x2d, 0xf6 }, { 0x27, 0x43, 0x96 }, { 0x51, 0x00, 0x7c }, { 0x34, 0x58, 0xe4 },
	{ 0x9b, 0x5a, 0xa5 }, { 0x85, 0x78, 0x3d }, { 0xa6, 0x2e, 0x23 }, { 0x8c, 0x8c, 0x8c },
/* Composite lo-res, colour reg = 2A */
	{ 0x5c, 0xae, 0x2a }, { 0x58, 0x91, 0x00 }, { 0x7b, 0x41, 0x00 }, { 0x5e, 0xa0, 0x36 },
	{ 0x06, 0x78, 0x86 }, { 0x03, 0x62, 0x49 }, { 0x25, 0x14, 0x28 }, { 0x03, 0x74, 0x82 },
	{ 0x25, 0x5b, 0xcc }, { 0x2a, 0x43, 0x97 }, { 0x52, 0x00, 0x79 }, { 0x31, 0x5b, 0xe0 },
	{ 0x7e, 0x88, 0x7b }, { 0x86, 0x7b, 0x3e }, { 0xa7, 0x2c, 0x22 }, { 0x89, 0x89, 0x89 },
/* Composite lo-res, colour reg = 2B */
	{ 0x58, 0xbb, 0x98 }, { 0x5a, 0x8c, 0x0a }, { 0x7f, 0x3b, 0x02 }, { 0x60, 0x9a, 0x4b },
	{ 0x03, 0x96, 0xce }, { 0x04, 0x61, 0x4a }, { 0x23, 0x14, 0x24 }, { 0x04, 0x75, 0x86 },
	{ 0x23, 0x76, 0xfe }, { 0x28, 0x43, 0x95 }, { 0x51, 0x00, 0x7b }, { 0x30, 0x59, 0xdb },
	{ 0x80, 0xab, 0xd2 }, { 0x85, 0x7a, 0x3d }, { 0xa8, 0x2e, 0x26 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 2C */
	{ 0xa9, 0x46, 0x66 }, { 0x7f, 0x6f, 0x37 }, { 0xa9, 0x27, 0x27 }, { 0x87, 0x82, 0x7f },
	{ 0x1e, 0x31, 0x5c }, { 0x04, 0x63, 0x44 }, { 0x23, 0x16, 0x2a }, { 0x08, 0x71, 0x92 },
	{ 0x4e, 0x1a, 0xb0 }, { 0x27, 0x46, 0x92 }, { 0x50, 0x00, 0x80 }, { 0x33, 0x56, 0xe7 },
	{ 0xa3, 0x4a, 0x58 }, { 0x87, 0x78, 0x46 }, { 0xab, 0x29, 0x34 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 2D */
	{ 0xa8, 0x53, 0xd8 }, { 0x82, 0x6c, 0x5f }, { 0xac, 0x25, 0x3f }, { 0x8d, 0x7f, 0xa8 },
	{ 0x21, 0x46, 0xb9 }, { 0x04, 0x61, 0x4d }, { 0x24, 0x13, 0x23 }, { 0x04, 0x75, 0x87 },
	{ 0x4c, 0x2e, 0xfe }, { 0x2a, 0x45, 0x99 }, { 0x52, 0x00, 0x78 }, { 0x32, 0x5a, 0xde },
	{ 0xa8, 0x53, 0xd8 }, { 0x84, 0x7c, 0x3d }, { 0xa7, 0x2d, 0x22 }, { 0x8b, 0x8b, 0x8b },
/* Composite lo-res, colour reg = 2E */
	{ 0xa4, 0xba, 0x2e }, { 0x8e, 0x9f, 0x00 }, { 0xbf, 0x4e, 0x00 }, { 0xa5, 0xae, 0x2d },
	{ 0x13, 0x71, 0xa6 }, { 0x03, 0x62, 0x4a }, { 0x24, 0x14, 0x28 }, { 0x05, 0x74, 0x83 },
	{ 0x32, 0x5d, 0xe0 }, { 0x2e, 0x46, 0x9c }, { 0x51, 0x00, 0x7c }, { 0x2f, 0x59, 0xe0 },
	{ 0x8a, 0x8d, 0x94 }, { 0x86, 0x7b, 0x40 }, { 0xa8, 0x2c, 0x22 }, { 0x8a, 0x8a, 0x8a },
/* Composite lo-res, colour reg = 2F */
	{ 0xe4, 0xe4, 0xe4 }, { 0xdd, 0xa6, 0x0a }, { 0xf9, 0x53, 0x04 }, { 0xea, 0xae, 0x54 },
	{ 0x08, 0xa2, 0xfc }, { 0x03, 0x62, 0x48 }, { 0x24, 0x14, 0x28 }, { 0x05, 0x74, 0x84 },
	{ 0x27, 0x90, 0xff }, { 0x2a, 0x43, 0x95 }, { 0x52, 0x00, 0x79 }, { 0x34, 0x5a, 0xe3 },
	{ 0x85, 0xbb, 0xff }, { 0x85, 0x7a, 0x3d }, { 0xa7, 0x2c, 0x23 }, { 0x8a, 0x8a, 0x8a },
/* Composite lo-res, colour reg = 30 */
	{ 0x00, 0x00, 0x00 }, { 0x00, 0x63, 0xfe }, { 0x00, 0x1d, 0xe9 }, { 0x00, 0x81, 0xff },
	{ 0x7e, 0x16, 0x00 }, { 0x5b, 0xb9, 0xa5 }, { 0x79, 0x6a, 0x79 }, { 0x59, 0xce, 0xdc },
	{ 0xa8, 0x05, 0x00 }, { 0x84, 0x9e, 0xf3 }, { 0xaa, 0x54, 0xd3 }, { 0x8c, 0xb1, 0xff },
	{ 0xfb, 0x28, 0x00 }, { 0xde, 0xd2, 0x94 }, { 0xfc, 0x85, 0x7b }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 31 */
	{ 0x07, 0x00, 0x7c }, { 0x00, 0x70, 0xfe }, { 0x0d, 0x20, 0xff }, { 0x04, 0x7f, 0xff },
	{ 0x6f, 0x3b, 0x00 }, { 0x59, 0xbb, 0x9b }, { 0x79, 0x6c, 0x81 }, { 0x5d, 0xcb, 0xe4 },
	{ 0x99, 0x26, 0x29 }, { 0x83, 0x9d, 0xf2 }, { 0xaa, 0x54, 0xd4 }, { 0x88, 0xb0, 0xff },
	{ 0xf4, 0x57, 0x00 }, { 0xdf, 0xd3, 0x9a }, { 0xfe, 0x81, 0x7f }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 32 */
	{ 0x06, 0x55, 0x00 }, { 0x03, 0x99, 0xbe }, { 0x22, 0x46, 0xa4 }, { 0x09, 0xa4, 0xfa },
	{ 0x62, 0x6d, 0x00 }, { 0x59, 0xbb, 0x9b }, { 0x7a, 0x6d, 0x7e }, { 0x5c, 0xc8, 0xe7 },
	{ 0x8a, 0x4f, 0x11 }, { 0x80, 0x9b, 0xea }, { 0xa7, 0x55, 0xda }, { 0x8c, 0xad, 0xff },
	{ 0xdf, 0x7f, 0x00 }, { 0xe2, 0xd1, 0x9c }, { 0xfd, 0x81, 0x87 }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 33 */
	{ 0x03, 0x63, 0x47 }, { 0x06, 0x91, 0xda }, { 0x23, 0x41, 0xbc }, { 0x06, 0xa5, 0xfa },
	{ 0x5d, 0x8a, 0x07 }, { 0x59, 0xbb, 0x9b }, { 0x7c, 0x6e, 0x80 }, { 0x5d, 0xc9, 0xe8 },
	{ 0x86, 0x6b, 0x60 }, { 0x81, 0x9d, 0xea }, { 0xa8, 0x55, 0xd8 }, { 0x8e, 0xae, 0xff },
	{ 0xdf, 0xa4, 0x0c }, { 0xe1, 0xd0, 0x9e }, { 0xfd, 0x81, 0x85 }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 34 */
	{ 0x52, 0x00, 0x14 }, { 0x20, 0x7b, 0xf7 }, { 0x4e, 0x2f, 0xed }, { 0x22, 0x91, 0xff },
	{ 0x7f, 0x28, 0x00 }, { 0x5a, 0xbb, 0x9a }, { 0x79, 0x6d, 0x7f }, { 0x5e, 0xc8, 0xeb },
	{ 0xac, 0x13, 0x02 }, { 0x7e, 0x9c, 0xea }, { 0xa8, 0x54, 0xd6 }, { 0x8e, 0xae, 0xff },
	{ 0xf5, 0x43, 0x00 }, { 0xdf, 0xcf, 0x9d }, { 0xfd, 0x81, 0x88 }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 35 */
	{ 0x50, 0x00, 0x7b }, { 0x22, 0x76, 0xfe }, { 0x4c, 0x2f, 0xff }, { 0x36, 0x85, 0xff },
	{ 0x7b, 0x3d, 0x00 }, { 0x5b, 0xbc, 0xa1 }, { 0x7b, 0x6c, 0x7f }, { 0x5d, 0xca, 0xe8 },
	{ 0xa9, 0x26, 0x3c }, { 0x81, 0x9c, 0xec }, { 0xa7, 0x54, 0xdc }, { 0x8b, 0xad, 0xff },
	{ 0xf8, 0x57, 0x03 }, { 0xe1, 0xd4, 0x9e }, { 0xfd, 0x80, 0x82 }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 36 */
	{ 0x4c, 0x61, 0x00 }, { 0x39, 0xa2, 0xaf }, { 0x5b, 0x5a, 0x8c }, { 0x42, 0xb6, 0xf4 },
	{ 0x66, 0x6b, 0x00 }, { 0x5b, 0xba, 0xa4 }, { 0x7a, 0x6c, 0x7e }, { 0x5e, 0xca, 0xe8 },
	{ 0x91, 0x51, 0x1f }, { 0x85, 0x9d, 0xf4 }, { 0xaa, 0x55, 0xd7 }, { 0x88, 0xaf, 0xff },
	{ 0xea, 0x87, 0x00 }, { 0xde, 0xd4, 0x98 }, { 0xfd, 0x7f, 0x81 }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 37 */
	{ 0x8b, 0x8b, 0x8b }, { 0x86, 0xa7, 0xde }, { 0xa6, 0x5a, 0xbf }, { 0x85, 0xbb, 0xff },
	{ 0x5f, 0x9b, 0x51 }, { 0x5a, 0xb9, 0xa7 }, { 0x78, 0x6a, 0x7b }, { 0x5b, 0xce, 0xdb },
	{ 0x8b, 0x7c, 0xae }, { 0x82, 0x9c, 0xf2 }, { 0xaa, 0x54, 0xd3 }, { 0x87, 0xb2, 0xff },
	{ 0xe7, 0xb0, 0x54 }, { 0xdc, 0xd2, 0x95 }, { 0xfc, 0x84, 0x77 }, { 0xe3, 0xe3, 0xe3 },
/* Composite lo-res, colour reg = 38 */
	{ 0x24, 0x24, 0x24 }, { 0x06, 0x91, 0xd8 }, { 0x2a, 0x44, 0xb9 }, { 0x0f, 0x9e, 0xfe },
	{ 0x7a, 0x49, 0x00 }, { 0x58, 0xbc, 0x98 }, { 0x7a, 0x6d, 0x7f }, { 0x5e, 0xc8, 0xeb },
	{ 0xa3, 0x36, 0x3a }, { 0x7f, 0x9c, 0xec }, { 0xa8, 0x54, 0xd7 }, { 0x8a, 0xad, 0xff },
	{ 0xf7, 0x64, 0x00 }, { 0xe1, 0xd1, 0x9c }, { 0xfd, 0x7f, 0x8b }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 39 */
	{ 0x62, 0x46, 0xd3 }, { 0x3d, 0x93, 0xf2 }, { 0x6b, 0x46, 0xeb }, { 0x4f, 0xa0, 0xff },
	{ 0x6f, 0x69, 0x6b }, { 0x58, 0xbb, 0x9b }, { 0x7b, 0x6e, 0x80 }, { 0x5e, 0xc8, 0xec },
	{ 0x9d, 0x53, 0xbd }, { 0x81, 0x9d, 0xf0 }, { 0xa8, 0x54, 0xd8 }, { 0x86, 0xb1, 0xff },
	{ 0xf4, 0x85, 0x5e }, { 0xdf, 0xd1, 0x9f }, { 0xfe, 0x7f, 0x88 }, { 0xe3, 0xe3, 0xe3 },
/* Composite lo-res, colour reg = 3A */
	{ 0x5a, 0xad, 0x2d }, { 0x58, 0xc1, 0x81 }, { 0x77, 0x74, 0x68 }, { 0x58, 0xcf, 0xd1 },
	{ 0x5d, 0xa0, 0x4d }, { 0x59, 0xbb, 0x9b }, { 0x7c, 0x6d, 0x7f }, { 0x5e, 0xc9, 0xeb },
	{ 0x83, 0x7d, 0x9e }, { 0x7f, 0x9c, 0xec }, { 0xa9, 0x54, 0xd6 }, { 0x8c, 0xae, 0xff },
	{ 0xde, 0xae, 0x4b }, { 0xdc, 0xd0, 0x98 }, { 0xfc, 0x81, 0x8a }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 3B */
	{ 0x59, 0xbc, 0x9c }, { 0x59, 0xbc, 0x9c }, { 0x7a, 0x6a, 0x79 }, { 0x59, 0xce, 0xd9 },
	{ 0x59, 0xbc, 0x9c }, { 0x59, 0xbc, 0x9c }, { 0x7b, 0x6b, 0x80 }, { 0x59, 0xcc, 0xd9 },
	{ 0x81, 0x9b, 0xec }, { 0x81, 0x9b, 0xec }, { 0xa9, 0x54, 0xd4 }, { 0x8e, 0xb2, 0xff },
	{ 0xdf, 0xcf, 0x9b }, { 0xdf, 0xcf, 0x9b }, { 0xfd, 0x85, 0x79 }, { 0xe3, 0xe3, 0xe3 },
/* Composite lo-res, colour reg = 3C */
	{ 0xaa, 0x46, 0x6a }, { 0x7a, 0xa3, 0xc7 }, { 0xa7, 0x58, 0xba }, { 0x84, 0xb5, 0xf8 },
	{ 0x78, 0x5b, 0x23 }, { 0x59, 0xbc, 0x9c }, { 0x7a, 0x6e, 0x81 }, { 0x5f, 0xc9, 0xeb },
	{ 0xa3, 0x44, 0x71 }, { 0x80, 0x9d, 0xec }, { 0xa8, 0x54, 0xd7 }, { 0x8a, 0xae, 0xff },
	{ 0xf8, 0x74, 0x1a }, { 0xdf, 0xd1, 0x9e }, { 0xfe, 0x81, 0x8b }, { 0xe3, 0xe3, 0xe3 },
/* Composite lo-res, colour reg = 3D */
	{ 0xaa, 0x53, 0xd1 }, { 0x80, 0x9c, 0xec }, { 0xaa, 0x53, 0xd1 }, { 0x88, 0xad, 0xff },
	{ 0x7a, 0x6b, 0x7e }, { 0x58, 0xbb, 0x9d }, { 0x7a, 0x6d, 0x81 }, { 0x5f, 0xc9, 0xe5 },
	{ 0xaa, 0x53, 0xd1 }, { 0x84, 0x9d, 0xf2 }, { 0xaa, 0x53, 0xd1 }, { 0x88, 0xad, 0xff },
	{ 0xfd, 0x85, 0x78 }, { 0xe0, 0xd2, 0x9e }, { 0xfe, 0x80, 0x87 }, { 0xe3, 0xe3, 0xe3 },
/* Composite lo-res, colour reg = 3E */
	{ 0xa1, 0xba, 0x2f }, { 0x90, 0xce, 0x70 }, { 0xb4, 0x80, 0x4b }, { 0x9d, 0xe0, 0xba },
	{ 0x6a, 0x9f, 0x68 }, { 0x5a, 0xba, 0x9f }, { 0x7a, 0x6b, 0x7a }, { 0x5a, 0xce, 0xdb },
	{ 0x91, 0x83, 0xae }, { 0x80, 0x9b, 0xef }, { 0xaa, 0x54, 0xd2 }, { 0x8c, 0xb1, 0xff },
	{ 0xeb, 0xb3, 0x59 }, { 0xdd, 0xd3, 0x94 }, { 0xfc, 0x85, 0x79 }, { 0xe4, 0xe4, 0xe4 },
/* Composite lo-res, colour reg = 3F */
	{ 0xe4, 0xe4, 0xe4 }, { 0xdd, 0xd2, 0x93 }, { 0xfc, 0x85, 0x7a }, { 0xe4, 0xe4, 0xe4 },
	{ 0x59, 0xcc, 0xda }, { 0x59, 0xbb, 0x9c }, { 0x7b, 0x6d, 0x7f }, { 0x5c, 0xca, 0xe5 },
	{ 0x87, 0xb3, 0xff }, { 0x7f, 0x9a, 0xea }, { 0xa8, 0x54, 0xd4 }, { 0x8c, 0xb0, 0xff },
	{ 0xe4, 0xe4, 0xe4 }, { 0xdf, 0xd1, 0x98 }, { 0xfd, 0x84, 0x7d }, { 0xe4, 0xe4, 0xe4 },
};
