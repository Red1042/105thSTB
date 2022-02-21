class CfgPatches
{
    class v105_ACE_Compat
    {
        units[]=
        {};
        weapons[]=
        {};
        magazines[]=
        {};
        ammo[]=
        {
            "C12_Remote_Ammo",
			"C7_Remote_Ammo",
			"M168_Remote_Ammo",
			"M41_IED_Remote_Ammo",
			"M41_B_IED_Remote_Ammo",
			"UNSC_Mine_Ammo"
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "OPTRE_Core",
			"OPTRE_Weapons",
			"V_SO_Weapons",
			"OPTRE_Weapons_Sniper",
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
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
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
class CfgWeapons
{
	// BEGIN NEST's ACE COOKOFF OPTRE FIX
	class ItemCore;
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
        ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo;
	};
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
        ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
        ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo;
	};
	class SMG_01_Base;
	class SMG_01_F: SMG_01_Base
	{
        ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo;
	};
	class Pistol_Base_F;
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
        ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo;
	};
	class Launcher_Base_F;
	class launch_Titan_short_base;
	class launch_Titan_base;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class launch_B_Titan_short_F: launch_Titan_short_base
	{
		class WeaponSlotsInfo;
	};
	class launch_B_Titan_F: launch_Titan_base
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_Rifle_Base: arifle_Mk20_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_mk20";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{};
			class CowsSlot: CowsSlot
			{};
			class PointerSlot: PointerSlot
			{};
			class UnderBarrelSlot: UnderBarrelSlot
            {};
		};
	};
	class OPTRE_Shotgun_Base: arifle_Mk20_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_gm6";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_LongRifle_Base: srifle_EBR_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_ebr";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_MachineGun_Base: LMG_Mk200_F
	{
		ace_overheating_closedBolt = 1;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_mk200";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_SubMachineGun_Base: SMG_01_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};
	class OPTRE_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		ace_overheating_closedBolt = 0;
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		displayName="-";
		recoil="recoil_pistol_zubr";
		type=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={701,901};
			mass=1;
			class MuzzleSlot: MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
			};
		};
	};  // END NEST's ACE COOKOFF FIX
};