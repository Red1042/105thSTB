params ["_formatted"];
private _uid = getPlayerUID player;
private _adminState = call BIS_fnc_admin;
if(_uid in v105_Admin_List or _adminState != 0) then {
    hint _formatted;
};