/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Opens the admin main menu UI and fills it with the necessary data

	Parameter(s):
	NONE

	Returns:
	NONE
*/

disableSerialization;

private ["_display","_listPlayersPrivateMessage","_groups","_names","_listUndefinedOptions","_listUndefinedList","_mods","_target","_undefinedMods","_detectedModsString","_mod"];

closeDialog 0;
_display = createDialog ["v105_Admin_Main_UI",true];
uiNamespace setVariable ["v105_Admin_loadingMainMenu",true];


_listPlayersPrivateMessage = _display displayCtrl 2100;
_groups = ["[Global]","[Admins]"];
_names = [];

{
    _name = (name _x);
    _names pushBack _name;
} forEach allPlayers;

_names = _names call BIS_fnc_sortAlphabetically;

{
    _listPlayersPrivateMessage lbAdd _x;
} forEach _groups;

{
    _listPlayersPrivateMessage lbAdd _x;
} forEach _names;

_listPlayersPrivateMessage lbSetCurSel 0;


/*
    Start of setting up "undefined section (mods)"
*/

_listUndefinedOptions = _display displayCtrl 2101;
_listUndefinedList = _display displayCtrl 1501;

{
    _listUndefinedOptions lbAdd _x;
} forEach ["Undefined Mods","Undefined Items [WIP]"];

_listUndefinedOptions lbSetCurSel 0;
_mods = [];

{
    _target = _x;
    {_mods pushBackUnique _x} forEach (_target getVariable ["activeMods",[]]);
} forEach allPlayers;

_undefinedMods = [];
_detectedModsString = "";

{
    _mod = _x;
    if(_mod in v105_Admin_blacklistedMods) then {
        continue;
    };
    if(_mod in v105_Admin_whitelistedMods) then {
        continue;
    };
    _undefinedMods pushBack _mod;
} forEach _mods;

_undefinedMods = _undefinedMods call BIS_fnc_sortAlphabetically;

{
    _listUndefinedList lbAdd _x;
} forEach _undefinedMods;

_listUndefinedList lbSetCurSel 0;

/*
    End of setting up "undefined mods"
*/


uiNamespace setVariable ["v105_Admin_loadingMainMenu",false];