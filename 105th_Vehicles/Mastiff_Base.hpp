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
    crewCrashProtection = 0.1;
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
					"v105_96Rnd_40mm_G_belt_WSMK",
					"96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
					"v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt",
                    "v105_200Rnd_145x114_Red_Belt"
				};
                class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
        };
    };
    hiddenSelectionsTextures[]=
    {
        "A3\Armor_F_Beta\APC_Tracked_01\Data\APC_Tracked_01_body_CO.paa",
            "A3\Armor_F_Beta\APC_Tracked_01\Data\mbt_01_body_co.paa",
            "105th_Vehicles\Textures\Stag\v105_Stag_Turret.paa",
            "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
};