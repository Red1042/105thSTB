class OPTRE_B_145x114_APFSDS;
class URFmod_B_145x114_SS:OPTRE_B_145x114_APFSDS
{
	caliber						= 10;
	hit 						= 40;
	typicalSpeed				= 250;
	timeToLive					= 4;
};
class F_40mm_White;
class v105_URF_Howler_40mm:F_40mm_White
	{
        intensity = 0; // vanilla: 10000
        timeToLive = 30; 
		whistleDist=400;
		whistleOnFire=1;
		coefgravity=0.50
		soundFly[]=
		{
			"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Whistle",
			1.0, // Volume %
			0.55, // Speed % 
			450 //Distance m
		};
	};
class v105_URF_40mm_BlinderFlare:F_40mm_White
{
	intensity = 1500000; // vanilla: 10000
    timeToLive = 60; 
	flareSize = 15;
};