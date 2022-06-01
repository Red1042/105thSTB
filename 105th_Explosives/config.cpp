wclass CfgPatches
{
    class v105_Explosives_ACE_Compat
    {
        units[]={};
        weapons[]={};
        magazines[]={};
        ammo[]=
        {
            "C12_Remote_Ammo",
			"C7_Remote_Ammo",
			"M168_Remote_Ammo",
			"M41_IED_Remote_Ammo",
			"M41_B_IED_Remote_Ammo",
			"UNSC_Mine_Ammo"
        };
        requiredVersion=0.5;
        requiredAddons[]=
		{
			"OPTRE_Weapons",
			"OPTRE_UNSC_Units",
			"OPTRE_MJOLNIR",
			"OPTRE_MJOLNIR_data_anims",
			"OPTRE_Ins_Units",
			"ace_common",
			"ace_explosives",
			"ace_medical_engine",
			"ace_medical_treatment",
			"A3_Data_F",
			"OPTRE_Weapons_Items",
            "OPTRE_ACE_Compat"
		};
    };
};
    class CfgAmmo
    {
            class SatchelCharge_Remote_Ammo;
            class C12_Remote_Ammo: SatchelCharge_Remote_Ammo
            {
                ace_explosives_magazine="C12_Remote_Mag";
                ACE_explodeOnDefuse = 0;
                ace_explosives_defuseObjectPosition[]={0,0,0};
                ace_explosives_size = 0;
            };
            class C7_Remote_Ammo: SatchelCharge_Remote_Ammo
            {
                ace_explosives_magazine="C7_Remote_Mag";
                ACE_explodeOnDefuse = 0;
                ace_explosives_defuseObjectPosition[]={0,0,0};
                ace_explosives_size = 0;
            };
            class M168_Remote_Ammo: SatchelCharge_Remote_Ammo
            {
                ace_explosives_magazine="M168_Remote_Mag";
                ACE_explodeOnDefuse = 0;
                ace_explosives_defuseObjectPosition[]={0,0,0};
                ace_explosives_size = 0;
            };
            class M41_IED_Remote_Ammo: SatchelCharge_Remote_Ammo
            {
                ace_explosives_magazine="M41_IED_Remote_Mag";
                ACE_explodeOnDefuse = 0;
                ace_explosives_defuseObjectPosition[]={0,0,0};
                ace_explosives_size = 0;
            };
            class M41_B_IED_Remote_Ammo: SatchelCharge_Remote_Ammo
            {
                ace_explosives_magazine="M41_IED_B_Remote_Mag";
                ACE_explodeOnDefuse = 0;
                ace_explosives_defuseObjectPosition[]={0,0,0};
                ace_explosives_size = 0;
            };
            class ATMine_Range_Ammo;
            class UNSC_Mine_Ammo: ATMine_Range_Ammo
            {
                ace_explosives_magazine="UNSCMine_Range_Mag";
                ACE_explodeOnDefuse = 0;
                ace_explosives_defuseObjectPosition[]={0,0,0};
                ace_explosives_size = 1;
            };
    };
    class CfgMagazines
    {
        class CA_Magazine;
        class C12_Remote_Mag: CA_Magazine
        {
            ACE_Explosives_Placeable=1;
            useAction=0;
            ACE_Explosives_SetupObject="OPTRE_Placed_C12";
            ACE_Explosives_DelayTime=1.5;
            class ACE_Triggers
            {
                SupportedTriggers[]=
                {
                    "Timer",
                    "Command",
                    "MK16_Transmitter",
                    "DeadmanSwitch"
                };
                class Timer
                {
                    FuseTime=0.5;
                };
                class Command
                {
                    FuseTime=0.5;
                };
                class MK16_Transmitter: Command
                {
                };
                class DeadmanSwitch: Command
                {
                };
            };
        };
        class C7_Remote_Mag: CA_Magazine
        {
            ACE_Explosives_Placeable=1;
            useAction=0;
            ACE_Explosives_SetupObject="OPTRE_Placed_C7";
            ACE_Explosives_DelayTime=1.5;
            class ACE_Triggers
            {
                SupportedTriggers[]=
                {
                    "Timer",
                    "Command",
                    "MK16_Transmitter",
                    "DeadmanSwitch"
                };
                class Timer
                {
                    FuseTime=0.5;
                };
                class Command
                {
                    FuseTime=0.5;
                };
                class MK16_Transmitter: Command
                {
                };
                class DeadmanSwitch: Command
                {
                };
            };
        };
        class M168_Remote_Mag: CA_Magazine
        {
            ACE_Explosives_Placeable=1;
            useAction=0;
            ACE_Explosives_SetupObject="OPTRE_Placed_M168";
            ACE_Explosives_DelayTime=1.5;
            class ACE_Triggers
            {
                SupportedTriggers[]=
                {
                    "Timer",
                    "Command",
                    "MK16_Transmitter",
                    "DeadmanSwitch"
                };
                class Timer
                {
                    FuseTime=0.5;
                };
                class Command
                {
                    FuseTime=0.5;
                };
                class MK16_Transmitter: Command
                {
                };
                class DeadmanSwitch: Command
                {
                };
            };
        };
        class M41_IED_Remote_Mag: CA_Magazine
        {
            ACE_Explosives_Placeable=1;
            useAction=0;
            ACE_Explosives_SetupObject="OPTRE_Placed_M41_IED";
            ACE_Explosives_DelayTime=1.5;
            class ACE_Triggers
            {
                SupportedTriggers[]=
                {
                    "Timer",
                    "Command",
                    "MK16_Transmitter",
                    "DeadmanSwitch",
                    "PressurePlate",
                    "Cellphone"
                };
                class Timer
                {
                    FuseTime=2;
                };
                class Command
                {
                    FuseTime=2;
                };
                class PressurePlate
                {
                    digDistance=0;
                };
                class MK16_Transmitter: Command
                {
                };
                class DeadmanSwitch: Command
                {
                };
                class Cellphone: Command
                {
                };
            };
        };
        class M41_IED_B_Remote_Mag: M41_IED_Remote_Mag
        {
            ACE_Explosives_SetupObject="OPTRE_Placed_M41_IED_B";
        };
        class ATMine_Range_Mag;
        class UNSCMine_Range_Mag: ATMine_Range_Mag
        {
            ACE_Explosives_Placeable=1;
            useAction=0;
            ACE_Explosives_SetupObject="OPTRE_Placed_UNSC_Mine";
            ACE_Explosives_DelayTime=1.5;
            class ACE_Triggers
            {
                SupportedTriggers[]=
                {
                    "PressurePlate",
                    "IRSensor"
                };
                class PressurePlate
                {
                    digDistance=0.059999999;
                };
            };
        };
    };

class CfgFunctions
{
	class v105_Explosives
	{
		class Functions
		{
			file = "105th_Explosives\functions";
			class Init
			{
			    postInit = 1;
			};
			class DetonateAll
			{
			};
			class Throwable
			{
			};
		};
	};
};
