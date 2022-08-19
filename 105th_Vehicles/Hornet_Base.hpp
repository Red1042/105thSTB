//class RotorLibHelicopterProperties;
class VES_AV14;
class v105_AV14_Base: VES_AV14
	{
		dlc="105th";
		author="S-4 Logistics";
		side=1;
		scope=1;
		scopeCurator=1;
		forceInGarage=1;
		displayName="AV-14 Prototype";
		editorCategory="v105_EdCat_105th";
		editorSubcategory="v105_105th_EdSubCat_Hornets";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=6;
		backRotorSpeed=8;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		armor = 250;
        weapons[]=
		{
			"weapon_Cannon_Phalanx",
			"Gatling_30mm_Plane_CAS_01_F",
			"v105_Flares"
		};
		magazines[]=
		{
			"magazine_Cannon_Phalanx_x1550",
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"v105_320Rnd_Flare_Chaff_Magazine"
		};

		hiddenSelectionsTextures[]=
        {
            "V_FZ_Vehicles\data\Hornet\V_FZ_HORNET_URB.paa"
        };
		
		altFullForce = 6000;
		maxSpeed=450;
		liftForceCoef=2.5;
		cyclicAsideForceCoef=3.4;
		cyclicForwardForceCoef=1.65;
		bodyFrictionCoef=0.3000001;
		backRotorForceCoef = 1.75;
		class UserActions
		{
		    #include "cfg\ThrusterActions.hpp"
		};
		class Components: Components
		{
			class TransportCountermeasuresComponent;
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"v105_UnguidedRockets","v105_GuidedRockets","105th_HOTs","105th_Hellfires","105th_AA_Missiles","105th_Hornet","Pelican_Utility"};
						attachment = "v105_FIR_Hydra_M247_P_7Rnd_M";
						priority = 6;
						maxweight = 600;
						UIposition[] = {0.5,0.4};
                        bay = 1;
					};
					class pylons2: pylons1
					{
						hardpoints[] = {"v105_UnguidedRockets","v105_GuidedRockets","105th_HOTs","105th_Hellfires","105th_AA_Missiles","105th_Hornet","Pelican_Utility"};
						priority = 6;
						attachment = "v105_FIR_Hydra_M247_P_7Rnd_M";
						maxweight = 600;
						UIposition[] = {0.5,0.2};
						mirroredMissilePos = 1;						
                        bay = 1;
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"v105_UnguidedRockets","v105_GuidedRockets","105th_HOTs","105th_Hellfires","105th_AA_Missiles","105th_Hornet","Pelican_Utility"};
						priority = 5;
						attachment = "v105_FIR_Hydra_M247_P_7Rnd_M";
						maxweight = 600;
						UIposition[] = {0.4,0.35};
                        bay = 1;
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"v105_UnguidedRockets","v105_GuidedRockets","105th_HOTs","105th_Hellfires","105th_AA_Missiles","105th_Hornet","Pelican_Utility"};
						priority = 5;
						attachment = "v105_FIR_Hydra_M247_P_7Rnd_M";
						maxweight = 600;
						UIposition[] = {0.4,0.25};
                        bay = 1;
						mirroredMissilePos = 3;						
					};
					class pylons5: pylons1
					{
						hardpoints[] = {"v105_Gunpods"};
						priority = 5;
						attachment = "";
						maxweight = 600;
						UIposition[] = {0.4,0.30};
                        bay = 1;
						mirroredMissilePos = 0;						
					};
				};
			};
		};
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
            class v105_EnhancedDamage_EH
		    {
                hit = "_this call v105_Vehicles_fnc_EnhancedDamage";
		    };
		};
		class TransportBackpacks{};
		class TransportItems
		{
			#include "cfg\VehicleGearHornet.hpp"
		};
		class VehicleSpawnerInfo
		{
		    scope=0;
		    vehicle="Hornet";
		    icon="105th_Vehicles\textures\Icons\Hornet.paa";
		    liveries[]=
		    {
		        "[""VC-497"",[""V_FZ_Vehicles\data\Hornet\V_FZ_HORNET_URB.paa""]]",
                //"[""Keen"",[""105th_Vehicles\textures\Hornet\105th_Hornet_Keen.paa""]]",
		        "[""Desert"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DES.paa""]]",
		        "[""Woodland"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_WDL.paa""]]",
		        "[""Jungle"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_JNG.paa""]]",
		        "[""Urban"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB.paa""]]",
		        "[""Black"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_BLK.paa""]]",
		        "[""Frost"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_FRS.paa""]]",
		        "[""Tundra"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_TND.paa""]]",
		        "[""Dunes"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DUN.paa""]]",
		        "[""Classic"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_CLS.paa""]]",
		        "[""Olive"",[""V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3.paa""]]"
		    };
		};
	};
	
	class v105_AV14_CAP: v105_AV14_Base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet I";
		
        weapons[]=
		{
			"v105_Vulcan_20mm",
			"v105_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"v105_Vulcan20mm_620RND",
			"v105_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks
		{
		};
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "20mm Cannon";
		};
	};
	class v105_AV14_CAS: v105_AV14_Base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet II";
		
        weapons[]=
		{
			"v105_Gatling_30mm",
			"v105_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"v105_GAU30mm_570RND",
			"v105_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks{};
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "30mm Cannon";
		};
	};

	class v105_AV14B_CAS: v105_AV14_Base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet IIB";
		
        weapons[]=
		{
			"v105_145x114_minigun",
			"v105_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"v105_1200Rnd_145x114_Red_Belt",
			"v105_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks{};
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "Minigun";
		};
	};
	class v105_AV14L_MULTI: v105_AV14_Base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14L Hornet";
        weapons[]=
		{
			"OPTRE_M41_LAAG",
			"v105_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"OPTRE_1000Rnd_127x99_M41",
			"OPTRE_1000Rnd_127x99_M41",
			"v105_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks{};
		altFullForce = 6000;
		maxSpeed=450;
		liftForceCoef=2.5;
		cyclicAsideForceCoef=3.35;
		cyclicForwardForceCoef=1.5;
		bodyFrictionCoef=0.30000001;
		backRotorForceCoef = 1.75;
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "LAAG";
		};
	};