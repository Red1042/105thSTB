// Class name convention as: ACo_InitialLastName_M52A_MAR
// Example: ACo_JHoward_M52A_MAR
// Vest , Reverse, Legs
class ACo_GSturmischer_M52A_MAR:VES_M52A_MAR_Rifleman_B
{
	dlc="105th";
	author="N-4 Logistics";
	displayName="[105th] M52A (Stürmischer)";
	hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","105th_Armor\Alpha Company\data\Chests\GStu_M52A_MAR","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
	hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
		
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
	/*	hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
									"105th_Armor\Alpha Company\data\Chests\GStu_M52A_MAR",
										"105th_Armor\Alpha Company\data\Chests\GStu_M52A_MAR","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};*/
		};
	};
	class ACo_LSkynyrd_M52A_MAR:VES_M52A_MAR_Rifleman_C
	{
		dlc="105th";
		author="N-4 Logistics";
		displayName="[105th] M52A (Skynyrd)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","105th_Armor\Alpha Company\data\Chests\LSky_M52A_MAR","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
		
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
	class ACo_QNest_M52A_MAR:VES_M52A_MAR_Rifleman_C
	{
		dlc="105th";
		author="N-4 Logistics";
		displayName="[105th] M52A (Nest)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"};
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
					"AP_Sniper",
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
	class ACo_DMurk_M52A_MAR:VES_M52A_MAR_Rifleman_C
	{
		dlc="105th";
		author="N-4 Logistics";
		displayName="[105th] M52A (Murk)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
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
	class ACo_MBrady_M52A_MAR:VES_M52A_MAR_Rifleman_C
	{
		dlc="105th";
		author="N-4 Logistics";
		displayName="[105th] M52A (Brady)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
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
				//	"A_KneesMarLeft",
					"A_KneesMarRight",
					"A_ODST",
				//	"A_ShinArmorLeft",
				//	"A_ShinArmorRight",
				//	"A_TacPad",
				//	"A_ThighArmorLeft",
				//	"A_ThighArmorRight",
				//	"AS_BaseLeft",
					"AS_BaseRight",
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
				//	"AP_Thigh",
				//	"AP_Frag",
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
	class ACo_BSmith_M52A_MAR:VES_M52A_MAR_Rifleman_C
	{
		dlc="105th";
		author="N-4 Logistics";
		displayName="[105th] M52A (Smith)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
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
	class ACo_CMcDaniel_M52A_MAR:VES_M52A_MAR_Rifleman_C
	{
		dlc="105th";
		author="N-4 Logistics";
		displayName="[105th] M52A (McDaniel)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","105th_Armor\Alpha Company\data\Chests\GStu_M52A_MAR","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
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
	
