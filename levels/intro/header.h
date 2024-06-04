#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_0002D0[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_000414[];

// leveldata
// CUSTOM LOGO STARTS HERE (header.c)
extern u8 uvan__0_rgba16_ci8[];
extern u8 uvan__0_rgba16_pal_rgba16[];
extern u8 uvan__1_rgba16_i8[];
extern Vtx uvan_tstxo_mesh_vtx_0[861];
extern Gfx uvan_tstxo_mesh_tri_0[];
extern Vtx uvan_tstxo_mesh_vtx_1[671];
extern Gfx uvan_tstxo_mesh_tri_1[];
extern Gfx mat_uvan_intro_seg7_texture_0[];
extern Gfx mat_revert_uvan_intro_seg7_texture_0[];
extern Gfx mat_uvan_intro_seg7_texture_1[];
extern Gfx mat_revert_uvan_intro_seg7_texture_1[];
extern Gfx uvan_tstxo_mesh[];
// CUSTOM LOGO ENDS HERE

extern const Gfx intro_seg7_dl_0700C6A0[];
extern const f32 intro_seg7_table_0700C790[];
extern const f32 intro_seg7_table_0700C880[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_4[];
extern const LevelScript script_intro_L1[];
extern const LevelScript script_intro_L2[];
extern const LevelScript script_intro_L3[];
extern const LevelScript script_intro_L4[];
extern const LevelScript script_intro_L5[];

#endif
