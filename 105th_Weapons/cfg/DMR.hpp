class OPTRE_M392_DMR: OPTRE_M392_DMR
		{
				dlc = "105th Weapons";
				author = "Howard";
				scope = 2;
				scopeArsenal = 2;
				displayName = "M392X DMR";
				magazines[]=
				{
					"HOW_15Rnd_762x51_338_API_Mag",
					"HOW_15Rnd_762x51_338_Magnum_Mag",
					"HOW_15Rnd_762x51_338_APIT_Mag",
					"HOW_15Rnd_762x51_338_MT_Mag",
					"HOW_15Rnd_762x51_338_Mixed_Mag",
					//   ^ New Mags above ^
					"OPTRE_15Rnd_762x51_Mag",
					"OPTRE_15Rnd_762x51_Mag_Tracer",
					"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
					"OPTRE_15Rnd_762x51_Mag_AP",
					"OPTRE_15Rnd_762x51_Mag_APT",
					"OPTRE_15Rnd_762x51_Mag_JHP",
					"OPTRE_15Rnd_762x51_Mag_JHPT",
					"OPTRE_15Rnd_762x51_Mag_SS",
					"OPTRE_15Rnd_762x51_Mag_SST",
					"OPTRE_15Rnd_762x51_Mag_FS",
					"OPTRE_15Rnd_762x51_Mag_FST"
				};
			};
			magazineWell[] = {};
				
			modes[] = 
			{
				"Single",
				"FullAuto"
			};
			class FullAuto: Single
			{
				aiDispersionCoefX 		= 2;
				aiDispersionCoefY 		= 3;
				burst 					= 1;
				autoFire 				= 1;
				dispersion			 	= 0.000029;
				displayName 			= "Full";
				maxRange 				= 80;
				maxRangeProbab 			= 0.04;
				midRange 				= 30;
				midRangeProbab 			= 0.58;
				minRange 				= 1;
				minRangeProbab 			= 0.2;
				recoil 					= "recoil_auto_primary_3outof10";
				recoilProne 			= "recoil_auto_primary_prone_3outof10";
				reloadTime 				= 0.08;
				sound[] 				= {"",10,1};
				soundBurst 				= 0;
				soundContinuous 		= 0;
				soundEnd[] 				= {"sound",1};
				textureType 			= "fullAuto";
			};