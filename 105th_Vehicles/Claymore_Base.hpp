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
					1.5,
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

		lockDetectionSystem=2+8+16;
		incomingMissileDetectionSystem="2 + 8 + 16";
		weapons[]=
		{
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
							minRange=500;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=1200;
						animDirection="PilotCamera_V";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=9000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=900;
						animDirection="PilotCamera_V";
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
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
				class Components
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
				class Components
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
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]=
						{
							"105th_Claymore"
						};
						attachment="v105_AIM9X_P_2rnd_M";
						priority=5;
						maxweight=300;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						priority=4;
						attachment="v105_APKWS_M247_P_38rnd_M";
						maxweight=750;
						UIposition[]={0.345,0.050000001};
					};
					class Pylons3: Pylons1
					{
						priority=3;
						attachment="v105_ALQ99_P_1rnd_M";
						maxweight=1200;
						UIposition[]={0.34,0.1};
					};
					class Pylons4: Pylons1
					{
						priority=2;
						attachment="v105_AGM65E2_P_1rnd_M";
						maxweight=2000;
						UIposition[]={0.33000001,0.2};
					};
					class Pylons5: Pylons1
					{
						priority=1;
						attachment="v105_FIR_GBU12_P_2rnd_M";
						maxweight=2000;
						UIposition[]={0.33000001,0.25};
					};
					class Pylons6: Pylons5
					{
						attachment="v105_FIR_GBU12_P_2rnd_M";
						UIposition[]={0.33000001,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7: Pylons4
					{
						attachment="v105_AGM65E2_P_1rnd_M";
						UIposition[]={0.33000001,0.34999999};
						mirroredMissilePos=4;
					};
					class Pylons8: Pylons3
					{
						attachment="v105_AGM65D_P_3rnd_M";
						UIposition[]={0.34,0.44999999};
						mirroredMissilePos=3;
					};
					class Pylons9: Pylons2
					{
						attachment="v105_Hydra_P_38rnd_M";
						UIposition[]={0.345,0.5};
						mirroredMissilePos=2;
					};
					class Pylons10: Pylons1
					{
						attachment="v105_AIM9X_P_2rnd_M";
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
					class JUPITER	//General Payload
					{
						displayName="Jupiter";
						attachment[]=
						{
							"v105_AIM9X_P_2rnd_M",
							"v105_LZuni_P_8rnd_M",
							"v105_APKWS_P_38rnd_M",
							"v105_GBU53_P_4rnd_M",
							"v105_FIR_EGBU12_P_2rnd_M",
							"v105_FIR_EGBU12_P_2rnd_M",
							"v105_GBU53_P_4rnd_M",
							"v105_APKWS_M282_P_38rnd_M",
							"v105_LZuni_P_8rnd_M",
							"v105_AIM9X_P_2rnd_M"
						};
					};
					class JUNO		//Heavy Payloads
					{
						displayName="Juno";
						attachment[]=
						{
							"v105_AIM9X_P_2rnd_M",
							"v105_GBU53_P_4rnd_M",
							"v105_FIR_EGBU12_P_2rnd_M",
							"v105_FIR_GBU24A_P_1rnd_M",
							"v105_FIR_AGM154A_P_1rnd_M",
							"v105_FIR_AGM154C_P_1rnd_M",
							"v105_FIR_GBU24A_P_1rnd_M",
							"v105_FIR_EGBU12_P_2rnd_M",
							"v105_GBU53_P_4rnd_M",
							"v105_AIM9X_P_2rnd_M"
						};
					};
					class APOLLO	//Precision Strikes
					{
						displayName="Apollo";
						attachment[]=
						{
							"v105_AIM9X_P_2rnd_M",
							"v105_APKWS_M282_P_38rnd_M",
							"v105_ALQ99_P_1rnd_M",
							"v105_AGM65E2_P_1rnd_M",
							"v105_GBU53_P_4rnd_M",
							"v105_GBU53_P_4rnd_M",
							"v105_AGM65E2_P_1rnd_M",
							"v105_APKWS_P_38rnd_M",
							"v105_AGM88_P_1rnd_M",
							"v105_AIM9X_P_2rnd_M"
						};
					};	
				};
			};
		};
	
		class UserActions : UserActions
		{
			class Plane_CAS_01_Eject
			{
				priority=0.050000001;
				shortcut="Eject";
				displayName="$STR_A3_action_eject";
				condition="player in this && {speed this > 1}";
				statement="[this] spawn bis_fnc_planeEjection";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
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
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_EPC\Plane_CAS_01\Data\plane_cas_01_ext01_co.paa",
			"105th_Vehicles\textures\Claymore\105th_Claymore_Wings.paa"
		};
};