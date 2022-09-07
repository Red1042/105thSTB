/* v105 MA37K */

class arifle_Mk20_F;
class OPTRE_MA37K: arifle_Mk20_F
{
    class WeaponSlotsInfo;
    class Single;
    class single_medium_optics1;
    class single_far_optics2;
    class FullAuto;
    class fullauto_medium;
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
                //"OPTRE_BR55HB_Scope_v2", (Disabled due to it's zoom optic being broken)
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
        reloadTime= 0.11;
    };
    class single_medium_optics1: single_medium_optics1
    {
        reloadTime= 0.11;
    };
    class single_far_optics2: single_far_optics2
    {
        reloadTime= 0.11;
    };
    class FullAuto: FullAuto
    {
        reloadTime= 0.11;
    };
    class fullauto_medium: fullauto_medium
    {
        reloadTime= 0.11;
    };
};