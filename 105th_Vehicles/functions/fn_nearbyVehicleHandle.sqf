/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Gets the Long Name of any nearby Spawned Vehicle

	Parameter(s):
	_this select 0: OBJECT or ARRAY - vehicle pad (Object, PositionAGL or Position2D)
	_this select 0: DISPLAY - The vehicle pads UI display

	Returns:
	NONE
*/
private ["_display","_pad","_name","_vicInfo","_vehicleName","_typeName","_liveryName","_spawnerIndexes","_indexVehicle","_indexType","_indexLivery"];
params ["_display","_pad"];

uiNamespace setVariable ["v105_Vehicle_VehicleSpawner_ActiveVehicle",objNull];
_name = "None";
{
    _vicInfo = _x getVariable ["v105_vicInfo","none"];
    if(!(_vicInfo isEqualTo "none")) exitWith {
        _vehicleName = _vicInfo select 0;
        _typeName = _vicInfo select 1;
        _liveryName = _vicInfo select 2;
        (_display displayCtrl 1003) ctrlSetText (_typeName + " " + _vehicleName + " | " + _liveryName);
        _spawnerIndexes = _x getVariable ["v105_spawnerIndexes",[]];
        _indexVehicle = _spawnerIndexes select 0;
        _indexType = _spawnerIndexes select 1;
        _indexLivery = _spawnerIndexes select 2;
        (_display displayCtrl 1500) lbSetCurSel _indexVehicle;
        (_display displayCtrl 1501) lbSetCurSel _indexType;
        (_display displayCtrl 1502) lbSetCurSel _indexLivery;
        uiNamespace setVariable ["v105_Vehicle_VehicleSpawner_ActiveVehicle",_x];
    };
} forEach (_pad nearEntities [["Air", "Car", "Motorcycle", "Tank", "Slingload_01_Base_F"], 10]);