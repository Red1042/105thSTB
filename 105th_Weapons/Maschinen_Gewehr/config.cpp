class CfgPatches
{
    class v105_Machineguns
    {  
        author= "105th | S4 Logistics";
        url="https://discord.gg/105thstb-arma";
        units[]={};
        weapons[]=
        {
           "v105_M247SSW",
           "v105_M73GPMG",
           "v105_M73SAW",
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
class ItemInfo;
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class Mode_SemiAuto;
class FullAuto;			
class OPTRE_M73;
class OPTRE_M247;
class CfgWeapons
{	
    class v105_M73SAW:OPTRE_M73
    {
        dlc="105th";
        author="Howard";
        scope=2;
        scopeArsenal=2;
        displayName					= "[105th] M73 SAW";
        baseWeapon 					= "v105_M73SAW";
        descriptionShort="UNSC Squad Automatic Weapon";
        recoil="recoil_lim";
        magazines[]=
        {
            "v105_150Rnd_762x51_Box",
            "v105_150Rnd_762x51_Box_Tracer",
            "v105_300Rnd_762x51_Box",
            "v105_300Rnd_762x51_Box_Tracer"

        };
        modes[]=
        {
            "FullAutoSlow",
            "FullAutoFast",
        };
        class FullAutoSlow: FullAuto
        {
            reloadTime=0.1;
            dispersion=0.000055000001;
            
            /*sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };*/
            showToPlayer=1;
        };
        class FullAutoFast: FullAutoSlow
        {
            reloadTime=0.06;
            dispersion=0.000055000001;	
            textureType="fastAuto";
            
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                iconPosition[]={0,0.40000001};
            };
            class CowsSlot: CowsSlot
            {
                iconPosition[]={0.5,0.30000001};
                compatibleitems[]=
                {
                    "optic_arco_ak_blk_f",
                    "optic_aco_grn",
                    "optic_aco",
                    "optic_arco_blk_f",
                    "optic_holosight_blk_f",
                    "optic_mrco",
                    "optic_SOS",
                    "optic_hamr",
                    "optic_erco_blk_f",
                    "optic_yorris",
                    "ace_optic_mrco_2d",
                    "ace_optic_hamr_2d",
                    "ace_optic_hamr_pip",
                    "optic_aco_smg",
                    "optic_aco_grn_smg",
                    "optic_holosight_smg_blk_f",
                    "optre_m73_smartlink",
                    "OPTRE_M7_Sight",
                    "OPTRE_M392_Scope",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_BMR_Scope",
                };
            };
            class PointerSlot: PointerSlot
            {
                iconPosition[]={0.2,0.40000001};
            };
            mass=200;
            };
            class ItemInfo
            {
                priority=1;
            };
        };
    class v105_M73GPMG:OPTRE_M73
    {
        dlc="105th";
        author="Howard";
        scope=2;
        scopeArsenal=2;
        displayName					= "[105th] M73 GPMG";
        baseWeapon 					= "v105_M73GPMG";
        descriptionShort="UNSC General Purpose Machine Gun";
        recoil="recoil_lim";
        modes[]=
        {
            "FullAutoSlow",
            "FullAutoFast",
        };
        class FullAutoSlow: FullAuto
        {
            reloadTime=0.15;
            dispersion=0.000055000001;
            
            /*sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };*/
            showToPlayer=1;
        };
        class FullAutoFast: FullAutoSlow
        {
            reloadTime=0.075;
            dispersion=0.000055000001;	
            textureType="fastAuto";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                iconPosition[]={0,0.40000001};
            };
            class CowsSlot: CowsSlot
            {
                iconPosition[]={0.5,0.30000001};
                compatibleitems[]=
                {
                    "optic_arco_ak_blk_f",
                    "optic_aco_grn",
                    "optic_aco",
                    "optic_arco_blk_f",
                    "optic_holosight_blk_f",
                    "optic_mrco",
                    "optic_SOS",
                    "optic_hamr",
                    "optic_erco_blk_f",
                    "optic_yorris",
                    "ace_optic_mrco_2d",
                    "ace_optic_hamr_2d",
                    "ace_optic_hamr_pip",
                    "optic_aco_smg",
                    "optic_aco_grn_smg",
                    "optic_holosight_smg_blk_f",
                    "optre_m73_smartlink",
                    "OPTRE_M7_Sight",
                    "OPTRE_M392_Scope",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_BMR_Scope",
                };
            };
            class PointerSlot: PointerSlot
            {
                iconPosition[]={0.2,0.40000001};
            };
            mass=200;
        };
        class ItemInfo
        {
            priority=1;
        };
    };
    class v105_M247SSW: OPTRE_M247
    {
        dlc="105th";
        author="Howard";
        scope=2;
        scopeArsenal=2;
        baseWeapon="v105_M247SSW";
        displayName="[105th] M247 SSW";
        descriptionShort="UNSC Squad Support Weapon";
        magazines[]=
        {
            "v105_200Rnd_93x64_Box",
            "v105_150Rnd_93x64_Box",
            "v105_75Rnd_93x64_Box",
            "v105_200Rnd_93x64_Mixed_Box",
            "v105_150Rnd_93x64_Mixed_Box",
            "v105_75Rnd_93x64_Mixed_Box",		
        };
        recoil="recoil_mk200";
        HUD_BulletInARows=4;
        HUD_TotalPosibleBullet=200;
        class StandardSound;
        class Single: Mode_SemiAuto
        {
            reloadTime 				= 0.08;
            dispersion=0.00075000001;
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class BaseSoundModeType
            {
                weaponSoundEffect="DefaultRifle";
                closure1[]=
                {
                    "A3\Sounds_F\weapons\Closure\sfx10",
                    0.63095737,
                    1,
                    20
                };
                closure2[]=
                {
                    "A3\sounds_f\weapons\closure\sfx11",
                    0.63095737,
                    1.2,
                    20
                };
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
                    "\105th_Weapons\maschinen_gewehr\sounds\M247_Cool_Sound.ogg",
                    3,
                    1,
                    2000
                };
                begin2[]=
                {
                    "\105th_Weapons\maschinen_gewehr\sounds\M247_Cool_Sound_2.ogg",
                    3,
                    1,
                    2000
                };
                begin3[]=
                {
                    "\105th_Weapons\maschinen_gewehr\sounds\M247_Cool_Sound_3.ogg",
                    3,
                    1,
                    2000
                };
                soundBegin[]=
                {
                    "begin1",
                    1,
                    "begin2",
                    0.33000001,
                    "begin3",
                    .33	
                };
                closure1[]=
                {
                    "A3\Sounds_F\weapons\Closure\sfx10",
                    0.63095737,
                    1,
                    20
                };
                closure2[]=
                {
                    "A3\sounds_f\weapons\closure\sfx11",
                    0.63095737,
                    1.2,
                    20
                };
                soundClosure[]=
                {
                    "closure1",
                    0.5,
                    "closure2",
                    0.5
                };
                class SoundTails
                {
                    class TailTrees
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailTrees",
                        3	1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailForest",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailInterior",
                            1.5848932,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="interior";
                    };
                    class TailMeadows
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailMeadows",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailHouses",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*houses";
                    };
                };
            };
        };
        class FullAuto: FullAuto
        {
            reloadTime=0.08;
            dispersion=0.00075000001;
            sounds[]=
            {
                "StandardSound"
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
                    "\105th_Weapons\maschinen_gewehr\sounds\M247_Cool_Sound.ogg",
                    3,
                    1,
                    2000
                };
                begin2[]=
                {
                    "\105th_Weapons\maschinen_gewehr\sounds\M247_Cool_Sound_2.ogg",
                    3,
                    1,
                    2000
                };
                begin3[]=
                {
                    "\105th_Weapons\maschinen_gewehr\sounds\M247_Cool_Sound_3.ogg",
                    3,
                    1,
                    2000
                };
                soundBegin[]=
                {
                    "begin1",
                    1,
                    "begin2",
                    0.33000001,
                    "begin3",
                    .33	
                };
                closure1[]=
                {
                    "A3\Sounds_F\weapons\Closure\sfx10",
                    0.63095737,
                    1,
                    20
                };
                closure2[]=
                {
                    "A3\sounds_f\weapons\closure\sfx11",
                    0.63095737,
                    1.2,
                    20
                };
                soundClosure[]=
                {
                    "closure1",
                    0.5,
                    "closure2",
                    0.5
                };
                class SoundTails
                {
                    class TailTrees
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailTrees",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailForest",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailInterior",
                            1.5848932,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="interior";
                    };
                    class TailMeadows
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailMeadows",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[]=
                        {
                            "A3\sounds_f_arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_tailHouses",
                            1,
                            1,
                            1400
                        };
                        frequency=1;
                        volume="(1-interior/1.4)*houses";
                    };
                };
            };
                    
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                iconPosition[]={0,0.40000001};
            };
            class CowsSlot: CowsSlot
            {
                iconPosition[]={0.5,0.30000001};
                compatibleitems[]=
                {
                    "optic_arco_ak_blk_f",
                    "optic_aco_grn",
                    "optic_aco",
                    "optic_arco_blk_f",
                    "optic_holosight_blk_f",
                    "optic_mrco",
                    "optic_SOS",
                    "optic_hamr",
                    "optic_erco_blk_f",
                    "optic_yorris",
                    "ace_optic_mrco_2d",
                    "ace_optic_hamr_2d",
                    "ace_optic_hamr_pip",
                    "optic_aco_smg",
                    "optic_aco_grn_smg",
                    "optic_holosight_smg_blk_f",
                    "OPTRE_M6S_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M392_Scope",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_BMR_Scope"
                };
            };
            class PointerSlot: PointerSlot
            {
                iconPosition[]={0.2,0.40000001};
            };
            mass=200;
        };
        class ItemInfo
        {
            priority=1;
        };
    };
};