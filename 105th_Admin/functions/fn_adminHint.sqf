params ["_formatted"];
private _uid = getPlayerUID player;
private _adminState = call BIS_fnc_admin;
if(_uid in v105_Admin_ActiveAdminList or _adminState != 0 or (isServer && hasInterface)) then {
    hint _formatted;
};