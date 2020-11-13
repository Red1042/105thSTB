			
			
			
			class v105_HOW_M73SAW:OPTRE_M73
			{
				displayName					= "[105th] M73 Squad Automatic Weapon";
				baseWeapon 					= "v105_HOW_M73SAW";
				descriptionShort="UNSC Squad Automatic Weapon";
				recoil="recoil_mk200";
				magazines[]=
				{
					"v105_HOW_150Rnd_762x51_Box",
					"v105_HOW_150Rnd_762x51_Box_Tracer",
					"v105_HOW_300Rnd_762x51_Box",
					"v105_HOW_300Rnd_762x51_Box_Tracer"

				};
				
				class FullAuto: FullAuto
					{
						reloadTime=0.065;
						dispersion=0.00055000001;
					};
			};

			class v105_HOW_M247SSW: OPTRE_M247
			{
				dlc="OPTRE";
				author="Howard";
				scope=2;
				scopeArsenal=2;
				baseWeapon="v105_HOW_M247SSW";
				displayName="[105th] M247 Squad Support Weapon";
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
					reloadTime=0.0785;
					dispersion=0.00075000001;
				};
			};