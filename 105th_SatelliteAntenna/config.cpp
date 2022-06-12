#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class v105_Admin
	{
		author="105th";
		name="105th Satellite Antenna";
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
	};
};

class CfgFunctions
{
	class v105_Admin
	{
		class Functions
		{
			file = "105th_SatelliteAntenna\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class CheckMods
			{
			};
			class ShowAdminViewUserUI
			{
			};
			class ScanInventory
			{
			};
			class AllowedActions
			{
			};
			class AdminHint
			{
			};
			class ShowBossBarUI
			{
			};
		};
	};
};