class O_MRAP_02_F;
class O_MRAP_02_hmg_F;
class O_MRAP_02_gmg_F;
class HOW_URF_Karatel:O_MRAP_02_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Karatel II";
		crew="O_OURFArmy_Rifleman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Motorized";
		class TextureSources
		{
			class URF
			{
				displayName="United Rebel Front";
				author="Keen";
				textures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
};		
class HOW_URF_Karatel_HMG:O_MRAP_02_hmg_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Karatel II (HMG)";
		crew="O_OURFArmy_Rifleman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Motorized";
		
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"HMG_NSVT"
				};
				magazines[]=
				{
					"450Rnd_127x108_Ball","450Rnd_127x108_Ball"
				};
			};
		};
		class TextureSources
		{
			class URF
			{
				displayName="United Rebel Front";
				author="Keen";
				textures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
};

class HOW_URF_Karatel_GMG:O_MRAP_02_gmg_F
{
	dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Karatel II (GMG)";
		crew="O_OURFArmy_Rifleman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Motorized";
		
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"URF_GMG_40mm"
				};
				magazines[]=
				{
					"URF_96Rnd_40mm_G_Belt_Whistler",
					"URF_96Rnd_40mm_G_Belt_Whistler"
				};
			};
		};
		class TextureSources
		{
			class URF
			{
				displayName="United Rebel Front";
				author="Keen";
				textures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
};

class HOW_URF_Karatel_AT:O_MRAP_02_gmg_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Karatel II (AT)";
		crew="O_OURFArmy_Rifleman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Motorized";
		
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"HOW_URF_launcher_SPG9"
				};
				magazines[]=
				{
					"HOW_15Rnd_50x137_HEAT"
				};
			};
		};
		class TextureSources
		{
			class URF
			{
				displayName="United Rebel Front";
				author="Keen";
				textures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
};