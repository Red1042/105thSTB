class CfgPatches
{
	class URF_Mod_Magazines
	{
		author=	"105th | S-4 Logistics";
		name="URF Mod Magazines";
		units[]=
		{
		};
		weapons[]=
		{
			
		};
		magazines[]=
		{
			"URF_30Rnd_762x51_MXrecal_mag",
			"URF_30Rnd_762x51_MXrecal_mag_tracer",

			"URF_30Rnd_762x51_KTBrecal_mag",
			"URF_30Rnd_762x51_KTBrecal_mag_tracer",

			"URF_30Rnd_95x40_AK12recal_mag",
			"URF_30Rnd_95x40_AK12recal_mag_tracer",
			"URF_30Rnd_95x40_AKMrecal_mag",
			"URF_30Rnd_95x40_AKMrecal_mag_tracer",

			"URF_75Rnd_95x40_AK12recal_mag",
			"URF_75Rnd_95x40_AK12recal_mag_tracer",
			"URF_75Rnd_95x40_AKMrecal_mag",
			"URF_75Rnd_95x40_AKMrecal_mag_tracer",

			"URF_30Rnd_762x51_MSBSrecal_mag",
			"URF_30Rnd_762x51_MSBSrecal_mag_Tracer",
			"URF_6Rnd_8GPellets_MSBSrecal_mag",
			"URF_6Rnd_8GSlugs_MSBSrecal_mag",

			"URF_15Rnd_95x40_Rahimrecal_mag",
			"URF_15Rnd_95x40_Rahimrecal_mag_Tracer",

			"URF_150Rnd_762x51_Zafrecal_Box",
			"URF_150Rnd_762x51_Box_Zafrecal_Tracer",
			"URF_200Rnd_762x51_MK200recal_Box",
			"URF_200Rnd_762x51_MK200recal_Box_Tracer",

			"URF_45Rnd_5x23_PDWrecal_mag",
			"URF_45Rnd_5x23_PDWrecal_mag_Tracer",
			"URF_45Rnd_5x23_PDWrecal_mag_JHP",
			"URF_45Rnd_5x23_PDWrecal_mag_FMJ",

			"URF_16Rnd_10mm_Rookrecal_mag",
			"URF_25Rnd_5x23_P07recal_mag",
			"URF_25Rnd_5x23_P07recal_mag_Tracer",
			"URF_25Rnd_5x23_P07recal_mag_JHP",
			"URF_25Rnd_5x23_P07recal_mag_FMJ",

			"URF_30Rnd_762x51_SDARrecal_mag",
			"URF_30Rnd_762x51_SDARrecal_mag_Tracer",
			"URF_6Rnd_145x55_ASPrecal_mag",

			"v105_URF_Howler_Grenade"
		};
		ammo[]=
		{
			"v105_URF_Howler_40mm",
			"v105_URF_40mm_BlinderFlare_Grenade"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons_Ammo",
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class arifle_MX_Base_F;
class Single;
class FullAuto;
class fullauto_medium;
class single_medium_optics1;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgAmmo
{
	#include "cfgammo.hpp"
};
class cfgMagazines
{
	#include "cfgmagazines.hpp"
};
class cfgMagazineWells
{
	class UGL_40x36
	{
		v105_Magazines[]=
		{
			"v105_URF_Howler_Grenade",
			"v105_URF_Howler_3RND_Grenade",
			"v105_URF_40mm_BlinderFlare_Grenade"
		};
	};
};
class cfgWeapons
{
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
	{
		displayName="$STR_A3_cfgweapons_eglm0";
		magazines[]=
		{
			"v105_URF_Howler_Grenade",

			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
	};
	/*
	//Rifles
	class arifle_MX_Base_F;
	class arifle_MX_F;
	class arifle_MXC_F;
	class arifle_MX_GL_F;
	class arifle_MXM_F;
	#include "cfg\MX.hpp"
	
	class arifle_Katiba_F;
	class arifle_Katiba_C_F;
	class arifle_Katiba_GL_F;
	#include "cfg\Katiba.hpp"

	class arifle_AK12_F;
	class arifle_AK12_GL_F;
	class arifle_AK12U_F;
	class arifle_RPK12_F;
	#include "cfg\AK12.hpp"

	class srifle_DMR_01_F;
	class srifle_GM6_F;
	#include "cfg\Rahim.hpp"
	#include "cfg\Lynx.hpp"
	
	class arifle_MSBS65_F;
	class arifle_MSBS65_Mark_F;
	class arifle_MSBS65_GL_F;
	class arifle_MSBS65_UBS_F;
	class UBS_F;
	#include "cfg\MSBS.hpp"

	//Machineguns
	class MMG_01_hex_F;
	class LMG_Zafir_F;
	class LMG_Mk200_F;
	#include "cfg\Navid.hpp"
	#include "cfg\Zafir.hpp"
	#include "cfg\MK200.hpp"

	//SMGs and Pistols
	class hgun_PDW2000_F;
	class hgun_P07_F;
	class hgun_Rook40_F;
	#include "cfg\PDW2000.hpp"
	#include "cfg\Pistols.hpp"
	

	//Misc
	class arifle_SDAR_F;
	#include "cfg\SDAR.hpp"
	class srifle_DMR_04_F;
	#include "cfg\ASP.hpp"

	//class MuzzleSlot: MuzzleSlot{};
	*/
};