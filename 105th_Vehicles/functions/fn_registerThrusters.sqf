params ["_vic", "_thrusters", "_afterBurners"];

if((isNil "_vic")) exitWith {};
_vic setVariable ["OPTRE_Thruster_Usable",_thrusters];
_vic setVariable ["OPTRE_Afterburners_Usable",_afterBurners];

(_this select 0) addEventHandler ["Engine", {
    _this call V105_Vehicles_fnc_EngineOff;
}];