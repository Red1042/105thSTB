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
while {((_vehicle getVariable ["OPTRE_Afterburners_EngagedStatus",false]) AND (isEngineOn _vehicle) AND (_vehicle getHitPointDamage "hithull" < 0.55))} do
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

if(!(isEngineOn _vehicle)) exitWith {
    _vehicle setVariable ["OPTRE_Afterburners_EngagedStatus",false,true];
    _vehicle spawn V_FZ_fnc_ThrusterDeAnimate;
};

if(_vehicle getHitPointDamage "hithull" < 0.55) exitWith {};
if(_vehicle getHitPointDamage "hithull" < 0.8) exitWith {
    _vehicle setVariable ["OPTRE_Afterburners_EngagedStatus",false,true];
    _vehicle spawn v105_Vehicles_fnc_engageForwardThrusters;
    _vehicle spawn V_FZ_fnc_ThrusterAnimate;
    [] spawn { hint "DISENGAGING AFTERBURNERS, REVERTING TO FORWARD THRUSTERS DUE TO DAMAGE"; };
};

_vehicle setVariable ["OPTRE_Afterburners_EngagedStatus",false,true];
_vehicle setVariable ["OPTRE_Thruster_EngagedStatus",false,true];
hint "DISENGAGING ALL THRUSTERS, DUE TO DAMAGE";
_vehicle spawn V_FZ_fnc_ThrusterDeAnimate;