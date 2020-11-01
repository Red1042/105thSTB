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
			"OPTRE_UNSC_Units_Army"
		};
	};
};
class CfgWeapons
{
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_CH252D;
	class VES_CH252D_dp;
	class VES_M52D_Rifleman;
	class VES_M52D_Marksman;
	class VES_M52D_Scout;
	class VES_M52D_Sniper;
	class OPTRE_UNSC_VX16_Helmet_MaskV;
	class OPTRE_UNSC_VX16_Helmet_Mask;
	class VES_CH252A;
	class VES_M52A_MAR_Rifleman_A;
	class OPTRE_UNSC_Army_Soldier_WDL;
	class VES_CH252A_dp;
	class OPTRE_UNSC_M52D_Armor;
	class VES_CH252_MAR_Crew;
	class VES_CH252_MAR_Light;
	class OPTRE_UNSC_M52D_Armor_Light;
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class OPTRE_UNSC_M52D_Armor_Scout;
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class VES_BDU_Evolved_Slim;
	class VES_BDU_Reach_Slim;
	class VES_BDU_MulticamBlack_Slim;
	class VES_BDU_MulticamBlack;
	class OPTRE_PatrolCap_Navy;
	class H_Beret_Colonel;
	class H_Beret_02;
	class UniformItem;
	class VestItem;

	//Marine Polarized ECH Helmets
	#include "AlphaCompany.hpp"
	//Marine Depolarized ECH Helmets
	#include "AlphaCompany_DP.hpp"
	//ODST Polarized Helmets
	#include "BravoCompany.hpp"
	//ODST Depolarized helmets
	#include "BravoCompany_DP.hpp"
	//ODST Armor 
	#include "BravoCompanyVests.hpp"
	//Berets and other headgear that are not helmets
	class 105th_STB_Beret: H_Beret_Colonel
	{
		author="Fafnir";
		displayName="[105th] Beret";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\addons\data\105th_Beret_CO.paa"
		};
	};
	
	class r105_uniform_ODST: VES_BDU_Evolved_Slim
	{
		author="Kreah Leiser, Vespade, Hartley";
		displayName="[ODST] Combat Uniform (Tempest)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="r105_uniform_base";
		};
	};
};
class CfgVehicles
{
	class VES_BDU_V_Evolved_Slim;
	class OPCAN_RADIO_Urb;
	class r105_uniform_base: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\addons\data\Tempest_BDU.paa",
			"105th_Armor\addons\data\Tempest_BDU.paa"
		};
		uniformclass="r105th_ODST";
	};
	class BravoCompany_Radio: OPCAN_RADIO_Urb
	{
		displayName="[ODST]M25D Long Range Helmet Uplink";
		model="\A3\weapons_f\empty";
		hiddenSelections[]={};
	};
};
class cfgMods
{
	author="Left Shark";
	timepacked="1598020119";
};
