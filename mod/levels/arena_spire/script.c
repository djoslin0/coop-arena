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
#include "levels/arena_spire/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_arena_spire_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _arena_spire_segment_7SegmentRomStart, _arena_spire_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, arena_spire_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x26, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x23, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3200, 1399, -2415, 0, 90, 0, (0x02 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 3200, 3809, 785, 0, 0, 0, (0x00 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 3200, 1409, 3985, 0, -90, 0, (0x01 << 24), id_bhvArenaFlag),
		OBJECT(MODEL_NONE, 2000, 2209, -2465, 0, 90, 0, (0x03 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2000, 2209, 4035, 0, 90, 0, (0x03 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 4800, 2309, 785, 0, 90, 0, (0x04 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 1600, 2309, 785, 0, -90, 0, (0x04 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 4400, 2209, -2465, 0, -90, 0, (0x05 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 4400, 2209, 4035, 0, -90, 0, (0x05 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 3609, 785, 0, 0, 0, (0x01 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 4400, 2309, 3135, 0, -90, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2000, 2309, 3135, 0, 90, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 2000, 2309, -1565, 0, 90, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 4400, 2309, -1565, 0, -90, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1909, -65, 0, -180, 0, (0x02 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1909, 1635, 0, 0, 0, (0x02 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 2309, 785, 0, -180, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 1109, 785, 0, 0, 0, (0x06 << 24), id_bhvArenaItem),
		OBJECT(MODEL_NONE, 3200, 3409, 785, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 5294, 2109, 785, 0, -90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 3200, 909, 785, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 2000, 2109, 3135, 0, 90, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 3200, 1709, -615, 0, 0, 0, 0x00000000, id_bhvArenaKoth),
		OBJECT(MODEL_NONE, 2000, 1309, 3585, 0, 91, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4150, 1233, 1885, 0, 91, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3000, 2121, 1035, 0, -179, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4400, 1309, 3585, 0, -90, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3400, 2121, 1035, 0, -179, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4150, 1233, -315, 0, 91, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3400, 940, 435, 0, 1, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3000, 940, 435, 0, 1, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3400, 940, 1135, 0, -179, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3000, 940, 1135, 0, -179, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 2250, 1233, 1885, 0, -89, 0, (0x01 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3000, 2121, 535, 0, 1, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 2000, 1309, -2015, -4, 90, -4, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 3400, 2121, 535, 0, 1, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 2250, 1233, -315, 0, -89, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4400, 1309, -2015, 0, -89, 0, (0x02 << 24), id_bhvArenaSpawn),
		OBJECT(MODEL_NONE, 4800, 909, 785, 0, 90, 0, (115), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 1600, 909, 785, 0, -90, 0, (115), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 3200, 2709, 1585, 0, 0, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 3200, 2709, -15, 0, 0, 0, (95), id_bhvArenaSpring),
		OBJECT(MODEL_NONE, 3200, 7762, 785, 0, -180, 0, (10 << 16), bhvAirborneWarp),
		TERRAIN(arena_spire_area_1_collision),
		MACRO_OBJECTS(arena_spire_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
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
