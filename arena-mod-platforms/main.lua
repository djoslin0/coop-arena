-- name: Arena - Platforms Level
-- description: Adds the removed level '\\#99aaff\\Platforms\\#ffffff\\' back into Arena\n(\\#ff0000\\must enable Arena as well!\\#ffffff\\)

-- register the level here
LEVEL_ARENA_PLATFORMS = level_register('level_arena_platforms_entry', COURSE_NONE, 'Platforms', 'platforms', 28000, 0x28, 0x28, 0x28)

-- make sure we don't add the level twice
local sAddedLevels = false

function on_level_init()
    -- make sure we don't add the level twice
    if sAddedLevels then return end
    sAddedLevels = true

    -- make sure Arena was loaded
    if not _G.Arena then
        djui_popup_create("Error: the Arena gamemode wasn't loaded!", 2)
        return
    end

    -- add the level to arena
    _G.Arena.add_level(LEVEL_ARENA_PLATFORMS, 'Platforms')
end

hook_event(HOOK_ON_LEVEL_INIT, on_level_init)
