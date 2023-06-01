---@param m MarioState
--Called once per player per frame at the end of a mario update
function mario_update(m)
    if (m.health >= 0x100) and gNetworkPlayers[m.playerIndex].connected then
        if (( m.healCounter or  m.hurtCounter) == 0) then
            if ((m.action & ACT_FLAG_SWIMMING ~= 0) and (m.action & ACT_FLAG_INTANGIBLE == 0)) then
                if ((m.pos.y >= (m.waterLevel - 140)) and not (m.area.terrainType & TERRAIN_SNOW ~= 0)) then
                    m.health = m.health - 0x1A
                end
            end
        end
    end
end

hook_event(HOOK_MARIO_UPDATE, mario_update) --Called once per player per frame at the end of a mario update