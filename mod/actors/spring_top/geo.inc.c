#include "src/game/envfx_snow.h"

const GeoLayout spring_top_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, spring_top_spring_top_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, spring_top_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
