/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_playerHEVEffectsupdate_PlayTones

Description:
	Plays tones just before HEV is boosted downard.
	Should only be executed on players, not AI.

Parameters:
	0: _launchIndex <NUMBER> - The HEV's index in the launch order (0 being the first).
	1: _launchDelay <NUMBER> - The delay time before drop sequence starts.
	2: _gunner <OBJECT> - The HEV's gunner (pilot).

Returns:
	NOTHING

Examples:
    (begin example)

		[0,30,myODST] call OPTRE_fnc_playerHEVEffectsupdate_PlayTones;

    (end)

Author:
	Ansible2 // Cipher
---------------------------------------------------------------------------- */
if !(hasInterface) exitWith {};

params [
	["_launchIndex",0,[1]], // at what place in the launch order
	["_launchDelay",30,[1]],
	["_gunner",objNull,[objNull]]
];

if !(alive _gunner) exitWith {};

private _launchIndexDelay = (_launchIndex * 0.35) + 1;

[
	{
		params [
			["_gunner",objNull,[objNull]]
		];

		if (alive _gunner AND {!(isNull objectParent _gunner)}) then {
			playsound "OPTRE_Sounds_HEV_Tone";
		};
	},	
	[_gunner], 
	(_launchDelay - 3) + _launchIndexDelay
] call CBA_fnc_waitAndExecute;

if (_launchDelay > 20) then {

	[
		{
			params [
				["_gunner",objNull,[objNull]]
			];

			if (alive _gunner AND {!(isNull objectParent _gunner)}) then {
				playsound "OPTRE_Sounds_HEV_EngineStart";
			};
		},	
		[_gunner], 
		(_launchDelay - 20) + _launchIndexDelay
	] call CBA_fnc_waitAndExecute;	
};