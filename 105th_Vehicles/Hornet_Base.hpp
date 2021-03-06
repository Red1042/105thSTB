//class RotorLibHelicopterProperties;
class HOW_AV14_Base: VES_AV14
	{
		dlc="105th";
		author="Howard, Skywalker";
		side=1;
		scope=1;
		scopeCurator=1;
		forceInGarage=1;
		displayName="AV-14 Prototype";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=6;
		backRotorSpeed=7;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		armor=150;
        weapons[]=
		{
			"weapon_Cannon_Phalanx",
			"Gatling_30mm_Plane_CAS_01_F",
			"HOW_Flares"
		};
		magazines[]=
		{
			"magazine_Cannon_Phalanx_x1550",
			"1000Rnd_Gatling_30mm_Plane_CAS_01_F",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
		
		altFullForce = 6000;
		maxSpeed=450;
		liftForceCoef=2.5;
		cyclicAsideForceCoef=3.4;
		cyclicForwardForceCoef=1.65;
		bodyFrictionCoef=0.3000001;
		backRotorForceCoef = 1.75;
		
		class Components: Components
		{
			class TransportCountermeasuresComponent;
			class TransportPylonsComponent
			{
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"105th_Hornet"};
						attachment = "v105_Hydra_M247_P_7Rnd_M";
						priority = 6;
						maxweight = 600;
						UIposition[] = {0.5,0.4};
                        bay = 1;
					};
					class pylons2: pylons1
					{
						hardpoints[] = {"105th_Hornet"};
						priority = 6;
						attachment = "v105_Hydra_M247_P_7Rnd_M";
						maxweight = 600;
						UIposition[] = {0.5,0.2};
						mirroredMissilePos = 1;						
                        bay = 1;
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"105th_Hornet"};
						priority = 5;
						attachment = "v105_Hydra_M247_P_7Rnd_M";
						maxweight = 600;
						UIposition[] = {0.4,0.35};
                        bay = 1;
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"105th_Hornet"};
						priority = 5;
						attachment = "v105_Hydra_M247_P_7Rnd_M";
						maxweight = 600;
						UIposition[] = {0.4,0.25};
                        bay = 1;
						mirroredMissilePos = 3;						
					};
				};
			};
		};
		class TransportBackpacks
		{
			
		};
		class TransportItems
		{
			#include "cfg\VehicleGearHornet.hpp"
		};
	};
	
	class HOW_AV14_CAP: HOW_AV14_Base
	{
		dlc="105th";
		author="Howard, Skywalker";
		side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet I";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		
        weapons[]=
		{
			"HOW_Vulcan_20mm",
			"HOW_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"HOW_Vulcan20mm_620RND",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks
		{
		};
	
	};
	class HOW_AV14_CAS: HOW_AV14_Base
	{
		dlc="105th";
		author="Howard, Skywalker";
		side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet II";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		
        weapons[]=
		{
			"HOW_Gatling_30mm",
			"HOW_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"HOW_GAU30mm_570RND",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks{};
		
	};
	class HOW_AV14_CAS_Keen: HOW_AV14_Base
	{
		dlc="105th";
		author="Howard, Skywalker";
		side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet II [Keen]";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_Archived";
		crew="VES_Rifleman_MA5B_ODST";
		
        weapons[]=
		{
			"HOW_Gatling_30mm",
			"HOW_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"HOW_GAU30mm_570RND",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks{};
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hornet\105th_Hornet_Keen.paa"
		};
	};

	class HOW_AV14B_CAS: HOW_AV14_Base
	{
		dlc="105th";
		author="Howard, Skywalker";
		side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet IIB";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		
        weapons[]=
		{
			"HOW_145x114_minigun",
			"HOW_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"HOW_1200Rnd_145x114_Red_Belt",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"Laserbatteries"
		};
		class TransportBackpacks{};
		
	};
	class HOW_AV14L_MULTI: HOW_AV14_Base
	{
		dlc="105th";
		author="Howard";
		side=1;
		scope=1;
		scopeCurator=1;
		forceInGarage=1;
		displayName="AV-14L Hornet";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		
		
        weapons[]=
		{
			"OPTRE_M41_LAAG",
			"HOW_Flares",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"OPTRE_1000Rnd_127x99_M41",
			"OPTRE_1000Rnd_127x99_M41",
			"HOW_320Rnd_Flare_Chaff_Magazine",
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
		
	};
	
	

	