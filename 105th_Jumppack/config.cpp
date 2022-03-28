#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class C_105_Armor
	{
		author="105th";
		name="105th Jumppack";
		units[]=
		{
			"ODST_Test"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Weapons",
			"OPTRE_Weapons_Backpacks",
		};
	};
};

class CfgVehicles
{
	// Jetpacks
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_S12_SOLA_Jetpack_ON;

    class v105_JumpPack: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[105th] Jumppack";
        maximumLoad=100;
    };

    class v105_JumpPack_on: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[105th] Jumppack";
        maximumLoad=100;
    };
};

class CfgFunctions
{
	class v105
	{
		class Functions
		{
			file = "105th_Armor\functions";
			class Init
			{
			    postInit = 1;
			};
			class JumpPack
			{
			};
		};
	};
};