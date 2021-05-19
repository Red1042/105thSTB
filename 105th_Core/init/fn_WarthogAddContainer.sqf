_warthog = _this select 0;

// ATTACH
if((isDedicated) OR (hasInterface && isServer)) then
{
	_mortarContainer = "v105_Mortar_Container" createVehicle position _warthog;
	_mortarContainer attachTo [_warthog, [0,-3.0,-1.15]];
	_mortarContainer setDir 90;

// MOVE OR DEATH

	_warthog addEventHandler ["Killed", 
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			_x setDamage 1;
		} forEach attachedObjects _unit;
	}];

	_warthog addEventHandler ["Deleted", 
	{
		params ["_entity"];
		{
			deleteVehicle _x;
		} forEach attachedObjects _entity;
	}];
};