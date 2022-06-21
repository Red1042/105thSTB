params ["_vic", "_engineState"];

if(not _engineState) then {
    _vic setVariable ["OPTRE_Thruster_EngagedStatus",false];
    _vic setVariable ["OPTRE_Afterburners_EngagedStatus",false];
};