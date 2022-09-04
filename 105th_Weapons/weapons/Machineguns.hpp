/* 105th M73 SAW */

class OPTRE_M73
{
    class WeaponSlotsInfo
    {
        class CowsSlot;
    };
    class FullAuto;
};

class v105_M73SAW: OPTRE_M73
{
    dlc="105th";
    author="S-4 Logistics (Howard)";
    displayName= "[105th] M73 SAW";
    baseWeapon= "v105_M73SAW";
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
        "FullAutoFast"
    };
    class FullAutoSlow: FullAuto
    {
        reloadTime= 0.1;
        dispersion= 0.000055000001;
        showToPlayer= 1;
    };
    class FullAutoFast: FullAutoSlow
    {
        reloadTime= 0.06;
        dispersion= 0.000055000001;
        textureType= "fastAuto";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class CowsSlot: CowsSlot
        {
            iconPosition[]={0.5,0.30000001};
            compatibleitems[]=
            {
                "OPTRE_BR55HB_Scope",
                "OPTRE_BR55HB_Scope_v2",
                "optre_m393_eotech",
                "OPTRE_M393_EOTECH_v2",
                "optre_m392_scope",
                "OPTRE_M392_Scope_v2",
                "optre_m7_sight",
                "OPTRE_M393_Scope",
                "OPTRE_M393_Scope_v2"
            };
        };
        mass=200;
    };
};

/* 105th M247 SSW */

class OPTRE_M247
{
    class WeaponSlotsInfo
    {
        class CowsSlot;
    };
    class FullAuto;
};

class v105_M247SSW: OPTRE_M247
{
    dlc="105th";
    author="S-4 Logistics (Howard)";
    baseWeapon="v105_M247SSW";
    displayName="[105th] M247 SSW";
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
        reloadTime= 0.08;
        dispersion= 0.00075000001;
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
                "\105th_Weapons\sounds\M247_Cool_Sound.ogg",
                3,
                1,
                2000
            };
            begin2[]=
            {
                "\105th_Weapons\sounds\M247_Cool_Sound_2.ogg",
                3,
                1,
                2000
            };
            begin3[]=
            {
                "\105th_Weapons\sounds\M247_Cool_Sound_3.ogg",
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
                "\105th_Weapons\sounds\M247_Cool_Sound.ogg",
                3,
                1,
                2000
            };
            begin2[]=
            {
                "\105th_Weapons\sounds\M247_Cool_Sound_2.ogg",
                3,
                1,
                2000
            };
            begin3[]=
            {
                "\105th_Weapons\sounds\M247_Cool_Sound_3.ogg",
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
        class CowsSlot: CowsSlot
        {
            iconPosition[]={0.5,0.30000001};
            compatibleitems[]=
            {
                "OPTRE_BR55HB_Scope",
                "OPTRE_BR55HB_Scope_v2",
                "optre_m393_eotech",
                "OPTRE_M393_EOTECH_v2",
                "optre_m392_scope",
                "OPTRE_M392_Scope_v2",
                "optre_m7_sight",
                "OPTRE_M393_Scope",
                "OPTRE_M393_Scope_v2"
            };
        };
        mass=200;
    };
};