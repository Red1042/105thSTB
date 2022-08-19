////////////////////////////////////////////////////////////////////
//DeRap: 105_Vehicles\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Fri Jan 17 14:29:04 2020 : 'file' last modified on Sun Jan 05 17:20:58 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class URF_Vehicles
	{
		author=	"105th | S-4 Logistics";
		name = "URF Vehicle Enhancement Project";
		url = "";
		units[] = 
		{
			//Tigris II
			"v105_URF_AA_Tigris",
			//Stalker II
			"v105_URF_APC_Stalker_A",
			"v105_URF_APC_Stalker_B",
			//Karatels
			"v105_URF_Karatel",
			"v105_URF_Karatel_HMG",
			"v105_URF_Karatel_GMG",
			"v105_URF_Karatel_AT",
			//Warthogs
			"v105_URF_M12_Hydra",
			"v105_URF_M12_SPG",
			//Otokar
			"v105_URF_APC_Otokar",
			//Sochor
			"v105_URF_MBT_Sochor",
			//Aircraft
			"v105_URF_AV14_CAS",
			"v105_URF_D77HTCI_A",
			//Turrets
			"URF_SG_Turret_A",
			"URF_HMG_Turret_A",
			//Drones
			"v105_URF_antimine_UAV"
		};
		weapons[] = 
		{
			//Tigris II
			"v105_URF_Vulcan_20mm",
			//Stalker II
			"v105_URF_75mm_Chaingun",
			//Otokar
			"v105_URF_launcher_SPG9",
			//Artillery
			"v105_URF_mortar_155mm_AMOS"
		};
		magazines[] = 
		{
			//Tigris II	
			"v105_URF_ABM_20MM_2000Rnd",
			//Stalker II
			"v105_40Rnd_75mm_AP",
			//Otokar
			"v105_15Rnd_50x137_HEAT",
			//Flare
			"v105_URF_6Rnd_155mm_Mo_Flare"
			
		};
		ammo[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{
			"105th_Core",
			//"O_URFArmy",
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
			"A3_Armor_F_Beta",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_Gamma",
			"A3_Soft_F_Exp",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Soft_F_MRAP_02",
			"A3_Armor_F_Tank",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
			"A3_Static_F"
		};
		
	};
};

class Components;
class ViewGunner;
class ViewOptics;
class Turrets;
class NewTurret;
class MainTurret;
class CopilotTurret;
class CargoGunner_1;
class CommanderOptics;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
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
	#include "cfg\URFVehicleWeapons.hpp"
};
class cfgMagazines
{
	#include "cfg\URFVehicleMagazines.hpp"
};	
class cfgAmmo
{
	#include "cfg\URFVehicleAmmo.hpp"
};
class cfgVehicles
{
	#include "Stalker_Base.hpp"
	#include "Otokar_Base.hpp"
	#include "Tigris_Base.hpp"
	#include "URF_Warthog_Base.hpp"
	#include "Aircraft.hpp"
	#include "Sochor.hpp"
	#include "Karatel_Base.hpp"
	#include "StaticTurrets_Base.hpp"
	#include "Drones.hpp"
	
	
};