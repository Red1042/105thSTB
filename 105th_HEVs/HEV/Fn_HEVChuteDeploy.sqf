/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_HEVChuteDeploy

Description:
	Creates the shooting down effect for the HEV when dropping the pod.
    Also accelerates the pod.
    
    This is automatically called in the series of functions from "OPTRE_fnc_HEV".

Parameters:
	0: _hev <OBJECT> - The HEV being dropped.
    1: _hevArrayPlayer <ARRAY> - The list of player HEVs participating in drop. 
    2: _chuteDeployHeight <NUMBER> - The height to deploy chute and slow pod.
    3: _chuteDetachHeight <NUMBER> - The height to detach chute.
    4: _deleteChutesOnDetach <BOOL> - Automatically delete chutes after detach?
    5: _lastPod <OBJECT> - The last pod to be dropped from ship.
    
    6: _handleLandingEventString <STRING> - A unique string for this drop's handle landing.
        This is automatically permuted up to function chain as "OPTRE_HEV_handleLanding" + (the launch number)
    
    7: _chuteArrayEventString <STRING> - Another unique string like _handleLandingEventString.
        This is "OPTRE_HEV_chuteArray" + (the launch number).

Returns:
	NOTHING

Examples:
    (begin example)

		[
            playerHEV_1,
            [playerHEV_1,playerHEV_2],
            1000,
            500,
            true,
            playerHEV_2,
            "OPTRE_HEV_handleLanding1",
            "OPTRE_HEV_chuteArray1"
        ] call OPTRE_fnc_HEVChuteDeploy;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
params [
    ["_hev",objNull,[objNull]],
	["_hevArrayPlayer",[],[[]]],
	["_chuteDeployHeight",1000,[1]],
	["_chuteDetachHeight",500,[1]],
	["_deleteChutesOnDetach",false,[true]],
	["_lastPod",objNull,[objNull]],
    ["_handleLandingEventString","",[""]],
    ["_HEVLaunchNumbertring","",[""]],
    ["_chuteArrayEventString","",[""]]
];

private _chute = "OPTRE_HEV_Chute" createVehicle [0,0,0];

//chute Deploy
[
    {(getPosATLVisual (_this select 0) select 2) <= (_this select 3)},
    {
        params [
            ["_hev",objNull,[objNull]],
            ["_hevArrayPlayer",[],[[]]],
            ["_chute",objNull,[objNull]],
            ["_chuteDeployHeight",1000,[1]],
            ["_lastPod",objNull,[objNull]],
            ["_handleLandingEventString","",[""]]
        ];

        _chute attachTo [_hev, [0,-0.2,1.961]];;

        if (_hev in _hevArrayPlayer) then {
            [_chute,_hev] call OPTRE_fnc_PlayerHEVEffectsUpdate_Chute;

            [_hev] call OPTRE_fnc_PlayerHEVEffectsUpdate_GroundAlarm;
        };

        [_hev,[0,0,45]] remoteExecCall ["setVelocityModelSpace",_hev];

        _chute animateSource ["wing1_rotation",0];
        _chute animateSource ["wing2_rotation",0];
        _chute animateSource ["wing3_rotation",0];
        _chute animateSource ["wing4_rotation",0];

        _chute disableCollisionWith _hev;
        
        if (_hev isEqualTo _lastPod) then {
            [_handleLandingEventString] call CBA_fnc_serverEvent;
        };    
    
    },
    [_hev,_hevArrayPlayer,_chute,_chuteDeployHeight,_lastPod,_handleLandingEventString],
    300
] call CBA_fnc_waitUntilAndExecute;

//chute detach
[
    {(getPosATLVisual (_this select 0) select 2) <= (_this select 2)},
        
    {
        params [
            ["_hev",objNull,[objNull]],
            ["_chute",objNull,[objNull]],
            ["_chuteDetachHeight",500,[1]],
            ["_deleteChutesOnDetach",false,[true]],
            ["_lastPod",objNull,[objNull]],
            ["_HEVLaunchNumbertring","",[""]],
            ["_chuteArrayEventString","",[""]]
        ];

        detach _chute;

        // setVelocity is a local command, remoteExec ensures jetison
        [_chute,[(random 2.5),(random 2.5),20]] remoteExecCall ["setVelocity",_chute];			

        // either delete on detach or add to server deletion pile
        if (_deleteChutesOnDetach) then {
            [
                {
                    deleteVehicle (_this select 0);
                },
                [_chute],
                1
            ] call CBA_fnc_waitAndExecute;
        } else {
            [_chuteArrayEventString,[_chute]] call CBA_fnc_serverEvent;
        };

        
        if (_hev isEqualTo _lastPod) then {
            private _deleteReadyString = ["OPTRE_HEV_deleteReady",_HEVLaunchNumbertring] joinString "_";
            missionNamespace setVariable [_deleteReadyString,true,[0,2] select isMultiplayer];
        };
    },
    [_hev,_chute,_chuteDetachHeight,_deleteChutesOnDetach,_lastPod,_HEVLaunchNumbertring,_chuteArrayEventString],
    300
] call CBA_fnc_waitUntilAndExecute;