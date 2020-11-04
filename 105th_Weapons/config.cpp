class CfgPatches
{
	class 105th_Weapons
	{
		author="Howard";
		name="105th STB Ammunition and Weapons Enhancement";
		url="";
		// Added Items
		units[]=
		{
			
		};
		weapons[]=
		{
			"v105_HOW_M73SAW",
			"v105_HOW_M247SSW"
		};
		magazines[]=
		{			//M247
					"HOW_200Rnd_93x64_Box",
					"HOW_150Rnd_93x64_Box",
					"HOW_75Rnd_93x64_Box",
					"HOW_200Rnd_93x64_Mixed_Box",
					"HOW_150Rnd_93x64_Mixed_Box",
					"HOW_75Rnd_93x64_Mixed_Box",
					//M73
					"v105_HOW_150Rnd_762x51_Box",
					"v105_HOW_150Rnd_762x51_Box_Tracer",
					"v105_HOW_300Rnd_762x51_Box",
					"v105_HOW_300Rnd_762x51_Box_Tracer",	
					//MA-5C
					"HOW_32Rnd_762x51_IRDM_Mag",
					//DMR
					"HOW_15Rnd_762x51_338_API_Mag",
					"HOW_15Rnd_762x51_338_Magnum_Mag",
					"HOW_15Rnd_762x51_338_APIT_Mag",
					"HOW_15Rnd_762x51_338_MT_Mag",
					"HOW_15Rnd_762x51_338_Mixed_Mag",

					
		};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"V_SO_Weapons"
		};
	};
};

/*
class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Magazines
		{
			list[]={"V_SO_Magazines"};
		};
	};
};
*/
class CfgMagazines
{
	#include "cfgmagazines.hpp"
};
class Single;
class OPTRE_M392_DMR;
class OPTRE_MA5C;
class OPTRE_MA5CGL;
class OPTRE_MA5K;
class OPTRE_M73;
class OPTRE_M247;
class CfgWeapons
{
		#include "cfg\DMR.hpp"
		#include "cfg\MA5.hpp"
		#include "cfg\Machineguns.hpp"
		
};