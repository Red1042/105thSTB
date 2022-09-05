

class B_MBT_01_arty_F;

class v105_MBT_Cleric: B_MBT_01_arty_F
{
    dlc="105th";
    author="N-4 Logistics";
    side=1;
    scope=2;
    scopeCurator=2;
    displayName="M279 Cleric";
    crew="VES_Rifleman_MA5B_MAR";
    editorCategory="v105_EdCat_105th";
    editorSubcategory="v105_105th_EdSubCat_Mechanized";

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
                        "OPTRE_M41_LAAG",
                        "GMG_40mm",
                        "SmokeLauncher"
                    };
                    magazines[]=
                    {
                        "OPTRE_1000Rnd_127x99_M41",
                        "96Rnd_40mm_G_belt",

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
                "2Rnd_155mm_Mo_LG",
                "6Rnd_155mm_Mo_smoke",
                "6Rnd_155mm_Mo_smoke",
                "6Rnd_155mm_Mo_smoke",
                "6Rnd_155mm_Mo_smoke",
                "6Rnd_155mm_Mo_AT_mine",
                "2Rnd_155mm_Mo_Cluster"
            };
        };
    };
};