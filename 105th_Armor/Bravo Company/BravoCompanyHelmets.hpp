// Reorganized Assets 15102020 <- Texture changelogs will reflect via dayMonthYear Basis
//Changelog 
// Renamed all Bravo Company personnel helmets to correct naming convention as JDoe_CH252D_DEF_CO
// Updated pathing 25/10/2020
// Added Swoner and Coleman, updated Canley and Hannibal's helmets.
// Re-added Helms, Madsen, commented out Music, Trench, Spade, Sound, McDaniel 8/27/21
// Re-added Overture, Pierce 12/29/2021
// Re-added Helms 27/02/2022



/* The entire part below is purely a test at this time so please ignore */
/*
	class OPTRE_UNSC_CH252_Helmet_Base: H_HelmetB
	{
		dlc="OPTRE";
		scope=0;
		author="N-4 Logistics";
		displayName="[105th] ODST Helmet [TEST]";
		picture="\105th_Armor\Bravo Company\data\Helmets\base\test.paa";
		model="\105th_Armor\Bravo Company\data\Helmets\base\models\test.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"H_Collar",
			"H_Neck",
			"H_UNSCVacLower",
			"H_UNSCVacVisor",
			"H_VacCollar"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\helmet_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_UNSC_Units\Army\helmet.p3d";
			mass=40;
			modelSides[]={6};
			passThrough=0.1;
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};

*/

// ODST Rookie Polarized Helmet
	class BCOMP_CSO_Rookie_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet [Rookie]";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\base\Rookie_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};


// ODST Polarized Helmets
	class BCOMP_DEMO_AVirus_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Virus)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\AVir_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	/*
	class BCOMP_AUTO_MMusic_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Music)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\MMus_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	*/
	class BCOMP_SARC_MTrench_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Trench)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\MTre_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	/*
	class BCOMP_MARK_BSpade_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Spade)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\BSpa_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	
	class BCOMP_AELEAD_JMorveyn: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Morveyn)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JMor_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	*/
	class BCOMP_MARK_RCanley_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Canley)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\RCan_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};

	class BCOMP_ELEAD_BBarkley_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Barkley)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\BBar_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};

// Update 2/13/22 Hid Craig's helmet because he's in 2nd platoon now.
/*
	class BCOMP_ELEAD_BCraig_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Craig)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\BCra_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
*/
	class BCOMP_DEMO_MSevarach_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Sev)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\MSev_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	/*
	class BCOMP_RES_JAdams_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Adams)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JAda_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	*/
	class BCOMP_MSL_KBulck_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Bulck)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\KBul_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_SARC_SOverture_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Overture)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\SOve_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_XO_FRichter_ODST: VES_CH252D
	{
		author="Hannibal";
		displayName="[ODST] CH252D Helmet (Richter)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\FRic_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_CDubbo_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Dubbo)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\CDub_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	
	class BCOMP_CSO_NOKillen_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (O'Killen)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\NOKi_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	
	class BCOMP_CSO_WColeman_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Coleman)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\WCol_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	
	class BCOMP_CSO_TSwoner_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Swoner)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\TSwo_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_BSmith_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Smith)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\BSmi_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_ENungester_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Nungester)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\ENun_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_FPierce_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Pierce)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\FPie_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	/*
	class BCOMP_CSO_MSound_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Sound)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\MSou_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	*/
	class BCOMP_CSO_TKynx_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Kynx)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\TKyn_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_AWinters_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Winters)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\AWin_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};

	class BCOMP_CHIEF_CVarner_ODST: VES_CH252D
	{
		author="Varner";
		displayName="[ODST] CH252D Helmet (Varner)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\CVar_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	}; 
	/*
	class BCOMP_TLEAD_CHannibal_ODST: VES_CH252D
	{
		author="Varner";
		displayName="[ODST] CH252D Helmet (Hannibal)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\CHan_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	}; 
	*/
	class BCOMP_CSO_CMcDaniel_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (McDaniel)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\CMcD_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	}; 
	
	class BCOMP_CSO_ABman_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Bman)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\ABma_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_GCruz_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Cruz)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\GCru_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_JNostra_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Nostra)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JNos_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_JVargas_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Vargas)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JVar_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_GWells_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Wells)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\GWel_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_JCollins_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Collins)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JCol_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
/* Luke's Additions start */
	class BCOMP_CSO_PLuke_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Luke)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\PLuk_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_MSmith_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Smith)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\MSmi_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_MMokes_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Mokes)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\MMok_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_LOswald_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Oswald)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\LOsw_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_KMidreus_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Midreus)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\KMid_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_JRamos_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Ramos)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JRam_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_JChristopher_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Christopher)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\JChr_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_BRonin_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Ronin)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\BRon_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	class BCOMP_CSO_CBarrier_ODST: VES_CH252D
	{
		author="N-4 Logistics";
		displayName="[ODST] CH252D Helmet (Barrier)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\CBar_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
/* Luke's Additions end */

	/*
	class BCOMP_GREN_OMadsen_ODST: VES_CH252D
	{
		author="Varner";
		displayName="[ODST] CH252D Helmet (Madsen)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\OMad_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
	*/
	class BCOMP_CO_AHelms_ODST: VES_CH252D
	{
		author="Varner";
		displayName="[ODST] CH252D Helmet (Helms)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\Bravo Company\data\Helmets\AHel_CH252D_DEF_CO.paa",
			"105th_Armor\Bravo Company\data\Helmets\base\7_CH252_BLK_V_CO.paa"
		};
	};
