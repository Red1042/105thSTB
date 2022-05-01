// Public variables

/* Testing area */

//[] call V105_Admin_fnc_ShowBossBarUI;

/* Testing Area End */

v105_Admin_List = ["76561198110027425","76561198118936414"];

if(isServer) then {
    v105_Admin_blacklistedMods = profileNamespace getVariable ["v105_Admin_blacklistedMods", []];
    v105_Admin_whitelistedMods = profileNamespace getVariable ["v105_Admin_whitelistedMods", []];


    v105_Admin_blacklistedItems = profileNamespace getVariable ["v105_Admin_blacklistedItems", []];
    v105_Admin_whitelistedItems = profileNamespace getVariable ["v105_Admin_whitelistedItems", []];

    publicVariable "v105_Admin_blacklistedMods";
    publicVariable "v105_Admin_whitelistedMods";

    publicVariable "v105_Admin_blacklistedItems";
    publicVariable "v105_Admin_whitelistedItems";
};

if(hasInterface) then {
    [player] call v105_Admin_fnc_CheckMods;

    private _uid = getPlayerUID player;
    private _adminState = call BIS_fnc_admin;
    if(_uid in v105_Admin_List or _adminState != 0) then {
        _action = ["Open Admin Menu","Open Admin Menu","",{
            _name = (name player);
            [_name] spawn V105_Admin_fnc_ShowAdminViewUserUI;
        },{true}] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    };
};