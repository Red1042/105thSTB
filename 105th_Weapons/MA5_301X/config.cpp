/*

    Disabled for now due to the 105th Weapons refit 09/02/2022

class CfgPatches
{
    class v105_MA5_301X
    {
        author= "105th | S4 Logistics";
        url="https://discord.gg/105thstb-arma";
        units[]={};
        weapons[]={};
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
class v105_M301X;
class CfgWeapons
{
    class v105_MA5K: OPTRE_MA5K
    {
        dlc							= "105th";
        author						= "Howard, Fireteam Zulu";
        scope						= 2;
        scopeArsenal				= 2;
        baseWeapon 					= "v105_MA5K";
        displayName					= "[105th] MA5KX ICWS";
        magazines[] = 
        {
            "v105_32Rnd_762x51_IRDM_Mag",
            // ^ New Mags Above ^
            "OPTRE_32Rnd_762x51_Mag",
            "OPTRE_32Rnd_762x51_Mag_Tracer",
            "OPTRE_32Rnd_762x51_Mag_AP",
            "OPTRE_32Rnd_762x51_Mag_APT",
            "OPTRE_32Rnd_762x51_Mag_JHP",
            "OPTRE_32Rnd_762x51_Mag_JHPT",
            "OPTRE_32Rnd_762x51_Mag_SS",
            "OPTRE_32Rnd_762x51_Mag_UW"
        };
        class Single: Mode_SemiAuto
        {
            reloadTime 				= 0.05;
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime 				= 0.05;
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
                "optic_aco_grn",
                "optic_aco",
                "optic_holosight_blk_f",
                "optic_mrco",	
                "optic_yorris",	
                "optic_aco_smg",
                "optic_aco_grn_smg",
                "optic_holosight_smg_blk_f",
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
            mass=50;
        };
    };
};
*/