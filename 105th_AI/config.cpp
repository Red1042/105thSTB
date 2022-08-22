#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class v105_Admin
	{
		author="105th | S-4 Logistics";
		name="105th AI";
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
	};
};

class CfgFunctions
{
	class v105_Antenna
	{
		class Functions
		{
			file = "105th_AI\functions";
			class Init
			{
			    postInit = 1;
			};
		};
	};
};