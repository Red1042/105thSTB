params ["_targetName","_text"];
if(_text isEqualTo "") exitWith {};
_text = (parseText ("[Admin Message]<br />" + _text));

if(_targetName isEqualTo "[Admins]") exitWith {
    [_text] remoteExec ["v105_Admin_fnc_AdminHint"];
};

if(_targetName isEqualTo "[Global]") exitWith {
    [_text] remoteExec ["hint"];
};

{
    if((name _x) isEqualTo _targetName) then {
        [_text] remoteExec ["hint",_x];
    };
} forEach allPlayers;