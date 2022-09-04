/* v105 MA37K */

class OPTRE_MA37K
{
    class WeaponSlotsInfo
    {
        class MuzzleSlot;
        class CowsSlot;
    };
    class Single;
    class Mode_FullAuto;
};

class v105_MA37K: OPTRE_MA37K
{
    displayName= "[105th] MA37K Carbine";
    baseWeapon= "v105_MA37K";
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        class MuzzleSlot: MuzzleSlot
        {
            compatibleitems[]=
            {
                "optre_ma37ksuppressor",
                "optre_ma5suppressor"
            };
        };
        class CowsSlot: CowsSlot
        {
            compatibleitems[]=
            {
                "OPTRE_BR55HB_Scope",
                "OPTRE_BR55HB_Scope_v2",
                "optre_m393_eotech",
                "OPTRE_M393_EOTECH_v2",
                "optre_m392_scope",
                "OPTRE_M392_Scope_v2",
                "optre_m7_sight"
            };
        };
    };
    class Single: Single
    {
        reloadTime= 0.125;
    };
    class single_medium_optics1: Single
    {
        reloadTime= 0.125;
    };
    class single_far_optics2: single_medium_optics1
    {
        reloadTime= 0.125;
    };
    class FullAuto: Mode_FullAuto
    {
        reloadTime= 0.125;
    };
    class fullauto_medium: FullAuto
    {
        reloadTime= 0.125;
    };
};