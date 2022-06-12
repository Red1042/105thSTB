params ["_antenna"]

if(player getVariable["v105_SatelliteAntenna_Connected",false]) then {
    [_antenna,0,["ACE_MainActions","Disconnect from Antenna"]] call ace_interact_menu_fnc_removeActionFromObject;
    _action = ["Connect to Antenna","Connect to Antenna","",{player setVariable ["v105_SatelliteAntenna_Connected",true];},{true},{},[parameters], [0,0,0], 6] call ace_interact_menu_fnc_createAction;
    [_antenna, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
} else {
    [_antenna,0,["ACE_MainActions","Connect to Antenna"]] call ace_interact_menu_fnc_removeActionFromObject;
    _action = ["Disconnect from Antenna","Disconnect from Antenna","",{player setVariable ["v105_SatelliteAntenna_Connected",true];},{true},{},[parameters], [0,0,0], 6] call ace_interact_menu_fnc_createAction;
    [_antenna, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
}