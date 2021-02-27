
class HOW_MGS_Base_UP: AFV_Wheeled_01_up_base_F
{
		dlc = "105th";
		author = "Howard";
		scope = 2;
		scopeCurator = 2;
		displayName = "AFV-43 Timberwolf II";
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
		crew = "VES_Rifleman_MA5B_MAR";
		fuelCapacity = 30;
		simulation = "carx";
		wheelCircumference = 3.51386;
		brakeIdleSpeed = 2;
		armor = 1200;
		
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		TFAR_hasIntercom = 1;
		crewCrashProtection = 0.005;
		//
		// Engine Upgrades
		maxSpeed = 210;
			normalSpeedForwardCoef = 0.75;
			slowSpeedForwardCoef = 0.041;
		enginePower = 2500;
		maxOmega = 300;
		peakTorque = 6000;
			class complexGearbox
			{
				GearboxRatios[]=
				{
					"R1",
					-6.1999998,
					"N",
					0,
					"D1",
					6.5999998,
					"D2",
					5.0999999,
					"D3",
					3.5000001,
					"D4",
					2.5,
					"D5",
					1.95,
					"D6",
					1.21999999,
					"D7",
					0.75
				};
			};
					class Wheels
						{
							class L1
							{
								side="left";
								suspTravelDirection[]={-0.125,-1,0};
								boneName="wheel_1_1_damper";
								steering=1;
								center="wheel_1_1_axis";
								boundary="wheel_1_1_bound";
								width=0.40000001;
								mass=250;
								armor = 150;
								MOI=19.5474;
								dampingRate=8;
								dampingRateDamaged=55;
								dampingRateDestroyed=1e+010;
								maxBrakeTorque=25000;
								maxHandBrakeTorque=0;
								suspForceAppPointOffset="wheel_1_1_axis";
								tireForceAppPointOffset="wheel_1_1_axis";
								maxCompression=0.1125;
								maxDroop=0.15000001;
								sprungMass=-1;
								springStrength=150000;
								springDamperRate=30000;
								latStiffX=2;
								latStiffY=28.6479;
								longitudinalStiffnessPerUnitGravity=7000;
								frictionVsSlipGraph[]=
								{
									{0,0.89999998},
									{0.2,1.4},
									{0.60000002,0.80000001}
								};
							};
							class L2: L1
							{
								boneName="wheel_1_2_damper";
								center="wheel_1_2_axis";
								boundary="wheel_1_2_bound";
								suspForceAppPointOffset="wheel_1_2_axis";
								tireForceAppPointOffset="wheel_1_2_axis";
							};
							class L3: L1
							{
								boneName="wheel_1_3_damper";
								steering=0;
								center="wheel_1_3_axis";
								boundary="wheel_1_3_bound";
								suspForceAppPointOffset="wheel_1_3_axis";
								tireForceAppPointOffset="wheel_1_3_axis";
								maxHandBrakeTorque=25000;
							};
							class L4: L1
							{
								boneName="wheel_1_4_damper";
								steering=0;
								center="wheel_1_4_axis";
								boundary="wheel_1_4_bound";
								suspForceAppPointOffset="wheel_1_4_axis";
								tireForceAppPointOffset="wheel_1_4_axis";
								maxHandBrakeTorque=25000;
							};
							class R1: L1
							{
								side="right";
								suspTravelDirection[]={0.125,-1,0};
								boneName="wheel_2_1_damper";
								center="wheel_2_1_axis";
								boundary="wheel_2_1_bound";
								suspForceAppPointOffset="wheel_2_1_axis";
								tireForceAppPointOffset="wheel_2_1_axis";
							};
							class R2: R1
							{
								boneName="wheel_2_2_damper";
								center="wheel_2_2_axis";
								boundary="wheel_2_2_bound";
								suspForceAppPointOffset="wheel_2_2_axis";
								tireForceAppPointOffset="wheel_2_2_axis";
							};
							class R3: R1
							{
								boneName="wheel_2_3_damper";
								steering=0;
								center="wheel_2_3_axis";
								boundary="wheel_2_3_bound";
								suspForceAppPointOffset="wheel_2_3_axis";
								tireForceAppPointOffset="wheel_2_3_axis";
								maxHandBrakeTorque=25000;
							};
							class R4: R1
							{
								boneName="wheel_2_4_damper";
								steering=0;
								center="wheel_2_4_axis";
								boundary="wheel_2_4_bound";
								suspForceAppPointOffset="wheel_2_4_axis";
								tireForceAppPointOffset="wheel_2_4_axis";
								maxHandBrakeTorque=25000;
							};
						};
			
					/*	class Turrets: Turrets
								{
									class MainTurret: MainTurret
									{
										class Turrets: Turrets
										{
											class CommanderOptics: CommanderOptics
											{
												weapons[]=
												{
													"SmokeLauncher",
													"Laserdesignator_vehicle",
													"HMG_127_APC"
												};
												magazines[]=
												{
													"SmokeLauncherMag",
													"Laserbatteries",
													"500Rnd_127x99_mag_Tracer_Red",
													"500Rnd_127x99_mag_Tracer_Red",
													"500Rnd_127x99_mag_Tracer_Red",
													"500Rnd_127x99_mag_Tracer_Red"
													
												};
											};	
										};
										weapons[]=
										{
											"HOW_cannon_120mm_GP",
											"HOW_cannon_120mm_AP",
											"MMG_02_coax"
										};
										magazines[]=
										{
											"20Rnd_120mm_APFSDS_shells_Tracer_Red",
											"16Rnd_120mm_HE_shells_Tracer_Red",
											"12Rnd_120mm_HEAT_MP_T_Red",
											"4Rnd_120mm_LG_cannon_missiles",
											"4Rnd_120mm_LG_cannon_missiles",
											"4Rnd_120mm_LG_cannon_missiles",
											
											"200Rnd_338_Mag",
											"200Rnd_338_Mag",
											"200Rnd_338_Mag",
											"200Rnd_338_Mag",
											"200Rnd_338_Mag"
										};
									};
								}; 
			*/ // End of turrets class
						
						
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent:SensorTemplateIR{};
					class NVSensorComponent:SensorTemplateNV{};
					class VisualSensorComponent:SensorTemplateVisual{};
					class LaserSensorComponent:SensorTemplateLaser{};
				};	
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsMaterials[]=
		{
			"105th_Vehicles\textures\Timberwolf\MGS1.rvmat",
			"105th_Vehicles\textures\Timberwolf\MGS2.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Timberwolf\MGS_AR_B.paa",
			"105th_Vehicles\textures\Timberwolf\MGS_AR_G.paa",
			"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
		};
		textureList[]=
		{
			"Marines",
			1
		};
		class TextureSources
		{
			class Marines
			{
				displayName="UNSC Army";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"105th_Vehicles\textures\Timberwolf\MGS_MC_B.paa",
					"105th_Vehicles\textures\Timberwolf\MGS_MC_G.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
				};
				factions[]=
				{
					"HOW_EdCat_105th"
				};
			};
		};
		
		class TransportItems
		{
			#include "cfg\VehicleGearLight.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
								
};