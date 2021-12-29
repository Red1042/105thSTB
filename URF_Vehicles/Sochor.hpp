

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
		faction = "v105_URF_EnhancedVehicles";
		
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
		
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"URF_Vehicles\Textures\Sochor\MBT_02_body_CO_URF.paa",
					"URF_Vehicles\Textures\Sochor\MBT_01_scorcher_turret_URF_CO.paa",
					"URF_Vehicles\Textures\Sochor\MBT_02_CO_URF.paa",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
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
		hiddenSelectionsTextures[]=
		{
			"URF_Vehicles\Textures\Sochor\MBT_02_body_CO_URF.paa",
			"URF_Vehicles\Textures\Sochor\MBT_01_scorcher_turret_URF_CO.paa",
			"URF_Vehicles\Textures\Sochor\MBT_02_CO_URF.paa",
			"URF_Vehicles\Textures\Otokar\UGV_Turret_URF.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
		};
};