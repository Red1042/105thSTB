// Fossa based on Prowler - serves light reconnaisance and troop transport roles without sacrificing speed or lethality.
// First iterations will be customary reskins, inventory overhaul, and mobility tweaks
// Later iterations will consist of weapon changes if necessary and possibly scripting to add additional "weapons" as static turrets

class B_LSV_01_unarmed_F;
class B_LSV_01_AT_F;
class LSV_01_armed_base_F
{
	class Turrets
	{
		class TopTurret;
		class CodRiverTurret;
		class CargoTurret_02;
		class CargoTurret_03;
		class AnimationSources;
	};
};

class HOW_Fossa_unarmed : B_LSV_01_unarmed_F
{
		dlc="105th";
		author="Howard";
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="M77 Fossa (Unarmed)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";	
		crew = "VES_Rifleman_MA5B_MAR";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		class TransportItems
		{
			#include "cfg\VehicleGearFossa.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TextureSources
			{
				class Black
				{
					displayName="$STR_A3_TEXTURESOURCES_BLACK0";
					author="$STR_A3_Bohemia_Interactive";
					textures[]=
					{
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
						"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
						"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
					};
					factions[]=
					{
						"BLU_T_F",
						"BLU_F"
					};
				};
			};
		textureList[]=
		{
			"Black",1
		};
		
};

class HOW_Fossa_armed : LSV_01_armed_base_F
{
		dlc="105th";
		author="Howard";
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="M77 Fossa (Armed)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";	
		crew = "VES_Rifleman_MA5B_MAR";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		class TransportItems
		{
			#include "cfg\VehicleGearFossa.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
			class Turrets:Turrets
				{
					class TopTurret:TopTurret
					{
						body="mainTurret";
						gun="mainGun";
						animationSourceBody="mainTurret";
						animationSourceGun="mainGun";
						weapons[]=
						{
							"HMG_M2_Mounted"
						};
						magazines[]=
						{
							"100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red",
							"100Rnd_127x99_mag_Tracer_Red"
						};
					};
					class CodRiverTurret:CodRiverTurret{};
					class CargoTurret_02:CargoTurret_02{};
					class CargoTurret_03:CargoTurret_03{};
				};
			class AnimationSources
			{
					class mainMuzzle_rot
				{
					source="ammorandom";
					weapon="HMG_M2_Mounted";
				};
				class mainMuzzle_reload
				{
					source="reload";
					weapon="HMG_M2_Mounted";
				};
				class mainMuzzle_revolving
				{
					source="revolving";
					weapon="HMG_M2_Mounted";
				};
				class mainMuzzle_reloadMagazine
				{
					source="reloadMagazine";
					weapon="HMG_M2_Mounted";
				};
			};
			class TextureSources
			{
				class Black
				{
					displayName="$STR_A3_TEXTURESOURCES_BLACK0";
					author="$STR_A3_Bohemia_Interactive";
					textures[]=
					{
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
						"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
						"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
					};
					factions[]=
					{
						"BLU_T_F",
						"BLU_F"
					};
				};
			};
		textureList[]=
		{
			"Black",1
		};
};

class HOW_Fossa_armed_AT : B_LSV_01_AT_F
{
		dlc="105th";
		author="Howard";
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="M77 Fossa (AT)";
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Motorized";	
		crew = "VES_Rifleman_MA5B_MAR";
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 10000;
		class TransportItems
		{
			#include "cfg\VehicleGearFossa.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TextureSources
			{
				class Black
				{
					displayName="$STR_A3_TEXTURESOURCES_BLACK0";
					author="$STR_A3_Bohemia_Interactive";
					textures[]=
					{
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
						"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
						"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
						"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
					};
					factions[]=
					{
						"BLU_T_F",
						"BLU_F"
					};
				};
			};
		textureList[]=
		{
			"Black",1
		};
};