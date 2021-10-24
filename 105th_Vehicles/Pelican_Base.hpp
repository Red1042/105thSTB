 //Pelicans
	class VES_D77HTCI_A;
    class VES_D77HTCI;
 
 
 class v105_D77HTCI_A: VES_D77HTCI_A
    {
        
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
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
		/*
        armorHull = 0.5;
        armorEngine = 0.6;
        armorAvionics = 1.4;
        armorVRotor = 0.5;
        armorHRotor = 0.7;
        armorMissiles = 1.6;
        armorGlass = 0.5;
        armor = 200;
        irTarget=2;
		irTargetSize=3;
        radarTarget=2;
		radarTargetSize=3;
        class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.1;
				visual="Hull";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.40000001;
				minimalHit=0.050000001;
				explosionShielding=1.5;
			};
			class HitHRotor: HitHRotor
			{
				armor=2.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=1.3;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
		};
        */
		class Components: Components
		{
			class TransportCountermeasuresComponent;
			class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components:components{};
			};
			class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
			{
				class components:components{};
			};
			class TransportPylonsComponent
			{
				
				class pylons
				{
					class pylons1
					{
						maxweight=300;
						hardpoints[]={"105th_PelicanUnguided","105th_AntiAir","105th_PelicanHeavy"};
						attachment="v105_Hydra_M247_P_7Rnd_M";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.10};
						turret[]={};
					};
					class pylons2: pylons1
					{
						hardpoints[]={"105th_PelicanUnguided","105th_PelicanMed","105th_PelicanHeavy"};
						UIposition[]={0.1,0.20};
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"105th_PelicanBomb","FIR_F16_Under_HP"};
						priority = 5;
						attachment = "v105_FIR_Mk83_GP_Navy_P_1rnd_M";
						maxweight = 2000;
						UIposition[] = {0.1,0.30};
                        bay = -1;
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"105th_PelicanUnguided","105th_PelicanMed","105th_PelicanHeavy"};
						priority = 5;
						attachment = "v105_Hydra_M247_P_7Rnd_M";
						maxweight = 300;
						UIposition[] = {0.1,0.40};
                        bay = -1;
                        mirroredMissilePos=2;	
					};
					class pylons5:pylons1
					{
						hardpoints[] = {"105th_PelicanUnguided","105th_AntiAir","105th_PelicanHeavy"};
						priority = 5;
						attachment = "v105_Hydra_M247_P_7Rnd_M";
						maxweight = 300;
						UIposition[] = {0.1,0.50};
                        bay = -1;	
						mirroredMissilePos=1;				
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
        class Components: Components
		{
			class TransportCountermeasuresComponent;
			class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components:components{};
			};
			class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
			{
				class components:components{};
			};
			
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
		author="N-4 Logistics";
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
        author="N-4 Logistics";
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
        author="N-4 Logistics";
        displayName="D77H-TCI/AV Pelican [Smith & Ragnarson]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_Smith_Ragnarson_co.paa"
        };
    }; 
    class v105_HOW_D77HTCI_SHARK: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV Pelican (Shark)";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark.paa"
        };
    }; 
    class v105_HOW_D77HTCI_SHARKv2: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV Pelican (Shark 2)";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_By_KeenV2.paa"
        };
    }; 
    class v105_HOW_D77HTCI_SHARKv1_5: v105_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV Pelican (Shark)";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_By_KeenV1.5.paa"
        };
    }; 