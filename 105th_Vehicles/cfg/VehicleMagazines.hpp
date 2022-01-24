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
	class HOW_1000Rnd_93x64_Mixed_Box: OPTRE_100Rnd_762x51_Box
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
	class HOW_60Rnd_50mm_HE : OPTRE_100Rnd_50mm_HE
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
	class HOW_60Rnd_50mm_APFSDS : OPTRE_100Rnd_50mm_HE
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
	class HOW_GAU30mm_570RND: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		dlc = "OPTRE";
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 1200;
		count						= 570;
		ammo						="Gatling_30mm_HE_Plane_CAS_01_F";
		displayname 				= "30mm";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
	};
	class magazine_Cannon_Phalanx_x1550;
	class HOW_Vulcan20mm_620RND: magazine_Cannon_Phalanx_x1550
	{
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 1500;
		count						= 620;
	};
	class 5000Rnd_762x51_Yellow_Belt;
	class HOW_1200Rnd_145x114_Red_Belt:5000Rnd_762x51_Yellow_Belt
	{
		initspeed 					= 1200;
		count						= 1200;
		ammo						="OPTRE_B_145x114_APFSDST";
		displayname 				= "14.5 APFSDS";
		displaynameshort 			= "";
		descriptionShort			= "";
		tracersEvery				= 1;
	};
	//FALCON GL
	class 8Rnd_82mm_Mo_shells;
	class HOW_50Rnd_82mm_shells: 8Rnd_82mm_Mo_shells
	{
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 250;
		count						= 50;
	};
	class 60Rnd_20mm_AP_shells;
	class HOW_8Rnd_20mm_AP:60Rnd_20mm_AP_shells
	{
		count						= 8;
	};
	class 60Rnd_20mm_HE_shells;
	class HOW_8Rnd_20mm_HE:60Rnd_20mm_HE_shells
	{
		count						= 8;
	};
	
	
	//Flares
	class 168Rnd_CMFlare_Chaff_Magazine;
	class HOW_320Rnd_Flare_Chaff_Magazine: 168Rnd_CMFlare_Chaff_Magazine
	{
		author						= "Howard";
		scope						= 2;
		count = 320;
	};
	
	
	
	// Pelican pylon hardpoints
	class FIR_AIM9X_P_2rnd_M;
	class v105_AIM9X_P_2rnd_M: FIR_AIM9X_P_2rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore","105th_AntiAir"};
		pylonWeapon="v105_FIR_AIM9X";
	};
	class FIR_AIM120B_LAU115_P_1rnd_M;
	class v105_AIM120B_LAU115_P_1rnd_M:FIR_AIM120B_LAU115_P_1rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore","105th_AntiAir"};
		pylonWeapon="v105_FIR_AIM120";
	};
	// AGM65s
	class FIR_AGM65D_P_3rnd_M;
	class v105_AGM65D_P_3rnd_M:FIR_AGM65D_P_3rnd_M
	{
		hardpoints[] = {"105th_PelicanMed","105th_Claymore","105th_Hornet"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class FIR_AGM65B_P_3rnd_M;
	class v105_AGM65B_P_3rnd_M:FIR_AGM65B_P_3rnd_M
	{
		hardpoints[] = {"105th_PelicanMed","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class FIR_AGM65H_P_3rnd_M;
	class v105_AGM65H_P_3rnd_M:FIR_AGM65H_P_3rnd_M
	{
		hardpoints[] = {"105th_PelicanMed","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
		
	};
	class FIR_AGM65F_P_1rnd_M;
	class v105_AGM65F_P_1rnd_M:FIR_AGM65F_P_1rnd_M
	{
		displayName = "AGM-65F Maverick x1";
		hardpoints[] = {"105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class v105_AGM65F_P_3rnd_M:FIR_AGM65F_P_1rnd_M
	{
		displayName = "AGM-65F Maverick x3";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_AGM65";
		count=3;
	};
	class FIR_AGM65G_P_1rnd_M;
	class v105_AGM65G_P_1rnd_M:FIR_AGM65G_P_1rnd_M
	{
		displayName = "AGM-65G Maverick x1";
		hardpoints[] = {"105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class v105_AGM65G_P_3rnd_M:FIR_AGM65G_P_1rnd_M
	{
		displayName = "AGM-65G Maverick x3";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_AGM65";
		count=3;
	};
	class FIR_AGM65K_P_1rnd_M;
	class v105_AGM65K_P_1rnd_M:FIR_AGM65K_P_1rnd_M
	{
		displayName = "AGM-65K Maverick x1";
		hardpoints[] = {"105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class v105_AGM65K_P_3rnd_M:FIR_AGM65K_P_1rnd_M
	{
		displayName = "AGM-65K Maverick x3";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_AGM65";
		count=3;
	};
	class FIR_AGM65E_P_1rnd_M;
	class v105_AGM65E_P_1rnd_M:FIR_AGM65E_P_1rnd_M
	{
		displayName = "AGM-65E Maverick x1";
		hardpoints[] = {"105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class v105_AGM65E_P_3rnd_M:FIR_AGM65E_P_1rnd_M
	{
		displayName = "AGM-65E Maverick x3";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_AGM65";
		count=3;
	};
	class FIR_AGM65E2_P_1rnd_M;
	class v105_AGM65E2_P_1rnd_M:FIR_AGM65E2_P_1rnd_M
	{
		displayName = "AGM-65E2 Maverick x1";
		hardpoints[] = {"105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class v105_AGM65E2_P_3rnd_M:FIR_AGM65E2_P_1rnd_M
	{
		displayName = "AGM-65E2 Maverick x3";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_AGM65";
		count=3;
	};
	class FIR_AGM65L_P_1rnd_M;
	class v105_AGM65L_P_1rnd_M:FIR_AGM65L_P_1rnd_M
	{
		displayName = "AGM-65L Maverick x1";
		hardpoints[] = {"105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_AGM65";
	};
	class v105_AGM65L_P_3rnd_M:FIR_AGM65L_P_1rnd_M
	{
		displayName = "AGM-65L Maverick x3";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_AGM65";
		count=3;
	};
	// ASM
	class FIR_ASM2_P_1rnd_M;
	class v105_ASM2_P_2rnd_M:FIR_ASM2_P_1rnd_M
	{
		displayName = "ASM-2 x2";
		hardpoints[] = {"105th_PelicanMed"};
		pylonWeapon="v105_FIR_ASM2";
		count=2;
	};
	
	
	// HEDP 19
	class FIR_Hydra_P_7rnd_M;
	class v105_Hydra_P_7rnd_M:FIR_Hydra_P_7rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_P_19rnd_M;
	class v105_Hydra_P_19rnd_M:FIR_Hydra_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	// HEDP 38
	class FIR_Hydra_P_38rnd_M;
	class v105_Hydra_P_38rnd_M:FIR_Hydra_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	// HE
	class FIR_Hydra_M229_P_7rnd_M;
	class v105_Hydra_M229_P_7rnd_M:FIR_Hydra_M229_P_7rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M229_P_19rnd_M;
	class v105_Hydra_M229_P_19rnd_M:FIR_Hydra_M229_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M229_P_38rnd_M;
	class v105_Hydra_M229_P_38rnd_M:FIR_Hydra_M229_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	// HEAT
	class FIR_Hydra_M247_P_7Rnd_M;
	class v105_Hydra_M247_P_7Rnd_M: FIR_Hydra_M247_P_7Rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M247_P_19rnd_M;
	class v105_Hydra_M247_P_19rnd_M:FIR_Hydra_M247_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M247_P_38rnd_M;
	class v105_Hydra_M247_P_38rnd_M:FIR_Hydra_M247_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	// Penetrator
	class FIR_Hydra_M282_P_7rnd_M;
	class v105_FIR_Hydra_M282_P_7rnd_M:FIR_Hydra_M282_P_7rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	
	class FIR_Hydra_M282_P_19rnd_M;
	class v105_Hydra_M282_P_19rnd_M:FIR_Hydra_M282_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M282_P_38rnd_M;
	class v105_Hydra_M282_P_38rnd_M:FIR_Hydra_M282_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	// APERS
	class FIR_Hydra_WDU4_P_7rnd_M;
	class v105_FIR_Hydra_WDU4_P_7rnd_M:FIR_Hydra_WDU4_P_7rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_WDU4_P_19rnd_M;
	class v105_Hydra_WDU4_P_19rnd_M:FIR_Hydra_WDU4_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_WDU4_P_38rnd_M;
	class v105_Hydra_WDU4_P_38rnd_M:FIR_Hydra_WDU4_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	// MPSM
	class FIR_Hydra_M261_P_7rnd_M;
	class v105_Hydra_M261_P_7rnd_M:FIR_Hydra_M261_P_7rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M261_P_19rnd_M;
	class v105_Hydra_M261_P_19rnd_M:FIR_Hydra_M261_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_M261_P_38rnd_M;
	class v105_Hydra_M261_P_38rnd_M:FIR_Hydra_M261_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	//WP
	class FIR_Hydra_WP_P_7rnd_M;
	class v105_Hydra_WP_P_7rnd_M:FIR_Hydra_WP_P_7rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	};
	class FIR_Hydra_WP_P_21rnd_M;
	class v105_Hydra_WP_P_21rnd_M:FIR_Hydra_WP_P_21rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_RKT_Launcher";
	}; 
	// APKWS HEDP
	class FIR_APKWS_P_19rnd_M;
	class v105_APKWS_P_19rnd_M:FIR_APKWS_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_APKWS_Launcher";
	};
	class FIR_APKWS_P_38rnd_M;
	class v105_APKWS_P_38rnd_M: FIR_APKWS_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore"};
		pylonWeapon="v105_FIR_APKWS_Launcher";
	};
	// APKWS HEAT
	class FIR_APKWS_M247_P_19rnd_M;
	class v105_APKWS_M247_P_19rnd_M:FIR_APKWS_M247_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_APKWS_Launcher";
	};
	class FIR_APKWS_M247_P_38rnd_M;
	class v105_APKWS_M247_P_38rnd_M:FIR_APKWS_M247_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore"};
		pylonWeapon="v105_FIR_APKWS_Launcher";
	};
	// APKWS Penetrators
	class FIR_APKWS_M282_P_19rnd_M;
	class v105_APKWS_M282_P_19rnd_M:FIR_APKWS_M282_P_19rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_APKWS_Launcher";
	};
	class FIR_APKWS_M282_P_38rnd_M;
	class v105_APKWS_M282_P_38rnd_M:FIR_APKWS_M282_P_38rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore"};
		pylonWeapon="v105_FIR_APKWS_Launcher";
	};
	// Zuni HE
	class FIR_Zuni_P_8rnd_M;
	class v105_Zuni_P_8rnd_M:FIR_Zuni_P_8rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_Zuni_Launcher";
	};
	// Zuni HEAT
	class FIR_Zuni_Mk32_P_8rnd_M;
	class v105_Zuni_Mk32_P_8rnd_M:FIR_Zuni_Mk32_P_8rnd_M
	{
		hardpoints[] = {"105th_PelicanUnguided","105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_Zuni_Launcher";
	};
	// Laser Zuni HE
	class FIR_LZuni_P_8rnd_M;
	class v105_LZuni_P_8rnd_M:FIR_LZuni_P_8rnd_M
	{
		hardpoints[] = {"105th_PelicanLite","105th_Hornet","105th_Claymore"};
		pylonWeapon="v105_FIR_LZuni_Launcher";
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
		pylonWeapon = "v105_FIR_AGM65";
	};
	
	class PylonRack_3Rnd_ACE_Hellfire_AGM114N;
	class v105_PylonRack_3Rnd_ACE_Hellfire_AGM114N:PylonRack_3Rnd_ACE_Hellfire_AGM114N
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore","105th_Hellfires"};
		pylonWeapon = "v105_FIR_AGM65";
	};
	class PylonRack_3Rnd_ACE_Hellfire_AGM114L;
	class v105_PylonRack_3Rnd_ACE_Hellfire_AGM114L:PylonRack_3Rnd_ACE_Hellfire_AGM114L
	{
		hardpoints[] = {"105th_PelicanLite","105th_Claymore","105th_Hellfires"};
		pylonWeapon = "v105_FIR_AGM65";
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
	