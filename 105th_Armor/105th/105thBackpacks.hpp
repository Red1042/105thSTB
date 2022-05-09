
// Initial Commit

	// Custom gunbag
	class v105_ACE_gunbag:ACE_gunbag
	{
		displayName="[105th] Gun Bag";
		maximumLoad=300;
		mass=20;
		ace_gunbag=1;
		hiddenSelectionsTextures[] = {"105th_Armor\105th\data\Backpacks\LongRifleBag.paa"};
	};
	
	// Hardcase Bag
	class v105_HardcaseSatchel_Medical: OPTRE_ONI_Researcher_Suitcase
    {
		scope=2;
		scopeArsenal=2;
        author="N-4 Logistics";
        displayName="[105th] Medic Satchel";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]=
        {
            "105th_Armor\105th\data\Backpacks\HardcaseSatchel_Medical.paa"
        };
        maximumLoad=400;
    };

    // Broken variants of LongRanges for the "destroy sensitive equipment" script
    class v105_ANPRC_521_Broken: OPTRE_ANPRC_521_Black
    {
		author="N-4 Logistics";
		displayName="AN/PRC-521 (BROKEN)";
		tf_hasLRradio=0;
    };

    class v105_ANPRC_515_Broken: OPTRE_ANPRC_515
    {
		author="N-4 Logistics";
		displayName="AN/PRC-515 (BROKEN)";
		tf_hasLRradio=0;
    };