/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke)

	Description:


	Parameter(s):
	_this select 0: OBJECT - pelican to attach transport pod to

	Returns:
	NONE
*/
private ["_pelican","_caller","_gun","_aliveCrew","_transportPod",""];
params ["_pelican"];

// Pelican ACTION
_pelican addAction ["Get in Transport Pod", {
    private ["_pelican","_caller","_gun"];
    _pelican = _this select 0;
    _caller = _this select 1;
    _gun = attachedObjects _pelican select 0;
    _caller moveInAny _gun;
}, [], 5.2, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget))", 5, false];

_pelican setVariable["v105_pod_attached",true];
_pelican addAction ["<t color='#FFA500'>Drop Transport Pod", {
    private ["_pelican","_caller","_gun","_aliveCrew"];
    _pelican = _this select 0;
    _caller = _this select 1;
    _gun = attachedObjects _pelican select 0;
    _aliveCrew = [];
    {
        if(alive _x) then {
            _aliveCrew pushBack _x;
        };
    } forEach (crew _gun);
    if((count _aliveCrew) > 0) exitWith { hint "CANNOT DROP POD \n IT HAS PASSENGERS IN"; };
    _pelican setVariable["v105_pod_attached",false];
    hint "POD DROPPED";
    detach _gun;
}, [], 4, false, false, "", "((_this in [driver _originalTarget]) && _originalTarget getVariable[""v105_pod_attached"",false])"];


// ATTACH
if(!(isServer)) exitWith {};

_transportPod = "v105_Land_Transport_Covered_Pod" createVehicle position _pelican;
_transportPod attachTo [_pelican, [0,-4.75,0.10]];

_transportPod addEventHandler ["GetOut",
{
	params ["_vehicle", "_role", "_unit"];
	[_vehicle, _unit] spawn
	{
		params ["_vehicle","_unit"];
		_pelican = attachedTo _vehicle;
		_unit allowDamage false;
		_unit setPos (_vehicle modelToWorld [0,0,-2]);
		_unit setDir (direction _pelican);
		uiSleep .2;
		_unit allowDamage true;
	};
}];

// Deleted OR Death Handlers

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