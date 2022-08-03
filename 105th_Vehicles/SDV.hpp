//  SDVs

class B_SDV_01_F;
class v105_SDV_ODST:B_SDV_01_F
{
	displayName="SDV II";
	editorCategory="HOW_EdCat_105th";
	editorSubcategory="HOW_105th_EdSubCat_Waterborne";
	fuelCapacity=300;
	crew = "VES_Rifleman_MA5B_MAR";
	armor=100;

	acceleration=12;
	maxSpeed=65;
	waterSpeedFactor=1;
	periscopeDepth=1.2;
	idleRpm=300;
	redRpm=1200;
	thrustDelay=4;

	overSpeedBrakeCoef=0.80000001;
	enginePower=130;
	engineShiftY=0.40000001;
	waterLeakiness=0;
	waterResistanceCoef=0.01;
	waterLinearDampingCoefX=2;
	waterLinearDampingCoefY=1.2;
	waterAngularDampingCoef=1.10;
	rudderForceCoef=0.1;
	rudderForceCoefAtMaxSpeed=0.050000001;
	class TransportItems
	{

	};
	ace_cargo_space = 4;
	ace_cargo_hasCargo = 1;
};