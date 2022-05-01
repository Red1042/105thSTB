params ["_displayOne","_variableName","_variableData","_otherVariableName","_otherVariableData","_blacklist","_regex"];

_listCtrl = (uiNamespace getVariable "v105_Admin_ViewUser_UI") displayCtrl _displayOne;
_index = lbCurSel _listCtrl;
if(_index == -1) exitWith {};
if(_blacklist) then {
    _listCtrl lbSetColor [_index,[1,0,0,1]];
} else {
    _listCtrl lbSetColor [_index,[0,1,0,1]];
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

[profileNamespace,[_variableName,_variableData]] remoteExec ["setVariable", 2];