



class OPTRE_Ammo_SupplyPod_Empty;

class HOW_105th_SupplyPod_Rifle: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Rifle Ammo Supply Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodRifle.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_MachineGun: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Machinegun Ammo Supply Pod";
	editorCategory = "v105_EdCat_105th";
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMachineGun.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Precision: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Precision Weapons Supply Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodPrecision.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Rockets: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Rockets/Missiles Supply Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodRockets.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Medical Supply Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMedical.hpp"
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
	Author = "N-4 Logistics";
	displayName = "[105th] Utility Supply Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodUtility.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Demo: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Demolitions Supply Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodDemo.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_MortarHE: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] 82mm HE Mortar Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMortarHE.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_MortarSMK: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] 82mm Smoke Mortar Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMortarSMK.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Radios: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 2;
	scopeCurator = 2;
	scope  = 2;
	Author = "N-4 Logistics";
	displayName = "[105th] Radio Pod";
	editorCategory = "v105_EdCat_105th"
	editorSubCategory = "v105_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodRadios.hpp"
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
					name = "[105th] Radio Pod";
					value = "HOW_105th_SupplyPod_Radios";
				};
			};
		};
	};
};

