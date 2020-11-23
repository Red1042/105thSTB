 
 
 
 class v105_D77HTCI_A: VES_D77HTCI_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
        displayName="D77H-TCI/AV Pelican [Goshawk]";
        fuelCapacity=1200;
		weapons[]=
		{
			
			"HOW_Flares",
			
		};
		magazines[]=
		{
			
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
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10;
							maxRange = 8000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						class GroundTarget
						{
							minRange = 10;
							maxRange = 8000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						angleRangeHorizontal = 330;
						angleRangeVertical = 330;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange = 10;
							maxRange = 8000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						class GroundTarget
						{
							minRange = 10;
							maxRange = 8000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						angleRangeHorizontal = 330;
						angleRangeVertical = 330;
					};
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,16000,8000};
								resource="RscCustomInfoSensors";
							};
						};
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
						hardpoints[]={"105th_PelicanLite","105th_PelicanHeavy","105th_PelicanBomb"};
						attachment="FIR_Hydra_M247_P_7rnd_M";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.5};
						turret[]={};
					};
					class pylons2: pylons1
					{
						mirroredMissilePos=1;
						hardpoints[]={"105th_PelicanLite","105th_PelicanHeavy","105th_PelicanBomb"};
						UIposition[]={0.1,0.1};
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 600;
						UIposition[] = {0.1,0.45};
                        bay = -1;
					};
					class pylons4: pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 1000;
						UIposition[] = {0.1,0.40};
                        bay = -1;
												
					};
					class pylons5:pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanHeavy","105th_PelicanBomb"};
						priority = 5;
						attachment = "FIR_Hydra_M247_P_7rnd_M";
						maxweight = 600;
						UIposition[] = {0.1,0.15};
                        bay = -1;	
						mirroredMissilePos=3;				
					};
					class pylons6:pylons1
					{
						hardpoints[] = {"105th_PelicanLite","105th_PelicanHeavy","105th_PelicanBomb"};
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
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_co.paa"
        };
		class UserActions : UserActions
		{
			class AMS_LiteOpen
			{
				displayName = "<t color='#739eff'>Open AMS Lite</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "player in this and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\AMS\AMS_Lite\AMS_Lite_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};
			class Aircraft_MFD_Open_N
			{
				displayName = "Open I-TGT System";
				position = "pos cano";
				radius = 15;
				shortcut = "User4";
				condition = "('FIR_TGTPOD' in weapons this or 'Laserdesignator_pilotCamera' in weapons this) and player in this and isengineon this";				
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf""";
				onlyforplayer = "false";
				hideOnUse = 1;
			};
			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User2";
				condition = "player in this and isengineon this and (this getvariable 'ECMJAMMER' == 'yes' or 'FIR_ECMPOD' in weapons this)";
				statement = "[this] execVM ""\FIR_AirWeaponSystem_US\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
				hideOnUse = 1;
			};						
		};
		
		class eventhandlers : EventHandlers
		{
			
			class FIR_AWS_Common_EH
			{
				Init = "[_this select 0,'yes'] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";			
				hit = "_this call bis_fnc_planeAiEject";
				landing = "[_this,true] call bis_fnc_aircraftTailhookAi";
				landingcanceled = "[_this,false] call bis_fnc_aircraftTailhookAi";
				engine = "_this call bis_fnc_aircraftFoldingWings";
				gear = "_this call bis_fnc_aircraftFoldingWings";			
			};			
		};
    };
    
    class v105_D77HTCI: VES_D77HTCI
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
        displayName="D77H-TCI Pelican [Navy]";
        fuelCapacity=1200;
		weapons[]=
		{
			"HOW_Flares"
		};
		magazines[]=
		{
			
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Base_co.paa"
        };
	
    };
    class v105_D77HTCI_REACH: VES_D77HTCI
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
        displayName="D77H-TCI Pelican [Reach Around]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Reach_co.paa"
        };
	
    };
    class v105_D77HTCIS: VES_D77HTCIS
    {
        side=1;
        scopeCurator = 2;
       	editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
        displayName="D77H-TCIS Pelican (MG) [Navy]";
        fuelCapacity=1200;
		weapons[]=
		{
			
			"HOW_Flares",	
		};
		magazines[]=
		{
			
			"HOW_320Rnd_Flare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Base_co.paa"
        };
    };
    class v105_D77HTCIS_REACH: VES_D77HTCIS
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
        displayName="D77H-TCI Pelican (MG) [Reach Around]";
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
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
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
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
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
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Mr. Hartley & Skyly Sky";
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
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
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
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="Howard";
        displayName="D77H-TCI/AV Pelican [Smith & Ragnarson]";
        fuelCapacity=1200;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_Smith_Ragnarson_co.paa"
        };
    };