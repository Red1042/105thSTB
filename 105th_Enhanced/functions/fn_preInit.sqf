/*
    INACTIVE FOR NOW

[
    "v105_IllegalMods", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    "Illegal Mods List", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "105th Admin", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    "[""Personal Arsenal"",""PA_arsenal""],[""Another One"",""ANOTHER_one""]", // data for this setting
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {
        params ["_value"];
        v105_IllegalModsList = call compile _value;
    } // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
*/