/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_PlayerHEVEffectsUpdate_Light

Description:
	Plays an alarm sound when HEV is rapidly approaching the ground.
	
	Modifications: Adapted for use on dedicated servers, patched several bugs, improved performance/readability

Parameters:
	0: _lightEffect <NUMBER> - Denotes the type of effect.
		0 = initial thruster effect when boosting down (Depreciated).
		1 = reEntry fire effect.
	1: _hev <OBJECT> - The HEV to affect.
	2: _light <OBJECT> - The actual light (particle) object.

Returns:
	NOTHING

Examples:
    (begin example)

		[myLightEffectType,myHEV,myParticleObject] call OPTRE_fnc_PlayerHEVEffectsUpdate_Light;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
params[
	["_lightEffect",1,[1]],
	["_hev",objNull,[objNull]],
	["_light",objNull,[objNull]]
];

switch _lightEffect do {
	case 0: {											// initial thruster effect
		_light setLightBrightness 0.3;
		_light setLightAmbient[1, 1, 0.5];
		_light setLightColor[0, 0, 1];
		_light attachTo [_hev, [0,1.5,2.5]];	
		_light setLightFlareSize 1;
		_light setLightDayLight true;
	};
	case 1: {										 	// REentry fire effect
		_light setLightBrightness 1;
		_light setLightAmbient[.9, .9, 0.3];
		_light setLightColor[.9, .9, 0.3];
		_light attachTo [_hev, [0,1.5,-2]];
		_light setLightDayLight true;		
	};
};