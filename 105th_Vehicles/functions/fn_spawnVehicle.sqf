/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Spawns the selected vehicle type and equips the selected livery

	Parameter(s):
	NONE

	Returns:
	NONE
*/
private ["_display","_listCtrlVehicles","_listCtrlTypes","_listCtrlLiveries","_indexVehicle","_indexType","_indexLivery","_vehicleName","_data","_typeName","_liveryName","_vehicleClass","_liveryData","_alternativeLiveryData","_pad","_padLocation","_location","_vehicle","_spawnerIndexes","_wrongVehicle"];

_display = (uiNamespace getVariable "v105_Vehicle_VehicleSpawner_UI");
_listCtrlVehicles = _display displayCtrl 1500;
_listCtrlTypes = _display displayCtrl 1501;
_listCtrlLiveries = _display displayCtrl 1502;

_indexVehicle = lbCurSel _listCtrlVehicles;

if(_indexVehicle == -1) exitWith {hint "No Vehicle Selected";};

_indexType = lbCurSel _listCtrlTypes;
_indexLivery = lbCurSel _listCtrlLiveries;
_vehicleName = (_listCtrlVehicles lbText _indexVehicle);

_data = (v105_VehicleSpawnerData get _vehicleName);
_typeName = (((_data select 0) select _indexType) select 0);
_liveryName = (((_data select 1) select _indexLivery) select 0);
_vehicleClass = (((_data select 0) select _indexType) select 1);
_liveryData = (((_data select 1) select _indexLivery) select 1);
_alternativeLiveryData = (((((_data select 0) select _indexType) select 2) select _indexLivery) select 1);

_vehicle = (uiNamespace getVariable ["v105_Vehicle_VehicleSpawner_ActiveVehicle",objNull]);
_spawnerIndexes = _vehicle getVariable ["v105_spawnerIndexes",[-1,-1]];
_wrongVehicle = false;


/* Handle Vehicle reSkinning without re spawning the vehicle */
if(((_spawnerIndexes select 0) != _indexVehicle) OR ((_spawnerIndexes select 1) != _indexType)) then {
    /* Handle Despawning */
    _pad = (uiNamespace getVariable ["v105_Vehicle_VehicleSpawner_Pad",nil]);
    if(!([_pad] call v105_Vehicles_fnc_DespawnVehicle)) exitWith {_wrongVehicle = true};
    (_display displayCtrl 1003) ctrlSetText (_typeName + " " + _vehicleName + " | " + _liveryName); //ToDo Correct for Alternative data

    uiSleep 0.1;
    /* Handle Spawning */
    _location = _pad modelToWorldWorld [0,0,0.1]; //  Todo: Setup "offset" option in module
    _vehicle = createVehicle [_vehicleClass,_location, [], 0, "CAN_COLLIDE"];
    _vehicle setPosASL _location;
    _vehicle allowDamage false;
    _vehicle setDir (getDir _pad); //ToDo: Setup the "direction" option in module
    _vehicle setVelocity [0,0,-2];
    _vehicle setVariable ["v105_vicInfo",[_vehicleName,_typeName,_liveryName],true];
    _vehicle setVariable ["v105_spawnerIndexes",[_indexVehicle,_indexType,_indexLivery],true];
    uiNamespace setVariable ["v105_Vehicle_VehicleSpawner_ActiveVehicle",_vehicle];
    [_vehicle] spawn {
        params ["_vehicle"];
        uiSleep 2;
        _vehicle allowDamage true;
    };
};

if(_wrongVehicle) exitWith {};

(_display displayCtrl 1003) ctrlSetText (_typeName + " " + _vehicleName + " | " + _liveryName); //ToDo Correct for Alternative data

_selection = 0;
if(isNil "_alternativeLiveryData") then {
    {
        _vehicle setObjectTextureGlobal [_selection, _x];
        _selection = _selection + 1;
    } forEach _liveryData;
} else {
    {
        _vehicle setObjectTextureGlobal [_selection, _x];
        _selection = _selection + 1;
    } forEach _alternativeLiveryData;
};