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
		author = "Howard";
		name = "URF Vehicle Enhancement Project";
		url = "";
		units[] = 
		{
			//Tigris II
			"HOW_URF_AA_Tigris",
			//Stalker II
			"HOW_URF_APC_Stalker_A",
			"HOW_URF_APC_Stalker_B",
			//Karatels
			"HOW_URF_Karatel",
			"HOW_URF_Karatel_HMG",
			"HOW_URF_Karatel_GMG",
			"HOW_URF_Karatel_AT",
			//Otokar
			"HOW_URF_APC_Otokar",
			//Aircraft
			"v105_URF_AV14_CAS",
			"v105_URF_D77HTCI_A"
		};
		weapons[] = 
		{
			//Tigris II
			"HOW_URF_Vulcan_20mm",
			//Stalker II
			"HOW_URF_75mm_Chaingun",
			//Otokar
			"HOW_URF_launcher_SPG9"
		};
		magazines[] = 
		{
			//Tigris II	
			"HOW_URF_ABM_20MM_2000Rnd",
			//Stalker II
			"HOW_40Rnd_75mm_AP",
			//Otokar
			"HOW_15Rnd_50x137_HEAT",
			
		};
		ammo[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{
			"105th_Core",
			"O_URFArmy",
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
			"A3_Soft_F_Exp",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Armor_F_Tank",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
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
class cfgVehicles
{
	#include "Stalker_Base.hpp"
	#include "Otokar_Base.hpp"
	#include "Tigris_Base.hpp"
	#include "Karatel_Base.hpp"
	#include "Aircraft.hpp"

};