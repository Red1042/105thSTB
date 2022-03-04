class CfgPatches
{
    class v105_Munitions
    {
        author= "N4_Logistics_Team"; 
        url="https://discord.gg/105thstb-arma";
        units[]={};
        weapons[]={};
        magazines[]=
        {
            //M247
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
            //MA5C
            "HOW_32Rnd_762x51_IRDM_Mag",
            //N-12
            "v105_762x51_DP_Mag",
            //DMR
            "HOW_15Rnd_762x51_338_API_Mag",
            "HOW_15Rnd_762x51_338_Magnum_Mag",
            "HOW_15Rnd_762x51_338_APIT_Mag",
            "HOW_15Rnd_762x51_338_MT_Mag",
            "HOW_15Rnd_762x51_338_Mixed_Mag",
            //40mm Grenade
            "v105_Whistler_Grenade",
            //SRS
            "v105_4Rnd_145x114_Mag",
            "v105_4Rnd_145x114_Mag_Tracer",
            // Cricket
            "CRCKT_PEN",
            "CRCKT_HE",
            // Confetti Maker
            "v105_Confetti_Belt_200m",
            "v105_Confetti_Belt_100m",
            "v105_Confetti_Belt_15m"

        };
        ammo[]=
        {
            "v105_Confetti_Sub",
            "v105_Whistler_40mm_HE",
            "v105_145x114_Ball",
            "v105_N12_UWDP_Ball",
        };
        requiredVersion=    0.1;
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
            "A3_Weapons_F",
			"A3_Data_F_Mark",
			"OPTRE_Weapons_Items",
            "OPTRE_ACE_Compat",
        }; 
    };
};
class GrenadeHand;
class HandGrenade;
class OPTRE_G_M9_Frag;
class ACE_7Rnd_408_305gr_Mag;
class OPTRE_100Rnd_762x51_Box;
class OPTRE_100Rnd_762x51_Box_Tracer;
class OPTRE_60Rnd_762x51_Mag;
class OPTRE_64Rnd_57x31_Mag;    
class OPTRE_15Rnd_762x51_Mag;
class OPTRE_1Rnd_50x137_PEN;
class OPTRE_1Rnd_50x137_HE;
class 200Rnd_65x39_cased_Box;
class CfgMagazines
{
    // 15 Round Magazines
    // DMR AMMO 
    class HOW_15Rnd_762x51_338_Magnum_Mag: OPTRE_15Rnd_762x51_Mag
    {
        dlc							= "105th";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        count						= 15;
        initspeed 					= 950;
        ammo 						= "ACE_338_Ball";
        displayname 				= "15Rnd 7.62x51mm Magnum Magazine";
        displaynameshort 			= "7.62x51mm Magnum";
        descriptionShort			= "";
        lastRoundsTracer 			= 3;
    };
    class HOW_15Rnd_762x51_338_API_Mag: HOW_15Rnd_762x51_338_Magnum_Mag
    {
        dlc							= "105th";
        author						= "Howard";
        count = 15;
        ammo 						= "ACE_338_Ball_API526";
        displayname 				= "15Rnd 7.62x51mm API526 Magazine";
        displaynameshort 			= "7.62x51mm Armor Piercing Incendiary";
        descriptionShort			= "";
        lastRoundsTracer = 3;
    };
    class HOW_15Rnd_762x51_338_MT_Mag: HOW_15Rnd_762x51_338_Magnum_Mag
    {
        ammo 						= "ACE_338_Ball";
        displayname 				= "15Rnd 7.62x51mm Magnum Tracer Magazine";
        displaynameshort 			= "7.62x51mm Magnum Tracer";
        tracersEvery 				= 1;
        lastRoundsTracer			= 0;
    };
    class HOW_15Rnd_762x51_338_APIT_Mag: HOW_15Rnd_762x51_338_API_Mag
    {
        ammo 						= "ACE_338_Ball_API526";
        displayname 				= "15Rnd 7.62x51mm APIT526 Magazine";
        displaynameshort 			= "7.62x51mm Armor Piercing Incendiary Tracer";
        tracersEvery 				= 1;
        lastRoundsTracer			= 0;
    };
    class HOW_15Rnd_762x51_338_Mixed_Mag:HOW_15Rnd_762x51_338_Magnum_Mag
    {
        initspeed 					= 950;
        ammo 						= "ACE_338_Ball";
        displayname 				= "15Rnd 7.62x51mm Mixed Magazine";
        displaynameshort 			= "7.62x51mm Magnum";
        descriptionShort			= "";
        tracersEvery				= 3;
        lastRoundsTracer 			= 2;	
    };
    //RIFLE AMMO BELOW
    //32 Rnds
    class HOW_32Rnd_762x51_IRDM_Mag: OPTRE_60Rnd_762x51_Mag
    {
        ammo 						= "ACE_B_762x51_Tracer_Dim";
        displayname 				= "32Rnd 7.62x51mm IRDM Magazine";
        displaynameshort 			= "7.62x51mm IR Tracer";
        count 						= 32;
        tracersEvery 				= 2;
        lastRoundsTracer			= 4;
    };
    //N12
    class v105_762x51_DP_Mag: OPTRE_64Rnd_57x31_Mag
    {
        displayname=    "42Rnd Dual Purpose";
        descriptionShort=   "Underwater Dual-Purpose Ammunition (Tracers)";
        count=  42;
        ammo=   "v105_N12_UWDP_Ball";
        scope=  2;
        scopeArsenal=   2;
        mass=   10;
        initspeed=  550;
        deleteIfEmpty=  0; 
    };
    // M247
    class HOW_150Rnd_93x64_Box: OPTRE_100Rnd_762x51_Box
    {
        dlc = "OPTRE";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        ammo						= "B_93x64_Ball";
        initspeed 					= 900;
        count						= 150;
        displayname 				= "150Rnd 9.3x64mm Box Magazine";
        displaynameshort 			= "150Rnd 9.3x64mm";
        descriptionShort			= "";
        mass						= 40;
    };
    class HOW_75Rnd_93x64_Box: OPTRE_100Rnd_762x51_Box
    {
        dlc = "OPTRE";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        ammo						= "B_93x64_Ball";
        initspeed 					= 900;
        count						= 75;
        displayname 				= "75Rnd 9.3x64mm Box Magazine";
        displaynameshort 			= "75Rnd 9.3x64mm";
        descriptionShort			= "";
        mass						= 25;
    };
    class HOW_150Rnd_93x64_Mixed_Box: OPTRE_100Rnd_762x51_Box
    {
        dlc = "OPTRE";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        ammo						= "B_93x64_Ball";
        initspeed 					= 900;
        count						= 150;
        displayname 				= "150Rnd 9.3x64mm Mixed Box Magazine";
        displaynameshort 			= "150Rnd 9.3x64mm";
        descriptionShort			= "";
        tracersEvery				= 4;
        lastRoundTracers 			= 5;
        mass						= 40;
    };
    class HOW_75Rnd_93x64_Mixed_Box: OPTRE_100Rnd_762x51_Box
    {
        dlc = "OPTRE";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        ammo						= "B_93x64_Ball";
        initspeed 					= 900;
        count						= 75;
        displayname 				= "75Rnd 9.3x64mm Mixed Box Magazine";
        displaynameshort 			= "75Rnd 9.3x64mm";
        descriptionShort			= "";
        tracersEvery				= 4;
        lastRoundTracers 			= 5;
        mass						= 25;
    };
    class HOW_200Rnd_93x64_Mixed_Box: OPTRE_100Rnd_762x51_Box
    {
        dlc = "OPTRE";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        ammo						= "B_93x64_Ball";
        initspeed 					= 900;
        count						= 200;
        displayname 				= "200Rnd 9.3x64mm Mixed Box Magazine";
        displaynameshort 			= "200Rnd 9.3x64mm";
        descriptionShort			= "";
        tracersEvery				= 4;
        lastRoundTracers 			= 8;
        mass						= 50;
    };
    class HOW_200Rnd_93x64_Box: OPTRE_100Rnd_762x51_Box
    {
        dlc = "OPTRE";
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        ammo						= "B_93x64_Ball";
        initspeed 					= 900;
        count						= 200;
        displayname 				= "200Rnd 9.3x64mm Box Magazine";
        displaynameshort 			= "200Rnd 9.3x64mm";
        descriptionShort			= "";
        tracersEvery				= 0;
        lastRoundTracers 			= 0;
        mass						= 50;
    };
    // M73SAW
    class v105_HOW_150Rnd_762x51_Box: OPTRE_100Rnd_762x51_Box
    {
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        count						= 150;
        displayname 				= "[105th] 150Rnd 7.62x51mm Box";
        mass						= 35;
    };
    class v105_HOW_150Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box_Tracer
    {
        
        count						= 150;
        displayname 				= "[105th] 150Rnd 7.62x51mm Box Tracer";
        tracersEvery				= 2;
        mass						= 35;
    };
    class v105_HOW_300Rnd_762x51_Box: OPTRE_100Rnd_762x51_Box
    {
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;
        count						= 300;
        displayname 				= "[105th] 300Rnd 7.62x51mm Box";
        mass						= 50;
    };
    class v105_HOW_300Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box_Tracer
    {
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;		
        count						= 300;
        displayname 				= "[105th] 300Rnd 7.62x51mm Box Tracer";
        tracersEvery				= 2;
        mass						= 50;
    };
    //SRS
    class v105_4Rnd_145x114_Mag:ACE_7Rnd_408_305gr_Mag
    {
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;		
        count						= 4;
        displayname 				= "[105th] 14.5x114mm Magazine";
        ammo						= "v105_145x114_Ball";
    };
    class v105_4Rnd_145x114_Mag_Tracer:ACE_7Rnd_408_305gr_Mag
    {
        author						= "Howard";
        scope						= 2;
        scopeArsenal				= 2;		
        count						= 4;
        displayname 				= "[105th] 14.5x114mm Tracer Magazine";
        ammo						= "v105_145x114_Tracer";
    };
    //Disposables
    class CRCKT_PEN: OPTRE_1Rnd_50x137_PEN
    {
        author = "Nest";
        displayName = "M48B 'Penetrator'";
        scope = 2;
        mass = 5;
    };
    class CRCKT_HE: OPTRE_1Rnd_50x137_HE
    {
        author = "Nest";
        displayName = "M48B 'High Explosive'";
        scope = 2;
        mass = 5;
    };
    //40mm Whistler
    class 1Rnd_HE_Grenade_shell;
	class v105_Whistler_Grenade:1Rnd_HE_Grenade_shell
	{
		dlc							= "105th";
		author						= "Howard";
		count = 1;
		ammo 						= "v105_Whistler_40mm_HE";
		displayname 				= "40mm HE Whistler";
		displaynameshort 			= "Run.";
	};
    class v105_Confetti_Belt_200m: 200Rnd_65x39_cased_Box
    {
        scope=  2;
        scopeArsenal=   2;
        displayName=    "[105th] 150Rnd Belt W/ Tracers 200m";
        descriptionShort=   "Belt-fed munitions for the CQMG-99A, 200m fuze";
        class Library
        {
            libTextDesc = "Etched onto the belt: 'God help those who face the thunder that which hell fires forth.'";
        };
        ammo=   "v105_Confetti_Parent_200mFuze";
        count=   150;
        tracersEvery=   5;
        deleteIfEmpty=   0;
        initSpeed=   300;
        mass=   25;
    };
    class v105_Confetti_Belt_100m: 200Rnd_65x39_cased_Box
    {
        scope=  2;
        scopeArsenal=   2;
        displayName=    "[105th] 150Rnd Belt W/ Tracers 100m";
        descriptionShort=   "Belt-fed munitions for the CQMG-99A, 100m fuze";
        class Library
        {
            libTextDesc = "Etched onto the belt: 'God help those who face the thunder that which hell fires forth.'";
        };
        ammo=   "v105_Confetti_Parent_100mFuze";
        count=   150;
        tracersEvery=   5;
        deleteIfEmpty=   0;
        initSpeed=   300;
        mass=   25;
    };
    class v105_Confetti_Belt_15m: 200Rnd_65x39_cased_Box
    {
        scope=  2;
        scopeArsenal=   2;
        displayName=    "[105th] 150Rnd Belt-T 15m";
        descriptionShort=   "Belt-fed munitions for the CQMG-99A, 15m fuze";
        class Library
        {
            libTextDesc = "Etched onto the belt: 'God help those who face the thunder that which hell fires forth.'";
        };
        ammo=   "v105_Confetti_Parent_15mFuze";
        count=   150;
        tracersEvery=   5;
        deleteIfEmpty=   0;
        initSpeed=   300;
        mass=   25;
    };
};
class BulletCore;
class B_408_Ball;
class G_40mm_HE;
class B_12Gauge_Pellets_Submunition;
class OPTRE_B_338_SP;
class OPTRE_B_762x51_UW;
class CfgAmmo
{
    class BulletCore;
    class BulletBase: BulletCore 
    {
        timeToLive=6;
    };
    class v105_Confetti_Sub: BulletBase
    {
        hit=   6;
        initSpeed=   345;
        caliber=  3;
        submunitionParentSpeedCoef= 1;
		tracersEvery=1;
        whistleonFire=  1;
        whistleDist=    2;
    };
    // NOTE: Velocity is 300m/s. It will take 1/3 of a second to travel 100 meters, 2/3 of a second to travel 200 meters, so on so forth.
    // A 2 second fuze means traveling 600 meters before dispersing.
    class v105_Confetti_Parent_200mFuze: OPTRE_B_338_SP
    {
        submunitionAmmo=   "v105_Confetti_Sub";
		submunitionConeType[]= {"poissondisccenter", 8};
		submunitionConeAngle= 0.5;
		triggerTime = 0.666666666666;
        tracersEvery=   5;
        whistleonFire=  1;
        whistleDist=    2;
        hit=    28;
        caliber=    2;
        typicalSpeed=   300;
    };
    class v105_Confetti_Parent_100mFuze: OPTRE_B_338_SP
    {
        submunitionAmmo=   "v105_Confetti_Sub";
		submunitionConeType[]= {"poissondisccenter", 8};
		submunitionConeAngle= 0.85;
		triggerTime = 0.333333333333;
        tracersEvery=   2;
        whistleonFire=  1;
        whistleDist=    2;
        hit=    28;
        caliber=    2;
        typicalSpeed=   300;
    };
    class v105_Confetti_Parent_15mFuze: OPTRE_B_338_SP
    {
        submunitionAmmo=   "v105_Confetti_Sub";
		submunitionConeType[]= {"poissondisccenter", 8};
		submunitionConeAngle= 0.85;
		triggerTime = 0.05;
        tracersEvery=   2;
        whistleonFire=  1;
        whistleDist=    2;
        hit=    28;
        caliber=    2;
        typicalSpeed=   300;
    };
    class v105_Whistler_40mm_HE:G_40mm_HE 
	{
        hit=    25;
        indirectHit=    35;
		indirectHitRange=   2.55;
		whistleDist=400;
		whistleOnFire=1;
		soundFly[]=
		{
			"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Whistle",
			1, // Volume %
			1, // Speed % 
			300 //Distance m
		};
	};
	class OPTRE_G_M9_Frag:GrenadeHand
    {
        model="\OPTRE_Weapons\explosives\m9_grenade.p3d";
		hit=25;
		indirectHit=15;
		indirectHitRange=2.75;
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
    };
    class v105_145x114_Ball:B_408_Ball 
	{
		caliber						= 10;
		hit 						= 40;
	};
	class v105_145x114_Tracer:B_408_Ball 
	{
		caliber						= 10;
		hit 						= 40;
		model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
    class v105_N12_UWDP_Ball:OPTRE_B_762x51_UW
    {
        caliber=    1;
        hit=    20;
        tracersEvery=   2;
        tracerEndTime=  30;
        waterFriction=  -0.014;
        effectFly=  "AmmoUnderwater";
    };
};
class cfgMagazineWells
{
	class CBA_40mm_M203
	{
		v105_grenades[]=
		{
			"v105_Whistler_Grenade",
			/*"3Rnd_UGL_8Gauge_Pellets",
			"3Rnd_UGL_8Gauge_Slugs",
			"3Rnd_UGL_8Gauge_Beanbags"*/
		};
	};
};