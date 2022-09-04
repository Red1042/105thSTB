#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class v105_Weapons
	{
		author="105th | S-4 Logistics";
		name="105th Weapons";
        weapons[]=
        {
            "v105_M28A2",
            "v105_MA5C",
            "v105_MA5C_GL",
            "v105_MA5C_FT",
            "v105_MA5C_FT_GL",
            "v105_M7",
            "v105_MA37K",
            "v105_M6C",
            "v105_M6D",
            "v105_M73SAW",
            "v105_M247SSW"
        };
        magazines[]=
        {
            // M247
            "v105_200Rnd_93x64_Box",
            "v105_150Rnd_93x64_Box",
            "v105_75Rnd_93x64_Box",
            "v105_200Rnd_93x64_Mixed_Box",
            "v105_150Rnd_93x64_Mixed_Box",
            "v105_75Rnd_93x64_Mixed_Box",
            // M73
            "v105_150Rnd_762x51_Box",
            "v105_150Rnd_762x51_Box_Tracer",
            "v105_300Rnd_762x51_Box",
            "v105_300Rnd_762x51_Box_Tracer",
            // MA5C
            "v105_32Rnd_762x51_IRDM_Mag",
            // DMR
            "v105_15Rnd_762x51_338_API_Mag",
            "v105_15Rnd_762x51_338_Magnum_Mag",
            "v105_15Rnd_762x51_338_APIT_Mag",
            "v105_15Rnd_762x51_338_MT_Mag",
            "v105_15Rnd_762x51_338_Mixed_Mag",
            // 40mm Grenade
            "v105_Whistler_Grenade",
            // Cricket
            "v105_Cricket_1rnd_PEN",
            "v105_Cricket_1rnd_HE",
            // C7 Throwable
            "v105_C7_Throwable_Mag"
        };
        ammo[]=
        {
            "v105_Confetti_Sub",
            "v105_Whistler_40mm_HE",
            "v105_145x114_Ball",
            "v105_N12_UWDP_Ball",
            "v105_C7_Throwable_Ammo"
        };
		units[]={};
		requiredVersion=0.1;
	};
};

class Mode_SemiAuto;

class CfgWeapons
{
    #include "weapons\UGLs.hpp"
    #include "weapons\Rifles.hpp"
    #include "weapons\Carbines.hpp"
    #include "weapons\Machineguns.hpp"
    #include "weapons\Pistols.hpp"
    #include "weapons\SMGs.hpp"
};

class CfgMagazines
{
	#include "cfg\Magazines.hpp"
};