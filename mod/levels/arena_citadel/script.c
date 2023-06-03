#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/arena_citadel/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_arena_citadel_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _arena_citadel_segment_7SegmentRomStart, _arena_citadel_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, arena_citadel_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5050, 2159, 2335, 0, 45, 0, (0x02 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 3200, 709, 785, 0, 0, 0, (0x00 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 1350, 2159, -765, 0, -135, 0, (0x01 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 1350, 1909, -765, 0, 45, 0, (0x03 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 5050, 1909, 2335, 0, -135, 0, (0x03 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3750, 1409, -265, 0, 90, 0, (0x04 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2650, 1409, 1835, 0, -90, 0, (0x04 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2525, 1009, -290, 0, -180, 0, (0x02 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3950, 1009, 1935, 0, 0, 0, (0x02 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1409, 785, 0, 0, 0, (0x01 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 450, 609, 1035, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 5950, 609, 535, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 5482, 1009, 2767, 0, -135, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 918, 1009, -1197, 0, 45, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3500, 609, 3835, 0, -180, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 4184, 609, -2265, 0, -180, 0, (0x05 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2216, 609, 3835, 0, 0, 0, (0x05 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 750, 609, 3535, 0, -180, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2900, 609, -2265, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 5650, 609, -1965, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 409, 785, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 3900, 809, -1559, 0, -90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 2500, 809, 3129, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 5050, 1709, 2335, 0, 45, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 1350, 1709, -765, 0, -135, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 2125, 1209, 1885, 0, -90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 4275, 1209, -315, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 2002, 1209, 2387, 0, -180, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4398, 1209, -817, 0, 0, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3200, 409, 1935, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3200, 409, -365, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4900, 809, 285, 0, 90, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1500, 809, 1285, 1, -90, -1, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1350, 809, -765, 0, 45, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 5050, 809, 2335, 0, -135, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3950, 409, 1285, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 2450, 409, 285, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 385, 809, 560, 0, 45, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 6015, 809, 1010, 0, -135, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4313, 809, 3083, 0, 135, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 5796, 409, 1599, 0, 45, 0, (115), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 604, 409, -29, 0, 45, 0, (115), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 2087, 809, -1513, 0, 135, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 3200, 3503, 785, 0, -180, 0, (10 << 16), bhvAirborneWarp),
		TERRAIN(arena_citadel_area_1_collision),
		MACRO_OBJECTS(arena_citadel_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_KOOPA_ROAD),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
