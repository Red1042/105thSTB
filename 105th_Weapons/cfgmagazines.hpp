

// 15 Round Magazines
// DMR AMMO 

class OPTRE_15Rnd_762x51_Mag;

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
	



//
//
//						RIFLE AMMO BELOW
//
//

class OPTRE_60Rnd_762x51_Mag;
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


// M247
class OPTRE_100Rnd_762x51_Box;
class OPTRE_100Rnd_762x51_Box_Tracer;
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