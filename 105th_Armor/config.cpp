#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class C_105_Armor
	{
		author="105th";
		name="105th Armor";
		units[]=
		{
			"ODST_Test"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Core",
			"OPTRE_UNSC_Units_Army",
			"OPTRE_Weapons",
			"OPTRE_Weapons_Backpacks",
			"LM_OPCAN_UNSC"
		};
	};
};

// Handles the Arsenal collapsing to make it a cleaner ace arsenal
#include "XtdGear\XtdGearModels.hpp"

class CfgWeapons
{
	class VES_CH252_MAR_Crew;
	class VES_CH252_MAR_Light;
	class VES_CH252A;
	class VES_CH252A_dp;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_CH252D;
	class VES_CH252D_dp;
	

	// VC497 Helmets
	class OPTRE_UNSC_VX16_Helmet_MaskV;
	class OPTRE_UNSC_VX16_Helmet_Mask;
	class OPTRE_FC_VX19_Helmet;

	// Marine Vests
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class OPTRE_UNSC_Army_Soldier_WDL;

	//ODST Vests
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52D_Armor_Light;
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class OPTRE_UNSC_M52D_Armor_Scout;
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class VES_M52D_Rifleman;
	class VES_M52D_Marksman;
	class VES_M52D_Scout;
	class VES_M52D_Sniper;
	
	//BDUs
	class VES_BDU_Evolved;
	class VES_BDU_Evolved_Slim;
	class VES_BDU_SS_Evolved;
	class VES_BDU_SS_Evolved_Slim;
	class VES_BDU_R_Evolved;
	class VES_BDU_R_Evolved_Slim;
	
	class VES_BDU_R_Reach;
	class VES_BDU_Reach_Slim;
	class VES_BDU_MulticamBlack_Slim;
	class VES_BDU_MulticamBlack;

	//Hats
	class H_Bandanna_gry;
	class H_Booniehat_khk_hs;
	class OPTRE_PatrolCap_Navy;
	class OPTRE_UNSC_PatrolCap_Army;
	class OPTRE_UNSC_Dress_Hat;
	class H_Beret_Colonel;
	class H_Beret_02;
	class OPTRE_cap_FinalDawn;
	class UniformItem;
	class VestItem;
	class ItemInfo;

	// Dress Gear
	class OPTRE_UNSC_Army_Soldier_DressGray;

	// Marine Vests Xtd Gear Overrides
	#include "XtdGear\MarineVestsOverrides.hpp"

	//Marine Polarized ECH Helmets
	#include "Alpha Company\AlphaCompanyHelmets.hpp"
	//Marine Depolarized ECH Helmets
	#include "Alpha Company\AlphaCompanyHelmets_DP.hpp"
	//Marine Armor
	#include "Alpha Company\AlphaCompanyVests.hpp"
	//Marine Uniforms
	#include "Alpha Company\AlphaCompanyUniforms.hpp"
	
	
	//ODST Polarized Helmets
	#include "Bravo Company\BravoCompanyHelmets.hpp"
	//ODST Depolarized helmets
	#include "Bravo Company\BravoCompanyHelmets_DP.hpp"
	//ODST Armor 
	#include "Bravo Company\BravoCompanyVests.hpp"
	//ODST Uniforms
	#include "Bravo Company\BravoCompanyUniforms.hpp"
	
	
	//Aviation Helmets
	#include "VC497\VC497Helmets.hpp"
	//Aviation Armor
	#include "VC497\VC497Vests.hpp"
	

	//Dress Uniforms
	#include "Dress Gear\DressUniforms.hpp"
	//Dress Hats
	#include "Dress Gear\DressHats.hpp"


	// Hats
	#include "105th\105thHats.hpp"
	//Nightvision
	#include "105th\105thNightVision.hpp"
};

class CfgVehicles
{

    // Uniforms
	class VES_BDU_V_Evolved;
	class VES_BDU_SS_V_Evolved;
	class VES_BDU_R_V_Evolved;
	class VES_BDU_V_Evolved_Slim;
	class VES_BDU_SS_V_Evolved_Slim;
	class VES_BDU_R_V_Evolved_Slim;
	class OPTRE_UNSC_Army_Soldier_DressGray;
	
	// Backpacks
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ILCS_Rucksack_Black_Spartan;
	class OPTRE_UNSC_Rucksack;
	class OPTRE_UNSC_Rucksack_Spartan;
	class OPTRE_ANPRC_521_black;
	class MatGrp_ANPRC_515A1;
	class ACE_gunbag;
	class OPTRE_ONI_Researcher_Suitcase;

	// Overrides of other configs
    #include "Overrides\Overrides.hpp"

	// 105th Long Range Xtd Gear Overrides
	#include "XtdGear\LongRangeOverrides.hpp"
	
	//dress uniform base
	#include "Dress Gear\DressUniformBase.hpp"
	
	//Generic 105th Backpacks
	#include "105th\105thBackpacks.hpp"
	
	//ODST Backpacks
	#include "Bravo Company\BravoCompanyBackpacks.hpp"
	
	//Marine Uniforms Base
	#include "Alpha Company\AlphaCompanyUniformsBase.hpp"
	
	//Bravo Uniforms Base
	#include "Bravo Company\BravoCompanyUniformsBase.hpp"

};
class cfgGlasses
{
	//105th Facewear
	#include "105th\105thFacewear.hpp"
};


class cfgMods
{
	author="Left Shark";
	timepacked="1598020119";
};
