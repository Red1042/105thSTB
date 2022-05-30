
// Initial Commit
	class v105_VX19_Helmet : OPTRE_FC_VX19_Helmet
	{
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="[VC-497] VX19 Flight Helmet";
		
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\VX19_Air_CO.paa",
			"105th_Armor\VC497\data\Helmets\VX19_Visor_Air_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"105th_Armor\VC497\data\Helmets\VX19_VC497_CO.paa",
				"105th_Armor\VC497\data\Helmets\VX19_Visor_Air_CO.paa"
			};
		};
	};


	/*
	    Start of custom VC-497 Helmets
	    Start of Custom VX19's
	*/

	class v105_VX19_Helmet_GStu : v105_VX19_Helmet
	{
		dlc="OPTRE";
		scope=2;
		author="S-4 Logistics";
		displayName="[VC-497] VX19 (Stürmischer)";
		
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\GStu_VX19_Air_CO.paa", 
			"105th_Armor\VC497\data\Helmets\VX19_Visor_Air_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"105th_Armor\VC497\data\Helmets\GStu_VX19_Air_CO.paa", 
				"105th_Armor\VC497\data\Helmets\VX19_Visor_Air_CO.paa"
			};
		};
        class XtdGearInfo
        {
            model="VC497_Custom_Helmets";
            owner="Stürmischer";
        };
	};

	class v105_VX19_Helmet_JShe : v105_VX19_Helmet
	{
		dlc="OPTRE";
		scope=2;
		author="S-4 Logistics";
		displayName="[VC-497] VX19 (Shepard)";

		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\JShe_VX19_Air_CO.paa",
			"105th_Armor\VC497\data\Helmets\VX19_Visor_Air_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_FC_Units\Marines\h3_pilothelmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"105th_Armor\VC497\data\Helmets\GStu_VX19_Air_CO.paa",
				"105th_Armor\VC497\data\Helmets\VX19_Visor_Air_CO.paa"
			};
		};
        class XtdGearInfo
        {
            model="VC497_Custom_Helmets";
            owner="Shepard";
        };
	};

	/*
	    Start of custom ECH's
	*/

	class VC497_Helmet_ENun: VES_CH252_MAR_Vacuum
	{
		scope=1;
		scopeArsenal=1;
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Nungester)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\ENun_CH252_URB_Blk.paa", 
			"105th_Armor\data\GWel_CH252_BLU_V_CO.paa"
		};
        class XtdGearInfo
        {
            model="VC497_Custom_Helmets";
            owner="Nungester";
        };
	};

	class VC497_Helmet_JCol: VES_CH252_MAR_Vacuum
	{
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Collins)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\JCol_CH252_URB_Blk.paa", 
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
        class XtdGearInfo
        {
            model="VC497_Custom_Helmets";
            owner="Collins";
        };
	};

	class VC497_Helmet_JHoward: VES_CH252_MAR_Vacuum
	{
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Howard)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\JHow_CH252_URB_Blk.paa",
			"V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO.paa"
		};
        class XtdGearInfo
        {
            model="VC497_Custom_Helmets";
            owner="Howard";
        };
	};
