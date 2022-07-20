#define StabilizedInAxesNone 0
#define StabilizedInAxisX 1
#define StabilizedInAxisY 2
#define StabilizedInAxesBoth 3
#define StabilizedInAxesXYZ 4

//Pelicans
	class OPTRE_Pelican_F;
	class OPTRE_Pelican_armed:OPTRE_Pelican_F
	{
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = 
		{
			{-0.85,-2,1},
			{0.85,-2,1}
		};
		class Turrets:Turrets
		{
			class CopilotTurret:CopilotTurret
			{
				minElev=-90;
				maxElev=30;
				initElev=0;
				minTurn=-90;
				maxTurn=90;
				initTurn=0;
			};
		};
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
	};
 
	class v105_D77HTCI_AV_TestPlatform_Pelican: OPTRE_Pelican_armed
	{
		armor = 200;
		armorHull = 0.5;
		armorEngine = 0.6;
		armorAvionics = 1.4;
		armorVRotor = 0.5;
		armorHRotor = 0.7;
		armorMissiles = 1.6;
		armorGlass = 0.4;
		side=1;
		scope=1;
		scopeCurator=1;
		forceInGarage=1;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/TEST Pelican [Navy]";
        fuelCapacity=1200;
        ace_hellfire_addLaserDesignator = 1;
		#include "cfg\HUD\CfgHUD.hpp"
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
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {
			{-0.85,-2,1},
			{0.85,-2,1}
		};
		soundLocked[]=
		{
			"105th_Vehicles\cfg\Sounds\F14_RWR_LockWarning",
			0.31622776,
			1
		};
		soundIncommingMissile[]=
		{
			"105th_Vehicles\cfg\Sounds\F14_RWR_IncomingMissile",
			0.31622776,
			1
		};
		class EventHandlers
		{
			class FIR_AWS_Common_EH
			{
				init = "[_this select 0,'yes'] execVM ""\FIR_AirWeaponSystem_US\Script\init\init.sqf"";";
				hit = "_this call bis_fnc_planeAiEject";
			};
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,true] call V105_Vehicles_fnc_RegisterThrusters;";
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
            maxMouseXRotSpeed = 0.75;
            maxMouseYRotSpeed = 0.75;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";

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



		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=1;
				CanEject=0;
				startEngine=0;
				minElev=-90;
				maxElev=30;
				initElev=0;
				minTurn=-100;
				maxTurn=100;
				initTurn=0;
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				class Viewoptics: ViewOptics
				{
					
					minAngleX=-360;
					maxAngleX=360;
					initAngleX=0;
					minAngleY=-360;
					maxAngleY=360;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
				};
				class OpticsIn
				{
					class Wide
					{
						directionStabilized = 1;

						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						
						opticsDisplayName="WFOV";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="MFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="NFOV";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov=0.89999998;
						minFov=0.25;
						maxFov=1.25;
						initAngleX=0;
						initAngleY=0;
						minAngleX=-65;
						maxAngleX=85;
						minAngleY=-150;
						maxAngleY=150;
						minMoveX=-0.2;
						maxMoveX=0.2;
						minMoveY=-0.1;
						maxMoveY=0.1;
						minMoveZ=-0.1;
						maxMoveZ=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class Components
				{
					class TransportPylonsComponent
						{
							UIPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
							class pylons
							{
								class pylons1
								{
									maxweight=300;
									hardpoints[]={"v105_UnguidedRockets","105th_AA_Missiles" ,"Pelican_Utility"};
									attachment="v105_FIR_Hydra_P_7rnd_M";
									bay=-1;
									priority=2;
									UIposition[]={0.5,0.25};
									turret[]={MainTurret};
								};
							};
						};
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							
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
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							
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
				#include "cfg\HUD\CfgHUD.hpp"
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.56234133,
					1,
					30
				};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				memoryPointGun="machinegun";
				gunBeg="S_start";
				gunEnd="S_end";
				memoryPointGunnerOptics="gunner1";
				selectionFireAnim="zasleh";
				castGunnerShadow=0;
				viewGunnerShadow=0;
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction="pilot_Heli_Light_02";
				gunnerGetInAction="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction="";
				
				gunnerOpticsModel="";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500};
				discreteDistanceInitIndex=5;
				showAllTargets=4;
				stabilizedInAxes = 3;
				
				weapons[]=
				{
					"gatling_20mm",
					
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"1000Rnd_20mm_shells","1000Rnd_20mm_shells",
					"Laserbatteries"
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun1";
						passThrough=0.30000001;
						radius=0.2;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun2";
						passThrough=0.30000001;
						radius=0.2;
					};
				};
				ace_hellfire_addLaserDesignator = 1;
					
			}; //end mainturret
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_l";
				memoryPointsGetInGunnerDir="pos_cargo_l_dir";
				gunnerName="Passenger (Left door)";
				proxyIndex=1;
				maxElev=15;
				minElev=-25;
				maxTurn=10;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_r";
				memoryPointsGetInGunnerDir="pos_cargo_r_dir";
				gunnerName="Passenger (Right door)";
				proxyIndex=2;
				maxElev=15;
				minElev=-25;
				maxTurn=50;
				minTurn=-10;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="cargoDoors";
				memoryPointGunnerOptics="";
			};
		}; //end Turrets
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=300;
						hardpoints[]={"v105_UnguidedRockets","105th_AA_Missiles" ,"Pelican_Utility"};
						attachment="v105_FIR_Hydra_P_7rnd_M";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.10};
						turret[]={};
					};
					class pylons2: pylons1
					{
						hardpoints[]={"v105_UnguidedRockets","105th_AA_Missiles" ,"Pelican_Utility","105th_Hellfires","105th_HOTs"};
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
						hardpoints[] = {"v105_UnguidedRockets","105th_AA_Missiles" ,"Pelican_Utility","105th_Hellfires","105th_HOTs"};
						priority = 5;
						attachment = "v105_FIR_Hydra_P_7rnd_M";
						maxweight = 300;
						UIposition[] = {0.1,0.40};
                        bay = -1;
                        mirroredMissilePos=2;	
					};
					class pylons5:pylons1
					{
						hardpoints[] = {"v105_UnguidedRockets","105th_AA_Missiles" ,"Pelican_Utility"};
						priority = 5;
						attachment = "v105_FIR_Hydra_P_7rnd_M";
						maxweight = 300;
						UIposition[] = {0.1,0.50};
                        bay = -1;	
						mirroredMissilePos=1;				
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					class Default
					{
						displayName="CAP";
						attachment[]=
						{
							"v105_FIR_AIM9X_P_2rnd_M", //1
							"v105_FIR_AIM9X_P_2rnd_M", //2
							"v105_FIR_GBU12_P_1rnd_M", //3
							"v105_FIR_AIM9X_P_2rnd_M", //4
							"v105_FIR_AIM9X_P_2rnd_M", //5
						};
					};
					class CAS_Rockets
					{
						displayName="CAS: Light";
						attachment[]=
						{
							"v105_FIR_Hydra_P_7rnd_M", //1
							"v105_FIR_Hydra_P_7rnd_M", //2
							"v105_FIR_GBU12_P_1rnd_M", //3
							"v105_FIR_Hydra_P_7rnd_M", //4
							"v105_FIR_Hydra_P_7rnd_M", //5
						};
					};
					
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=200;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=200;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=300;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=300;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
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
		class UserActions
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
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};    
            class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageAfterburners";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			}; 
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")  and !(this getVariable[""v105_pod_attached"",false])";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				userActionID=9;
			};
			
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)  and !(this getVariable[""v105_pod_attached"",false])";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])  and !(this getVariable[""v105_pod_attached"",false])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND ((driver this) isEqualTo player))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};			
		};
	};	//end TEST Pelican

	class v105_D77HTCI_AV_Minigun_Pelican:v105_D77HTCI_AV_TestPlatform_Pelican
	{
		scope=2;
		scopeCurator=2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV-MG Pelican [Navy]";
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

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"HOW_145x114_minigun",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"HOW_1200Rnd_145x114_Red_Belt",
					"HOW_1200Rnd_145x114_Red_Belt",
					"Laserbatteries"
				};
			};
		};
	}; 
	class v105_D77HTCI_AV_RotaryCannon_Pelican : v105_D77HTCI_AV_TestPlatform_Pelican
	{
		scope=2;
		scopeCurator=2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV-RC Pelican [Navy]";
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

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"gatling_20mm",
					
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"1000Rnd_20mm_shells","1000Rnd_20mm_shells",
					"Laserbatteries"
				};
			};
		};
	};
	class v105_D77HTCI_AV_40mmCannon_Pelican : v105_D77HTCI_AV_TestPlatform_Pelican
	{
		scope=2;
		scopeCurator=2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV-40mm Pelican [Navy]";
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

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OPTRE_CHAINGUN40",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_1200Rnd_40mm_HE",
					"OPTRE_1200Rnd_40mm_HE",
					"Laserbatteries"
				};
			};
		};
	};
	class v105_D77HTCI_AV_30mmCannon_Pelican : v105_D77HTCI_AV_TestPlatform_Pelican
	{
		scope=2;
		scopeCurator=2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI/AV-30mm Pelican [Navy]";
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

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"v105_gatling_30mm_HE",
 					"v105_gatling_30mm_AP",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"250Rnd_30mm_APDS_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green",
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"Laserbatteries"
				};
			};
		};
	};
	class v105_D77ATCI_Crow_Gunship:v105_D77HTCI_AV_TestPlatform_Pelican
	{
		scope=2;
		scopeCurator=2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77-ATCI Crow [Navy]";
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
		class EventHandlers
		{
		    class v105_Pod_EH
		    {
			    init = "0 = _this spawn V_FZ_fnc_PelicanAddPointDefTurret";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OPTRE_M370",
					"OPTRE_M68_GAUSS",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_750Rnd_70mm_HE",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"OPTRE_3Rnd_ALIM_Gauss_Slugs",
					"Laserbatteries"
				};
			};
		};
		
	};



	class VES_D77HTCI;
	class OPTRE_Pelican_unarmed;
	class v105_D77HTCI: OPTRE_Pelican_unarmed
    {
        
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D77H-TCI Pelican [Navy]";
        fuelCapacity=1200;
		armor=200;
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
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {
			{-0.85,-2,1},
			{0.85,-2,1}
		};
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Base_co.paa"
        };
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,true] call V105_Vehicles_fnc_RegisterThrusters;";
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
			class TransportPylonsComponent
			{
				UIPicture="\OPTRE_Vehicles\Pelican\pelicanPylonPic.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=300;
						hardpoints[]={"Pelican_Utility"};
						attachment="OPTRE_M_ANVILSMK_W_Rocket";
						bay=-1;
						priority=2;
						UIposition[]={0.1,0.10};
						turret[]={};
					};
					class pylons2: pylons1
					{
						hardpoints[]={"Pelican_Utility"};
						UIposition[]={0.1,0.20};
						attachment = "OPTRE_M_ANVILSMK_W_Rocket";
						maxweight = 300;
                        bay = -1;
                        
					};
					
					class pylons4: pylons1
					{
						hardpoints[] = {"Pelican_Utility"};
						priority = 5;
						attachment = "OPTRE_M_ANVILSMK_W_Rocket";
						maxweight = 300;
						UIposition[] = {0.1,0.40};
                        bay = -1;
                        mirroredMissilePos=2;	
					};
					class pylons5:pylons1
					{
						hardpoints[] = {"Pelican_Utility"};
						priority = 5;
						attachment = "OPTRE_M_ANVILSMK_W_Rocket";
						maxweight = 300;
						UIposition[] = {0.1,0.50};
                        bay = -1;	
						mirroredMissilePos=1;				
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="Empty";
						attachment[]={};
					};
					
				};
			};
		};
		class UserActions
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
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				
				userActionID=53;
			};    
            class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageAfterburners";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				
				userActionID=55;
			}; 
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")  and !(this getVariable[""v105_pod_attached"",false])";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				
				userActionID=9;
			};
			
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)  and !(this getVariable[""v105_pod_attached"",false])";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])  and !(this getVariable[""v105_pod_attached"",false])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};			
		};
    };
	class v105_D78DHTC: v105_D77HTCI
	{
		scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Pelican";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D78TC Pelican [Troop Carrier]";
        fuelCapacity=1200;
		class EventHandlers
		{
		    class v105_Pod_EH
		    {
			    init = "0 = _this spawn v105_Vehicles_fnc_PelicanAddTransportPod";
			};
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,true] call V105_Vehicles_fnc_RegisterThrusters;";
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
	class v105_D77HTCI_AV_Minigun_Pelican_WildRide:v105_D77HTCI_AV_Minigun_Pelican
	{
		displayName="D77H-TCI/AV-MG Pelican [Call For Fire]";
		hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\v105_Pelican_Shark_Call_For_Fire.paa"
        };
	};
	class v105_D77HTCI_AV_40mmCannon_Pelican_WildRide:v105_D77HTCI_AV_40mmCannon_Pelican
	{
		displayName="D77H-TCI/AV-40mm Pelican [Wild Ride]";
		hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Pelican\v105_Pelican_Shark_105th_Wild_Ride.paa"
        };
	};
