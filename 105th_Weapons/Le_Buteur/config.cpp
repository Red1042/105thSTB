class CfgPatches
{
    class v105_Le_Buteur
    {
        author= "105th | S4 Logistics";
        url="https://discord.gg/105thstb-arma";
        units[]={};
        weapons[]=
        {
            "v105_408_SRSC",
            "v105_M392X",
        };
        magazines[]=
        {
            "v105_4Rnd_145x114_Mag",
            "v105_4Rnd_145x114_Mag_Tracer",
            "v105_15Rnd_762x51_338_API_Mag",
            "v105_15Rnd_762x51_338_Magnum_Mag",
            "v105_15Rnd_762x51_338_APIT_Mag",
            "v105_15Rnd_762x51_338_MT_Mag",
            "v105_15Rnd_762x51_338_Mixed_Mag",
        };
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
            "A3_Weapons_F",
			"A3_Data_F_Mark",
			"OPTRE_Weapons_Items",
            "OPTRE_ACE_Compat",
        };
    };
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class ItemInfo;
class Mode_SemiAuto;
class Single;
class Mode_Burst;
class Mode_FullAuto;
class OPTRE_SRS99C;
class ACE_7Rnd_408_305gr_Mag;
class OPTRE_M392_DMR;
class CfgWeapons
{
    class v105_408_SRSC:OPTRE_SRS99C
    {
        dlc = "105th Weapons";
        baseweapon="v105_408_SRSC"
        author = "Howard";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[105th] SRS-99C";
        magazines[]=
        {
            "v105_4Rnd_145x114_Mag",
            "v105_4Rnd_145x114_Mag_Tracer",
        };
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
                "optic_nvs",
                "optic_ams",
                "optre_srs99c_scope"
            };
        };
        class PointerSlot: PointerSlot
        {
            iconPosition[]={0.2,0.40000001};
        };
            mass=150;
        };
        class ItemInfo
        {
            priority=1;
        };
    };
    class v105_M392X: OPTRE_M392_DMR
    {
        dlc = "105th Weapons";
        author = "Howard";
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
        magazineWell[] = {};   
        modes[] = 
        {
            "Single",
            "FullAuto"
        };
        class FullAuto: Single
        {
            aiDispersionCoefX 		= 2;
            aiDispersionCoefY 		= 3;
            burst 					= 1;
            autoFire 				= 1;
            dispersion			 	= 0.000029;
            displayName 			= "Full";
            maxRange 				= 80;
            maxRangeProbab 			= 0.04;
            midRange 				= 30;
            midRangeProbab 			= 0.58;
            minRange 				= 1;
            minRangeProbab 			= 0.2;
            recoil 					= "recoil_auto_primary_3outof10";
            recoilProne 			= "recoil_auto_primary_prone_3outof10";
            reloadTime 				= 0.08;
            sound[] 				= {"",10,1};
            soundBurst 				= 0;
            soundContinuous 		= 0;
            soundEnd[] 				= {"sound",1};
            textureType 			= "fullAuto";
        };
    };
};