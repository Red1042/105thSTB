

class O_APC_Wheeled_02_rcws_F;

class v105_URF_APC_Otokar:O_APC_Wheeled_02_rcws_F
{
		dlc="105th";
		author="Howard";
		side=0;
		scope=2;
		scopeCurator=2;
		displayName="Otokar APC II";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="v105_EdCat_URF";
        editorSubcategory="v105_URF_EdSubCat_Mechanized";
		faction = "v105_URF_EnhancedVehicles";
		
		armor=200;
		class Turrets:Turrets
		{
			gunnerAction="Commander_APC_Wheeled_02_rcws_F_out";
			gunnerInAction="Commander_APC_Wheeled_02_rcws_F_in";
			class MainTurret:MainTurret
			{
				weapons[]=
				{
					"cannon_20mm",
					"v105_URF_launcher_SPG9"
				};
				magazines[]=
				{
					"60Rnd_20mm_AP_shells","60Rnd_20mm_AP_shells","60Rnd_20mm_AP_shells",
					"60Rnd_20mm_HE_shells","60Rnd_20mm_HE_shells",
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
					"URF_Vehicles\Textures\Otokar\APC_Wheeled_02_ext_01_URF_CO",
					"URF_Vehicles\Textures\Otokar\APC_Wheeled_02_ext_02_URF_CO",
					"URF_Vehicles\Textures\Otokar\UGV_Turret_URF"
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