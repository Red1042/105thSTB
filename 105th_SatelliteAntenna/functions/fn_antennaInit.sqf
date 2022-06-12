private _antenna = createVehicle ["SatelliteAntenna_01_Black_F", player modelToWorld [0,2,0], [], 0];
[_antenna, true, [0, 2, 0], 90] call ace_dragging_fnc_setCarryable;
[player, _antenna] call ace_dragging_fnc_startCarry;

_action = ["Dismantle Antenna","Dismantle Antenna","",{deleteVehicle _target;},{true},{},[parameters], [0,0,0], 6] call ace_interact_menu_fnc_createAction;
[_antenna, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;








if(player getVariable["v105_SatelliteAntenna_Connected",false]) then {
    [_antenna,0,["ACE_MainActions","Disconnect from Antenna"]] call ace_interact_menu_fnc_removeActionFromObject;
    _action = ["Connect to Antenna","Connect to Antenna","",{hint "connected"; player setVariable ["v105_SatelliteAntenna_Connected",true];},{true},{},[parameters], [0,0,0], 6] call ace_interact_menu_fnc_createAction;
    [_antenna, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
} else {
    [_antenna,0,["ACE_MainActions","Connect to Antenna"]] call ace_interact_menu_fnc_removeActionFromObject;
    _action = ["Disconnect from Antenna","Disconnect from Antenna","",{hint "disconnect"; player setVariable ["v105_SatelliteAntenna_Connected",true];},{true},{},[parameters], [0,0,0], 6] call ace_interact_menu_fnc_createAction;
    [_antenna, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
}