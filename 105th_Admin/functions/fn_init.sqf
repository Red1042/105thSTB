// Public variables

/* Testing area */

//[] call V105_Admin_fnc_ShowBossBarUI;

/* Testing Area End */
//                  Luke                Nungester           Varner              Howard
v105_Admin_List = ["76561198110027425","76561198118936414","76561198122766627","76561198082045004"];

if(isServer) then {
    v105_Admin_inidbi = ["new", "v105_Utility"] call OO_INIDBI;
    v105_Admin_blacklistedMods = ["read",["v105_Admin","blacklistedMods", []]] call v105_Admin_inidbi;
    v105_Admin_whitelistedMods = ["read",["v105_Admin","whitelistedMods", []]] call v105_Admin_inidbi;


    v105_Admin_blacklistedItems = ["read",["v105_Admin","blacklistedItems", []]] call v105_Admin_inidbi;
    v105_Admin_whitelistedItems = ["read",["v105_Admin","whitelistedItems", []]] call v105_Admin_inidbi;

    publicVariable "v105_Admin_blacklistedMods";
    publicVariable "v105_Admin_whitelistedMods";

    publicVariable "v105_Admin_blacklistedItems";
    publicVariable "v105_Admin_whitelistedItems";
};

if(hasInterface) then {
    [player] call v105_Admin_fnc_CheckMods;

    ace_arsenal_blacklist_handler = ["ace_arsenal_displayClosed", {
        [player] call v105_Admin_fnc_CheckInventory;
    }] call CBA_fnc_addEventHandler;

    private _uid = getPlayerUID player;
    if(_uid in v105_Admin_List) then {
        _action = ["Open Admin Menu","Open Admin Menu","",{
            _name = (name player);
            [_name] spawn V105_Admin_fnc_ShowAdminViewUserUI;
        },{true}] call ace_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    };
};