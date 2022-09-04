private ["_listCtrl","_type","_blacklist","_variableName","_variableData","_otherVariableName","_otherVariableData","_regex","_foundOpposite"];
params ["_listCtrl","_type","_blacklist"];

_data = [_type,_blacklist] call V105_Admin_fnc_GetUniqueData;
if(_data isEqualTo -1) exitWith {systemChat "[105th Admin] An error occured";};
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