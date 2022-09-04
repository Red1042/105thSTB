/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_playerHEVEffectsupdate_GroundAlarm

Description:
	Plays an alarm sound when HEV is rapidly approaching the ground.

Parameters:
	0: _hev <OBJECT> - The HEV to affect.

Returns:
	NOTHING

Examples:
    (begin example)

		[myHEV] call OPTRE_fnc_playerHEVEffectsupdate_GroundAlarm;

    (end)

Author:
	Ansible2 // Cipher
---------------------------------------------------------------------------- */
if !(hasInterface) exitWith {};

params [
	["_hev",objNull,[objNull]]
];

private _gunner = gunner _hev;

if (isNull _gunner OR {!alive _gunner} OR {!(_gunner in (call CBA_fnc_players))}) exitWith {};

[
	{(getPosATLVisual (_this select 0) select 2) <= 250},
	{
		playsound "OPTRE_Sounds_HEV_GroundAlarm";
	},
	[_hev],
	300
] call CBA_fnc_waitUntilAndExecute; 