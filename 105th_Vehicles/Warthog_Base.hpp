class VES_M12;
class VES_M12_LRV;
class VES_M12G1_LRV;
class VES_M12A1_LRV;
class VES_M813_TT;
class VES_M12_APC_MED;
class VES_M12_APC;

class HOW_M12 : VES_M12
{
		dlc="105th";
		author="Howard, Vespade";
		
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

class HOW_M12_LRV : VES_M12_LRV
{
		dlc="105th";
		author="Howard, Vespade";
		
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

class HOW_M12G1_LRV : VES_M12G1_LRV
{
		dlc="105th";
		author="Howard, Vespade";
		
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
class HOW_M12A1_LRV : VES_M12A1_LRV
{
		dlc="105th";
		author="Howard, Vespade";
		
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
class HOW_M813_TT:VES_M813_TT
{
		dlc="105th";
		author="Howard, Vespade";
		
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
class HOW_M813_MORT: VES_M813_TT
{
		dlc="105th";
		author="Howard, Vespade";
		
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
		class TransportMagazines{};
		class TransportWeapons{};
};
class EventHandlers;
class HOW_M12_APC_MED:VES_M12_APC_MED
{
		dlc="105th";
		author="Howard, Vespade";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog Medical APC";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class EventHandlers: EventHandlers
		{
		};
		class TransportItems
		{
			#include "cfg\VehicleGearMedical.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
};
class HOW_M12_APC:VES_M12_APC
{
		dlc="105th";
		author="Howard, Vespade";
		
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
		author="Howard, Vespade";
		
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
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hog\V_M12_BLK_CO.paa",
			"105th_Vehicles\textures\Hog\V_M12_BLK_A_CO"
		};
};
class HOW_M12_LRV_ODST : VES_M12_LRV
{
		dlc="105th";
		author="Howard, Vespade";
		
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
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hog\V_M12_BLK_CO.paa",
			"105th_Vehicles\textures\Hog\V_M12_BLK_A_CO"
		};
};
class HOW_M12G1_LRV_ODST : VES_M12G1_LRV
{
		dlc="105th";
		author="Howard, Vespade";
		
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
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hog\V_M12_BLK_CO.paa",
			"105th_Vehicles\textures\Hog\V_M12_BLK_A_CO"
		};
};
class HOW_M813_TT_ODST:VES_M813_TT
{
		dlc="105th";
		author="Howard, Vespade";
		
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
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hog\V_M12_BLK_CO.paa",
			"105th_Vehicles\textures\Hog\V_M12_BLK_A_CO"
		};
};





// Experimentals
class OPTRE_M12_LRV;
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
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hog\V_M12_BLK_CO.paa",
			"105th_Vehicles\textures\Hog\V_M12_BLK_A_CO"
		};
		
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
class OPTRE_M12R_AA;
class HOW_M12_Mortar: OPTRE_M12R_AA
{
		dlc="105th";
		author="Howard";
		
		scope=2;
		scopeCurator=2;
		displayName="M12 Warthog (Mortar)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";
		slowSpeedForwardCoef = 0.090;
		class TransportItems
		{
			#include "cfg\VehicleGearHog.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Hog\V_M12_BLK_CO.paa",
			"105th_Vehicles\textures\Hog\V_M12_BLK_A_CO"
		};
		artilleryScanner=1;
		class Turrets:Turrets
		{
			class CargoGunner_1 : CargoGunner_1{};
			class MainTurret : MainTurret
			{
				elevationMode=3;
				initCamElev=0;
				minCamElev=-30;
				maxCamElev=80;
				initElev=0;
				maxElev=80;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				
				weapons[]=
				{
					"mortar_82mm"
				};
				magazines[]=
				{
					"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells",
					"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Smoke_white",
					"8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_Smoke_white",
				};
			};
		};
};