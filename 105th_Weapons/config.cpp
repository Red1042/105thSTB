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
			"v105_NEST_MACA",
			"v105_NEST_MACAGL",
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
					//HE Grenade
					"v105_Whistler_Grenade",
					"v105_4Rnd_145x114_Mag",
					"v105_4Rnd_145x114_Mag_Tracer"


					
		};
		ammo[]= 
		{
					"v105_Whistler_40mm_HE",
					"v105_145x114_Ball"
		};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"V_SO_Weapons",
			"OPTRE_Weapons_Sniper",
		//	"OPTRE_JSRS"
		};
	};
};

class GrenadeHand;
class HandGrenade;
class OPTRE_G_M9_Frag;
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
	class v105_Impact_M9: HandGrenade
    {
    	dlc="OPTRE";
		ammo="v105_M9_Impact";
		mass=8;
		displayName="[105th] M9 Impact Grenade";
		descriptionShort="Impact Grenade";
		displayNameShort="M9 Impact";
		model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		picture="\OPTRE_Weapons\explosives\icons\m9.paa";
		pictureWire="\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Throw\FRAG.paa";
		count=1;
		nameSound="handgrenade";
		initSpeed=20;
    };
};
class cfgMagazineWells
{
	class CBA_40mm_M203
	{
		v105_grenades[]=
		{
			"v105_Whistler_Grenade",
			/*"3Rnd_UGL_8Gauge_Pellets",
			"3Rnd_UGL_8Gauge_Slugs",
			"3Rnd_UGL_8Gauge_Beanbags"*/
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
	class OPTRE_G_M9_Frag
    {
        model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		hit=15;
		indirectHit=13;
		indirectHitRange=8;
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
    };
    class v105_M9_Impact: GrenadeHand
    {
        model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
        hit = 10;
        indirectHit = 8;
        indirectHitRange = 5;
        visibleFire = 0.5;
		audibleFire = 0.050000001;
		visibleFireTime = 1;
		fuseDistance = 60;
        explosionTime = -1;
    };
	class B_408_Ball;
	class v105_145x114_Ball:B_408_Ball 
	{
		caliber						= 10;
		hit 						= 40;
	};
	class v105_145x114_Tracer:B_408_Ball 
	{
		caliber						= 10;
		hit 						= 40;
		model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};

class Mode_FullAuto;
class FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class Burst;

class Single;

class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;

class ItemInfo;
class OpticsModes;
class Snip;
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

		class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		muzzles[]+=
		{
            "v105_Impact_M9Muzzle"
        };
        class v105_Impact_M9Muzzle: ThrowMuzzle
        {
            magazines[]=
            {
               "v105_Impact_M9"
            };
        };
    };


};