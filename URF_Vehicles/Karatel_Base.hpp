class O_MRAP_02_F;
class MRAP_02_hmg_base_F;
class O_MRAP_02_hmg_F;
class MRAP_02_gmg_base_F;
class O_MRAP_02_gmg_F;
class v105_URF_Karatel: O_MRAP_02_F
{
		dlc="105th";
		author="Howard";
		faction="O_URFArmy";
		scope=2;
		scopeCurator=2;
		displayName="Karatel II";
		crew="v105_URFArmy_Crewman_01"
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Motorized";
		
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
					"O_URFArmy"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
		hiddenSelectionsTextures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
};		
class v105_URF_Karatel_HMG: O_MRAP_02_hmg_F
{
		dlc="105th";
		author="Howard";
		faction="O_URFArmy";
		scope=2;
		scopeCurator=2;
		displayName="Karatel II (HMG)";
		crew="v105_URFArmy_Crewman_01"
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Motorized";
		
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
					"O_URFArmy"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
		hiddenSelectionsTextures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
};

class v105_URF_Karatel_GMG: O_MRAP_02_gmg_F
{
	dlc="105th";
		author="Howard";
		faction="O_URFArmy";
		scope=2;
		scopeCurator=2;
		displayName="Karatel II (GMG)";
		crew="v105_URFArmy_Crewman_01"
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Motorized";
		
		
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
					"O_URFArmy"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
		hiddenSelectionsTextures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
};

class v105_URF_Karatel_AT: O_MRAP_02_gmg_F
{
		dlc="105th";
		author="Howard";
		faction="O_URFArmy";
		scope=2;
		scopeCurator=2;
		displayName="Karatel II (AT)";
		crew="v105_URFArmy_Crewman_01"
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Motorized";
		
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"v105_URF_launcher_SPG9"
				};
				magazines[]=
				{
					"v105_15Rnd_50x137_HEAT"
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
					"O_URFArmy"
				};
			};
		};
		textureList[]=
		{
			"URF",
			1
		};
		hiddenSelectionsTextures[]=
				{
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_01_CO_URF.paa",
					"URF_Vehicles\Textures\Karatel\MRAP_02_ext_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa"
				};
};