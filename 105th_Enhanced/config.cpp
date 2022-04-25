#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class v105_Enhanced
	{
		author="105th";
		name="105th Enhanced";
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Weapons",
			"OPTRE_Weapons_Backpacks",
		};
	};
};

class CfgFunctions
{
	class v105_Enhanced
	{
		class Functions
		{
			file = "105th_Enhanced\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class DefaultKits
			{
			};
			class DestroyEquipment
			{
			};
			class ZeusMessage
			{
			};
		};
	};
};