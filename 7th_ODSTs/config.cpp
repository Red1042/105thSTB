class CfgPatches
{
    class r7odst
    {
        author="Varner";
        name="r7odst";
        url="";
        // Added Items
        units[]={};
        weapons[]={};
        magazines[]={};
        ammo[]={};
        // Requirements
        requiredVersion=0.1;
        requiredAddons[]={"V_FZ_Core"};
    };
};

class CfgWeapons
{
    //Helmets
    //polarized
    class HeadgearItem;
    class VES_CH252_MAR_Light;
	class VES_CH252D;
	class VES_CH252D_dp;
    class VES_S1ONIR;
    class VES_S1ONIR_dp;
    class r7odst_CH252D_HANNIBAL: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Hannibal)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\CHan_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\CHan_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_MONARCH: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Monarch)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\JMon_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\JMon_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
        class r7odst_CH252D_HAMMONDS: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Hammonds)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\THam_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\THam_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
        class r7odst_CH252D_HARROW: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Harrow)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\THar_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\THar_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
        class r7odst_CH252D_PERSHING: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Pershing)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\DPer_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\DPer_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_ROOK: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Spade)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\BRoo_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\BRoo_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BOGNA: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Bogna)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\BBog_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\BBog_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_GUNN: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Gunn)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\TGun_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\TGun_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_RAY: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Ray)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\MRay_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\MRay_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BOSCH: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Bosch)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\DBos_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\DBos_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_LOBSTER: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Lobster)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\BLob_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\BLob_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_MURRAY: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Murray)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\JMur_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\JMur_CH252D_Helmet_CO.paa",
            	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class ONI_WTra_Blue_S1ONIR: VES_S1ONIR
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.60000002;
        displayName="[7STB] S1/ONI/R Helmet (Travi, Blue)";
        model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
            "7th_ODSTs\data\Helmets\V_S1ONIR_WTraBlue_V_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
            ""
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
            hiddenSelections[]=
            {
                "camo",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
                "7th_ODSTs\data\Helmets\V_S1ONIR_WTraBlue_V_CO.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
                ""
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=25;
                    hitpointName="HitFace";
                    passThrough=0.1;
                };
                class Head
                {
                    armor=25;
                    hitPointName="HitHead";
                    passThrough=0.1;
                };
                class Neck
                {
                    armor=20;
                    hitpointName="HitNeck";
                    passThrough=0.1;
                };
            };
        };
        allowedFacewear[]={};
    };
        class ONI_WTra_Orange_S1ONIR: VES_S1ONIR
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.60000002;
        displayName="[7STB] S1/ONI/R Helmet (Travi, Orange)";
        model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
            "7th_ODSTs\data\Helmets\V_S1ONIR_WTraOrange_V_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
            ""
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
            hiddenSelections[]=
            {
                "camo",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
                "7th_ODSTs\data\Helmets\V_S1ONIR_WTraOrange_V_CO.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
                ""
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=25;
                    hitpointName="HitFace";
                    passThrough=0.1;
                };
                class Head
                {
                    armor=25;
                    hitPointName="HitHead";
                    passThrough=0.1;
                };
                class Neck
                {
                    armor=20;
                    hitpointName="HitNeck";
                    passThrough=0.1;
                };
            };
        };
        allowedFacewear[]={};
    };
    class r7odst_CH252D_CHASE: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Chase)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\MCha_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\MCha_CH252D_Helmet_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_RICHTER: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Richter)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\FRic_CH252D_DEF_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\FRic_CH252D_DEF_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_SMITH: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Smith)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\MSmi_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\MSmi_CH252D_Helmet_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_GORE: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Gore)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\JGor_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\JGor_CH252D_Helmet_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_NAZIRE: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Nazire)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\JNaz_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\JNaz_CH252D_Helmet_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BETTEZ: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Bettez)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\JBet_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\JBet_CH252D_Helmet_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_TRENCH: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Trench)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\MTre_CH252D_Helmet_CO.paa", 
        	"7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\MTre_CH252D_Helmet_CO.paa", 
        	    "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_VARNER: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Varner)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\CVar_CH252D_DEF_CO.paa", 
            "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\7STB_CH252D_Helmet_CO.paa",
                "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BLK: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\7STB_CH252D_Helmet_CO.paa", 
            "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                 "7th_ODSTs\data\Helmets\7STB_CH252D_Helmet_CO.paa", 
                "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
   class r7odst_CH252D_MUSIC: VES_CH252D
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Music)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\MMus_CH252D_Helmet_CO.paa", 
            "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\MMus_CH252D_Helmet_CO.paa", 
                "7th_ODSTs\data\Helmets\7_CH252_BLK_V_CO.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    //de-pol
    class r7odst_CH252D_ROOK_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Rook)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\BRoo_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\BRoo_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_MURRAY_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Murray)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\JMur_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\JMur_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_MONARCH_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Monarch)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\JMon_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\JMon_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class ONI_WTra_Blue_S1ONIR_dp: VES_S1ONIR_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.60000002;
        displayName="[7STB] S1/ONI/R Helmet (Travi, Blue)";
        model="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
            ""
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
            hiddenSelections[]=
            {
                "camo",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
                ""
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=25;
                    hitpointName="HitFace";
                    passThrough=0.1;
                };
                class Head
                {
                    armor=25;
                    hitPointName="HitHead";
                    passThrough=0.1;
                };
                class Neck
                {
                    armor=20;
                    hitpointName="HitNeck";
                    passThrough=0.1;
                };
            };
        };
        allowedFacewear[]={};
    };
    class ONI_WTra_Orange_S1ONIR_dp: VES_S1ONIR_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.60000002;
        displayName="[7STB] S1/ONI/R Helmet (Travi, Orange)";
        model="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
            ""
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
            hiddenSelections[]=
            {
                "camo",
                "camo2"
            };
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\WTra_S1ONIR_DEF_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",
                ""
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=25;
                    hitpointName="HitFace";
                    passThrough=0.1;
                };
                class Head
                {
                    armor=25;
                    hitPointName="HitHead";
                    passThrough=0.1;
                };
                class Neck
                {
                    armor=20;
                    hitpointName="HitNeck";
                    passThrough=0.1;
                };
            };
        };
        allowedFacewear[]={};
    };
   class r7odst_CH252D_MUSIC_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Music)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\MMus_CH252D_Helmet_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\MMus_CH252D_Helmet_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_RICHTER_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Richter)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\FRic_CH252D_DEF_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\FRic_CH252D_DEF_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa" 
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_HANNIBAL_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Hannibal)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\CHan_CH252D_Helmet_CO.paa", 
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\CHan_CH252D_Helmet_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_GORE_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Gore)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\JGor_CH252D_Helmet_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\JGor_CH252D_Helmet_CO.paa", 
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_NAZIRE_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Nazire)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\JNaz_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\JNaz_CH252D_Helmet_CO.paa", 
        	    "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BETTEZ_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Bettez)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\JBet_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\JBet_CH252D_Helmet_CO.paa", 
        	    "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_TRENCH_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Trench)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\MTre_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\MTre_CH252D_Helmet_CO.paa", 
        	    "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_HAMMONDS_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Hammonds)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\THam_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\THam_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_HARROW_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Harrow)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\THar_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\THar_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_PERSHING_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Pershing)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\DPer_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\DPer_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };    
    class r7odst_CH252D_BOGNA_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Bogna)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\BBog_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\BBog_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_GUNN_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Gunn)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\TGun_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\TGun_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_RAY_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Ray)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\MRay_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\MRay_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BOSCH_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Bosch)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\DBos_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\DBos_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_LOBSTER_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Lobster)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\BLob_CH252D_Helmet_CO.paa", 
        	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\BLob_CH252D_Helmet_CO.paa",
            	"V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_CHASE_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Chase)";
        hiddenSelectionsTextures[]=
        {
        	"7th_ODSTs\data\Helmets\MCha_CH252D_Helmet_CO.paa", 
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
            	"7th_ODSTs\data\Helmets\MCha_CH252D_Helmet_CO.paa", 
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_SMITH_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Smith)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\MSmi_CH252D_Helmet_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\MSmi_CH252D_Helmet_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa" 
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_VARNER_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet (Varner)";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\CVar_CH252D_DEF_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\CVar_CH252D_DEF_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    class r7odst_CH252D_BLK_dp: VES_CH252D_dp
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] CH252D Helmet";
        hiddenSelectionsTextures[]=
        {
            "7th_ODSTs\data\Helmets\7STB_CH252D_Helmet_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa" 
        };
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp.p3d";
            picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet.paa";
            hiddenSelections[]={"camo","camo2"};
            hiddenSelectionsTextures[]=
            {
                "7th_ODSTs\data\Helmets\7STB_CH252D_Helmet_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa" 
            };
            hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
            class HitpointsProtectionInfo
            {
                class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
                class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
                class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
            };
        };
    };
    

    //vests
    class OPTRE_UNSC_M52D_Armor_Light;
    class OPTRE_UNSC_M52D_Armor_Sniper;
    class OPTRE_UNSC_M52D_Armor_Demolitions;
    class OPTRE_UNSC_M52D_Armor_Rifleman;
    class OPTRE_UNSC_M52D_Armor_Scout;
    class OPTRE_UNSC_M52D_Armor_Marksman;
    class r7odst_M52D_Armor_Light: OPTRE_UNSC_M52D_Armor_Light
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Light)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\7STB_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Hannibal: OPTRE_UNSC_M52D_Armor_Light
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Hannibal)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\CHan_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Chase: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Chase)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\MCha_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Sniper)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\7STB_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Travi_Blue: OPTRE_UNSC_M52D_Armor_Sniper
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Travi)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\WTra_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Demo)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\7STB_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Richter: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Richter)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\FRic_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Alpha Sniper)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1_Light: OPTRE_UNSC_M52D_Armor_Light
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Alpha Light)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Alpha Demolitions)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Alpha Rifleman)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    }; 
    class r7odst_M52D_Armor_Cav1B_Light: OPTRE_UNSC_M52D_Armor_Light
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Bravo Light)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1B_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1B_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Bravo Demolitions)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1B_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1B_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Bravo Rifleman)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1B_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    }; 
    class r7odst_M52D_Armor_Cav1B_Scout: OPTRE_UNSC_M52D_Armor_Scout
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Bravo Scout)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1B_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1B_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Bravo Sniper)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1B_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav2A_Light: OPTRE_UNSC_M52D_Armor_Light
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 2 Light)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav2A_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav2A_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 2 Demolitions)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav2A_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav2A_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 2 Rifleman)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav2A_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    }; 
    class r7odst_M52D_Armor_Cav2A_Scout: OPTRE_UNSC_M52D_Armor_Scout
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 2 Scout)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav2A_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav2A_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 2 Sniper)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav2A_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Monarch: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Monarch)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\JMon_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    }; 
    class r7odst_M52D_Armor_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Rifleman)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\7STB_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };

    class r7odst_M52D_Armor_Smith: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Smith)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\MSmi_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Varner: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Varner)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\CVar_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Cav1_Scout: OPTRE_UNSC_M52D_Armor_Scout
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Cavalier 1 Alpha Scout)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\Cav1_M52D_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
    class r7odst_M52D_Armor_Scout: OPTRE_UNSC_M52D_Armor_Scout
    {
        dlc="r7odst";
        author="Varner, Hannibal";
        displayName="[7STB] M52D (Scout)";
        picture="\optre_unsc_units\army\icons\odst_vest.paa";
        hiddenSelectionsTextures[]=
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co.paa",
            "7th_ODSTs\data\Chest\7STB_M52D_Rifleman_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
            "",
            "V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"
        };
    };
};