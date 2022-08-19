/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Displays the Vehicle Spawner UI for the selected vehicle pad

	Parameter(s):
	_this select 0: OBJECT - The spawn pad of the vehicle spawner

	Returns:
	NONE
*/
private ["_pad","_camera","_display","_listCtrlVehicles","_vehiclesList","_vehiclesListUnordered"];
params ["_pad"];

closeDialog 0;

_camera = "camera" camCreate (_pad modelToWorld [0,12,4]);
_camera camSetTarget (_pad modelToWorld [0,0,2]);
_camera camCommit 0;

_padNumber = v105_VehicleSpawnerPadNumbers getOrDefault [str(_pad),9];
if(_padNumber > 9) then {
    _padNumber = 9;
};

[("vehiclespawnertarget" + str(_padNumber)), _camera] call v105_Vehicles_fnc_createPIP;


uiNamespace setVariable ["v105_Vehicle_VehicleSpawner_Pad",_pad];

_display = createDialog ["v105_Vehicle_VehicleSpawner_UI",true];

switch(_padNumber) do {
    case 0: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget0,1);"; };
    case 1: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget1,1);"; };
    case 2: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget2,1);"; };
    case 3: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget3,1);"; };
    case 4: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget4,1);"; };
    case 5: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget5,1);"; };
    case 6: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget6,1);"; };
    case 7: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget7,1);"; };
    case 8: { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget8,1);"; };
    default { (_display displayCtrl 1201) ctrlSetText "#(argb,512,512,1)r2t(vehiclespawnertarget9,1);"; };
}; // ToDo: Find a better way to solve this issue

_listCtrlVehicles = _display displayCtrl 1500;

_vehiclesListUnordered = [];
_vehiclesList = ["Falcon","Hornet","Pelican","SparrowHawk","Warthog","Logistic"]; //ToDo: Make this configurable
{
    _vehiclesListUnordered pushBack _x;
    _iconData = ((v105_VehicleSpawnerData get _x) select 2);
} forEach v105_VehicleSpawnerData;

{
        _vehiclesList pushBackUnique _x;
} forEach (_vehiclesListUnordered call BIS_fnc_sortAlphabetically);

{
    _listCtrlVehicles lbAdd _x;
} forEach _vehiclesList;

[_display,_pad] call v105_Vehicles_fnc_NearbyVehicleHandle;

[_vehiclesList,_listCtrlVehicles] spawn {
    private ["_vehiclesList","_listCtrlVehicles","_index","_icon"];
    params ["_vehiclesList","_listCtrlVehicles"];
    _index = 0;
    {

        _icon = (v105_VehicleSpawnerData get _x) select 2;
        _listCtrlVehicles lbSetPicture [_index,_icon];
        _index = _index + 1;
    } forEach _vehiclesList;
};