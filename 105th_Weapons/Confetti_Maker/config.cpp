/*

    Disabled for now due to the 105th Weapons refit 09/02/2022


class CfgPatches
{
    class v105_Confetti_Maker
    {
        units[]={};
        magazines[]=
        {
            "v105_Confetti_Belt_200m",
            "v105_Confetti_Belt_100m",
            "v105_Confetti_Belt_15m"
        };
        ammo[]=
        {
            "v105_Confetti_Sub",    
        };
        weapons[]=
        {
            "v105_LMG_CM",
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
			"OPTRE_Weapons_Items",
            "OPTRE_ACE_Compat"
		};
    };
};

class CfgAmmo
{
    class BulletCore;

    class BulletBase: BulletCore {
        timeToLive=6;
    };

    class OPTRE_B_338_SP;
    class B_12Gauge_Pellets_Submunition;
    class v105_Confetti_Sub: BulletBase
    {
        hit=   6;
        initSpeed=   345;
        caliber=  3;
        submunitionParentSpeedCoef= 1;
		tracersEvery=1;
        whistleonFire=  1;
        whistleDist=    2;
    };
    //
    // NOTE: Velocity is 300m/s. It will take 1/3 of a second to travel 100 meters, 2/3 of a second to travel 200 meters, so on so forth.
    // A 2 second fuze means traveling 600 meters before dispersing.
    class v105_Confetti_Parent_200mFuze: OPTRE_B_338_SP
    {
        submunitionAmmo=   "v105_Confetti_Sub";
		submunitionConeType[]= {"poissondisccenter", 8};
		submunitionConeAngle= 0.5;
		triggerTime = 0.666666666666;
        tracersEvery=   5;
        whistleonFire=  1;
        whistleDist=    2;
        hit=    28;
        caliber=    2;
        typicalSpeed=   300;
    };
    class v105_Confetti_Parent_100mFuze: OPTRE_B_338_SP
    {
        submunitionAmmo=   "v105_Confetti_Sub";
		submunitionConeType[]= {"poissondisccenter", 8};
		submunitionConeAngle= 0.85;
		triggerTime = 0.333333333333;
        tracersEvery=   2;
        whistleonFire=  1;
        whistleDist=    2;
        hit=    28;
        caliber=    2;
        typicalSpeed=   300;
    };
    class v105_Confetti_Parent_15mFuze: OPTRE_B_338_SP
    {
        submunitionAmmo=   "v105_Confetti_Sub";
		submunitionConeType[]= {"poissondisccenter", 8};
		submunitionConeAngle= 0.85;
		triggerTime = 0.05;
        tracersEvery=   2;
        whistleonFire=  1;
        whistleDist=    2;
        hit=    28;
        caliber=    2;
        typicalSpeed=   300;
    };
};
class CfgMagazines
{
    class 200Rnd_65x39_cased_Box;
    class v105_Confetti_Belt_200m: 200Rnd_65x39_cased_Box
    {
        scope=  2;
        scopeArsenal=   2;
        displayName=    "[105th] 150Rnd Belt W/ Tracers 200m";
        descriptionShort=   "Belt-fed munitions for the CQMG-99A, 200m fuze";
        class Library
        {
            libTextDesc = "Etched onto the belt: 'God help those who face the thunder that which hell fires forth.'";
        };
        ammo=   "v105_Confetti_Parent_200mFuze";
        count=   150;
        tracersEvery=   5;
        deleteIfEmpty=   0;
        initSpeed=   300;
        mass=   25;
    };
    class v105_Confetti_Belt_100m: 200Rnd_65x39_cased_Box
    {
        scope=  2;
        scopeArsenal=   2;
        displayName=    "[105th] 150Rnd Belt W/ Tracers 100m";
        descriptionShort=   "Belt-fed munitions for the CQMG-99A, 100m fuze";
        class Library
        {
            libTextDesc = "Etched onto the belt: 'God help those who face the thunder that which hell fires forth.'";
        };
        ammo=   "v105_Confetti_Parent_100mFuze";
        count=   150;
        tracersEvery=   5;
        deleteIfEmpty=   0;
        initSpeed=   300;
        mass=   25;
    };
    class v105_Confetti_Belt_15m: 200Rnd_65x39_cased_Box
    {
        scope=  2;
        scopeArsenal=   2;
        displayName=    "[105th] 150Rnd Belt W/ Tracers 15m";
        descriptionShort=   "Belt-fed munitions for the CQMG-99A, 15m fuze";
        class Library
        {
            libTextDesc = "Etched onto the belt: 'God help those who face the thunder that which hell fires forth.'";
        };
        ammo=   "v105_Confetti_Parent_15mFuze";
        count=   150;
        tracersEvery=   5;
        deleteIfEmpty=   0;
        initSpeed=   300;
        mass=   25;
    };
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class LMG_Mk200_F;
class CfgWeapons
{
    class v105_LMG_CM: LMG_Mk200_F
    {
        scope=  2;
        scopeArsenal=   2;
        model="\A3\weapons_f\Machineguns\M200\M200_F.p3d";
		picture="\A3\weapons_F\Machineguns\M200\Data\UI\gear_m200_X_CA.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
        displayName=   "[105th] CQMG-99A";
        descriptionShort=   "Known as the 'Confetti Maker', this LMG is effective in urban terrain and not Long Range engagements."; 
        baseWeapon= "v105_LMG_CM";
        magazineWell[]+={"v105_Confetti_Belt"};
        magazines[]=
        {
            "v105_Confetti_Belt_200m",
            "v105_Confetti_Belt_100m",
            "v105_Confetti_Belt_15m"
        };
        hiddenSelectionsTextures[]=
        {
            "\105th_Weapons\confetti_Maker\data\confettimaker_1stperson_view.paa",
            "\105th_Weapons\confetti_Maker\data\confettimaker_body_co.paa",
            "\A3\Weapons_F\Machineguns\M200\data\grip_co"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=   40;
            class CowsSlot: CowsSlot
					{
						iconPosition[]={0.5,0.30000001};
						compatibleitems[]=
						{
                            //Scope Masterlist - Black variants specifically
                            //  OPTRE Scopes
                            "OPTRE_BR45_Scope",
                            "OPTRE_BR55HB_Scope",
                            "OPTRE_SRS99C_Scope",
                            "OPTRE_SRS99_Scope",
                            "OPTRE_M393_EOTECH",
                            "OPTRE_SRM_Sight",
                            "OPTRE_M392_Scope",
                            "OPTRE_HMG38_CarryHandle",
                            "OPTRE_M12_Optic",
                            "OPTRE_M393_ACOG",
                            "OPTRE_BMR_Scope",
                            "OPTRE_M7_Scope",
                            "OPTRE_M73_SmartLink",
                            "OPTRE_MA5_SmartLink",
                            "OPTRE_MA5_BUIS",  // Alternate Iron Sights for MA5
                            "OPTRE_MA5C_SmartLink",
                            "OPTRE_MA5C_SmartLink_legacy",
                            // OPTRE Pistol Sights
                            "OPTRE_M6S_Scope",
                            "OPTRE_M6G_Scope",
                            "OPTRE_M6GX_Scope",
                            "OPTR_M6D_Smartlink",
                            "OPTRE_M6C_Scope",
                            // OPTRE V2
                            "OPTRE_MA5C_SmartLink_v2",
                            "OPTRE_M73_Smartlink_v2",
                            "OPTRE_M7_Sight_v2",
                            "OPTRE_BMR_Scope_v2",
                            "OPTRE_M393_ACOG_v2",
                            "OPTRE_M393_EOTECH_v2",
                            "OPTRE_M392_Scope_v2",
                            "OPTRE_SRS99_Scope_v2",
                            "OPTRE_BR55HB_Scope_v2",
                            "OPTRE_SRS99C_Scope_v2",
                            //  A3 Scopes
                            "optic_Yorris",
                            "optic_DMS",
                            "optic_DMS_weathered_F",
                            "optic_Arco_blk_F",
                            "optic_Aco",
                            "optic_ACO_grn",
                            "optic_ACO_grn_smg",
                            "optic_ACO_smg",
                            "optic_Arco_blk_F",
                            "optic_Holosight_blk_F",
                            "optic_Holosight_smg_blk_F",
                            "optic_MRCO",
                            "optic_KHS_blk",
                            "optic_Hamr",
                            "optic_SOS",
                            "optic_MRD_black",
                            "optic_LRPS",
                            "optic_Nightstalker",
                            "optic_NVS",
                            "optic_ico_01_black_f",
                            "optic_ERCO_blk_F",
                            "optic_tws",
                            "optic_tws_mg",
                            "optic_AMS",
                            // ACE Scopes
                            "ACE_optic_Arco_2D",
                            "ACE_optic_Arco_PIP",
                            "ACE_optic_LRPS_2D",
                            "ACE_optic_LRPS_PIP",
                            "ACE_optic_Hamr_2D",
                            "ACE_optic_Hamr_PIP",
                            "ACE_optic_SOS_2D",
                            "ACE_optic_SOS_PIP",
                            "ACE_optic_MRCO_2D",
						};
					};
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[]=
                {
                    // Muzzle Masterlist
                    // OPTRE Muzzle Attachments
                    //"OPTRE_M12_Supressor",
                    "OPTRE_M393_Suppressor",
                    //"OPTRE_M7_silencer",
                    //"OPTRE_MA37KSuppressor",
                    //"OPTRE_SRS99D_Suppressor",
                    "OPTRE_MA5Suppressor",
                    // OPTRE Pistol Muzzle Attachments
                    "OPTRE_M6_Silencer",
                    "OPTRE_M6C_compensator",
                    // A3 - Spectrum Device Muzzle Attachments
                    //"muzzle_antenna_02_f",
                    //"muzzle_antenna_03_f",
                    //"muzzle_antenna_01_f",
                    // A3 Muzzle Attachments
                    //"muzzle_snds_338_black", // 338 Marksman
                    //"muzzle_snds_acp", // .45ACP
                   //"muzzle_snds_M", // 556
                    //"muzzle_snds_570", // 5.7
                    //"muzzle_snds_H", // 6.5
                    "muzzle_snds_B", // 762
                    "muzzle_snds_L", // 9mm
                    "muzzle_snds_93mmg", // 9.3mm Marksman
                    "muzzle_snds_H_MG_blk_F", // Apex
                    "muzzle_snds_58_blk_F", // 5.8 Apex
                    "muzzle_snds_65_blk_F", // 6.5 Apex
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[]=
                {
                    // Rail Attachment Masterlist
                    //ACE Rails
                    "ACE_acc_pointer_green",
                    "acc_pointer_IR",
                    "acc_flaslight_smg_01",
                    "acc_flaslight",
                    //OPTRE Rails
                    "OPTRE_M12_Laser",
                    "OPTRE_M45_Flaslight",
                    "OPTRE_M45_Flaslight_red",
                    "OPTRE_M7_Flaslight",
                    "OPTRE_M7_Laser",
                    "OPTRE_BMR_Laser",
                    "OPTRE_BMR_Flaslight",
                    "OPTRE_DMR_Light",
                    // OPTRE Pistol Rails
                    "OPTRE_M6C_Laser",
                    "OPTRE_M6D_Flaslight",
                    "OPTRE_M6G_Flaslight",
                    // A3 Rails
                    "acc_flaslight_pistol",
                    "acc_esd_01_flaslight",
                };
            };
        };
        modes[]=    { "Single", "Burst",    "FullAuto",    };  
        bullet1[]=
        {
            "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi.ogg", 1, 2000
        };
        soundBullet[]=
        {
            "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi_Suppressed.ogg", 1, 2000
        };
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
                    "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi.ogg", 1, 2000
                };
                soundBegin[]=   
                {
                    "begin1", 0.1,
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                begin1[]=
                {
                    "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi_Suppressed.ogg", 1, 2000
                };
                soundBegin[]=   
                {
                    "begin1", 0.1,
                };
            };        
        };
        class Burst: Mode_Burst
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
                    "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi.ogg", 1, 2000
                };
                soundBegin[]=   
                {
                    "begin1", 0.1,
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                begin1[]=
                {
                    "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi_Suppressed.ogg", 1, 2000
                };
                soundBegin[]=   
                {
                    "begin1", 0.1,
                };
            };        
            soundBurst= false;
            burst   =   5;
            reloadTime= 0.045;
        };
        class FullAuto: Mode_FullAuto
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
                    "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi.ogg", 1, 2000
                };
                soundBegin[]=   
                {
                    "begin1", 0.1,
                };
            };
            class SilencedSound: BaseSoundModeType
            {
                begin1[]=
                {
                    "\105th_Weapons\Confetti_Maker\sounds\DMR_Semi_Suppressed.ogg", 1, 2000
                };
                soundBegin[]=   
                {
                    "begin1", 0.1,
                };
            };        
            soundBurst= false;
            reloadTime= 0.15;
            };
        };
    };
};
*/