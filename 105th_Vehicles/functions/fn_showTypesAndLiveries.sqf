/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Loads the sub-options of the vehicle spawner menu for the given selected "Vehicle"

	Parameter(s):
	_this select 0: CONTROL - The control for the Vehicle Spawner "Vehicle" selection
	_this select 1: INTEGER - The index value of the selected item of control

	Returns:
	NONE
*/
private ["_listCtrlVehicles","_index","_display","_listCtrlTypes","_listCtrlLiveries","_vehicle","_data"];
params ["_listCtrlVehicles","_index"];

_display = (uiNamespace getVariable "v105_Vehicle_VehicleSpawner_UI");
_listCtrlTypes = _display displayCtrl 1501;
_listCtrlLiveries = _display displayCtrl 1502;

_vehicle = (_listCtrlVehicles lbText _index);

_data = (v105_VehicleSpawnerData get _vehicle);


lbClear _listCtrlTypes;
lbClear _listCtrlLiveries;


{_listCtrlTypes lbAdd (_x select 0);} forEach (_data select 0);
{_listCtrlLiveries lbAdd (_x select 0);} forEach (_data select 1);

_listCtrlTypes lbSetCurSel 0;
_listCtrlLiveries lbSetCurSel 0;