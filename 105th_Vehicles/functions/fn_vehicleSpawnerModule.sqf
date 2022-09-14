private ["_logic","_syncedUnits","_spawnPad","_spawnOffset"];
params ["_logic","_syncedUnits"];

if(count _syncedUnits < 1) exitWith {systemChat ("[105th Vehicle Spawner] No Synced Object Found for " + str(_logic));};

_spawnPad = missionNamespace getVariable (_logic getVariable ["SpawnPad",""]);

if(isNil "_spawnPad") exitWith {systemChat ("[105th Vehicle Spawner] No SpawnPad for " + str(_logic));};

//_spawnOffset = _logic getVariable "SpawnOffset";

if(isNil "v105_VehicleSpawnerPadNumbers") then {
    v105_VehicleSpawnerPadNumbers = createHashMap;
    v105_VehicleSpawnersNextPadNumber = 0;
};
v105_VehicleSpawnerPadNumbers set [str(_spawnPad),v105_VehicleSpawnersNextPadNumber];
v105_VehicleSpawnersNextPadNumber = v105_VehicleSpawnersNextPadNumber + 1;

{
    _x addAction ["Open Vehicle Spawner",
    {
        _spawnPad = ((_this select 3) select 0);
        [_spawnPad] call v105_Vehicles_fnc_showVehicleSpawner;
    },[_spawnPad], 1.5, true, true, "", "true", 15];
} forEach (_syncedUnits); // Make all synced objects "Consoles" to control the pad