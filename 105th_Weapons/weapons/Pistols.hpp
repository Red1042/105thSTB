/* 105th M6 Pistols */

class OPTRE_M6G;
class OPTRE_M6C: OPTRE_M6G
{
    class WeaponSlotsInfo;
};

class v105_M6C: OPTRE_M6C
{
    displayName= "[105th] M6C/SOCOM Magnum";
    baseWeapon= "v105_M6C";
    magazines[]=
    {
        "OPTRE_12Rnd_127x40_Mag",
        "OPTRE_12Rnd_127x40_Mag_Tracer",
        "OPTRE_12Rnd_127x40_Mag_AP",
        "OPTRE_12Rnd_127x40_Mag_APT",
        "OPTRE_12Rnd_127x40_Mag_JHP",
        "OPTRE_12Rnd_127x40_Mag_JHPT",
        "OPTRE_12Rnd_127x40_Mag_SS",
        "OPTRE_12Rnd_127x40_Mag_SST",
        "OPTRE_12Rnd_127x40_Mag_NARQ"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
                "optre_m6c_compensator"
            };
        };
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "optre_m6c_scope",
                "optre_m7_scope"
            };
        };
        class PointerSlot: PointerSlot
        {
            compatibleItems[]=
            {
                "optre_m6c_laser",
                "optre_m6g_flashlight"
            };
        };
    };
};

class v105_M6D: v105_M6C
{
    model="\OPTRE_Weapons\Pistol\m6g.p3d";
    displayName= "[105th] M6D Magnum";
    baseWeapon= "v105_M6D";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
                "optre_m6_silencer"
            };
        };
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "optre_m6g_scope"
            };
        };
        class PointerSlot: PointerSlot
        {
            compatibleItems[]=
            {
                "optre_m6d_flashlight"
            };
        };
    };
};