////////////////////////////////////////////////////////////////////
//DeRap: 105_Vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Jan 17 14:29:04 2020 : 'file' last modified on Sun Jan 05 17:20:58 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 105th_Vehicles
	{
		author = "Howard";
		name = "105th Vehicle Enhancement Project";
		url = "";
		units[] = 
		{
		//Hounds
		"HOW_IFV76_B",
		"HOW_APC76_TT",
		"HOW_APC76_MED",
		//Scorpion
		"LM_OPCAN_HOW_M808_MC_WDL",
		//Timberwolves
		"HOW_MGS_Timberwolf",
		"HOW_MGS_UP_Timberwolf",
		//Warthogs
		"HOW_M12",
		"HOW_M12_LRV",
		"HOW_M12_ODST",
		"HOW_M12_LRV_ODST",
		"HOW_M12A1_LRV",
		"HOW_M12G1_LRV",
		"HOW_M12G1_LRV_ODST",
		"HOW_M813_TT",
		"HOW_M813_TT_ODST",
		"HOW_M12_APC_MED",
		"HOW_M12_APC",
		"HOW_M813_MORT",
		"HOW_M12_Mortar",
		//Fossas
	//	"HOW_Fossa_unarmed",
	//	"HOW_Fossa_armed",
	//	"HOW_Fossa_armed_AT",
		//Falcons
		"v105_UH144",
		"v105_UH144_MED",
		"v105_UH144S",
		"v105_UH144_A",
		"v105_UH144S_A",
		"v105_UH144S_AM",
		"v105_UH144S_ARC",
		//Pelicans
		"v105_D77HTCI_A",
		"v105_D77HTCI",
		"v105_D78DHTC",
		"v105_D77HTCI_REACH",
		"v105_HOW_D77HTCI_REACH_BubOday",
		"v105_HOW_D77HTCI_BulcHori",
		"v105_HOW_D77HTCI_SHARK_MeatWind",
		"v105_HOW_D77HTCI_SHARK_Ragith",
		"v105_HOW_D77HTCI_Keen",
		// Hornets
	//	"HOW_AV14_Base",
		"HOW_AV14_CAP",
		"HOW_AV14_CAS",
		"HOW_AV14_CAS_Keen", 
		"HOW_AV14B_CAS",
		//Claymore
		"v105_A364_Claymore",
		//SDV
		"v105_SDV_ODST",
		//STAG UGV
		"v105_UGV_STAG",
		"v105_UGV_STAG_ATGM",
		"v105_UCAV_Sentinel",
		// Supply Pods
		"HOW_105th_SupplyPod_Rifle",
		"HOW_105th_SupplyPod_MachineGun",
		"HOW_105th_SupplyPod_Precision",
		"HOW_105th_SupplyPod_Rockets",
		"HOW_105th_SupplyPod_Medical",
		"HOW_105th_SupplyPod_Utility",
		"HOW_105th_SupplyPod_Demo",
		
		};
		weapons[] = 
		{
			// Hornet
			"HOW_Gatling_30mm",
			"HOW_Vulcan_20mm",
			"HOW_145x114_minigun",
			//Fossa Gun
			"HOW_cannon_20mm",
			//"CMFlareLauncher",
			"HOW_Flares",
			// Warthog
			"HOW_M41_LAAG",
			// Timberwolf
			"HOW_cannon_120mm_AP",
			"HOW_cannon_120mm_GP",
			// Hound
			"OPTRE_M230_AP",
			"OPTRE_M230_HE",
			"LMG_coax_Hound",
			//Falcon
			"v105_FalconGL",
			
			// Pelican Weapons
			"v105_gatling_30mm",
			"v105_FIR_AIM9X",
			"v105_FIR_AIM120",
			"v105_FIR_AGM65",
			"v105_FIR_ASM2",
			"v105_FIR_RKT_Launcher",
			"v105_FIR_APKWS_Launcher",
			"v105_FIR_Zuni_Launcher",
			"v105_FIR_LZuni_Launcher",
			"v105_FIR_ECMPOD",
			"v105_FIR_GBU53",
			"v105_FIR_GBU12",
			"v105_FIR_EGBU12",
			"v105_FIR_GBU16",
			"v105_FIR_GBU24",
			"v105_FIR_GBU38",
			"v105_FIR_AGM154",
			"v105_FIR_AGM88",
			"v105_FIR_mk82_Snakeye_Launcher"
		};
		magazines[] = 
		{
			//Hornets
			"HOW_GAU30mm_570RND",
			"HOW_Vulcan20mm_620RND",
			"HOW_1200Rnd_145x114_Red_Belt",
			//Fossa Mags
			"HOW_8Rnd_20mm_AP",
			"HOW_8Rnd_20mm_HE",
			//"168Rnd_CMFlare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			//Hound
			"HOW_60Rnd_50mm_APFSDS",
			"HOW_60Rnd_50mm_HE",
			"1000Rnd_762x51_Belt_T_Yellow_HOW",
			// Falcon GL
			"HOW_50Rnd_82mm_shells",
			//Pelican Ordnance
			"HOW_OPTRE_M638",
			"v105_AIM9X_P_2rnd_M",
			"v105_AIM120B_LAU115_P_1rnd_M",
			"v105_AGM65D_P_3rnd_M",
			"v105_AGM65B_P_3rnd_M",
			"v105_AGM65H_P_3rnd_M",
			"v105_AGM65F_P_3rnd_M",
			"v105_AGM65G_P_3rnd_M",
			"v105_AGM65K_P_3rnd_M",
			"v105_AGM65E_P_3rnd_M",
			"v105_AGM65E2_P_3rnd_M",
			"v105_AGM65L_P_3rnd_M",
			"v105_AGM65F_P_1rnd_M",
			"v105_AGM65G_P_1rnd_M",
			"v105_AGM65K_P_1rnd_M",
			"v105_AGM65E_P_1rnd_M",
			"v105_AGM65E2_P_1rnd_M",
			"v105_AGM65L_P_1rnd_M",
			"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114K",
			"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114N",
			"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114L",
			
			"v105_Hydra_P_7rnd_M",
			"v105_Hydra_P_19rnd_M",
			"v105_Hydra_P_38rnd_M",
			
			"v105_Hydra_M229_P_7rnd_M",
			"v105_Hydra_M229_P_19rnd_M",
			"v105_Hydra_M229_P_38rnd_M",
			
			"v105_Hydra_M247_P_7rnd_M",
			"v105_Hydra_M247_P_19rnd_M",
			"v105_Hydra_M247_P_38rnd_M",
			
			"v105_Hydra_M282_P_7rnd_M",
			"v105_Hydra_M282_P_19rnd_M",
			"v105_Hydra_M282_P_38rnd_M",
			
			"v105_Hydra_WDU4_P_7rnd_M",
			"v105_Hydra_WDU4_P_19rnd_M",
			"v105_Hydra_WDU4_P_38rnd_M",
			
			"v105_Hydra_M261_P_7rnd_M",
			"v105_Hydra_M261_P_19rnd_M",
			"v105_Hydra_M261_P_38rnd_M",

			"v105_Hydra_WP_P_7rnd_M",
			"v105_Hydra_WP_P_21rnd_M",
			
			"v105_APKWS_P_19rnd_M",
			"v105_APKWS_P_38rnd_M",
			
			"v105_APKWS_M247_P_19rnd_M",
			"v105_APKWS_M247_P_38rnd_M",
			
			"v105_APKWS_M282_P_19rnd_M",
			"v105_APKWS_M282_P_38rnd_M",
			"v105_Zuni_P_8rnd_M",
			"v105_Zuni_Mk32_P_8rnd_M",
			"v105_LZuni_P_8rnd_M",
			
			"v105_ALQ99_P_1rnd_M",

			"v105_GBU53_P_4rnd_M",
			"v105_FIR_GBU12_P_1rnd_M",
			"v105_FIR_GBU12_P_2rnd_M",
			"v105_FIR_EGBU12_P_1rnd_M",
			"v105_FIR_EGBU12_P_2rnd_M",
			"v105_FIR_GBU16_Navy_P_1rnd_M",
			"v105_FIR_GBU24A_P_1rnd_M",
			"v105_FIR_GBU24A_BLU118_P_1rnd_M",
			"v105_FIR_GBU24A_BLU109_P_1rnd_M",

			"v105_FIR_GBU38_P_1rnd_M",
			"v105_FIR_GBU32_P_1rnd_M",
			"v105_FIR_GBU31_P_1rnd_M",

			"v105_FIR_Mk82_GP_Navy_P_1rnd_M",
			"v105_FIR_Mk82_GP_Navy_prox_P_1rnd_M",
			"v105_FIR_Mk82_GP_Navy_P_2rnd_M",
			"v105_FIR_Mk82_GP_P_3rnd_M",
			"v105_FIR_Mk82_GP_P_6rnd_M",
			"v105_FIR_Mk83_GP_Navy_P_1rnd_M",
			"v105_FIR_Mk83_GP_Navy_P_2rnd_M",
			"v105_FIR_Mk84_GP_Navy_P_1rnd_M",
			"v105_FIR_AGM154A_P_1rnd_M",
			"v105_FIR_AGM154C_P_1rnd_M",
			"v105_AGM88_P_1rnd_M",
			"v105_ASM2_P_2rnd_M"
			//

		};
		ammo[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{
			"105th_Core",
			"OPTRE_Misc_Crates",
			"OPTRE_Modules",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Pelican",
			"OPTRE_Vehicles_Warthog",
			"OPTRE_Vehicles_Hornet",
			"OPTRE_Weapons",
			"OPTRE_Weapons_Vehicle",
			"V_FZ_Vehicles",
			"V_SO_Magazines",
			"V_SO_Weapons",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Air_F_Jets",
			"A3_Armor_F_Beta",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Soft_F_Exp",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Armor_F_Tank",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
			"FIR_AirWeaponSystem_US"
		};
	};
};

class UserActions;
class Components;
class ViewGunner;
class ViewOptics;
class Turrets;
class NewTurret;
class MainTurret;
class TopTurret;
class CopilotTurret;
class CargoGunner_1;
class CargoGunner_2;
class CargoGunner_3;
class CodRiverTurret;
class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;


class CommanderOptics;
//class components;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultEventHandlers;
class Eventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};



class cfgWeapons
{
	#include "cfg\VehicleWeapons.hpp"
};
class cfgMagazines
{
	#include "cfg\VehicleMagazines.hpp"
};
class cfgAmmo
{
	class B_127x99_Ball;
	class OPTRE_B_127x99_Ball: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerStartTime=0;
		tracerEndTime=10;
		indirectHitRange=0.1;
		indirectHit=0.5;
	};
};

		
		
class cfgVehicles
{
	//Hound
	class B_APC_Wheeled_01_cannon_F;
	//Timberwolves
	class AFV_Wheeled_01_base_F;
	class AFV_Wheeled_01_up_base_F;
	//Hornet
	class VES_AV14;
	//Falcons
	class VES_UH144; 
    class VES_UH144S;
    class VES_UH144_A;
    class VES_UH144S_A;
	
	// A-164 Wipeout
	class Plane_CAS_01_dynamicLoadout_base_F;
	// UGV Stomper
	class UGV_01_rcws_base_F;
	class B_UAV_05_F;
	
	
	
		
	#include "Hound_Base.hpp"
	#include "Timberwolf_MK1_Base.hpp"
	#include "Timberwolf_MK2_Base.hpp"
	#include "Hornet_Base.hpp"
	#include "Warthog_Base.hpp"
//	#include "Fossa_Base.hpp"
	#include "Falcon_Base.hpp"
	#include "Pelican_Base.hpp"
	#include "Claymore_Base.hpp"	
	#include "UGVStomper_Base.hpp"
	#include "SupplyCrates.hpp"
	#include "Sentinel_Base.hpp"
	
														// New Vehicles Below
														// New Vehicles Below
														// New Vehicles Below
														// New Vehicles Below
														// New Vehicles Below
														
														
									
				//
				// 		IFV 76 HOUND
				// 										
	class HOW_IFV76_A: HOW_IFV76_Base
	{
		dlc = "105th";
		author = "Howard";
		side=1;
		scope = 1;
		scopeCurator = 1;
		displayName = "IFV-76 Prototype 1";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
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
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_APFSDS",
					"HOW_60Rnd_50mm_APFSDS",
					"HOW_60Rnd_50mm_APFSDS",
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
	class HOW_IFV76_B: HOW_IFV76_Base
	{
		dlc = "105th";
		author = "Howard";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "IFV-76 Hound";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
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
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_HE",
					"HOW_60Rnd_50mm_APFSDS",
					"HOW_60Rnd_50mm_APFSDS",
					"HOW_60Rnd_50mm_APFSDS",
					"HOW_60Rnd_50mm_APFSDS",
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
	class HOW_APC76_TT : LM_OPCAN_AFV102_MC_U_WDL
	{
		dlc = "105th";
		author = "Howard, Burgess";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "APC-76 Shepherd";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
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
	class HOW_APC76_MED:HOW_APC76_TT
	{
		dlc = "105th";
		author = "Howard, Burgess";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "APC-76M Shepherd";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
			class TransportItems
				{
					#include "cfg\VehicleGearMedical.hpp"
				};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	//
	//	Timberwolves
	//
	class HOW_MGS_Timberwolf:HOW_MGS_Base
	{
		dlc = "105th";
		author = "Howard, Burgess";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "AFV-43 Timberwolf I";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
						"SmokeLauncher",
						"Laserdesignator_vehicle"
						};
						magazines[]=
						{
						"SmokeLauncherMag",
						"Laserbatteries"
						};
					};	
				}; 
				weapons[]=
				{
				"HOW_cannon_120mm_GP",
				"HOW_cannon_120mm_AP",
				"MMG_02_coax"
				};
				magazines[]=
				{
				"20Rnd_120mm_APFSDS_shells_Tracer_Red",
				"16Rnd_120mm_HE_shells_Tracer_Red",
				"12Rnd_120mm_HEAT_MP_T_Red",
				"4Rnd_120mm_LG_cannon_missiles",
				"4Rnd_120mm_LG_cannon_missiles",
				"4Rnd_120mm_LG_cannon_missiles",
											
				"200Rnd_338_Mag",
				"200Rnd_338_Mag",
				"200Rnd_338_Mag",
				"200Rnd_338_Mag",
				"200Rnd_338_Mag"
				};
			};
		};
	};
	class HOW_MGS_UP_Timberwolf:HOW_MGS_Base_UP
	{
		dlc = "105th";
		author = "Howard, Burgess";
		side=1;
		scope = 2;
		scopeCurator = 2;
		displayName = "AFV-43 Timberwolf II";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
						"SmokeLauncher",
						"Laserdesignator_vehicle",
						"HOW_HMG_127_AFV"
						};
						magazines[]=
						{
						"SmokeLauncherMag",
						"Laserbatteries",
						"500Rnd_127x99_mag_Tracer_Red",
						"500Rnd_127x99_mag_Tracer_Red",
						"500Rnd_127x99_mag_Tracer_Red",
						"500Rnd_127x99_mag_Tracer_Red"
						};
					};	
				}; 
				weapons[]=
				{
				"HOW_cannon_120mm_GP",
				"HOW_cannon_120mm_AP",
				"MMG_02_coax"
				};
				magazines[]=
				{
				"20Rnd_120mm_APFSDS_shells_Tracer_Red",
				"16Rnd_120mm_HE_shells_Tracer_Red",
				"12Rnd_120mm_HEAT_MP_T_Red",
				"4Rnd_120mm_LG_cannon_missiles",
				"4Rnd_120mm_LG_cannon_missiles",
				"4Rnd_120mm_LG_cannon_missiles",
											
				"200Rnd_338_Mag",
				"200Rnd_338_Mag",
				"200Rnd_338_Mag",
				"200Rnd_338_Mag",
				"200Rnd_338_Mag"
				};
			};
		};
	};
	
	
	
	//
	//		Scorpion
	//
	class LM_OPCAN_M808_MC_WDL;
	class LM_OPCAN_HOW_M808_MC_WDL:LM_OPCAN_M808_MC_WDL
	{
		dlc = "105th";
		author = "Howard";
		scope = 2;
		scopeCurator = 2;
		displayName = "M808 Scorpion";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Armor";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		TFAR_hasIntercom = 1;
		class TransportItems
		{
			#include "cfg\VehicleGearMedium.hpp"
		};
	};
	//
	// 		SDV
	//
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
	class Land_Pod_Heli_Transport_04_covered_F;
	class v105_Land_Transport_Covered_Pod:Land_Pod_Heli_Transport_04_covered_F
	{
		scopeCurator = 2;
		scope  = 2;
		side = 1;
		Author = "Howard";
		displayName = "[105th] Passenger Compartment";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "cfg\SupplyPods\ResupplyPodRifle.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
			hiddenSelectionsTextures[]=
			{
				"105th_Vehicles\textures\TransportPod\taru_1_retexture.paa",
				"105th_Vehicles\textures\TransportPod\taru_2_retexture.paa"
			};
	};
	class Land_Pod_Heli_Transport_04_medevac_F;
	class v105_Land_Medical_Covered_Pod:Land_Pod_Heli_Transport_04_medevac_F
	{
		scopeCurator = 2;
		scope  = 2;
		side = 1;
		Author = "Howard";
		displayName = "[105th] Medevac Compartment";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "cfg\SupplyPods\ResupplyPodMedical.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
			hiddenSelectionsTextures[]=
			{
				"105th_Vehicles\textures\TransportPod\taru_med_retexture.paa",
				"105th_Vehicles\textures\TransportPod\taru_2_retexture.paa"
			};
	};
};