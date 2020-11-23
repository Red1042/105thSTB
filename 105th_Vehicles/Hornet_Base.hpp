//class RotorLibHelicopterProperties;
class HOW_AV14_Base: VES_AV14
	{
		dlc="105th";
		author="Howard,Skywalker";
		side=1;
		scope=1;
		scopeCurator=1;
		forceInGarage=1;
		displayName="AV-14 Prototype";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=5;
		backRotorSpeed=6;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
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
		
	/*	class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F\Heli_Light_01\RTD_Heli_Light_01.xml";
			autoHoverCorrection[]={0.28,2.8800001,0};
			defaultCollective=0.63499999;
			maxTorque=1500;
			stressDamagePerSec=0;
			maxHorizontalStabilizerLeftStress=100000;
			maxHorizontalStabilizerRightStress=100000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=31000;
			maxTailRotorStress=5200;
			retreatBladeStallWarningSpeed=77.222;
		};*/
		altFullForce = 6000;
		maxSpeed=450;
		liftForceCoef=2.5;
		cyclicAsideForceCoef=3;
		cyclicForwardForceCoef=1.75;
		bodyFrictionCoef=0.20000001;
		backRotorForceCoef = 1.75;
		/*
		//multiplier of body friction
		bodyFrictionCoef = 0.7;	
		//multiplier of bank force
		cyclicAsideForceCoef = 1.0;
		//multiplier of dive force
		cyclicForwardForceCoef = 1.0;
		//multiplier of back rotor force
		backRotorForceCoef = 1.0;	
		*/
		//airFriction0[] = {35, 45, 45};
		
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
					/*class pylons5: pylons1
					{
						hardpoints[] = {"FIR_F35B_Wingtip_HP","FIR_MISC"};
						priority = 4;
						bay = -1;  						
						attachment = "FIR_Empty_P_1rnd_M";
						maxweight = 200;
						UIposition[] = {0.25,0.55};
					};
					class pylons6: pylons5
					{
						hardpoints[] = {"FIR_F35B_Combined_HP","FIR_MISC"};						
						UIposition[] = {0.25,0.5};  
						priority = 3;						
						maxweight = 700;
					};
					class pylons7: pylons5
					{
						hardpoints[] = {"FIR_F35B_Combined_HP","FIR_MISC"};											
						UIposition[] = {0.25,0.45};
						priority = 2;					
						maxweight = 2500;						
					};
					class pylons8: pylons7
					{						
						UIposition[] = {0.25,0.15};
						mirroredMissilePos = 7;		
					};
					class pylons9: pylons6
					{
						UIposition[] = {0.25,0.1};
						mirroredMissilePos = 6;								
					};
					class pylons10: pylons5
					{
						UIposition[] = {0.25,0.05};
						mirroredMissilePos = 5;								
					};
					class pylons11
					{
						hardpoints[] = {"FIR_F35B_Gunpod_HP","FIR_MISC"};
						attachment = "FIR_Gunpod_Nomodel_P_1rnd_M";
						priority = 1;
						maxweight = 1000;
						UIposition[] = {0.25,0.30};
					};	*/						
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
		mainRotorSpeed=5;
		backRotorSpeed=4;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
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
		mainRotorSpeed=5;
		backRotorSpeed=4;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
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
		editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=5;
		backRotorSpeed=4;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
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
		mainRotorSpeed=5;
		backRotorSpeed=4;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
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
	

	