class CfgPatches
{
	class v105_SupplyPods
	{
		author=	"105th | S-4 Logistics";
		name= "105th SupplyPods";
		url= "";
		units[]= 
		{
			"v105_Land_Transport_Covered_Pod",
			"v105_Land_Medical_Covered_Pod",
			"v105_Mortar_Container",
			"v105_SupplyPod_Rifle",
			"v105_SupplyPod_MachineGun",
			"v105_SupplyPod_Precision",
			"v105_SupplyPod_Rockets",
			"v105_SupplyPod_Medical",
			"v105_SupplyPod_Utility",
			"v105_SupplyPod_Demo",
			"v105_SupplyPod_MortarHE",
			"v105_SupplyPod_MortarSMK",
			"v105_SupplyPod_60mmMortar",
			"v105_SupplyPod_Radios",
			"v105_SupplyPod_SPNKR"
		};
		weapons[]= 
		{
			
		};
		magazines[]= 
		{
			

		};
		ammo[]= {};
		requiredVersion= 1.0;
		requiredAddons[]= 
		{

			"v105_Core",
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
	class v105_Land_Transport_Covered_Pod: Land_Pod_Heli_Transport_04_covered_F
	{
		scopeCurator= 2;
		scope= 2;
		side= 1;
		author= "S-4 Logistics";
		displayName= "[105th] Passenger Compartment";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
		armor= 150;
		class TransportMagazines{};
		class TransportWeapons{};
		hiddenSelectionsTextures[]=
		{
		    "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
		    "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
			//"105th_SupplyCrates\textures\taru_1_retexture.paa",
			//"105th_SupplyCrates\textures\taru_2_retexture.paa"
		};
		transportMaxMagazines= 150;
        transportMaxWeapons= 50;
		maximumLoad= 4000;
		class TransportItems
		{
			#include "SupplyPods\ResupplyPodRifle.hpp"
		};
	};
	class Land_Pod_Heli_Transport_04_medevac_F;
	class v105_Land_Medical_Covered_Pod: Land_Pod_Heli_Transport_04_medevac_F
	{
		scopeCurator= 2;
		scope= 2;
		side= 1;
		author= "S-4 Logistics";
		displayName= "[105th] Medevac Compartment";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
		armor= 150;
		class TransportMagazines{};
		class TransportWeapons{};
		hiddenSelectionsTextures[]=
		{
			"105th_SupplyCrates\textures\taru_med_retexture.paa",
			"105th_SupplyCrates\textures\taru_2_retexture.paa"
		};
		transportMaxMagazines= 150;
        transportMaxWeapons= 50;
		maximumLoad= 2000;
		class TransportItems
		{
			#include "SupplyPods\ResupplyPodMedical.hpp"
	    };
	};


	class Land_optre_milcrate_h3_long;
	class v105_Mortar_Container: Land_optre_milcrate_h3_long
	{
		scopeCurator= 2;
		scope= 2;
		side= 1;
		author= "S-4 Logistics";
		displayName= "[105th] Mortar Container";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
		class TransportItems
			{
				#include "SupplyPods\MortarContainer.hpp"
			};
	};
	class OPTRE_Ammo_SupplyPod_Empty;

	class v105_SupplyPod_Rifle: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope=2;
		author= "S-4 Logistics";
		displayName= "[105th] Rifle Ammo Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRifle.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_MachineGun: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Machinegun Ammo Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMachineGun.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_Precision: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Precision Weapons Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodPrecision.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_Rockets: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Rockets/Missiles Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRockets.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Medical Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
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
	class v105_SupplyPod_Utility: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Utility Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodUtility.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_Demo: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Demolitions Supply Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodDemo.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_MortarHE: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] 82mm HE Mortar Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMortarHE.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_MortarSMK: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] 82mm Smoke Mortar Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodMortarSMK.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_60mmMortar: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] 60mm Mortar Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPod60mm.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_Radios: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] Radio Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
			class TransportItems
			{
				#include "SupplyPods\ResupplyPodRadios.hpp"
			};
			class TransportMagazines{};
			class TransportWeapons{};
	};
	class v105_SupplyPod_SPNKR: OPTRE_Ammo_SupplyPod_Empty
	{
		ace_cargo_size= 2;
		scopeCurator= 2;
		scope= 2;
		author= "S-4 Logistics";
		displayName= "[105th] SPNKR Pod";
		editorCategory= "v105_EdCat_105th";
		editorSubCategory= "v105_EdSubCat_Supply";
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
				defaultValue= "";
				class values
				{
					class n_0
					{
						name="none";
						value="none";
					};
					class n_1
					{
						name= "[105th] Rifle Pod";
						value= "v105_SupplyPod_Rifle";
					};
					class n_2
					{
						name= "[105th] Machinegun Pod";
						value= "v105_SupplyPod_MachineGun";
					};
					class n_3
					{
						name= "[105th] Precision Pod";
						value= "v105_SupplyPod_Precision";
					};
					class n_4
					{
						name= "[105th] Rocket Pod";
						value= "v105_SupplyPod_Rockets";
					};
					class n_5
					{
						name= "[105th] Medical Pod";
						value= "v105_SupplyPod_Medical";
					};
					class n_6
					{
						name= "[105th] Utility Pod";
						value= "v105_SupplyPod_Utility";
					};
					class n_7
					{
						name= "[105th] Demolitions Pod";
						value= "v105_SupplyPod_Demo";
					};
					class n_8
					{
						name= "[105th] Transport Pod";
						value= "v105_Land_Transport_Covered_Pod";
					};
					class n_9
					{
						name= "[105th] 82mm HE Mortar Pod";
						value= "v105_SupplyPod_MortarHE";
					};
					class n_10
					{
						name= "[105th] 82mm Smoke Mortar Pod";
						value= "v105_SupplyPod_MortarSMK";
					};
					class n_11
					{
						name= "[105th] 60mmMortar Pod";
						value="v105_SupplyPod_60mmMortar";
					}
					class n_12
					{
						name= "[105th] Radio Pod";
						value= "v105_SupplyPod_Radios";
					};
					class n_13
					{
						name= "[105th] SPNKR Pod";
						value= "v105_SupplyPod_SPNKR";
					};
				};
			};
		};
	};
};
