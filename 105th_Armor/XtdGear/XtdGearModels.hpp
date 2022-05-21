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
                values[] = {"Rookie","Barkley","Barrier","Bman","Bulck","Canley","Coleman","Collins","Cruz","Dubbo","Helms","Kynx","Luke","Midreus","Mokes","Nostra","Nungester","Oswald","Ramos","Richter","Ronin","Sevarach","Swoner","Vargas","Varner","Virus","Wells","Winters"};
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
                values[] = {"Barkley","Barrier","Bman","Canley","Cruz","Dubbo","Nostra","Nungester","Sevarach","Varner"};
            };
        };

        /*
            Alpha Company Arsenal Extended Section
        */

                class AComp_Vests
                {
                    label = "[Marine] Vests";
                    author = "S4 Logistics";
                    options[] = {"Billet","Variant"};
                    class billet
                    {
                        values[] = {"Breacher","Corpsman","Grenadier","Radio","Rifleman","Security","Sniper","Vest"};
                    };
                    class variant
                    {
                        values[] = {"A","B","C","D"};
                    };
                };
    };
};