class APC_Wheeled_02_base_F
{
	class Turrets
	{
		class MainTurret;
	};
};

class HOW_URF_APC_Otokar:APC_Wheeled_02_base_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Otokar APC II";
		crew="O_URFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Mechanized";
		armor=500;
		class Turrets:Turrets
		{
			gunnerAction="Commander_APC_Wheeled_02_rcws_F_out";
			gunnerInAction="Commander_APC_Wheeled_02_rcws_F_in";
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"cannon_20mm",
					"HOW_URF_launcher_SPG9"
				};
				magazines[]=
				{
					"60Rnd_20mm_AP_shells","60Rnd_20mm_AP_shells","60Rnd_20mm_AP_shells",
					"60Rnd_20mm_HE_shells","60Rnd_20mm_HE_shells",
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
			"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
			"a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
			"a3\data_f\vehicles\turret_opfor_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"A3\armor_f\data\cage_csat_co.paa"
		};
};