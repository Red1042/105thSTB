// Public variables

v105_Admin_blacklistedMods = [];
v105_Admin_whitelistedMods = ["TFAR","Deniland","Jbad"];

v105_Admin_blacklistedItems = [];
v105_Admin_whitelistedItems = [];



if(hasInterface) then {
    [player] call v105_Admin_fnc_CheckMods;
};

/*
player addAction ["Test",{
    _name = (name player);
    [_name] spawn V105_Admin_fnc_ShowAdminViewUserUI;
}];
*/