Lights1 spring_bottom_spring_back_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx spring_bottom_spring_back_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 spring_bottom_spring_back_rgba16[] = {
	#include "actors/spring_bottom/spring_back.rgba16.inc.c"
};

Vtx spring_bottom_spring_bottom_mesh_layer_1_vtx_0[20] = {
	{{ {103, 2, -103}, 0, {2032, -16}, {0, 127, 0, 255} }},
	{{ {-103, 2, -103}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-103, 2, 103}, 0, {-16, 2032}, {0, 127, 0, 255} }},
	{{ {103, 2, 103}, 0, {2032, 2032}, {0, 127, 0, 255} }},
	{{ {-85, 1, 85}, 0, {1792, 227}, {129, 0, 0, 255} }},
	{{ {-85, 116, 85}, 0, {1789, 1793}, {129, 0, 0, 255} }},
	{{ {-85, 116, -85}, 0, {220, 1793}, {129, 0, 0, 255} }},
	{{ {-85, 1, -85}, 0, {223, 227}, {129, 0, 0, 255} }},
	{{ {-85, 1, -85}, 0, {223, 227}, {0, 0, 129, 255} }},
	{{ {-85, 116, -85}, 0, {220, 1793}, {0, 0, 129, 255} }},
	{{ {85, 116, -85}, 0, {1789, 1793}, {0, 0, 129, 255} }},
	{{ {85, 1, -85}, 0, {1792, 227}, {0, 0, 129, 255} }},
	{{ {85, 1, -85}, 0, {1792, 227}, {127, 0, 0, 255} }},
	{{ {85, 116, -85}, 0, {1789, 1793}, {127, 0, 0, 255} }},
	{{ {85, 116, 85}, 0, {220, 1793}, {127, 0, 0, 255} }},
	{{ {85, 1, 85}, 0, {223, 227}, {127, 0, 0, 255} }},
	{{ {85, 1, 85}, 0, {223, 227}, {0, 0, 127, 255} }},
	{{ {85, 116, 85}, 0, {220, 1793}, {0, 0, 127, 255} }},
	{{ {-85, 116, 85}, 0, {1789, 1793}, {0, 0, 127, 255} }},
	{{ {-85, 1, 85}, 0, {1792, 227}, {0, 0, 127, 255} }},
};

Gfx spring_bottom_spring_bottom_mesh_layer_1_tri_0[] = {
	gsSPVertex(spring_bottom_spring_bottom_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(spring_bottom_spring_bottom_mesh_layer_1_vtx_0 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_spring_bottom_spring_back[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(spring_bottom_spring_back_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, spring_bottom_spring_back_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 4095, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx spring_bottom_spring_bottom_mesh_layer_1[] = {
	gsSPDisplayList(mat_spring_bottom_spring_back),
	gsSPDisplayList(spring_bottom_spring_bottom_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx spring_bottom_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

