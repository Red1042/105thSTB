
/*  Initial Commit:

	ALL THINGS IN THIS SECTION ARE DIRECT OVERRIDES OF OTHER CONFIGS AND SHOULD BE ANNOTATED APPROPRIATELY 
*/

	/* 
	Hard Overriding config values for backpack maximum loads that are contained in OPTRE_Weapons_Backpacks
	*/
	class OPTRE_ANPRC_515: OPTRE_ILCS_Rucksack_Black
	{
        maximumLoad=350;
	};
	class OPTRE_ANPRC_515_Spartan: OPTRE_ILCS_Rucksack_Black_Spartan
	{
		maximumLoad=350;
	};
	/* Green ANPRC_521 is handled in Overrides/LongRangeOverrides.hpp */
	class OPTRE_ANPRC_521_Green_Spartan: OPTRE_UNSC_Rucksack_Spartan
	{
		maximumLoad=400;
	};
	/*
	End of hard config overrides
	*/