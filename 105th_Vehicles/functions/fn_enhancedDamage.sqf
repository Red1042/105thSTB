_vehicle = (_this select 0);
_hullDamage = _vehicle getHitPointDamage "hithull";

if(_hullDamage >= 1) then {
    _hullDamage = 0.99;
};

{
    [_vehicle, _x, _hullDamage,false] call BIS_fnc_setHitPointDamage;
} forEach ((getAllHitPointsDamage _vehicle) select 0);