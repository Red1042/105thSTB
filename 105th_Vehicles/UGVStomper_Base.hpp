class v105_UGV_Stag_Base:UGV_01_rcws_base_F
{
    author="Howard";
    displayName="UGV STAG Base";
    side=1;
	scope = 1;
	scopeCurator = 1;
	editorCategory = "HOW_EdCat_105th";
	editorSubCategory = "HOW_105th_EdSubCat_Drones";
	crew="B_UAV_AI";
	armor=50;
	armorStructural=12;
    hiddenSelectionsTextures[]=
		{
            "105th_Vehicles\Textures\Stag\v105_Stag_Ext.paa",
            "\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
            "105th_Vehicles\Textures\Stag\v105_Stag_Turret.paa"           
		};
        fuelCapacity=30;

    	idleRpm=1100;
		redRpm=6600;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				3.4820002,
				"D2",
				2.6180001,
				"D3",
				1.4500001,
                "D4",
				1.3500001,
                "D5",
				1.30001,
                "D6",
				1.25
			};
			TransmissionRatios[]=
			{
				"High",
				5.539
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
        maxSpeed=120;
		enginePower=250;
		maxOmega=900;
		peakTorque=2000;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0.2},
			{0.278,0.5},
			{0.34999999,0.85000002},
			{0.461,1},
			{0.60000002,0.94999999},
			{0.69999999,0.85000002},
			{0.80000001,0.69999999},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999};
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=40;
				MOI=20;
				armor=30;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=700;
				springStrength=36750;
				springDamperRate=10000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
			};
		};
		switchTime=0.1;
		ace_cargo_size = 15;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
};

class v105_UGV_STAG:v105_UGV_Stag_Base
{
    author="Howard";
    displayName="UGV STAG";
    side=1;
	scope = 2;
	scopeCurator = 2;
	editorCategory = "HOW_EdCat_105th";
	editorSubCategory = "HOW_105th_EdSubCat_Drones";
	crew="B_UAV_AI";
    class Turrets:Turrets
    {
		class CargoTurret_01:CargoTurret_01{};
        class MainTurret:MainTurret
        {
             weapons[]=
				{
					"OPTRE_M41_LAAG",
					"GMG_40mm"
				};
				magazines[]=
				{
					"OPTRE_1000Rnd_127x99_M41",
					"96Rnd_40mm_G_belt"
				};
        };
    };
        transportMaxWeapons=8;
		transportMaxMagazines=100;
		transportMaxBackpacks=50;
		maximumLoad=3000;
		class TransportItems
		{
            #include "cfg\VehicleGearStag.hpp"
		};
    
};
class v105_UGV_STAG_ATGM:v105_UGV_Stag_Base
{
    author="Howard";
    displayName="UGV STAG ATGM";
    side=1;
	scope = 2;
	scopeCurator = 2;
	editorCategory = "HOW_EdCat_105th";
	editorSubCategory = "HOW_105th_EdSubCat_Drones";
	crew="B_UAV_AI";
    class Turrets:Turrets
    {	
		class CargoTurret_01:CargoTurret_01{};
        class MainTurret:MainTurret
        {
             weapons[]=
				{
					"OPTRE_M41_LAAG",
					"missiles_Vorona"
				};
				magazines[]=
				{
					"OPTRE_1000Rnd_127x99_M41",
					"Vorona_HEAT",
                    "Vorona_HEAT",
                    "Vorona_HEAT",
                    "Vorona_HEAT",
                    "Vorona_HEAT"
				};
        };
    };
        transportMaxWeapons=8;
		transportMaxMagazines=100;
		transportMaxBackpacks=50;
		maximumLoad=3000;
		class TransportItems
		{
            #include "cfg\VehicleGearStag.hpp"
		};
    
};