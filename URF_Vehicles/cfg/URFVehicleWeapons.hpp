	
	class MGun;
	
	//AA
	class weapon_Cannon_Phalanx;
	class HOW_URF_Vulcan_20mm:weapon_Cannon_Phalanx
	{
				scope=2;
				displayName = "20mm Rotary Cannon";
				displayNameShort = "20mm Brrrrt";
				magazines[]=
					{
						"HOW_URF_ABM_20MM_2000Rnd"
					};
				minRange=0;
				minRangeProbab=0.005;
				midRange=1500;
				midRangeProbab=1;
				maxRange=3000;
				maxRangeProbab=1;
				
	};
	// APCs
	class OPTRE_75mm_M75;
	class HOW_URF_75mm_Chaingun:OPTRE_75mm_M75
	{
				scope=2;
				displayName = "75mm Chain Gun";
				displayNameShort = "75mm";
				magazines[]=
					{
						"HOW_40Rnd_75mm_AP"
					};
			/*	aiDispersionCoefX=0.0000002;
				aiDispersionCoefY=0.0000002;
				aiRateOfFire=0.1;
				aiRateOfFireDistance=2000;
				minRange=0;
				minRangeProbab=0.005;
				midRange=1000;
				midRangeProbab=1;
				maxRange=3500;
				maxRangeProbab=1;*/
				class FullAuto: MGun
				{
					sounds[]=
					{
						"StandardSound"
					};
					class StandardSound
					{
						begin1[]=
						{
							"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
							3.1622777,
							1,
							1500
						};
						soundBegin[]=
						{
							"begin1",
							1
						};
					};
					reloadTime=0.75;
					dispersion=0;
					minRange=2;
					minRangeProbab=0.30000001;
					midRange=300;
					midRangeProbab=0.69999999;
					maxRange=800;
					maxRangeProbab=0.050000001;
				};
				class close: FullAuto
				{
					sounds[]=
					{
						"StandardSound"
					};
					class StandardSound
					{
						begin1[]=
						{
							"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
							3.1622777,
							1,
							1500
						};
						soundBegin[]=
						{
							"begin1",
							1
						};
					};
					burst=3;
					aiRateOfFire=0.5;
					aiRateOfFireDistance=50;
					minRange=10;
					minRangeProbab=0.050000001;
					midRange=20;
					midRangeProbab=0.69999999;
					maxRange=50;
					maxRangeProbab=0.039999999;
					showToPlayer=0;
				};
				class short: close
				{
					sounds[]=
					{
						"StandardSound"
					};
					class StandardSound
					{
						begin1[]=
						{
							"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
							3.1622777,
							1,
							1500
						};
						soundBegin[]=
						{
							"begin1",
							1
						};
					};
					burst=2;
					aiRateOfFire=2;
					aiRateOfFireDistance=300;
					minRange=50;
					minRangeProbab=0.050000001;
					midRange=150;
					midRangeProbab=0.69999999;
					maxRange=300;
					maxRangeProbab=0.039999999;
				};
				class medium: close
				{
					sounds[]=
					{
						"StandardSound"
					};
					class StandardSound
					{
						begin1[]=
						{
							"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
							3.1622777,
							1,
							1500
						};
						soundBegin[]=
						{
							"begin1",
							1
						};
					};
					burst=1;
					aiRateOfFire=4;
					aiRateOfFireDistance=1200;
					minRange=200;
					minRangeProbab=0.050000001;
					midRange=750;
					midRangeProbab=0.69999999;
					maxRange=1500;
					maxRangeProbab=0.1;
				};
	};
	class launcher_SPG9;
	class HOW_URF_launcher_SPG9:launcher_SPG9
	{
				displayName = "50x137mm Recoiless Rifle";
				displayNameShort = "50x137mm";
				magazines[]=
					{
						"HOW_15Rnd_50x137_HEAT"
					};
	};
	class GMG_40mm;
	class URF_GMG_40mm:GMG_40mm
	{
		magazines[]=
		{
			"URF_96Rnd_40mm_G_Belt_Whistler",
			"96Rnd_40mm_G_belt"
		};
	};
	class OPTRE_M90A;
	class URF_M359SG:OPTRE_M90A
	{
		scope=1;
		scopeArsenal=1;
		displayName = "8 Gauge Automatic Shotgun";
		displayNameShort = "GLHF";
		magazines[]=
		{
				"URF_30Rnd_8Gauge_Tungsten_Buckshot"
		};
	};
	
	class mortar_155mm_AMOS;
	class v105_URF_mortar_155mm_AMOS:mortar_155mm_AMOS
	{

		magazines[]=
		{
			"32Rnd_155mm_Mo_shells",
			"32Rnd_155mm_Mo_shells_O",
			"6Rnd_155mm_Mo_smoke",
			"6Rnd_155mm_Mo_smoke_O",
			"2Rnd_155mm_Mo_guided",
			"4Rnd_155mm_Mo_guided",
			"4Rnd_155mm_Mo_guided_O",
			"2Rnd_155mm_Mo_LG",
			"4Rnd_155mm_Mo_LG",
			"4Rnd_155mm_Mo_LG_O",
			"6Rnd_155mm_Mo_mine",
			"6Rnd_155mm_Mo_mine_O",
			"2Rnd_155mm_Mo_Cluster",
			"2Rnd_155mm_Mo_Cluster_O",
			"6Rnd_155mm_Mo_AT_mine",
			"6Rnd_155mm_Mo_AT_mine_O",
			//Howard's super cool blinder flares that'll make people upsettispaghetti
			"v105_URF_6Rnd_155mm_Mo_Flare"

		};
	};