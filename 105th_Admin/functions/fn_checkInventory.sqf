/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Checks the inventory of the selected target for any blacklisted items and informs the admins of such items

	Parameter(s):
	_this select 0: OBJECT - the target to check the inventory of

	Returns:
	NONE
*/

private ["_target","_detectedItemsString","_first","_first"];
params ["_target"];

_detectedItemsString = "";

_first = true;
{
    _item = _x;
    if(_item in v105_Admin_blacklistedItems) then {
        if(_first) then {
            _detectedItemsString = _detectedItemsString + " - " + _mod;
            _first = false;
        } else {
            _detectedItemsString = _detectedItemsString + "\n - " + _mod;
        };
    };
} forEach (_target call v105_Admin_fnc_CheckInventory select 0);

if(_detectedItemsString != "") then {
    [(format ["%1 has blacklisted items in kit:\n%2",(name _target),_detectedItemsString])] remoteExec ["v105_Admin_fnc_AdminHint",-2];
};