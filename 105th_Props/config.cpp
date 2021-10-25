class CfgPatches
{
	class 105th_Props
	{
		author="Howard";
		name="105th Props";
		url="";
		units[]=
		{
			"BCOMP_CTF_Flag_Base",
			"v105_CTF_Flag_Base",
			"v105_pride_CTF_Flag_Base"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=1.0;
		 requiredAddons[] = 
			{
           		"V_FZ_Core","OPTRE_UNSC_Structure_Military","A3_Structures_F_Civ"
        	};
	};
};
class CfgVehicles
{
	// M72 MOBILE BARRICADES
	class Items_base_F;
	class Land_OPTRE_M72_Barrier:Items_base_F
	{
		ace_cargo_size = 2;  // Cargo space the object takes
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 180;  // Model direction while dragging (same as setDir after attachTo)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 180;  // Model direction while dragging (same as setDir after attachTo)
	};
	class Land_OPTRE_M72S_barrier:Items_base_F
	{
		ace_cargo_size = 1;  // Cargo space the object takes
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 180;  // Model direction while dragging (same as setDir after attachTo)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 180;  // Model direction while dragging (same as setDir after attachTo)
	};

	// BCOMP FLAG
	class OPTRE_CTF_Flag_Base;
    class BCOMP_CTF_Flag_Base: OPTRE_CTF_Flag_Base
 	{
		dlc="105th";
		scope=2;
		scopeCurator=2;
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Props";
		displayName="[ODST] CTF Flag";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"105th_Props\Textures\BCo_Flag.paa"};
  	};
	  class v105_CTF_Flag_Base: OPTRE_CTF_Flag_Base
 	{
		dlc="105th";
		scope=2;
		scopeCurator=2;
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Props";
		displayName="[105th] CTF Flag";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"105th_Props\Textures\105th_Flag.paa"};
  	};
	  class v105_pride_CTF_Flag_Base: OPTRE_CTF_Flag_Base
 	{
		dlc="105th";
		scope=2;
		scopeCurator=2;
		editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_Props";
		displayName="[105th] Pride Flag";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"105th_Props\Textures\Pride_Flag.paa"};
  	};
};
class Land_MapBoard_F;
class v105_WhiteBoard_intel:Land_MapBoard_F
{
	scope=1;
	scopeCurator=1;
	displayName="105th Whiteboard";
	hiddenSelectionsTextures[]=
		{
			"105th_Props\Textures\InkedMapBoard_Default_CO_LI.paa"
		};
};

