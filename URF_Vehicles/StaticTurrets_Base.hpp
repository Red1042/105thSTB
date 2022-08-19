class O_GMG_01_A_F;
class O_HMG_01_A_F;

class URF_SG_Turret_A:O_GMG_01_A_F
{
	dlc="105th";
	author="N-4 Logistics";
	side=0;
	scope=2;
	scopeCurator=2;
	displayName="M359A-SG";
	crew="O_UAV_AI";
	editorCategory="v105_EdCat_URF";
	editorSubcategory="v105_URF_EdSubCat_Turrets";
	faction = "v105_URF_EnhancedVehicles";
	class Turrets:Turrets
	{
			class MainTurret: MainTurret
			{
				weapons[]={"URF_M359SG"};
				magazines[]=
				{
					"URF_30Rnd_8Gauge_Tungsten_Buckshot",
					"URF_30Rnd_8Gauge_Tungsten_Buckshot",
					"URF_30Rnd_8Gauge_Tungsten_Buckshot"
				};
			};
	};
};
class URF_HMG_Turret_A:O_HMG_01_A_F
{
	dlc="105th";
	author="N-4 Logistics";
	side=0;
	scope=2;
	scopeCurator=2;
	displayName="M359A-MG";
	crew="O_UAV_AI";
	editorCategory="v105_EdCat_URF";
	editorSubcategory="v105_URF_EdSubCat_Turrets";
	faction = "v105_URF_EnhancedVehicles";
	class Turrets:Turrets
	{
			class MainTurret: MainTurret
			{
				weapons[]={"OPTRE_M247H"};
				magazines[]=
				{
					"OPTRE_200Rnd_127x99_M247H",
					"OPTRE_200Rnd_127x99_M247H",
				};
			};
	};
};