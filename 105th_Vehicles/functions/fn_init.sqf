#include "\a3\ui_f\hpp\defineDIKCodes.inc"

/*
    Init settings for Vehicles Expansion
*/


["105th Vehicles", "v105_Vehicles_ThrustersUp", ["Thrusters Up", "Thrusters go up a tier (none > forward > afterburners)"], {
    _vic = (vehicle player);
    if((player != driver _vic) or !(alive _vic) or !(isEngineOn _vic) or  (((getPosATL _vic) select 2) < 1)) exitWith {};
    if(_vic == player) exitWith {};
    if((_vic getVariable ["OPTRE_Thruster_Usable",false]) and !(_vic getVariable ["OPTRE_Thruster_EngagedStatus",false]) and !(_vic getVariable ["OPTRE_Afterburners_EngagedStatus",false])) exitWith {
        _vic spawn v105_Vehicles_fnc_engageForwardThrusters;
        if(_vic getVariable ["OPTRE_Afterburners_Usable",false]) then {
            _vic spawn V_FZ_fnc_ThrusterAnimate;
        };
    };
    if((_vic getVariable ["OPTRE_Afterburners_Usable",false]) and !(_vic getVariable ["OPTRE_Afterburners_EngagedStatus",false])) exitWith {
        _vic spawn v105_Vehicles_fnc_engageAfterburners;
    };
}, {
}, [0xF4, [false, false, false]]] call CBA_fnc_addKeybind;

["105th Vehicles", "v105_Vehicles_ThrustersDown", ["Thrusters Down", "Thrusters go down a tier (afterburners > forward > none)"], {
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