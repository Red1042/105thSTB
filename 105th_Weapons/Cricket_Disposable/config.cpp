class CfgPatches
{
    class v105_Weapons
    {
        author= "105th | S4 Logistics";
        url="https://discord.gg/105thstb-arma";
        units[]={};
        weapons[]=
        {
			"v105_Cricket_PEN",
            "v105_Cricket_PEN_Loaded", 
            "v105_Cricket_PEN_Used",
            "v105_Cricket_HE",
            "v105_Cricket_HE_Loaded", 
            "v105_Cricket_HE_Used"
        };
        magazines[]={};
        ammo[]={};
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
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class OPTRE_M48_PAW;
class CfgWeapons
{
    class v105_Cricket_PEN: OPTRE_M48_PAW
    {
        dlc = "105th";
        author = "N-4 Logistics";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "v105_Cricket_PEN";
        displayName = "[105th] M48B 'Penetrator' PAW";
        descriptionShort= "Anti-Tank Disposable Tube";
        initSpeed=80;
        model="\V_SO_Weapons\data\M48\M48B_Cricket";
        picture="\V_SO_Weapons\data\M48\M48B_Cricket";
        magazineWell[]={};
        magazines[]= {"v105_Cricket_1rnd_PEN", "OPTRE_1Rnd_50x137_PEN"};
        magazineReloadTime= 1;
        reloadMagazineSound[]= {"", 1, 1};
        class EventHandlers 
        {fired = "_this call CBA_fnc_firedDisposable"};
        class WeaponSlotsInfo
        {
            mass=85;
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
                {
                    "optic_arco_ak_blk_f",
                    "optic_dms",
                    "optic_aco_grn",
                    "optic_aco",
                    "optic_arco_blk_f",
                    "optic_holosight_blk_f",
                    "optic_mrco",
                    "optic_ams",
                    "optic_yorris", 
                };
            };
        };
        class PointerSlot: PointerSlot
        {
            compatibleitems[]=
            {
                "acc_pointer_ir",
                "ace_acc_pointer_green",
                "acc_flashlight",
                "OPTRE_BMR_Laser"
            };
        };
    };
    class v105_Cricket_PEN_Loaded: v105_Cricket_PEN
    {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "v105_Cricket_PEN_Loaded";
        magazines[]= {"v105_Cricket_1rnd_PEN", "OPTRE_1Rnd_50x137_PEN"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90;
        };
    };
    class v105_Cricket_PEN_Used: v105_Cricket_PEN
    {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "v105_Cricket_PEN_Used";
        displayName = "Used M48B Tube";
        weaponPoolAvailable = 0;
    };
    class v105_Cricket_HE: OPTRE_M48_PAW
    {
        dlc= "105th";
        author= "N-4 Logistics";
        scope= 1;
        scopeArsenal= 1;
        baseWeapon= "v105_Cricket_HE";
        displayName= "[105th] M48B 'High Explosive' PAW";
        descriptionShort= "Anti-Personnel Disposable Tube";
        initSpeed=  80;
        model=  "\V_SO_Weapons\data\M48\M48B_Cricket";
        picture=    "\V_SO_Weapons\data\M48\M48B_Cricket";
        magazines[]= {"v105_Cricket_1rnd_HE", "OPTRE_1Rnd_50x137_HE"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[]= {"", 1, 1};
        class EventHandlers 
        {fired = "_this call CBA_fnc_firedDisposable"};
        class WeaponSlotsInfo
        {
            mass=85;
            class CowsSlot: CowsSlot
            {
                compatibleitems[]=
                {
                    "optic_arco_ak_blk_f",
                    "optic_dms",
                    "optic_aco_grn",
                    "optic_aco",
                    "optic_arco_blk_f",
                    "optic_holosight_blk_f",
                    "optic_mrco",
                    "optic_ams",
                    "optic_yorris",
                };
            };
        };
        class PointerSlot: PointerSlot
        {
            compatibleitems[]=
            {
                "acc_pointer_ir",
                "ace_acc_pointer_green",
                "acc_flashlight",
                "OPTRE_BMR_Laser"
            };
        };
    };
    class v105_Cricket_HE_Loaded: v105_Cricket_HE
    {
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "v105_Cricket_HE_Loaded";
        magazines[]= {"v105_Cricket_1rnd_HE", "OPTRE_1Rnd_50x137_HE"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90;
        };
    };
    class v105_Cricket_HE_Used: v105_Cricket_HE
    {
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "v105_Cricket_HE_Used";
        displayName = "Used M48B Tube";
        weaponPoolAvailable = 0;
    };
};
class CBA_DisposableLaunchers
{
    v105_Cricket_PEN[]=
    {
        "v105_Cricket_PEN_Loaded", 
        "v105_Cricket_PEN_Used",
    };
    v105_Cricket_HE[]=
    {
        "v105_Cricket_HE_Loaded",
        "v105_Cricket_HE_Used",
    };
};