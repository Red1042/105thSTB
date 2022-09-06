/* 105th M28A2 */

class OPTRE_M393_DMR;
class OPTRE_M28A2: OPTRE_M393_DMR
{
    class WeaponSlotsInfo;
    class Single;
    class single_close_optics1;
    class single_medium_optics1;
    class single_far_optics1;
    class FullAuto;
    class fullauto_medium;
};

class v105_M28A2: OPTRE_M28A2
{
    dlc= "105th";
    baseweapon= "v105_M28A2";
    author= "S-4 Logistics (Luke)";
    displayName= "[105th] M28A2";
    magazines[]=
    {
        "OPTRE_36Rnd_95x40_Mag",
        "OPTRE_36Rnd_95x40_Mag_Tracer",
        "OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
        "OPTRE_36Rnd_95x40_Mag_AP",
        "OPTRE_36Rnd_95x40_Mag_APT",
        "OPTRE_36Rnd_95x40_Mag_JHP",
        "OPTRE_36Rnd_95x40_Mag_JHPT",
        "OPTRE_36Rnd_95x40_Mag_SS",
        "OPTRE_36Rnd_95x40_Mag_SST"
    };
    /* Remove the Secondary Fire mode */
    class Single: Single
    {
        reloadTime= 0.1;
    };
    class single_close_optics1: single_close_optics1
    {
        reloadTime= 0.1;
    };
    class single_medium_optics1: single_medium_optics1
    {
        reloadTime= 0.1;
    };
    class single_far_optics1: single_far_optics1
    {
        reloadTime= 0.1;
    };
    class FullAuto: FullAuto
    {
        reloadTime= 0.1;
    };
    class fullauto_medium: fullauto_medium
    {
        reloadTime= 0.1;
    };
    muzzles[]={"this"};

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass = 81;
        #include "\105th_Weapons\cfg\StandardAttachments.hpp"
    };
};

class OPTRE_BR55HB;
class OPTRE_BR55: OPTRE_BR55HB
{
    class WeaponSlotsInfo;
    class Single;
    class FullAuto;
};
class v105_BR55: OPTRE_BR55
{
    dlc= "105th";
    baseweapon= "v105_BR55";
    author= "S-4 Logistics (Luke)";
    displayName= "[105th] BR55X";
    magazines[]=
    {
        "OPTRE_36Rnd_95x40_Mag",
        "OPTRE_36Rnd_95x40_Mag_Tracer",
        "OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
        "OPTRE_36Rnd_95x40_Mag_JHP",
        "OPTRE_36Rnd_95x40_Mag_JHPT",
        "OPTRE_36Rnd_95x40_Mag_SS",
    };
    class Single: Single
    {
        reloadTime= 0.1;
    };
    class FullAuto: FullAuto
    {
        reloadTime= 0.1;
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        #include "\105th_Weapons\cfg\StandardAttachments.hpp"
    };
};