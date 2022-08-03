////////////////////////////////////////////////////////////////////
//DeRap: 105_Vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Jan 17 14:29:04 2020 : 'file' last modified on Sun Jan 05 17:20:58 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class v105_Vehicles
	{
		author = "N-4 Logistics";
		name = "[105th] N-4 Logistics";
		url = "";
		units[] = 
		{
		//Cleric
		"v105_MBT_Cleric",
		//Hounds
		"HOW_IFV76_B",
		"HOW_APC76_TT",
		"HOW_APC76_MED",
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
		//"HOW_M12_Mortar",
		//Fossas
		"HOW_Fossa_unarmed",
		"HOW_Fossa_armed",
		"HOW_Fossa_armed_AT",
		//Falcons
		"v105_UH144",
		"v105_UH144_MED",
		"v105_UH144S",
		"v105_UH144_A",
		"v105_UH144S_A",
		"v105_UH144S_AM",
		"v105_UH144S_ARC",
		//Pelicans
		"v105_D77HTCI_AV_TestPlatform_Pelican",
		"v105_D77HTCI_AV_Minigun_Pelican",
		"v105_D77HTCI_AV_RotaryCannon_Pelican",
		"v105_D77HTCI_AV_40mmCannon_Pelican",
		"v105_D77HTCI_AV_30mmCannon_Pelican",
		"v105_D77ATCI_Crow_Gunship",
		"v105_D77HTCI",
		"v105_D78DHTC",
		"v105_D77HTCI_REACH",
		"v105_HOW_D77HTCI_REACH_BubOday",
		"v105_HOW_D77HTCI_BulcHori",
		"v105_HOW_D77HTCI_SHARK_MeatWind",
		"v105_HOW_D77HTCI_SHARK_Ragith",
		"v105_HOW_D77HTCI_SHARK",
		"v105_HOW_D77HTCI_Keen",
		// Hornets
	//	"HOW_AV14_Base",
		"HOW_AV14_CAP",
		"HOW_AV14_CAS",
		"HOW_AV14_CAS_Keen", 
		"HOW_AV14B_CAS",
		"HOW_AV14L_MULTI",
		//Claymore
		"v105_A364_Claymore",
		//SDV
		"v105_SDV_ODST",
		//STAG UGV
		"v105_UGV_STAG",
		"v105_UGV_STAG_ATGM",
		"v105_UCAV_Sentinel",
		//Stork
		"v105_Stork_Armed",
		//Namer
		"v105_M18_Mastiff",
		// Sparrowhawks
		"v105_AVXX_Sparrowhawk_Base",
        "v105_AVXXN"
		
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
			"v105_750Rnd_20mm_shells",
			// Falcon GL
			"HOW_50Rnd_82mm_shells",
			//Pelican Ordnance
			"HOW_OPTRE_M638",
			"v105_FIR_AIM9X_P_2rnd_M",
			"v105_FIR_AIM120B_LAU115_P_1rnd_M",
			"v105_FIR_AGM65D_P_3rnd_M",
			"v105_FIR_AGM65B_P_3rnd_M",
			"v105_FIR_AGM65H_P_3rnd_M",
			"v105_FIR_AGM65F_P_3rnd_M",
			"v105_FIR_AGM65G_P_3rnd_M",
			"v105_FIR_AGM65K_P_3rnd_M",
			"v105_FIR_AGM65E_P_3rnd_M",
			"v105_FIR_AGM65E2_P_3rnd_M",
			"v105_FIR_AGM65L_P_3rnd_M",
			"v105_FIR_AGM65F_P_1rnd_M",
			"v105_FIR_AGM65G_P_1rnd_M",
			"v105_FIR_AGM65K_P_1rnd_M",
			"v105_FIR_AGM65E_P_1rnd_M",
			"v105_FIR_AGM65E2_P_1rnd_M",
			"v105_FIR_AGM65L_P_1rnd_M",
			"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114K",
			"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114N",
			"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114L",
			
			"v105_FIR_Hydra_P_7rnd_M",
			"v105_FIR_Hydra_P_19rnd_M",
			"v105_FIR_Hydra_P_38rnd_M",
			
			"v105_FIR_Hydra_M229_P_7rnd_M",
			"v105_FIR_Hydra_M229_P_19rnd_M",
			"v105_FIR_Hydra_M229_P_38rnd_M",
			
			"v105_FIR_Hydra_M247_P_7rnd_M",
			"v105_FIR_Hydra_M247_P_19rnd_M",
			"v105_FIR_Hydra_M247_P_38rnd_M",
			
			"v105_FIR_Hydra_M282_P_7rnd_M",
			"v105_FIR_Hydra_M282_P_19rnd_M",
			"v105_FIR_Hydra_M282_P_38rnd_M",
			
			"v105_FIR_Hydra_WDU4_P_7rnd_M",
			"v105_FIR_Hydra_WDU4_P_19rnd_M",
			"v105_FIR_Hydra_WDU4_P_38rnd_M",
			
			"v105_FIR_Hydra_M261_P_7rnd_M",
			"v105_FIR_Hydra_M261_P_19rnd_M",
			"v105_FIR_Hydra_M261_P_38rnd_M",

			"v105_FIR_Hydra_WP_P_7rnd_M",
			"v105_FIR_Hydra_WP_P_21rnd_M",
			
			"v105_FIR_APKWS_P_19rnd_M",
			"v105_FIR_APKWS_P_38rnd_M",
			
			"v105_FIR_APKWS_M247_P_19rnd_M",
			"v105_FIR_APKWS_M247_P_38rnd_M",
			
			"v105_FIR_APKWS_M282_P_19rnd_M",
			"v105_FIR_APKWS_M282_P_38rnd_M",
			"v105_FIR_Zuni_P_8rnd_M",
			"v105_FIR_Zuni_Mk32_P_8rnd_M",
			"v105_FIR_LZuni_P_8rnd_M",
			
			"v105_FIR_ALQ99_P_1rnd_M",

			"v105_FIR_GBU53_P_4rnd_M",
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
			"v105_FIR_AGM88_P_1rnd_M",
			"v105_FIR_ASM2_P_2rnd_M"
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
			"FIR_AirWeaponSystem_US",
			"ace_interaction",
    		"ace_missileguidance",
			"ace_interaction",
			"ace_logistics_rope"

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
class CargoTurret;
class CargoGunner_1;
class CargoGunner_2;
class CargoGunner_3;
class CodRiverTurret;
class CargoTurret_01;
class CargoTurret_02;
class CargoTurret_03;
class GunnerTurret_01;
class GunnerTurret_02;
class HitPoints;
class HitHull;
class HitFuel;
class HitAvionics;
class HitMissiles;
class HitEngine;
class HitHRotor;
class HitVRotor;
class HitGlass1;
class HitGlass2;
class HitGlass3;
class HitGlass4;
class HitGlass5;
class HitGlass6;
class HitWinch;

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

class CfgFunctions
{
	class v105_Vehicles
	{
		class Functions
		{
			file = "105th_Vehicles\functions";
			class Init
			{
			    postInit = 1;
			};
			class RegisterThrusters
			{
			};
			class EngageForwardThrusters
			{
			};
			class EngageAfterburners
			{
			};
			class PelicanAddTransportPod
			{
			};
		};
	};
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
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitWinch;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
	};
	class Plane;
	class Plane_Base_F: Plane
	{
		class MarkerLights;
		class Turrets;
		class HitPoints;
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class CargoTurret;
		class MarkerLights: MarkerLights
		{
			class PositionWhite;
		};
		class NewTurret;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class ViewPilot;
		class Components;
	};
	class Helicopter_Base_H;
	class OPTRE_Hornet_base: Helicopter_Base_H
	{
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.1;
				visual="Hull";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
				minimalHit=0.050000001;	
				radius=0.0099999998;
			};
		};
	};
	#include "Hound_Base.hpp"
	#include "Timberwolf_Base.hpp"
	#include "Hornet_Base.hpp"
	#include "Warthog_Base.hpp"
	#include "Fossa_Base.hpp"
	#include "Falcon_Base.hpp"
	#include "Pelican_Base.hpp"
	#include "Claymore_Base.hpp"	
	#include "UGVStomper_Base.hpp"
	#include "Sentinel_Base.hpp"
	#include "Sholef.hpp"
	#include "Mastiff_Base.hpp"
	#include "Sparrowhawk_Base.hpp"
	//#include "Blackfish_Gunship_Base.hpp"
	#include "SDV.hpp"
	class LM_OPCAN_M808_MC_WDL;
	class LM_OPCAN_HOW_M808_MC_WDL: LM_OPCAN_M808_MC_WDL
	{
		displayName="M808 Scorpion";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_Armor";
		fuelCapacity=300;

	};
};