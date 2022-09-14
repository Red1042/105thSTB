class XtdGearModels
{
    class CamoBase;
    class CfgWeapons
    {
        /*
            Bravo Company Arsenal Extended Section
        */
        class BComp_Uniforms
        {
            label = "[ODST] Uniforms";
            author = "S4 Logistics";
            options[] = {"Camo"};
            class camo: CamoBase
            {
                values[] = {"Tempest","Tiger"};
            };
        };

        class BComp_Custom_Helmets
        {
            label = "[ODST] Custom Helmets";
            author = "S4 Logistics";
            options[] = {"Owner"};
            class owner
            {
                values[] = {"Rookie","Barkley","Barrier","Bman","Brady","Bulck","Canley","Coleman","Collins","Cruz","Dubbo","Helms","Kynx","Luke","Mailwind","McDaniel","Midreus","Mokes","Nostra","Nungester","Oswald","Pedro","Ramos","Richter","Ronin","Sevarach","Smith (B)","Smith (M)","Swoner","Vargas","Varner","Virus","Wells","Winters"};
            };
        };

        class BComp_Vests
        {
            label = "[ODST] Vests";
            author = "S4 Logistics";
            options[] = {"Billet","Lead"};
            class billet
            {
                values[] = {"Rifleman","Scout","Light","Heavy","Marksman","Sniper","JTAC","EOD","SARC","SOO"};
            };
            class lead
            {
                values[] = {"Yes","No"};
            };
        };

        class BComp_Custom_Vests
        {
            label = "[ODST] Custom Vests";
            author = "S4 Logistics";
            options[] = {"Owner"};
            class owner
            {
                values[] = {"Barkley","Barrier","Bman","Canley","Cruz","Dubbo","Luke","McDaniel","Nostra","Nungester","Sevarach","Smith","Varner"};
            };
        };

        /*
            Alpha Company Arsenal Extended Section
        */

        class AComp_Uniforms
        {
            label = "[Marine] Uniforms";
            author = "S4 Logistics";
            options[] = {"Camo","Sleeves","Slim"};
            class camo
            {
                values[] = {"DWDL","M81","MARPAT"};
                class DWDL
                {
                    image = "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa";
                };
                class MARPAT
                {
                    image = "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa";
                };
            };
            class sleeves
            {
                values[] = {"Full","Rolled","Short"};
            };
            class slim
            {
                values[] = {"Yes","No"};
            };
        }

        class AComp_Vests
        {
            label = "[Marine] Vests";
            author = "S4 Logistics";
            options[] = {"Camo","Billet","Variant"};
            class camo
            {
                values[] = {"CEA","Desert","Marine","Snow","Urban","Woodland"};
            };
            class billet
            {
                values[] = {"Breacher","Corpsman","Grenadier","Light","Radio","Rifleman","Security","Sniper"};
            };
            class variant
            {
                values[] = {"A","B","C","D"};
            };
        };

        class AComp_Custom_Vests
        {
            label = "[Marine] Custom Vests";
            author = "S4 Logistics";
            options[] = {"Owner"};
            class owner
            {
                values[] = {"Brady","Midreus","Murk","Nest","Skynyrd","Stürmischer"};
            };
        };

         /*
            VC-497 Arsenal Extended Section
         */

        class VC497_Custom_Helmets
        {
            label = "[VC-497] Custom Helmets";
            author = "S4 Logistics";
            options[] = {"Owner"};
            class owner
            {
                values[] = {"Collins","Howard","Nungester","Shepard","Stürmischer"};
            };
        };

        class VC497_Custom_Vests
        {
            label = "[VC-497] Custom Vests";
            author = "S4 Logistics";
            options[] = {"Owner"};
            class owner
            {
                values[] = {"Stürmischer"};
            };
        };
    };

    class CfgVehicles
    {
        /*
            105th Generic Arsenal Extended Section (Vehicles)
        */

        class v105_Long_Ranges
        {
            label = "[105th] Long Ranges";
            author = "S4 Logistics";
            options[] = {"Range","Base","Stripe"};
            class range
            {
                values[] = {"25k","40k"};
            };
            class base
            {
                values[] = {"Black","Green","Snow","Tan"};
            };
            class stripe
            {
                values[] = {"None","Black","Blue","Green","Red","White","Yellow"};
            };
        };

        /*
            Bravo Company Arsenal Extended Section
        */

        class BComp_Custom_Backpacks
        {
            label = "[ODST] Custom Backpacks";
            author = "S4 Logistics";
            options[] = {"Owner"};
            class owner
            {
                values[] = {"Barkley","Cruz"};
            };
        }
    };
};