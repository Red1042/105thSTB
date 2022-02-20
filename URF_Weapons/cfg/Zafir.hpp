//class LMG_Zafir_F;
class URFMod_MG_Zafir: LMG_Zafir_F
	{
		author="URF Mod";
		
		baseWeapon="URFMod_MG_Zafir";
		scope=2;
		scopeArsenal=2;
		displayName="[URF] Zafir Test";
		
		magazines[]=
		{
			"URF_150Rnd_762x51_Zafrecal_Box",
			"URF_150Rnd_762x51_Box_Zafrecal_Tracer",
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
					
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",

				//	"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					
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
			mass=220;
		};
		class ItemInfo
		{
			priority=1;
		};
		
	};