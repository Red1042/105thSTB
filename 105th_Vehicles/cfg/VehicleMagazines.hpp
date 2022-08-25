	// COAX Ammo for new Honeybadger
	class OPTRE_100Rnd_95x40_Box;
	class OPTRE_1000Rnd_95x40_Tracer_Box: OPTRE_100Rnd_95x40_Box
		{
			dlc = "OPTRE";
			model								= "\OPTRE_Weapons\MG\magazine_1.p3d";
			displayname							= "1000Rnd 9.5x40mm Coaxial Box Magazine";
			displaynameshort					= "9.5x40mm";
			ammo								= "B_93x64_Ball";
			initspeed							= 900;
			count								= 1000;
			picture 							= "\OPTRE_Weapons\MG\icons\magazine.paa";
			descriptionshort					= "";
			mass								= 400;
			tracersEvery 						= 1;
			lastRoundsTracer 					= 0;
		}; 
	class OPTRE_100Rnd_762x51_Box;
	class v105_1000Rnd_93x64_Mixed_Box: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		ammo						= "B_93x64_Ball";
		initspeed 					= 1000;
		count						= 1000;
		displayname 				= "1000Rnd 9.3x64mm Mixed Box Magazine";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
		lastRoundTracers 			= 0;
		mass						= 400;
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "LMG_coax_Hound";
	};
	class 1000Rnd_762x51_Belt_T_Yellow;
	class 1000Rnd_762x51_Belt_T_Yellow_HOW : 1000Rnd_762x51_Belt_T_Yellow
	{
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 0;
		ammo						= "B_93x64_Ball";
		initspeed 					= 1200;
		count						= 1000;
		displayname 				= "1000Rnd 7.62x51 Mixed Box Magazine";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
		lastRoundTracers 			= 0;
		mass						= 400;
	};

// 50mm Cannon Ammo
class OPTRE_100Rnd_50mm_HE;
class OPTRE_100Rnd_50mm_APFSDS;
	class v105_60Rnd_50mm_HE : OPTRE_100Rnd_50mm_HE
	{
		dlc = "OPTRE";
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		ammo						= "OPTRE_B_50mm_HE";
		initspeed 					= 1500;
		count						= 60;
		displayname 				= "60Rnd 50mm HE";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
	};
	class v105_60Rnd_50mm_APFSDS : OPTRE_100Rnd_50mm_HE
	{
		dlc = "OPTRE";
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		ammo						= "OPTRE_B_50mm_APFSDS";
		initspeed 					= 1500;
		count						= 60;
		displayname 				= "60Rnd 50mm APFSDS";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
	};
	
	
	// Hornet Rotary Cannon
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class v105_GAU30mm_570RND: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		dlc = "OPTRE";
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 1200;
		count						= 570;
		ammo						="Gatling_30mm_HE_Plane_CAS_01_F";
		displayname 				= "GAU-8/30mm 570Rnd";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "v105_Gatling_30mm";
	};
	class 1000Rnd_20mm_shells;
	class v105_750Rnd_20mm_shells:1000Rnd_20mm_shells
	{
		count=750;
		displayname	= "M513-RC 20mm 750Rnd";
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "v105_gatling_20mm";
	};
	class OPTRE_2000Rnd_20mm_HE;
	class v105_800rnd_20mm_HE: OPTRE_2000Rnd_20mm_HE
	{
		count=800;
		displayname	= "M638 20mm 800Rnd";
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "v105_M638";
	};
	class magazine_Cannon_Phalanx_x1550;
	class v105_Vulcan20mm_620RND: magazine_Cannon_Phalanx_x1550
	{
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 1500;
		count						= 620;
		displayname 				= "Vulcan 20mm 620Rnd";
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "v105_Vulcan_20mm";
	};
	class 5000Rnd_762x51_Yellow_Belt;
	class v105_1200Rnd_145x114_Red_Belt:5000Rnd_762x51_Yellow_Belt
	{
		initspeed 					= 1200;
		count						= 1200;
		ammo						="OPTRE_B_145x114_APFSDST";
		displayname 				= "14.5x114mm APFSDS-T 1200Rnd";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "v105_145x114_minigun";
	};
	class v105_200Rnd_145x114_Red_Belt:v105_1200Rnd_145x114_Red_Belt
	{
		initspeed 					= 1000;
		count						= 200;
		ammo						="OPTRE_B_145x114_APFSDST";
		displayname 				= "14.5x114mm APFSDS-T 200Rnd";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
		hardpoints[] = {};
		pylonWeapon = "";
	};
	class 96Rnd_40mm_G_belt;
	class v105_96Rnd_40mm_G_belt_WSMK:96Rnd_40mm_G_belt
	{
		displayname 				= "Impact Smoke / White";
		displaynameshort 			= "White SMK";
		descriptionShort			= "White SMK";
		ammo 						= "OPTRE_40mm_Smoke";
	};
	class v105_24Rnd_40mm_Flash:v105_96Rnd_40mm_G_belt_WSMK
	{
		displayname 				= "Flashbang";
		ammo 						= "";
		count						= 24;
	};
	//FALCON GL
	class 8Rnd_82mm_Mo_shells;
	class v105_50Rnd_82mm_shells: 8Rnd_82mm_Mo_shells
	{
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 250;
		count						= 50;
		displayname 				= "HOW-82mm HE 50Rnd";
		hardpoints[] = {"v105_Gunpods"};
		pylonWeapon = "v105_FalconGL";
	};
	class 60Rnd_20mm_AP_shells;
	class v105_8Rnd_20mm_AP:60Rnd_20mm_AP_shells
	{
		count						= 8;
	};
	class 60Rnd_20mm_HE_shells;
	class v105_8Rnd_20mm_HE:60Rnd_20mm_HE_shells
	{
		count						= 8;
	};
	
	
	//Flares
	class 168Rnd_CMFlare_Chaff_Magazine;
	class v105_320Rnd_Flare_Chaff_Magazine: 168Rnd_CMFlare_Chaff_Magazine
	{
		author						= "Howard";
		scope						= 2;
		count = 320;
	};
	
	//
	//	Firewills pylon overrides
	//
	class VehicleMagazine;
	class FIR_AIM9X_EWP_4rnd_M;
	class FIR_AIM9P_P_1rnd_M;
	class FIR_AIM9X_P_2rnd_M;
	class FIR_AIM120B_LAU115_P_1rnd_M;
	class FIR_AGM65D_P_3rnd_M;
	class FIR_AGM65B_P_3rnd_M;
	class FIR_AGM65H_P_3rnd_M;
	class FIR_AGM65F_P_1rnd_M;
	class FIR_AGM65G_P_1rnd_M;
	class FIR_AGM65K_P_1rnd_M;
	class FIR_AGM65E_P_1rnd_M;
	class FIR_AGM65E2_P_1rnd_M;
	class FIR_AGM65L_P_1rnd_M;
	class FIR_ASM2_P_1rnd_M;
	class FIR_Hydra_P_7rnd_M;
	class FIR_Hydra_P_19rnd_M;
	class FIR_Hydra_LAU130_P_19rnd_M;
	class FIR_Hydra_P_21rnd_M;
	class FIR_Hydra_P_14rnd_M;
	class FIR_Hydra_P_38rnd_M;
	class FIR_CRV7_P_19rnd_M;
	class FIR_Hydra_M229_P_7rnd_M;
	class FIR_Hydra_M229_P_19rnd_M;
	class FIR_Hydra_M229_P_14rnd_M;
	class FIR_Hydra_M229_P_38rnd_M;
	class FIR_Hydra_M247_P_7rnd_M;
	class FIR_Hydra_M247_P_19rnd_M;
	class FIR_Hydra_M247_P_14rnd_M;
	class FIR_Hydra_M247_P_38rnd_M;
	class FIR_Hydra_M257_P_7rnd_M;
	class FIR_Hydra_M261_P_7rnd_M;
	class FIR_Hydra_M261_P_19rnd_M;
	class FIR_Hydra_M261_P_14rnd_M;
	class FIR_Hydra_M261_P_38rnd_M;
	class FIR_Hydra_M282_P_7rnd_M;
	class FIR_Hydra_M282_P_19rnd_M;
	class FIR_Hydra_M282_P_14rnd_M;
	class FIR_Hydra_M282_P_38rnd_M;
	class FIR_Hydra_WDU4_P_7rnd_M;
	class FIR_Hydra_WDU4_P_19rnd_M;
	class FIR_Hydra_WDU4_P_14rnd_M;
	class FIR_Hydra_WDU4_P_38rnd_M;
	class FIR_Hydra_WP_P_7rnd_M;
	class FIR_Hydra_WP_P_21rnd_M;
	class FIR_APKWS_P_7rnd_M;
	class FIR_APKWS_P_19rnd_M;
	class FIR_APKWS_P_14rnd_M;
	class FIR_APKWS_P_38rnd_M;
	class FIR_APKWS_M247_P_7rnd_M;
	class FIR_APKWS_M247_P_19rnd_M;
	class FIR_APKWS_M247_P_14rnd_M;
	class FIR_APKWS_M247_P_38rnd_M;
	class FIR_APKWS_M282_P_7rnd_M;
	class FIR_APKWS_M282_P_19rnd_M;
	class FIR_APKWS_M282_P_14rnd_M;
	class FIR_APKWS_M282_P_38rnd_M;
	class FIR_Zuni_P_8rnd_M;
	class FIR_Zuni_Mk32_P_8rnd_M;
	class FIR_LZuni_P_8rnd_M;

	class v105_FIR_AIM9X_P_1rnd_M: FIR_AIM9P_P_1rnd_M
	{
		hardpoints[]= {"v105_Sidewinder_Single"};
		pylonWeapon= "v105_FIR_AIM9X";
	};
	class v105_FIR_AIM9X_P_2rnd_M: FIR_AIM9X_P_2rnd_M
	{
		hardpoints[] = {"105th_AA_Missiles"};
		pylonWeapon = "v105_FIR_AIM9X";
	};
	class v105_FIR_AIM9X_EWP_4rnd_M: FIR_AIM9X_EWP_4rnd_M
	{
		hardpoints[]= {"v105_Pelican_Center", "v105_SparrowHawk_Center"};
		pylonWeapon= "v105_FIR_AIM9X";
	};
	class v105_FIR_AIM120B_LAU115_P_1rnd_M: FIR_AIM120B_LAU115_P_1rnd_M
	{
		hardpoints[] = {"105th_AA_Missiles"};
		pylonWeapon = "v105_FIR_AIM120";
	};
	// AGM65s
	class v105_FIR_AGM65D_P_3rnd_M: FIR_AGM65D_P_3rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
	};
	class v105_FIR_AGM65B_P_3rnd_M: FIR_AGM65B_P_3rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
	};
	class v105_FIR_AGM65H_P_3rnd_M: FIR_AGM65H_P_3rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
		
	};
	class v105_FIR_AGM65F_P_1rnd_M: FIR_AGM65F_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
	};
	class v105_FIR_AGM65G_P_1rnd_M : FIR_AGM65G_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
		
	};
	class v105_FIR_AGM65K_P_1rnd_M : FIR_AGM65K_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
		
	};
	class v105_FIR_AGM65E_P_1rnd_M : FIR_AGM65E_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
		
	};
	class v105_FIR_AGM65E2_P_1rnd_M : FIR_AGM65E2_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";
	};
	class v105_FIR_AGM65L_P_1rnd_M : FIR_AGM65L_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles"};
		pylonWeapon = "v105_FIR_AGM65";		
	};
	// ASM
	class v105_FIR_ASM2_P_1rnd_M : FIR_ASM2_P_1rnd_M
	{
		hardpoints[] = {"105th_AG_Missiles" };
		pylonWeapon = "v105_FIR_ASM2";
	};
	// HEDP 19
	class v105_FIR_Hydra_P_7rnd_M: FIR_Hydra_P_7rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
				
	};
	class v105_FIR_Hydra_P_19rnd_M : FIR_Hydra_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};
	class v105_FIR_Hydra_LAU130_P_19rnd_M :  FIR_Hydra_LAU130_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};		
	class v105_FIR_Hydra_P_21rnd_M : FIR_Hydra_P_21rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};			
	class v105_FIR_Hydra_P_14rnd_M : FIR_Hydra_P_14rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};		
	class v105_FIR_Hydra_P_38rnd_M : FIR_Hydra_P_38rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};		
	class v105_FIR_CRV7_P_19rnd_M : FIR_CRV7_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};
	class v105_FIR_Hydra_M229_P_7rnd_M : FIR_Hydra_M229_P_7rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class v105_FIR_Hydra_M229_P_19rnd_M : FIR_Hydra_M229_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};				
	class v105_FIR_Hydra_M229_P_14rnd_M : FIR_Hydra_M229_P_14rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};		
	class v105_FIR_Hydra_M229_P_38rnd_M : FIR_Hydra_M229_P_38rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};			
	class v105_FIR_Hydra_M247_P_7rnd_M : FIR_Hydra_M247_P_7rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class v105_FIR_Hydra_M247_P_19rnd_M : FIR_Hydra_M247_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class  v105_FIR_Hydra_M247_P_14rnd_M : FIR_Hydra_M247_P_14rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};		
	class  v105_FIR_Hydra_M247_P_38rnd_M : FIR_Hydra_M247_P_38rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};				
	class v105_FIR_Hydra_M257_P_7rnd_M : FIR_Hydra_M257_P_7rnd_M
	{
		hardpoints[] = { "FIR_F16_Combined_HP"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class v105_FIR_Hydra_M261_P_7rnd_M : FIR_Hydra_M261_P_7rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class v105_FIR_Hydra_M261_P_19rnd_M : FIR_Hydra_M261_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class  v105_FIR_Hydra_M261_P_14rnd_M : FIR_Hydra_M261_P_14rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};		
	class  v105_FIR_Hydra_M261_P_38rnd_M : FIR_Hydra_M261_P_38rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";	
	};				
	class v105_FIR_Hydra_M282_P_7rnd_M : FIR_Hydra_M282_P_7rnd_M
	{
		hardpoints[] = { "v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};			
	class v105_FIR_Hydra_M282_P_19rnd_M : FIR_Hydra_M282_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};				
	class  v105_FIR_Hydra_M282_P_14rnd_M : FIR_Hydra_M282_P_14rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};		
	class  v105_FIR_Hydra_M282_P_38rnd_M : FIR_Hydra_M282_P_38rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};			
	class v105_FIR_Hydra_WDU4_P_7rnd_M : FIR_Hydra_WDU4_P_7rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};
	class v105_FIR_Hydra_WDU4_P_19rnd_M : FIR_Hydra_WDU4_P_19rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";			
	};		
	class  v105_FIR_Hydra_WDU4_P_14rnd_M : FIR_Hydra_WDU4_P_14rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";	
	};		
	class  v105_FIR_Hydra_WDU4_P_38rnd_M : FIR_Hydra_WDU4_P_38rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";
	};				
	class v105_FIR_Hydra_WP_P_7rnd_M : FIR_Hydra_WP_P_7rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";		
	};
	class v105_FIR_Hydra_WP_P_21rnd_M : FIR_Hydra_WP_P_21rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_RKT_Launcher";	
	};	
	// APKWS
	class v105_FIR_APKWS_P_7rnd_M :  FIR_APKWS_P_7rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
		pylonWeapon = "v105_FIR_APKWS_Launcher";
	};
	class v105_FIR_APKWS_P_19rnd_M : FIR_APKWS_P_19rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};		
	class  v105_FIR_APKWS_P_14rnd_M : FIR_APKWS_P_14rnd_M 
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};		
	class  v105_FIR_APKWS_P_38rnd_M : FIR_APKWS_P_38rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};					
	class v105_FIR_APKWS_M247_P_7rnd_M : FIR_APKWS_M247_P_7rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};
	class v105_FIR_APKWS_M247_P_19rnd_M : FIR_APKWS_M247_P_19rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};		
	class  v105_FIR_APKWS_M247_P_14rnd_M : FIR_APKWS_M247_P_14rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};		
	class  v105_FIR_APKWS_M247_P_38rnd_M : FIR_APKWS_M247_P_38rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};					
	class v105_FIR_APKWS_M282_P_7rnd_M : FIR_APKWS_M282_P_7rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};
	class v105_FIR_APKWS_M282_P_19rnd_M : FIR_APKWS_M282_P_19rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};			
	class  v105_FIR_APKWS_M282_P_14rnd_M : FIR_APKWS_M282_P_14rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};		
	class  v105_FIR_APKWS_M282_P_38rnd_M : FIR_APKWS_M282_P_38rnd_M
	{
		hardpoints[] = 
					{
						"v105_GuidedRockets"
					};
					pylonWeapon = "v105_FIR_APKWS_Launcher";		
	};
	// Zuni HE
	class v105_FIR_Zuni_P_8rnd_M : FIR_Zuni_P_8rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_Zuni_Launcher";
	};	
	// Zuni HEAT
	class v105_FIR_Zuni_Mk32_P_8rnd_M : FIR_Zuni_Mk32_P_8rnd_M
	{
		hardpoints[] = {"v105_UnguidedRockets"};
		pylonWeapon = "v105_FIR_Zuni_Launcher";
	};
	// Laser Zuni HE
	class v105_FIR_LZuni_P_8rnd_M : FIR_LZuni_P_8rnd_M
	{
		hardpoints[] = {"v105_GuidedRockets"};
		pylonWeapon = "v105_FIR_LZuni_Launcher";
	};		
	
	// ECM Jammer
	class FIR_ALQ99_P_1rnd_M;
	class v105_ALQ99_P_1rnd_M:FIR_ALQ99_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore"};
		pylonWeapon="v105_FIR_ECMPOD";
	};
	
	
	//SDB
	class FIR_GBU53_P_4rnd_M;
	class v105_GBU53_P_4rnd_M:FIR_GBU53_P_4rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU53";
	};
	//GBU
	//12
	class FIR_GBU12_P_1rnd_M;
	class v105_FIR_GBU12_P_1rnd_M:FIR_GBU12_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU12";
	};
	class FIR_GBU12_P_2rnd_M;
	class v105_FIR_GBU12_P_2rnd_M:FIR_GBU12_P_2rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU12";
	};
	//EGBU
	class FIR_EGBU12_P_1rnd_M;
	class v105_FIR_EGBU12_P_1rnd_M:FIR_EGBU12_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_EGBU12";
	};
	class FIR_EGBU12_P_2rnd_M;
	class v105_FIR_EGBU12_P_2rnd_M:FIR_EGBU12_P_2rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_EGBU12";
	};
	//16 PAVEWAY 2
	class FIR_GBU16_Navy_P_1rnd_M;
	class v105_FIR_GBU16_Navy_P_1rnd_M:FIR_GBU16_Navy_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU16";
	};
	//24 PAVEWAY 3
	class FIR_GBU24A_P_1rnd_M;
	class v105_FIR_GBU24A_P_1rnd_M:FIR_GBU24A_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU24";
	};
	class FIR_GBU24A_BLU118_P_1rnd_M;
	class v105_FIR_GBU24A_BLU118_P_1rnd_M:FIR_GBU24A_BLU118_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU24";
	};
	class FIR_GBU24A_BLU109_P_1rnd_M;
	class v105_FIR_GBU24A_BLU109_P_1rnd_M:FIR_GBU24A_BLU109_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU24";
	};
	//JDAM
	//38
	class FIR_GBU38_P_1rnd_M;
	class v105_FIR_GBU38_P_1rnd_M:FIR_GBU38_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU38";
	};
	//32
	class FIR_GBU32_P_1rnd_M;
	class v105_FIR_GBU32_P_1rnd_M:FIR_GBU32_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU32";
	};
	//31
	class FIR_GBU31_P_1rnd_M;
	class v105_FIR_GBU31_P_1rnd_M:FIR_GBU31_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon= "v105_FIR_GBU31";
	};
	//MK82
	class FIR_Mk82_GP_Navy_P_1rnd_M;
	class v105_FIR_Mk82_GP_Navy_P_1rnd_M:FIR_Mk82_GP_Navy_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb"};
		pylonWeapon= "v105_FIR_mk82_Snakeye_Launcher";	
	};
	class FIR_Mk82_GP_Navy_prox_P_1rnd_M;
	class v105_FIR_Mk82_GP_Navy_prox_P_1rnd_M:FIR_Mk82_GP_Navy_prox_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb"};
		pylonWeapon= "v105_FIR_mk82_Snakeye_Launcher";	
	};
	class FIR_Mk82_GP_Navy_P_2rnd_M;
	class v105_FIR_Mk82_GP_Navy_P_2rnd_M:FIR_Mk82_GP_Navy_P_2rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb"};
		pylonWeapon= "v105_FIR_mk82_Snakeye_Launcher";	
	};
	class FIR_Mk82_GP_P_3rnd_M;
	class v105_FIR_Mk82_GP_P_3rnd_M:FIR_Mk82_GP_P_3rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_mk82_Snakeye_Launcher";	
	};
	class FIR_Mk82_GP_P_6rnd_M;
	class v105_FIR_Mk82_GP_P_6rnd_M:FIR_Mk82_GP_P_6rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_mk82_Snakeye_Launcher";	
	};
	//MK83
	class FIR_Mk83_GP_Navy_P_1rnd_M;
	class v105_FIR_Mk83_GP_Navy_P_1rnd_M:FIR_Mk83_GP_Navy_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_mk83";	
	};
	//MK84
	class FIR_Mk84_GP_Navy_P_1rnd_M;
	class v105_FIR_Mk84_GP_Navy_P_1rnd_M:FIR_Mk84_GP_Navy_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanBomb","105th_Claymore"};
		pylonWeapon= "v105_FIR_mk84";	
	};
	//AGM154
	class FIR_AGM154A_P_1rnd_M;
	class v105_FIR_AGM154A_P_1rnd_M:FIR_AGM154A_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon="v105_FIR_AGM154";
	};
	class FIR_AGM154C_P_1rnd_M;
	class v105_FIR_AGM154C_P_1rnd_M:FIR_AGM154C_P_1rnd_M
	{
		hardpoints[] = {"105th_Claymore"};
		pylonWeapon="v105_FIR_AGM154";
	};
	//AGM HARM
	class FIR_AGM88_P_1rnd_M;
	class v105_AGM88_P_1rnd_M:FIR_AGM88_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanHeavy","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM88";
	};
	
	// ACE Hellfires
	class PylonRack_3Rnd_ACE_Hellfire_AGM114K;
	class v105_PylonRack_3Rnd_ACE_Hellfire_AGM114K:PylonRack_3Rnd_ACE_Hellfire_AGM114K
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore","105th_Hellfires"};
		pylonWeapon = "v105_ace_hellfire_launcher";
	};
	
	class PylonRack_3Rnd_ACE_Hellfire_AGM114N;
	class v105_PylonRack_3Rnd_ACE_Hellfire_AGM114N:PylonRack_3Rnd_ACE_Hellfire_AGM114N
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore","105th_Hellfires"};
		pylonWeapon = "v105_ace_hellfire_launcher";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114L;
	class v105_PylonRack_3Rnd_ACE_Hellfire_AGM114L:PylonRack_3Rnd_ACE_Hellfire_AGM114L
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore","105th_Hellfires"};
		pylonWeapon = "v105_ace_hellfire_launcher";
	};
	class OPTRE_16Rnd_Anvil1_missiles;
	class OPTRE_16Rnd_AnvilSMK_W_missiles: OPTRE_16Rnd_Anvil1_missiles
	{
		displayName="16x 'ANVIL SMK-W' Smoke Rockets";
		displayNameShort="'ANVIL SMK-W' Smoke Rockets";
		pylonWeapon="OPTRE_missiles_AnvilSMK";
		ammo="OPTRE_M_ANVILSMK_W_Rocket";
		hardpoints[]=
		{
			"Pelican_Utility"
		};
	};
	class OPTRE_16Rnd_AnvilSMK_B_missiles: OPTRE_16Rnd_AnvilSMK_W_missiles
	{
		displayName="16x 'ANVIL SMK-B' Smoke Rocket";
		displayNameShort="'ANVIL SMK-B' Smoke Rockets";
		ammo="OPTRE_M_ANVILSMK_B_Rocket";
	};
	class OPTRE_16Rnd_AnvilSMK_R_missiles: OPTRE_16Rnd_AnvilSMK_W_missiles
	{
		displayName="16x 'ANVIL SMK-R' Smoke Rocket";
		displayNameShort="'ANVIL SMK-R' Smoke Rockets";
		ammo="OPTRE_M_ANVILSMK_R_Rocket";
	};
	class OPTRE_16Rnd_AnvilSMK_G_missiles: OPTRE_16Rnd_AnvilSMK_W_missiles
	{
		displayName="16x 'ANVIL SMK-G' Smoke Rocket";
		displayNameShort="'ANVIL SMK-G' Smoke Rockets";
		ammo="OPTRE_M_ANVILSMK_G_Rocket";
	};
	class OPTRE_16Rnd_AnvilSMK_O_missiles: OPTRE_16Rnd_AnvilSMK_W_missiles
	{
		displayName="16x 'ANVIL SMK-O' Smoke Rocket";
		displayNameShort="'ANVIL SMK-O' Smoke Rockets";
		ammo="OPTRE_M_ANVILSMK_O_Rocket";
	};
	class OPTRE_16Rnd_AnvilSMK_P_missiles: OPTRE_16Rnd_AnvilSMK_W_missiles
	{
		displayName="16x 'ANVIL SMK-P' Smoke Rocket";
		displayNameShort="'ANVIL SMK-P' Smoke Rockets";
		ammo="OPTRE_M_ANVILSMK_P_Rocket";
	};
	class OPTRE_16Rnd_AnvilSMK_Y_missiles: OPTRE_16Rnd_AnvilSMK_W_missiles
	{
		displayName="16x 'ANVIL SMK-Y' Smoke Rocket";
		displayNameShort="'ANVIL SMK-Y' Smoke Rockets";
		ammo="OPTRE_M_ANVILSMK_Y_Rocket";
	};
	class ace_hot_1_6Rnd;
	class v105_hot_1_6Rnd : ace_hot_1_6Rnd
	{
		displayName="HOT-1 6Rnd";
		displayNameShort="HOT-1 6Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_1_2Rnd;
	class v105_hot_1_2Rnd : ace_hot_1_2Rnd
	{
		displayName="HOT-1 2Rnd";
		displayNameShort="HOT-1 2Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_2_6Rnd;
	class v105_hot_2_6Rnd : ace_hot_2_6Rnd
	{
		displayName="HOT-2 6Rnd";
		displayNameShort="HOT-2 6Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_2_2Rnd;
	class v105_hot_2_2Rnd : ace_hot_2_2Rnd
	{
		displayName="HOT-2 2Rnd";
		displayNameShort="HOT-2 2Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_2mp_6Rnd;
	class v105_hot_2mp_6Rnd : ace_hot_2mp_6Rnd
	{
		displayName="HOT-2MP 6Rnd";
		displayNameShort="HOT-2MP 6Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_2mp_2Rnd;
	class v105_hot_2mp_2Rnd : ace_hot_2mp_2Rnd
	{
		displayName="HOT-2MP 2Rnd";
		displayNameShort="HOT-2MP 2Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_3_6Rnd;
	class v105_hot_3_6Rnd : ace_hot_3_6Rnd
	{ 
		displayName="HOT-3 6Rnd";
		displayNameShort="HOT-3 6Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};
	class ace_hot_3_2Rnd;
	class v105_hot_3_2Rnd : ace_hot_3_2Rnd
	{
		displayName="HOT-3 2Rnd";
		displayNameShort="HOT-3 2Rnd";
		hardpoints[]={"105th_HOTs"};
		pylonWeapon="v105_HOT_Generic_Launcher";
	};

	/* Overrides for the Anvil 2&3 to fix the 16rn ammo counts */

    class OPTRE_1Rnd_Anvil1_missiles;
    class OPTRE_16Rnd_Anvil2_missiles: OPTRE_1Rnd_Anvil1_missiles
    {
    	count=16;
    };

    	class OPTRE_16Rnd_Anvil3_missiles: OPTRE_1Rnd_Anvil1_missiles
    {
    	count=16;
    };

    /* End of overrides for Anvil 2&3 to fix the 16rn ammo counts */
	