#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class Jerry_Development
	{
		author="Jerry";
		name="Jerry Development";
		weapons[]={};
		magazines[]={};
		ammo[]={};
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ace_medical_treatment"
		};
	};
};

class CfgFunctions
{
	class Jerry_Development
	{
		class Functions
		{
			file = "Jerry_Development\functions";
			class Init
			{
			    postInit = 1;
			};
			class SurgicalKitUse
			{
			};
		};
	};
};


class ace_medical_treatment_actions
{
    class FieldDressing;
	class SurgicalKit: FieldDressing
	{
	    callbackSuccess="jerry_development_fnc_SurgicalKitUse"
		consumeItem="Jerry_Development_ConsumeOneKit";
	};
};