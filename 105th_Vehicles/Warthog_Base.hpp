class OPTRE_M12;
class OPTRE_M12_LRV;
class OPTRE_M12G1_LRV;
class OPTRE_M12A1_LRV;
class OPTRE_M813_TT;
class OPTRE_M12_APC_MED;
class OPTRE_M12_APC;

class HOW_M12 : OPTRE_M12
{
		dlc="105th";
		author="";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};

class HOW_M12_LRV : OPTRE_M12_LRV
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (M41 LAAG)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";

		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};

class HOW_M12G1_LRV : OPTRE_M12G1_LRV
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (M68 ALIM)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_M12A1_LRV : OPTRE_M12A1_LRV
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (ATGM)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_M813_TT:OPTRE_M813_TT
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M813 Warthog Transport";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_M813_MORT: OPTRE_M813_TT
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M813 Warthog TT (82mm Supplies)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
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
};
class EventHandlers;
class HOW_M12_APC_MED:OPTRE_M12_APC_MED
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog Medical APC";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
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
};
class HOW_M12_APC:OPTRE_M12_APC
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog APC";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_M12_ODST : HOW_M12
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog [ODST]";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
	
};
class HOW_M12_LRV_ODST : OPTRE_M12_LRV
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (M41 LAAG) [ODST]";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		
};
class HOW_M12G1_LRV_ODST : OPTRE_M12G1_LRV
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (M68 ALIM) [ODST]";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		
};
class HOW_M813_TT_ODST:OPTRE_M813_TT
{
		dlc="105th";
		author="N-4 Logistics";
		
		scope=2;
		scopeCurator=2;
		displayName="M813 Warthog Transport [ODST]";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearODST.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		
};





// Experimentals

class HOW_M12_LRV_ExpA : OPTRE_M12_LRV
{
		dlc="105th";
		author="Howard";
		
		scope=1;
		scopeCurator=1;
		displayName="M12 Warthog Experiment A";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
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
					"HOW_M41_LAAG",
					"HOW_Vulcan_20mm"
				};
				magazines[]=
				{
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41",
					"OPTRE_1000Rnd_127x99_M41",
					"HOW_Vulcan20mm_620RND"
				};
			};
		};
};
