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
			"v105_N12_USOC",
			"v105_NEST_MACA",
			"v105_NEST_MACAGL",
			"v105_HOW_M73SAW",
			"v105_HOW_M247SSW",
			"v105_408_SRSC",
			"v105_M301X",
			"105_CRCKT_PEN",
            "105_CRCKT_PEN_Loaded", 
            "105_CRCKT_PEN_Used",
            "105_CRCKT_HE",
            "105_CRCKT_HE_Loaded", 
            "105_CRCKT_HE_Used",
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
					//N-12
					"v105_762x51_DP_Mag",
					//DMR
					"HOW_15Rnd_762x51_338_API_Mag",
					"HOW_15Rnd_762x51_338_Magnum_Mag",
					"HOW_15Rnd_762x51_338_APIT_Mag",
					"HOW_15Rnd_762x51_338_MT_Mag",
					"HOW_15Rnd_762x51_338_Mixed_Mag",
					//HE Grenade
					"v105_Whistler_Grenade",
					"v105_4Rnd_145x114_Mag",
					"v105_4Rnd_145x114_Mag_Tracer",
					"CRCKT_PEN",
           			"CRCKT_HE",


					
		};
		ammo[]= 
		{
					"v105_Whistler_40mm_HE",
					"v105_145x114_Ball",
					"v105_N12_UWDP_Ball"
		};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"V_SO_Weapons",
			"OPTRE_Weapons_Sniper",
			
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
class CBA_DisposableLaunchers
    {
        105_CRCKT_PEN[]=
        {
            "105_CRCKT_PEN_Loaded", 
            "105_CRCKT_PEN_Used",
        };
        105_CRCKT_HE[]=
        {
            "105_CRCKT_HE_Loaded",
            "105_CRCKT_HE_Used",
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
    class v105_M9_Impact:GrenadeHand
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
	class OPTRE_B_762x51_UW;
	class v105_N12_UWDP_Ball:OPTRE_B_762x51_UW
    {
        caliber=    1;
        hit=    20;
        tracersEvery=   2;
        tracerStartTime=    0;
        tracerEndTime=  30;
        model=  "\A3\Weapons_f\Data\bullettracer\tracer_red"
        tracerColor[]= {    "Red",  };
        waterFriction=  -0.014;
        effectFly=  "AmmoUnderwater";
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
class UnderBarrelSlot;

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
	// BEGIN NEST's ACE COOKOFF OPTRE FIX
	class ItemCore;
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class WeaponSlotsInfo;
	};
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
		class WeaponSlotsInfo;
	};
	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_Titan_short_base;
	class launch_Titan_base;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class launch_B_Titan_short_F: launch_Titan_short_base
	{
		class WeaponSlotsInfo;
	};
	class launch_B_Titan_F: launch_Titan_base
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_Rifle_Base: arifle_Mk20_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_mk20";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_Shotgun_Base: arifle_Mk20_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_gm6";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_LongRifle_Base: srifle_EBR_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_ebr";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_MachineGun_Base: LMG_Mk200_F
	{
		ace_overheating_closedBolt = 1;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_mk200";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_SubMachineGun_Base: SMG_01_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_pistol_zubr";
		type=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	// END NEST's ACE COOKOFF FIX









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
		#include "cfg\CricketDisposables.hpp"
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

	// N-12
	class OPTRE_M12_SOC;
	class v105_N12_USOC:OPTRE_M12_SOC
    {
        scope=  2;
        scopeArsenal=   2;
        model=  "\OPTRE_Weapons\smg\m12.p3d";
        displayName=    "[105th] N12 USOC";
        descriptionShort=   "N12 Underwater Special Operations Carbine";
        picutre=    "\OPTRE_weapons\smg\icons\m12.paa";
        baseWeapon= "v105_N12_USOC";
        magazines[]={"v105_762x51_DP_Mag"};
        canShootInWater=    1;
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=   35;
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
                {  "optic_LRPS",  "OPTRE_M393_EOTECH",};
            };
                class MuzzleSlot: MuzzleSlot
                {
                    compatibleitems[]=
                    {   "optre_m7_silencer",    "ace_muzzle_mzls_b",};
                };
				class PointerSlot: PointerSlot
				{
					compatibleitems[]=
					{   "optre_bmr_laser",  "ace_acc_pointer_green",    
						"optre_M45_flashlight", "acc_flaslight",
					};
				};
        };
        modes[]=    {   "Burst", "Single",  };
        class Single: Mode_SemiAuto
        {
            sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg",
					"db8",
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg",
					"db8",
					1,
					2000
				};
				begin3[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg",
					"db8",
					1,
					2000
				};
				begin4[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg",
					"db8",
					1,
					2000
				};
				begin5[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg",
					"db8",
					1,
					2000
				};
				begin6[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg",
					"db8",
					1,
					2000
				};
				begin7[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg",
					"db8",
					1,
					2000
				};
				begin8[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg",
					"db8",
					1,
					2000
				};
				begin9[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg",
					"db8",
					1,
					2000
				};
				begin10[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg",
					"db8",
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.1,
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
				};
			};
            class SilencedSound: BaseSoundModeType
            {
                begin1[]=
                {
                    "\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
                    1,
                    1,
                    600
                };
                begin2[]=
                {
                    "\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
                    1,
                    1,
                    600
                };
                soundBegin[]=
                {
                    "begin1",
                    0.5,
                    "begin2",
                    0.5
                };
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[]=
                        {
                            "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",
                            1,
                            1,
                            400
                        };
                        frequency=1;
                        volume="interior";
                    };
                    class TailTrees
                    {
                        sound[]=
                        {
                            "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",
                            1,
                            1,
                            400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[]=
                        {
                            "A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",
                            1,
                            1,
                            400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*forest";
                    };
                    class TailMeadows
                    {
                        sound[]=
                        {
                            "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",
                            1,
                            1,
                            400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[]=
                        {
                            "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",
                            1,
                            1,
                            400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*houses";
                    };
                };
            };
        };
        class Burst: Mode_Burst
        {
            burst=  3;
            reloadTime= 0.04
            dispersion=0.00009;
			recoil="recoil_single_pdw";
			recoilProne="recoil_single_prone_pdw";
            minRange=2;
            minRangeProbab=0.0099999998;
            midRange=200;
            midRangeProbab=0.0099999998;
            maxRange=400;
            maxRangeProbab=0.0099999998;
            soundBurst=0;
                sounds[]=
                {
                    "StandardSound",
                    "SilencedSound"
                };
                class BaseSoundModeType
                {
                    weaponSoundEffect="DefaultRifle";
                    closure1[]={};
                    closure2[]={};
                    soundClosure[]=
                    {
                        "closure1",
                        0.5,
                        "closure2",
                        0.5
                    };
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-01.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin2[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-02.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin3[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-03.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin4[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-04.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin5[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-05.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin6[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-06.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin7[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-07.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin8[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-08.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin9[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-09.ogg",
                        "db8",
                        1,
                        2000
                    };
                    begin10[]=
                    {
                        "\OPTRE_Weapons\AR\Data\sounds\MA5K\MA5K-10.ogg",
                        "db8",
                        1,
                        2000
                    };
                    soundBegin[]=
                    {
                        "begin1",
                        0.1,
                        "begin2",
                        0.1,
                        "begin3",
                        0.1,
                        "begin4",
                        0.1,
                        "begin5",
                        0.1,
                        "begin6",
                        0.1,
                        "begin7",
                        0.1,
                        "begin8",
                        0.1,
                        "begin9",
                        0.1,
                        "begin10",
                        0.1
                    };
                }
                    class SilencedSound: BaseSoundModeType
                    {
                        begin1[]=
                        {
                            "\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
                            1,
                            1,
                            600
                        };
                        begin2[]=
                        {
                            "\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",
                            1,
                            1,
                            600
                        };
                        soundBegin[]=
                        {
                            "begin1",
                            0.5,
                            "begin2",
                            0.5
                        };
                        class SoundTails
                        {
                            class TailInterior
                            {
                                sound[]=
                                {
                                    "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",
                                    1,
                                    1,
                                    400
                                };
                                frequency=1;
                                volume="interior";
                            };
                            class TailTrees
                            {
                                sound[]=
                                {
                                    "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",
                                    1,
                                    1,
                                    400
                                };
                                frequency=1;
                                volume="(1-interior/1.4)*trees";
                            };
                            class TailForest
                            {
                                sound[]=
                                {
                                    "A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",
                                    1,
                                    1,
                                    400
                                };
                                frequency=1;
                                volume="(1-interior/1.4)*forest";
                            };
                            class TailMeadows
                            {
                                sound[]=
                                {
                                    "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",
                                    1,
                                    1,
                                    400
                                };
                                frequency=1;
                                volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                            };
                            class TailHouses
                            {
                                sound[]=
                                {
                                    "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",
                                    1,
                                    1,
                                    400
                                };
                                frequency=1;
                                volume="(1-interior/1.4)*houses";
                            };
                        };
                    };

        };
    };
};