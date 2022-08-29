/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	PreInit settings for Admin Expansion

	Parameter(s):
	NONE

	Returns:
	NONE
*/

[
    "v105_Admin_AdminList",
    "EDITBOX",
    ["Admin List","A list of the Steam64IDs for the admins"],
    "105th Admin",
    "[""76561198110027425""]",
    true,
    {
        params ["_value"];
        _array = parseSimpleArray _value;
        v105_Admin_ActiveAdminList = _array;
    }
] call CBA_fnc_addSetting;