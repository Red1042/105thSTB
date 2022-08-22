/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Post-Init File for v105_Vehicles

	Parameter(s):
	NONE

	Returns:
	NONE
*/
#include "\a3\ui_f\hpp\defineDIKCodes.inc"
private ["_configs","_vehicle","_type","_icon","_liveriesData","_data","_types","_liveries","_className"];

if(isDedicated) exitWith {};

/*  Handle VehicleSpawner Data gathering */

_configs = "isClass (_x >> ""VehicleSpawnerInfo"") && getNumber(_x >> ""VehicleSpawnerInfo"" >> ""scope"") >= 1" configClasses (configFile >> "CfgVehicles");

v105_VehicleSpawnerData = createHashMap;
{
    _vehicle = getText(_x >> "VehicleSpawnerInfo" >> "vehicle");
    _type = getText(_x >> "VehicleSpawnerInfo" >> "type");
    _icon = "";
    if(isText (_x >> "VehicleSpawnerInfo" >> "icon")) then {
        _icon = getText(_x >> "VehicleSpawnerInfo" >> "icon");
    };
    _liveriesData = getArray(_x >> "VehicleSpawnerInfo" >> "liveries");
    _data = v105_VehicleSpawnerData getOrDefault [_vehicle, [[],[]]];
    _types = (_data select 0);
    _liveries = (_data select 1);
    _liveriesParsed = [];
    {
        _liveriesParsed pushBackUnique (parseSimpleArray _x);
    } forEach _liveriesData;
    if(_liveries isEqualTo []) then {
        _liveries append _liveriesParsed;
    };
    _className = [str(_x),27] call BIS_fnc_trimString;
    if(_liveries isEqualTo _liveriesParsed) then {
        _types pushBack [_type,_className];
    } else {
        _types pushBack [_type,_className,_liveriesParsed];
    };
    _data set [2,_icon];
    v105_VehicleSpawnerData set [_vehicle,_data];
} forEach _configs;

// TODo: Setup different Skins for Types if alternativeData is present



/*
    CBA Settings for 105th Vehicles
*/

["105th Vehicles", "v105_Vehicles_ThrustersUp", ["Thrusters Up", "Thrusters go up a tier (none > forward > afterburners)"], {
    private ["_vic"];
    _vic = (vehicle player);
    if((player != driver _vic) or !(alive _vic) or !(isEngineOn _vic) or  (((getPosATL _vic) select 2) < 1)) exitWith {};
    if(_vic == player) exitWith {};
    if((_vic getVariable ["OPTRE_Thruster_Usable",false]) and !(_vic getVariable ["OPTRE_Thruster_EngagedStatus",false]) and !(_vic getVariable ["OPTRE_Afterburners_EngagedStatus",false]) and (_vic getHitPointDamage "hithull" < 0.8)) exitWith {
        _vic spawn v105_Vehicles_fnc_engageForwardThrusters;
        if(_vic getVariable ["OPTRE_Afterburners_Usable",false]) then {
            _vic spawn V_FZ_fnc_ThrusterAnimate;
        };
    };
    if((_vic getVariable ["OPTRE_Afterburners_Usable",false]) and !(_vic getVariable ["OPTRE_Afterburners_EngagedStatus",false]) and (_vic getHitPointDamage "hithull" < 0.5)) exitWith {
        _vic spawn v105_Vehicles_fnc_engageAfterburners;
    };
}, {
}, [0xF4, [false, false, false]]] call CBA_fnc_addKeybind;

["105th Vehicles", "v105_Vehicles_ThrustersDown", ["Thrusters Down", "Thrusters go down a tier (afterburners > forward > none)"], {
    private ["_vic"];
    _vic = (vehicle player);
    if(_vic getVariable ["OPTRE_Afterburners_EngagedStatus",false]) exitWith {
        _vic spawn V_FZ_fnc_Afterburners900Disengage;
    };
    if(_vic getVariable ["OPTRE_Thruster_EngagedStatus",false]) exitWith {
        _vic spawn V_FZ_fnc_Thruster400Disengage;
        if(_vic getVariable ["OPTRE_Afterburners_Usable",false]) then {
            _vic spawn V_FZ_fnc_ThrusterDeAnimate;
        };
    };
}, {
}, [0xF3, [false, false, false]]] call CBA_fnc_addKeybind;

["105th Vehicles", "v105_Vehicles_AirBrakesHalf", ["Air Brakes (Half)", "Airbrake button until half speed"], {
    private ["_vic"];
    _vic = (vehicle player);
    if((player == driver _vic) AND (alive _vic) AND ((speed _vic) > 450)) then {
        _vic spawn V_FZ_fnc_HalfAirbrakeEngageFast;
        if(_vic getVariable ["OPTRE_Afterburners_Usable",false]) then {
            _vic spawn V_FZ_fnc_ThrusterDeAnimate;
        };
    };
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["105th Vehicles", "v105_Vehicles_AirBrakesFull", ["Air Brakes (Full)", "Airbrake button until below 100km/h"], {
    private ["_vic"];
    _vic = (vehicle player);
    if((player == driver _vic) AND (alive _vic) AND ((speed _vic) > 100)) then {
        _vic spawn V_FZ_fnc_FullAirbrakeEngageFast;
        if(_vic getVariable ["OPTRE_Afterburners_Usable",false]) then {
            _vic spawn V_FZ_fnc_ThrusterDeAnimate;
        };
    };
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;


["105th Vehicles", "v105_Vehicles_ManualFireToggle", ["Manual Fire (Toggle)", "Swap to either manual fire or not"], {
    private ["_vic"];
    _vic = (vehicle player);
    if(_vic == player) exitWith {};
    if(isManualFire _vic) then {
         player action ["MANUALFIRECANCEL", _vic];
         hint "MANUAL FIRE CANCELLED";
    } else {
         player action ["MANUALFIRE", _vic];
         hint "MANUAL FIRE ACTIVATED";
    };
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["105th Vehicles", "v105_Vehicles_OpenAMSMenu", ["Open AMS Menu", "Allows quick access to the AMS Menu"], {
    private ["_vic"];
    _vic = (vehicle player);
    if(_vic == player) exitWith {};
    if(!(player in _vic) or (speed _vic > 1)) exitWith {};
    _vic execVM "\FIR_AirWeaponSystem_US\Script\AMS\AMS_Lite\AMS_Lite_GUI_Open.sqf";
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;

["105th Vehicles", "v105_Vehicles_OpenI_TGT_System", ["Open I-TGT System", "Allows quick access to the I-TGT System"], {
    private ["_vic"];
    _vic = (vehicle player);
    if(_vic == player) exitWith {};
    if(!((driver _vic) isEqualTo player)) exitWith {};
    _vic execVM "\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf";
}, {
}, [nil, [false, false, false]]] call CBA_fnc_addKeybind;