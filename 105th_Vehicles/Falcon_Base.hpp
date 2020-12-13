 	
    class v105_UH144: VES_UH144
    {
        side=1;
		scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 
		
        dlc="105th";
		author="Mike Hartley, Vespade";
        displayName="UH-144 Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
        class UserActions{};
    };
    class v105_UH144S: VES_UH144S
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 
		
        dlc="105th";
        author="Mike Hartley, Vespade";
        displayName="UH-144S Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
    };
    class v105_UH144_A: VES_UH144_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
	
        dlc="105th";
        author="Mike Hartley, Vespade";
        displayName="UH-144 Falcon (Armed) [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
    };
    class v105_UH144S_A: VES_UH144S_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 
	
        dlc="105th";
        author="Mike Hartley, Vespade";
        displayName="UH-144S Falcon (Armed) [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
    };
	
	class v105_UH144S_AM: VES_UH144S_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 
	
        dlc="105th";
        author="Howard, Vespade";
        displayName="UH-144S-GL Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[]=
		{
			"CMFlareLauncher",
			"v105_FalconGL"
		};
		magazines[]=
		{
			"HOW_50Rnd_82mm_shells","HOW_50Rnd_82mm_shells",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
    };
	
	class v105_UH144S_ARC: VES_UH144S_A
    {
        side=1;
		scope=2;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 
	
        dlc="105th";
        author="Howard, Vespade";
        displayName="UH-144S-RC Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[]=
		{
			"CMFlareLauncher",
			"gatling_20mm"
		};
		magazines[]=
		{
			"1000Rnd_20mm_shells",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
    };
    class v105_UH144S_JLonger_ARC:v105_UH144S_ARC
    {
        author="Longer, Vespade";
        displayName="UH-144S-RC Falcon [Longer]";
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_Longer_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
    };
    class v105_UH144S_JCollins_ARC:v105_UH144S_ARC
    {
        scope=1;
        scopeCurator=1;
        author="Collins, Vespade";
        displayName="UH-144S-RC Falcon [Collins]";
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_Collins_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_Collins_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
    };