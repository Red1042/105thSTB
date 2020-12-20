class CfgPatches
{
	class 105th_Weapons
	{
		author="Howard";
		name="105th STB Ammunition and Weapons Enhancement";
		url="";
		// Added Items
		units[]=
		{
			
		};
		weapons[]=
		{
			"v105_HOW_M73SAW",
			"v105_HOW_M247SSW",
			"v105_408_SRSC",
			"v105_M301X"
		};
		magazines[]=
		{			//M247
					"HOW_200Rnd_93x64_Box",
					"HOW_150Rnd_93x64_Box",
					"HOW_75Rnd_93x64_Box",
					"HOW_200Rnd_93x64_Mixed_Box",
					"HOW_150Rnd_93x64_Mixed_Box",
					"HOW_75Rnd_93x64_Mixed_Box",
					//M73
					"v105_HOW_150Rnd_762x51_Box",
					"v105_HOW_150Rnd_762x51_Box_Tracer",
					"v105_HOW_300Rnd_762x51_Box",
					"v105_HOW_300Rnd_762x51_Box_Tracer",	
					//MA-5C
					"HOW_32Rnd_762x51_IRDM_Mag",
					//DMR
					"HOW_15Rnd_762x51_338_API_Mag",
					"HOW_15Rnd_762x51_338_Magnum_Mag",
					"HOW_15Rnd_762x51_338_APIT_Mag",
					"HOW_15Rnd_762x51_338_MT_Mag",
					"HOW_15Rnd_762x51_338_Mixed_Mag",
					"v105_Whistler_Grenade"

					
		};
		ammo[]={"v105_Whistler_40mm_HE"};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"V_SO_Weapons"
		};
	};
};

/*
class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Magazines
		{
			list[]={"V_SO_Magazines"};
		};
	};
};
*/
class CfgMagazines
{
	#include "cfgmagazines.hpp"
	class 1Rnd_HE_Grenade_shell;
	class v105_Whistler_Grenade:1Rnd_HE_Grenade_shell
	{
		dlc							= "105th";
		author						= "Howard";
		count = 1;
		ammo 						= "v105_Whistler_40mm_HE";
		displayname 				= "40mm HE Whistler";
		displaynameshort 			= "Run.";
	};
};
class cfgMagazineWells
{
	class CBA_40mm_M203
	{
		v105_grenades[]=
		{
			"v105_Whistler_Grenade"
		};
	};
};
class CfgAmmo
{
	class G_40mm_HE;
	class v105_Whistler_40mm_HE:G_40mm_HE 
	{
		whistleDist=400;
		whistleOnFire=1;
		soundFly[]=
		{
			"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Whistle",
			1,
			1,
			100
		};
	};
};



class Single;
class FullAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class Mode_FullAuto;

class OPTRE_M392_DMR;
class OPTRE_SRS99C;
class OPTRE_MA5C;
class OPTRE_MA5CGL;
class OPTRE_MA5K;
class OPTRE_M73;
class OPTRE_M247;
class UGL_F;
class CfgWeapons
{
		
		class UGL_F;
		class v105_M301X: UGL_F
		{
			dlc							= "SO";
			author						= "Howard, Fireteam Zulu";
			scope						= 2;
			scopeArsenal				= 2;
			
			displayName 				= "M301X Grenade Launcher";
			descriptionShort 			= "M301X GL";
			baseWeapon 					= "v105_M301X";
			
			magazines[] = 
			{
				// 105th
				"v105_Whistler_Grenade",
				// Specialized Ordnance
				"UGL_8Gauge_Pellets",
				"UGL_8Gauge_Slugs",
				"UGL_8Gauge_Beanbags",
				"UGL_FlareBlue_F",
				"3Rnd_UGL_8Gauge_Pellets",
				"3Rnd_UGL_8Gauge_Slugs",
				"3Rnd_UGL_8Gauge_Beanbags",
				"3Rnd_UGL_FlareBlue_F",
				
				// Standard
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
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"
			};
			
			cameraDir 					= "OP_look";
			discreteDistanceInitIndex 	= 0;
			reloadAction 				= "GestureReloadMXUGL";
			useExternalOptic 			= 0;
			useModelOptics 				= 0;
			
			discreteDistance[] = 
			{
				100,
				200,
				300
			};
			discreteDistanceCameraPoint[] = 
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3"
			};
		};
		#include "cfg\DMR.hpp"
		#include "cfg\MA5.hpp"
		#include "cfg\Machineguns.hpp"
		#include "cfg\SRS.hpp"
};