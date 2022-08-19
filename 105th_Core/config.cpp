class CfgPatches
{
	class 105th_Core
	{
		author="105th | S-4 Logistics";
		name="105th Core Assets and Units";
		url="";
		units[]={};
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
class CfgFactionClasses {
    // Vehicles Category
    class v105_URF_EnhancedVehicles {
        displayName = "[105th] URF - Enhanced Vehicles";
        side = 0;
        flag = "\OPTRE_Core\Data\flag_Ins_ca.paa";
        icon = "\OPTRE_Core\Data\flag_Ins_ca.paa";
        priority = 0;
    };
    // Functions Category
	class NO_CATEGORY;
	class v105_functions: NO_CATEGORY
	{
		displayName = "105th STB";
	};
};
class CfgEditorCategories
{
	class v105_EdCat_105th
	{
		displayName="[105th] Shocktrooper Battalion";
	};
	class v105_EdCat_URF
	{
		displayName="[105th] URF - Enhanced Vehicles"
	};
}; 
class CfgEditorSubcategories
{
	// BLUFOR
	class v105_105th_EdSubCat_Motorized
	{
		displayName = "Motorized";
	};
	class v105_105th_EdSubCat_Drones
	{
		displayName = "Drones";
	};
	class v105_105th_EdSubCat_Mechanized
	{
		displayName = "Mechanized";
	};
	class v105_105th_EdSubCat_Armor
	{
		displayName = "Armor";
	};
	class v105_105th_EdSubCat_Pelican
	{
		displayName="Pelicans";
	};
	class v105_105th_EdSubCat_Falcon
	{
		displayName="Falcons";
	};
	class v105_105th_EdSubCat_SparrowHawks
    {
    	displayName="SparrowHawks";
    };
	class v105_105th_EdSubCat_Hornets
    {
    	displayName="Hornets";
    };
	class v105_105th_EdSubCat_FixedWing
	{
		displayName="Fixed-wing Aircraft";
	};
	class v105_105th_EdSubCat_Supply
	{
		displayName = "Supply Logistics";
	};
	class v105_105th_EdSubCat_Props
	{
		displayName = "Misc. Props";
	};
	class v105_105th_EdSubCat_Waterborne
	{
		displayName = "Waterborne Vehicles";
	};
	class v105_105th_EdSubCat_Archived
	{
		displayName = "Archived";
	};

	//OPFOR
	class v105_URF_EdSubCat_Aircraft
	{
		displayName = "Aircraft";
	};
	class v105_URF_EdSubCat_Motorized
	{
		displayName = "Motorized";
	};
	class v105_URF_EdSubCat_Mechanized
	{
		displayName = "Mechanized";
	};
	class v105_URF_EdSubCat_Armor
	{
		displayName = "Armor";
	};
	class v105_URF_EdSubCat_Turrets
	{
		displayName = "Turrets";
	};
};
class CfgFunctions
{
	class V_FZ
	{
		class PelicanMagLiftSystem
		{
			
			class PelicanLoadValidate{file = "105th_Core\functions\fn_PelicanLoadValidate.sqf";};
			class PelicanUnLoadValidate{file = "105th_Core\functions\fn_PelicanUnloadValidate.sqf";};
		};
		class WarthogAddContainer
		{
			class WarthogAddContainer{file = "105th_Core\functions\fn_WarthogAddContainer.sqf";};
		};
		class PelicanAddTransportPod
		{
			class PelicanAddTransportPod{file = "105th_Core\functions\fn_PelicanAddTransportPod.sqf";};
		};
		class FalconAddMedicalPod
		{
			class FalconAddMedicalPod{file = "105th_Core\functions\fn_FalconAddMedicalPod.sqf";};
		};
		
	};
};