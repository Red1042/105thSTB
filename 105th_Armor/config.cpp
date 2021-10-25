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
	class VES_CH252_MAR_Crew;
	class VES_CH252_MAR_Light;
	class VES_CH252A;
	class VES_CH252A_dp;
	class VES_CH252_MAR_Vacuum;
	class VES_CH252_MAR_Vacuum_dp;
	class VES_CH252D;
	class VES_CH252D_dp;

	
	
	class OPTRE_UNSC_VX16_Helmet_MaskV;
	class OPTRE_UNSC_VX16_Helmet_Mask;
	
	class VES_M52A_MAR_Rifleman_A;
	class VES_M52A_MAR_Rifleman_B;
	class VES_M52A_MAR_Rifleman_C;
	class VES_M52A_URB_Rifleman_A;
	class VES_M52A_URB_Rifleman_B;
	class VES_M52A_URB_Rifleman_C;
	class OPTRE_UNSC_Army_Soldier_WDL;
	
	class OPTRE_UNSC_M52D_Armor;
	
	
	//ODST VESTS
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
	class VES_BDU_Evolved_Slim;
	class VES_BDU_Reach_Slim;
	class VES_BDU_MulticamBlack_Slim;
	class VES_BDU_MulticamBlack;

	//Hats
	class OPTRE_PatrolCap_Navy;
	class OPTRE_UNSC_PatrolCap_Army;
	class OPTRE_UNSC_Dress_Hat;
	class H_Beret_Colonel;
	class H_Beret_02;

	class UniformItem;
	class VestItem;

	//Marine Polarized ECH Helmets
	#include "AlphaCompany.hpp"
	//Marine Depolarized ECH Helmets
	#include "AlphaCompany_DP.hpp"
	//Marine Armor
	#include "AlphaCompanyVests.hpp"
	//ODST Polarized Helmets
	#include "BravoCompany.hpp"
	//ODST Depolarized helmets
	#include "BravoCompany_DP.hpp"
	//ODST Armor 
	#include "BravoCompanyVests.hpp"
	//Berets and other headgear that are not helmets
	class 105th_ACo_Beret: H_Beret_Colonel
	{
		author="Stürmischer";
		displayName="[105th] Beret";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\ACo_Beret.paa"
		};
	};
	class 105th_ODST_STB_Beret: H_Beret_Colonel
	{
		author="N-4 Logistics";
		displayName="[ODST] Beret";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\bCoBeret.paa"
		};
	};
	class 105th_VC497_Beret: H_Beret_Colonel
	{
		author="N-4 Logistics";
		displayName="[VC-497] Beret";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\VC497\VC497_Beret.paa"
		};
	};
	class 105th_WCol_Patrol_Cap : OPTRE_UNSC_PatrolCap_Army
	{
		scope=2;
		author="N-4 Logistics";
		displayName="[105th] Patrol Cap (Coleman)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\WCol_Patrol_Cap_MAR.paa"
		};
	};
	
	///
	
	//
	class 105th_ODST_DressHat: OPTRE_UNSC_Dress_Hat
	{
		author="N-4 Logistics, Howard";
        displayName="[ODST] Dress Hat";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[]=
        {
            "105th_Armor\data\ODST_Dress_Hat.paa"
        };
	};
	class VC497_Helmet_CO: VES_CH252_MAR_Vacuum
	{
		scope=1;
		scopeArsenal=1;
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Nungester)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\VC497\ENun_CH252_URB_Blk.paa", 
			"105th_Armor\data\GWel_CH252_BLU_V_CO.paa"
		};
	};
	class VC497_Helmet_CO_dp: VES_CH252_MAR_Vacuum_dp
	{
		scope=1;
		scopeArsenal=1;
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Nungester)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\VC497\ENun_CH252_URB_Blk.paa", 
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
	};
	class VC497_Helmet_JCol: VES_CH252_MAR_Vacuum
	{
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Collins)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\VC497\JCol_CH252_URB_Blk.paa", 
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
	};
	class VC497_Helmet_JCol_dp: VES_CH252_MAR_Vacuum_dp
	{
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Collins)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\VC497\JCol_CH252_URB_Blk.paa", 
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
	};
	// Uniforms
	class r105_uniform_ODST: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
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
	class v105_uniform_JungleCam: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (Jungle)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_JungleCam";
		};
	};

	/*
	class v105_uniform_ATACSG_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (ATACSG)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_ATACSG_CO";
		};
	};
	class v105_uniform_EMRSummer_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (EMR-Summer)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_EMRSummer_CO";
		};
	};
	class v105_uniform_KLMK_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (KLMK)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_KLMK_CO";
		};
	};
	class v105_uniform_PartizanS_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (Partizan-S)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply200";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_PartizanS_CO";
		};
	};
	*/
	class v105_uniform_UTiger_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[ODST] Combat Uniform (Tigerstripe)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_UTiger_CO";
		};
	};
	class v105_uniform_DigiWoodland_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (Dig-WDL)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_DigiWoodland";
		};
	};
	
	/*class v105_uniform_DigiDesert_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (Dig-DES)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_DigiDesert";
		};
	};*/
	class v105_uniform_Desert_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[105th] Combat Uniform (DES)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_Desert";
		};
	};
/*	class v105_uniform_mixedUrban_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[Test] Combat Uniform (Mixed Urban)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_MixedUrban_CO";
		};
	};
	class v105_uniform_ERDLTrop_CO: VES_BDU_Evolved_Slim
	{
		author="N-4 Logistics";
		displayName="[Test] Combat Uniform (Tropic)";
		class ItemInfo: UniformItem
		{
			containerClass="Supply150";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass="v105_BDU_Custom_ERDLTropic_CO";
		};
	};
*/
};
class CfgVehicles
{
	class VES_BDU_V_Evolved_Slim;
	class OPTRE_ANPRC_521_black;
	class r105_uniform_base: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\Tempest_BDU.paa",
			"105th_Armor\data\Tempest_BDU.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_JungleCam: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\HOW_BDU_JungleCamo_03.paa",
			"105th_Armor\data\HOW_BDU_JungleCamo_03.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_DigiWoodland: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_DigiWoodland.paa",
			"105th_Armor\data\v105_BDU_DigiWoodland.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_DigiDesert: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_DigiDesert.paa",
			"105th_Armor\data\v105_BDU_DigiDesert.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_Desert: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_Desert.paa",
			"105th_Armor\data\v105_BDU_Desert.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_ATACSG_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_ATACSG_CO.paa",
			"105th_Armor\data\v105_BDU_ATACSG_CO.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_EMRSummer_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_EMRSummer_CO.paa",
			"105th_Armor\data\v105_BDU_EMRSummer_CO.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_KLMK_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_KLMK_CO.paa",
			"105th_Armor\data\v105_BDU_KLMK_CO.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_PartizanS_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_PartizanS_CO.paa",
			"105th_Armor\data\v105_BDU_PartizanS_CO.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_UTiger_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\v105_BDU_UTiger_CO.paa",
			"105th_Armor\data\v105_BDU_UTiger_CO.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_MixedUrban_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\mixedurban_uniform.paa",
			"105th_Armor\data\mixedurban_uniform.paa"
		};
		uniformclass="r105th_ODST";
	};
	class v105_BDU_Custom_ERDLTropic_CO: VES_BDU_V_Evolved_Slim
	{
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\data\Custom_ERDLTropic.paa",
			"105th_Armor\data\Custom_ERDLTropic.paa"
		};
		uniformclass="r105th_ODST";
	};


	class BravoCompany_Radio: OPTRE_ANPRC_521_black
	{
		displayName="[ODST]M25D Long Range Helmet Uplink";
		model="\A3\weapons_f\empty";
		hiddenSelections[]={};
	};
	//Hardcase Bags
	class OPTRE_ONI_Researcher_Suitcase;
    /*class v105_HardcaseSatchel_Barkley: OPTRE_ONI_Researcher_Suitcase
    {
		scope=2;
		scopeArsenal=2;
        author="N-4 Logistics";
        displayName="[105th] Barkley's Satchel";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]=
        {
            "105th_Armor\data\misc\HardcaseSatchel_Barkley.paa"
        };
        maximumLoad=400;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523_radio_dialog";
        tf_subtype="digital_lr";
        tf_range =25000;
    };*/
    class v105_HardcaseSatchel_Medical: OPTRE_ONI_Researcher_Suitcase
    {
		scope=2;
		scopeArsenal=2;
        author="N-4 Logistics";
        displayName="[105th] Medic Satchel";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]=
        {
            "105th_Armor\data\misc\HardcaseSatchel_Medical.paa"
        };
        maximumLoad=400;
    };
	class OPTRE_ILCS_Rucksack_Heavy;
	class v105_Severach_Rucksack_Heavy
	{
		scope=2;
		scopeArsenal=2;
        author="N-4 Logistics";
        displayName="[ODST] ILCS Rucksack (Sev)";
		
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523_radio_dialog";
        tf_subtype="digital_lr";
        tf_range =25000;
        maximumLoad=400;
	};
	class MatGrp_ANPRC_521_black_blue;
	class v105_BBarkley_ANPRC521_black_blue: MatGrp_ANPRC_521_black_blue
	{
		author="N-4 Logistics";
        displayName= "[ODST] AN-PRC521 (Barkley)"


		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"105th_Armor\data\misc\BBar_ANPRC521.paa"
		};
	};






	class ACE_gunbag;
	class v105_ACE_gunbag:ACE_gunbag
	{
		displayName="[105th] Gun Bag";
		maximumLoad = 300;
		mass = 20;
		ace_gunbag = 1;
		hiddenSelectionsTextures[] = {"105th_Armor\data\misc\LongRifleBag.paa"};
	};



};
class cfgMods
{
	author="Left Shark";
	timepacked="1598020119";
};
