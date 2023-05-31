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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3200, 609, 4385, 0, -180, 0, (0x02 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 3200, 1509, 785, 0, 0, 0, (0x00 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 3200, 609, -2815, 0, -180, 0, (0x01 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 5000, 1809, 785, 0, 0, 0, (0x03 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 1400, 1809, 785, 0, 0, 0, (0x03 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 309, -2815, 0, 0, 0, (0x04 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 309, 4385, 0, 0, 0, (0x04 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1309, 2985, 0, 0, 0, (0x02 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1309, -1415, 0, 0, 0, (0x02 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1209, 785, 0, 0, 0, (0x01 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 200, 509, 2385, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 200, 509, -815, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 6200, 509, -815, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 6200, 509, 2385, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, -691, 785, 0, 0, 0, (0x01 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, -675, -691, 785, 0, -90, 0, (0x05 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 7125, -691, 785, 0, 90, 0, (0x05 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, -591, 4785, 0, -180, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, -591, -3215, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, -675, -791, 785, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 7125, -791, 785, 0, -90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 1400, 1609, -15, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 5000, 1609, 1585, 0, -90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 3200, -191, 785, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 6800, -791, -4215, 0, -90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, -400, -791, 5785, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 3200, 209, -2815, 0, -180, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 3200, 209, 4385, 0, -180, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 1400, 1609, 1585, 0, 0, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1400, 1609, -15, 0, -180, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 5000, 1609, -15, 0, -180, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 5000, 1609, 1585, 0, 0, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 6800, -791, 5785, 0, 0, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, -400, -791, 5785, 0, 0, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 6800, -791, -4215, 0, -180, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, -400, -791, -4215, 0, -180, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4500, 209, -1415, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1900, 209, -1415, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4500, 209, 2985, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1900, 209, 2985, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3200, -191, 285, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3200, -191, 1285, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3700, 409, 1585, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 2700, 409, 1585, 0, -180, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3700, 409, -15, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 2700, 409, -15, 0, 0, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4800, -391, -1815, 0, 90, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1600, -391, -1815, 0, -90, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 1600, -391, 3385, 0, -90, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4800, -391, 3385, 0, 90, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 196, -651, 2381, 0, 90, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 4987, -792, -4073, -20, -180, 0, (160 << 8) | (84), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 6204, -651, -810, 0, -90, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 196, -651, -810, 0, 90, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 6204, -651, 2381, 0, -90, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 1412, -792, 5644, -20, 0, 0, (160 << 8) | (84), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 1412, -792, -4073, -20, -180, 0, (160 << 8) | (84), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 4987, -792, 5644, -20, 0, 0, (160 << 8) | (84), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 3200, 3503, 785, 0, -180, 0, (10 << 16), bhvAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
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
