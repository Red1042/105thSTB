/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke)

	Description:
	Enable afterburners on selected vehicle

	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for

	Returns:
	NONE
*/
private ["_vehicle"];
params ["_vehicle"];

_vehicle setVariable ["OPTRE_Thruster_EngagedStatus",false,true];
_vehicle setVariable ["OPTRE_Afterburners_EngagedStatus",true,true];
hint "ENGAGING AFTERBURNERS";
sleep 0.5;
if (speed _vehicle <= 600) then {
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 35;
		_vehicle setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
while {((_vehicle getVariable ["OPTRE_Afterburners_EngagedStatus",false]) AND (isEngineOn _vehicle))} do
{
	if (speed _vehicle <= 900) then {
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_speed = 19;
		_vehicle setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
	sleep 0.5;
};

if(!(isEngineOn _vehicle)) then {
    _vehicle setVariable ["OPTRE_Afterburners_EngagedStatus",false,true];
};