 //Pelicans
	class VES_D77HTCI_A;
    class VES_D77HTCI;
 
 
 class v105_D77HTCI_A: VES_D77HTCI_A
    {
        
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Keen and Howard";
        displayName="D77H-TCI/AV Pelican [Navy]";
        fuelCapacity=1200;
		weapons[]=
		{
			
			"HOW_Flares",
			"Laserdesignator_pilotCamera"

		};
		magazines[]=
		{
            "Laserbatteries",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
		
		class Components: Components
		{
			class TransportCountermeasuresComponent;
			
			class SensorsManagerComponent
			{
				class Components
				{
				    class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=400;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=2000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,12000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,12000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			
			class TransportPylonsComponent
			{
				UIPicture="\OPAEX_Pelican\Pelican.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=600;
						hardpoints[]={"105th_PelicanLite","105th_PelicanMed","105th_PelicanHeavy","105th_PelicanBomb"};
						attachment="FIR_Hydra_M247_P_7rnd_M";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.5};
						turret[]={};
					};
					class pylons2: pylons1
					{
						mirroredMissilePos=1;
						hardpoints[]={"105th_PelicanLite","105th_PelicanMed","105th_PelicanHeavy","105th_PelicanBomb"};
						UIposition[]={0.1,0.1};
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanMed","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 600;
						UIposition[] = {0.1,0.45};
                        bay = -1;
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanMed","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 1000;
						UIposition[] = {0.1,0.40};
                        bay = -1;
												
					};
					class pylons5:pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanMed","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 600;
						UIposition[] = {0.1,0.15};
                        bay = -1;	
						mirroredMissilePos=3;				
					};
					class pylons6:pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanMed","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 600;
						UIposition[] = {0.1,0.20};
                        bay = -1;	
						mirroredMissilePos=4;
										
					};
				};
			};
		};
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Base_co.paa"
        };
		 class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -120;
            maxTurn = 120;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
        soundLocked[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
    };
    
    class v105_D77HTCI: VES_D77HTCI
    {
        
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI Pelican [Navy]";
        fuelCapacity=1200;
		weapons[]=
		{
			"HOW_Flares",
            "Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"Laserbatteries",
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Base_co.paa"
        };
		 class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
		
		class Components: Components
		{
			class TransportCountermeasuresComponent;
			class SensorsManagerComponent
			{
				class Components
				{
				    class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=400;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=2000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,12000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,12000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			
		};
		
        soundLocked[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
    };
	class v105_D78DHTC:v105_D77HTCI
	{
		scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D78TC Pelican [Troop Carrier]";
        fuelCapacity=1200;
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_PelicanAddTransportPod";
		};
		 class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
        soundLocked[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedOn1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"A3\Sounds_F_Jets\vehicles\air\Shared\FX_Plane_Jet_lockedon2",
			1,
			1.5
		};
	};

/*	class v105_D78HTCI_AV:v105_D77HTCI_A
	{
		author="Keen and Howard";
        displayName="D78H-TCI/AV Gunship Pelican [Navy]";
		class Turrets:Turrets
		{
			class CopilotTurret:CopilotTurret
			{
				weapons[]=
				{
					"v105_gatling_30mm",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green",
					"Laserbatteries"
				};
				stabilizedInAxes=4;
			};
		};
		class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
	}; */
  
 	class v105_D77HTCI_REACH: VES_D77HTCI
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Archived";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI Pelican [Reach Around]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Reach_co.paa"
        };
	
    };

	 class v105_HOW_D77HTCI_Keen: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Archived";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI Pelican/AV [Keen]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Reach_Keen_co.paa"
        };
    }; 
	 class v105_HOW_D77HTCI_BulcHori: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Archived";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI Pelican/AV [Bulck & Horizon]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_Bulck_Horizon_co.paa"
        };
    }; 
	class v105_HOW_D77HTCI_REACH_BubOday: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Archived";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV Pelican [Bubba & ODay]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_Bubba_ODay_co.paa"
        };
    };	
	 class v105_HOW_D77HTCI_SHARK_MeatWind: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Archived";
        dlc="105th";
        author="Howard";
        displayName="D77H-TCI/AV Pelican [Meatballs & Mailwind]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_Meatballs_Mailwind_2_co.paa"
        };
    }; 
	 class v105_HOW_D77HTCI_SHARK_Ragith: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Archived";
        dlc="105th";
        author="Howard";
        displayName="D77H-TCI/AV Pelican [Smith & Ragnarson]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_Smith_Ragnarson_co.paa"
        };
    }; 