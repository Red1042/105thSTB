params ["_target"];

_items = [];
_itemsMap = createHashMap;

{
    _item = ([configFile >> "CfgWeapons" >> _x] call BIS_fnc_displayName);
    _items pushBackUnique _item;
    _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
} forEach (items _target + assignedItems _target);

{
    _item = ([configFile >> "CfgMagazines" >> _x] call BIS_fnc_displayName);
    _items pushBackUnique _item;
    _itemsMap set [_item,((_itemsMap getOrDefault [_item, 0]) + 1)];
} forEach magazines _target;

_items = _items call BIS_fnc_sortAlphabetically;

[_items,_itemsMap]