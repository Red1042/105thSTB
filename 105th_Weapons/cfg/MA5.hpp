			class OPTRE_MA5B;
			class OPTRE_MA5C: OPTRE_MA5B
			{
				//dlc							= "SO";
				//author						= "Fireteam Zulu";
				scope						= 2;
				scopeArsenal				= 2;
				
				displayName					= "MA5CX ICWS Assault Rifle";
				
				magazines[] = 
				{
					"HOW_32Rnd_762x51_IRDM_Mag",
					// ^ New Mags Above ^
					"OPTRE_32Rnd_762x51_Mag",
					"OPTRE_32Rnd_762x51_Mag_Tracer",
					"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
					"OPTRE_32Rnd_762x51_Mag_AP",
					"OPTRE_32Rnd_762x51_Mag_APT",
					"OPTRE_32Rnd_762x51_Mag_JHP",
					"OPTRE_32Rnd_762x51_Mag_JHPT",
					"OPTRE_32Rnd_762x51_Mag_SS",
					"OPTRE_32Rnd_762x51_Mag_SST"
				};
				
				HUD_TotalPosibleBullet 		= 32;
				class Single: Single
				{
					reloadTime 				= 0.095;
				};
				class FullAuto: FullAuto
				{
					reloadTime 				= 0.095;
				};
			};
			class OPTRE_MA5BGL;
			class OPTRE_MA5CGL: OPTRE_MA5BGL
			{
				//dlc							= "SO";
				//author						= "Fireteam Zulu";
				scope						= 2;
				scopeArsenal				= 2;
				displayName					= "MA5CX + M301 GL Assault Rifle";
				muzzles[] = {"this","v105_M301X"};
				class v105_M301X:v105_M301X{};
				magazines[] = 
				{
					"HOW_32Rnd_762x51_IRDM_Mag",
					// ^ New Mags Above ^
					"OPTRE_32Rnd_762x51_Mag",
					"OPTRE_32Rnd_762x51_Mag_Tracer",
					"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
					"OPTRE_32Rnd_762x51_Mag_AP",
					"OPTRE_32Rnd_762x51_Mag_APT",
					"OPTRE_32Rnd_762x51_Mag_JHP",
					"OPTRE_32Rnd_762x51_Mag_JHPT",
					"OPTRE_32Rnd_762x51_Mag_SS",
					"OPTRE_32Rnd_762x51_Mag_SST"
				};
				
				
				
				HUD_TotalPosibleBullet 		= 32;
				class Single: Single
				{
					reloadTime 				= 0.095;
				};
				class FullAuto: FullAuto
				{
					reloadTime 				= 0.095;
				};
				
			};
			
			class v105_MA5K: OPTRE_MA5K
			{
				dlc							= "105th";
				author						= "Howard, Fireteam Zulu";
				scope						= 2;
				scopeArsenal				= 2;
				baseWeapon 					= "v105_MA5K";
				displayName					= "[105th] MA5KX ICWS";
				
				magazines[] = 
				{
					"HOW_32Rnd_762x51_IRDM_Mag",
					// ^ New Mags Above ^
					"OPTRE_32Rnd_762x51_Mag",
					"OPTRE_32Rnd_762x51_Mag_Tracer",
					"OPTRE_32Rnd_762x51_Mag_AP",
					"OPTRE_32Rnd_762x51_Mag_APT",
					"OPTRE_32Rnd_762x51_Mag_JHP",
					"OPTRE_32Rnd_762x51_Mag_JHPT",
					"OPTRE_32Rnd_762x51_Mag_SS",
					"OPTRE_32Rnd_762x51_Mag_UW"
				};
				
				class Single: Single
				{
					reloadTime 				= 0.05;
				};
				class FullAuto: FullAuto
				{
					reloadTime 				= 0.05;
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
							"optic_aco_grn",
							"optic_aco",
							"optic_holosight_blk_f",
							"optic_mrco",	
							"optic_yorris",	
							"optic_aco_smg",
							"optic_aco_grn_smg",
							"optic_holosight_smg_blk_f",
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
					mass=50;
				};
			};
			class v105_NEST_MACA: OPTRE_MA5B
			{
				dlc							= "105th";
				author						= "Nest";
				scope						= 2;
				scopeArsenal				= 2;
				model = "\OPTRE_Weapons\AR\MA5A.p3d";
				displayName = "[105th] MA5C/FT ICWS (Flat-Top)";
				magazines[]=
				{
					"OPTRE_32Rnd_762x51_Mag", "HOW_32Rnd_762x51_IRDM_Mag",
					"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
					"OPTRE_32Rnd_762x51_Mag_AP","OPTRE_32Rnd_762x51_Mag_APT",
					"OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHPT",
					"OPTRE_32Rnd_762x51_Mag_SS","OPTRE_32Rnd_762x51_Mag_SST"
				};
				baseWeapon="v105_NEST_MACA";
					class WeaponSlotsInfo: WeaponSlotsInfo
					{
						mass=55;
						class CowsSlot: CowsSlot
							{
								compatibleitems[]=
								{
									"optic_tws",
									"optic_tws_mg",
									"optic_NVS",
									"optic_DMS",
									"optic_LRPS",
									"optic_ams",
									"optic_SOS",
									"optic_MRCO",
									"optic_Arco",
									"optic_aco",
									"optic_ACO_grn",
									"optic_aco_smg",
									"optic_ACO_grn_smg",
									"optic_hamr",
									"optic_Holosight",
									"optic_Holosight_smg",
									"optic_Hamr_khk_F",
									"optic_SOS_khk_F",
									"optic_Arco_ghex_F",
									"optic_Arco_blk_F",
									"optic_DMS_ghex_F",
									"optic_ERCO_blk_F",
									"optic_LRPS_ghex_F",
									"optic_LRPS_tna_F",
									"optic_Holosight_blk_F",
									"optic_Holosight_khk_F",
									"optic_Holosight_smg_blk_F",
									"optic_Holosight_smg_khk_F",
									"OPTRE_M7_Sight",
									"OPTRE_M392_Scope",
									"OPTRE_M393_Scope",
									"OPTRE_M393_ACOG",
									"OPTRE_M393_EOTECH",
									"OPTRE_BR55HB_Scope",
									"OPTRE_BMR_Scope",
									"optic_ico_01_black_f",
									"optic_MRD",

								};					
							};
						};
							modes[]=
							{
								"Single",
								"Burst",
								"FullAuto"
							};
					class FullAuto: FullAuto 
					{
						reloadTime =	0.1
							sounds[]=
							{
								"StandardSound",
								"SilencedSound"
							};
							showToPlayer=1;
					};
			
				class Burst: Mode_Burst
				{	
					burst=2;				
					reloadTime=0.0375;
					sounds[]=
					{
						"StandardSound",
						"SilencedSound"
					};
					class BaseSoundModeType
					{
						weaponSoundEffect="DefaultRifle";
						closure1[]={};
						closure2[]={};
						soundClosure[]=
						{
							"closure1",
							0.5,
							"closure2",
							0.5
						};
					};
					class StandardSound: BaseSoundModeType
					{
						begin1[]=
						{
							"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
							1,
							1,
							2000
						};
						begin2[]=
						{
							"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
							1,
							1,
							2000
						};
						soundBegin[]=
						{
							"begin1",
							0.34,
							"begin2",
							0.33000001
						};
						class SoundTails
						{
							class TailTrees
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
									1,
									1,
									1400
								};
								frequency=1;
								volume="(1-interior/1.4)*trees";
							};
							class TailForest
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
									1,
									1,
									1400
								};
								frequency=1;
								volume="(1-interior/1.4)*forest";
							};
							class TailInterior
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
									1.5848932,
									1,
									1400
								};
								frequency=1;
								volume="interior";
							};
							class TailMeadows
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
									1,
									1,
									1400
								};
								frequency=1;
								volume="(1-interior/1.4)*(meadows/2 max sea/2)";
							};
							class TailHouses
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
									1,
									1,
									1400
								};
								frequency=1;
								volume="(1-interior/1.4)*houses";
							};
						};
					};
					class SilencedSound: BaseSoundModeType
					{
						begin1[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
							1,
							1,
							400
						};
						begin2[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
							1,
							1,
							400
						};
						begin3[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
							1,
							1,
							400
						};
						soundBegin[]=
						{
							"begin1",
							0.33000001,
							"begin2",
							0.33000001,
							"begin3",
							0.34
						};
						class SoundTails
						{
							class TailTrees
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
									1,
									1,
									400
								};
								frequency=1;
								volume="(1-interior/1.4)*trees";
							};
							class TailForest
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
									1,
									1,
									400
								};
								frequency=1;
								volume="(1-interior/1.4)*forest";
							};
							class TailInterior
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
									1,
									1,
									400
								};
								frequency=1;
								volume="interior";
							};
							class TailMeadows
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
									1,
									1,
									400
								};
								frequency=1;
								volume="(1-interior/1.4)*(meadows/2 max sea/2)";
							};
							class TailHouses
							{
								sound[]=
								{
									"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
									1,
									1,
									400
								};
								frequency=1;
								volume="(1-interior/1.4)*houses";
							};
						};
					};
					dispersion=0.00008999991;
					recoil="recoil_single_trg";
					recoilProne="recoil_single_prone_trg";
					minRange=2;
					minRangeProbab=0.0099999998;
					midRange=200;
					midRangeProbab=0.0099999998;
					maxRange=400;
					maxRangeProbab=0.0099999998;
					soundBurst=0;				
				};

			};
			class v105_NEST_MACAGL: v105_NEST_MACA
			{
				dlc							= "105th";
				author						= "Nest";
				scope						= 2;
				scopeArsenal				= 2;
				model="\OPTRE_Weapons\AR\MA5AGL.p3d";
				displayName = "[105th] MA5C/FT-GL ICWS (Flat-Top)";
				baseWeapon="v105_NEST_MACAGL";
				muzzles[] = {"this","v105_M301X"};
				class v105_M301X:v105_M301X{};
				magazines[]=
				{
					"OPTRE_32Rnd_762x51_Mag", "HOW_32Rnd_762x51_IRDM_Mag",
					"OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
					"OPTRE_32Rnd_762x51_Mag_AP","OPTRE_32Rnd_762x51_Mag_APT",
					"OPTRE_32Rnd_762x51_Mag_JHP","OPTRE_32Rnd_762x51_Mag_JHPT",
					"OPTRE_32Rnd_762x51_Mag_SS","OPTRE_32Rnd_762x51_Mag_SST"
				};
				class WeaponSlotsInfo: WeaponSlotsInfo
				{
					mass=55;
					class CowsSlot: CowsSlot
					{
							compatibleitems[]=
							{
								"optic_tws",
								"optic_tws_mg",
								"optic_NVS",
								"optic_DMS",
								"optic_LRPS",
								"optic_ams",
								"optic_SOS",
								"optic_MRCO",
								"optic_Arco",
								"optic_aco",
								"optic_ACO_grn",
								"optic_aco_smg",
								"optic_ACO_grn_smg",
								"optic_hamr",
								"optic_Holosight",
								"optic_Holosight_smg",
								"optic_Hamr_khk_F",
								"optic_SOS_khk_F",
								"optic_Arco_ghex_F",
								"optic_Arco_blk_F",
								"optic_DMS_ghex_F",
								"optic_ERCO_blk_F",
								"optic_LRPS_ghex_F",
								"optic_LRPS_tna_F",
								"optic_Holosight_blk_F",
								"optic_Holosight_khk_F",
								"optic_Holosight_smg_blk_F",
								"optic_Holosight_smg_khk_F",
								"OPTRE_M7_Sight",
								"OPTRE_M392_Scope",
								"OPTRE_M393_Scope",
								"OPTRE_M393_ACOG",
								"OPTRE_M393_EOTECH",
								"OPTRE_BR55HB_Scope",
								"OPTRE_BMR_Scope",
								"optic_ico_01_black_f",
								"optic_MRD",
							};
					};					
					modes[]=
					{
						"Single",
						"Burst",
						"FullAuto"
					};
					class FullAuto: FullAuto 
						{
						reloadTime =	0.1
						sounds[]=
						{
							"StandardSound",
							"SilencedSound"
						};
						showToPlayer=1;
						};
				
					class Burst: Mode_Burst
					{	
						burst=2;				
						reloadTime=0.0375;
						sounds[]=
						{
							"StandardSound",
							"SilencedSound"
						};
						class BaseSoundModeType
						{
							weaponSoundEffect="DefaultRifle";
							closure1[]={};
							closure2[]={};
							soundClosure[]=
							{
								"closure1",
								0.5,
								"closure2",
								0.5
							};
						};
						class StandardSound: BaseSoundModeType
						{
							begin1[]=
							{
								"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
								1,
								1,
								2000
							};
							begin2[]=
							{
								"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
								1,
								1,
								2000
							};
							soundBegin[]=
							{
								"begin1",
								0.34,
								"begin2",
								0.33000001
							};
							class SoundTails
							{
								class TailTrees
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
										1,
										1,
										1400
									};
									frequency=1;
									volume="(1-interior/1.4)*trees";
								};
								class TailForest
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
										1,
										1,
										1400
									};
									frequency=1;
									volume="(1-interior/1.4)*forest";
								};
								class TailInterior
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
										1.5848932,
										1,
										1400
									};
									frequency=1;
									volume="interior";
								};
								class TailMeadows
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
										1,
										1,
										1400
									};
									frequency=1;
									volume="(1-interior/1.4)*(meadows/2 max sea/2)";
								};
								class TailHouses
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
										1,
										1,
										1400
									};
									frequency=1;
									volume="(1-interior/1.4)*houses";
								};
							};
						};
						class SilencedSound: BaseSoundModeType
						{
							begin1[]=
							{
								"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
								1,
								1,
								400
							};
							begin2[]=
							{
								"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
								1,
								1,
								400
							};
							begin3[]=
							{
								"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
								1,
								1,
								400
							};
							soundBegin[]=
							{
								"begin1",
								0.33000001,
								"begin2",
								0.33000001,
								"begin3",
								0.34
							};
							class SoundTails
							{
								class TailTrees
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
										1,
										1,
										400
									};
									frequency=1;
									volume="(1-interior/1.4)*trees";
								};
								class TailForest
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
										1,
										1,
										400
									};
									frequency=1;
									volume="(1-interior/1.4)*forest";
								};
								class TailInterior
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
										1,
										1,
										400
									};
									frequency=1;
									volume="interior";
								};
								class TailMeadows
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
										1,
										1,
										400
									};
									frequency=1;
									volume="(1-interior/1.4)*(meadows/2 max sea/2)";
								};
								class TailHouses
								{
									sound[]=
									{
										"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
										1,
										1,
										400
									};
									frequency=1;
									volume="(1-interior/1.4)*houses";
								};
							};
						};
						dispersion=0.00008999991;
						recoil="recoil_single_trg";
						recoilProne="recoil_single_prone_trg";
						minRange=2;
						minRangeProbab=0.0099999998;
						midRange=200;
						midRangeProbab=0.0099999998;
						maxRange=400;
						maxRangeProbab=0.0099999998;
						soundBurst=0;				
					};
				};
			};