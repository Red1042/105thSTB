class CfgPatches
{
	class 105th_Core
	{
		author="Howard";
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

class CfgEditorCategories
{
	class HOW_EdCat_105th
	{
		displayName="[105th] Shocktrooper Battalion";
	};
	class HOW_EdCat_URF
	{
		displayName="[105th] URF - Enhanced Vehicles"
	};
	
}; 
class CfgEditorSubcategories
{
	// BLUFOR
	class HOW_105th_EdSubCat_Motorized
	{
		displayName = "Motorized";
	};
	class HOW_105th_EdSubCat_Drones
	{
		displayName = "Drones";
	};
	class HOW_105th_EdSubCat_Mechanized
	{
		displayName = "Mechanized";
	};
	class HOW_105th_EdSubCat_Armor
	{
		displayName = "Armor";
	};
	class HOW_105th_EdSubCat_Pelican
	{
		displayName="Pelicans";
	};
	class HOW_105th_EdSubCat_FalcHorn
	{
		displayName="Falcons and Hornets";
	};
	class HOW_105th_EdSubCat_FixedWing
	{
		displayName="Fixed-wing Aircraft";
	};
	class HOW_105th_EdSubCat_Supply
	{
		displayName = "Supplies & Equipment";
	};
	class HOW_105th_EdSubCat_Props
	{
		displayName = "Misc. Props";
	};
	class HOW_105th_EdSubCat_Waterborne
	{
		displayName = "Waterborne Vehicles";
	};
	class HOW_105th_EdSubCat_Archived
	{
		displayName = "Archived";
	};
	//OPFOR
	class HOW_URF_EdSubCat_Aircraft
	{
		displayName = "Aircraft";
	};
	class HOW_URF_EdSubCat_Motorized
	{
		displayName = "Motorized";
	};
	class HOW_URF_EdSubCat_Mechanized
	{
		displayName = "Mechanized";
	};
	class HOW_URF_EdSubCat_Armor
	{
		displayName = "Armor";
	};
};
class CfgFunctions
{
	class V_FZ
	{
		class PelicanMagLiftSystem
		{
			
			class PelicanLoadValidate{file = "105th_Core\init\fn_PelicanLoadValidate.sqf";};
			class PelicanUnLoadValidate{file = "105th_Core\init\fn_PelicanUnloadValidate.sqf";};
		};
		class WarthogAddMortar
		{
			class WarthogAddMortar{file = "105th_Core\init\fn_WarthogAddMortar.sqf";};
		};
		class PelicanAddTransportPod
		{
			class PelicanAddTransportPod{file = "105th_Core\init\fn_PelicanAddTransportPod.sqf";};
		};
		class droptanks
		{
			class droptanks{file = "105th_Core\init\droptanks.sqf";};
		};
		class F16_Refuel
		{
			class F16_Refuel{file = "105th_Core\init\F16_Refuel.sqf";};
		};
	};
};