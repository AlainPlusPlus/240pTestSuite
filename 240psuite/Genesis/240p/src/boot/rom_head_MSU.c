#include "types.h"

// This header includes the C used in MSU enabled games for Mega Everdrive Pro and emulators
// its only purpose is for testing Sega CD under those conditions.

const struct
{
    char console[16];               /* Console Name (16) */
    char copyright[16];             /* Copyright Information (16) */
    char title_local[48];           /* Domestic Name (48) */
    char title_int[48];             /* Overseas Name (48) */
    char serial[14];                /* Serial Number (2, 12) */
    u16 checksum;                   /* Checksum (2) */
    char IOSupport[16];             /* I/O Support (16) */
    u32 rom_start;                  /* ROM Start Address (4) */
    u32 rom_end;                    /* ROM End Address (4) */
    u32 ram_start;                  /* Start of Backup RAM (4) */
    u32 ram_end;                    /* End of Backup RAM (4) */
    char sram_sig[2];               /* "RA" for save ram (2) */
    u16 sram_type;                  /* 0xF820 for save ram on odd bytes (2) */
    u32 sram_start;                 /* SRAM start address - normally 0x200001 (4) */
    u32 sram_end;                   /* SRAM end address - start + 2*sram_size (4) */
    char modem_support[12];         /* Modem Support (24) */
    char notes[40];                 /* Memo (40) */
    char region[16];                /* Country Support (16) */
} rom_header = {
    "SEGA MEGA DRIVE ",
    "(C) AUG 2024.AUG",
    "240P TEST SUITE                                 ",
    "240P TEST SUITE                                 ",
    "GM 00002501-24",
    0x0000,
    "JDC             ",
    0x00000000,
    0x0003FFFF,
    0x00000000,
    0x00000000,
    "  ",
    0x0000,
    0x00000000,
    0x00000000,
    "            ",
    "ARTEMIO URBINA 2024                     ",
    "JUE             "
};
