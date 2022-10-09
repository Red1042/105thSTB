/* 105th MA5Cs */

class OPTRE_MA5B;
class OPTRE_MA5C: OPTRE_MA5B
{
    class Single;
    class FullAuto;
    class WeaponSlotsInfo;
};

class v105_MA5C: OPTRE_MA5C
{
    model= "\OPTRE_Weapons\AR\MA5C.p3d";
    displayName= "[105th] MA5CX";
    author= "S-4 Logistics (Luke)";
    baseWeapon= "v105_MA5C";
    magazines[]=
    {
        "v105_32Rnd_762x51_IRDM_Mag",
        // ^ New Mags Above ^
        "OPTRE_32Rnd_762x51_Mag",
        "OPTRE_32Rnd_762x51_Mag_Tracer",
        "OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
        "OPTRE_32Rnd_762x51_Mag_AP",
        "OPTRE_32Rnd_762x51_Mag_APT",
        "OPTRE_32Rnd_762x51_Mag_JHP",
        "OPTRE_32Rnd_762x51_Mag_JHPT",
        "OPTRE_32Rnd_762x51_Mag_SS",
        "OPTRE_32Rnd_762x51_Mag_SST"
    };
    class Single: Single
    {
        reloadTime= 0.1;
    };
    class FullAuto: FullAuto
    {
        reloadTime= 0.1;
    };
    HUD_TotalPosibleBullet=32;
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        #include "\105th_Weapons\cfg\StandardAttachments.hpp"
    };
};

class v105_MA5C_GL: v105_MA5C
{
    model= "\OPTRE_Weapons\AR\MA5CGL.p3d";
    displayName= "[105th] MA5CX-GL";
    baseWeapon= "v105_MA5C_GL";
    muzzles[]= {"this","v105_M301X"};
    class v105_M301X: v105_M301X{};
};

    class v105_MA5C_FT: v105_MA5C
    {
        model= "\OPTRE_Weapons\AR\MA5A.p3d";
        displayName= "[105th] MA5C/FT (Flat-Top)";
        baseWeapon= "v105_MA5C_FT";
        modes[]={   "Single", "Burst", "FullAuto"   };
        class Burst: Mode_Burst
        {
            burst=2;
            reloadTime=0.05;
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
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-01.ogg",
                    "db5",
                    1,
                    2000
                };
                begin2[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-02.ogg",
                    "db5",
                    1,
                    2000
                };
                begin3[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-03.ogg",
                    "db5",
                    1,
                    2000
                };
                begin4[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-04.ogg",
                    "db5",
                    1,
                    2000
                };
                begin5[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-05.ogg",
                    "db5",
                    1,
                    2000
                };
                begin6[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-06.ogg",
                    "db5",
                    1,
                    2000
                };
                begin7[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-07.ogg",
                    "db5",
                    1,
                    2000
                };
                begin8[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-08.ogg",
                    "db5",
                    1,
                    2000
                };
                begin9[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-09.ogg",
                    "db5",
                    1,
                    2000
                };
                begin10[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-10.ogg",
                    "db5",
                    1,
                    2000
                };
                begin11[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-11.ogg",
                    "db5",
                    1,
                    2000
                };
                begin12[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-12.ogg",
                    "db5",
                    1,
                    2000
                };
                begin13[]=
                {
                    "\OPTRE_Weapons\AR\Data\sounds\MA5C-13.ogg",
                    "db5",
                    1,
                    2000
                };
                soundBegin[]=
                {
                    "begin1",
                    0.07,
                    "begin2",
                    0.07,
                    "begin3",
                    0.07,
                    "begin4",
                    0.07,
                    "begin5",
                    0.07,
                    "begin6",
                    0.07,
                    "begin7",
                    0.07,
                    "begin8",
                    0.07,
                    "begin9",
                    0.07,
                    "begin10",
                    0.07,
                    "begin11",
                    0.07,
                    "begin12",
                    0.07,
                    "begin13",
                    0.090000004
                };
            };
           class SilencedSound: BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
                begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
                begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
                 class SoundTails
                 {
                     class TailTrees
                    {
                        sound[]  = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
                        frequency  = 1;
                        volume = "(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                            sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
                            frequency        = 1;
                            volume     = "(1-interior/1.4)*forest";
                    };
                    class TailInterior
                    {
                        sound[]    = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
                        frequency     = 1;
                        volume   = "interior";
                    };
                    class TailMeadows
                    {
                        sound[]   = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
                        frequency = 1;
                        volume  = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                         sound[]   = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
                        frequency    = 1;
                        volume    = "(1-interior/1.4)*houses";
                     };
                 };
            };
            dispersion=0.00008999991;
            recoil="recoil_single_trg";
            recoilProne="recoil_single_prone_trg";
            minRange=2;
            minRangeProbab=0.0099999998;
            midRange=200;
            midRangeProbab=0.0099999998;
            maxRange=400;
            maxRangeProbab=0.0099999998;
            soundBurst=0;
        };
    };

class v105_MA5C_FT_GL: v105_MA5C_FT
{
    model="\OPTRE_Weapons\AR\MA5AGL.p3d";
    displayName= "[105th] MA5C/FT-GL (Flat-Top)";
    baseWeapon= "v105_MA5C_FT_GL";
    muzzles[]= {"this","v105_M301X"};
    class v105_M301X: v105_M301X{};
    modes[]={   "Single", "Burst", "FullAuto"   };
    class Burst: Mode_Burst
    {
        burst=2;
        reloadTime=0.05;
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
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-01.ogg",
                "db5",
                1,
                2000
            };
            begin2[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-02.ogg",
                "db5",
                1,
                2000
            };
            begin3[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-03.ogg",
                "db5",
                1,
                2000
            };
            begin4[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-04.ogg",
                "db5",
                1,
                2000
            };
            begin5[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-05.ogg",
                "db5",
                1,
                2000
            };
            begin6[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-06.ogg",
                "db5",
                1,
                2000
            };
            begin7[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-07.ogg",
                "db5",
                1,
                2000
            };
            begin8[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-08.ogg",
                "db5",
                1,
                2000
            };
            begin9[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-09.ogg",
                "db5",
                1,
                2000
            };
            begin10[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-10.ogg",
                "db5",
                1,
                2000
            };
            begin11[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-11.ogg",
                "db5",
                1,
                2000
            };
            begin12[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-12.ogg",
                "db5",
                1,
                2000
            };
            begin13[]=
            {
                "\OPTRE_Weapons\AR\Data\sounds\MA5C-13.ogg",
                "db5",
                1,
                2000
            };
            soundBegin[]=
            {
                "begin1",
                0.07,
                "begin2",
                0.07,
                "begin3",
                0.07,
                "begin4",
                0.07,
                "begin5",
                0.07,
                "begin6",
                0.07,
                "begin7",
                0.07,
                "begin8",
                0.07,
                "begin9",
                0.07,
                "begin10",
                0.07,
                "begin11",
                0.07,
                "begin12",
                0.07,
                "begin13",
                0.090000004
            };
        };
       class SilencedSound: BaseSoundModeType
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
            begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
            begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
            soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
             class SoundTails
             {
                 class TailTrees
                {
                    sound[]  = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
                    frequency  = 1;
                    volume = "(1-interior/1.4)*trees";
                };
                class TailForest
                {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
                        frequency        = 1;
                        volume     = "(1-interior/1.4)*forest";
                };
                class TailInterior
                {
                    sound[]    = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
                    frequency     = 1;
                    volume   = "interior";
                };
                class TailMeadows
                {
                    sound[]   = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
                    frequency = 1;
                    volume  = "(1-interior/1.4)*(meadows/2 max sea/2)";
                };
                class TailHouses
                {
                     sound[]   = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
                    frequency    = 1;
                    volume    = "(1-interior/1.4)*houses";
                 };
             };
        };
        dispersion=0.00008999991;
        recoil="recoil_single_trg";
        recoilProne="recoil_single_prone_trg";
        minRange=2;
        minRangeProbab=0.0099999998;
        midRange=200;
        midRangeProbab=0.0099999998;
        maxRange=400;
        maxRangeProbab=0.0099999998;
        soundBurst=0;
    };

};