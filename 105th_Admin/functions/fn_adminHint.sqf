/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Sends a hint of the passed message to all online admins

	Parameter(s):
	_this select 0: STRING - formatted message

	Returns:
	NONE
*/

private ["_formatted","_uid","_adminState"];
params ["_formatted"];
private _uid = getPlayerUID player;
private _adminState = call BIS_fnc_admin;
if(_uid in v105_Admin_ActiveAdminList or _adminState != 0 or (isServer && hasInterface)) then {
    hint _formatted;
};