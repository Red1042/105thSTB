#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class v105_Admin
	{
		author="105th | S-4 Logistics";
		name="105th Admin";
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
			file = "105th_Admin\functions";
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
			class SaveData
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


#include "\a3\ui_f\hpp\definecommongrids.inc"
#include "defines.hpp"
#include "ui\adminViewUserUI.hpp"

class RscTitles
{
    #include "ui\bossBarUI.hpp"
}