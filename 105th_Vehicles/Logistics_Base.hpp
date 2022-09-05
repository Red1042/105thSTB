class OPTRE_m1087_stallion_unsc_repair;
class OPTRE_m1087_stallion_unsc_resupply;
class OPTRE_m1087_stallion_unsc_refuel;
class B_Slingload_01_Repair_F;
class B_Slingload_01_Ammo_F;
class B_Slingload_01_Fuel_F;
class OPTRE_cart;
/* Start of Stallion Resupply Vehicles */

class v105_M1087_Stallion_Repair: OPTRE_m1087_stallion_unsc_repair
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="M1087 Stallion (Repair)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
    class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Stallion (Repair)";
	};
};

class v105_M1087_Stallion_Ammo: OPTRE_m1087_stallion_unsc_resupply
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="M1087 Stallion (Ammo)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
    class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Stallion (Ammo)";
	};
};

class v105_M1087_Stallion_Fuel: OPTRE_m1087_stallion_unsc_refuel
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="M1087 Stallion (Fuel)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
	class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Stallion (Fuel)";
	};
};

/* End of Stallion Resupply Vehicles */

/* Start of Huron Resupply Containers */

class v105_Huron_Repair: B_Slingload_01_Repair_F
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="Crate (Repair)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
	class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Crate (Repair)";
	};
};

class v105_Huron_Ammo: B_Slingload_01_Ammo_F
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="Crate (Ammo)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
	class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Crate (Ammo)";
	};
};

class v105_Huron_Fuel: B_Slingload_01_Fuel_F
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="Crate (Fuel)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
	class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Crate (Fuel)";
	};
};

class v105_Cart: OPTRE_cart
{
    dlc="105th";
	author="S-4 Logistics";
	scope=2;
	scopeCurator=2;
	displayName="Maintenance/Tow Cart";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Supply";
	class TransportItems{};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        #include "cfg\LogisticsSpawnerInfo.hpp"
		scope = 1;
		type = "Tow Cart";
	};
};