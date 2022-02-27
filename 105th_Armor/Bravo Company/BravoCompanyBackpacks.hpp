
// Initial Commit

	/*
		Start of general items (Not player custom)
	*/
	
	class BravoCompany_Radio: OPTRE_ANPRC_521_black
	{
		displayName="[ODST]M25D Long Range Helmet Uplink";
		model="\A3\weapons_f\empty";
		hiddenSelections[]={};
	};
	
	/*
		Barkley's custom backpacks (ONLY ONE CAN BE ACTIVE AT A TIME)
	*/
	/*
	class OPTRE_ONI_Researcher_Suitcase;
    class v105_HardcaseSatchel_Barkley: OPTRE_ONI_Researcher_Suitcase
    {
		scope=2;
		scopeArsenal=2;
        author="N-4 Logistics";
        displayName="[ODST] Barkley's Satchel";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]=
        {
            "105th_Armor\Bravo Company\data\Backpacks\BBar_HardcaseSatchel.paa"
        };
        maximumLoad=400;
    }; 
	*/

	class v105_BBarkley_ANPRC521_black_blue: MatGrp_ANPRC_521_black_blue
	{
		author="N-4 Logistics";
        displayName= "[ODST] AN-PRC521 (Barkley)"
		maximumLoad=400;

		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Medic"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\soft_backpack_co.paa",
			"105th_Armor\Bravo Company\data\Backpacks\BBar_ANPRC521.paa"
		};
	};

    class v105_GCru_ANPRC515: OPTRE_ANPRC_515
    {
    	author="N-4 Logistics";
        displayName= "[ODST] AN-PRC515 (Cruz)"
    	maximumLoad=400;

		hiddenSelections[]=
		{
			"camo1"
		};
    	hiddenSelectionsTextures[]=
    	{
    		"105th_Armor\Bravo Company\data\Backpacks\GCru_ANPRC515.paa"
    	};
    };
	