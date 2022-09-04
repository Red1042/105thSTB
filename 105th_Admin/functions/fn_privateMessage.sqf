/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Send a private message to the selected target with the provided message

	Parameter(s):
	_this select 0: STRING - TargetName | Either a players name, [Global] for all players or [Admins] for all admins
	_this select 1: STRING - The message to send to the target/targets

	Returns:
	NONE
*/

private ["_targetName","_message"];
params ["_targetName","_message"];
if(_message isEqualTo "") exitWith {};
_message = (parseText ("[Admin Message]<br />" + _message));

if(_targetName isEqualTo "[Admins]") exitWith {
    [_message] remoteExec ["v105_Admin_fnc_AdminHint"];
};

if(_targetName isEqualTo "[Global]") exitWith {
    [_message] remoteExec ["hint"];
};

{
    if((name _x) isEqualTo _targetName) then {
        [_message] remoteExec ["hint",_x];
    };
} forEach allPlayers;