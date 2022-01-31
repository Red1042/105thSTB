
// Initial Commit
	class v105_VX19_Helmet:OPTRE_FC_VX19_Helmet
	{
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="[VC-497] VX19 Flight Helmet";
		
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\VX19_VC497_CO.paa",
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
	class v105_VX19_Helmet_GStu:v105_VX19_Helmet
	{
		dlc="OPTRE";
		scope=2;
		author="Article 2 Studios";
		displayName="[VC-497] VX19 Flight Helmet";
		
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
	};


	class VC497_Helmet_CO: VES_CH252_MAR_Vacuum
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
	};
	class VC497_Helmet_CO_dp: VES_CH252_MAR_Vacuum_dp
	{
		scope=1;
		scopeArsenal=1;
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Nungester)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\ENun_CH252_URB_Blk.paa", 
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
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
	};
	class VC497_Helmet_JCol_dp: VES_CH252_MAR_Vacuum_dp
	{
		author="N-4 Logistics";
		displayName="[VC-497] ECH252 Helmet (Collins)";
		hiddenSelectionsTextures[]=
		{
			"105th_Armor\VC497\data\Helmets\JCol_CH252_URB_Blk.paa", 
			"optre_unsc_units\army\data\helmet_visor_ca.paa"
		};
	};