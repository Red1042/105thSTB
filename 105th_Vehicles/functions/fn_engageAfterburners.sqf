/*
    Original code from:
    Modified by: 105th, S-4 Logistics (Luke)
*/

_pelican = _this;
_pelican setVariable ["OPTRE_Thruster_EngagedStatus",false,true];
_pelican setVariable ["OPTRE_Afterburners_EngagedStatus",true,true];
hint "ENGAGING AFTERBURNERS";
sleep 0.5;
if (speed _pelican <= 600) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 35;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
while {((_pelican getVariable ["OPTRE_Afterburners_EngagedStatus",false]) AND (isEngineOn _pelican))} do
{
	if (speed _pelican <= 900) then {
		_vel = velocity _pelican;
		_dir = direction _pelican;
		_speed = 19;
		_pelican setVelocity [
		(_vel select 0) + (sin _dir * _speed),
		(_vel select 1) + (cos _dir * _speed),
		(_vel select 2)
		];
	};
	sleep 0.5;
};

if(!(isEngineOn _pelican)) then {
    _pelican setVariable ["OPTRE_Afterburners_EngagedStatus",false,true];
};