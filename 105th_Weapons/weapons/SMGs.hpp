/* v105 M7 */

class OPTRE_SubMachineGun_Base;
class OPTRE_M7: OPTRE_SubMachineGun_Base
{
    class WeaponSlotsInfo;
    class FullAuto;
    class Single;
    class close;
    class short;
    class medium;
    class far;
};

class v105_M7: OPTRE_M7
{
    displayName= "[105th] M7X Caseless SMG";
    baseWeapon= "v105_M7";
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
                "optre_m7_sight"
            };
        };
    };
    class Single: Single
    {
        reloadTime= 0.055;
    };
    class FullAuto: FullAuto
    {
        reloadTime= 0.055;
    };
    class close: close
    {
        reloadTime= 0.055;
    };
    class short: short
    {
        reloadTime= 0.055;
    };
    class medium: medium
    {
        reloadTime= 0.055;
    };
    class far: far
    {
        reloadTime= 0.055;
    };
};