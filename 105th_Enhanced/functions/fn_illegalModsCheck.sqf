/*
    Illegal Mod Check

    This checks for illegal mods within players game and records it, then informs the relevant players.
*/

sleep 5;

{
    if(isClass(configfile >> "CfgPatches" >> _x select 1)) then {
        _formatted = format ["%1 has %2 loaded",name player,_x select 0];
        (_formatted) remoteExec ["hint", -clientOwner];
    };
} forEach v105_IllegalModsList;