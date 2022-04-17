// Public variables

v105_Enhanced_Zeus_Messages = [];


if(isServer) then {
    ["ace_unconscious", {_this call v105_Enhanced_fnc_DestroyEquipment;}] call CBA_fnc_addEventHandler;
};

if(hasInterface) then {
    [] call v105_Enhanced_fnc_DefaultKits;


    /*
        INACTIVE still in testing phase

    addMissionEventHandler ["HandleChatMessage", {_this spawn v105_Enhanced_fnc_ZeusMessage; (_this select 3);}];
    */
};