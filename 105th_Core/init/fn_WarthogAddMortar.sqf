_warthog = _this select 0;

// Warthog ACTION

_warthog addAction ["Get in MK6 Mortar Turret as Gunner", {   
    _warthog = _this select 0; 
    _caller = _this select 1; 
    _gun = attachedObjects _warthog select 0; 
    _caller moveInAny _gun; 
}, [], 5.2, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget))", 12, false];

// ATTACH

_warthogmortar = "B_Mortar_01_F" createVehicle position _warthog;
_warthogmortar attachTo [_warthog, [0.35,-3.15,-0.275]];
//createVehicleCrew _warthogmortar;
_warthogmortar addEventHandler ["GetOut",   
{
	params ["_vehicle", "_role", "_unit", "_turret"];
	[_vehicle, _unit] spawn
	{
		_warthog = attachedTo (_this select 0);
		_unit = (_this select 1);
		_unit allowDamage false;
		_unit setPos (_warthog modelToWorld [3.5,1,-2.5]);
		_unit setDir (direction _warthog);
		uiSleep .2;
		_unit allowDamage false;
	};
}];

_warthogpallet1 = "Land_Pallet_F" createVehicle position _warthog;
_warthogpallet1 attachTo [_warthog, [-0.31,-3.0,-1.1]];
_warthogpallet2 = "Land_Pallet_F" createVehicle position _warthog;
_warthogpallet2 attachTo [_warthog, [0.25,-3.0,-1.1]];


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