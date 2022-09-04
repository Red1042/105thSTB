/* v105 M7 */

class OPTRE_M7
{
    class WeaponSlotsInfo
    {
        class MuzzleSlot;
        class CowsSlot;
    };
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
};