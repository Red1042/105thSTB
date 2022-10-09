/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Pre-Init file for the HUD Expansion

	Parameter(s):
	NONE

	Returns:
	NONE
*/

[
    "v105_HUD_Setting_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["HUD Enabled","Hard server override for HUD"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "105th HUD", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        params ["_value"];
        v105_HUD_Enabled = _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;