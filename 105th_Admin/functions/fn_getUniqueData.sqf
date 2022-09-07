/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Gets the unique data for the specific type of data and returns it

	Parameter(s):
	_this select 0: STRING or NUMBER - the string name or assigned number of the type of data to get
	_this select 1: BOOL - if the action is to blacklist (TRUE) the selected data or whitelist (FALSE)

	Returns:
	ARRAY or NUMBER - the data returned in an array of format:
	    [
	        STRING - variableName,
	        ARRAY - variableData,
	        STRING - otherVariableName,
	        ARRAY - otherVariableData,
	        BOOL - toRegex
	    ]
	    alternatively it will return -1 if it fails to find data
*/

private ["_type","_blacklist","_variableName","_variableData","_otherVariableName","_otherVariableData"];
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