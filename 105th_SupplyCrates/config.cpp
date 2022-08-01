class CfgPatches
{
	class v105_N4_SupplyPods
	{
		author = "S-4 Logistics";
		name = "[105th] S-4 Logistics";
		url = "";
		units[] = 
		{
			"v105_Land_Transport_Covered_Pod",
			"v105_Land_Medical_Covered_Pod",
			"v105_Mortar_Container",
			"HOW_105th_SupplyPod_Rifle",
			"HOW_105th_SupplyPod_MachineGun",
			"HOW_105th_SupplyPod_Precision",
			"HOW_105th_SupplyPod_Rockets",
			"HOW_105th_SupplyPod_Medical",
			"HOW_105th_SupplyPod_Utility",
			"HOW_105th_SupplyPod_Demo",
			"HOW_105th_SupplyPod_MortarHE",
			"HOW_105th_SupplyPod_MortarSMK",
			"HOW_105th_SupplyPod_60mmMortar",
			"HOW_105th_SupplyPod_Radios",
			"HOW_105th_SupplyPod_SPNKR"
			

		};
		weapons[] = 
		{
			
		};
		magazines[] = 
		{
			

		};
		ammo[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{

			"105th_Core",
			
			"OPTRE_Misc_Crates",
			"OPTRE_Modules",
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Pelican",
			"OPTRE_Vehicles_Warthog",
			"OPTRE_Vehicles_Hornet",
			"OPTRE_Weapons",
			"OPTRE_Weapons_Vehicle",
			"V_FZ_Vehicles",
			"V_SO_Magazines",
			"V_SO_Weapons",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_Beta",
			"A3_Air_F_Jets",
			"A3_Armor_F_Beta",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Soft_F_Exp",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Armor_F_Tank",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
			"FIR_AirWeaponSystem_US"
		};
	};
};


class CfgVehicles
{
	
	class Land_Pod_Heli_Transport_04_covered_F;
	class v105_Land_Transport_Covered_Pod:Land_Pod_Heli_Transport_04_covered_F
	{
		scopeCurator = 2;
		scope  = 2;
		side = 1;
		Author = "S-4 Logistics";
		displayName = "[105th] Passenger Compartment";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
		armor = 150;
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRifle.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
			hiddenSelectionsTextures[]=
			{
				"105th_SupplyCrates\textures\taru_1_retexture.paa",
				"105th_SupplyCrates\textures\taru_2_retexture.paa"
			};
	};
	class Land_Pod_Heli_Transport_04_medevac_F;
	class v105_Land_Medical_Covered_Pod:Land_Pod_Heli_Transport_04_medevac_F
	{
		scopeCurator = 2;
		scope  = 2;
		side = 1;
		Author = "S-4 Logistics";
		displayName = "[105th] Medevac Compartment";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
		armor = 150;
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMedical.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
			hiddenSelectionsTextures[]=
			{
				"105th_SupplyCrates\textures\taru_med_retexture.paa",
				"105th_SupplyCrates\textures\taru_2_retexture.paa"
			};
	};
	class Land_optre_milcrate_h3_long;
	class v105_Mortar_Container: Land_optre_milcrate_h3_long
	{
		scopeCurator = 2;
		scope  = 2;
		side = 1;
		Author = "S-4 Logistics";
		displayName = "[105th] Mortar Container";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
			{
				#include "SupplyPods\MortarContainer.hpp"
			};
	};
	class OPTRE_Ammo_SupplyPod_Empty;

	class HOW_105th_SupplyPod_Rifle: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Rifle Ammo Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRifle.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_MachineGun: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Machinegun Ammo Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMachineGun.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_Precision: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Precision Weapons Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodPrecision.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_Rockets: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Rockets/Missiles Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRockets.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Medical Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMedical.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
			hiddenSelectionsTextures[]=
			{
				//filepath
			};
	};
	class HOW_105th_SupplyPod_Utility: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Utility Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodUtility.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_Demo: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Demolitions Supply Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodDemo.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_MortarHE: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] 82mm HE Mortar Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMortarHE.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_MortarSMK: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] 82mm Smoke Mortar Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMortarSMK.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_60mmMortar: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] 60mm Mortar Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPod60mm.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_Radios: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] Radio Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRadios.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class HOW_105th_SupplyPod_SPNKR: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size = 2;
		scopeCurator = 2;
		scope  = 2;
		Author = "S-4 Logistics";
		displayName = "[105th] SPNKR Pod";
		editorCategory = "HOW_EdCat_105th"
		editorSubCategory = "HOW_105th_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodSPNKR.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};

	////////////////////////Pelican Resupply Module (Override this to change supply pod dropdown list.)
	class Module_F;
	class Module_OPTRE_PelicanSupplyDrop: Module_F
	{
		class Arguments
		{
			class box1
			{
				defaultValue = "";
				class values
				{
					class n_0
					{
						name="none";
						value="none";
					};
					class n_1
					{
						name = "[105th] Rifle Pod";
						value = "HOW_105th_SupplyPod_Rifle";
					};
					class n_2
					{
						name = "[105th] Machinegun Pod";
						value = "HOW_105th_SupplyPod_MachineGun";
					};
					class n_3
					{
						name = "[105th] Precision Pod";
						value = "HOW_105th_SupplyPod_Precision";
					};
					class n_4
					{
						name = "[105th] Rocket Pod";
						value = "HOW_105th_SupplyPod_Rockets";
					};
					class n_5
					{
						name = "[105th] Medical Pod";
						value = "HOW_105th_SupplyPod_Medical";
					};
					class n_6
					{
						name = "[105th] Utility Pod";
						value = "HOW_105th_SupplyPod_Utility";
					};
					class n_7
					{
						name = "[105th] Demolitions Pod";
						value = "HOW_105th_SupplyPod_Demo";
					};
					class n_8
					{
						name = "[105th] Transport Pod";
						value = "HOW_Land_Transport_Covered_Pod";
					};
					class n_9
					{
						name = "[105th] 82mm HE Mortar Pod";
						value = "HOW_105th_SupplyPod_MortarHE";
					};
					class n_10
					{
						name = "[105th] 82mm Smoke Mortar Pod";
						value = "HOW_105th_SupplyPod_MortarSMK";
					};
					class n_11
					{
						name = "[105th] 60mmMortar Pod";
						value="HOW_105th_SupplyPod_60mmMortar";
					}
					class n_12
					{
						name = "[105th] Radio Pod";
						value = "HOW_105th_SupplyPod_Radios";
					};
					class n_13
					{
						name = "[105th] SPNKR Pod";
						value = "HOW_105th_SupplyPod_SPNKR";
					};
				};
			};
		};
	};


};
