_pelican = _this;
_pelican setvariable ["OPTRE_Thruster_EngagedStatus",false,true];
hint format["DISENGAGING FORWARD THRUSTERS\n\nACTIVATING AIR BRAKES"];
while {(!(_pelican getvariable ["OPTRE_Thruster_EngagedStatus",false]) AND (speed _pelican > 100))} do
{
	_vel = velocity _pelican;
	_dir = direction _pelican;
	_speed = -25;
	_pelican setVelocity [
	(_vel select 0) + (sin _dir * _speed), 
	(_vel select 1) + (cos _dir * _speed), 
	(_vel select 2)
	];
	sleep 0.5;
};
 