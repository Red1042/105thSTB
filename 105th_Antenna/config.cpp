#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class v105_Admin
	{
		author="105th";
		name="105th Antenna";
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
			file = "105th_Antenna\functions";
			class PreInit
			{
			    preInit = 1;
			};
			class Init
			{
			    postInit = 1;
			};
			class AntennaInit
			{
			};
			class HandleConnection
			{
			};
			class HandleConnected
			{
			};
		};
	};
};