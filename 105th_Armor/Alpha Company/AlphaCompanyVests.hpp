// Class name convention as:  ACo_InitialLastName_M52A_MAR
// Example:  ACo_JHoward_M52A_MAR
// Vest , Reverse, Legs

class v105_ACo_M52A_Rifleman: VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="S-4 Logistics";
	displayName="[105th] M52A Rifleman";
    hiddenSelectionsTextures[]=
    {
        "LM_OPCAN3.0\BLU\UNSC\V\M52A_WDL_2.paa",
        "LM_OPCAN3.0\BLU\UNSC\V\M52A_WDL.paa",
        "LM_OPCAN3.0\BLU\UNSC\V\M52A_WDL_3.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
        "LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
        "LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat"
    };
    class XtdGearInfo{};
    class ItemInfo: VestItem
    {
        mass=75;
        containerClass="Supply250";
        uniformModel="\OPTRE_UNSC_Units\Army\armor";
        class HitpointsProtectionInfo
        {
            class Abdomen {armor=40; hitpointName="HitAbdomen"; passThrough=0.1;};
            class Arms:  Abdomen {hitpointName="HitArms";};
            class Body:  Abdomen {hitpointName="HitBody";};
            class Chest:  Abdomen {hitpointName="HitChest";};
            class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
            class Hands:  Abdomen {hitpointName="HitHands";};
            class Legs:  Abdomen {hitpointName="HitLegs";};
            class Neck:  Abdomen {hitpointName="HitNeck";};
        };
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        //	"A_KneesLeft",
        //	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	"A_ShinArmorLeft",
        //	"A_ShinArmorRight",
        	"A_TacPad",
        //	"A_ThighArmorLeft",
        //	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        	"AS_LargeLeft",
            "AS_LargeRight",
        //    "AS_MediumLeft",
        //    "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
        	"AS_SmallRight",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        	"AP_BR",
            "AP_Pack",
        	"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
        	"AP_Thigh",
            "AP_Frag",
        //	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

class v105_ACo_M52A_Light: v105_ACo_M52A_Rifleman
{
	displayName="[105th] M52A Light";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        	"A_KneesLeft",
        	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        	"A_ShinArmorLeft",
        	"A_ShinArmorRight",
        	"A_TacPad",
        	"A_ThighArmorLeft",
        	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        	"AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
        	"AS_SmallRight",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        	"AP_BR",
            "AP_Pack",
        	"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
        	"AP_Thigh",
            "AP_Frag",
        	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

class v105_ACo_M52A_Breacher: v105_ACo_M52A_Rifleman
{
	displayName="[105th] M52A Breacher";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        //	"A_KneesLeft",
        //	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	"A_ShinArmorLeft",
        //	"A_ShinArmorRight",
        	"A_TacPad",
        	"A_ThighArmorLeft",
        	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        	"AS_LargeLeft",
        //  "AS_LargeRight",
        //  "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
        	"AS_SmallRight",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        //	"AP_BR",
            "AP_Pack",
        	"AP_Pistol",
            "AP_Rounds",
        //  "AP_SG",
            "AP_SMG",
            "AP_Sniper",
        	"AP_Thigh",
            "AP_Frag",
        //	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

class v105_ACo_M52A_RTO: v105_ACo_M52A_Rifleman
{
	displayName="[105th] M52A RTO";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        //	"A_KneesLeft",
        //	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	"A_ShinArmorLeft",
        //	"A_ShinArmorRight",
        	"A_TacPad",
        	"A_ThighArmorLeft",
        	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        	"AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
        //  "AS_SmallLeft",
        //	"AS_SmallRight",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        	"AP_BR",
            "AP_Pack",
        	"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
        	"AP_Thigh",
            "AP_Frag",
        //	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

class v105_ACo_M52A_Marksman: v105_ACo_M52A_Rifleman
{
	displayName="[105th] M52A Marksman";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        //	"A_KneesLeft",
        //	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	"A_ShinArmorLeft",
        //	"A_ShinArmorRight",
        	"A_TacPad",
        	"A_ThighArmorLeft",
        	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        	"AS_LargeLeft",
            "AS_LargeRight",
          "AS_MediumLeft",
        //  "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
       //   "AS_SmallLeft",
        	"AS_SmallRight",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        	"AP_BR",
            "AP_Pack",
        	"AP_Pistol",
        //  "AP_Rounds",
            "AP_SG",
            "AP_SMG",
          "AP_Sniper",
        	"AP_Thigh",
            "AP_Frag",
        //	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
          "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

class v105_ACo_M52A_Grenadier: v105_ACo_M52A_Rifleman
{
	displayName="[105th] M52A Grenadier";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        //	"A_KneesLeft",
        //	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	"A_ShinArmorLeft",
        //	"A_ShinArmorRight",
        	"A_TacPad",
        	"A_ThighArmorLeft",
        	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        	"AS_LargeLeft",
            "AS_LargeRight",
        //  "AS_MediumLeft",
        //  "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
        	"AS_SmallRight",
            "AP_Canteen",
        //    "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        	"AP_BR",
            "AP_Pack",
        	"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
        	"AP_Thigh",
            "AP_Frag",
        	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

/* Everything below here will be disabled on the date 27/10/2022 */
class ACo_GSturmischer_M52A_MAR: VES_M52A_MAR_Rifleman_B
{
	dlc="105th";
	author="N-4 Logistics";
	displayName="[105th] M52A (Stürmischer)";
	hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","105th_Armor\Alpha Company\data\Chests\GStu_M52A_MAR","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
	hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};

    class XtdGearInfo
    {
        model="AComp_Custom_Vests";
        owner="Stürmischer";
    };

	class ItemInfo:  VestItem
    {
        mass=75;
        containerClass="Supply250";
        uniformModel="\OPTRE_UNSC_Units\Army\armor";
        class HitpointsProtectionInfo
        {
            class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
            class Arms:  Abdomen {hitpointName="HitArms";};
            class Body:  Abdomen {hitpointName="HitBody";};
            class Chest:  Abdomen {hitpointName="HitChest";};
            class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
            class Hands:  Abdomen {hitpointName="HitHands";};
            class Legs:  Abdomen {hitpointName="HitLegs";};
            class Neck:  Abdomen {hitpointName="HitNeck";};
        };
        hiddenSelections[]= // Comment out what you *want* to see
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
        //	"A_ChestArmor",
        //	"A_KneesLeft",
        //	"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	"A_ShinArmorLeft",
        //	"A_ShinArmorRight",
        //	"A_TacPad",
        //	"A_ThighArmorLeft",
        //	"A_ThighArmorRight",
        //	"AS_BaseLeft",
        //	"AS_BaseRight",
        //	"AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
        //	"AS_SmallRight",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
        //	"AP_BR",
            "AP_Pack",
        //	"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
        //	"AP_Thigh",
            "AP_Frag",
        //	"AP_Smoke",
            "APO_AR",
            "APO_BR",
        //	"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};
class ACo_LSkynyrd_M52A_MAR: VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (Skynyrd)";
    hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","105th_Armor\Alpha Company\data\Chests\LSky_M52A_MAR","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
    hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};

    class XtdGearInfo
    {
        model="AComp_Custom_Vests";
        owner="Skynyrd";
    };

    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //	"A_ChestArmor",
            //	"A_KneesLeft",
            //	"A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_ODST",
            //	"A_ShinArmorLeft",
            //	"A_ShinArmorRight",
                "A_TacPad",
            //	"A_ThighArmorLeft",
            //	"A_ThighArmorRight",
            //	"AS_BaseLeft",
            //	"AS_BaseRight",
                "AS_LargeLeft",
            //	"AS_LargeRight",
            //	"AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //	"AP_Knife",
                "AP_MGThigh",
                "AP_AR",
            //	"AP_BR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
            //	"AP_Frag",
            //	"AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };

        };
};
class ACo_QNest_M52A_MAR: VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (Nest)";
    hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
        "V_FZ_Armor\Data\Vests\V_M52_URB_CO",
        "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
        "optre_unsc_units\army\data\ghillie_woodland_co",
        "optre_unsc_units\army\data\odst_armor_co"};

    class XtdGearInfo
    {
        model="AComp_Custom_Vests";
        owner="Nest";
    };

    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //	"A_ChestArmor",
            //	"A_KneesLeft",
            //	"A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_ODST",
            //	"A_ShinArmorLeft",
            //	"A_ShinArmorRight",
                "A_TacPad",
            //	"A_ThighArmorLeft",
            //	"A_ThighArmorRight",
            //	"AS_BaseLeft",
            //	"AS_BaseRight",
            //	"AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
            //	"AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //	"AP_Canteen",
            //	"AP_GL",
            //	"AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
                "AP_Pistol",
            //	"AP_Rounds",
            //	"AP_SG",
                "AP_SMG",
            //    "AP_Sniper",
                "AP_Thigh",
            //	"AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };

        };
};
/*
class ACo_DMurk_M52A_MAR: VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (Murk)";
    hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};

    class XtdGearInfo
    {
        model="AComp_Custom_Vests";
        owner="Murk";
    };

    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //	"A_ChestArmor",
            //	"A_KneesLeft",
            //	"A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //	"A_ODST",
            //	"A_ShinArmorLeft",
            //	"A_ShinArmorRight",
                "A_TacPad",
            //	"A_ThighArmorLeft",
            //	"A_ThighArmorRight",
            //	"AS_BaseLeft",
            //	"AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
            //	"AS_MediumLeft",
            //	"AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //	"AP_Canteen",
            //	"AP_GL",
            //	"AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
            //	"APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };

        };
};
*/
class ACo_MBrady_M52A_MAR : VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (Brady)";
    hiddenSelectionsTextures[]={
        "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
        "105th_Armor\Alpha Company\data\Chests\MBra_M52A_R_MAR_CO",
        "V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
        "optre_unsc_units\army\data\ghillie_woodland_co",
        "optre_unsc_units\army\data\odst_armor_co"
    };

    class XtdGearInfo
    {
        model="AComp_Custom_Vests";
        owner="Brady";
    };

    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
        //	  "A_TacPad",
        //    "AS_MediumLeft",
        //    "AS_MediumRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_MGThigh",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};

/*
class ACo_BSmith_M52A_MAR: VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (Smith)";
    hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //	"A_ChestArmor",
            //	"A_KneesLeft",
            //	"A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_ODST",
            //	"A_ShinArmorLeft",
            //	"A_ShinArmorRight",
            //	"A_TacPad",
            //	"A_ThighArmorLeft",
            //	"A_ThighArmorRight",
            //	"AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
            //	"AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
            //	"AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
            //	"AP_GL",
                "AP_Knife",
                "AP_MGThigh",
            //	"AP_AR",
                "AP_BR",
            //	"AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
            //	"APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };

        };
};
*/

/*
class ACo_CMcDaniel_M52A_MAR: VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (McDaniel)";
    hiddenSelectionsTextures[]={
        "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
        "V_FZ_Armor\Data\Vests\V_M52_URB_CO",
        "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
        "optre_unsc_units\army\data\ghillie_woodland_co",
        "optre_unsc_units\army\data\odst_armor_co"
    };
    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //	"A_ChestArmor",
            //	"A_KneesLeft",
            //	"A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_ODST",
            //	"A_ShinArmorLeft",
            //	"A_ShinArmorRight",
            //	"A_TacPad",
            //	"A_ThighArmorLeft",
            //	"A_ThighArmorRight",
            //	"AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
            //	"AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
            //	"AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
            //	"AP_GL",
                "AP_Knife",
                "AP_MGThigh",
            //	"AP_AR",
                "AP_BR",
            //	"AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
            //	"APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };

        };
};
*/

class ACo_KMidreus_M52A_MAR : VES_M52A_MAR_Rifleman_B
{
    dlc="105th";
    author="N-4 Logistics";
    displayName="[105th] M52A (Midreus)";
    hiddenSelectionsTextures[] = {
        "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
        "V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
        "V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
        "optre_unsc_units\army\data\ghillie_woodland_co",
        "optre_unsc_units\army\data\odst_armor_co"
    };

    class XtdGearInfo
    {
        model="AComp_Custom_Vests";
        owner="Midreus";
    };

    class ItemInfo:  VestItem
        {
            mass=75;
            containerClass="Supply250";
            uniformModel="\OPTRE_UNSC_Units\Army\armor";
            class HitpointsProtectionInfo
            {
                class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
                class Arms:  Abdomen {hitpointName="HitArms";};
                class Body:  Abdomen {hitpointName="HitBody";};
                class Chest:  Abdomen {hitpointName="HitChest";};
                class Diaphragm:  Abdomen {hitpointName="HitDiaphragm";};
                class Hands:  Abdomen {hitpointName="HitHands";};
                class Legs:  Abdomen {hitpointName="HitLegs";};
                class Neck:  Abdomen {hitpointName="HitNeck";};
            };
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
        //    "AS_MediumLeft",
            "AS_MediumRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
        //	"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_MGThigh",
            "AP_BR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
    };
};