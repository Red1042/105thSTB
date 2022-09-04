
    // Adds Camera support to all types of falcons
    /*
 	class OPTRE_falcon_base: Helicopter_Base_H
 	{
 	    memoryPointDriverOptics="Light_L";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(14.4 / 120)";
					minFov="(14.4 / 120)";
					maxFov="(14.4 / 120)";
					gunnerOpticsModel="A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(4.8 / 120)";
					minFov="(4.8 / 120)";
					maxFov="(4.8 / 120)";
					gunnerOpticsModel="A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-110;
			maxTurn=110;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=25;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};

		class EventHandlers: EventHandlers
		{
			class v105_Hit_EH
			{
			    hit = "[(_this select 0)] call V105_Vehicles_fnc_HandleHit;";
			};
		};
 	};
 	*/

 	class VES_UH144_A;

    /* Start of Base Falcons */
    
    class v105_Falcon_Base: VES_UH144_A
    {
        side=1;
		scope=1;
		scopeCurator=1;
        editorCategory="v105_EdCat_105th";
        editorSubcategory="v105_105th_EdSubCat_Falcon";
        dlc="105th";
		author="S-4 Logistics";
		armor = 250;
        displayName="UH-144 Falcon [Armed Base]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
		};
		class EventHandlers: EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
            class v105_EnhancedDamage_EH
		    {
                hit = "_this call v105_Vehicles_fnc_EnhancedDamage";
		    };
		};
 	    memoryPointDriverOptics="Light_L";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(75 / 120)";
					minFov="(75 / 120)";
					maxFov="(75 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(14.4 / 120)";
					minFov="(14.4 / 120)";
					maxFov="(14.4 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(4.8 / 120)";
					minFov="(4.8 / 120)";
					maxFov="(4.8 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn=-110;
			maxTurn=110;
			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=25;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		maximumLoad = 3000;
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};

		class UserActions
		{
		    #include "cfg\UtilityActions.hpp"
		    #include "cfg\ThrusterActions.hpp"
		};
        class Components: Components
        {
            class TransportCountermeasuresComponent;
            class TransportPylonsComponent
            {
				UIPicture=  "\OPTRE_Vehicles\falcon\FalconPylonPic.paa";
                class pylons
                {
                    class pylons1 //    Outer
                    {
                        hardpoints[] = {"v105_Hydra_Generic","v105_Sidewinder_Single",  "v105_AnvilSmokes_R/W"};
                        attachment = "";
                        priority = 6;
                        maxweight = 600;
                        UIposition[] = {0.29,0.1};
                        bay = 1;
                    };
                    class pylons2: pylons1  //  Center
                    {
                        hardpoints[] = {"v105_Hot3_2rnd",   "v105_AnvilSmokes_R/W"};
                        priority = 6;
                        attachment = "";
                        maxweight = 600;
                        UIposition[] = {0.29,0.28};
                        mirroredMissilePos = 1;
                        bay = 1;
                    };
                    class pylons3: pylons1  //  Outer
                    {
                        hardpoints[] = {"v105_Hydra_Generic","v105_Sidewinder_Single",  "v105_AnvilSmokes_R/W"};
                        priority = 5;
                        attachment = "";
                        maxweight = 600;
                        UIposition[] = {0.29,0.5};
                        bay = 1;
                    };
                };
            };
        };
		class VehicleSpawnerInfo
		{
		    scope=0;
		    vehicle="Falcon";
		    icon="OPTRE_Vehicles\falcon\data\icon.paa";
		    liveries[]=
		    {
		        "[""VC-497"",[""105th_Vehicles\textures\Falcon\v105_Falcon_co.paa"",""105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa"",""105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa"",""105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa""]]",
                "[""Desert"",[""V_FZ_Vehicles\data\Falcon\V_UH144_DES_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_DES_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_DES_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_DES_S_CO.paa""]]",
		        "[""Woodland"",[""V_FZ_Vehicles\data\Falcon\V_UH144_WDL_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_WDL_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_WDL_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_WDL_S_CO.paa""]]",
		        "[""Jungle"",[""V_FZ_Vehicles\data\Falcon\V_UH144_JNG_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_JNG_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_JNG_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_JNG_S_CO.paa""]]",
		        "[""Urban"",[""V_FZ_Vehicles\data\Falcon\V_UH144_URB_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_URB_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_URB_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_URB_S_CO.paa""]]",
		        "[""Black"",[""V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_BLK_S_CO.paa""]]",
		        "[""Frost"",[""V_FZ_Vehicles\data\Falcon\V_UH144_FRS_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_FRS_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_FRS_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_FRS_S_CO.paa""]]",
		        "[""Tundra"",[""V_FZ_Vehicles\data\Falcon\V_UH144_TND_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_TND_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_TND_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_TND_S_CO.paa""]]",
		        "[""Dunes"",[""V_FZ_Vehicles\data\Falcon\V_UH144_DUN_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_DUN_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_DUN_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_DUN_S_CO.paa""]]",
		        "[""Classic"",[""V_FZ_Vehicles\data\Falcon\V_UH144_CLS_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_CLS_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_CLS_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_CLS_S_CO.paa""]]",
		        "[""Olive"",[""V_FZ_Vehicles\data\Falcon\V_UH144_OD3_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_OD3_A_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_OD3_T_CO.paa"",""V_FZ_Vehicles\data\Falcon\V_UH144_OD3_S_CO.paa""]]"
		    };
		};
    };

    class v105_Falcon_Unarmed_Base: v105_Falcon_Base
    {
        displayName="UH-144 Falcon [Unarmed Base]";
		hiddenSelections[]={"camo1","camo2","camo3","camo4","clan","clan_text","insignia","attach_gun"};
		weapons[]={
			"CMFlareLauncher",
			"Laserdesignator_mounted"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries"
		};
    };

    /* End of Base Falcons */

    /* Start of Unarmed Falcons */

    class v105_UH144: v105_Falcon_Unarmed_Base
    {
		scope=2;
		scopeCurator=2;
        displayName="UH-144 Falcon [Navy]";
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "Unarmed";
		};
    };

    class v105_UH144_MED: v105_Falcon_Unarmed_Base
    {
		scope=2;
		scopeCurator=2;
		threat[]={0,0,0};
        displayName="UH-144-MED Falcon [Navy]";
        class EventHandlers: EventHandlers
        {
            class v105_Pod_EH
            {
                init = "0 = _this spawn V_FZ_fnc_FalconAddMedicalPod";
            };
        };
		class TransportItems
		{
			#include "cfg\VehicleGearMedical.hpp"
		};
        TransportSoldier=0;
        cargoAction[]={};
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "Medevac";
		};
    };

    /* End of Unarmed Falcons */

    /* Start of Armed Falcons */

    class v105_UH144_A: v105_Falcon_Base
    {
		scope=2;
		scopeCurator=2;
        displayName="UH-144 Falcon (Armed) [Navy]";
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "20mm Cannon";
		};
    };

    class v105_UH144S_AM: v105_Falcon_Base
    {
		scope=2;
		scopeCurator=2;
        displayName="UH-144S-GL Falcon [Navy]";

		weapons[]=
		{
			"CMFlareLauncher",
			"v105_FalconGL"
		};
		magazines[]=
		{
			"v105_50Rnd_82mm_shells","v105_40m_150Rnds",
			"168Rnd_CMFlare_Chaff_Magazine",
		};
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "82mm GL";
		};
    };

	class v105_UH144S_ARC: v105_Falcon_Base
    {
        displayName="UH-144S-RC Falcon [Navy]";

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
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "Minigun";
		};
    };

    class v105_UH144S_A: v105_Falcon_Base
    {
		scope=2;
		scopeCurator=2;
        displayName="UH-144SG Falcon (Armed) [Navy]";
		class EventHandlers: EventHandlers
		{
		    class v105_AddMGs_EH
		    {
			    init = "0 = _this spawn V_FZ_fnc_FalconAddMGs";
		    };
		};
		class VehicleSpawnerInfo: VehicleSpawnerInfo
		{
		    scope = 1;
		    type = "20mm/SG";
		};
    };

    /* End of Armed Falcons */