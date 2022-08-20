class FullAirbrakeEngageFast
{
	animPeriod=5;
	condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
	displayName="<t color='#FE2E2E'>Engage Airbrakes";
	displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
	textToolTip="<t color='#FE2E2E'>Engage Airbrakes";

	userActionID=57;
};
class HalfAirbrakeEngageFast
{
	animPeriod=5;
	condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
	displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
	displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
	textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";

	userActionID=58;
};

class Thruster400Engage
{
	animPeriod=5;
	condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  (((getPosATL this) select 2) > 1) AND (_vehicle getHitPointDamage ""hithull"" < 0.55)";
	displayName="<t color='#04B45F'>Engage Forward Thrusters";
	displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
	textToolTip="<t color='#04B45F'>Engage Forward Thrusters";

	userActionID=52;
};

class Thruster400Disengage
{
	animPeriod=5;
	condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
	displayName="<t color='#FCE205'>Disengage Forward Thrusters";
	displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
	onlyForPlayer=0;
	position="cargo_door_handle";
	priority=10;
	radius=100000;
	showWindow=0;
	statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
	textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";

	userActionID=53;
};