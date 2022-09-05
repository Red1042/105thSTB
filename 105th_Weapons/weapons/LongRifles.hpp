/* 105th M392 DMR */

class OPTRE_LongRifle_Base;
class OPTRE_M392_DMR: OPTRE_LongRifle_Base
{
    class WeaponSlotsInfo;
    class Single;
    class FullAuto;
};

class v105_M392X: OPTRE_M392_DMR
{
    dlc = "105th";
    author = "S-4 Logistics (Howard)";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[105th] M392X DMR";
    baseWeapon= "v105_M392X";
    magazines[]=
    {
        "v105_15Rnd_762x51_338_API_Mag",
        "v105_15Rnd_762x51_338_Magnum_Mag",
        "v105_15Rnd_762x51_338_APIT_Mag",
        "v105_15Rnd_762x51_338_MT_Mag",
        "v105_15Rnd_762x51_338_Mixed_Mag",
        //   ^ New Mags above ^
        "OPTRE_15Rnd_762x51_Mag",
        "OPTRE_15Rnd_762x51_Mag_Tracer",
        "OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
        "OPTRE_15Rnd_762x51_Mag_AP",
        "OPTRE_15Rnd_762x51_Mag_APT",
        "OPTRE_15Rnd_762x51_Mag_JHP",
        "OPTRE_15Rnd_762x51_Mag_JHPT",
        "OPTRE_15Rnd_762x51_Mag_SS",
        "OPTRE_15Rnd_762x51_Mag_SST",
        "OPTRE_15Rnd_762x51_Mag_FS",
        "OPTRE_15Rnd_762x51_Mag_FST"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
                "optre_ma5suppressor"
            };
        };
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "optre_bmr_scope",
                "optre_bmr_scope_v2",
                "OPTRE_BR55HB_Scope",
                //"OPTRE_BR55HB_Scope_v2", (Disabled due to it's zoom optic being broken)
                "optre_m393_eotech",
                "OPTRE_M393_EOTECH_v2",
                "optre_m392_scope",
                "OPTRE_M392_Scope_v2",
                "optre_m7_sight"
            };
        };
    };
    magazineWell[] = {};
    modes[] =
    {
        "Single",
        "FullAuto"
    };
    class Single: Single
    {
        reloadTime= 0.15;
    }
    class FullAuto: FullAuto
    {
        reloadTime= 0.15;
    }
};

/* 105th SRS Sniper */

class OPTRE_SRS99D;
class OPTRE_SRS99C: OPTRE_SRS99D
{
    class WeaponSlotsInfo;
}

class v105_SRS99C: OPTRE_SRS99C
{
    dlc = "105th";
    author = "S-4 Logistics (Howard)";
    baseweapon="v105_SRS99C"
    scope = 2;
    scopeArsenal = 2;
    displayName = "[105th] SRS-99C";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            iconPosition[]={0,0.40000001};
            compatibleitems[]=
            {
                "optre_srs99d_suppressor"
            };
        };
        class CowsSlot: CowsSlot
        {
            iconPosition[]={0.5,0.30000001};
            compatibleitems[]=
            {
                "optic_dms",
                "optic_sos",
                "optic_lrps",
                "optic_khs_blk",
                "optic_nightstalker",
                "optic_ams",
                "optre_srs99c_scope"
            };
        };
    };
};