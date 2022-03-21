
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

    /*
        IGNORE PURELY TESTING

    class v105_JumpPack: OPTRE_J: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[105th] Jumppack";
        maximumLoad=100;
    }

    */