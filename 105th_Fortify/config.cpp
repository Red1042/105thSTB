class CfgPatches
{
	class v105_fortify
	{
		author=	"105th | S-4 Logistics";
		version=3.5;
		versionStr="3.5.4.23";
		versionAr[]={3,5,4,23};
		units[]=
		{};
		weapons[]=
		{};
		requiredVersion=1.96;
		requiredAddons[]=
		{
			"acex_main",
			"ace_interaction"
		};
	};
};

class ACEX_Fortify_Presets
{
	class v105_Fortify
	{	
		displayname= "105th Fortify Preset"
		objects[]=
		{
			//	{ "ClassName" , [x] = budget}, description of item
			{
				"Hedgehog_EP1",	1
			}, // Metal Hedgehog
			
			{
				"FootBridge_0_ACR",	1
			}, // Wood Plank, Flat
			
			{
				"CUP_Winter_obj_snowman", 1
			}, // Snowman
			
			{
				"ACE_ConcertinaWireCoil", 1
			}, // Wire Coil
			
			{
				"PortableHelipadLight_01_blue_F", 1
			}, // Helipad Light, Blue
			
			{
				"Land_HBarrier_3_F", 1
			}, // Hesco Barrier, 3
			
			{
				"Land_OPTRE_M72_barrierBlk", 1
			}, // M72 Barricade, Black
			
			{
				"Land_BagFence_Long_F", 1
			} // Tan Sandbag barrier
		};
	};
};