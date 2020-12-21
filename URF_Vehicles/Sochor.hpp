

class O_MBT_02_arty_F;

class HOW_URF_MBT_Sochor: O_MBT_02_arty_F
{
	
		dlc="105th";
		author="Howard, Keen";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="SPG-534 Sochor II ";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Mechanized";
		
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"HMG_127_APC",
							"GMG_40mm",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"96Rnd_40mm_G_belt",
							"200Rnd_127x99_mag_Tracer_Green",
							"200Rnd_127x99_mag_Tracer_Green",
							"SmokeLauncherMag"
						};
					};
				};
				weapons[]=
				{
					"mortar_155mm_AMOS"
				};
				magazines[]=
				{
					"32Rnd_155mm_Mo_shells_O",
					"32Rnd_155mm_Mo_shells_O",
					"32Rnd_155mm_Mo_shells_O",
					"6Rnd_155mm_Mo_smoke_O",
					"6Rnd_155mm_Mo_smoke_O",
					"6Rnd_155mm_Mo_smoke_O",
					"6Rnd_155mm_Mo_smoke_O"
					
				};
			};
		};
		
	/*	class TextureSources
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
		};*/
};