class v105_A364_Claymore: Plane_CAS_01_dynamicLoadout_base_F
{
		dlc="105th";
		author="Howard";
		side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="A-364 Claymore";
		editorCategory="HOW_EdCat_105th";
		editorSubcategory="HOW_105th_EdSubCat_FixedWing";
		crew="VES_Rifleman_MA5B_ODST";
		tf_hasLRradio=1;
		tf_isolatedAmount=.1;
		tf_range=20000;
		

		altNoForce=15000;
		altFullForce=1000;
		threat[]={1,1,0.60000001}; //Soft, armor, air
		draconicForceXCoef=9;
		draconicForceYCoef=1.5;
		draconicForceZCoef=1.9;
		thrustCoef[]=
				{
					1.6,
					1.8,
					1.75,
					1.51,
					1.5,
					1.4900001,
					1.47,
					1.45,
					1.43,
					1.4,
					1.34,
					0.50000002,
					0.1,
					0,
					0
				};

		maxSpeed=850;
		landingAoa=0.113446;
		landingSpeed=280;
		stallSpeed=190;
		stallWarningTreshold=0.2;
		angleOfIndicence=-0.0134533;
		armor=100;
		armorStructural=5;
		explosionShielding=3;

		LockDetectionSystem=8;
		incomingMissileDetectionSystem="8 + 16";
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
		weapons[]=
		{
			"FIR_MasterArm",
			"FIR_GAU8",
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"FIR_GAU8_1174rnd_M",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		class Wheels
		{
			class Wheel_1
			{
				boneName="Wheel_1";
				steering=1;
				side="left";
				center="Wheel_1_center";
				boundary="Wheel_1_rim";
				width=0.16;
				mass=80;
				MOI=6.6999698;
				dampingRate=0.25;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=1200;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="Wheel_1_center";
				tireForceAppPointOffset="Wheel_1_center";
				maxCompression=0.1;
				maxDroop=0.15000001;
				sprungMass=4000;
				springStrength=395000;
				springDamperRate=120000;
				longitudinalStiffnessPerUnitGravity=1500;
				latStiffX=2;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,0.5},
					{0.2,0.89999998},
					{0.60000002,0.69999999}
				};
			};
			class Wheel_2: Wheel_1
			{
				boneName="Wheel_2";
				steering=0;
				center="Wheel_2_center";
				boundary="Wheel_2_rim";
				width=0.28;
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=7750;
				maxBrakeTorque=4000;
				suspForceAppPointOffset="Wheel_2_center";
				tireForceAppPointOffset="Wheel_2_center";
			};
			class Wheel_3: Wheel_2
			{
				boneName="Wheel_3";
				side="right";
				center="Wheel_3_center";
				boundary="Wheel_3_rim";
				suspForceAppPointOffset="Wheel_3_center";
				tireForceAppPointOffset="Wheel_3_center";
			};
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
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=1600;
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
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=1600;
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
							minRange=20000;
							maxRange=20000;
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
							minRange=16000;
							maxRange=16000;
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
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"FIR_BLUFOR_Combined_HP","FIR_A10_MER_HP","FIR_F23_AA_HP","FIR_F22_SW_HP","FIR_A10A_GUN_HP","FIR_F16_Under_HP","FIR_F16_Aux_HP"
						};
						attachment="FIR_AIM9X_P_2rnd_M";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						priority=4;
						attachment="FIR_APKWS_M282_P_38rnd_M";
						maxweight=750;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						priority=3;
						attachment="FIR_AGM65D_P_3rnd_M";
						maxweight=1200;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="FIR_AGM65D_P_3rnd_M";
						maxweight=2000;
						UIposition[]={0.33000001,0.2};
					};
					class Pylons5: Pylons1
					{
						priority=1;
						attachment="FIR_GBU53_P_4rnd_M";
						maxweight=2000;
						UIposition[]={0.33000001,0.25};
					};
					class Pylons6: Pylons5
					{
						attachment="FIR_GBU53_P_4rnd_M";
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						attachment="FIR_AGM65D_P_3rnd_M";
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						attachment="FIR_AGM65D_P_3rnd_M";
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						attachment="FIR_APKWS_M282_P_38rnd_M";
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						attachment="FIR_AIM9X_P_2rnd_M";
						UIposition[]={0.34999999,0.55000001};
						mirroredMissilePos=1;
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Heavy_AT
					{
						displayName="Heavy AT";
						attachment[]=
						{
							"FIR_AIM9X_P_2rnd_M", //1
							"FIR_APKWS_M282_P_38rnd_M", //2
							"FIR_AGM65D_P_3rnd_M", //3
							"FIR_AGM65E2_P_1rnd_M", //4
							"FIR_GBU53_P_4rnd_M", //5
							"FIR_GBU53_P_4rnd_M", //6
							"FIR_AGM65E2_P_1rnd_M", //7
							"FIR_AGM65D_P_3rnd_M", //8
							"FIR_APKWS_M282_P_38rnd_M", //9
							"v105_AIM9X_P_2rnd_M" //10
						};
					};
					class Light_AT
					{
						displayName="Light AT";
						attachment[]=
						{
							"FIR_AIM9X_P_2rnd_M", //1
							"FIR_APKWS_M282_P_38rnd_M", //2
							"FIR_AGM65D_P_3rnd_M", //3
							"FIR_AGM65E2_P_1rnd_M", //4
							"FIR_GBU53_P_4rnd_M", //5
							"FIR_GBU53_P_4rnd_M", //6
							"FIR_AGM65E2_P_1rnd_M", //7
							"FIR_AGM65D_P_3rnd_M", //8
							"FIR_APKWS_M282_P_38rnd_M", //9
							"FIR_AIM9X_P_2rnd_M" //10
						};
					};
					class Precision_Strikes
					{
						displayName="Precision Strike Packages";
						attachment[]=
						{
							"FIR_AIM9X_P_2rnd_M", //1
							"FIR_APKWS_M282_P_38rnd_M", //2
							"FIR_AGM65D_P_3rnd_M", //3
							"FIR_AGM65E2_P_1rnd_M", //4
							"FIR_GBU53_P_4rnd_M", //5
							"FIR_GBU53_P_4rnd_M", //6
							"FIR_AGM65E2_P_1rnd_M", //7
							"FIR_AGM65D_P_3rnd_M", //8
							"FIR_APKWS_M282_P_38rnd_M", //9
							"FIR_AIM9X_P_2rnd_M" //10
						};
					};
					class Anti_Air 
					{
						displayName="Anti Air";
						attachment[]=
						{
							"FIR_AIM9X_P_2rnd_M", //1
							"FIR_APKWS_M282_P_38rnd_M", //2
							"FIR_AGM65D_P_3rnd_M", //3
							"FIR_AGM65E2_P_1rnd_M", //4
							"FIR_GBU53_P_4rnd_M", //5
							"FIR_GBU53_P_4rnd_M", //6
							"FIR_AGM65E2_P_1rnd_M", //7
							"FIR_AGM65D_P_3rnd_M", //8
							"FIR_APKWS_M282_P_38rnd_M", //9
							"FIR_AIM9X_P_2rnd_M" //10
						};
					};
					class Dumb_Payload //Dumb bombs / Rockets
					{
						displayName="Dumb Payload";
						attachment[]=
						{
							"FIR_AIM9X_P_2rnd_M", //1
							"FIR_APKWS_M282_P_38rnd_M", //2
							"FIR_AGM65D_P_3rnd_M", //3
							"FIR_AGM65E2_P_1rnd_M", //4
							"FIR_GBU53_P_4rnd_M", //5
							"FIR_GBU53_P_4rnd_M", //6
							"FIR_AGM65E2_P_1rnd_M", //7
							"FIR_AGM65D_P_3rnd_M", //8
							"FIR_APKWS_M282_P_38rnd_M", //9
							"FIR_AIM9X_P_2rnd_M" //10
						};
					};
					class Training_Payload
					{
						displayName="Training Payload";
						attachment[]=
						{
							"FIR_AIM9X_P_2rnd_M", //1
							"FIR_APKWS_M282_P_38rnd_M", //2
							"FIR_AGM65D_P_3rnd_M", //3
							"FIR_AGM65E2_P_1rnd_M", //4
							"FIR_GBU53_P_4rnd_M", //5
							"FIR_GBU53_P_4rnd_M", //6
							"FIR_AGM65E2_P_1rnd_M", //7
							"FIR_AGM65D_P_3rnd_M", //8
							"FIR_APKWS_M282_P_38rnd_M", //9
							"FIR_AIM9X_P_2rnd_M" //10
						};
					};
				};
			};
		};
	//	CustomFuelEnabled = 1;
	//	CustomFuelScript = "105th_Core\init\F16_Refuel.sqf";
		class JettisonSystem
		{
			JettisonEnabled = 1;		
			JettisonType = 1; // 1= drop only 2 = hide only 3 = both			
			JettisonPylon = 1; // 0 = no pylon based fueltank 1 = pylon based fueltank			
			fuelswitch_type = "variable"; // variable and anim
			FuelswitchName = "fuelswitch";			
			JettisonScript = "105th_Core\init\droptanks.sqf";		
			Fuel_Internal = 0.6;	
			Fueltank_code_enable = 1; //enable fueltank code
			Fueltank_code = "fir_f16_center_fueltank"; //fueltank compatible code
			Fueltank_list[] = {"FIR_F16C_center_Fueltank_P_1rnd_M"};
			Fueltank_Hardpoint[] = {1,2,3,4,5,6,7,8,9,10};  //setpylonloadout command using element number + 1;			
			Fueltank_Hardpoint_Offset[] = {-1.5,-1,0,1,1.5};
			Fueltank_hide[] = {"fueltank_1_hide","fueltank_2_hide","fueltank_3_hide","fueltank_4_hide","fueltank_5_hide"};
		};	
		fir_ams_image = "\FIR_AirWeaponSystem_US_Cfg\loadout_pic\wipeout_ca.paa";		
		class AMSData
		{
											
			AircraftBase = "Plane_CAS_01_dynamicLoadout_base_F";
			CustomPreset = "Plane_CAS_01_dynamicLoadout_base_F_CustomPreset_list";
			CustomPresetAttachment = "Plane_CAS_01_dynamicLoadout_base_F_CustomPreset_list_attachment";
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
			};			
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Claymore\105th_Claymore_Body.paa",
			"105th_Vehicles\textures\Claymore\105th_Claymore_Wings.paa"
		};
};