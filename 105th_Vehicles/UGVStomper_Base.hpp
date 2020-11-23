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
		switchTime=0.1;
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