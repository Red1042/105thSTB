/* ----------------------------------------------------------------------------
Function: OPTRE_Fnc_SpawnFakeHEVRoom

Description:
	Used in 3den editor to create a ready set of drop pods.

	Modifications:
		- Optimized for multiplayer
		- Improved readability
		- Added comments

Parameters:

	0: _positionStart <OBJECT, ARRAY> - The position to create the pods at. Will be based off the logic position if used from the module
	1: _direction <NUMBER> - The direction for the console to face
	2: _numberOfColumns <NUMBER> - How many columns of pods to make
	3: _numberPerRow <NUMBER> - How many rows of pods to make
	4: _variablePrefix <STRING> - A prefix to use for giving the pods variable names. Should be unique to every use of the module/script to avoid errors
	5: _moduleLogic <OBJECT> - The module to be deleted, is not needed for runing the script without module

Returns:
	_result <ARRAY> - contains the created pods and console in last entry of the array

Examples:
    (begin example)

		[[0,0,0],0,1,6,"pod_"] call OPTRE_Fnc_SpawnFakeHEVRoom;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */

if (!is3DEN) exitWith {
	["Only to be executed in 3den editor"] call BIS_fnc_error;
};

params [
	"_positionStart",
	["_direction",0,[123]],
	["_numberOfColumns",4,[123]],
	["_numberPerRow",6,[123]],
	["_variablePrefix","OPTRE_pod",[""]],
	["_moduleLogic",objNull,[objNull]]
];

if (_variablePrefix isEqualTo "") exitWith {
	["Given variable name is empty string"] call BIS_fnc_error;
};

if !(isNull _moduleLogic) then {
	delete3DENEntities [_moduleLogic];
};

private _rowNumber = _numberPerRow / 2;
private _dirLeft = (_direction + 90); 
private _dirRight = (_direction - 90); 

private _createdPods = [];
private _podNamesArray = "["; // this is so the array can be one single string to add to the init field

private _podNumber = 1; 

for "_y" from 0 to _numberOfColumns do {
	
	private _rowCenterPosition = _positionStart getPos [_y*9, _dirLeft];
	private _startPosLeft = _rowCenterPosition getPos [3,_dirLeft];
	private _startPosRight = _rowCenterPosition getPos [3,_dirRight];
		
	private _row = _y; 
	
	for "_i" from 1 to _rowNumber do {
		private _position = _startPosLeft getPos [_i*3,_direction];
		private _podVariableName = [_variablePrefix, str _podNumber] joinString "";
		_podNumber = _podNumber + 1;
		private _pod = create3DENEntity ["Object","OPTRE_HEV",_position,true];
		_pod set3DENAttribute ["Rotation",[0,0,_dirRight]]; 
		_pod set3DENAttribute ["Name",_podVariableName];
		_podNamesArray = _podNamesArray + _podVariableName + ",";
		_pod set3DENAttribute ["init",
			"if (isServer) then {
				this animate [""main_door_rotation"",1]; 
				this animate [""left_door_rotation"",1]; 
				this animate [""right_door_rotation"",1];
			};"
		];
		_createdPods pushBack _pod;
	};
	for "_i" from 1 to _rowNumber do {
		private _position = _startPosRight getPos [_i*3,_direction];
		private _podVariableName = [_variablePrefix, str _podNumber] joinString "";
		_podNumber = _podNumber + 1;
		private _pod = create3DENEntity ["Object","OPTRE_HEV",_position,true];
		_pod set3DENAttribute ["Rotation",[0,0,_dirLeft]]; 
		_pod set3DENAttribute ["Name",_podVariableName];
		_podNamesArray = _podNamesArray + _podVariableName + ",";
		_pod set3DENAttribute ["init",
			"if (isServer) then {
				this animate [""main_door_rotation"",1]; 
				this animate [""left_door_rotation"",1]; 
				this animate [""right_door_rotation"",1];
			};"
		];
		_createdPods pushBack _pod;
	};
};


private _relPoint1 = ((_numberOfColumns / 2) * 9);
private _consolePos = _positionStart getPos [_relPoint1,_dirLeft];
private _console = create3DENEntity ["Object","OPTRE_RS_ConsoleDoor",_consolePos];
_console set3DENAttribute ["Rotation",[0,0,_dirLeft]];

_podNamesArray = [_podNamesArray,","] call CBA_fnc_rightTrim;
private _initString = ["this setVariable [""OPTRE_PodsLinkedToConsole"",",_podNamesArray,"]];"] joinString "";
_console set3DENAttribute ["Init",
	"
		this addAction [""OPEN CONTROL MENU"",OPTRE_Fnc_Menu,[""UNSC_HEV"",""UNSC_DATABASE""]]; 
		this setVariable [""OPTRE_PodsLaunchIn"",-1];
	" +	_initString
];

_result = (_createdPods + [_console]);

_result