#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class v105_HEVs
	{
		author=	"105th | S-4 Logistics";
		name="105th Jumppack";
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		    "cba_settings",
			"OPTRE_FunctionsLibrary",
			"OPTRE_modules",
			"OPTRE_Core",
			"CBA_main"
		};
	};
};

class CfgFunctions
{
	class v105_JumpPack
	{
		class Functions
		{
			file = "105th_HEVs\functions";
			class Init
			{
			    postInit = 1;
			};
		};
	};
};