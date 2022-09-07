/*
    PreInit settings for JumpPack Expansion
*/

[
    "v105_JumpPack_Setting_Enabled", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["JumpPacks Enabled","Hard admin override for JumpPacks"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "105th Utility", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        params ["_value"];
        v105_JumpPack_Enabled = _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;