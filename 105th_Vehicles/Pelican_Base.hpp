#define StabilizedInAxesNone 0
#define StabilizedInAxisX 1
#define StabilizedInAxisY 2
#define StabilizedInAxesBoth 3
#define StabilizedInAxesXYZ 4

/* Start of Config Override for OPTRE Pelican Base */

class OPTRE_Pelican_F: Helicopter_Base_H
{
    armor = 200;
    ace_fastroping_enabled = 1;
    ace_fastroping_ropeOrigins[] =
    {
        {-0.85,-2,1},
        {0.85,-2,1}
    };
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
            minElev=-90;
            maxElev=30;
            initElev=0;
            minTurn=-110;
            maxTurn=110;
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

/* End of Config Override for OPTRE Pelican Base */

/* Start of Base 105th Pelicans */

class v105_Pelican_Base: OPTRE_Pelican_F
{
    armor = 200; // In-case of other mods alters OPTRE_Pelican_F
    side=1;
    scope=1;
    scopeCurator=1;
    forceInGarage=1;
    editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Pelican";
    dlc="105th";
    author="S-4 Logistics";
    displayName="D77H-TCI/Pelican [Armed Base]";
    fuelCapacity=1200;
    ace_hellfire_addLaserDesignator = 1;
    crew="VES_Rifleman_MA5B_ODST";
    #include "cfg\HUD\CfgHUD.hpp"
    weapons[]=
    {
        "v105_Flares",
        "Laserdesignator_pilotCamera"
    };
    magazines[]=
    {
        "Laserbatteries",
        "v105_320Rnd_Flare_Chaff_Magazine",
        "v105_320Rnd_Flare_Chaff_Magazine"
    };
    hiddenSelections[] = {"camo1","camo3","clan","clan_text","insignia"};
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
    class EventHandlers: EventHandlers
    {
        class FIR_AWS_Common_EH
        {
            init = "[_this select 0,'yes'] execVM ""FIR_AirWeaponSystem_US\Script\init\init.sqf"";";
            hit = "_this call bis_fnc_planeAiEject";
        };
        class v105_RegisterThrusters_EH
        {
            init = "[(_this select 0),true,true] call V105_Vehicles_fnc_RegisterThrusters;";
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
                gunnerOpticsModel = "A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
            };
            class Medium: Wide
            {
                opticsDisplayName = "MFOV";
                initFov = "(14.4 / 120)";
                minFov = "(14.4 / 120)";
                maxFov = "(14.4 / 120)";
                gunnerOpticsModel = "A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
            };
            class Narrow: Wide
            {
                opticsDisplayName = "NFOV";
                initFov = "(4.8 / 120)";
                minFov = "0.01";
                maxFov = "(4.8 / 120)";
                gunnerOpticsModel = "A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
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
                    gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
                };
                class Medium: Wide
                {
                    initFov=0.093000002;
                    minFov=0.093000002;
                    maxFov=0.093000002;
                    opticsDisplayName="MFOV";
                    gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
                };
                class Narrow: Wide
                {
                    initFov=0.028999999;
                    minFov=0.028999999;
                    maxFov=0.028999999;
                    opticsDisplayName="NFOV";
                    gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
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
            memoryPointGunnerOptics="machinegun_end";
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
                "1000Rnd_20mm_shells",
                "1000Rnd_20mm_shells",
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
        #include "cfg\PelicanPassengerTurrets.hpp"
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
    #include "cfg\PelicanActions.hpp"
    class VehicleSpawnerInfo
    {
        scope=0;
        vehicle="Pelican";
        icon = "OPTRE_Vehicles\Pelican\data\icon.paa";
        liveries[]=
        {
            "[""VC-497"",[""105th_Vehicles\textures\Pelican\v105_Pelican_Base_co.paa""]]",
            "[""Desert"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa""]]",
            "[""Woodland"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa""]]",
            "[""Jungle"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa""]]",
            "[""Urban"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa""]]",
            "[""Black"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa""]]",
            "[""Frost"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa""]]",
            "[""Tundra"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa""]]",
            "[""Dunes"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa""]]",
            "[""Classic"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa""]]",
            "[""Olive"",[""V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa""]]"
        };
    };
};

class v105_Pelican_Unarmed_Base: v105_Pelican_Base
{
    displayName="D77H-TCI/Pelican [Unarmed Base]";
    hiddenSelections[] = {"camo1","camo3","clan","clan_text","insignia","attach_gun"};

    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            gunnerName="Co-Pilot";
            weapons[]=
            {
                "Laserdesignator_mounted"
            };
            magazines[]=
            {
                "Laserbatteries"
            };
        };
        #include "cfg\PelicanPassengerTurrets.hpp"
    };
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
                    hardpoints[] = {"Pelican_Utility"};
                    attachment="OPTRE_16Rnd_AnvilSMK_W_missiles";
                    bay=-1;
                    priority=2;
                    UIposition[]={0.1,0.10};
                    turret[]={};
                };
                class pylons2: pylons1
                {
                    hardpoints[] = {"Pelican_Utility"};
                    UIposition[]={0.1,0.20};
                };
                class pylons4: pylons1
                {
                    hardpoints[] = {"Pelican_Utility"};
                    priority = 5;
                    attachment="OPTRE_16Rnd_AnvilSMK_W_missiles";
                    maxweight = 300;
                    UIposition[] = {0.1,0.40};
                    bay = -1;
                    mirroredMissilePos=2;
                };
                class pylons5:pylons1
                {
                    hardpoints[] = {"Pelican_Utility"};
                    priority = 5;
                    attachment="OPTRE_16Rnd_AnvilSMK_W_missiles";
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
                    displayName="Utility";
                    attachment[]=
                    {
                        "OPTRE_16Rnd_AnvilSMK_W_missiles", //1
                        "OPTRE_16Rnd_AnvilSMK_W_missiles", //2
                        "OPTRE_16Rnd_AnvilSMK_W_missiles", //4
                        "OPTRE_16Rnd_AnvilSMK_W_missiles", //5
                    };
                };
            };
        };
    };
};

/* End of 105th Base Pelicans */

/* Start of Unarmed Pelicans */

class v105_D77HTCI: v105_Pelican_Unarmed_Base
{
    scope=2;
    scopeCurator=2;
    displayName="D77H-TCI Pelican [Navy]";

    class VehicleSpawnerInfo: VehicleSpawnerInfo
    {
        scope = 1;
        type = "Unarmed";
    };
};

class v105_D78DHTC: v105_Pelican_Unarmed_Base
{
    scope=2;
    scopeCurator=2;
    displayName="D78TC Pelican [Troop Carrier]";
    class EventHandlers: EventHandlers
    {
        class v105_TransportPod_EH
        {
            init = "0 = _this spawn v105_Vehicles_fnc_PelicanAddTransportPod";
        };
    };

    class VehicleSpawnerInfo: VehicleSpawnerInfo
    {
        scope = 1;
        type = "Troop Carrier";
    };
};

/* End of Unarmed Pelicans */

/* Start of Armed Pelicans */

class v105_D77HTCI_AV_20mmCannon_Pelican: v105_Pelican_Base
{
    scope=2;
    scopeCurator=2;
    displayName="D77H-TCI/AV-20mm Pelican [Navy]";

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
                "1000Rnd_20mm_shells",
                "1000Rnd_20mm_shells",
                "Laserbatteries"
            };
        };
        #include "cfg\PelicanPassengerTurrets.hpp"
    };

    class VehicleSpawnerInfo: VehicleSpawnerInfo
    {
        scope = 1;
        type = "20mm Cannon";
    };
};

class v105_D77HTCI_AV_30mmCannon_Pelican: v105_Pelican_Base
{
    scope=2;
    scopeCurator=2;
    displayName="D77H-TCI/AV-30mm Pelican [Navy]";

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
        #include "cfg\PelicanPassengerTurrets.hpp"
    };

    class VehicleSpawnerInfo: VehicleSpawnerInfo
    {
        scope = 1;
        type = "30mm Cannon";
    };
};

class v105_D77HTCI_AV_40mmCannon_Pelican: v105_Pelican_Base
{
    scope=2;
    scopeCurator=2;
    displayName="D77H-TCI/AV-40mm Pelican [Navy]";

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
        #include "cfg\PelicanPassengerTurrets.hpp"
    };

    class VehicleSpawnerInfo: VehicleSpawnerInfo
    {
        scope = 1;
        type = "40mm Cannon";
    };
};

class v105_D77HTCI_AV_Minigun_Pelican: v105_Pelican_Base
{
    scope=2;
    scopeCurator=2;
    displayName="D77H-TCI/AV-Minigun Pelican [Navy]";

    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[]=
            {
                "v105_145x114_minigun",
                "Laserdesignator_mounted"
            };
            magazines[]=
            {
                "v105_1200Rnd_145x114_Red_Belt",
                "v105_1200Rnd_145x114_Red_Belt",
                "Laserbatteries"
            };
        };
        #include "cfg\PelicanPassengerTurrets.hpp"
    };

    class VehicleSpawnerInfo: VehicleSpawnerInfo
    {
        scope = 1;
        type = "Minigun";
    };
};

/* End of Armed Pelicans */