//Changelog
// Updated pathin 25/10/2020
// Updated Supply from 100 to 250 27/10/2020
// Replaced odst_tempest_upper with new variants. 01/11/2020
//
//Chests
	class ODST_Light: OPTRE_UNSC_M52D_Armor_Light
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Light";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_upper_white.paa"
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
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_upper_white.paa"
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
		displayName="[ODST] M52D Demo";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_upper_white.paa"
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
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
	class ODST_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D Rifleman";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_upper_white.paa"
		};
		class ItemInfo: VestItem
		{
			mass=80;
			containerClass="Supply240";
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
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_upper_white.paa"
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
		displayName="[ODST] M52D Corpsman";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_corps_upper.paa"
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
/*	class ODST_Rifleman_Barkley: OPTRE_UNSC_M52D_Armor
	{
		author="Barkley";
		displayName="[ODST] M52D Lead (Barkley)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
	};*/

	class ODST_Rifleman_Canley: OPTRE_UNSC_M52D_Armor
	{
		author="Hartley";
		displayName="[ODST] M52D Rifleman (Canley)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_personnel_upper_white.paa"
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"CustomKit_Scorch"
			};
		};
	};
	class BCo_SOveture_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Overture)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
	
/*	class BCo_CMcDaniel_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (McDaniel)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
            //    "AS_ODSTCQBLeft",
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
	*/
	class BCo_AVirus_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		author="N-4 Logistics";
		displayName="[ODST] M52D (Virus)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
	*/
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
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
	/*
	class BCo_CVarner_M52D_ODST: OPTRE_UNSC_M52D_Armor
	{
		scope=1;
		scopeArsenal=1;
		author="N-4 Logistics";
		displayName="[ODST] M52D (Varner)";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
			"105th_Armor\data\Bravo Company Chests\odst_tempest_lower.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_Armor\data\Bravo Company Chests\tempest_teamleader_upper.paa"
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
            //    "AP_GL",
                "AP_Knife",
            //    "AP_MGThigh",
                "AP_AR",
                "AP_BR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
            //    "AP_Thigh",
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