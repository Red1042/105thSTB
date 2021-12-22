class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_SL_F;
    class O_Soldier_SL_F_OCimport_01 : O_Soldier_SL_F { scope = 0; class EventHandlers; };
    class O_Soldier_SL_F_OCimport_02 : O_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_TL_F;
    class O_Soldier_TL_F_OCimport_01 : O_Soldier_TL_F { scope = 0; class EventHandlers; };
    class O_Soldier_TL_F_OCimport_02 : O_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class O_officer_F;
    class O_officer_F_OCimport_01 : O_officer_F { scope = 0; class EventHandlers; };
    class O_officer_F_OCimport_02 : O_officer_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_AR_F;
    class O_Soldier_AR_F_OCimport_01 : O_Soldier_AR_F { scope = 0; class EventHandlers; };
    class O_Soldier_AR_F_OCimport_02 : O_Soldier_AR_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_GL_F;
    class O_Soldier_GL_F_OCimport_01 : O_Soldier_GL_F { scope = 0; class EventHandlers; };
    class O_Soldier_GL_F_OCimport_02 : O_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class O_Pilot_F;
    class O_Pilot_F_OCimport_01 : O_Pilot_F { scope = 0; class EventHandlers; };
    class O_Pilot_F_OCimport_02 : O_Pilot_F_OCimport_01 { class EventHandlers; };

    class O_crew_F;
    class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
    class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };

    class O_Sharpshooter_F;
    class O_Sharpshooter_F_OCimport_01 : O_Sharpshooter_F { scope = 0; class EventHandlers; };
    class O_Sharpshooter_F_OCimport_02 : O_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class O_Soldier_LAT_F;
    class O_Soldier_LAT_F_OCimport_01 : O_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class O_Soldier_LAT_F_OCimport_02 : O_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class O_recon_TL_F;
    class O_recon_TL_F_OCimport_01 : O_recon_TL_F { scope = 0; class EventHandlers; };
    class O_recon_TL_F_OCimport_02 : O_recon_TL_F_OCimport_01 { class EventHandlers; };

    class O_sniper_F;
    class O_sniper_F_OCimport_01 : O_sniper_F { scope = 0; class EventHandlers; };
    class O_sniper_F_OCimport_02 : O_sniper_F_OCimport_01 { class EventHandlers; };

    class OPTRE_Ins_BJ_Soldier_URB_TeamLeader;
    class OPTRE_Ins_BJ_Soldier_URB_TeamLeader_OCimport_01 : OPTRE_Ins_BJ_Soldier_URB_TeamLeader { scope = 0; class EventHandlers; };
    class OPTRE_Ins_BJ_Soldier_URB_TeamLeader_OCimport_02 : OPTRE_Ins_BJ_Soldier_URB_TeamLeader_OCimport_01 { class EventHandlers; };

    class OPTRE_ferret_02;
    class OPTRE_ferret_02_OCimport_01 : OPTRE_ferret_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_ferret_02_OCimport_02 : OPTRE_ferret_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class OPTRE_scorpionins_02;
    class OPTRE_scorpionins_02_OCimport_01 : OPTRE_scorpionins_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_scorpionins_02_OCimport_02 : OPTRE_scorpionins_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret1;
            class CargoTurret2;
            class CargoTurret3;
            class CargoTurret4;
            class CargoTurret5;
            class CargoTurret6;
            class CargoTurret7;
            class CargoTurret8;
        };
    };

    class OPTRE_M12_FAV_ins;
    class OPTRE_M12_FAV_ins_OCimport_01 : OPTRE_M12_FAV_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M12_FAV_ins_OCimport_02 : OPTRE_M12_FAV_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class OPTRE_M12_LRV_ins;
    class OPTRE_M12_LRV_ins_OCimport_01 : OPTRE_M12_LRV_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M12_LRV_ins_OCimport_02 : OPTRE_M12_LRV_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class MainTurret;
        };
    };

    class OPTRE_M12A1_LRV_ins;
    class OPTRE_M12A1_LRV_ins_OCimport_01 : OPTRE_M12A1_LRV_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M12A1_LRV_ins_OCimport_02 : OPTRE_M12A1_LRV_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class MainTurret;
        };
    };

    class O_G_Mortar_01_F;
    class O_G_Mortar_01_F_OCimport_01 : O_G_Mortar_01_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Mortar_01_F_OCimport_02 : O_G_Mortar_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_Truck_02_covered_F;
    class O_Truck_02_covered_F_OCimport_01 : O_Truck_02_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Truck_02_covered_F_OCimport_02 : O_Truck_02_covered_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class O_Truck_02_transport_F;
    class O_Truck_02_transport_F_OCimport_01 : O_Truck_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Truck_02_transport_F_OCimport_02 : O_Truck_02_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class O_MBT_04_cannon_F;
    class O_MBT_04_cannon_F_OCimport_01 : O_MBT_04_cannon_F { scope = 0; class EventHandlers; class Turrets; };
    class O_MBT_04_cannon_F_OCimport_02 : O_MBT_04_cannon_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class I_Truck_02_MRL_F;
    class I_Truck_02_MRL_F_OCimport_01 : I_Truck_02_MRL_F { scope = 0; class EventHandlers; class Turrets; };
    class I_Truck_02_MRL_F_OCimport_02 : I_Truck_02_MRL_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_G_Boat_Transport_01_F;
    class O_G_Boat_Transport_01_F_OCimport_01 : O_G_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Boat_Transport_01_F_OCimport_02 : O_G_Boat_Transport_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class optre_catfish_mg_f;
    class optre_catfish_mg_f_OCimport_01 : optre_catfish_mg_f { scope = 0; class EventHandlers; class Turrets; };
    class optre_catfish_mg_f_OCimport_02 : optre_catfish_mg_f_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class MainTurret;
        };
    };

    class OPTRE_M914_RV_ins;
    class OPTRE_M914_RV_ins_OCimport_01 : OPTRE_M914_RV_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M914_RV_ins_OCimport_02 : OPTRE_M914_RV_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
        };
    };

    class OPTRE_M12_ins_APC;
    class OPTRE_M12_ins_APC_OCimport_01 : OPTRE_M12_ins_APC { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M12_ins_APC_OCimport_02 : OPTRE_M12_ins_APC_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class CargoTurret_02;
        };
    };

    class OPTRE_M12R_AA_ins;
    class OPTRE_M12R_AA_ins_OCimport_01 : OPTRE_M12R_AA_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M12R_AA_ins_OCimport_02 : OPTRE_M12R_AA_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class MainTurret;
        };
    };

    class OPTRE_armed_puma_02;
    class OPTRE_armed_puma_02_OCimport_01 : OPTRE_armed_puma_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_armed_puma_02_OCimport_02 : OPTRE_armed_puma_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class OPTRE_unarmed_puma_02;
    class OPTRE_unarmed_puma_02_OCimport_01 : OPTRE_unarmed_puma_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_unarmed_puma_02_OCimport_02 : OPTRE_unarmed_puma_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class OPTRE_AT_puma_02;
    class OPTRE_AT_puma_02_OCimport_01 : OPTRE_AT_puma_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_AT_puma_02_OCimport_02 : OPTRE_AT_puma_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class O_MBT_02_arty_F;
    class O_MBT_02_arty_F_OCimport_01 : O_MBT_02_arty_F { scope = 0; class EventHandlers; class Turrets; };
    class O_MBT_02_arty_F_OCimport_02 : O_MBT_02_arty_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_APC_Tracked_02_cannon_F;
    class O_APC_Tracked_02_cannon_F_OCimport_01 : O_APC_Tracked_02_cannon_F { scope = 0; class EventHandlers; class Turrets; };
    class O_APC_Tracked_02_cannon_F_OCimport_02 : O_APC_Tracked_02_cannon_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_APC_Wheeled_02_rcws_v2_F;
    class O_APC_Wheeled_02_rcws_v2_F_OCimport_01 : O_APC_Wheeled_02_rcws_v2_F { scope = 0; class EventHandlers; class Turrets; };
    class O_APC_Wheeled_02_rcws_v2_F_OCimport_02 : O_APC_Wheeled_02_rcws_v2_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_Boat_Armed_01_hmg_F;
    class O_Boat_Armed_01_hmg_F_OCimport_01 : O_Boat_Armed_01_hmg_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Boat_Armed_01_hmg_F_OCimport_02 : O_Boat_Armed_01_hmg_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class FrontTurret;
            class RearTurret;
        };
    };

    class O_Truck_02_box_F;
    class O_Truck_02_box_F_OCimport_01 : O_Truck_02_box_F { scope = 0; class EventHandlers; };
    class O_Truck_02_box_F_OCimport_02 : O_Truck_02_box_F_OCimport_01 { scope = 0; class EventHandlers; };

    class O_Truck_02_medical_F;
    class O_Truck_02_medical_F_OCimport_01 : O_Truck_02_medical_F { scope = 0; class EventHandlers; };
    class O_Truck_02_medical_F_OCimport_02 : O_Truck_02_medical_F_OCimport_01 { scope = 0; class EventHandlers; };

    class O_Truck_02_Ammo_F;
    class O_Truck_02_Ammo_F_OCimport_01 : O_Truck_02_Ammo_F { scope = 0; class EventHandlers; };
    class O_Truck_02_Ammo_F_OCimport_02 : O_Truck_02_Ammo_F_OCimport_01 { scope = 0; class EventHandlers; };

    class O_Truck_02_fuel_F;
    class O_Truck_02_fuel_F_OCimport_01 : O_Truck_02_fuel_F { scope = 0; class EventHandlers; };
    class O_Truck_02_fuel_F_OCimport_02 : O_Truck_02_fuel_F_OCimport_01 { scope = 0; class EventHandlers; };

    class C_Van_01_transport_F;
    class C_Van_01_transport_F_OCimport_01 : C_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_01_transport_F_OCimport_02 : C_Van_01_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_L1;
            class CargoTurret_L2;
            class CargoTurret_L3;
            class CargoTurret_L4;
            class CargoTurret_L5;
            class CargoTurret_R1;
            class CargoTurret_R2;
            class CargoTurret_R3;
            class CargoTurret_R4;
            class CargoTurret_R5;
        };
    };

    class VES_HDV134_Resupply;
    class VES_HDV134_Resupply_OCimport_01 : VES_HDV134_Resupply { scope = 0; class EventHandlers; };
    class VES_HDV134_Resupply_OCimport_02 : VES_HDV134_Resupply_OCimport_01 { scope = 0; class EventHandlers; };

    class VES_HDV134_Fujikawa;
    class VES_HDV134_Fujikawa_OCimport_01 : VES_HDV134_Fujikawa { scope = 0; class EventHandlers; };
    class VES_HDV134_Fujikawa_OCimport_02 : VES_HDV134_Fujikawa_OCimport_01 { scope = 0; class EventHandlers; };

    class VES_HDV134_Tanker_C;
    class VES_HDV134_Tanker_C_OCimport_01 : VES_HDV134_Tanker_C { scope = 0; class EventHandlers; };
    class VES_HDV134_Tanker_C_OCimport_02 : VES_HDV134_Tanker_C_OCimport_01 { scope = 0; class EventHandlers; };

    class C_Van_01_fuel_F;
    class C_Van_01_fuel_F_OCimport_01 : C_Van_01_fuel_F { scope = 0; class EventHandlers; };
    class C_Van_01_fuel_F_OCimport_02 : C_Van_01_fuel_F_OCimport_01 { scope = 0; class EventHandlers; };

    class VES_HDV134_TT;
    class VES_HDV134_TT_OCimport_01 : VES_HDV134_TT { scope = 0; class EventHandlers; class Turrets; };
    class VES_HDV134_TT_OCimport_02 : VES_HDV134_TT_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class VES_HDV134_Maintenance;
    class VES_HDV134_Maintenance_OCimport_01 : VES_HDV134_Maintenance { scope = 0; class EventHandlers; };
    class VES_HDV134_Maintenance_OCimport_02 : VES_HDV134_Maintenance_OCimport_01 { scope = 0; class EventHandlers; };

    class LM_OPCAN_M350_INS_WDL;
    class LM_OPCAN_M350_INS_WDL_OCimport_01 : LM_OPCAN_M350_INS_WDL { scope = 0; class EventHandlers; class Turrets; };
    class LM_OPCAN_M350_INS_WDL_OCimport_02 : LM_OPCAN_M350_INS_WDL_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class LM_OPCAN_MBTB_KOS;
    class LM_OPCAN_MBTB_KOS_OCimport_01 : LM_OPCAN_MBTB_KOS { scope = 0; class EventHandlers; class Turrets; };
    class LM_OPCAN_MBTB_KOS_OCimport_02 : LM_OPCAN_MBTB_KOS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class LM_OPCAN_UH101_FRI;
    class LM_OPCAN_UH101_FRI_OCimport_01 : LM_OPCAN_UH101_FRI { scope = 0; class EventHandlers; class Turrets; };
    class LM_OPCAN_UH101_FRI_OCimport_02 : LM_OPCAN_UH101_FRI_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class LM_OPCAN_M48_Buzz_URA;
    class LM_OPCAN_M48_Buzz_URA_OCimport_01 : LM_OPCAN_M48_Buzz_URA { scope = 0; class EventHandlers; class Turrets; };
    class LM_OPCAN_M48_Buzz_URA_OCimport_02 : LM_OPCAN_M48_Buzz_URA_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class LM_OPCAN_M92_BOLT_URA;
    class LM_OPCAN_M92_BOLT_URA_OCimport_01 : LM_OPCAN_M92_BOLT_URA { scope = 0; class EventHandlers; class Turrets; };
    class LM_OPCAN_M92_BOLT_URA_OCimport_02 : LM_OPCAN_M92_BOLT_URA_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class O_MRH_117FRadioStation;
    class O_MRH_117FRadioStation_OCimport_01 : O_MRH_117FRadioStation { scope = 0; class EventHandlers; class Turrets; };
    class O_MRH_117FRadioStation_OCimport_02 : O_MRH_117FRadioStation_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_Plane_Fighter_02_F;
    class O_Plane_Fighter_02_F_OCimport_01 : O_Plane_Fighter_02_F { scope = 0; class EventHandlers; };
    class O_Plane_Fighter_02_F_OCimport_02 : O_Plane_Fighter_02_F_OCimport_01 { scope = 0; class EventHandlers; };

    class O_Plane_CAS_02_dynamicLoadout_F;
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 : O_Plane_CAS_02_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 : O_Plane_CAS_02_dynamicLoadout_F_OCimport_01 { scope = 0; class EventHandlers; };

    class I_Plane_Fighter_04_F;
    class I_Plane_Fighter_04_F_OCimport_01 : I_Plane_Fighter_04_F { scope = 0; class EventHandlers; };
    class I_Plane_Fighter_04_F_OCimport_02 : I_Plane_Fighter_04_F_OCimport_01 { scope = 0; class EventHandlers; };

    class I_Plane_Fighter_03_dynamicLoadout_F;
    class I_Plane_Fighter_03_dynamicLoadout_F_OCimport_01 : I_Plane_Fighter_03_dynamicLoadout_F { scope = 0; class EventHandlers; };
    class I_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 : I_Plane_Fighter_03_dynamicLoadout_F_OCimport_01 { scope = 0; class EventHandlers; };

    class I_HMG_02_F;
    class I_HMG_02_F_OCimport_01 : I_HMG_02_F { scope = 0; class EventHandlers; class Turrets; };
    class I_HMG_02_F_OCimport_02 : I_HMG_02_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class I_HMG_02_high_F;
    class I_HMG_02_high_F_OCimport_01 : I_HMG_02_high_F { scope = 0; class EventHandlers; class Turrets; };
    class I_HMG_02_high_F_OCimport_02 : I_HMG_02_high_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class OPTRE_UNSC_hornet_ins;
    class OPTRE_UNSC_hornet_ins_OCimport_01 : OPTRE_UNSC_hornet_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_UNSC_hornet_ins_OCimport_02 : OPTRE_UNSC_hornet_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class OPTRE_Pelican_unarmed_ins;
    class OPTRE_Pelican_unarmed_ins_OCimport_01 : OPTRE_Pelican_unarmed_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_Pelican_unarmed_ins_OCimport_02 : OPTRE_Pelican_unarmed_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class OPTRE_Pelican_armed_ins;
    class OPTRE_Pelican_armed_ins_OCimport_01 : OPTRE_Pelican_armed_ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_Pelican_armed_ins_OCimport_02 : OPTRE_Pelican_armed_ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class LM_OPCAN_MGS_SU;
    class LM_OPCAN_MGS_SU_OCimport_01 : LM_OPCAN_MGS_SU { scope = 0; class EventHandlers; class Turrets; };
    class LM_OPCAN_MGS_SU_OCimport_02 : LM_OPCAN_MGS_SU_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class OPTRE_Falconagl_02;
    class OPTRE_Falconagl_02_OCimport_01 : OPTRE_Falconagl_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_Falconagl_02_OCimport_02 : OPTRE_Falconagl_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class OPAEX_VTOL_Hornet_INS;
    class OPAEX_VTOL_Hornet_INS_OCimport_01 : OPAEX_VTOL_Hornet_INS { scope = 0; class EventHandlers; class Turrets; };
    class OPAEX_VTOL_Hornet_INS_OCimport_02 : OPAEX_VTOL_Hornet_INS_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class OPTRE_VTOLV_02;
    class OPTRE_VTOLV_02_OCimport_01 : OPTRE_VTOLV_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_VTOLV_02_OCimport_02 : OPTRE_VTOLV_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class GunnerTurret;
        };
    };

    class OPTRE_VTOLI_02;
    class OPTRE_VTOLI_02_OCimport_01 : OPTRE_VTOLI_02 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_VTOLI_02_OCimport_02 : OPTRE_VTOLI_02_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class GunnerTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class OPTRE_Static_FG75;
    class OPTRE_Static_FG75_OCimport_01 : OPTRE_Static_FG75 { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_Static_FG75_OCimport_02 : OPTRE_Static_FG75_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class OPTRE_Static_M41_Ins;
    class OPTRE_Static_M41_Ins_OCimport_01 : OPTRE_Static_M41_Ins { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_Static_M41_Ins_OCimport_02 : OPTRE_Static_M41_Ins_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_Quadbike_ALIVE;
    class O_Quadbike_ALIVE_OCimport_01 : O_Quadbike_ALIVE { scope = 0; class EventHandlers; };
    class O_Quadbike_ALIVE_OCimport_02 : O_Quadbike_ALIVE_OCimport_01 { scope = 0; class EventHandlers; };

    class B_UNSCArmy_V44_Blackfish_01;
    class B_UNSCArmy_V44_Blackfish_01_OCimport_01 : B_UNSCArmy_V44_Blackfish_01 { scope = 0; class EventHandlers; class Turrets; };
    class B_UNSCArmy_V44_Blackfish_01_OCimport_02 : B_UNSCArmy_V44_Blackfish_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CopilotTurret;
            class GunnerTurret_01;
            class GunnerTurret_02;
        };
    };


    class O_OURFArmy_Squad_Leader_01 : O_Soldier_SL_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_FLA"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_FLA"};

        weapons[] = {"OPTRE_MA32BGL","hgun_Pistol_Signal_F","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_MA32BGL","hgun_Pistol_Signal_F","OPTRE_Smartfinder"};

        magazines[] = {"1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries","1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries","1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries"};

        backpack = "OPTRE_ANPRC_521_URF";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA32BGL","","","OPTRE_M393_EOTECH",{},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Pistol_Signal_F","","","",{"6Rnd_GreenSignal_F",6},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"6Rnd_GreenSignal_F",2,6},{"6Rnd_RedSignal_F",2,6},{"OPTRE_60Rnd_762x51_Mag",4,60},{"1Rnd_HE_Grenade_shell",2,1},{"OPTRE_60Rnd_762x51_Mag_Tracer",2,60}}},{"OPTRE_ANPRC_521_URF",{{"ACE_artilleryTable",1},{"ACE_RangeTable_82mm",1},{"1Rnd_HE_Grenade_shell",8,1},{"UGL_FlareRed_F",2,1},{"UGL_FlareGreen_F",2,1},{"3Rnd_SmokeRed_Grenade_shell",2,3},{"3Rnd_Smoke_Grenade_shell",4,3}}},"OPTRE_FC_CH255_Helmet_BRN","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_FLA"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Team_Leader_01 : O_Soldier_TL_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAM"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAM"};

        weapons[] = {"OPTRE_MA32BGL","hgun_Pistol_Signal_F","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_MA32BGL","hgun_Pistol_Signal_F","OPTRE_Smartfinder"};

        magazines[] = {"1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries","1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries"};
        respawnMagazines[] = {"1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries","1Rnd_HE_Grenade_shell","6Rnd_GreenSignal_F","Laserbatteries"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA32BGL","","","OPTRE_BR55HB_Scope",{},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_Pistol_Signal_F","","","",{"6Rnd_GreenSignal_F",6},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"6Rnd_GreenSignal_F",2,6},{"6Rnd_RedSignal_F",2,6},{"OPTRE_60Rnd_762x51_Mag",4,60},{"1Rnd_HE_Grenade_shell",2,1},{"OPTRE_60Rnd_762x51_Mag_Tracer",2,60},{"Laserbatteries",1,1}}},{"B_AssaultPack_rgr",{{"ACE_artilleryTable",1},{"ACE_RangeTable_82mm",1},{"1Rnd_HE_Grenade_shell",8,1},{"UGL_FlareRed_F",2,1},{"UGL_FlareGreen_F",2,1},{"3Rnd_SmokeRed_Grenade_shell",2,3},{"3Rnd_Smoke_Grenade_shell",4,3}}},"OPTRE_FC_CH255_Helmet","",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_COMMCAM"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Officer_01 : O_officer_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_officer"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","H_Beret_CSAT_01_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","H_Beret_CSAT_01_F","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_M33","OPTRE_Smartfinder"};
        respawnWeapons[] = {"OPTRE_M33","OPTRE_Smartfinder"};

        magazines[] = {"OPTRE_6Rnd_127x40_Cyl","Laserbatteries","OPTRE_6Rnd_127x40_Cyl","Laserbatteries"};
        respawnMagazines[] = {"OPTRE_6Rnd_127x40_Cyl","Laserbatteries","OPTRE_6Rnd_127x40_Cyl","Laserbatteries"};

        backpack = "OPTRE_ANPRC_515";

        ALiVE_orbatCreator_loadout[] = {{},{},{"OPTRE_M33","","","",{"OPTRE_6Rnd_127x40_Cyl",6},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_60Rnd_762x51_Mag",4,60},{"OPTRE_60Rnd_762x51_Mag_Tracer",2,60},{"OPTRE_6Rnd_127x40_Cyl",12,6}}},{"OPTRE_ANPRC_515",{{"ACE_artilleryTable",1},{"ACE_RangeTable_82mm",1}}},"H_Beret_CSAT_01_F","G_Aviator",{"OPTRE_Smartfinder","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Rifleman_01 : O_Soldier_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_FLA"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_FLA"};

        weapons[] = {"OPTRE_MA37B"};
        respawnWeapons[] = {"OPTRE_MA37B"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37B","","","",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{},{},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"Laserbatteries",1,1},{"OPTRE_60Rnd_762x51_Mag",9,60}}},{},"OPTRE_FC_CH255_Helmet_BRN_Visor","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_FLA"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Autorifleman_01 : O_Soldier_AR_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Asian","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_M247","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M247","OPTRE_M6G"};

        magazines[] = {"OPTRE_400Rnd_762x51_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_400Rnd_762x51_Box_Tracer","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_400Rnd_762x51_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_400Rnd_762x51_Box_Tracer","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_UNSC_Rucksack_Heavy";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M247","","","OPTRE_BR55HB_Scope",{"OPTRE_400Rnd_762x51_Box_Tracer",400},{},"bipod_01_F_blk"},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_8Rnd_127x40_Mag",3,8},{"Laserbatteries",1,1},{"OPTRE_100Rnd_762x51_Box",1,100}}},{"OPTRE_UNSC_Rucksack_Heavy",{{"OPTRE_100Rnd_762x51_Box",2,100},{"OPTRE_100Rnd_762x51_Box_Tracer_Yellow",2,100},{"OPTRE_400Rnd_762x51_Box_Tracer",2,400}}},"OPTRE_FC_CH255_Helmet_BRN_Visor","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Medic_01 : O_Soldier_GL_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor_Medic","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor_Medic","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_M7","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M7","OPTRE_M6G"};

        magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_UNSC_Rucksack_Medic";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M7","OPTRE_M7_silencer","OPTRE_M7_Flashlight","OPTRE_M7_Sight",{"OPTRE_60Rnd_5x23mm_Mag",60},{},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2},{"OPTRE_60Rnd_5x23mm_Mag",1,60}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_8Rnd_127x40_Mag",3,8},{"Laserbatteries",1,1},{"OPTRE_60Rnd_5x23mm_Mag",4,60},{"OPTRE_60Rnd_5x23mm_Mag_tracer",2,60}}},{"OPTRE_UNSC_Rucksack_Medic",{{"ACE_fieldDressing",10},{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"ACE_EarPlugs",1},{"ACE_epinephrine",6},{"ACE_morphine",10},{"ACE_personalAidKit",1},{"ACE_splint",6},{"ACE_tourniquet",6},{"ACE_bloodIV_500",4},{"ACE_Flashlight_MX991",1},{"ACE_IR_Strobe_Item",1},{"ACE_surgicalKit",1},{"ACE_HandFlare_Yellow",2,1},{"ACE_HandFlare_White",1,1},{"ACE_HandFlare_Red",2,1},{"ACE_HandFlare_Green",2,1},{"SmokeShellPurple",1,1},{"SmokeShellBlue",1,1},{"SmokeShellYellow",2,1},{"OPTRE_M2_Smoke",4,1}}},"OPTRE_FC_CH255_Helmet_BRN_Visor_Medic","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Pilot_01 : O_Pilot_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 0;
        faction = "o_urfarmy";

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

    class O_OURFArmy_Crewman_01 : O_crew_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 0;
        faction = "o_urfarmy";

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

    class O_OURFArmy_Grenadier_01 : O_Soldier_GL_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA37BGL","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_MA37BGL","OPTRE_M6G"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag","UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag","UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37BGL","","","OPTRE_MA5_SmartLink",{"OPTRE_60Rnd_762x51_Mag",60},{"UGL_8Gauge_Pellet",1},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_8Rnd_127x40_Mag",1,8},{"Laserbatteries",1,1},{"OPTRE_60Rnd_762x51_Mag",5,60},{"1Rnd_HE_Grenade_shell",6,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"3Rnd_UGL_FlareRed_F",1,3},{"3Rnd_UGL_FlareWhite_F",1,3}}},{},"OPTRE_FC_CH255_Helmet_BRN_Visor","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Marksman_01 : O_Sharpshooter_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_TK_camo_lush","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_CGC_CH230_Combo_CH","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_SNI"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_CGC_CH230_Combo_CH","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_SNI"};

        weapons[] = {"OPTRE_M392_DMR","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M392_DMR","OPTRE_M6G"};

        magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M392_DMR","","OPTRE_BMR_Laser","OPTRE_BR55HB_Scope",{"OPTRE_15Rnd_762x51_Mag",15},{},"bipod_01_F_blk"},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST",{{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_8Rnd_127x40_Mag",5,8},{"Laserbatteries",1,1},{"OPTRE_15Rnd_762x51_Mag_AP",10,15}}},{},"LM_OPCAN_CGC_CH230_Combo_CH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_SNI"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Light_AT_01 : O_Soldier_LAT_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Light AT";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA37B","OPTRE_M48_PAW"};
        respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M48_PAW"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_1Rnd_50x137_HE","OPTRE_60Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_1Rnd_50x137_HE","OPTRE_60Rnd_762x51_Mag"};

        backpack = "OPTRE_UNSC_Rucksack";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37B","","","",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{"OPTRE_M48_PAW","","","",{"OPTRE_1Rnd_50x137_HE",1},{},""},{},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_60Rnd_762x51_Mag",9,60},{"Laserbatteries",1,1}}},{"OPTRE_UNSC_Rucksack",{{"OPTRE_1Rnd_50x137_HE",2,1},{"OPTRE_1Rnd_50x137_PEN",2,1}}},"OPTRE_FC_CH255_Helmet_BRN_Visor","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Heavy_AT_01 : O_OURFArmy_Light_AT_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy AT";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_Euro","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST_D","OPTRE_FC_CH255_Helmet_BRN_Visor","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA37B","OPTRE_M41_SSR","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M41_SSR","OPTRE_M6G"};

        magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_8Rnd_127x40_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_UNSC_Rucksack";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37B","","","",{"OPTRE_60Rnd_762x51_Mag",60},{},""},{"OPTRE_M41_SSR","","","",{"OPTRE_M41_Twin_HEAT",2},{},""},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_MTMV_VEST_D",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_60Rnd_762x51_Mag",9,60},{"Laserbatteries",1,1}}},{"OPTRE_UNSC_Rucksack",{{"OPTRE_M41_Twin_HEAT",2,2},{"OPTRE_M41_Twin_HEAP",2,2}}},"OPTRE_FC_CH255_Helmet_BRN_Visor","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Assault_Leader_01 : O_recon_TL_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Leader";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO_camo_arid","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_MA37GL","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_MA37GL","OPTRE_M6G"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag","3Rnd_UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","3Rnd_UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","3Rnd_UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","OPTRE_32Rnd_762x51_Mag","3Rnd_UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_ANPRC_515";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37GL","OPTRE_MA5Suppressor","","",{"OPTRE_32Rnd_762x51_Mag",32},{"3Rnd_UGL_8Gauge_Pellet",3},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_ACTV_CGC_VEST_UP",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",2,1},{"ACE_M84",4,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_32Rnd_762x51_Mag",6,32},{"1Rnd_HE_Grenade_shell",8,1},{"3Rnd_Smoke_Grenade_shell",2,3},{"3Rnd_UGL_8Gauge_Pellet",1,3}}},{"OPTRE_ANPRC_515",{}},"H_Booniehat_mgrn","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Assault_Breacher_01 : O_OURFArmy_Assault_Leader_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Breacher";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO_camo_arid","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Watchcap_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_FC_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Watchcap_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_FC_NVG"};

        weapons[] = {"OPTRE_M45","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M45","OPTRE_M6G"};

        magazines[] = {"OPTRE_6Rnd_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_6Rnd_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_UNSC_Rucksack";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45","","","optic_Holosight_blk_F",{"OPTRE_6Rnd_8Gauge_Pellet",6},{},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2},{"OPTRE_6Rnd_8Gauge_Pellet",1,6}}},{"LM_OPCAN_ACTV_CGC_VEST_UP",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",2,1},{"ACE_M84",4,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_6Rnd_8Gauge_Pellet",10,6},{"OPTRE_6Rnd_8Gauge_Slug",4,2}}},{"OPTRE_UNSC_Rucksack",{{"ACE_M26_Clacker",1},{"ACE_DefusalKit",1},{"ACE_DeadManSwitch",1},{"C7_Remote_Mag",4,1},{"C12_Remote_Mag",2,1}}},"H_Watchcap_khk","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_FC_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Assault_Grenadier_01 : O_OURFArmy_Assault_Breacher_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Grenadier";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO_camo_arid","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Cap_headphones","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Cap_headphones","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_M319","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M319","OPTRE_M6G"};

        magazines[] = {"UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag","UGL_8Gauge_Pellet","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_UNSC_Rucksack";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M319","","","",{"UGL_8Gauge_Pellet",1},{},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2},{"UGL_8Gauge_Pellet",1,1}}},{"LM_OPCAN_ACTV_CGC_VEST_UP",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",2,1},{"ACE_M84",4,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"UGL_8Gauge_Pellet",2,1}}},{"OPTRE_UNSC_Rucksack",{{"1Rnd_HE_Grenade_shell",5,1},{"v105_Whistler_Grenade",10,1},{"3Rnd_UGL_FlareGreen_F",1,3},{"3Rnd_UGL_FlareYellow_F",1,3},{"3Rnd_UGL_FlareRed_F",1,3},{"OPAEX_3Rnd_Smoke_Grenade_shell",2,3},{"OPAEX_3Rnd_SmokeRed_Grenade_shell",1,3},{"OPTRE_8Rnd_127x40_Mag",4,8},{"3Rnd_SmokeRed_Grenade_shell",2,3},{"3Rnd_Smoke_Grenade_shell",4,3},{"UGL_8Gauge_Pellet",6,1}}},"H_Cap_headphones","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Assault_Marksman_01 : O_OURFArmy_Assault_Leader_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Marksman";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO_camo_arid","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_B_CombatUniform_vest_mcam_wdl_f";

        linkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
        respawnlinkedItems[] = {"LM_OPCAN_ACTV_CGC_VEST_UP","H_Booniehat_mgrn","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

        weapons[] = {"OPTRE_M295_BMR"};
        respawnWeapons[] = {"OPTRE_M295_BMR"};

        magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag"};

        backpack = "OPTRE_ANPRC_515";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M295_BMR","OPTRE_MA5Suppressor","OPTRE_BMR_Laser","OPTRE_BR55HB_Scope",{"OPTRE_15Rnd_762x51_Mag",15},{},""},{},{},{"U_B_CombatUniform_vest_mcam_wdl_f",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_ACTV_CGC_VEST_UP",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",2,1},{"ACE_M84",4,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_15Rnd_762x51_Mag",7,15},{"OPTRE_15Rnd_762x51_Mag_Tracer",3,15}}},{"OPTRE_ANPRC_515",{}},"H_Booniehat_mgrn","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Sniper_01 : O_sniper_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO_camo_lush","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_O_T_FullGhillie_tna_F";

        linkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_CGC_CH230_Combo_SL","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_SNI"};
        respawnlinkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_CGC_CH230_Combo_SL","ItemMap","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_SNI"};

        weapons[] = {"OPTRE_SRS99D","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_SRS99D","OPTRE_M6G"};

        magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_SRS99D","","","OPTRE_SRS99C_Scope",{"OPTRE_4Rnd_145x114_APFSDS_Mag",4},{},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"U_O_T_FullGhillie_tna_F",{{"OPTRE_4Rnd_145x114_APFSDS_Mag",2,4}}},{"LM_OPCAN_MTMV_VEST",{{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"OPTRE_8Rnd_127x40_Mag",3,8},{"Laserbatteries",1,1},{"OPTRE_4Rnd_145x114_APFSDS_Mag",8,4}}},{},"LM_OPCAN_CGC_CH230_Combo_SL","G_Balaclava_TI_G_tna_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","LM_OPCAN_SNI"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Battlejumper_Team_Leader_01 : OPTRE_Ins_BJ_Soldier_URB_TeamLeader_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Battlejumper Team Leader";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_TK","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "LM_OPCAN_Battlejumper_Uni";

        linkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_CNM"};
        respawnlinkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_CNM"};

        weapons[] = {"OPTRE_MA37K"};
        respawnWeapons[] = {"OPTRE_MA37K"};

        magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
        respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};

        backpack = "OPTRE_ANPRC_515";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_MA37K","OPTRE_MA5Suppressor","","OPTRE_M393_EOTECH",{"OPTRE_32Rnd_762x51_Mag",32},{},""},{},{},{"LM_OPCAN_Battlejumper_Uni",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2},{"OPTRE_32Rnd_762x51_Mag",1,32}}},{"LM_OPCAN_BattleJumper_VEST",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",2,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"Laserbatteries",1,1},{"OPTRE_32Rnd_762x51_Mag",7,32}}},{"OPTRE_ANPRC_515",{}},"LM_OPCAN_TH56","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_CNM"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Battlejumper_AutoRifleman_01 : O_OURFArmy_Battlejumper_Team_Leader_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Battlejumper AutoRifleman";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "LM_OPCAN_Battlejumper_Uni";

        linkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_HURS_HUL"};
        respawnlinkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_HURS_HUL"};

        weapons[] = {"OPTRE_M73","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M73","OPTRE_M6G"};

        magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M73","OPTRE_MA5Suppressor","","OPTRE_M393_ACOG_v2",{"OPTRE_200Rnd_95x40_Box_Tracer",200},{},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"LM_OPCAN_Battlejumper_Uni",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_BattleJumper_VEST",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"Laserbatteries",1,1},{"OPTRE_200Rnd_95x40_Box_Tracer",2,200}}},{"OPTRE_ILCS_Rucksack_Black",{{"OPTRE_200Rnd_95x40_Box_Tracer",4,200}}},"LM_OPCAN_TH56","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_HURS_HUL"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Battlejumper_Assaultman_01 : O_OURFArmy_Battlejumper_AutoRifleman_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Battlejumper Assaultman";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "LM_OPCAN_Battlejumper_Uni";

        linkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_UA_HURS_HUL"};
        respawnlinkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_UA_HURS_HUL"};

        weapons[] = {"OPTRE_HMG38","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_HMG38","OPTRE_M6G"};

        magazines[] = {"OPTRE_40Rnd_30x06_Mag","v105_Whistler_Grenade","OPTRE_8Rnd_127x40_Mag","OPTRE_40Rnd_30x06_Mag","v105_Whistler_Grenade","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","v105_Whistler_Grenade","OPTRE_8Rnd_127x40_Mag","OPTRE_40Rnd_30x06_Mag","v105_Whistler_Grenade","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_HMG38","muzzle_snds_65_TI_blk_F","","OPTRE_HMG38_CarryHandle",{"OPTRE_40Rnd_30x06_Mag",40},{"v105_Whistler_Grenade",1},""},{},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"LM_OPCAN_Battlejumper_Uni",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2},{"v105_Whistler_Grenade",2,1}}},{"LM_OPCAN_BattleJumper_VEST",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"Laserbatteries",1,1},{"OPTRE_40Rnd_30x06_Mag",7,40}}},{"OPTRE_ILCS_Rucksack_Black"},"LM_OPCAN_TH56","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","A3_TVG_S_F_UA_HURS_HUL"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OURFArmy_Battlejumper_Breacher_01 : O_OURFArmy_Battlejumper_Assaultman_01 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Battlejumper Breacher";
        side = 0;
        faction = "o_urfarmy";

        identityTypes[] = {"Head_NATO","LanguageGRE_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","G_IRAN_default"};

        uniformClass = "LM_OPCAN_Battlejumper_Uni";

        linkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"LM_OPCAN_BattleJumper_VEST","LM_OPCAN_TH56","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"OPTRE_M45ATAC","OPTRE_M48_PAW","OPTRE_M6G"};
        respawnWeapons[] = {"OPTRE_M45ATAC","OPTRE_M48_PAW","OPTRE_M6G"};

        magazines[] = {"OPTRE_12Rnd_8Gauge_Tungsten_Buckshot","OPTRE_1Rnd_50x137_HEAT","OPTRE_8Rnd_127x40_Mag","OPTRE_12Rnd_8Gauge_Tungsten_Buckshot","OPTRE_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"OPTRE_12Rnd_8Gauge_Tungsten_Buckshot","OPTRE_1Rnd_50x137_HEAT","OPTRE_8Rnd_127x40_Mag","OPTRE_12Rnd_8Gauge_Tungsten_Buckshot","OPTRE_8Rnd_127x40_Mag"};

        backpack = "OPTRE_ILCS_Rucksack_Black";

        ALiVE_orbatCreator_loadout[] = {{"OPTRE_M45ATAC","","acc_flashlight","OPTRE_M393_EOTECH",{"OPTRE_12Rnd_8Gauge_Tungsten_Buckshot",12},{},""},{"OPTRE_M48_PAW","","","",{"OPTRE_1Rnd_50x137_HEAT",1},{},""},{"OPTRE_M6G","","OPTRE_M6G_Flashlight","OPTRE_M6G_Scope",{"OPTRE_8Rnd_127x40_Mag",8},{},""},{"LM_OPCAN_Battlejumper_Uni",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_epinephrine",1},{"ACE_morphine",4},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",2}}},{"LM_OPCAN_BattleJumper_VEST",{{"ACE_EarPlugs",1},{"OPTRE_M9_Frag",1,1},{"ACE_M84",2,1},{"OPTRE_M8_Flare",1,1},{"OPTRE_M8_Flare_Yellow",1,1},{"OPTRE_M2_Smoke",2,1},{"ACE_HandFlare_Red",1,1},{"Laserbatteries",1,1},{"OPTRE_12Rnd_8Gauge_Tungsten_Buckshot",8,12},{"OPTRE_12Rnd_8Gauge_Tungsten_Slug",2,12}}},{"OPTRE_ILCS_Rucksack_Black",{{"OPTRE_1Rnd_50x137_PEN",2,1},{"OPTRE_1Rnd_50x137_HE",2,1}}},"LM_OPCAN_TH56","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M620_Ferret_01 : OPTRE_ferret_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M620 Ferret";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M808B_Scorpion_01 : OPTRE_scorpionins_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M808B Scorpion";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
            class CargoTurret1 : CargoTurret1 { gunnerType = ""; };
            class CargoTurret2 : CargoTurret2 { gunnerType = ""; };
            class CargoTurret3 : CargoTurret3 { gunnerType = ""; };
            class CargoTurret4 : CargoTurret4 { gunnerType = ""; };
            class CargoTurret5 : CargoTurret5 { gunnerType = ""; };
            class CargoTurret6 : CargoTurret6 { gunnerType = ""; };
            class CargoTurret7 : CargoTurret7 { gunnerType = ""; };
            class CargoTurret8 : CargoTurret8 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M12_FAV_01 : OPTRE_M12_FAV_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12 FAV";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Squad_Leader_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Grenadier_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_OURFArmy_Heavy_AT_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M12_LRV_LAAG_01 : OPTRE_M12_LRV_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12 LRV (LAAG)";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M12A1_LRV_AT_Rocket_01 : OPTRE_M12A1_LRV_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12A1 LRV (AT/Rocket)";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Squad_Leader_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OURFArmy_Heavy_AT_01"; };
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Autorifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Mk6_Mortar_01 : O_G_Mortar_01_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mk6 Mortar";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_G_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Kamaz_Transport_Covered_01 : O_Truck_02_covered_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz Transport (Covered)";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Rifleman_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kuz_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_Kamaz_Transport_01 : O_Truck_02_transport_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz Transport";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Rifleman_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kuz_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_T140_Capybara_01 : O_MBT_04_cannon_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-140 Capybara";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Grey";

    };

    class O_URFArmy_T140K_Capybara_01 : O_MBT_04_cannon_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-140K Capybara";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Grey";

    };

    class O_URFArmy_Kamaz_MRL_01 : I_Truck_02_MRL_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz MRL";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_mrl_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_Assault_Boat_01 : O_G_Boat_Transport_01_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Battlejumper_Assaultman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Battlejumper_Team_Leader_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Battlejumper_AutoRifleman_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_OURFArmy_Battlejumper_Assaultman_01"; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_OURFArmy_Battlejumper_Breacher_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Hex";

    };

    class O_URFArmy_M112_Wet_Partol_Craft_LAAG_01 : optre_catfish_mg_f_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M112 Wet Partol Craft (LAAG)";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Squad_Leader_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Autorifleman_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_OURFArmy_Rifleman_01"; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_OURFArmy_Medic_01"; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = "O_OURFArmy_Heavy_AT_01"; };
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Autorifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\OPTRE_Vehicles\catfish\data\optre_catfish_boat_black_co.paa'];_unit setObjectTextureGlobal [1,'\OPTRE_Vehicles\catfish\data\optre_catfish_interior_co.paa'];_unit setObjectTextureGlobal [2,'\OPTRE_Vehicles\catfish\data\optre_catfish_seats_co.paa'];_unit setObjectTextureGlobal [3,'\OPTRE_Vehicles\catfish\data\optre_catfish_windscreen_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "texBlack";

    };

    class O_URFArmy_M914_Repair_Warthog_01 : OPTRE_M914_RV_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M914 Repair Warthog";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_innie_co.paa'];_unit setObjectTextureGlobal [1,'\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Standard";

    };

    class O_URFArmy_M12_APC_01 : OPTRE_M12_ins_APC_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12 APC";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Squad_Leader_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Autorifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\OPTRE_Vehicles\Warthog\data\M12HogMaav_extupper_innie_co.paa'];_unit setObjectTextureGlobal [1,'\OPTRE_Vehicles\Warthog\data\M12HogMaav_extunder_co.paa'];_unit setObjectTextureGlobal [2,'\OPTRE_Vehicles\Warthog\data\transp_lopo_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Standard";

    };

    class O_URFArmy_M12R_AA_01 : OPTRE_M12R_AA_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M12R (AA)";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Squad_Leader_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OURFArmy_Autorifleman_01"; };
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M7_MG_Puma_01 : OPTRE_armed_puma_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M7 MG Puma";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Assault_Leader_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Assault_Breacher_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Assault_Leader_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Assault_Grenadier_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_OURFArmy_Assault_Marksman_01"; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_OURFArmy_Assault_Grenadier_01"; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = "O_OURFArmy_Assault_Breacher_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M7_Unarmed_Puma_01 : OPTRE_unarmed_puma_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M7 Unarmed Puma";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Assault_Leader_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Assault_Grenadier_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Assault_Breacher_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_OURFArmy_Assault_Marksman_01"; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_OURFArmy_Assault_Leader_01"; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = "O_OURFArmy_Assault_Breacher_01"; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = "O_OURFArmy_Assault_Grenadier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M7A1_AT_Puma_01 : OPTRE_AT_puma_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M7A1 AT Puma";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Assault_Leader_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Assault_Grenadier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Assault_Breacher_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Assault_Breacher_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_OURFArmy_Assault_Grenadier_01"; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_OURFArmy_Assault_Leader_01"; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = "O_OURFArmy_Assault_Marksman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_S29_Sochor_01 : O_MBT_02_arty_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "S29 Sochor";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa'];_unit setObjectTextureGlobal [1,'a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa'];_unit setObjectTextureGlobal [2,'a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa'];_unit setObjectTextureGlobal [3,'a3\data_f\vehicles\turret_opfor_co.paa'];_unit setObjectTextureGlobal [4,'A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Hex";

    };

    class O_URFArmy_BM_30_Stalker_01 : O_APC_Tracked_02_cannon_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-30 Stalker";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa'];_unit setObjectTextureGlobal [4,'A3\armor_f\data\cage_csat_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Hex";

    };

    class O_URFArmy_Otokar_01 : O_APC_Wheeled_02_rcws_v2_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Otokar";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Speedboat_HMG_01 : O_Boat_Armed_01_hmg_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Speedboat HMG";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class FrontTurret : FrontTurret { gunnerType = "O_OURFArmy_Squad_Leader_01"; };
            class RearTurret : RearTurret { gunnerType = "O_OURFArmy_Autorifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_ext_INDP_co.paa'];_unit setObjectTextureGlobal [1,'\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_int_INDP_co.paa'];_unit setObjectTextureGlobal [2,'\A3\boat_f_beta\Boat_Armed_01\data\Boat_Armed_01_crows_INDP_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Indep";

    };

    class O_URFArmy_Kamaz_Repair_01 : O_Truck_02_box_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz Repair";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_repair_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_Kamaz_Medical_01 : O_Truck_02_medical_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz Medical";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Medic_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kuz_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_Kamaz_Ammo_01 : O_Truck_02_Ammo_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz Ammo";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_repair_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_Kamaz_Fuel_01 : O_Truck_02_fuel_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Kamaz Fuel";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_kab_EAF_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_fuel_EAF_co.paa'];_unit setObjectTextureGlobal [2,'\A3\soft_f_Enoch\Truck_02\Data\Truck_02_int_EAF_co.paa'];_unit setObjectTextureGlobal [3,'\A3\soft_f_Enoch\Truck_02\Data\truck_02_chassis_EAF_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "EAF";

    };

    class O_URFArmy_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = "O_OURFArmy_Squad_Leader_01"; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = "O_OURFArmy_Rifleman_01"; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = "O_OURFArmy_Autorifleman_01"; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = "O_OURFArmy_Medic_01"; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = "O_OURFArmy_Squad_Leader_01"; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = "O_OURFArmy_Autorifleman_01"; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = "O_OURFArmy_Rifleman_01"; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = "O_OURFArmy_Heavy_AT_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_04";

    };

    class O_URFArmy_HDV_134_Resupply_Buffalo_01 : VES_HDV134_Resupply_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "HDV-134 Resupply Buffalo";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa'];_unit setObjectTextureGlobal [1,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa'];_unit setObjectTextureGlobal [2,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ves_olive";

    };

    class O_URFArmy_HFV_134_Shaw_Fujikawa_Buffalo_01 : VES_HDV134_Fujikawa_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "HDV-134 Shaw-Fujikawa Buffalo";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_HDV_134_Tanker_Buffalo_01 : VES_HDV134_Tanker_C_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "HDV-134 Tanker Buffalo";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Fuel_Truck_01 : C_Van_01_fuel_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fuel Truck";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_03";

    };

    class O_URFArmy_HDV_134_TT_Buffalo_01 : VES_HDV134_TT_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "HDV-134 TT Buffalo";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_OURFArmy_Team_Leader_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_OURFArmy_Autorifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa'];_unit setObjectTextureGlobal [1,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa'];_unit setObjectTextureGlobal [2,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ves_olive";

    };

    class O_URFArmy_HDV_134_Maintenance_Buffalo_01 : VES_HDV134_Maintenance_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "HDV-134 Maintenance Buffalo";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa'];_unit setObjectTextureGlobal [1,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa'];_unit setObjectTextureGlobal [2,'\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ves_olive";

    };

    class O_URFArmy_M350_Recluse_01 : LM_OPCAN_M350_INS_WDL_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M350 Recluse";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M1022_Beetle_01 : LM_OPCAN_MBTB_KOS_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1022 Beetle";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_UH_101_Eagle_01 : LM_OPCAN_UH101_FRI_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-101 Eagle";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M48_Buzzsaw_CIWS_01 : LM_OPCAN_M48_Buzz_URA_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M48 Buzzsaw CIWS";
        side = 0;
        faction = "O_URFArmy";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M92_Bolt_SAM_01 : LM_OPCAN_M92_BOLT_URA_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M92 Bolt SAM";
        side = 0;
        faction = "O_URFArmy";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_KA_90_Finch_Unarmed_01 : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "KA-90 Finch (Unarmed)";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_OURFArmy_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_117F_Radio_SATCOM_Station_01 : O_MRH_117FRadioStation_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "117F Radio SATCOM Station";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_officer_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Officer_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Shikra_01 : O_Plane_Fighter_02_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Shikra";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa'];_unit setObjectTextureGlobal [1,'a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_02_Blue_co.paa'];_unit setObjectTextureGlobal [2,'a3\air_f_jets\plane_fighter_02\data\Fighter_02_fuselage_01_Blue_co.paa'];_unit setObjectTextureGlobal [3,'a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_02_co.paa'];_unit setObjectTextureGlobal [4,'a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_00_co.paa'];_unit setObjectTextureGlobal [5,'a3\air_f_jets\plane_fighter_02\data\Numbers\Fighter_02_number_01_co.paa'];_unit setObjectTextureGlobal [6,'a3\data_f\clear_empty.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CamoBlue";

    };

    class O_URFArmy_Yak_130_01 : O_Plane_CAS_02_dynamicLoadout_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Yak-130";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Gripen_01 : I_Plane_Fighter_04_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gripen";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_01_co.paa'];_unit setObjectTextureGlobal [1,'a3\air_f_jets\plane_fighter_04\data\Fighter_04_fuselage_02_co.paa'];_unit setObjectTextureGlobal [2,'a3\air_f_jets\plane_fighter_04\data\fighter_04_misc_01_co.paa'];_unit setObjectTextureGlobal [3,'a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa'];_unit setObjectTextureGlobal [4,'a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_04_ca.paa'];_unit setObjectTextureGlobal [5,'a3\air_f_jets\plane_fighter_04\data\Numbers\Fighter_04_number_08_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CamoGrey";

    };

    class O_URFArmy_Alca_01 : I_Plane_Fighter_03_dynamicLoadout_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Alca";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_greyhex_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_greyhex_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Grey";

    };

    class O_URFArmy_M2_HMG_01 : I_HMG_02_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG";
        side = 0;
        faction = "O_URFArmy";
        crew = "I_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M2_HMG_Raised_01 : I_HMG_02_high_F_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 HMG (Raised)";
        side = 0;
        faction = "O_URFArmy";
        crew = "I_Soldier_F";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_AV_14_Hornet_01 : OPTRE_UNSC_hornet_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "AV-14 Hornet";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Pelican_01 : OPTRE_Pelican_unarmed_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pelican";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_OURFArmy_Pilot_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_AV_Pelican_01 : OPTRE_Pelican_armed_ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "AV Pelican";
        side = 0;
        faction = "O_URFArmy";
        crew = "OPTRE_Ins_URF_Crewman";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_MGS_32_Timberwolf_01 : LM_OPCAN_MGS_SU_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "MGS-32 Timberwolf";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Crewman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_UH_144AGL_Falcon_01 : OPTRE_Falconagl_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-144AGL Falcon";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_AV_14_VTOL_Hornet_01 : OPAEX_VTOL_Hornet_INS_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "AV-14 VTOL Hornet";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_AVD_99VT_Wyvern_01 : OPTRE_VTOLV_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "AVD-99VT Wyvern";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class GunnerTurret : GunnerTurret { gunnerType = "O_OURFArmy_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_AVD_99IT_Wyvern_01 : OPTRE_VTOLI_02_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "AVD-99IT Wyvern";
        side = 0;
        faction = "O_URFArmy";
        crew = "OPTRE_Ins_URF_Rifleman_AR";

        class Turrets : Turrets {
            class GunnerTurret : GunnerTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_PAK_01 : OPTRE_Static_FG75_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "PAK";
        side = 0;
        faction = "O_URFArmy";
        crew = "OPTRE_Ins_URF_Engineer";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_M41_LAAG_Turret_01 : OPTRE_Static_M41_Ins_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "M41 LAAG Turret";
        side = 0;
        faction = "O_URFArmy";
        crew = "OPTRE_Ins_URF_Rifleman_AR";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_OURFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_URFArmy_Quad_Bike_01 : O_Quadbike_ALIVE_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Battlejumper_Team_Leader_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Black";

    };

    class O_URFArmy_V45_Bluefish_01 : B_UNSCArmy_V44_Blackfish_01_OCimport_02 {
        author = "GySgt. C. Varner";
        scope = 2;
        scopeCurator = 2;
        displayName = "V45 Bluefish";
        side = 0;
        faction = "O_URFArmy";
        crew = "O_OURFArmy_Pilot_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "B_UNSCArmy_Pilot_01"; };
            class GunnerTurret_01 : GunnerTurret_01 { gunnerType = "B_UNSCArmy_Pilot_01"; };
            class GunnerTurret_02 : GunnerTurret_02 { gunnerType = "B_UNSCArmy_Pilot_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Blue";

    };

};