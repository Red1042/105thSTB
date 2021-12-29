

class O_APC_Tracked_02_AA_F;

class HOW_URF_AA_Tigris: O_APC_Tracked_02_AA_F
{
	
		dlc="105th";
		author="Howard, Keen";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="ZSU-35 Tigris II";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Mechanized";
		faction = "v105_URF_EnhancedVehicles";
		
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"HOW_URF_Vulcan_20mm",
					
				};
				magazines[]=
				{
					"HOW_URF_ABM_20MM_2000Rnd",
					
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
					"URF_Vehicles\Textures\BMP2T\APC_Tracked_01_AA_Tower_URF_CO.paa",
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