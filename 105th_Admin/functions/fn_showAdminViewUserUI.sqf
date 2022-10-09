/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Opens the admin view user menu UI and fills it with the necessary data

	Parameter(s):
	NONE

	Returns:
	NONE
*/

disableSerialization;

private["_targetName","_display","_listPlayers","_listCtrlMods","_listCtrlItems","_target","_targetIndex","_index","_name","_whitelistedItems","_blacklistedItems","_undefinedItems","_result","_items","_itemsMap","_amount","_whitelistedMods","_blacklistedMods","_undefinedMods","_detectedModsString","_mod"];
params["_targetName"];
uiNamespace setVariable ["v105_Admin_loadingMenu",true];

closeDialog 0;
_display = createDialog ["v105_Admin_ViewUser_UI",true];
_listPlayers = _display displayCtrl 2000;
_listCtrlMods = _display displayCtrl 1500;
_listCtrlItems = _display displayCtrl 1501;

_target = nil;
_targetIndex = -1;
_index = -1;
{
    _index = _index + 1;
    _name = (name _x);
    if(_name isEqualTo _targetName) then {
        _targetIndex = _index;
        _target = _x;
    };
    _listPlayers lbAdd _name;
} forEach allPlayers;

if(isNil "_target") exitWith {closeDialog 0; hint format ["%1 is noLonger in the server",_targetName];}; // TODo: Update this to take you back a menu

_listPlayers lbSetCurSel _targetIndex;
uiNamespace setVariable ["v105_Admin_nextTargetIndex",0];
if(_targetIndex < _index) then {
    uiNamespace setVariable ["v105_Admin_nextTargetIndex",(_targetIndex+1)];
};

/*
    Current Items Section
*/

_whitelistedItems = [];
_blacklistedItems = [];
_undefinedItems = [];

_result = [_target] call v105_Admin_fnc_ScanInventory;
_items = _result select 0;
_itemsMap = _result select 1;

{
    _amount = _itemsMap get _x;
    _name = _x;
    if(_amount > 1) then {
        _name = format ["%1 [%2]",_x,_amount];
    };
    if(_x in v105_Admin_whitelistedItems) then {
        _whitelistedItems pushBack _name;
        continue;
    };
    if(_x in v105_Admin_blacklistedItems) then {
        _blacklistedItems pushBack _name;
        continue;
    };
    _undefinedItems pushBack _name;
} forEach _items;

_whitelistedItems = _whitelistedItems call BIS_fnc_sortAlphabetically;
_blacklistedItems = _blacklistedItems call BIS_fnc_sortAlphabetically;
_undefinedItems = _undefinedItems call BIS_fnc_sortAlphabetically;

_index = -1;
{
    _index = _index + 1;
    _listCtrlItems lbAdd _x;
    _listCtrlItems lbSetColor [_index,[0.8,0,0,1]]
} forEach _blacklistedItems;

{
    _index = _index + 1;
    _listCtrlItems lbAdd _x;
} forEach _undefinedItems;

{
    _index = _index + 1;
    _listCtrlItems lbAdd _x;
    _listCtrlItems lbSetColor [_index,[0,0.8,0,1]]
} forEach _whitelistedItems;



/*
    Loaded mods Section
*/

_index = -1;
_mods = _target getVariable ["activeMods",[]];

_whitelistedMods = [];
_blacklistedMods = [];
_undefinedMods = [];
_detectedModsString = "";

{
    _mod = _x;
    if(_mod in v105_Admin_blacklistedMods) then {
        _blacklistedMods pushBack _mod;
        continue;
    };
    if(_mod in v105_Admin_whitelistedMods) then {
        _whitelistedMods pushBack _mod;
        continue;
    };
    _undefinedMods pushBack _mod;
} forEach _mods;


_whitelistedMods = _whitelistedMods call BIS_fnc_sortAlphabetically;
_blacklistedMods = _blacklistedMods call BIS_fnc_sortAlphabetically;
_undefinedMods = _undefinedMods call BIS_fnc_sortAlphabetically;

_index = -1;
{
    _index = _index + 1;
    _listCtrlMods lbAdd _x;
    _listCtrlMods lbSetColor [_index,[0.8,0,0,1]]
} forEach _blacklistedMods;

{
    _index = _index + 1;
    _listCtrlMods lbAdd _x;
} forEach _undefinedMods;

{
    _index = _index + 1;
    _listCtrlMods lbAdd _x;
    _listCtrlMods lbSetColor [_index,[0,0.8,0,1]]
} forEach _whitelistedMods;

uiNamespace setVariable ["v105_Admin_loadingMenu",false];