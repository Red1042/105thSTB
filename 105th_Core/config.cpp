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
		class WarthogLights
		{
			file = "105th_Core\init";
			class WarthogLightsAdd{};
			class WarthogLightsOn{};
			class WarthogLightsOff{};
		};
		class PelicanAddMG
		{
			file = "105th_Core\init";
			class PelicanAddMG{};
		};
		class ScorpionAddMG
		{
			file = "105th_Core\init";
			class ScorpionAddMG{};
		};
		class FalconAddMGs
		{
			file = "105th_Core\init";
			class FalconAddMGs{};
		};
		class HoneybadgerRemoveTurret
		{
			file = "105th_Core\init";
			class HoneybadgerRemoveTurret{};
		};
		class PelicanMagLiftSystem
		{
			file = "105th_Core\init";
			class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
			class SlipspaceRuptureDetected{};
		};
		class PelicanFncs
		{
			file = "105th_Core\init";
			class ThrusterEngage{};
			class ThrusterDisengage{};
			class ThrusterAnimate{};
			class AirbrakeEngage{};
		};
		class MGDetach
		{
			file = "105th_Core\init";
			class MGDetach{};
		};
		class LifeboatLaunch
		{
			file = "105th_Core\init";
			class LifeboatLaunch{};
		};
		class AutomaticSlimLeg
		{
			file = "105th_Core\init";
			class AutomaticSlimLeg{};
		};
	};
};