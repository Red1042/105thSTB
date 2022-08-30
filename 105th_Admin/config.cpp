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
		requiredAddons[]={
		    "cba_settings"
		};
	};
};

class CfgFunctions
{
	class v105_Admin
	{
		class Functions
		{
			file = "105th_Admin\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class ShowAdminViewUserUI
			{
			};
			class ShowAdminMainUI
			{
			};
			class ScanMods
			{
			};
			class ScanInventory
			{
			};
			class ScanUndefinedItems
			{
			};
			class SaveData
			{
			};
			class GetUniqueData
			{
			};
			class ButtonWhitelistBlacklist
			{
			};
			class AdminHint
			{
			};
			class ShowBossBarUI
			{
			};
			class PrivateMessage
			{
			};
		};
	};
};

class CfgDebriefing
{
	// Used when player is kicked
	class endKick
	{
		title = "You have been kicked";
		description = "by an Administrator";
		picture = "KIA";
	};
};


#include "\a3\ui_f\hpp\definecommongrids.inc"
#include "defines.hpp"
#include "ui\adminViewUserUI.hpp"
#include "ui\adminMainUI.hpp"

class RscTitles
{
    #include "ui\bossBarUI.hpp"
}