-- name: Arena - Custom Level Example
-- description: Adds an example level to arena (must enable Arena as well!)

-- register the level here
LEVEL_ARENA_EXAMPLE = level_register('level_arena_example_entry', COURSE_NONE, 'Example', 'example', 28000, 0x28, 0x28, 0x28)

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
    _G.Arena.add_level(LEVEL_ARENA_EXAMPLE, 'Example')
end

hook_event(HOOK_ON_LEVEL_INIT, on_level_init)
