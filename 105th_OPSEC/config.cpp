// This is the 105th Retexture mod config. 
// Special thanks to Vespade for A2 Declassified and to Article 2 Studios for OPTRE, which form the basis of this retexture.
class CfgPatches
{
    class r105ONI
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"OPTRE_Core", "V_FZ_Armor", "OPTRE_UNSC_Units"};
    };
};
class CfgWeapons
{
	//hats
	//ONI
    class HeadgearItem;
    class HelmetBase;
	//Vests
    //ONI
	class OPTRE_UNSC_M52D_Armor_Light;
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class ONI_M52D_Light: OPTRE_UNSC_M52D_Armor_Light
	{
		dlc="R105";
		author="Hartley, Hannibal";
		displayName="[ONI] M52D (Light)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_co.paa"
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
	class ONI_M52D_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="R105";
		author="Hartley, Hannibal";
		displayName="[ONI] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_co.paa"
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
	class ONI_M52D_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="R105";
		author="Hartley, Hannibal";
		displayName="[ONI] M52D (Demo)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_co.paa"
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
	class ONI_M52D_Operator: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="R105";
		author="Hartley, Hannibal";
		displayName="[ONI] M52D (Operator)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_co.paa"
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
    class ONI_M52D_DES: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="R105";
		author="Varner, Hannibal";
		displayName="[ONI] M52D (Desert)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_DES_co.paa"
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
    class ONI_M52D_SNW: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="R105";
		author="Varner, Hannibal";
		displayName="[ONI] M52D (Snow)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_SNW_co.paa"
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
    class ONI_M52D_WDL: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="R105";
		author="Varner, Hannibal";
		displayName="[ONI] M52D (Woodland)";
		picture="\optre_unsc_units\army\icons\odst_vest.paa";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO.paa",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"105th_OPSEC\Data\Armors\Delta9Armor_WDL_co.paa"
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
	//Helmets
    //ONI
    class VES_S1ONIR;
    class VES_S1ONIR_dp;
    class ONI_CHan_S1ONIR: VES_S1ONIR
    {
        dlc="105R";
        author="Hannibal, Hartley";
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.60000002;
        displayName="[ONI] S1/ONI/R Helmet (Hannibal)";
        model="\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "105th_OPSEC\Data\Helmets\ONI_CHan_S1ONIR_CO.paa",
            "105th_OPSEC\Data\Helmets\ONI_S1ONIR_MIAMI_V_CO.paa"
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
                "105th_OPSEC\Data\Helmets\ONI_CHan_S1ONIR_CO.paa",
                "105th_OPSEC\Data\Helmets\ONI_S1ONIR_MIAMI_V_CO.paa"
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
    class ONI_WCol_S1ONIR: ONI_CHan_S1ONIR
    {
        displayName="[ONI] S1/ONI/R Helmet (Coleman)";
        hiddenSelectionsTextures[]=
        {
            "105th_OPSEC\Data\Helmets\ONI_WCol_S1ONIR_CO.paa",
            "105th_OPSEC\Data\Helmets\ONI_S1ONIR_MIAMI_V_CO.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "105th_OPSEC\Data\Helmets\ONI_WCol_S1ONIR_CO.paa",
                "105th_OPSEC\Data\Helmets\ONI_S1ONIR_MIAMI_V_CO.paa"
            };
        };
    };
    class ONI_CHan_S1ONIR_dp: VES_S1ONIR_dp
    {
        dlc="105R";
        author="Hannibal, Hartley";
        ace_hearing_protection=1;
        ace_hearing_lowerVolume=0.1;
        displayName="[ONI] S1/ONI/R Helmet (Hannibal)";
        model="\OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
        picture="\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
        hiddenSelections[]=
        {
            "camo",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "105th_OPSEC\Data\Helmets\ONI_CHan_S1ONIR_CO.paa",
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
                "105th_OPSEC\Data\Helmets\ONI_CHan_S1ONIR_CO.paa",
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
    class ONI_WCol_S1ONIR_dp: ONI_CHan_S1ONIR_dp
    {
        displayName="[ONI] S1/ONI/R Helmet (Coleman)";
        hiddenSelectionsTextures[]=
        {
            "105th_OPSEC\Data\Helmets\ONI_WCol_S1ONIR_CO.paa",
            "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[]=
            {
                "105th_OPSEC\Data\Helmets\ONI_WCol_S1ONIR_CO.paa",
                "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA.paa"
            };
        };
    };
};