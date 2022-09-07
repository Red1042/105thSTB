/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Processes the button press of either blacklist/whitelist button for 105th Admin and adds the selected data to the appropriate list

	Parameter(s):
	_this select 0: CONTROL - the control of the list from the admin menu that contains the data
	_this select 1: STRING or NUMBER - the string name or assigned number of the type of data to process
	_this select 2: BOOL - if the action is to blacklist (TRUE) the selected data or whitelist (FALSE)

	Returns:
	NONE
*/

private ["_listCtrl","_type","_blacklist","_variableName","_variableData","_otherVariableName","_otherVariableData","_regex","_foundOpposite"];
params ["_listCtrl","_type","_blacklist"];

_data = [_type,_blacklist] call V105_Admin_fnc_GetUniqueData;
if(_data isEqualTo -1) exitWith {systemChat "[Admin Menu] Error #01";};
_variableName = _data select 0;
_variableData = _data select 1;
_otherVariableName = _data select 2;
_otherVariableData = _data select 3;
_regex = _data select 4;

v105_Admin_Change = true;
_index = lbCurSel _listCtrl;
if(_index == -1) exitWith {};

if(_blacklist) then {
    _listCtrl lbSetColor [_index,[0.8,0,0,1]];
} else {
    _listCtrl lbSetColor [_index,[0,0.8,0,1]];
};

_data = (_listCtrl lbText _index);

if(_regex) then {
    _data = (_data regexReplace [" \[[0-9][0-9]]",""]) regexReplace [" \[[0-9]]",""];
};

_variableData pushBackUnique _data;
_foundOpposite = _otherVariableData find _data;
if(_foundOpposite != -1) then {
    _otherVariableData deleteAt _foundOpposite;
    publicVariable _otherVariableName;
    [profileNamespace,[_otherVariableName,_otherVariableData]] remoteExec ["setVariable", 2];
};

publicVariable _variableName;

_listCtrl lbSetCurSel (_index + 1);

[profileNamespace,[_variableName,_variableData]] remoteExec ["setVariable", 2];