/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Save the current data to the inidbi database to save it persistently

	Parameter(s):
	NONE

	Returns:
	NONE
*/

private ["_target","_items","_itemsMap","_item"];
params ["_target"];

_items = [];
_itemsMap = createHashMap;

/* Add Goggles (CfgGlasses) */

{
    _item = ([configFile >> "CfgGlasses" >> _x] call BIS_fnc_displayName);
    if(_item isEqualTo "") then {continue;};
    _items pushBackUnique _item;
    _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
} forEach [goggles _target];


/* Add targets weapons & accessories (CfgVehicles) */

{
    {
        if(typeName _x isEqualTo "ARRAY") then {
            if(count _x <= 0) then {continue;};
            _item = ([configFile >> "CfgVehicles" >> (_x select 0)] call BIS_fnc_displayName);
            if(_item isEqualTo "") then {continue;};
            _items pushBackUnique _item;
            _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
        } else {
            _item = ([configFile >> "CfgVehicles" >> _x] call BIS_fnc_displayName);
            if(_item isEqualTo "") then {continue;};
            _items pushBackUnique _item;
            _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
        };
    }
} forEach (weaponsItems _target);


/* Add targets backpack (CfgVehicles) */

{
    _item = ([configFile >> "CfgVehicles" >> _x] call BIS_fnc_displayName);
    if(_item isEqualTo "") then {continue;};
    _items pushBackUnique _item;
    _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
} forEach [backpack _target];


/* Add targets uniform, vest, helmet & general items assigned and non assigned (CfgWeapons) */

{
    _item = ([configFile >> "CfgWeapons" >> _x] call BIS_fnc_displayName);
    if(_item isEqualTo "") then {continue;};
    if(["AN/PRC",_item,false] call BIS_fnc_inString) then {
        _item = ([_item," "] call BIS_fnc_splitString select 0);
    };
    _items pushBackUnique _item;
    _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
} forEach (items _target + assignedItems _target + [uniform _target, vest _target, headgear _target]);


/* Add targets spare magazines */

{
    _item = ([configFile >> "CfgMagazines" >> _x] call BIS_fnc_displayName);
    if(_item isEqualTo "") then {continue;};
    _items pushBackUnique _item;
    _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
} forEach magazines _target;

_items = _items call BIS_fnc_sortAlphabetically;


// Return the results
[_items,_itemsMap]