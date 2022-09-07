/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_HEVRoomDynamicSetupGrabUnits

Description:
	Initiates drop sequence for HEVs from the (in game) menu dialog. This is not the module.
	This is what is executed when the launch button is pressed.

	See lines 126 - 132 for some notes about adding frigate support
	
	Modifications: Optimized code, updated commands, changed for support of Frigate and Corvette, removed manual control selection,
		added comments on how/where this is executed (see below function for further details),
		fixed sound on dedicated servers, fixed icons on dedicated servers, you get the idea...

Parameters:
	0: _menuInputValues <ARRAY> - The values that were selected from the drop menu

	1: _console <NUMBER> - The control panel

Returns:
	Nothing

Examples:
    (begin example)

		[myMenuInputValuesArray,myConsole] call OPTRE_fnc_HEVRoomDynamicSetupGrabUnits;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */

params [
	["_menuInputValues",[],[[]]],
	["_console",objNull,[objNull]]
];

// if cooldown in progress	
if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) isEqualTo -2) exitWith {
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", _console,false, getPosATL _console, 0.5, 1, 300];
};  

// if count down in progress
if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) >  -1) exitWith {
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\checkpoint_not_clear.wss", _console,false, getPosATL _console, 0.5, 1, 300];
}; 


_console setVariable ["OPTRE_PodsLaunchIn",30,true];

// play 3d countdown sound from control panel when launch initiated	
While {(_console getVariable ["OPTRE_PodsLaunchIn",-1]) > 0} do {
	private _number = _console getVariable ["OPTRE_PodsLaunchIn",-1];
	_console setVariable ["OPTRE_PodsLaunchIn",(_number-1),true];
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\timer.wss", _console,false, getPosATL _console, 0.5, 1, 300];
	sleep 1; 
};

if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) isEqualTo -1) exitWith {
	playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console, false, getPosATL _console, 0.5, 1, 300];
};


if ((_console getVariable ["OPTRE_PodsLaunchIn",-1]) isEqualTo 0) then {
	
	private _linkedPods = _console getVariable ["OPTRE_PodsLinkedToConsole",[]];


	// animate doors close
	_linkedPods apply {
		private _HEV = _x;

		[_HEV,true] remoteExec ["lock", _HEV, false];

		if (_HEV animationPhase "main_door_rotation" != 0) then {
			_HEV animate ["main_door_rotation",0]; 
		};

		if (_HEV animationPhase "left_door_rotation" != 0) then {
			_HEV animate ["left_door_rotation",0]; 
		};

		if (_HEV animationPhase "right_door_rotation" != 0) then {
			_HEV animate ["right_door_rotation",0];
		};
	};

		
	sleep 2;


	private _units = [];

	// start loading screen effect and push all units in the pods into _units array
	_linkedPods apply {
		private _gunner = gunner _x;
		if (alive _gunner) then {
			_units pushBack _gunner; 
			if (_gunner in allPlayers) then {
				[999,["OPTRE_LoadScreen", "PLAIN"]] remoteExec ["cutRsc", _gunner];
			};
		};
	};


	sleep 3;


	// save pod cargo, move units out of pods that are on the ground to be teleported to new ones in the sky
	private _consolePosition = getPosATL _console;
	private _randomOffset = 0;
	_units apply {
		private _unit = _x;
		private _podCargo = [objectParent _unit] call OPTRE_fnc_getContainerCargo;

		if !(_podCargo isEqualTo []) then {
			_unit setVariable ["OPTRE_podCargo",_podCargo];
		};

		// teleport players out of their pods so they can be put in the new ones
		// this is done around the console just in case something goes wrong
		_randomOffset = random 2;
		// moveOut has issues alone when the units are in a group, hence the setPosATL
		// there are also issues using these over the network so remoteExec'd on local machine 
		[_unit] remoteExecCall ["moveOut",_unit];
		[_unit,(_consolePosition vectorAdd [_randomOffset,_randomOffset,0])] remoteExecCall ["setPosATL",_unit];
	};


	// if there are units that dropped then cooldown, else don't
	if (count _units > 0) then {
		_menuInputValues set [1, _units];
		
		// number values from the HEV panel need to be translated into strings
		private _deploymentType = _menuInputValues select 2;
		switch (_deploymentType) do {
			case 0: {_menuInputValues set [2,"corvette"];};
			case 1: {_menuInputValues set [2,"frigate"];};
		};

		// setting delete chutes on detach value to a bool instead of number
		if ((_menuInputValues select 12) isEqualTo 0) then {
			_menuInputValues set [12,true];
		} else {
			_menuInputValues set [12,false];
		};

		// using direct call to ensure unscheduled at start
		{_menuInputValues call OPTRE_fnc_HEV;} call CBA_fnc_directCall;
		_console setVariable ["OPTRE_PodsLaunchIn",-2,true];

		// launch cooldown
		[	
			{
				params [
					["_linkedPods",[],[[]]],
					["_console",objNull,[objNull]]
				];

				// animate doors open
				_linkedPods apply {
					private _HEV = _x;

					[_HEV,false] remoteExec ["lock", _HEV, false];

					if (_HEV animationPhase "main_door_rotation" != 1) then {
						_HEV animate ["main_door_rotation",1]; 
					};

					if (_HEV animationPhase "left_door_rotation" != 1) then {
						_HEV animate ["left_door_rotation",1]; 
					};

					if (_HEV animationPhase "right_door_rotation" != 1) then {
						_HEV animate ["right_door_rotation",1];
					};
				};

				playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console,false, getPosATL _console, 0.5, 1, 300];

				_console setVariable ["OPTRE_PodsLaunchIn",-1,true];
			},
			[_linkedPods,_console],
			60
		] call CBA_fnc_waitAndExecute;
	} else {
		playSound3d ["a3\missions_f_beta\data\sounds\firing_drills\drill_finish.wss", _console,false, getPosATL _console, 0.5, 1, 300];

		// animate doors open
		_linkedPods apply {
			private _HEV = _x;

			[_HEV,false] remoteExec ["lock", _HEV, false];

			if (_HEV animationPhase "main_door_rotation" != 1) then {
				_HEV animate ["main_door_rotation",1]; 
			};

			if (_HEV animationPhase "left_door_rotation" != 1) then {
				_HEV animate ["left_door_rotation",1]; 
			};

			if (_HEV animationPhase "right_door_rotation" != 1) then {
				_HEV animate ["right_door_rotation",1];
			};
		};

		_console setVariable ["OPTRE_PodsLaunchIn",-1,true];
	};		
};


// Further modification note on where and how this is executed due to it being buried
/*-------------------------------------------------------------------
	remoteExec'd onto server directly from "OPTRE_UNSCMENU_RscButton_1602" which is located under: configFile >> "OPTRE_HEVPanel" >> "controls" >> "OPTRE_UNSCMENU_RscButton_1602"
	This control is from OPTRE_Module.pbo\config.bin

	syntax:

	onButtonClick = "
	if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {
		disableSerialization; 
		_dialog = findDisplay 5600;
		_10 = (_dialog displayCtrl 10);
		_11 = (_dialog displayCtrl 11);
		_12 = (_dialog displayCtrl 12);
		_13 = (_dialog displayCtrl 13);
		_14 = (_dialog displayCtrl 14);
		_15 = (_dialog displayCtrl 15);
		_16 = (_dialog displayCtrl 16);

		0 = [
				[
					(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'),
					[],
					'Frigate Lowering Arm',
					45,
					0.1,
					-1,
					(_16 lbValue (lbCurSel _16)),
					(_10 lbValue (lbCurSel _10)),
					(_11 lbValue (lbCurSel _11)),
					(_12 lbValue (lbCurSel _12)),
					(_13 lbValue (lbCurSel _13)),
					(_14 lbValue (lbCurSel _14)),
					(_15 lbValue (lbCurSel _15)),
					true,
					false,
					600
				],
				OPTRE_CurrentConsole
			] remoteExec [""OPTRE_Fnc_HEVRoomDynamicSetupGrabUnits"", 2, false];} else {playSound 'FD_CP_Not_Clear_F';
	};";

-------------------------------------------------------------------------*/