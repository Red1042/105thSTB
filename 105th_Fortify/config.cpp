class CfgPatches
{
	class acex_fortify
	{
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
		author=	"105th N-4 Logistics Team";
		version=3.5;
		versionStr="3.5.4.23";
		versionAr[]={3,5,4,23};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Combo;
			class Edit;
			class Checkbox;
			class ModuleDescription;
		};
		class ModuleDescription;
	};
	class ACE_Module: Module_F
	{
	};
	class acex_fortify_setupModule: ACE_Module
	{
		author="$STR_ace_common_ACETeam";
		category="ACEX";
		displayName="$STR_acex_fortify_Fortify";
		function="acex_fortify_fnc_setupModule";
		scope=2;
		isGlobal=0;
		class Attributes: AttributesBase
		{
			class Side: Combo
			{
				displayName="$STR_eval_typeside";
				property="acex_fortify_setupModule_Side";
				typeName="NUMBER";
				defaultValue=1;
				class values
				{
					class West
					{
						name="$STR_WEST";
						value=1;
					};
					class East
					{
						name="$STR_east";
						value=2;
					};
					class Indp
					{
						name="$STR_guerrila";
						value=3;
					};
					class Civ
					{
						name="$STR_civilian";
						value=4;
					};
				};
			};
			class Preset: Default
			{
				displayName="$STR_controls_presets";
				property="acex_fortify_setupModule_Preset";
				control="acex_fortify_presetSelection";
				typeName="STRING";
				defaultValue=0;
			};
			class Budget: Edit
			{
				property="acex_fortify_setupModule_Budget";
				displayName="$STR_acex_fortify_budget";
				typeName="NUMBER";
				defaultValue=-1;
			};
			class AddToolItem: Checkbox
			{
				property="acex_fortify_setupModule_AddToolItem";
				displayName="$STR_acex_fortify_addToolItem";
				typeName="BOOL";
			};
			class ModuleDescription: ModuleDescription
			{
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description="$STR_acex_fortify_moduleDescription";
		};
	};
	class acex_fortify_buildLocationModule: ACE_Module
	{
		author="$STR_ace_common_ACETeam";
		category="ACEX";
		displayName="$STR_acex_fortify_buildLocationModule";
		scope=2;
		isGlobal=1;
		canSetArea=1;
		function="acex_fortify_fnc_buildLocationModule";
		class AttributeValues
		{
			size3[]={300,300,-1};
			IsRectangle=1;
		};
	};
};
class ACEX_Fortify_Presets
{
	class v105_Fortify
	{	
		displayname=	"105th Fortify Preset"
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
