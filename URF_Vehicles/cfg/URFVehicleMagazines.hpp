	
	
	
	
	class magazine_Cannon_Phalanx_x1550;
	class HOW_URF_ABM_20MM_2000Rnd: magazine_Cannon_Phalanx_x1550
	{
		author						= "Howard";
		scope						= 2;
		scopeArsenal				= 1;
		initspeed 					= 1500;
		count						= 2000;
		ammo						= "B_35mm_AA"
	};
	//Stalker II
	class OPTRE_4Rnd_75mm_AP;
	class HOW_40Rnd_75mm_AP:OPTRE_4Rnd_75mm_AP
	{
		scope 						= 2;
		author						= "Howard";
		count						= 40;
	};
	class 12rnd_SPG9_HEAT;
	class HOW_15Rnd_50x137_HEAT:12rnd_SPG9_HEAT
	{
		scope 						= 2;
		author						= "Howard";
		count						= 15;
		ammo						="OPTRE_50x137_HEAT";
	};