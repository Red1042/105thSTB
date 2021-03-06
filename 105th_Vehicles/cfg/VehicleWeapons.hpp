			class FullAuto;
			class MGun;
			class autocannon_Base_F;
	
	// 	^ Class declarations above ^
	
	
	
	//
	//			Coaxial weapon for Hound
	//
	
			class LMG_coax;
			class LMG_coax_Hound: LMG_coax
			{
				displayName = "MAG 58M";
				displayNameShort = "7.62x51mm";
				magazineReloadTime = 3.0;
				magazines[] = 
				{
				"1000Rnd_762x51_Belt_T_Yellow",
				"1000Rnd_762x51_Belt_T_Yellow_HOW"
				
				};
				class manual:MGun
				{
					reloadTime=0.03;
					dispersion=0.00025;
				};
			};
			class HMG_127_AFV;
			class HOW_HMG_127_AFV:HMG_127_AFV
			{
				magazineReloadTime = 2.0;
				class manual:MGun
				{
					reloadTime=0.08;
					dispersion=0.00025;
				};
			};
			
	class cannon_20mm;
	class HOW_cannon_20mm : cannon_20mm
	{
		scope=2;
		displayName = "20mm Light Cannon";
		displayNameShort = "20mm Light Cannon";
		reloadTime=0.5;
		ace_overpressure_angle = 0;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 0;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0;  // Damage multiplier
			magazines[] = 
			{
				"HOW_8Rnd_20mm_AP",
				"HOW_8Rnd_20mm_HE"
			};
	};
	
	//
	//						50mm cannons for various vehicles.
	//
			
			class OPTRE_M230_HE: autocannon_Base_F
			{
				displayName = "M230 High Explosive";
				displayNameShort = "50mm HE";
				canLock=2;
				ballisticsComputer="1 + 4 + 16";
				FCSMaxLeadSpeed=150;
				FCSZeroingDelay=1;
				magazineReloadTime = 3.0;
				magazines[] = 
				{
				"OPTRE_100Rnd_50mm_HE",
				"HOW_60Rnd_50mm_HE"
				
				};
				modes[] = {"FullAuto"};
				class FullAuto: MGun
				{
					reloadTime=0.225;
					dispersion=0.00082;
					minRange = 2;
					minRangeProbab = 0.3;
					midRange = 300;
					midRangeProbab = 0.7;
					maxRange = 800;
					maxRangeProbab = 0.05;
				};
			};
			class OPTRE_M230_AP: autocannon_Base_F
			{
				displayName = "M230 APFSDS";
				displayNameShort = "50mm AP";
				canLock=2;
				ballisticsComputer="1 + 4 + 16";
				FCSMaxLeadSpeed=150;
				FCSZeroingDelay=1;
				magazineReloadTime = 3.0;
				magazines[] = 
				{
				"OPTRE_100Rnd_50mm_APFSDS",
				"HOW_60Rnd_50mm_APFSDS"
				
				};
				modes[] = {"FullAuto"};
				class FullAuto: MGun
				{
					reloadTime=0.225;
					dispersion=0.00025;
					minRange = 2;
					minRangeProbab = 0.3;
					midRange = 300;
					midRangeProbab = 0.7;
					maxRange = 800;
					maxRangeProbab = 0.05;
				};
			};
			class OPTRE_M230_URF: autocannon_Base_F
			{
				displayName = "M230 50mm";
				displayNameShort = "";
				
				magazineReloadTime = 5.0;
				magazines[] = 
				{
				"OPTRE_100Rnd_50mm_APFSDS",
				"OPTRE_100Rnd_50mm_HE"
				
				};
				modes[] = {"FullAuto"};
				class FullAuto: MGun
				{
					reloadTime=0.225;
					dispersion=0.00025;
					minRange = 2;
					minRangeProbab = 0.3;
					midRange = 300;
					midRangeProbab = 0.7;
					maxRange = 800;
					maxRangeProbab = 0.05;
				};
			};
	class cannon_120mm;
	class HOW_cannon_120mm_AP: cannon_120mm
	{
				scope=2;
				displayName = "120mm Smoothbore AP";
				displayNameShort = "120mm APFSDS";
				reloadTime=1.5;
				magazineReloadTime=3;
				autoReload=1;
				canLock=2;
				ballisticsComputer="1 + 4  + 16";
				FCSMaxLeadSpeed=150;
				FCSZeroingDelay=1;
				ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.45;  // Damage multiplier
				magazines[]=
					{
						"32Rnd_120mm_APFSDS_shells",
						"32Rnd_120mm_APFSDS_shells_Tracer_Red",
						"32Rnd_120mm_APFSDS_shells_Tracer_Green",
						"32Rnd_120mm_APFSDS_shells_Tracer_Yellow",
						"30Rnd_120mm_APFSDS_shells",
						"30Rnd_120mm_APFSDS_shells_Tracer_Red",
						"30Rnd_120mm_APFSDS_shells_Tracer_Green",
						"30Rnd_120mm_APFSDS_shells_Tracer_Yellow",
						"28Rnd_120mm_APFSDS_shells",
						"28Rnd_120mm_APFSDS_shells_Tracer_Red",
						"28Rnd_120mm_APFSDS_shells_Tracer_Green",
						"28Rnd_120mm_APFSDS_shells_Tracer_Yellow",
						"24Rnd_120mm_APFSDS_shells",
						"24Rnd_120mm_APFSDS_shells_Tracer_Red",
						"24Rnd_120mm_APFSDS_shells_Tracer_Green",
						"24Rnd_120mm_APFSDS_shells_Tracer_Yellow",
						"20Rnd_120mm_APFSDS_shells",
						"20Rnd_120mm_APFSDS_shells_Tracer_Red",
						"20Rnd_120mm_APFSDS_shells_Tracer_Green",
						"20Rnd_120mm_APFSDS_shells_Tracer_Yellow",
						"12Rnd_120mm_APFSDS_shells",
						"12Rnd_120mm_APFSDS_shells_Tracer_Red",
						"12Rnd_120mm_APFSDS_shells_Tracer_Green",
						"12Rnd_120mm_APFSDS_shells_Tracer_Yellow",
					};
		
	};
	class HOW_cannon_120mm_GP: cannon_120mm
	{
				scope=2;
				displayName = "120mm Smoothbore General Purpose";
				displayNameShort = "120mm GP";
				reloadTime=1.5;
				magazineReloadTime=3;
				autoReload=1;
				canLock=2;
				ballisticsComputer="1 + 4 + 16";
				FCSMaxLeadSpeed=150;
				FCSZeroingDelay=1;
				ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 10;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.45;  // Damage multiplier
				magazines[]=
					{
						"20Rnd_120mm_HEAT_MP",
						"20Rnd_120mm_HEAT_MP_T_Red",
						"20Rnd_120mm_HEAT_MP_T_Green",
						"20Rnd_120mm_HEAT_MP_T_Yellow",
						"12Rnd_120mm_HEAT_MP",
						"12Rnd_120mm_HEAT_MP_T_Red",
						"12Rnd_120mm_HEAT_MP_T_Green",
						"12Rnd_120mm_HEAT_MP_T_Yellow",
						"8Rnd_120mm_HEAT_MP",
						"8Rnd_120mm_HEAT_MP_T_Red",
						"8Rnd_120mm_HEAT_MP_T_Green",
						"8Rnd_120mm_HEAT_MP_T_Yellow",
						"30Rnd_120mm_HE_shells",
						"30Rnd_120mm_HE_shells_Tracer_Red",
						"30Rnd_120mm_HE_shells_Tracer_Green",
						"30Rnd_120mm_HE_shells_Tracer_Yellow",
						"16Rnd_120mm_HE_shells",
						"16Rnd_120mm_HE_shells_Tracer_Red",
						"16Rnd_120mm_HE_shells_Tracer_Green",
						"16Rnd_120mm_HE_shells_Tracer_Yellow",
						"14Rnd_120mm_HE_shells",
						"14Rnd_120mm_HE_shells_Tracer_Red",
						"14Rnd_120mm_HE_shells_Tracer_Green",
						"14Rnd_120mm_HE_shells_Tracer_Yellow",
						"12Rnd_120mm_HE_shells",
						"12Rnd_120mm_HE_shells_Tracer_Red",
						"12Rnd_120mm_HE_shells_Tracer_Green",
						"12Rnd_120mm_HE_shells_Tracer_Yellow",
						"8Rnd_120mm_HE_shells",
						"8Rnd_120mm_HE_shells_Tracer_Red",
						"8Rnd_120mm_HE_shells_Tracer_Green",
						"8Rnd_120mm_HE_shells_Tracer_Yellow",
						"4Rnd_120mm_cannon_missiles",
						"4Rnd_120mm_LG_cannon_missiles"	
					};
		
	};
	
	// Hornets
	class Gatling_30mm_Plane_CAS_01_F;
	class HOW_Gatling_30mm:Gatling_30mm_Plane_CAS_01_F
	{
				ballisticsComputer=1+4;
				scope=2;
				displayName = "30mm Rotary Cannon";
				displayNameShort = "30mm Brrrrt";
				magazines[]=
					{
						"HOW_GAU30mm_570RND"
					};
	};
	class weapon_Cannon_Phalanx;
	class HOW_Vulcan_20mm:weapon_Cannon_Phalanx
	{
				ballisticsComputer=1+4;
				scope=2;
				displayName = "20mm Rotary Cannon";
				displayNameShort = "20mm Brrrrt";
				magazines[]=
					{
						"HOW_Vulcan20mm_620RND"
					};
	};
	class M134_minigun;
	class HOW_145x114_minigun:M134_minigun
	{
		ballisticsComputer=1+4;
		displayName = "14.5x114mm APFSDS Gatling Gun";
		magazines[]=
					{
						"HOW_1200Rnd_145x114_Red_Belt"
					};
	};
	class CMFlareLauncher;
	class HOW_Flares:CMFlareLauncher
	{
		scope = 2;
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
	};


	class HMG_127;
	class OPTRE_M41_LAAG: HMG_127
	{
			magazines[]=
		{
			"OPTRE_1000Rnd_127x99_M41"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="Usti hlavne";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunEject";
			};
			class effect3
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge2";
			};
		};
		selectionFireAnim="zasleh";
		displayName="M41 LAAG";
		descriptionShort="Light AA Gun";
		aiDispersionCoefY=3;
		aiDispersionCoefX=5;
		showAimCursorInternal=1;
		magazineReloadTime=4;
		initFov=0.75;
		minFov=0.375;
		maxFov=1.1;
		cursor="EmptyCursor";
		cursorAim="OPTRE_M41";
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		class FullAuto: MGun
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"OPTRE_Weapons\Vehicle\data\sounds\M41LAAG_1.wss",
					1,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.045;
			dispersion=0.0049999999;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
		};
		class close: FullAuto
		{
			burst=40;
			aiRateOfFire=0.1;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=20;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=20;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			burst=10;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=1000;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.1;
		};
	};





	// Falcon GL
	class GMG_40mm;
	class v105_FalconGL : GMG_40mm
	{
			displayName = "82mm Automatic Mortar";
			magazines[]=
			{
				"HOW_50Rnd_82mm_shells"
			};
				reloadTime=0.45;
				magazineReloadTime=3;
				autoReload=1;
				autoFire=true;
			};
	
	
	
	
	// Pelican Ordnances
			//
			
	/*		class OPTRE_M638
				{
					ballisticsComputer=4;
					displayName="M638 Autocannon";
					descriptionShort="20mm";
					displayNameShort="M638";
					
					class FullAuto: MGun
					{
						reloadTime=0.04;
						dispersion=0.001;
						minRange=2;
						minRangeProbab=0.30000001;
						midRange=300;
						midRangeProbab=0.69999999;
						maxRange=3000;
						maxRangeProbab=0.050000001;
					};
				};
				*/
			class OPTRE_M638;
			class v105_gatling_30mm:OPTRE_M638
			{
				ballisticsComputer=1;
				canLock = 2;
				displayName="M917 Autocannon";
				descriptionShort="30mm";
				displayNameShort="M917";
				magazines[]=
				{
					"250Rnd_30mm_HE_shells_Tracer_Green",
					"250Rnd_30mm_APDS_shells_Tracer_Green",
				};
			};
			// Light Weaponry
			class FIR_AIM9X;
			class v105_FIR_AIM9X:FIR_AIM9X
			{
				magazines[]={"v105_AIM9X_P_2rnd_M"};
			};
			class FIR_AIM120;
			class v105_FIR_AIM120:FIR_AIM120
			{
				magazines[]={"v105_AIM120B_LAU115_P_1rnd_M"};
			};
			class FIR_AGM65;
			class v105_FIR_AGM65:FIR_AGM65
			{
				magazines[]=
				{
					"v105_AGM65D_P_3rnd_M","v105_AGM65B_P_3rnd_M",
					"v105_AGM65H_P_3rnd_M","v105_AGM65F_P_3rnd_M",
					"v105_AGM65G_P_3rnd_M","v105_AGM65K_P_3rnd_M",
					"v105_AGM65E_P_3rnd_M","v105_AGM65E2_P_3rnd_M",
					"v105_AGM65L_P_3rnd_M",
					"v105_AGM65F_P_1rnd_M",
					"v105_AGM65G_P_1rnd_M",
					"v105_AGM65K_P_1rnd_M",
					"v105_AGM65E_P_1rnd_M",
					"v105_AGM65E2_P_1rnd_M",
					"v105_AGM65L_P_1rnd_M",
					"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114K",
					"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114N",
					"v105_PylonRack_3Rnd_ACE_Hellfire_AGM114L"
				};
			};
			class FIR_ASM2;
			class v105_FIR_ASM2:FIR_ASM2
			{
				magazines[]={"v105_ASM2_P_2rnd_M"};
			};
			
			class FIR_RKT_Launcher; 
			class v105_FIR_RKT_Launcher:FIR_RKT_Launcher
			{
				magazines[]= 
				{
					"v105_Hydra_P_7rnd_M","v105_Hydra_P_19rnd_M","v105_Hydra_P_38rnd_M",
					"v105_Hydra_M229_P_7rnd_M","v105_Hydra_M229_P_19rnd_M","v105_Hydra_M229_P_38rnd_M",
					"v105_Hydra_M247_P_7rnd_M","v105_Hydra_M247_P_19rnd_M","v105_Hydra_M247_P_38rnd_M",
					"v105_Hydra_M282_P_7rnd_M","v105_Hydra_M282_P_19rnd_M","v105_Hydra_M282_P_38rnd_M",
					"v105_Hydra_WDU4_P_7rnd_M","v105_Hydra_WDU4_P_19rnd_M","v105_Hydra_WDU4_P_38rnd_M",
					"v105_Hydra_M261_P_7rnd_M","v105_Hydra_M261_P_19rnd_M","v105_Hydra_M261_P_38rnd_M",

					//"v105_Hydra_WP_P_7rnd_M","v105_Hydra_WP_P_21rnd_M"
					
				};
			};
			class FIR_APKWS_Launcher;
			class v105_FIR_APKWS_Launcher:FIR_APKWS_Launcher
			{
				magazines[]=
				{
					"v105_APKWS_P_19rnd_M","v105_APKWS_P_38rnd_M",
					"v105_APKWS_M247_P_19rnd_M","v105_APKWS_M247_P_38rnd_M",
					"v105_APKWS_M282_P_19rnd_M","v105_APKWS_M282_P_38rnd_M"
				};
			};
			class FIR_Zuni_Launcher;
			class v105_FIR_Zuni_Launcher:FIR_Zuni_Launcher
			{
				magazines[]={"v105_Zuni_P_8rnd_M","v105_Zuni_Mk32_P_8rnd_M"};
			};
			class FIR_LZuni_Launcher;
			class v105_FIR_LZuni_Launcher:FIR_LZuni_Launcher
			{
				magazines[]={"v105_LZuni_P_8rnd_M"};
			};
			//ECM
			class FIR_ECMPOD;
			class v105_FIR_ECMPOD: FIR_ECMPOD
			{
				magazines[]={"v105_ALQ99_P_1rnd_M"};
			};
			// Heavy Stuff
			class FIR_GBU53;
			class v105_FIR_GBU53: FIR_GBU53
			{
				magazines[] = {"v105_GBU53_P_4rnd_M"};
			};
			//GBU
			//12
			class FIR_GBU12;
			class v105_FIR_GBU12:FIR_GBU12
			{
				magazines[]={"v105_FIR_GBU12_P_1rnd_M","v105_FIR_GBU12_P_2rnd_M"};
			};
			class FIR_EGBU12;
			class v105_FIR_EGBU12:FIR_EGBU12
			{
				magazines[]={"v105_FIR_EGBU12_P_1rnd_M","v105_FIR_EGBU12_P_2rnd_M"};
			};
			//16
			class FIR_GBU16;
			class v105_FIR_GBU16:FIR_GBU16
			{
				magazines[]={"v105_FIR_GBU16_Navy_P_1rnd_M"};
			};
			//24
			class FIR_GBU24;
			class v105_FIR_GBU24:FIR_GBU24
			{
				magazines[]={"v105_FIR_GBU24A_P_1rnd_M","v105_FIR_GBU24A_BLU118_P_1rnd_M","v105_FIR_GBU24A_BLU109_P_1rnd_M"};
			};
			// JDAMS
			//38
			class FIR_GBU38;
			class v105_FIR_GBU38:FIR_GBU38
			{
				magazines[]={"v105_FIR_GBU38_P_1rnd_M"};
			};
			//32
			class FIR_GBU32;
			class v105_FIR_GBU32:FIR_GBU32
			{
				magazines[]={"v105_FIR_GBU32_P_1rnd_M"};
			};
			//31
			class FIR_GBU31;
			class v105_FIR_GBU31:FIR_GBU31
			{
				magazines[]={"v105_FIR_GBU31_P_1rnd_M"};
			};
			// Unguided Bombs
			//MK82
			class FIR_mk82_Snakeye_Launcher;
			class v105_FIR_mk82_Snakeye_Launcher:FIR_mk82_Snakeye_Launcher
			{
				magazines[]={
							"v105_FIR_Mk82_GP_Navy_P_1rnd_M",
							"v105_FIR_Mk82_GP_Navy_prox_P_1rnd_M",
							"v105_FIR_Mk82_GP_Navy_P_2rnd_M",
							"v105_FIR_Mk82_GP_P_3rnd_M",
							"v105_FIR_Mk82_GP_P_6rnd_M"
							};
			};
			//MK83
			class FIR_mk83;
			class v105_FIR_mk83:FIR_mk83
			{
				magazines[]={"v105_FIR_Mk83_GP_Navy_P_1rnd_M",
							"v105_FIR_Mk83_GP_Navy_P_2rnd_M"};
			};
			//MK84
			class FIR_mk84;
			class v105_FIR_mk84:FIR_mk84
			{
				magazines[]={"v105_FIR_Mk84_GP_Navy_P_1rnd_M"};
			};
			//
			class FIR_AGM88;
			class v105_FIR_AGM88:FIR_AGM88
			{
				magazines[]={"v105_AGM88_P_1rnd_M"};
			};
			//JSOW
			class FIR_AGM154;
			class v105_FIR_AGM154:FIR_AGM154
			{
				magazines[]={"v105_FIR_AGM154A_P_1rnd_M","v105_FIR_AGM154C_P_1rnd_M"};
			};
		
			