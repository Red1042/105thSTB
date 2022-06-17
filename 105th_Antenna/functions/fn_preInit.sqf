/*
    PreInit settings for Antenna Expansion (Satellite)
*/

[
    "v105_Antenna_Setting_Range_Multiplier", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Satellite Radio Antenna Range Multiplier","Change range multiplier for antenna"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "105th Utility", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [2,10,4,0], // data for this setting
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        params ["_value"];
        v105_Antenna_Range_Multiplier = _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;