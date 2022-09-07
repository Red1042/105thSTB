/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_PlayerHEVEffectsUpdate_ReEntrySounds

Description:
	Starts reEntry sounds and then loops in engine hum while drop is in progress.
	Eventually kills the sound with a smooth transition once the stop height is reached

	Modifications: Adapted for use on dedicated servers, patched several bugs, improved performance/readability, moved into unscheduled environment,
		added engine hum and developed loop kill.

Parameters:
	0: _stopSoundHeight <NUMBER> - At what height (ATL) will the sound loops cease.
		Put this a good bit above the terrain for the best natural effect. (default 40)
	1: _hev <OBJECT> - The HEV whose gunner we will play effects to.

Returns:
	NOTHING

Examples:
    (begin example)

		[40,myHEV] call OPTRE_fnc_PlayerHEVEffectsUpdate_ReEntrySounds;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
if !(hasInterface) exitWith {};

params [
	["_stopSoundHeight",40,[1]],
	["_hev",objNull,[objNull]]
];

if (typeOf _hev != "OPTRE_HEV" OR {!(alive (gunner _hev))}) exitWith {};

playSound "OPTRE_Sounds_ReEntryBuildUp";

[
	{playSound "OPTRE_sounds_HEV_interiorDropLoop";},
	0.75,
	[_stopSoundHeight,_hev],
	{},
	{},
	{
		_stopSoundHeight = (_this getVariable "params") select 0;
		_hev = (_this getVariable "params") select 1;

		(alive (gunner _hev)) AND {(getPosATLVisual _hev) select 2 > _stopSoundHeight}
	},
	{
		_stopSoundHeight = (_this getVariable "params") select 0;
		_hev = (_this getVariable "params") select 1;

		((!alive (gunner _hev)) OR ((getPosATLVisual _hev) select 2) < _stopSoundHeight)		
	}
] call CBA_fnc_createPerFrameHandlerObject;
