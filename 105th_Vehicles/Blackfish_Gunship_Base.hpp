
class VTOL_01_armed_base_F;
class B_T_VTOL_01_armed_F:VTOL_01_armed_base_F
{
    class Turrets:Turrets
    {
        class GunnerTurret_01; //Rotary cannon & 105mm
        class GunnerTurret_02; // 40mm 
    };
};

class v105_Stork_Armed: B_T_VTOL_01_armed_F
{
        side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FixedWing";
        dlc="105th";
        author="N-4 Logistics";
        displayName="D62/AG Stork";
        fuelCapacity=300;
        armor=120;
        ace_hellfire_addLaserDesignator = 1;
		weapons[]=
		{
			
			"HOW_Flares",
			"Laserdesignator_pilotCamera"

		};
		magazines[]=
		{
            "Laserbatteries",
			"HOW_320Rnd_Flare_Chaff_Magazine",
            "HOW_320Rnd_Flare_Chaff_Magazine",
            "HOW_320Rnd_Flare_Chaff_Magazine",
            "HOW_320Rnd_Flare_Chaff_Magazine",
			"HOW_320Rnd_Flare_Chaff_Magazine"
		};
        class Turrets:Turrets
        {
            class GunnerTurret_01:GunnerTurret_01
            {
                discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400,2700,3000,3300,3600,3900,4000,4500,5000};
                magazines[]=
				{
					"12Rnd_120mm_APFSDS_shells_Tracer_Red",
                    "30Rnd_120mm_HE_shells_Tracer_Red",
					"4000Rnd_20mm_Tracer_Red_shells"
				};
				weapons[]=
				{
					"HOW_cannon_120mm_AP",
                    "HOW_cannon_120mm_GP",
					"gatling_20mm_VTOL_01",
				};
                minElev=-28;
				maxElev=13;
				initElev=0;
				minTurn=60;
				maxTurn=130;
				initTurn=90;
            };
            class GunnerTurret_02:GunnerTurret_02
            {
                discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400,2700,3000,3300,3600,3900,4000,4500,5000};
                magazines[]=
				{
					"240Rnd_40mm_GPR_Tracer_Red_shells",
					"160Rnd_40mm_APFSDS_Tracer_Red_shells",
                    
                    "Laserbatteries"
				};
				weapons[]=
				{
					"autocannon_40mm_VTOL_01",
                    "Laserdesignator_mounted",
                    
				};
                minElev=-28;
				maxElev=13;
				initElev=0;
				minTurn=73;
				maxTurn=130;
				initTurn=90;
            };
        };






}; // end STORK