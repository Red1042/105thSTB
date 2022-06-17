private _antenna = createVehicle ["SatelliteAntenna_01_Black_F", player modelToWorld [0,2,0], [], 0];
[_antenna, true, [0, 2, 0], 90] call ace_dragging_fnc_setCarryable;
[player, _antenna] call ace_dragging_fnc_startCarry;

_antenna call v105_Antenna_fnc_handleConnection;