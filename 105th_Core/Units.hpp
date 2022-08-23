class O_Pilot_F;
class O_Pilot_F_OCimport_01 : O_Pilot_F { scope = 0; class EventHandlers; };
class O_Pilot_F_OCimport_02 : O_Pilot_F_OCimport_01 { class EventHandlers; };

class O_crew_F;
class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

class v105_URFArmy_Pilot_01: O_Pilot_F_OCimport_02 {
    author = "S-4 Logistics";
    scope = 2;
    scopeCurator = 0; // Make it so they aren't in the zeus menu
    side = 0;
    displayName = "Pilot";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "OPTRE_Ins_ER_uniform_GAgreen";

    linkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST","OPTRE_FC_VX19_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};
    respawnlinkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST","OPTRE_FC_VX19_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"};

    weapons[] = {"OPTRE_M6D"};
    respawnWeapons[] = {"OPTRE_M6D"};

    magazines[] = {"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};

    backpack = "B_AssaultPack_khk";

    ALiVE_orbatCreator_loadout[] = {{},{},{"OPTRE_M6D","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_12Rnd_127x40_Mag",12},{},""},{"OPTRE_Ins_ER_uniform_GAgreen",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2},{"OPTRE_12Rnd_127x40_Mag",1,12}}},{"LM_OPCAN_ACTV_CGC_VEST",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_12Rnd_127x40_Mag",10,12}}},{"B_AssaultPack_khk",{{"ToolKit",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1}}},"OPTRE_FC_VX19_Helmet","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_CAMSNI"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };
    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
};

class v105_URFArmy_Crewman_01: O_crew_F_OCimport_02 {
    author = "S-4 Logistics";
    scope = 2;
    scopeCurator = 0; // Make it so they aren't in the zeus menu
    side = 0;
    displayName = "Crewman";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

    linkedItems[] = {"LM_OPCAN_FRI_Vest","H_Tank_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LM_OPCAN_FRI_Vest","H_Tank_black_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"OPTRE_M7","OPTRE_M6G"};
    respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G"};

    magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag"};
    respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"OPTRE_M7","ACE_muzzle_mzls_B","","OPTRE_M393_EOTECH",{"OPTRE_60Rnd_5x23mm_Mag",60},{},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_FRI_Vest",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"Laserbatteries",1,1},{"OPTRE_60Rnd_5x23mm_Mag",6,60},{"OPTRE_8Rnd_127x40_Mag",3,8}}},{"B_AssaultPack_blk",{{"ToolKit",1},{"ACE_EntrenchingTool",1},{"ACE_EarPlugs",1}}},"H_Tank_black_F","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };
    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
};
