	
	
	
	
	class magazine_Cannon_Phalanx_x1550;
	class HOW_URF_ABM_20MM_2000Rnd: magazine_Cannon_Phalanx_x1550
	{
		author						= "Howard";
		scope						= 1;
		scopeArsenal				= 1;
		initspeed 					= 1500;
		count						= 2000;
		ammo						= "B_35mm_AA"
	};
	//Stalker II
	class OPTRE_4Rnd_75mm_AP;
	class HOW_40Rnd_75mm_AP:OPTRE_4Rnd_75mm_AP
	{
		scope 						= 1;
		author						= "Howard";
		count						= 40;
	};
	class 12rnd_SPG9_HEAT;
	class HOW_15Rnd_50x137_HEAT:12rnd_SPG9_HEAT
	{
		scope 						= 1;
		author						= "Howard";
		count						= 15;
		ammo						="OPTRE_50x137_HEAT";
	};

	//v105_Whistler_40mm_HE ammo
	class 96Rnd_40mm_G_belt;
	class URF_96Rnd_40mm_G_Belt_Whistler:96Rnd_40mm_G_belt
	{
		author						= "Howard";
		ammo						="v105_Whistler_40mm_HE";
	};
	// shotgun turret
	class OPTRE_12Rnd_8Gauge_Tungsten_Buckshot;
	class URF_30Rnd_8Gauge_Tungsten_Buckshot:OPTRE_12Rnd_8Gauge_Tungsten_Buckshot
	{
		scope 						= 1;
		count						= 30;
		ammo						="OPTRE_B_8Gauge_Tungsten_Buckshot";
	};