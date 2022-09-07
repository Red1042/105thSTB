/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_PlayerHEVEffectsUpdate_BoasterDown

Description:
	Handles the playing of drop sounds to the player, adds camera shake.
	This is local to a player and only should be executed on players not AI HEVs

	Modifications: Optimized function, moved into unscheduled environment, reworked eventHandlers, fixed bugs

Parameters:
	0: _randomXVelocity <NUMBER> - The maximum X deviation of velocity.
    1: _randomYVelocity <NUMBER> - The maximum Y deviation of velocity.
	2: _launchSpeed <NUMBER> - The downward starting velocity of the HEV (negative numbers only).
	3: _hev <OBJECT> - The HEV to affect the changes on.
    4: _hevDropArmtmosphereStartHeight <NUMBER> - The height at which the HEV will play its enter atmo effects (ATL).

Returns:
	NOTHING

Examples:
    (begin example)

		[1,1,-1,myHEV,3000] call OPTRE_fnc_PlayerHEVEffectsUpdate_BoasterDown;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
if !(hasInterface) exitWith {};

params [
	["_randomXVelocity",1,[1]],
	["_randomYVelocity",1,[1]],
	["_launchSpeed",-1,[1]],
	["_hev",objNull,[objNull]],
	["_hevDropArmtmosphereStartHeight",3000,[1]]
];

if (typeOf _hev != "OPTRE_HEV") exitWith {};

detach _hev;

[_hev,[_randomXVelocity,_randomYVelocity,_launchSpeed]] remoteExecCall ["setVelocity",_hev];

playSound "OPTRE_Sounds_DetachOLD";

resetCamShake;
addCamShake [21, 6, 31];
addCamShake [11, 16, 32];

playSound ["OPTRE_Sounds_Engine",true];																									

// atmo entry camera shake (needs to be migrated to a better spot in main script)
[
	{(getPosATLVisual (_this select 0)) select 2 < (_this select 1)},
	{
		addCamShake [1, 999, 11];
	},
	[_hev,_hevDropArmtmosphereStartHeight],
	300
] call CBA_fnc_waitUntilAndExecute;

// this logic is used to play the wind sound using say2D so that the logic can be deleted at anytime, stopping the sound
private _logicCenter = createCenter sideLogic;
private _logicGroup = createGroup _logicCenter;
private _logic = _logicGroup createUnit ["Logic", [0,0,0], [], 0, "NONE"];
_logic attachTo [_hev,[0,0,0]];

[
	{	((_this getVariable "params") select 2) say2D "OPTRE_Sounds_WindLoopNewLong";	},
	
	1,
	
	[_hev,_hevDropArmtmosphereStartHeight,_logic],
	
	{	((_this getVariable "params") select 2) say2D "OPTRE_Sounds_WindLoopNewLong";	},
	
	{	deleteVehicle ((_this getVariable "params") select 2);	},
	
	{
		_hev = (_this getVariable "params") select 0;
		_hevDropArmtmosphereStartHeight = (_this getVariable "params") select 1;

		(	(getPosATLVisual _hev) select 2 < _hevDropArmtmosphereStartHeight	)
	},
	
	{
		_hev = (_this getVariable "params") select 0;

		(	!alive (gunner _hev) OR {(getPosATL _hev) select 2 < 20} OR {(velocity _hev) select 2 isEqualTo 0}	)
	}

] call CBA_fnc_createPerFrameHandlerObject;