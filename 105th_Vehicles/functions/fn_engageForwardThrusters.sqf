/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke)

	Description:
	Enable forward thrusters on selected vehicle

	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for

	Returns:
	NONE
*/
private ["_vehicle"];
params ["_vehicle"];

_vehicle setVariable ["OPTRE_Thruster_EngagedStatus",true,true];
hint "ENGAGING FORWARD THRUSTERS";
sleep 0.5;
if (speed _vehicle <= 250) then {
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 22;
		_vehicle setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
while {((_vehicle getVariable ["OPTRE_Thruster_EngagedStatus",false]) AND (isEngineOn _vehicle))} do
{
	if (speed _vehicle <= 400) then {
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 8;
		_vehicle setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
	sleep 0.5;
};

if(!(isEngineOn _vehicle)) then {
    _vehicle setVariable ["OPTRE_Thruster_EngagedStatus",false,true];
};