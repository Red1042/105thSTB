			class OPTRE_MA5B;
			class OPTRE_MA5C: OPTRE_MA5B
			{
				dlc							= "SO";
				author						= "Fireteam Zulu";
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
				dlc							= "SO";
				author						= "Fireteam Zulu";
				scope						= 2;
				scopeArsenal				= 2;
				displayName					= "MA5CX + M301 GL Assault Rifle";
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
			
			class OPTRE_MA5K: OPTRE_MA5C
			{
				dlc							= "SO";
				author						= "Fireteam Zulu";
				scope						= 2;
				scopeArsenal				= 2;
				
				displayName					= "MA5KX ICWS Assault Rifle";
				
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
			};