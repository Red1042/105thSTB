#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class v105_HUD
	{
		author=	"105th | S-4 Logistics";
		name="105th HUD";
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		    "cba_settings"
		};
	};
};

class CfgFunctions
{
	class v105_HUD
	{
		class Functions
		{
			file = "105th_HUD\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class ToggleHUD
			{
			};
		};
	};
};

class RscTitles
{
    // ToDO: Setup the overlay layers
	//#include "ui\jumpPackUI.hpp"
};