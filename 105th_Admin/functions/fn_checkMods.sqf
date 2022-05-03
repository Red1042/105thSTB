params ["_target"];

_mods = [];
_detectedModsString = "";

_first = true;
{
    _mod = _x select 0;
    _mod = _mod regexReplace ["@",""];
    if(_x select 2) then {continue;};
    _mods pushBack _mod;
    if(_mod in v105_Admin_blacklistedMods) then {
        if(_first) then {
            _detectedModsString = _detectedModsString + " - " + _mod;
            _first = false;
        } else {
            _detectedModsString = _detectedModsString + "\n - " + _mod;
        };
    };
} forEach getLoadedModsInfo;

if(_detectedModsString != "") then {
    [(format ["%1 has blacklisted mods loaded:\n%2",(name _target),_detectedModsString])] remoteExec ["v105_Admin_fnc_AdminHint",-2];
};

_mods = _mods call BIS_fnc_sortAlphabetically;
_target setVariable ["activeMods",_mods];