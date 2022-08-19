class O_APC_Tracked_02_cannon_F;

class v105_URF_APC_Stalker_A:O_APC_Tracked_02_cannon_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="BMP-VI Stalker IIA";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Mechanized";
		faction = "v105_URF_EnhancedVehicles";
		armor=500;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"OPTRE_M230_URF",
					"LMG_Minigun",
					"missiles_titan"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"2000Rnd_65x39_Belt_Tracer_Green",
					"2000Rnd_65x39_Belt_Tracer_Green",
					"5Rnd_GAT_missiles"
					
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
					"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_1.paa",
					"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_2.paa",
					"URF_Vehicles\Textures\BMP2T\URF_Turret_30_RCWS.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
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
		hiddenSelectionsTextures[]=
		{
			"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_1.paa",
			"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_2.paa",
			"URF_Vehicles\Textures\BMP2T\URF_Turret_30_RCWS.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"A3\armor_f\data\cage_csat_co.paa"
		};
};

class v105_URF_APC_Stalker_B:O_APC_Tracked_02_cannon_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="BMP-VI Stalker IIB";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Mechanized";
		armor=500;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"OPTRE_M230_URF",
					"HMG_127_APC",
					"missiles_titan"
					
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_APFSDS",
					"OPTRE_100Rnd_50mm_HE",
					"500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Red",
					"500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Red",
					"5Rnd_GAT_missiles"
					
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
					"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_1.paa",
					"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_2.paa",
					"URF_Vehicles\Textures\BMP2T\URF_Turret_30_RCWS.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
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
		hiddenSelectionsTextures[]=
		{
			"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_1.paa",
			"URF_Vehicles\Textures\BMP2T\URF_APC_Body_EXT_2.paa",
			"URF_Vehicles\Textures\BMP2T\URF_Turret_30_RCWS.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"A3\armor_f\data\cage_csat_co.paa"
		};
		
};