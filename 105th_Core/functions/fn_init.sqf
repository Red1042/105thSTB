if(isDedicated) exitWith {};
if(isNil "LH_spawnArea") exitWith {};

player addEventHandler ["Respawn", {
    [] spawn {
        if(isNil "LH_spawnArea") exitWith {};
        if(isNil "LH_nextRespawnIndex") then {
            LH_nextRespawnIndex = 0;
            publicVariable "LH_nextRespawnIndex";
        };
        _respawnList = [LH_spawn0,LH_spawn1,LH_spawn2,LH_spawn3,LH_spawn4,LH_spawn5,LH_spawn6,LH_spawn7];
        _respawnObject = (_respawnList select LH_nextRespawnIndex);
        _respawnPosition = getPosATL _respawnObject;
        _respawnDir = getDir _respawnObject;

        LH_nextRespawnIndex = (LH_nextRespawnIndex + 1);
        if(LH_nextRespawnIndex > 7) then {
            LH_nextRespawnIndex = 0;
        };
        publicVariable "LH_nextRespawnIndex";
        if(player inArea LH_spawnArea) then {
            player setUnitFreefallHeight 3000;
            player setDir _respawnDir;
            player setPosATL _respawnPosition;
        };
        _count = 0;
        while {sleep 1; (_count < 10)} do {
            if(player inArea LH_spawnArea) then {
                player setUnitFreefallHeight 3000;
                player setPosATL _respawnPosition;
                player setDir _respawnDir;
            };
            _count = _count + 1;
        };
    };
}];