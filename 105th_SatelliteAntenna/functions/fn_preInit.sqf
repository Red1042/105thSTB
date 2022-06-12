/*
    PreInit settings for Satellite Antenna Expansion
*/

[
    "v105_SatelliteAntenna_Setting_Range_Multiplier", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Satellite Antenna Range Multiplier","Change range multiplier for antenna"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "105th Utility", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    true, // data for this setting
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        params ["_value"];
        v105_SatelliteAntenna_Range_Multiplier = _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;