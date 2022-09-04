/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_HEVAtmoEffects

Description:
	Creates the burning effect of atmospheric entry on a local machine. 
    Then remoteExec's "OPTRE_fnc_PlayerHEVEffectsUpdate_Light" on other players in drop to sync effect.
    
    This is automatically called in the series of functions from "OPTRE_fnc_HEV".

Parameters:
	0: _hev <OBJECT> - The HEV to play the effect on.
    1: _hevArrayPlayer <ARRAY> - The list of player HEVs participating in drop. 
    2: _listOfPlayers <ARRAY> - The list of players participating in drop.
    3: _hevDropArmtmosphereEndHeight <NUMBER> - The height at which effects will end.
    4: _hevDropArmtmosphereStartHeight <NUMBER> - The height at which effects will start.

Returns:
	NOTHING

Examples:
    (begin example)

		[playerHEV_1,[playerHEV_1,playerHEV_2],[player_1,player_2],2000,3000] call OPTRE_fnc_HEVAtmoEffects;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
params [
    ["_hev",objNull,[objNull]],
    ["_hevArrayPlayer",[],[[]]],
    ["_listOfPlayers",[],[[]]],
    ["_hevDropArmtmosphereEndHeight",2000,[1]],
    ["_hevDropArmtmosphereStartHeight",3000,[1]]
];

if (!alive _hev) exitWith {};

[	// waitUntil pod is below _hevDropArmtmosphereStartHeight
    {getPosATLVisual (_this select 0) select 2 < _this select 4},
    {
        params [
            ["_hev",objNull,[objNull]],
            ["_hevArrayPlayer",[],[[]]],
            ["_listOfPlayers",[],[[]]],
            ["_hevDropArmtmosphereEndHeight",2000,[1]],
            ["_hevDropArmtmosphereStartHeight",3000,[1]]
        ]; 

        private _light = "#lightpoint" createVehicle [0,0,0];
        // update effects for all players (local commands used)
        [1,_hev,_light] remoteExecCall ["OPTRE_fnc_PlayerHEVEffectsUpdate_Light",_listOfPlayers];
            
        private _fire = "#particlesource" createVehicle [0,0,0]; 
        _fire setParticleClass "IncinerateFire";
        _fire attachto [ _hev, [0,0,-2]];

        private _atmoEffects = [_fire,_light];

        if (_hev in _hevArrayPlayer AND {alive (gunner _hev)}) then { 
            [40, _hev] call OPTRE_fnc_PlayerHEVEffectsUpdate_ReEntrySounds; 
        };

        // waitUntil HEV is at _hevDropArmtmosphereEndHeight to delete
        [
            {getPosATLVisual (_this select 0) select 2 < _this select 1},
            {
                (_this select 2) apply {deleteVehicle _x};
            },
            [_hev,_hevDropArmtmosphereEndHeight,_atmoEffects],
            300
        ] call CBA_fnc_waitUntilAndExecute;
    },
    [_hev,_hevArrayPlayer,_listOfPlayers,_hevDropArmtmosphereEndHeight,_hevDropArmtmosphereStartHeight],
    300
] call CBA_fnc_waitUntilAndExecute;