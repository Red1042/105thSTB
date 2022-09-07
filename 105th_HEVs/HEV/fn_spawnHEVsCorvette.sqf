/* ----------------------------------------------------------------------------
Function: OPTRE_Fnc_SpawnHEVsCorvette

Description:
	Creates pods and moves the units in to the pods with a corresponding ship.
	
	Modifications: Adapted for use on dedicated servers, improved performance/readability

Parameters:

	0: _ship <OBJECT> - The ship to attach the pods to
	1: _units <ARRAY> - The units to teleport into the pods

Returns:
	_allHEVs <ARRAY> - contains information pertinent to OPTRE_Fnc_HEV
		- _hevArray <ARRAY> - All created HEVs (both AI & players)
		- _hevArrayPlayer <ARRAY> - All HEVs created for players
		- _hevArrayAi <ARRAY> - All HEVs created for AI
		- _listOfPlayers <ARRAY> - All players in the drop sequence
		- _listOfAI <ARRAY> - All AI in the drop sequence

Examples:
    (begin example)

		[corvette1,[player1,player2]] call OPTRE_Fnc_SpawnHEVsCorvette;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */

params [
	["_ship",objNull,[objNull]],
	["_units",[],[[]]]
];


// sets a position on the corvetter for the pod to be attached to relative to others already attached
private _fn_getRowPosition = {
	params [
		["_index",0,[1]]
	];
	
	// some pre-detemined position coordinates relaive to the corvette's center object.
	private _relativeRowPositions = [
		[-18.8252,8.86279,-0.748383],
		[-18.8252,-14.0374,-0.749481],
		[-18.8252,46.7913,-22.3492],
		[-18.8252,20.2451,-22.3492],
		[-18.8252,-2.65552,-0.748383],
		[-18.8252,33.3865,-22.3492]
	];

	if (_index < 8) exitWith {
		private _rowPositionStart = (_relativeRowPositions select 0) vectorAdd ([[(5 * _index),0,0],[0,0,0]] select (_index isEqualTo 0));
		
		_rowPositionStart
	};

	if (_index < 16 AND {_index >= 8}) exitWith {
		private _rowPositionStart = (_relativeRowPositions select 1) vectorAdd ([[(5 * (_index - 8)),0,0],[0,0,0]] select (_index isEqualTo 8));

		_rowPositionStart
	};

	if (_index < 24 AND {_index >= 16}) exitWith {
		private _rowPositionStart = (_relativeRowPositions select 2) vectorAdd ([[(5 * (_index - (8*2))),0,0],[0,0,0]] select (_index isEqualTo 16));

		_rowPositionStart
	};

	if (_index < 32 AND {_index >= 24}) exitWith {
		private _rowPositionStart = (_relativeRowPositions select 3) vectorAdd ([[(5 * (_index - (8*3))),0,0],[0,0,0]] select (_index isEqualTo 24));
		
		_rowPositionStart
	};

	if (_index < 40 AND {_index >= 32}) exitWith {
		private _rowPositionStart = (_relativeRowPositions select 4) vectorAdd ([[(5 * (_index - (8*4))),0,0],[0,0,0]] select (_index isEqualTo 32));
		
		_rowPositionStart
	};

	if (_index < 48 AND {_index >= 40}) exitWith {
		private _rowPositionStart = (_relativeRowPositions select 5) vectorAdd ([[(5 * (_index - (8*5))),0,0],[0,0,0]] select (_index isEqualTo 40));
		
		_rowPositionStart
	};
};

// prepare return information
private _hevArray = [];			
private _hevArrayPlayer = [];	
private _hevArrayAi = [];		
private _listOfPlayers = [];	 
private _listOfAI = []; 		

// used to properly set pod position on corvette
private _relativeVector = [[-8.74228e-008,-1,0],[0,0,1]];
// for comparison to copy cargo
private _standardPodCargo = [[["OPTRE_Biofoam"],[2]],[["OPTRE_ELB47_Strobe",1],["OPTRE_M8_Flare",1],["OPTRE_M8_Flare",1],["OPTRE_M8_Flare",1],["OPTRE_M8_Flare",1],["OPTRE_M2_Smoke_Purple",1],["OPTRE_M2_Smoke_Purple",1]],[],[]];
{
	// corvette only supports 48 drop positions
	if (_forEachIndex > 48) then {
		["Too many units, you will have to wait for the next drop"] remoteExec ["hint", _unit];
	} else {
		private _unit = _x;

		if (alive _unit) then {
			// create HEV
			private _hev = "OPTRE_HEV" createVehicle [0,0,0];

			// copy cargo over
			private _copyCargo = _unit getVariable ["OPTRE_podCargo",[]];

			if (!(_copyCargo isEqualTo []) AND {!(_copyCargo isEqualTo _standardPodCargo)}) then {
				clearWeaponCargoGlobal _hev;
				clearMagazineCargoGlobal _hev;
				clearItemCargoGlobal _hev;
				clearBackpackCargoGlobal _hev;

				[_hev,_copyCargo] call OPTRE_fnc_addContainerCargo;
			};

			// get relative position to attach pod to corvette
			private _posRelative = [_forEachIndex] call _fn_getRowPosition;

			// attach HEV to corvette
			// this positioning is to account for both water and land drops
			_hev setPosATL (ASLToATL (AGLToASL (_ship modelToWorldVisual _posRelative)));
			_hev setVectorDirAndUp [(_ship vectorModelToWorldVisual (_relativeVector select 0)),(_ship vectorModelToWorldVisual (_relativeVector select 1))];
			[_hev,_ship,true] call BIS_fnc_attachToRelative;
			
			_hev lock true;
			_hevArray pushBack _hev;
			
			// move the unit into their pod and make them invincible
			[_unit,_hev] remoteExecCall ["moveIngunner", _unit];
			[_unit,false] remoteExecCall ["allowDamage", _unit];

			// sort players and AI
			if (_unit in (call CBA_fnc_players)) then {
				[_unit,"INTERNAL"] remoteExec ["switchCamera", _unit];
				_listOfPlayers pushBack _unit;
				_hevArrayPlayer pushBack _hev;
				_hev setVariable ["OPTRE_PlayerControlled",true/*,[0,2] select isMultiplayer*/]; //May be uneccesary, need to test
			} else {
				_listOfAI pushBack _unit; 
				_hevArrayAi pushBack _hev;
			};		
		};
	};

} forEach _units;

[_hevArray,_hevArrayPlayer,_hevArrayAi,_listOfPlayers,_listOfAI]