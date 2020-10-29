class O_APC_Tracked_02_cannon_F
{
	class Turrets
	{
		class MainTurret;
	};
};

class HOW_URF_APC_Stalker_A:O_APC_Tracked_02_cannon_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="BMP-VI Stalker IIA";
		crew="O_URFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Mechanized";
		armor=800;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"HOW_URF_75mm_Chaingun",
					"LMG_Minigun",
					"missiles_titan"
				};
				magazines[]=
				{
					"HOW_40Rnd_75mm_AP","HOW_40Rnd_75mm_AP",
					"2000Rnd_65x39_Belt_Tracer_Green",
					"2000Rnd_65x39_Belt_Tracer_Green",
					"5Rnd_GAT_missiles"
					
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
			"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"A3\armor_f\data\cage_csat_co.paa"
		};
};

class HOW_URF_APC_Stalker_B:O_APC_Tracked_02_cannon_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="BMP-VI Stalker IIB";
		crew="O_URFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Mechanized";
		armor=800;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"HOW_URF_75mm_Chaingun",
					"HMG_127_APC",
					"missiles_titan"
					
				};
				magazines[]=
				{
					"HOW_40Rnd_75mm_AP","HOW_40Rnd_75mm_AP",
					"500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Red",
					"500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Red",
					"5Rnd_GAT_missiles"
					
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
			"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
			"A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"A3\armor_f\data\cage_csat_co.paa"
		};
};