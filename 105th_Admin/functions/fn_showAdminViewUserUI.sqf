disableSerialization;

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

_result = [_target] call v105_Admin_fnc_ScanInventory;
_items = _result select 0;
_itemsMap = _result select 1;

// START HERE

_index = -1;
{
    _index = _index + 1;
    _amount = _itemsMap get _x;
    _name = _x;
    if(_amount > 1) then {
        _name = format ["%1 [%2]",_x,_amount];
    };
    _listCtrlItems lbAdd _name;
    if(_x in v105_Admin_whitelistedItems) then {
        _listCtrlItems lbSetColor [_index,[0,1,0,1]]
    };
    if(_x in v105_Admin_blacklistedItems) then {
        _listCtrlItems lbSetColor [_index,[1,0,0,1]]
    };
} forEach _items;



/*
    Loaded mods Section
*/

_index = -1;
_mods = _target getVariable ["activeMods",[]];

{
    _index = _index + 1;
    _listCtrlMods lbAdd _x;
    if(_x in v105_Admin_whitelistedMods) then {
        _listCtrlMods lbSetColor [_index,[0,1,0,1]]
    };
    if(_x in v105_Admin_blacklistedMods) then {
        _listCtrlMods lbSetColor [_index,[1,0,0,1]]
    };
} forEach _mods;

uiNamespace setVariable ["v105_Admin_loadingMenu",false];