class OPTRE_AV22_Sparrowhawk_Base;

class v105_AVXX_Sparrowhawk_Base: OPTRE_AV22_Sparrowhawk_Base
{
    dlc="105th";
    author="105th Logistics Team";
    displayName="AVN-XX-Sparrowhawk Base";
    editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_SparrowHawks";
    side=   1;
    scope=  1;
    scopeArsenal=   1;
    scopeCurator=   1;
    forceInGarage=  0;
    maxFordingDepth=    5;
    tf_hasLRradio=  1;
    tf_isolatedAmount=  .35;
    tf_range=   20000;
    armor = 250;
    destrType="DestructWreck";
	gearRetracting=1;
	mapSize=25;
    lockDetectionSystem="2+4+8+16";
	incomingMissileDetectionSystem="2+4+8+16";
	weaponLockSystem="2+4+8+16";
	nvScanner=1;
	allowTabLock=1;
	gunnerCanSee=31;
	commanderCanSee=31;
	driverCanSee=31;
	canUseScanner=1;
	irScanToEyeFactor=1;
	irScanRangeMin=200;
	irScanRangeMax=10000;
	irScanGround=1;
	irTarget=1;
	irTargetSize=2;
	laserScanner=1;
	laserTarget=0;
	radarTarget=1;
	radarTargetSize=2;
	radarType=4;
	receiveRemoteTargets=1;
	reportRemoteTargets=1;
	reportOwnPosition=1;
	showAllTargets=2;
    model="OPTRE_Vehicles\Sparrowhawk\Sparrowhawk.p3d";
    icon="OPTRE_Vehicles\Pelican\Data\icon.paa";
    picture="OPTRE_Vehicles\Pelican\Data\icon2.paa";
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo6",
		"camo7",
		"camo8",
		"camo9",
		"camo10",
		"camo11",
		"camo12",
		"camo13",
		//"attach_noseCannon",
		"attach_noseLaser",
		"attach_CannonLight",
		"attach_Pylons",
		"attach_Decal1",
		"attach_Decal2"
	};
    hiddenSelectionsTextures[]=
	{
        "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
		"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
	};
    class AnimationSources
    {
		class Gatling
		{
			source="revolving";
			weapon="OPTRE_M9109";
		};
	};
    gunBeg[]=
	{
		"z_gunL_muzzle",
		"z_gunR_muzzle"
	};
	gunEnd[]=
	{
		"z_gunL_chamber",
		"z_gunR_chamber"
	};
    weapons[]=
    {
		"CMFlareLauncher",
		"Laserdesignator_mounted",
        "OPTRE_GUA23B",
    };
    magazines[]=
    {
        "OPTRE_2000Rnd_20mm_HEIAP",
		"168Rnd_CMFlare_Chaff_Magazine",
		"Laserbatteries",
    };
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[]=
			{
					"OPTRE_M230",
					"Laserdesignator_mounted"
			};
			magazines[]=
			{
				"OPTRE_100Rnd_50mm_HE",
				"OPTRE_100Rnd_50mm_HE",
				"OPTRE_100Rnd_50mm_HE",
				"OPTRE_100Rnd_50mm_APFSDS",
				"Laserbatteries"
			};
		};
	};
	memoryPointDriverOptics="Light_L";
	memoryPointLMissile="Rocket_1";
	memoryPointRMissile="Rocket_2";
	unitInfoType="RscOptics_CAS_Pilot";
	driverWeaponsInfoType="RscOptics_CAS_01_TGP";

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
	class UserActions
	{
		#include "cfg\ThrusterActions.hpp"
	};
    class Components : Components
    {
        class TransportPylonsComponent
		{
			UIPicture="OPTRE_Vehicles\Sparrowhawk\sparrowhawkPylonImage.paa";
			class pylons
			{
				class WingPylonRight1
				{
					maxweight=560;
					hardpoints[]=
					{
					    "v105_UnguidedRockets",
                        "v105_GuidedRockets",
                        "105th_HOTs",
                        "105th_Hellfires",
                        "105th_AA_Missiles",
                        "OPTRE_8Rnd_C2GMLS_missiles"
					};
                    attachment= "OPTRE_8Rnd_C2GMLS_missiles";
					bay=-1;
					priority=3;
					UIposition[]={0.34999999,0.1};
					turret[]={};
				};
				class WingPylonRight2: WingPylonRight1
				{
                    hardpoints[]=
					{
					    "v105_UnguidedRockets",
                        "v105_GuidedRockets",
                        "105th_HOTs",
                        "105th_Hellfires",
                        "105th_AA_Missiles",
                        "OPTRE_8Rnd_C2GMLS_missiles"
					};
					priority=2;
				    UIposition[]={0.30000001,0.134};
                    attachment= "OPTRE_8Rnd_C2GMLS_missiles";
                };
				class WingPylonRight3: WingPylonRight1
				{
                    hardpoints[]=
					{
					    "v105_UnguidedRockets",
                        "v105_GuidedRockets",
                        "105th_HOTs",
                        "105th_Hellfires",
                        "105th_AA_Missiles",
                        "OPTRE_8Rnd_C2GMLS_missiles"
					};
					priority=1;
					UIposition[]={0.34999999,0.167};
                    attachment= "OPTRE_8Rnd_C2GMLS_missiles";
                };
				class WingPylonLeft3: WingPylonRight3
				{
                    hardpoints[]=
					{
						"v105_UnguidedRockets",
                        "v105_GuidedRockets",
                        "105th_HOTs",
                        "105th_Hellfires",
                        "105th_AA_Missiles",
                        "OPTRE_8Rnd_C2GMLS_missiles"
					};
					mirroredMissilePos=3;
					UIposition[]={0.34999999,0.40000001};
                    attachment= "OPTRE_8Rnd_C2GMLS_missiles";
				};
				class WingPylonLeft2: WingPylonRight2
				{
                    hardpoints[]=
					{
						"v105_UnguidedRockets",
                        "v105_GuidedRockets",
                        "105th_HOTs",
                        "105th_Hellfires",
                        "105th_AA_Missiles",
                        "OPTRE_8Rnd_C2GMLS_missiles"
					};
					mirroredMissilePos=2;
				    UIposition[]={0.30000001,0.43399999};
                    attachment= "OPTRE_8Rnd_C2GMLS_missiles";
				};
				class WingPylonLeft1: WingPylonRight1
				{
                    hardpoints[]=
					{
						"v105_UnguidedRockets",
                        "v105_GuidedRockets",
                        "105th_HOTs",
                        "105th_Hellfires",
                        "105th_AA_Missiles",
                        "OPTRE_8Rnd_C2GMLS_missiles"
					};
					mirroredMissilePos=1;
					UIposition[]={0.34999999,0.46700001};
                    attachment= "OPTRE_8Rnd_C2GMLS_missiles";
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
						maxRange=1500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=1500;
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
						minRange=500;
						maxRange=1500;
						objectDistanceLimitCoef=1;
						viewDistanceLimitCoef=1;
					};
					class GroundTarget
					{
						minRange=500;
						maxRange=1500;
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
						minRange=2000;
						maxRange=2000;
						objectDistanceLimitCoef=-1;
						viewDistanceLimitCoef=-1;
					};
					class GroundTarget
					{
						minRange=2000;
						maxRange=2000;
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
	class VehicleSpawnerInfo
	{
        scope=0;
		vehicle="SparrowHawk";
		icon="105th_Vehicles\textures\Icons\SparrowHawk.paa";
		liveries[]=
		{
		    "[""VC-497"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
            "[""Desert"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
		    "[""Woodland"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
		    "[""Jungle"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Urban"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Black"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Frost"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Tundra"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Dunes"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Classic"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]",
	        "[""Olive"",[""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa"",""V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa""]]"
	    };
	};
};

class v105_AVXXN_50mmCannon_SparrowHawk: v105_AVXX_Sparrowhawk_Base
{
    displayName="AV/XXN-50mm Sparrowhawk";
    side=   1;
    scope=  2;
    scopeCurator=   2;
	class VehicleSpawnerInfo: VehicleSpawnerInfo
	{
        scope = 1;
        type = "50mm Cannon";
	};
};