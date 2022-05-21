// Class name convention as: ACo_InitialLastName_M52A_MAR
// Example: VC497_JHoward_M52A_AVI
// Vest , Reverse, Legs
class VC497_GSturmischer_M52A_AVI: VES_M52A_MAR_Rifleman_B
{
	dlc="105th";
	author="N-4 Logistics";
	displayName="[VC-497] M52A (Stürmischer)";
	hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","105th_Armor\VC497\data\Chests\GStu_M52A_AIR","105th_Armor\VC497\data\Chests\GStu_M52_L_AIR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
	hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};

	class XtdGearInfo
    {
        model="VC497_Custom_Vests";
        owner="Stürmischer";
    };

	class ItemInfo: VestItem
	{
	    mass=75;
	    containerClass="Supply250";
	    uniformModel="\OPTRE_UNSC_Units\Army\armor";
	    class HitpointsProtectionInfo
	    {
	        class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
			class Arms: Abdomen {hitpointName="HitArms";};
			class Body: Abdomen {hitpointName="HitBody";};
			class Chest: Abdomen {hitpointName="HitChest";};
			class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
			class Hands: Abdomen {hitpointName="HitHands";};
			class Legs: Abdomen {hitpointName="HitLegs";};
			class Neck: Abdomen {hitpointName="HitNeck";};
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
	