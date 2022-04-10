_allExplosivesArray = [player] call ACE_Explosives_fnc_getPlacedExplosives;

_explosives = [];
_delay = 0;
{
    _explosives pushBack [_x select 0,_delay];
    _delay = _delay + 0.1;
} forEach _allExplosivesArray;

_num = count _explosives;
if(_num == 0) then {
    hint "No explosives to trigger";
} else {
    hint (str (_num) + " explosives triggered");
};

[player, -1, _explosives, "ACE_Clacker"] call ACE_Explosives_fnc_detonateExplosiveAll;