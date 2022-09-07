/* ----------------------------------------------------------------------------
Function: OPTRE_Fnc_SpawnHEVsFrigate

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

		[corvette1,[player1,player2]] call OPTRE_Fnc_SpawnHEVsFrigate;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */

params [
	["_ship",objNull,[objNull]],
	["_units",[],[[]]]
];

// prepare return information
private _hevArray = [];			
private _hevArrayPlayer = [];	
private _hevArrayAi = [];		
private _listOfPlayers = [];	 
private _listOfAI = []; 

// these are the possible vectorDir (relative to the ship's model) for the pods
/// they are (anatomically) left and right side of the ship respectively;
private _shipRelativeDirVectors = [[1,-4.37114e-008,0],[-1,1.19249e-008,0]];
private _shipRelativeUpVector = _ship vectorModelToWorld [0,0,1];
private _countHEVsRight = 0;
private _countHEVsLeft = 0;

{
	if (_forEachIndex > 48) then {
		["Too many units, you will have to wait for the next drop"] remoteExec ["hint", _unit];
	} else {
		if (alive _x) then {
			private _unit = _x;

			private _hev = "OPTRE_HEV" createVehicle [0,0,0];

			// copy cargo over from pod on ground
			private _copyCargo = _unit getVariable ["OPTRE_podCargo",[]];
			if (!(_copyCargo isEqualTo []) AND {!(_copyCargo isEqualTo _standardPodCargo)}) then {
				clearWeaponCargoGlobal _hev;
				clearMagazineCargoGlobal _hev;
				clearItemCargoGlobal _hev;
				clearBackpackCargoGlobal _hev;

				[_hev,_copyCargo] call OPTRE_fnc_addContainerCargo;
			};
	
			// getting which side of the frigate to spawn on based upon even and odd number in drop order
			// used a reverse operator "!" to keep things left/right when being selected from arrays
			private _leftOrRightOfShip = !((_forEachIndex mod 2) isEqualTo 0);
			private _shipSideOffset = [-50,50] select _leftOrRightOfShip;
			private _countOfSide = [_countHEVsLeft,_countHEVsRight] select _leftOrRightOfShip;

			_hev attachTo [_ship,[_shipSideOffset,-20 + (_countOfSide * 6),-14]];

			if (_leftOrRightOfShip) then {
				_countHEVsRight = _countHEVsRight + 1;
			} else {
				_countHEVsLeft = _countHEVsLeft + 1;				
			};


			// reTranslating the left or right relative vectors back to world based upon the current model
			private _vectorDirRelative = _ship vectorModelToWorld (_shipRelativeDirVectors select _leftOrRightOfShip);
			_hev setVectorDirAndUp [_vectorDirRelative,_shipRelativeUpVector];
			
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