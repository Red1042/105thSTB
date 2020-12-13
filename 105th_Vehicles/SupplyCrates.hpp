



class OPTRE_Ammo_SupplyPod_Empty;

class HOW_105th_SupplyPod_Rifle: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Rifle Ammo Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodRifle.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_MachineGun: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Machinegun Ammo Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMachinegun.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Precision: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Precision Weapons Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodPrecision.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Rockets: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Rockets/Missiles Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodRockets.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Medical Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMedical.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Utility: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Utility Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodUtility.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_105th_SupplyPod_Demo: OPTRE_Ammo_SupplyPod_Empty
{
	ace_cargo_size = 3;
	scopeCurator = 2;
	scope  = 2;
	Author = "Howard";
	displayName = "Demolitions Supply Pod";
	editorCategory = "HOW_EdCat_105th"
	editorSubCategory = "HOW_105th_EdSubCat_Supply";
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodDemo.hpp"
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
			defaultValue = "HOW_105th_SupplyPod_Rifle";
			class values
			{
				class n1
				{
					name = "Rifle Pod";
					value = "HOW_105th_SupplyPod_Rifle";
				};
				class n2
				{
					name = "Machinegun Pod";
					value = "HOW_105th_SupplyPod_MachineGun";
				};
				class n3
				{
					name = "Precision Pod";
					value = "HOW_105th_SupplyPod_Precision";
				};
				class n4
				{
					name = "Rocket Pod";
					value = "HOW_105th_SupplyPod_Rockets";
				};
				class n5
				{
					name = "Medical Pod";
					value = "HOW_105th_SupplyPod_Medical";
				};
				class n6
				{
					name = "Utility Pod";
					value = "HOW_105th_SupplyPod_Utility";
				};
				class n7
				{
					name = "Demolitions Pod";
					value = "HOW_105th_SupplyPod_Demo";
				};
			};
		};
	};
};

