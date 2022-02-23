class B_APC_Tracked_01_base_F;
class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
{
    class Turrets:Turrets
    {
        class MainTurret;
    };
};
class v105_M18_Mastiff:B_APC_Tracked_01_rcws_F
{
    dlc = "105th";
    author = "Howard";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName = "M18 Mastiff";
    editorCategory = "HOW_EdCat_105th";
    editorSubCategory = "HOW_105th_EdSubCat_Mechanized";
    crew = "VES_Rifleman_MA5B_MAR";
    crewCrashProtection = 0.005;
    tf_hasLRradio = 1;
    tf_isolatedAmount = 0.65;
    tf_range = 10000;
    TFAR_hasIntercom = 1;
    transportSoldier=12;
    class TransportItems
		{
			#include "cfg\VehicleGearMedium.hpp"
		};
    class Turrets:Turrets
    {
        class MainTurret: MainTurret
        {
            weapons[]=
				{
					"v105_HMG_127_APC",
					"v105_GMG_40mm"
				};
				magazines[]=
				{
					"v105_96Rnd_40mm_G_belt_WSMK",
					"96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
					"v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt"
				};
        };
    };
    
    class TextureSources
    {
        class Sand
        {
            displayName="$STR_A3_TextureSources_Sand0";
            author="$STR_A3_Bohemia_Interactive";
            textures[]=
            {
                "A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
                "A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa",
                "105th_Vehicles\Textures\Stag\v105_Stag_Turret.paa",
                "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
            };
            factions[]=
            {
                "BLU_F"
            };
        };
    };
};