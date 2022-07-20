 	class VES_UH144;
    class VES_UH144_A;
    class VES_UH144S;
    class VES_UH144S_A;
    
    class v105_UH144: VES_UH144
    {
        side=1;
		scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 
		armor = 150;
        dlc="105th";
		author="N-4 Logistics";
        displayName="UH-144 Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
		};
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";

				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";

				userActionID=53;
			};
        };
    };
    class v105_UH144_MED: VES_UH144
    {
        side=1;
		scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		threat[]={0,0,0};
		armor = 150;
        dlc="105th";
		author="N-4 Logistics";
        displayName="UH-144-MED Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
		{
			"105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
			"105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
		};
        class EventHandlers
        {
            class v105_Pod_EH
            {
                init = "0 = _this spawn V_FZ_fnc_FalconAddMedicalPod";
            };
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
        };
		class TransportItems
		{
			#include "cfg\SupplyPods\ResupplyPodMedical.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
        class Turrets: Turrets{};
        TransportSoldier=0;
        cargoAction[]=
		{
		//	"passenger_apc_narrow_generic03",
		//	"passenger_apc_generic02",
		//	"passenger_apc_narrow_generic01",
		//	"passenger_apc_generic04",
		//	"passenger_apc_narrow_generic02"
		};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
        };
    };
    class v105_UH144S: VES_UH144S
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		armor = 150;
        dlc="105th";
        author="N-4 Logistics";
        displayName="UH-144S Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};
        };
    };
    class v105_UH144_A: VES_UH144_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
        armor = 150;
        dlc="105th";
        author="N-4 Logistics";
        displayName="UH-144 Falcon (Armed) [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";

				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";

				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";

				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";

				userActionID=53;
			};
        };
    };
    class v105_UH144S_A: VES_UH144S_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		 armor = 150;

        dlc="105th";
        author="N-4 Logistics";
        displayName="UH-144S Falcon (Armed) [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";

				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";

				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";

				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";

				userActionID=53;
			};
        };
    };


    class v105_UH144S_AM: VES_UH144S_A
    {
        side=1;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";


        dlc="105th";
        author="N-4 Logistics";
        displayName="UH-144S-GL Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[]=
		{
			"CMFlareLauncher",
			"v105_FalconGL"
		};
		magazines[]=
		{
			"HOW_50Rnd_82mm_shells","HOW_50Rnd_82mm_shells",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";

				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";

				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";

				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";

				userActionID=53;
			};
        };
    };


	class v105_UH144S_ARC: VES_UH144S_A
    {
        side=1;
		scope=2;
        scopeCurator = 2;
        editorCategory="HOW_EdCat_105th";
        editorSubcategory="HOW_105th_EdSubCat_FalcHorn";
		armor = 150;

        dlc="105th";
        author="N-4 Logistics";
        displayName="UH-144S-RC Falcon [Navy]";
        fuelCapacity=200;
		fuelConsumptionRate=0.03;
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
		class EventHandlers
		{
			class v105_RegisterThrusters_EH
			{
			    init = "[(_this select 0),true,false] call V105_Vehicles_fnc_RegisterThrusters;";
			};
		};
		class TransportItems
		{
			#include "cfg\VehicleGearFalcon.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		weapons[]=
		{
			"CMFlareLauncher",
			"gatling_20mm"
		};
		magazines[]=
		{
			"1000Rnd_20mm_shells",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
        class UserActions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast;";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";

				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#F28D00'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast;";
				textToolTip="<t color='#F28D00'>Engage Airbrakes (Half)";

				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn v105_Vehicles_fnc_engageForwardThrusters;";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage;";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				
				userActionID=53;
			};  
        };
    };
/*
    class v105_UH144S_JLonger_ARC:v105_UH144S_ARC
    {
        author="Longer, Vespade";
        displayName="UH-144S-RC Falcon [Longer]";
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_Longer_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
    };
    class v105_UH144S_JCollins_ARC:v105_UH144S_ARC
    {
        scope=1;
        scopeCurator=1;
        author="Collins, Vespade";
        displayName="UH-144S-RC Falcon [Collins]";
        hiddenSelectionsTextures[]=
        {
            "105th_Vehicles\textures\Falcon\v105_Falcon_Collins_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_A_Collins_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_T_co.paa",
            "105th_Vehicles\textures\Falcon\v105_Falcon_S_co.paa"
        };
    };
*/