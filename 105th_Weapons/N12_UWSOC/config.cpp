class CfgPatches
{
    class v105_N12USOC
    {  
        author= "105th | S4 Logistics";
        url="https://discord.gg/105thstb-arma";
        units[]={};
        weapons[]=
        {
            "Your_Weapon",
            "Your_WeaponGL", //If Applicable
        };
        magazines[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "OPTRE_Core",
			"OPTRE_Weapons",
			"V_SO_Weapons",
			"OPTRE_Weapons_Sniper",
			"OPTRE_UNSC_Units",
			"OPTRE_MJOLNIR",
			"OPTRE_MJOLNIR_data_anims",
			"OPTRE_Ins_Units",
			"ace_common",
			"ace_explosives",
			"ace_medical_engine",
			"ace_medical_treatment",
			"A3_Data_F",
			"OPTRE_Weapons_Items",
            "OPTRE_ACE_Compat"
        };
    };
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class Mode_Burst;
class Mode_SemiAuto;
class OPTRE_M12_SOC;
class CfgWeapons
{
    class v105_N12_USOC:OPTRE_M12_SOC
    {
        scope=  2;
        scopeArsenal=   2;
        model=  "\OPTRE_Weapons\smg\m12.p3d";
        displayName=    "[105th] N12 USOC";
        descriptionShort=   "N12 Underwater Special Operations Carbine";
        picutre=    "\OPTRE_weapons\smg\icons\m12.paa";
        baseWeapon= "v105_N12_USOC";
        magazines[]=	{"v105_762x51_DP_Mag"};
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