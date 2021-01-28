			
			
			
			class v105_HOW_M73SAW:OPTRE_M73
			{
				dlc="105th";
				author="Howard";
				scope=2;
				scopeArsenal=2;
				displayName					= "[105th] M73 SAW";
				baseWeapon 					= "v105_HOW_M73SAW";
				descriptionShort="UNSC Squad Automatic Weapon";
				recoil="recoil_lim";
				magazines[]=
				{
					"v105_HOW_150Rnd_762x51_Box",
					"v105_HOW_150Rnd_762x51_Box_Tracer",
					"v105_HOW_300Rnd_762x51_Box",
					"v105_HOW_300Rnd_762x51_Box_Tracer"

				};
				modes[]=
				{
					"FullAutoSlow",
					"FullAutoFast",
				};
				class FullAutoSlow: FullAuto
					{
						reloadTime=0.1;
						dispersion=0.000055000001;
						
						/*sounds[]=
						{
							"StandardSound",
							"SilencedSound"
						};*/
						showToPlayer=1;
					};
					class FullAutoFast: FullAutoSlow
					{
						reloadTime=0.06;
						dispersion=0.000055000001;	
						textureType="fastAuto";
						
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
								
								"optic_aco_grn",
								"optic_aco",
								"optic_arco_blk_f",
								"optic_holosight_blk_f",
								"optic_mrco",
								"optic_SOS",
								"optic_hamr",
							
								
								"optic_erco_blk_f",
								
									
								"optic_yorris",
									
								"ace_optic_mrco_2d",
								"ace_optic_hamr_2d",
								"ace_optic_hamr_pip",
								
								"optic_aco_smg",
								"optic_aco_grn_smg",
								"optic_holosight_smg_blk_f",
								

								"optre_m73_smartlink_v2",
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
						mass=200;
					};
					class ItemInfo
					{
						priority=1;
					};
			};

			class v105_HOW_M73GPMG:OPTRE_M73
			{
				dlc="105th";
				author="Howard";
				scope=2;
				scopeArsenal=2;
				displayName					= "[105th] M73 GPMG";
				baseWeapon 					= "v105_HOW_M73GPMG";
				descriptionShort="UNSC Squad Automatic Weapon";
				recoil="recoil_lim";
				modes[]=
				{
					"FullAutoSlow",
					"FullAutoFast",
				};
				class FullAutoSlow: FullAuto
					{
						reloadTime=0.15;
						dispersion=0.000055000001;
						
						/*sounds[]=
						{
							"StandardSound",
							"SilencedSound"
						};*/
						showToPlayer=1;
					};
					class FullAutoFast: FullAutoSlow
					{
						reloadTime=0.075;
						dispersion=0.000055000001;	
						textureType="fastAuto";
						
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
								
								"optic_aco_grn",
								"optic_aco",
								"optic_arco_blk_f",
								"optic_holosight_blk_f",
								"optic_mrco",
								"optic_SOS",
								"optic_hamr",
							
								
								"optic_erco_blk_f",
								
									
								"optic_yorris",
									
								"ace_optic_mrco_2d",
								"ace_optic_hamr_2d",
								"ace_optic_hamr_pip",
								
								"optic_aco_smg",
								"optic_aco_grn_smg",
								"optic_holosight_smg_blk_f",
								

								"optre_m73_smartlink_v2",
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
						mass=200;
					};
					class ItemInfo
					{
						priority=1;
					};
			};

			class v105_HOW_M247SSW: OPTRE_M247
			{
				dlc="105th";
				author="Howard";
				scope=2;
				scopeArsenal=2;
				baseWeapon="v105_HOW_M247SSW";
				displayName="[105th] M247 SSW";
				descriptionShort="UNSC Squad Support Weapon";
				magazines[]=
				{
					"HOW_200Rnd_93x64_Box",
					"HOW_150Rnd_93x64_Box",
					"HOW_75Rnd_93x64_Box",
					"HOW_200Rnd_93x64_Mixed_Box",
					"HOW_150Rnd_93x64_Mixed_Box",
					"HOW_75Rnd_93x64_Mixed_Box",		
				};
				recoil="recoil_mk200";
				
				HUD_BulletInARows=4;
				HUD_TotalPosibleBullet=200;
				class StandardSound;
				
				class FullAuto: FullAuto
				{
					reloadTime=0.08;
					dispersion=0.00075000001;
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
							
							"optic_aco_grn",
							"optic_aco",
							"optic_arco_blk_f",
							"optic_holosight_blk_f",
							"optic_mrco",
							"optic_SOS",
							"optic_hamr",
						
							
							"optic_erco_blk_f",
							
								
							"optic_yorris",
								
							"ace_optic_mrco_2d",
							"ace_optic_hamr_2d",
							"ace_optic_hamr_pip",
							
							"optic_aco_smg",
							"optic_aco_grn_smg",
							"optic_holosight_smg_blk_f",
							

							"OPTRE_M6S_Scope",
							"OPTRE_M7_Sight",
							"OPTRE_M392_Scope",
							"OPTRE_M393_Scope",
							"OPTRE_M393_ACOG",
							"OPTRE_M393_EOTECH",
							"OPTRE_BR55HB_Scope",
							"OPTRE_BMR_Scope"
						};
					};
					class PointerSlot: PointerSlot
					{
						iconPosition[]={0.2,0.40000001};
					};
					mass=200;
				};
				class ItemInfo
				{
					priority=1;
				};
			};