class CfgPatches
{
	class 105th_Fortifications
	{
		author="Howard";
		name="105th Fortifications";
		url="";
		units[]=
		{
		// 105th Designated Construction Materials
		"v105_Hard_Tent_Urban",
		"v105_Optre_Watchtower_woodland",
		"v105_Optre_Watchtower_urban",
		"v105_M72_Barrier",
		"v105_M72_BarrierBlk",
		"v105_M72S_Barrier",
		"v105_M72S_BarrierBlk",
		"v105_Slingload_Ammo",
		"v105_Slingload_Fuel",
		"v105_Slingload_Repair",
		"v105_HescoTower",
		"v105_HescoCorridor",
		"v105_HescoCorner",
		"v105_HescoBigBlocks",
		"v105_Hesco3BLocks",
		"v105_Hesco5BLocks",
		"v105_HescoWall6",
		"v105_HescoWall4",
		"v105_CncWall4",
		"v105_CncWall1"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=1.0;
		 requiredAddons[] = 
			{
           		"V_FZ_Core"
        	};
	};
};
class CfgVehicles
{
	// M72 MOBILE BARRICADES
	class Land_OPTRE_M72_Barrier;
	class v105_M72_Barrier:Land_OPTRE_M72_Barrier
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
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
	class Land_OPTRE_M72_BarrierBlk;
	class v105_M72_BarrierBlk:Land_OPTRE_M72_BarrierBlk
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
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
	class Land_OPTRE_M72S_Barrier;
	class v105_M72S_Barrier:Land_OPTRE_M72S_Barrier
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
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
	class Land_OPTRE_M72S_BarrierBlk;
	class v105_M72S_BarrierBlk:Land_OPTRE_M72S_BarrierBlk
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
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
	//LOGISTICS
	class B_Slingload_01_Ammo_F;
	class v105_Slingload_Ammo: B_Slingload_01_Ammo_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Logistics";
	};
	class B_Slingload_01_Fuel_F;
	class v105_Slingload_Fuel: B_Slingload_01_Fuel_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Logistics";
	};
	class B_Slingload_01_Repair_F;
	class v105_Slingload_Repair: B_Slingload_01_Repair_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Logistics";
	};
	//FORTIFICATIONS
	class Land_OPTRE_hard_tent_urban;
	class v105_Hard_Tent_Urban:Land_OPTRE_hard_tent_urban
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_OPTRE_watchtower_woodland;
	class v105_Optre_Watchtower_woodland:Land_OPTRE_watchtower_woodland
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_OPTRE_watchtower_urban;
	class v105_Optre_Watchtower_urban:Land_OPTRE_watchtower_urban
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrierTower_F;
	class v105_HescoTower: Land_HBarrierTower_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrierWall_corridor_F;
	class v105_HescoCorridor: Land_HBarrierWall_corridor_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrierWall_corner_F;
	class v105_HescoCorner:Land_HBarrierWall_corner_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrier_Big_F;
	class v105_HescoBigBlocks:Land_HBarrier_Big_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrier_3_F;
	class v105_Hesco3BLocks:Land_HBarrier_3_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrier_5_F;
	class v105_Hesco5BLocks:Land_HBarrier_5_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrierWall6_F;
	class v105_HescoWall6:Land_HBarrierWall6_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_HBarrierWall4_F;
	class v105_HescoWall4:Land_HBarrierWall4_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};

	class Land_CncWall4_F;
	class v105_CncWall4:Land_CncWall4_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
	class Land_CncWall1_F;
	class v105_CncWall1:Land_CncWall1_F
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "HOW_EdCat_105th";
		editorSubCategory = "HOW_105th_EdSubCat_Fortifications";
	};
};

