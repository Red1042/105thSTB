/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_createCorvette

Description:
	Creates a (lite) corvette at the requested position

Parameters:
	0: _spawnPosition <ARRAY or OBJECT> - The position (ATL) of where you want the corvette to spawn

Returns:
	_corvetteObjects <ARRAY> - The OBJECTS that make up the corvette

Examples:
    (begin example)

		[(getPosATL player) vectorAdd [0,0,100]] call OPTRE_fnc_createCorvette;

    (end)

Author:
	Ansible2 // Cipher
---------------------------------------------------------------------------- */
params [
	["_spawnPosition",[0,0,0],[[],objNull]]
];

if (_spawnPosition isEqualType objNull AND {isNull _spawnPosition}) exitWith {
	"_spawnPosition isNull" call BIS_fnc_error;
	[]
};

if (_spawnPosition isEqualTo []) exitWith {
	"_spawnPosition is empty array" call BIS_fnc_error;
	[]
};

if (_spawnPosition isEqualType objNull) then {
	_spawnPosition = getPosATL _spawnPosition;
};

private _corvetteInfo = [
	["OPTRE_tail",[0,0,-9.60278],[[0,1,0],[0,0,1]]],
	["OPTRE_engine_left",[-30.4727,3.19775,-9.59546],[[0,1,0],[0,0,1]]],
	["OPTRE_center",[0,47.0559,-9.60315],[[0,1,0],[0,0,1]]],
	["OPTRE_bridge",[-0.0151367,41.7659,-9.60638],[[0,1,0],[0,0,1]]],
	["OPTRE_center_nose",[0,86.6682,-9.60181],[[0,1,0],[0,0,1]]],
	["OPTRE_nose",[-0.0200195,125.304,-9.59991],[[0,1,0],[0,0,1]]],
	["OPTRE_engine_right",[30.4927,3.19775,-9.59546],[[0,1,0],[0,0,1]]]
];

private _corvetteObjects = [];
private "_corvetteCenter";
{
	_x params [
		["_type","",[""]],
		["_posRelative",[],[[]]],
		["_vectorsRelative",[],[[]]]
	];

	private _piece = createVehicle [_type, [0,0,0], [], 0, "CAN_COLLIDE"];
	_corvetteObjects pushBack _piece;
	
	if (_forEachIndex isEqualTo 0) then {
		_corvetteCenter = _piece;
		_piece setPosATL _spawnPosition;
		_piece setVectorDirAndUp _vectorsRelative;
	} else {
		// used to make the positions the same over water and land
		_piece setPosATL (ASLToATL (AGLToASL (_corvetteCenter modelToWorldVisual _posRelative)));
		_piece setVectorDirAndUp [(_corvetteCenter vectorModelToWorldVisual (_vectorsRelative select 0)),(_corvetteCenter vectorModelToWorldVisual (_vectorsRelative select 1))];
	};

} forEach _corvetteInfo;

_corvetteObjects