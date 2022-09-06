//Changelog
// Updated pathin 25/10/2020
// Updated Supply from 100 to 250 27/10/2020
// Replaced odst_tempest_upper with new variants. 01/11/2020
// Added Barkley's vest dump 12/29/2021 -CV
//
//Chests
	class ODST_Light: OPTRE_UNSC_M52D_Armor_Light
	{
		author="S-4 Logistics";
		displayName="[ODST] M52D Light";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_personnel_upper_white.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Light";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
                "AS_BaseLeft",
                "AS_BaseRight",
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
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
            //    "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
            //    "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };			
		};
	};
	class ODST_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Sniper";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_personnel_upper_white.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Sniper";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
            //    "AS_ODSTSniperLeft",
            //    "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
            //    "APO_Sniper",
                "CustomKit_Scorch"
            };						
		};
	};
	class ODST_Marksman_Lead: OPTRE_UNSC_M52D_Armor_Sniper
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Marksman Lead";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Marksman_Lead_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Marksman";
            lead="Yes";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
            //    "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
            //    "APO_Sniper",
                "CustomKit_Scorch"
            };						
		};
	};
	class ODST_Marksman: OPTRE_UNSC_M52D_Armor_Sniper
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Marksman";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Marksman_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Marksman";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
            //    "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
            //    "APO_Sniper",
                "CustomKit_Scorch"
            };						
		};
	};
	class ODST_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D EOD Lead";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_EOD_Lead_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="EOD";
            lead="Yes";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
            //    "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};
class ODST_EOD: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D EOD";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_EOD_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="EOD";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
            //    "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};
class ODST_Heavy: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Heavy";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Heavy_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Heavy";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
            //    "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};
class ODST_Heavy_Lead: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Heavy Lead";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Heavy_Lead_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Heavy";
            lead="Yes";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
            //    "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};
	class ODST_Rifleman_Red: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Lead";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Lead_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Rifleman";
            lead="Yes";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
            //    "AS_ODSTRight",
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
            //    "AP_Frag",
            //    "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
            //    "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};
	class ODST_SOO: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Officer";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_SOO_Lead_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="SOO";
            lead="Yes";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
            //    "AS_ODSTRight",
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
            //    "AP_Frag",
            //    "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
            //    "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};	class ODST_JTAC_Lead: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D JTAC Lead";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_JTAC_Lead_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="JTAC";
            lead="Yes";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
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
            //    "AP_Frag",
            //    "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
            //    "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	class ODST_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Rifleman";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Rifleman";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
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
            //    "AP_Frag",
                "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};
	class ODST_Scout: OPTRE_UNSC_M52D_Armor_Scout
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Scout";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_personnel_upper_white.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="Scout";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
                "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
                "AS_BaseLeft",
                "AS_BaseRight",
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
            //    "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
            //    "AP_MGThigh",
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
            //    "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	class ODST_Corpsman: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D SARC";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_SARC_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Vests";
            billet="SARC";
            lead="No";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
            //    "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};

	/*
	    End of Default Armours
	    Start of Custom Armours
	*/

	class ODST_Rifleman_Barkley: OPTRE_UNSC_M52D_Armor
	{
		author="Barkley";
		displayName="[ODST] M52D (Barkley)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\BBar_M52D_Lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\BBar_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Barkley";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //      "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
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
            //    "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
            //    "CustomKit_Scorch"
            };
		};
	};

	class ODST_Rifleman_Canley: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Canley)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\RCan_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Canley";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
            //    "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
            //    "CustomKit_Scorch"
            };
		};
	};

	class BCo_AVirus_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Virus)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_teamleader_upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Virus";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
            //    "A_KneesMarLeft",
            //    "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //   "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
            //   "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};

	/*
	class BCo_SOveture_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Overture)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_teamleader_upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Overture";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
                "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
            //    "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
            //    "AS_ODSTSniperLeft",
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
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
            //    "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	*/

	class BCo_CMcDaniel_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (McDaniel)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_teamleader_upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="McDaniel";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
                "A_ThighArmorLeft",
                "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
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
            //    "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
            //    "APO_Knife",
            //    "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	

	class BCo_AHelms_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		scope=1;
		scopeArsenal=1;
		author="N-4 Logistics";
		displayName="[ODST] M52D (Helms)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_teamleader_upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Helms";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
            //    "A_KneesMarLeft",
            //    "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //   "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
            //   "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};

    /*
	class BCo_CHannibal_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="N-4 Logistics";
		displayName="[ODST] M52D (Hannibal)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_teamleader_upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Hannibal";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
            //    "A_KneesMarLeft",
            //    "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
                "A_ThighArmorLeft",
                "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
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
            //    "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
            //    "APO_AR",
                "APO_BR",
            //    "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};

	*/
	
	class BCo_CVarner_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="N-4 Logistics";
		displayName="[ODST] M52D (Varner)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\CVar_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Varner";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
            {
               "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //   "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
                "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
            //    "APO_Knife",
            //    "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	
	class BCo_MSevarach_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="N-4 Logistics";
		displayName="[ODST] M52D (Sevarach)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\MSev_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Sevarach";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
                "AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //    "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
                "AP_Pistol",
            //    "AP_Rounds",
                "AP_SG",
            //    "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
            //    "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	class BCo_ENungester_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Nungester)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_personnel_upper_white.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Nungester";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
            //    "A_KneesMarLeft",
            //    "A_KneesMarRight",
            //    "A_ODST",
            //  "A_ShinArmorLeft",
            //  "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
            //    "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
            //    "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
            //    "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };			
		};
	};

	class BCo_BSmith_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Smith)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\tempest_personnel_upper_white.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Smith";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
                "A_KneesLeft",
                "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
            //    "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
            //    "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };			
		};
	};

	class BCo_Bman_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Bman)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\ABma_M52D_Lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\ABma_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Bman";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
            //  "AS_ODSTLeft",
            //  "AS_ODSTRight",
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
            //  "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
            //  "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
            //  "APO_Knife",
            //  "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };	
		};
	};

	class ODST_GCruz_M52D_ODST: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Cruz)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\GCru_M52D_Lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\GCru_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Cruz";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
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
            //    "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
            //    "CustomKit_Scorch"
            };
		};
	};

    class ODST_JNos_M52D_ODST: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        author="N-4 Logistics";
    	displayName="[ODST] M52D (Nostra)";
    	hiddenSelectionsTextures[]=
    	{
		    "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\JNos_M52D_Upper.paa"
    	};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Nostra";
        };
    	class ItemInfo: VestItem
    	{
    	    mass=80;
    		containerClass="Supply250";
    		uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
    		vestType="Rebreather";
    		class HitpointsProtectionInfo
    		{
    			class Abdomen
    			{
    				armor=45;
    				hitpointName="HitAbdomen";
    				passThrough=0.1;
    			};
    			class Arms: Abdomen
    			{
    				hitpointName="HitArms";
    			};
    			class Body: Abdomen
    			{
    				hitpointName="HitBody";
    			};
    			class Chest: Abdomen
    			{
    				hitpointName="HitChest";
    			};
    			class Diaphragm: Abdomen
    			{
    				hitpointName="HitDiaphragm";
    			};
    			class Hands: Abdomen
    			{
    				hitpointName="HitHands";
    			};
    			class Legs: Abdomen
    			{
    				hitpointName="HitLegs";
    			};
    			class Neck: Abdomen
    			{
    				hitpointName="HitNeck";
    			};
    			class Pelvis: Abdomen
    			{
    				hitpointName="HitPelvis";
    			};
    		};
    		hiddenSelections[]=
    		{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //   "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
            //    "A_KneesMarLeft",
            //    "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
            //    "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
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
            //    "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
            //    "APO_SMG",
                "APO_Sniper",
            //    "CustomKit_Scorch"
            };
    	};
    };

	class ODST_CDub_M52D_ODST: OPTRE_UNSC_M52D_Armor_Sniper
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Dubbo)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\CDub_M52D_Upper.paa"
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Dubbo";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
            //    "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
            //    "AP_Pistol",
            //    "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
            //    "APO_Knife",
            //    "APO_SMG",
            //    "APO_Sniper",
                "CustomKit_Scorch"
            };
		};
	};
	class ODST_CBar_M52D_ODST: OPTRE_UNSC_M52D_Armor_Demolitions
    	{
    		author="N-4 Logistics";
    		displayName="[ODST] M52D (Barrier)";
    		hiddenSelectionsTextures[]=
    		{
    			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
    			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
    			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
    			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
    			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_CSO_Heavy_Upper.paa"
    		};
            class XtdGearInfo
            {
                model="BComp_Custom_Vests";
                owner="Barrier";
            };
    		class ItemInfo: VestItem
    		{
    			mass=80;
    			containerClass="Supply250";
    			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
    			vestType="Rebreather";
    			class HitpointsProtectionInfo
    			{
    				class Abdomen
    				{
    					armor=45;
    					hitpointName="HitAbdomen";
    					passThrough=0.1;
    				};
    				class Arms: Abdomen
    				{
    					hitpointName="HitArms";
    				};
    				class Body: Abdomen
    				{
    					hitpointName="HitBody";
    				};
    				class Chest: Abdomen
    				{
    					hitpointName="HitChest";
    				};
    				class Diaphragm: Abdomen
    				{
    					hitpointName="HitDiaphragm";
    				};
    				class Hands: Abdomen
    				{
    					hitpointName="HitHands";
    				};
    				class Legs: Abdomen
    				{
    					hitpointName="HitLegs";
    				};
    				class Neck: Abdomen
    				{
    					hitpointName="HitNeck";
    				};
    				class Pelvis: Abdomen
    				{
    					hitpointName="HitPelvis";
    				};
    			};
    			hiddenSelections[]=
    			{
                    "camo",
                    "camo2",
                    "camo3",
                    "camo4",
                    "camo5",
                    "A_Ghillie",
                //    "A_ChestArmor",
                //    "A_KneesLeft",
                //    "A_KneesRight",
                    "A_KneesMarLeft",
                    "A_KneesMarRight",
                //    "A_ODST",
                //    "A_ShinArmorLeft",
                //    "A_ShinArmorRight",
                //    "A_TacPad",
                //    "A_ThighArmorLeft",
                //    "A_ThighArmorRight",
                //    "AS_BaseLeft",
                //    "AS_BaseRight",
                    "AS_LargeLeft",
                    "AS_LargeRight",
                    "AS_MediumLeft",
                    "AS_MediumRight",
                    "AS_ODSTCQBLeft",
                    "AS_ODSTCQBRight",
                    "AS_ODSTLeft",
                //    "AS_ODSTRight",
                //    "AS_ODSTSniperLeft",
                    "AS_ODSTSniperRight",
                    "AS_SmallLeft",
                    "AS_SmallRight",
                    "AP_Canteen",
                //    "AP_GL",
                //    "AP_Knife",
                //    "AP_MGThigh",
                    "AP_AR",
                    "AP_BR",
                    "AP_Pack",
                //    "AP_Pistol",
                //    "AP_Rounds",
                    "AP_SG",
                    "AP_SMG",
                    "AP_Sniper",
                //    "AP_Thigh",
                    "AP_Frag",
                //    "AP_Smoke",
                //    "APO_AR",
                    "APO_BR",
                //    "APO_Knife",
                //    "APO_SMG",
                    "APO_Sniper",
                    "CustomKit_Scorch"
                };
    		};
    	};

	class ODST_PLuke_M52D_ODST: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Luke)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\Bravo Company\data\Chests\base\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\Bravo Company\data\Chests\base\Bravo_M52D_EOD_Lead_Upper.paa"
			//"105th_Armor\Bravo Company\data\Chests\PLuk_M52D_Upper.paa" (Disabled for now until TIG of 3 months)
		};
        class XtdGearInfo
        {
            model="BComp_Custom_Vests";
            owner="Luke";
        };
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor.p3d";
			vestType="Rebreather";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					armor=45;
					hitpointName="HitAbdomen";
					passThrough=0.1;
				};
				class Arms: Abdomen
				{
					hitpointName="HitArms";
				};
				class Body: Abdomen
				{
					hitpointName="HitBody";
				};
				class Chest: Abdomen
				{
					hitpointName="HitChest";
				};
				class Diaphragm: Abdomen
				{
					hitpointName="HitDiaphragm";
				};
				class Hands: Abdomen
				{
					hitpointName="HitHands";
				};
				class Legs: Abdomen
				{
					hitpointName="HitLegs";
				};
				class Neck: Abdomen
				{
					hitpointName="HitNeck";
				};
				class Pelvis: Abdomen
				{
					hitpointName="HitPelvis";
				};
			};
			hiddenSelections[]=
			{
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Ghillie",
            //    "A_ChestArmor",
            //    "A_KneesLeft",
            //    "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
            //    "A_ODST",
            //    "A_ShinArmorLeft",
            //    "A_ShinArmorRight",
            //    "A_TacPad",
            //    "A_ThighArmorLeft",
            //    "A_ThighArmorRight",
            //    "AS_BaseLeft",
            //    "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
            //    "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_Canteen",
                "AP_GL",
            //    "AP_Knife",
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
            //    "AP_Frag",
            //    "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
            //    "CustomKit_Scorch"
            };
		};
	};