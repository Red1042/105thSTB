/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_HEVBoosterDown

Description:
	Creates the shooting down effect for the HEV when dropping the pod.
    Also accelerates the pod.
    
    This is automatically called in the series of functions from "OPTRE_fnc_HEV".

Parameters:
	0: _hev <OBJECT> - The HEV being dropped.
    1: _hevArrayPlayer <ARRAY> - The list of player HEVs participating in drop. 
    2: _randomXYVelocity <NUMBER> - The deviation by which the pod should randomly drift on the horixontal axis
    3: _launchSpeed <NUMBER> - Downward velocity to start at. (negative numbers only)
    4: _listOfPlayers <ARRAY> - The list of players participating in drop.
    5: _hevDropArmtmosphereStartHeight <NUMBER> - The height at which re-entry effects will start.
    6: _ship <OBJECT> - The ship from which the pod dropped.
    7: _deleteShip <BOOL> - Should the ship be deleted after drop.
    8: _lastPod <OBJECT> - The last pod to be dropped from ship.
    9: _HEVLaunchNumber <NUMBER> - The unique drop number. (crucial to certain events to fire properly)

Returns:
	NOTHING

Examples:
    (begin example)

		[
            playerHEV_1,
            [playerHEV_1,playerHEV_2],
            2,
            -1,
            [player_1,player_2],
            3000,
            myShip,
            true,
            playerHEV_2,
            1
        ] call OPTRE_fnc_HEVBoosterDown;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
params [
    ["_hev",objNull,[objNull]],
    ["_hevArrayPlayer",[],[[]]],
    ["_randomXYVelocity",1,[1]],
    ["_launchSpeed",-1,[1]],
    ["_listOfPlayers",[],[[]]],
    ["_hevDropArmtmosphereStartHeight",3000,[1]],
    ["_ship",objNull,[objNull]],
    ["_deleteShip",true,[true]],
    ["_lastPod",objNull,[objNull]],
    ["_HEVLaunchNumber",1,[1]]
];

detach _hev;

playSound3D ["OPTRE_FunctionsLibrary\sound\PodDetach.ogg",_hev,false,getPosASL _hev,2,1,500];

private _light = "#lightpoint" createVehicle [0,0,0];
[0,_hev,_light] remoteExecCall ["OPTRE_fnc_PlayerHEVEffectsUpdate_Light", _listOfPlayers, false];

private _smoke = "#particlesource" createVehicle [0,0,0]; 
_smoke setParticleClass "Missile2";
_smoke attachto [_hev,[0,-0.2,0.6]];

private _boosterLights = [_smoke,_light];


if ((gunner _hev) in (call CBA_fnc_players)) then {
    [(random _randomXYVelocity),(random _randomXYVelocity),_launchSpeed,_hev,_hevDropArmtmosphereStartHeight] call OPTRE_fnc_PlayerHEVEffectsUpdate_BoasterDown;
} else {
    [_hev,[(random _randomXYVelocity),(random _randomXYVelocity),_launchSpeed]] remoteExecCall ["setVelocity",_hev];
};

if (!isNull _ship AND {_deleteShip} AND {_hev isEqualTo _lastPod}) then {
    [
        {
            params ["_HEVLaunchNumber"];

            private _deleteShipString = ["OPTRE_HEV_deleteShipEvent",str _HEVLaunchNumber] joinString "_";

            missionNamespace setVariable [_deleteShipString,true,[0,2] select isMultiplayer];
        },
        [_HEVLaunchNumber],
        10
    ] call CBA_fnc_waitAndExecute;
};


sleep 2;

_boosterLights apply {deleteVehicle _x};