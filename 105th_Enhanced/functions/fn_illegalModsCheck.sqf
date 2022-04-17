/*
    Illegal Mod Check

    This checks for illegal mods within players game and records it, then informs the relevant players.
*/

sleep 5;

if(isClass(configfile >> "CfgPatches" >> "PA_arsenal")) then {
    (name (player) + " has Personal Arsenal loaded") remoteExec ["hint", -clientOwner];
};