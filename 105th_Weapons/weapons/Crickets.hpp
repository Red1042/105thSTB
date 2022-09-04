/* Cricket Penetrator */
class OPTRE_M48_PAW
{
    class WeaponSlotsInfo
    {
        class CowsSlot;
    };
};


/* 105th Cricket Penetrator */

class v105_Cricket_PEN: OPTRE_M48_PAW
{
    dlc = "105th";
    author = "S-4 Logistics";
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
    class EventHandlers {fired = "_this call CBA_fnc_firedDisposable"};
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass=85;
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "optic_dms"
            };
        };
    };
};

class v105_Cricket_PEN_Loaded: v105_Cricket_PENMe
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
    baseWeapon = "v105_Cricket_PEN_Used";
    displayName = "Used M48B Tube";
    weaponPoolAvailable = 0;
};


/* Cricket High Explosive */

class v105_Cricket_HE: v105_Cricket_PEN
{
    baseWeapon= "v105_Cricket_HE";
    displayName= "[105th] M48B 'High Explosive' PAW";
    magazines[]= {"v105_Cricket_1rnd_HE", "OPTRE_1Rnd_50x137_HE"};
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
    baseWeapon = "v105_Cricket_HE_Used";
    displayName = "Used M48B Tube";
    weaponPoolAvailable = 0;
};