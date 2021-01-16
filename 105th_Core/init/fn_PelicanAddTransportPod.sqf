_pelican = _this select 0;

// Pelican ACTION

_pelican addAction ["Get in Transport Pod", {   
    _pelican = _this select 0; 
    _caller = _this select 1; 
    _gun = attachedObjects _pelican select 0; 
    _caller moveInAny _gun; 
}, [], 5.2, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget))", 5, false];

// ATTACH

_TransportPod = "v105_Land_Transport_Covered_Pod" createVehicle position _pelican;
_TransportPod attachTo [_pelican, [0,-4.75,0.10]];

_TransportPod addEventHandler ["GetOut",   
{
	params ["_vehicle", "_role", "_unit", "_turret"];
	[_vehicle, _unit] spawn
	{
		_pelican = attachedTo (_this select 0);
		_unit = (_this select 1);
		_unit allowDamage false;
		_unit setPos (_pelican modelToWorld [3.5,1,-2.5]);
		_unit setDir (direction _pelican);
		uiSleep .2;
		_unit allowDamage false;
	};
}];

// MOVE OR DEATH

_pelican addEventHandler ["Killed", 
{
    params ["_unit", "_killer", "_instigator", "_useEffects"];
    {
		_x setDamage 1;
	} forEach attachedObjects _unit;
}];

_pelican addEventHandler ["Deleted", 
{
    params ["_entity"];
    {
		deleteVehicle _x;
	} forEach attachedObjects _entity;
}];