params ["_type","_blacklist"];

if(_type isEqualTo "Mods" or _type isEqualTo 0) exitWith {
    if(_blacklist) then {
        _variableName = "v105_Admin_blacklistedMods";
        _variableData = v105_Admin_blacklistedMods;
        _otherVariableName = "v105_Admin_whitelistedMods";
        _otherVariableData = v105_Admin_whitelistedMods;
    } else {
        _variableName = "v105_Admin_whitelistedMods";
        _variableData = v105_Admin_whitelistedMods;
        _otherVariableName = "v105_Admin_blacklistedMods";
        _otherVariableData = v105_Admin_blacklistedMods;
    };
    [_variableName,_variableData,_otherVariableName,_otherVariableData,false]
};

if(_type isEqualTo "Items" or _type isEqualTo 1) exitWith {
    if(_blacklist) then {
        _variableName = "v105_Admin_blacklistedItems";
        _variableData = v105_Admin_blacklistedItems;
        _otherVariableName = "v105_Admin_whitelistedItems";
        _otherVariableData = v105_Admin_whitelistedItems;
    } else {
        _variableName = "v105_Admin_whitelistedItems";
        _variableData = v105_Admin_whitelistedItems;
        _otherVariableName = "v105_Admin_blacklistedItems";
        _otherVariableData = v105_Admin_blacklistedItems;
    };
    [_variableName,_variableData,_otherVariableName,_otherVariableData,true]
};

-1