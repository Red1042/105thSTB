params["_antenna"];
player setVariable ["tf_sendingDistanceMultiplicator", v105_Antenna_Range_Multiplier, true];

while{player getVariable["v105_Antenna_Connected",false] and (_antenna distance player) < 25} do {
    sleep 1;
};
player setVariable ["tf_sendingDistanceMultiplicator", 1, true];
if(player getVariable["v105_Antenna_Connected",false]) then { // When it just disconnects due to range limit
    player setVariable ["v105_Antenna_Connected",false];
    _antenna call v105_Antenna_fnc_handleConnection;
};