/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_PlayerHEVEffectsUpdate_Chute

Description:
	Adds detach sound and camera shake for players. Does not need to be exec'd on AI.

	Modifications: Adapted for use on dedicated servers, patched several bugs, improved performance/readability

Parameters:
	0: _hev <OBJECT> - The HEV to update.
    1: _chute <OBJECT> - The Chute attached to the HEV.

Returns:
	NOTHING

Examples:
    (begin example)

		[myHEV,myHEVsChute] call OPTRE_fnc_PlayerHEVEffectsUpdate_Chute;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */

if (!hasInterface) exitWith {};

params [
	["_chute",objNull,[objNull]],
	["_hev",objNull,[objNull]]
];

if (typeOf _hev != "OPTRE_HEV") exitWith {};

_hev disableCollisionWith _chute;

playSound "OPTRE_Sounds_HEV_Chute";
addCamShake [20, 3, 20];