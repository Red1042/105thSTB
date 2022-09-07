/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	This method is called onHit of selected vehicles to simulate enhanced damage where damage to hull also damages subcomponents mainly used on OPTRE assets due to their lack of damage simulated subsystems

	Parameter(s):
	_this select 0: OBJECT - The vehicle to simulate the enhanced damage for

	Returns:
	NONE
*/

_vehicle = (_this select 0);
_hullDamage = _vehicle getHitPointDamage "hithull";

if(_hullDamage >= 1) then {
    _hullDamage = 0.99;
};

{
    [_vehicle, _x, _hullDamage,false] call BIS_fnc_setHitPointDamage;
} forEach ((getAllHitPointsDamage _vehicle) select 0);