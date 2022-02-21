class URFMod_rifle_AK12: arifle_AK12_F
	{
		author="URF Mod";
		
		baseWeapon="URFMod_rifle_AK12";
		scope=2;
		scopeArsenal=2;
		displayName="[URF] AK12 Test";
		
		magazines[]=
		{
			"URF_30Rnd_95x40_AK12recal_mag",
			"URF_30Rnd_95x40_AK12recal_mag_tracer",
			"URF_30Rnd_95x40_AKMrecal_mag",
			"URF_30Rnd_95x40_AKMrecal_mag_tracer",

			"URF_75Rnd_95x40_AK12recal_mag",
			"URF_75Rnd_95x40_AK12recal_mag_tracer",
			"URF_75Rnd_95x40_AKMrecal_mag",
			"URF_75Rnd_95x40_AKMrecal_mag_tracer"
		};
		magazineWell[]=
		{
			
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.30000001};
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					
					"optic_yorris",
					
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",

					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
					
					"OPTRE_M6S_Scope",
					"OPTRE_M7_Sight_v2",
					"OPTRE_M392_Scope_v2",
					"OPTRE_M393_Scope_v2",
					"OPTRE_M393_ACOG_v2",
					"OPTRE_M393_EOTECH_v2",
					"OPTRE_BR55HB_Scope_v2",
					"OPTRE_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
			mass=100;
		};
		class ItemInfo
		{
			priority=1;
		};
		
	};
	class URFMod_rifle_AK12GL: arifle_AK12_GL_F
	{
		author="URF Mod";
		
		baseWeapon="URFMod_rifle_AK12GL";
		scope=2;
		scopeArsenal=2;
		displayName="[URF] AK12-GL Test";
		
		magazines[]=
		{
			"URF_30Rnd_95x40_AK12recal_mag",
			"URF_30Rnd_95x40_AK12recal_mag_tracer",
			"URF_30Rnd_95x40_AKMrecal_mag",
			"URF_30Rnd_95x40_AKMrecal_mag_tracer",

			"URF_75Rnd_95x40_AK12recal_mag",
			"URF_75Rnd_95x40_AK12recal_mag_tracer",
			"URF_75Rnd_95x40_AKMrecal_mag",
			"URF_75Rnd_95x40_AKMrecal_mag_tracer"
		};
		magazineWell[]=
		{
			
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.30000001};
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					
					"optic_yorris",
					
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",

					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
					
					"OPTRE_M6S_Scope",
					"OPTRE_M7_Sight_v2",
					"OPTRE_M392_Scope_v2",
					"OPTRE_M393_Scope_v2",
					"OPTRE_M393_ACOG_v2",
					"OPTRE_M393_EOTECH_v2",
					"OPTRE_BR55HB_Scope_v2",
					"OPTRE_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
			mass=80;
		};
		class ItemInfo
		{
			priority=1;
		};
		
	};
	class URFMod_rifle_RPK12: arifle_RPK12_F
	{
		author="URF Mod";
		
		baseWeapon="URFMod_rifle_RPK12";
		scope=2;
		scopeArsenal=2;
		displayName="[URF] RPK12 Test";
		
		magazines[]=
		{
			"URF_30Rnd_95x40_AK12recal_mag",
			"URF_30Rnd_95x40_AK12recal_mag_tracer",
			"URF_30Rnd_95x40_AKMrecal_mag",
			"URF_30Rnd_95x40_AKMrecal_mag_tracer",

			"URF_75Rnd_95x40_AK12recal_mag",
			"URF_75Rnd_95x40_AK12recal_mag_tracer",
			"URF_75Rnd_95x40_AKMrecal_mag",
			"URF_75Rnd_95x40_AKMrecal_mag_tracer"
		};
		magazineWell[]=
		{
			
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.30000001};
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					
					"optic_yorris",
					
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",

					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
					
					"OPTRE_M6S_Scope",
					"OPTRE_M7_Sight_v2",
					"OPTRE_M392_Scope_v2",
					"OPTRE_M393_Scope_v2",
					"OPTRE_M393_ACOG_v2",
					"OPTRE_M393_EOTECH_v2",
					"OPTRE_BR55HB_Scope_v2",
					"OPTRE_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
			mass=80;
		};
		class ItemInfo
		{
			priority=1;
		};
		
	};
	class URFMod_rifle_AK12U: arifle_AK12U_F
	{
		author="URF Mod";
		
		baseWeapon="URFMod_rifle_AK12U";
		scope=2;
		scopeArsenal=2;
		displayName="[URF] AK12U Test";
		
		magazines[]=
		{
			"URF_30Rnd_95x40_AK12recal_mag",
			"URF_30Rnd_95x40_AK12recal_mag_tracer",
			"URF_30Rnd_95x40_AKMrecal_mag",
			"URF_30Rnd_95x40_AKMrecal_mag_tracer",

			"URF_75Rnd_95x40_AK12recal_mag",
			"URF_75Rnd_95x40_AK12recal_mag_tracer",
			"URF_75Rnd_95x40_AKMrecal_mag",
			"URF_75Rnd_95x40_AKMrecal_mag_tracer"
		};
		magazineWell[]=
		{
			
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.30000001};
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					
					"optic_yorris",
					
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",

					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
					
					"OPTRE_M6S_Scope",
					"OPTRE_M7_Sight_v2",
					"OPTRE_M392_Scope_v2",
					"OPTRE_M393_Scope_v2",
					"OPTRE_M393_ACOG_v2",
					"OPTRE_M393_EOTECH_v2",
					"OPTRE_BR55HB_Scope_v2",
					"OPTRE_BMR_Scope_v2"
				};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
			mass=80;
		};
		class ItemInfo
		{
			priority=1;
		};
		
	};