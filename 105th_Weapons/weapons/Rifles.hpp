/* 105th M28A2 */

class OPTRE_M28A2
{
    class WeaponSlotsInfo
    {
        class MuzzleSlot;
        class CowsSlot;
        class UnderBarrelSlot;
    };
    class Single;
};

class v105_M28A2: OPTRE_M28A2
{
    dlc= "105th";
    baseweapon= "v105_M28A2";
    author= "S-4 Logistics (Luke)";
    displayName= "[105th] M28A2";
    magazines[]=
    {
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
        reloadTime= 0.12;
    };
    muzzles[]={"this"};
    #include "\105th_Weapons\cfg\StandardAttachments.hpp"
    /* ToDo: Correct sound mismatch
    class Single: Single
    {
        class SilencedSound
        {
            SoundSetShot[]=
            {
                "DMR03_silencerShot_SoundSet",
                "DMR03_silencerTail_SoundSet",
                "DMR03_silencerInteriorTail_SoundSet"
            };
        };
        class StandardSound
        {
            soundSetShot[]=
            {
                "DMR03_Shot_SoundSet",
                "DMR03_tail_SoundSet",
                "DMR03_InteriorTail_SoundSet"
            };
        };
    };
    */
};


/* 105th MA5Cs */
class OPTRE_MA5B
{
    class WeaponSlotsInfo
    {
        class MuzzleSlot;
        class CowsSlot;
        class UnderBarrelSlot;
    };
    class Single;
    class FullAuto;
};

class v105_MA5C: OPTRE_MA5B
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
    #include "\105th_Weapons\cfg\StandardAttachments.hpp"
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
};

class v105_MA5C_FT_GL: v105_MA5C_FT
{
    model="\OPTRE_Weapons\AR\MA5AGL.p3d";
    displayName= "[105th] MA5C/FT-GL (Flat-Top)";
    baseWeapon= "v105_MA5C_FT_GL";
    muzzles[]= {"this","v105_M301X"};
    class v105_M301X: v105_M301X{};
};