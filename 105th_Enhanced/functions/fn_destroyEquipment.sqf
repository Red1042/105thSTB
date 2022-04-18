/*
    Destroy Equipment

    This handles the "Break Sensitive Equipment" ace interaction for downed/dead players
*/


params["_unit","_state"];
if(!(isPlayer _unit)) exitWith {};

if(!(_state)) exitWith {
    [_unit,0,["ACE_MainActions","Break Sensitive Equipment"]] call ace_interact_menu_fnc_removeActionFromObject;
};

_action = ["Break Sensitive Equipment","Break Sensitive Equipment","",{
	_target unassignItem "ItemCTab";
	_target removeItem "ItemCTab";
	_target unassignItem "ItemAndroid";
	_target removeItem "ItemAndroid";
	_target removeItem "MRH_SoldierTab";
	_target removeItem "MRH_TacticalDisplay";
	{
        if(!(_x isKindOf ["ItemRadio", configFile >> "CfgWeapons"])) then {continue;};
	    _target unassignItem _x;
	    _target removeItem _x;
	} forEach assignedItems _target;
	_lrTypeBroken = "";
	_backpack = backpack _target;
	if(_backpack isKindOf "OPTRE_ANPRC_515") then {
	    _lrTypeBroken = "v105_ANPRC_515_Broken";
	};
	if(_backpack isKindOf "OPTRE_ANPRC_521_Green") then {
	    _lrTypeBroken = "v105_ANPRC_521_Broken";
	};
	if(_backpack == "BravoCompany_Radio") then {
	   _lrTypeBroken = "BravoCompany_Radio_Broken";
	};
	if(_lrTypeBroken == "") exitWith {[_target,0,["ACE_MainActions","Break Sensitive Equipment"]] call ace_interact_menu_fnc_removeActionFromObject;};
	[_target,_lrTypeBroken] spawn {
	    params["_target","_lrTypeBroken"];
	    _backpackItems = backpackItems _target;
        removeBackpackGlobal _target;
	    _target addBackpackGlobal _lrTypeBroken;
	    waitUntil { !isNull backpackContainer _target };
	    {_target addItemToBackpack _x;} forEach _backpackItems;
	};
	[_target,0,["ACE_MainActions","Break Sensitive Equipment"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject"];
},{true}] call ace_interact_menu_fnc_createAction;
[_unit, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;