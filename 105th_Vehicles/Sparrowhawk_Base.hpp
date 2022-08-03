    class OPTRE_AV22_Sparrowhawk_Base;

    class v105_AVXX_Sparrowhawk_Base: OPTRE_AV22_Sparrowhawk_Base
    {
        dlc="105th";
        author="105th Logistics Team";
        displayName="AVN-XX-Sparrowhawk Base";
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Hornhawk";
        side=   1;
        scope=  1;
        scopeArsenal=   1;
        scopeCurator=   1;
        forceInGarage=  0;
        maxFordingDepth=    5;
        tf_hasLRradio=  1;
        tf_isolatedAmount=  .35;
        tf_range=   20000;
        armor=  175;
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
			"attach_Decal1",
			"attach_Decal2",
            "attach_Pylons",
			"attach_noseLaser",
			"attach_CannonLight"
        };
        hiddenSelectionsTextures[]=
		{
			"optre_vehicles\sparrowhawk\data\body_01_standard_co.paa",
			"optre_vehicles\sparrowhawk\data\body_02_standard_co.paa",
			"optre_vehicles\sparrowhawk\data\body_03_standard_co.paa",
			"optre_vehicles\sparrowhawk\data\body_04_standard_co.paa",
			"optre_vehicles\sparrowhawk\data\body_05_standard_co.paa",
			"optre_vehicles\sparrowhawk\data\autocannon_standard_co.paa",
			"optre_vehicles\sparrowhawk\data\feed_autocannon_standard_co.paa"
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
		memoryPointDriverOptics="Light_L";
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		unitInfoType="RscOptics_CAS_Pilot";
		driverWeaponsInfoType="RscOptics_CAS_01_TGP";

		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
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
			minTurn=-90;
			maxTurn=90;
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
                statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
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
                statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
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
                statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
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
                statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
                textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
                userActionID=53;
            };
        };
        class Components : Components
        {
            class TransportPylonsComponent
			{
				UIPicture="\OPTRE_Vehicles\Sparrowhawk\sparrowhawkPylonImage.paa";
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
    };
    class v105_AVXXN: v105_AVXX_Sparrowhawk_Base
    {
        displayName=    "AV-XXN Sparrowhawk";
        side=   1;
        scope=  2;
        scopeArsenal=   2;
        scopeCurator=   2;
        forceInGarage=  1;
		model="OPTRE_Vehicles\Sparrowhawk\Sparrowhawk.p3d";
		icon="OPTRE_Vehicles\Pelican\Data\icon.paa";
        picture="OPTRE_Vehicles\Pelican\Data\icon2.paa";
        textures[]=
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
    };