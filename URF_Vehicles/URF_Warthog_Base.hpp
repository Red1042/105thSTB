class OPTRE_M12_Base;


class OPTRE_M12_FAV;
class OPTRE_M12_LRV;
class OPTRE_M12G1_LRV: OPTRE_M12_Base
{
	class Turrets:Turrets
	{
		class CargoGunner_1;
		class MainTurret;
	};
};
class OPTRE_M12A1_LRV: OPTRE_M12_Base
{
	class Turrets:Turrets
	{
		class CargoGunner_1;
		class MainTurret;
	};
};
class OPTRE_M813_TT;
class OPTRE_M12_APC_MED;
class OPTRE_M12_APC;

class v105_URF_M12_Hydra: OPTRE_M12A1_LRV
{
		scope=2;
		scopeCurator=2;
		side=0;
		displayName="M12 Warthog (Hydras)";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Motorized";
		
		slowSpeedForwardCoef = 0.090;

		class TransportMagazines{};
		class TransportWeapons{};
		
		
		class Turrets: Turrets
		{
			class CargoGunner_1 : CargoGunner_1{};
			class MainTurret : MainTurret
			{
				weapons[]=
				{
					"FIR_RKT_Launcher"
				};
				magazines[]=
				{
					"FIR_Hydra_P_38rnd_M",
					"FIR_Hydra_P_38rnd_M"
				};
			};
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_innie_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"
		};
};
class v105_URF_M12_SPG:OPTRE_M12G1_LRV
{
		scope=2;
		scopeCurator=2;
		side=0;
		displayName="M12 Warthog (SPG)";
		crew="O_OURFArmy_Crewman_01";
		editorCategory="HOW_EdCat_URF";
        editorSubcategory="HOW_URF_EdSubCat_Motorized";
		

		slowSpeedForwardCoef = 0.090;

		class TransportMagazines{};
		class TransportWeapons{};
		
		
		class Turrets: Turrets
		{
			class CargoGunner_1 : CargoGunner_1{};
			class MainTurret : MainTurret
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
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_innie_co.paa",
			"\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa"
		};
};
