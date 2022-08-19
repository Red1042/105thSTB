class OPTRE_M12_FAV;
class OPTRE_M12_LRV;
class OPTRE_M12G1_LRV;
class OPTRE_M12A1_LRV;
class OPTRE_M813_TT;
class OPTRE_M12_FAV_APC_MED;
class OPTRE_M12_FAV_APC;
class OPTRE_M12R_AA;

class EventHandlers;

class v105_M12: OPTRE_M12_FAV
{
	dlc="105th";
	author="S-4 Logistics";
	
	scope=2;
	scopeCurator=2;
	displayName="M12 Warthog";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
		#include "cfg\WarthogSpawnerInfo.hpp"
		scope = 1;
		type = "Scout";
	};
};

class v105_M813_TT: OPTRE_M813_TT
{
	dlc="105th";
	author="S-4 Logistics";
	
	scope=2;
	scopeCurator=2;
	displayName="M813 Warthog Transport";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
		#include "cfg\WarthogSpawnerInfo.hpp"
		scope = 1;
		type = "Transport";
	}
};

class v105_M12_FAV_APC: OPTRE_M12_FAV_APC
{
	dlc="105th";
	author="S-4 Logistics";
	
	scope=2;
	scopeCurator=2;
	displayName="M12 Warthog APC";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
		#include "cfg\WarthogSpawnerInfo.hpp"
		scope = 1;
		type = "APC Transport";
	};
};

class v105_M12_LRV: OPTRE_M12_LRV
{
	dlc="105th";
	author="S-4 Logistics";

	scope=2;
	scopeCurator=2;
	displayName="M12 Warthog (M41 LAAG)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
	    scope = 1;
	    vehicle="Warthog";
	    type = "LAAG";
	    icon="OPTRE_Vehicles\Warthog\data\picture.paa";
	    liveries[]=
        {
            "[""Standard"",[""OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa"",""OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa""]]",
            "[""Black"",[""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa""]]",
            "[""Green"",[""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa""]]",
            "[""Snow"",[""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa""]]",
            "[""Tan"",[""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa""]]"
        };
	};
};

class v105_M12A1_LRV: OPTRE_M12A1_LRV
{
	dlc="105th";
	author="S-4 Logistics";

	scope=2;
	scopeCurator=2;
	displayName="M12 Warthog (ATGM)";
    editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
		scope = 1;
		vehicle="Warthog";
		icon="OPTRE_Vehicles\Warthog\data\picture.paa";
		type = "ATGM";
		liveries[]=
        {
            "[""Standard"",[""OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa"",""OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa""]]",
            "[""Black"",[""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa""]]",
            "[""Green"",[""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa""]]",
            "[""Snow"",[""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa""]]",
            "[""Tan"",[""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa""]]"
        };
	};
};

class v105_M12G1_LRV: OPTRE_M12G1_LRV
{
	dlc="105th";
	author="S-4 Logistics";

	scope=2;
	scopeCurator=2;
	displayName="M12 Warthog (Gauss)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
		scope = 1;
		vehicle="Warthog";
		icon="OPTRE_Vehicles\Warthog\data\picture.paa";
		type = "Gauss";
		liveries[]=
        {
            "[""Standard"",[""OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa"",""OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""OPTRE_Vehicles\Warthog\data\turrets\m68_turret_co.paa"",""OPTRE_Vehicles\Warthog\data\turrets\m12_turret_co.paa""]]",
            "[""Black"",[""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa""]]",
            "[""Green"",[""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\m68_turret_woodland_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\m12_turret_woodland_co.paa""]]",
            "[""Snow"",[""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\m68_turret_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\m12_turret_snow_co.paa""]]",
            "[""Tan"",[""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\m68_turret_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\m12_turret_sand_co.paa""]]"
        };
	};
};

class v105_M12R_LRV: OPTRE_M12R_AA
{
	dlc="105th";
	author="S-4 Logistics";

	scope=2;
	scopeCurator=2;
	displayName="M12R Warthog (AA)";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
	class VehicleSpawnerInfo
	{
        scope = 1;
		vehicle="Warthog";
		icon="OPTRE_Vehicles\Warthog\data\picture.paa";
		type = "AA";
		liveries[]=
        {
            "[""Standard"",[""OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_co.paa"",""OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"",""OPTRE_Vehicles\Warthog\data\turrets\m79_turret_co.paa""]]",
            "[""Black"",[""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extupper_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa"",""OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa""]]",
            "[""Green"",[""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extupper_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\M12HogMaav_extunder_wood_co.paa"",""OPTRE_Vehicles\Warthog\data\woodland\m79_turret_woodland_co.paa""]]",
            "[""Snow"",[""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extupper_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\M12HogMaav_extunder_snow_co.paa"",""OPTRE_Vehicles\Warthog\data\snow\m79_turret_snow_co.paa""]]",
            "[""Tan"",[""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extupper_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\M12HogMaav_extunder_sand_co.paa"",""OPTRE_Vehicles\Warthog\data\sand\m79_turret_sand_co.paa""]]"
        };
    };
};

class v105_M813_MORT: OPTRE_M12_FAV
{
		dlc="105th";
		author="S-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M813 Warthog TT (82mm Supplies)";
		editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearMort.hpp"
		};
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_WarthogAddContainer";
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class VehicleSpawnerInfo
		{
		    #include "cfg\WarthogSpawnerInfo.hpp"
		    scope = 1;
		    type = "82mm Supplies";
		};
};

class v105_M12_APC_MED: OPTRE_M12_FAV_APC_MED
{
		dlc="105th";
		author="S-4 Logistics";
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog Medical APC";
		editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class EventHandlers: EventHandlers
		{
			class Make_this_thing_medical_vehicle
			{
				init = _this call ace_medical_treatment_fnc_isMedicalVehicle;
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearMedical.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class VehicleSpawnerInfo
		{
		    #include "cfg\WarthogSpawnerInfo.hpp"
		    scope = 1;
		    type = "Medical";
		};
};

/*

class v105_M12_ODST: OPTRE_M12_FAV
{
		dlc="105th";
		author="S-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog [ODST]";
		editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};

class v105_M12_LRV_ODST: OPTRE_M12_LRV
{
		dlc="105th";
		author="S-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (M41 LAAG) [ODST]";
		editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};

class v105_M12G1_LRV_ODST: OPTRE_M12G1_LRV
{
		dlc="105th";
		author="S-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (M68 ALIM) [ODST]";
		editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class v105_M813_TT_ODST: OPTRE_M813_TT
{
		dlc="105th";
		author="S-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M813 Warthog Transport [ODST]";
		editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};

*/

// Experimentals

class v105_M12_LRV_ExpA: OPTRE_M12_LRV
{
	dlc="105th";
	author="Howard";
		
	scope=1;
	scopeCurator=1;
	displayName="M12 Warthog Experiment A";
	editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Motorized";
	slowSpeedForwardCoef = 0.090;
	class TransportItems
	{
		#include "cfg\VehicleGearHog.hpp"
	};
	class TransportMagazines{};
	class TransportWeapons{};
		
		
	class Turrets:Turrets
	{
		class CargoGunner_1 : CargoGunner_1{};
		class MainTurret : MainTurret
		{
			weapons[]=
			{
				"v105_M41_LAAG",
				"v105_Vulcan_20mm"
			};
			magazines[]=
			{
				"OPTRE_1000Rnd_127x99_M41",
				"OPTRE_1000Rnd_127x99_M41",
				"OPTRE_1000Rnd_127x99_M41",
				"v105_Vulcan20mm_620RND"
			};
		};
	};
};
