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
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
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
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
		};
		textureList[]=
		{
			"Hex",
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
					"GMG_40mm"
				};
				magazines[]=
				{
					"200Rnd_40mm_G_belt","200Rnd_40mm_G_belt"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\turret_opfor_co.paa"
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
		textureList[]=
		{
			"Hex",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
			"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
			"\A3\Data_F\Vehicles\turret_opfor_co.paa"
		};
};