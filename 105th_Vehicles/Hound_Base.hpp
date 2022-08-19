class B_APC_Wheeled_01_cannon_F;
class v105_IFV76_Base: B_APC_Wheeled_01_cannon_F
	{
		dlc = "105th";
		author = "Howard";
		side=1;
		scope = 1;
		scopeCurator = 1;
		displayName = "IFV-76 Hound Prototype";
		editorCategory = "v105_EdCat_105th";
		editorSubCategory = "v105_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
		armor = 1350;
		enginePower = 600;
		peakTorque = 3500;
		maxSpeed = 120;
		slowSpeedForwardCoef = 0.100;
		waterResistanceCoef = 0.10;
		waterspeedcoef = 3.5;
		idleRpm = 425;
		redRpm = 2550;
		maxOmega = 600;
		minOmega = 50;
		dampingRateFullThrottle = 0.10;
		crewCrashProtection = 0.005;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		TFAR_hasIntercom = 1;
		class Wheels
		{
			class L1
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_center";
				boundary = "wheel_1_1_bound";
				steering = 1;
				width = 0.35;
				mass = 187.5;
				armor = 150;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 45000;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_center";
				tireForceAppPointOffset = "wheel_1_1_center";
				maxCompression = 0.1125;
				maxDroop = 0.15;
				sprungMass = 3090;
				springStrength = 110000;
				springDamperRate = 27900;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_center";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_center";
				tireForceAppPointOffset = "wheel_1_2_center";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_center";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_center";
				tireForceAppPointOffset = "wheel_1_3_center";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_center";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_center";
				tireForceAppPointOffset = "wheel_1_4_center";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_center";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_center";
				tireForceAppPointOffset = "wheel_2_1_center";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_center";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_center";
				tireForceAppPointOffset = "wheel_2_2_center";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_center";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_center";
				tireForceAppPointOffset = "wheel_2_3_center";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_center";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_center";
				tireForceAppPointOffset = "wheel_2_4_center";
				maxHandBrakeTorque = 300000;
			};
		};
		class AnimationSources;
		
	
		class EventHandlers;
		class TransportItems
		{
			#include "cfg\VehicleGearMedium.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent:SensorTemplateIR{};
					class NVSensorComponent:SensorTemplateNV{};
					class VisualSensorComponent:SensorTemplateVisual{};
					class LaserSensorComponent:SensorTemplateLaser{};
				};	
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsMaterials[]=
		{
			"105th_Vehicles\textures\Hound\AMVB.rvmat",
			"105th_Vehicles\textures\Hound\AMVE.rvmat",
			"105th_Vehicles\textures\Hound\AMVG.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hound\AFV_MC_B.paa",
			"105th_Vehicles\textures\Hound\AFV_MC_E.paa",
			"105th_Vehicles\textures\Hound\AFV_MC_G.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
	};
	class v105_IFV76_A: v105_IFV76_Base
	{
		dlc = "105th";
		author = "N-4 Logistics";
		side=1;
		scope = 1;
		scopeCurator = 1;
		displayName = "IFV-76 Prototype 1";
		editorCategory = "v105_EdCat_105th";
		editorSubCategory = "v105_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
		dampingRateFullThrottle = 0.10;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		TFAR_hasIntercom = 1;
		
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"OPTRE_M230_HE","OPTRE_M230_AP","HMG_127_APC"};
				magazines[] = 
				{
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_APFSDS",
					"v105_60Rnd_50mm_APFSDS",
					"v105_60Rnd_50mm_APFSDS",
					"500Rnd_127x99_mag_Tracer_Green",
					"500Rnd_127x99_mag_Tracer_Green",
					"500Rnd_127x99_mag_Tracer_Green",
					"500Rnd_127x99_mag_Tracer_Green",
				};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.56234133,1,30};
			};
		};
		
	};
	class v105_IFV76_B: v105_IFV76_Base
	{
		dlc = "105th";
		author = "N-4 Logistics";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "IFV-76 Hound";
		editorCategory = "v105_EdCat_105th";
		editorSubCategory = "v105_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
		dampingRateFullThrottle = 0.10;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		TFAR_hasIntercom = 1;
		
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"OPTRE_M230_HE","OPTRE_M230_AP","LMG_coax_Hound"};
				magazines[] = 
				{
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_HE",
					"v105_60Rnd_50mm_APFSDS",
					"v105_60Rnd_50mm_APFSDS",
					"v105_60Rnd_50mm_APFSDS",
					"v105_60Rnd_50mm_APFSDS",
					"1000Rnd_762x51_Belt_T_Yellow_HOW",
					"1000Rnd_762x51_Belt_T_Yellow_HOW",
					"1000Rnd_762x51_Belt_T_Yellow_HOW"
				};
				
			};
		};
		
	};
	//
	//		Unarmed Hound
	// 
	class LM_OPCAN_AFV102_MC_U_WDL;
	class v105_APC76_TT : LM_OPCAN_AFV102_MC_U_WDL
	{
		dlc = "105th";
		author = "N-4 Logistics, Burgess";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "APC-76 Shepherd";
		editorCategory = "v105_EdCat_105th";
		editorSubCategory = "v105_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
		armor = 1350;
		enginePower = 600;
		peakTorque = 3500;
		maxSpeed = 120;
		slowSpeedForwardCoef = 0.100;
		waterResistanceCoef = 0.10;
		waterspeedcoef = 3.5;
		idleRpm = 425;
		redRpm = 2550;
		maxOmega = 600;
		minOmega = 50;
		dampingRateFullThrottle = 0.10;
		crewCrashProtection = 0.005;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		TFAR_hasIntercom = 1;
		class Wheels
		{
			class L1
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_center";
				boundary = "wheel_1_1_bound";
				steering = 1;
				width = 0.35;
				mass = 187.5;
				armor = 40;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 45000;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_center";
				tireForceAppPointOffset = "wheel_1_1_center";
				maxCompression = 0.1125;
				maxDroop = 0.15;
				sprungMass = 3090;
				springStrength = 110000;
				springDamperRate = 27900;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_center";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_center";
				tireForceAppPointOffset = "wheel_1_2_center";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_center";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_center";
				tireForceAppPointOffset = "wheel_1_3_center";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_center";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_center";
				tireForceAppPointOffset = "wheel_1_4_center";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_center";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_center";
				tireForceAppPointOffset = "wheel_2_1_center";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_center";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_center";
				tireForceAppPointOffset = "wheel_2_2_center";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_center";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_center";
				tireForceAppPointOffset = "wheel_2_3_center";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_center";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_center";
				tireForceAppPointOffset = "wheel_2_4_center";
				maxHandBrakeTorque = 300000;
			};		
		};
				class TransportItems
				{
					#include "cfg\VehicleGearMedium.hpp"
				};
				class TransportMagazines{};
				class TransportWeapons{};
	};
	class v105_APC76_MED:v105_APC76_TT
	{
		dlc = "105th";
		author = "N-4 Logistics, Burgess";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "APC-76M Shepherd";
		editorCategory = "v105_EdCat_105th";
		editorSubCategory = "v105_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
			class TransportItems
				{
					#include "cfg\VehicleGearMedical.hpp"
				};
			class TransportMagazines{};
			class TransportWeapons{};
	};