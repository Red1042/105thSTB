#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class V_105_JumpPack
	{
		author="105th";
		name="105th Jumppack";
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

class CfgVehicles
{
	// Jetpacks
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_S12_SOLA_Jetpack_ON;

    class v105_JumpPack: OPTRE_S12_SOLA_Jetpack
    {
        displayName="[105th] JumpPack";
        author="S-4 Logistics";
        maximumLoad=350;
    };

    class v105_JumpPack_on: OPTRE_S12_SOLA_Jetpack_ON
    {
        displayName="[105th] JumpPack";
        author="S-4 Logistics";
        maximumLoad=350;
    };
};

class CfgFunctions
{
	class v105_JumpPack
	{
		class Functions
		{
			file = "105th_JumpPack\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class JumpPack
			{
			};
			class EventHandlers
			{
			};
			class JumpPackRefuel
			{
			};
			class RoofStuckCheck
			{
			};
		};
	};
};

class RscTitles
{
	#include "ui\jumpPackUI.hpp"
};