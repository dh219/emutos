/*
 * fnt_l2_8x8.c - a font in standard format
 *
 * Copyright (C) 2002-2021 The EmuTOS development team
 *
 * Automatically generated by fntconv.c
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "emutos.h"
#include "bios.h"
#include "fonthdr.h"

static const UWORD dat_table[] =
{
    0x0018, 0x3c18, 0x183c, 0xffe7, 0x017e, 0x1818, 0xf0f0, 0x05a0,
    0x7c06, 0x7c7c, 0xc67c, 0x7c7c, 0x7c7c, 0x0078, 0x07f0, 0x1104,
    0x0018, 0x6600, 0x1800, 0x3818, 0x0e70, 0x0000, 0x0000, 0x0002,
    0x3c18, 0x3c7e, 0x0c7e, 0x3c7e, 0x3c3c, 0x0000, 0x0600, 0x603c,
    0x3c18, 0x7c3c, 0x787e, 0x7e3e, 0x663c, 0x0666, 0x60c6, 0x663c,
    0x7c3c, 0x7c3c, 0x7e66, 0x66c6, 0x6666, 0x7e1e, 0x4078, 0x1000,
    0x0000, 0x6000, 0x0600, 0x1c00, 0x6018, 0x1860, 0x3800, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x000e, 0x1870, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0018, 0x6660, 0x816c, 0x0c0e, 0x6636, 0x3e24, 0x0c00, 0x2408,
    0x0000, 0x0038, 0x0c76, 0x0c24, 0x0024, 0x0003, 0x0c36, 0x2408,
    0x180c, 0x1866, 0x6666, 0x0c00, 0x240c, 0x0066, 0x240c, 0x1824,
    0x780c, 0x240c, 0x1836, 0x6600, 0x3618, 0x0c36, 0x660c, 0x7e1c,
    0x0c0c, 0x1824, 0x6676, 0x0c00, 0x240c, 0x0066, 0x240c, 0x180d,
    0x060c, 0x240c, 0x1836, 0x6618, 0x2418, 0x0c36, 0x660c, 0x0008,
    0x003c, 0x241c, 0x3899, 0xffc3, 0x03c3, 0x3c1c, 0xc0c0, 0x05a0,
    0xc606, 0x0606, 0xc6c0, 0xc006, 0xc6c6, 0x0060, 0x0ff8, 0x0b28,
    0x0018, 0x666c, 0x3e66, 0x6c18, 0x1c38, 0x6618, 0x0000, 0x0006,
    0x6638, 0x660c, 0x1c60, 0x6006, 0x6666, 0x1818, 0x0c00, 0x3066,
    0x663c, 0x6666, 0x6c60, 0x6060, 0x6618, 0x066c, 0x60ee, 0x7666,
    0x6666, 0x6666, 0x1866, 0x66c6, 0x6666, 0x0618, 0x6018, 0x3800,
    0xc000, 0x6000, 0x0600, 0x3000, 0x6000, 0x0060, 0x1800, 0x0000,
    0x0000, 0x0000, 0x1800, 0x0000, 0x0000, 0x0018, 0x1818, 0x6018,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x003c, 0x3c60, 0x5a64, 0x3e1b, 0x003e, 0x6018, 0x7e00, 0x7e7e,
    0x3800, 0x0018, 0x1832, 0x1818, 0x0018, 0x0019, 0x186c, 0x1800,
    0x7c18, 0x243c, 0x006c, 0x183c, 0x1818, 0x7e00, 0x1818, 0x2418,
    0x6c18, 0x1818, 0x246c, 0x0000, 0x7c24, 0x186c, 0x0018, 0x1836,
    0x1818, 0x6618, 0x0034, 0x1800, 0x1818, 0x0000, 0x1818, 0x240d,
    0x1f18, 0x1818, 0x666c, 0x0018, 0x1824, 0x186c, 0x0018, 0x1800,
    0x0066, 0x24f6, 0x6fc3, 0xfe99, 0x06d3, 0x3c16, 0xfedf, 0x05a0,
    0xc606, 0x0606, 0xc6c0, 0xc006, 0xc6c6, 0x3c78, 0x1fec, 0x0dd8,
    0x0018, 0x66fe, 0x606c, 0x3818, 0x1818, 0x3c18, 0x0000, 0x000c,
    0x6e18, 0x0618, 0x3c7c, 0x600c, 0x6666, 0x1818, 0x187e, 0x1806,
    0x6e66, 0x6660, 0x6660, 0x6060, 0x6618, 0x0678, 0x60fe, 0x7e66,
    0x6666, 0x6660, 0x1866, 0x66c6, 0x3c66, 0x0c18, 0x3018, 0x6c00,
    0x603c, 0x7c3c, 0x3e3c, 0x7c3e, 0x7c38, 0x1866, 0x18ec, 0x7c3c,
    0x7c3e, 0x7c3e, 0x7e66, 0x66c6, 0x6666, 0x7e18, 0x1818, 0xf218,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0066, 0x0070, 0x2468, 0x603c, 0x0060, 0x3c7e, 0x0c00, 0x0c0c,
    0x6c3c, 0x0018, 0x0034, 0x3e00, 0x003e, 0x3e7e, 0x7e00, 0x7e7e,
    0x6618, 0x5a18, 0x1860, 0x3c66, 0x3c7e, 0x607e, 0x7e3c, 0x3c7c,
    0x6666, 0x663c, 0x3c3c, 0x3c44, 0x667e, 0x6666, 0x6666, 0x1866,
    0x0000, 0x0000, 0x3c30, 0x003c, 0x003c, 0x3c3c, 0x3c00, 0x007c,
    0x0600, 0x0000, 0x0000, 0x0000, 0x0018, 0x0000, 0x0066, 0x7e00,
    0x00c3, 0xe783, 0xc1e7, 0xfc3c, 0x8cd3, 0x3c10, 0xd8db, 0x0db0,
    0x0000, 0x7c7c, 0x7c7c, 0x7c00, 0x7c7c, 0x0660, 0x1804, 0x0628,
    0x0018, 0x006c, 0x3c18, 0x7000, 0x1818, 0xff7e, 0x007e, 0x0018,
    0x7618, 0x0c0c, 0x6c06, 0x7c18, 0x3c3e, 0x0000, 0x3000, 0x0c0c,
    0x6a66, 0x7c60, 0x667c, 0x7c6e, 0x7e18, 0x0670, 0x60d6, 0x7e66,
    0x7c66, 0x7c3c, 0x1866, 0x66d6, 0x183c, 0x1818, 0x1818, 0xc600,
    0x3006, 0x6660, 0x6666, 0x3066, 0x6618, 0x186c, 0x18fe, 0x6666,
    0x6666, 0x6660, 0x1866, 0x66c6, 0x3c66, 0x0c30, 0x180c, 0x9e34,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x0066, 0x00e0, 0x5a60, 0x3c66, 0x003c, 0x0618, 0x187c, 0x1818,
    0x6c06, 0x003c, 0x0030, 0x6000, 0x0060, 0x6018, 0x0c00, 0x0c0c,
    0x663c, 0x3c3c, 0x3c60, 0x6660, 0x6660, 0x7c60, 0x6018, 0x1866,
    0xf676, 0x7666, 0x6666, 0x6628, 0x6666, 0x6666, 0x6666, 0x187c,
    0x7c3c, 0x3c3c, 0x0630, 0x3c60, 0x3c66, 0x7e66, 0x6638, 0x38cc,
    0x3e7c, 0x7c3c, 0x3c3c, 0x3c7e, 0x7c66, 0x6666, 0x6666, 0x1800,
    0x00e7, 0xc383, 0xc1c3, 0xf999, 0xd8db, 0x7e10, 0xdeff, 0x0db0,
    0xc606, 0xc006, 0x0606, 0xc606, 0xc606, 0x7e7e, 0x1804, 0x07d0,
    0x0018, 0x006c, 0x0630, 0xde00, 0x1818, 0x3c18, 0x0000, 0x0030,
    0x6618, 0x1806, 0x7e06, 0x6630, 0x6606, 0x1818, 0x1800, 0x1818,
    0x6e7e, 0x6660, 0x6660, 0x6066, 0x6618, 0x0678, 0x60c6, 0x6e66,
    0x6076, 0x6c06, 0x1866, 0x66fe, 0x3c18, 0x3018, 0x0c18, 0x0000,
    0x003e, 0x6660, 0x667e, 0x3066, 0x6618, 0x1878, 0x18d6, 0x6666,
    0x6666, 0x603c, 0x1866, 0x66d6, 0x1866, 0x1818, 0x1818, 0x0c34,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x007e, 0x0060, 0x5a60, 0x0666, 0x0006, 0x6618, 0x3000, 0x3030,
    0x383e, 0x0018, 0x0030, 0x3c00, 0x003c, 0x3c18, 0x1800, 0x1818,
    0x7c66, 0x6666, 0x6660, 0x6066, 0x607c, 0x607c, 0x7c18, 0x1866,
    0x667e, 0x7e66, 0x6666, 0x6610, 0x7c66, 0x6666, 0x663c, 0x1866,
    0x6606, 0x0606, 0x3e30, 0x6060, 0x607e, 0x607e, 0x7e18, 0x18cc,
    0x6666, 0x6666, 0x6666, 0x6600, 0x6666, 0x6666, 0x6666, 0x1800,
    0x0024, 0x66f6, 0x6f99, 0xf3c3, 0x70c3, 0x1070, 0x181e, 0x1998,
    0xc606, 0xc006, 0x0606, 0xc606, 0xc606, 0x6618, 0x1004, 0x2e10,
    0x0000, 0x00fe, 0x7c66, 0xcc00, 0x1c38, 0x6618, 0x3000, 0x1860,
    0x6618, 0x3066, 0x0c66, 0x6630, 0x660c, 0x1818, 0x0c7e, 0x3000,
    0x6066, 0x6666, 0x6c60, 0x6066, 0x6618, 0x666c, 0x60c6, 0x6666,
    0x606c, 0x6666, 0x1866, 0x3cee, 0x6618, 0x6018, 0x0618, 0x0000,
    0x0066, 0x6660, 0x6660, 0x303e, 0x6618, 0x186c, 0x18c6, 0x6666,
    0x6666, 0x6006, 0x1866, 0x3c7c, 0x3c3e, 0x3018, 0x1818, 0x0062,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x0066, 0x0060, 0x2460, 0x663c, 0x0066, 0x3c18, 0x6000, 0x6060,
    0x0066, 0x0018, 0x0030, 0x0600, 0x0006, 0x0618, 0x3000, 0x3030,
    0x6c7e, 0x7e7e, 0x7e60, 0x663c, 0x6660, 0x7e60, 0x6018, 0x1866,
    0x6c6e, 0x6e66, 0x6666, 0x6628, 0x6c66, 0x6666, 0x6618, 0x1866,
    0x607e, 0x7e7e, 0x6630, 0x603c, 0x6060, 0x3c60, 0x6018, 0x18cc,
    0x6666, 0x6666, 0x6666, 0x6618, 0x6066, 0x6666, 0x663e, 0x1800,
    0x0024, 0x3c1c, 0x383c, 0xe7e7, 0x20c3, 0x38f0, 0x181b, 0x799e,
    0x7c06, 0x7c7c, 0x067c, 0x7c06, 0x7c7c, 0x3c1e, 0x1e3c, 0x39e0,
    0x0018, 0x006c, 0x1846, 0x7600, 0x0e70, 0x0000, 0x3000, 0x1840,
    0x3c7e, 0x7e3c, 0x0c3c, 0x3c30, 0x3c38, 0x0030, 0x0600, 0x6018,
    0x3e66, 0x7c3c, 0x787e, 0x603e, 0x663c, 0x3c66, 0x7ec6, 0x663c,
    0x6036, 0x663c, 0x183e, 0x18c6, 0x6618, 0x7e1e, 0x0278, 0x00fe,
    0x003e, 0x7c3c, 0x3e3c, 0x3006, 0x663c, 0x1866, 0x3cc6, 0x663c,
    0x7c3e, 0x607c, 0x0e3e, 0x186c, 0x6606, 0x7e0e, 0x1870, 0x007e,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878,
    0x0066, 0x007e, 0x5a7e, 0x3cd8, 0x003c, 0x0818, 0x7e00, 0x7e7e,
    0x003e, 0x183c, 0x0078, 0x7c00, 0x087c, 0x7c0e, 0x7e00, 0x7e7e,
    0x6666, 0x6666, 0x667e, 0x3c08, 0x3c7e, 0x307e, 0x7e3c, 0x3c7c,
    0x7866, 0x663c, 0x3c66, 0x3c44, 0x663e, 0x3e3e, 0x3e18, 0x187c,
    0x603e, 0x3e3e, 0x3e78, 0x3c08, 0x3c3c, 0x183c, 0x3c3c, 0x3c7c,
    0x3e66, 0x663c, 0x3c3c, 0x3c18, 0x603e, 0x3e3e, 0x3e06, 0x0e00,
    0x003c, 0x1818, 0x1800, 0x0000, 0x007e, 0x1060, 0x0000, 0x718e,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1754, 0x3800,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x007c, 0x0000, 0x7000, 0x0000, 0x0000,
    0x6006, 0x0000, 0x0000, 0x0000, 0x007c, 0x0000, 0x1800, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x000c, 0x0000, 0x8100, 0x0070, 0x0000, 0x3800, 0x0000, 0x0000,
    0x000c, 0x0c00, 0x0000, 0x0000, 0x3800, 0x0c00, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0038, 0x0000, 0x1800, 0x0000, 0x0000,
    0x0000, 0x0000, 0x003c, 0x0000, 0x0000, 0x0000, 0x0000, 0x3060,
    0x0000, 0x0000, 0x0000, 0x0018, 0x0000, 0x0c00, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x007c, 0x1800,
};

const Fonthead fnt_l2_8x8 = {
    1,  /* font_id */
    9,  /* point */
    "MiNT ISO-8859-2 8x8",  /*   char name[32]  */
    0,  /* first_ade */
    255,  /* last_ade */
    6,  /* top */
    6,  /* ascent */
    4,  /* half */
    1,  /* descent */
    1,  /* bottom */
    8,  /* max_char_width */
    8,  /* max_cell_width */
    1,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555,  /* lighten */
    0x5555,  /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,  /* hor_table */
    off_8x8_table,  /* off_table */
    dat_table,  /* dat_table */
    256,  /* form_width */
    8,  /* form_height */
    0,  /* Fonthead * next_font */
    0   /*   reserved by Atari  */
};
