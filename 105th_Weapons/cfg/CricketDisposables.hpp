class OPTRE_M48_PAW;
 class 105_CRCKT_PEN: OPTRE_M48_PAW
        {
            dlc = "105th";
            author = "N-4 Logistics";
            scope = 1;
            scopeArsenal = 1;
            baseWeapon = "105_CRCKT_PEN";
            displayName = "[105th] M48B 'Penetrator' PAW";
            descriptionShort= "Anti-Tank Disposable Tube";
            initSpeed=80;
            model="\V_SO_Weapons\data\M48\M48B_Cricket";
            picture="\V_SO_Weapons\data\M48\M48B_Cricket";
            magazineWell[]={};
            magazines[]= {"CRCKT_PEN"};
            magazineReloadTime = 0.1;
            reloadMagazineSound[]= {"", 1, 1};
            class EventHandlers 
            {fired = "_this call CBA_fnc_firedDisposable"};
                class WeaponSlotsInfo
                {
                    mass=90;
                    class CowsSlot: CowsSlot
                    {
                        compatibleitems[]=
                        {
                            "optic_arco_ak_blk_f",
                            "optic_dms",
                            "optic_aco_grn",
                            "optic_aco",
                            "optic_arco_blk_f",
                            "optic_holosight_blk_f",
                            "optic_mrco",
                            
                        
                            
                            "optic_ams",
                            "optic_yorris",
                            
                        };
                    };
                };
            class PointerSlot: PointerSlot
            {
                compatibleitems[]=
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
            class 105_CRCKT_PEN_Loaded: 105_CRCKT_PEN
            {
                scope = 2;
                scopeArsenal = 2;
                baseWeapon = "105_CRCKT_PEN_Loaded";
                magazines[]= {"CRCKT_PEN"};
                mass=95;
            };
            class 105_CRCKT_PEN_Used: 105_CRCKT_PEN
            {
                scope = 1;
                scopeArsenal = 1;
                baseWeapon = "105_CRCKT_PEN_Used";
                displayName = "Used M48B Tube";
                weaponPoolAvailable = 0;
                mass=90;
            };

    class 105_CRCKT_HE: OPTRE_M48_PAW
    {
        dlc = "105th";
        author = "N-4 Logistics";
        scope = 1;
        scopeArsenal = 1;
        baseWeapon = "105_CRCKT_HE";
        displayName = "[105th] M48B 'High Explosive' PAW";
        descriptionShort= "Anti-Personnel Disposable Tube";
        initSpeed=80;
        model="\V_SO_Weapons\data\M48\M48B_Cricket";
        picture="\V_SO_Weapons\data\M48\M48B_Cricket";
        magazineWell[]={};
        magazines[]= {"CRCKT_HE"};
        magazineReloadTime = 0.1;
        reloadMagazineSound[]= {"", 1, 1};
        class EventHandlers 
        {fired = "_this call CBA_fnc_firedDisposable"};
            class WeaponSlotsInfo
                {
                    mass=90;
                    class CowsSlot: CowsSlot
                    {
                        compatibleitems[]=
                        {
                            "optic_arco_ak_blk_f",
                            "optic_dms",
                            "optic_aco_grn",
                            "optic_aco",
                            "optic_arco_blk_f",
                            "optic_holosight_blk_f",
                            "optic_mrco",
                            
                            "optic_yorris",
                            
                        };
                    };
                };
            class PointerSlot: PointerSlot
            {
                compatibleitems[]=
                {
                    "acc_pointer_ir",
                    "ace_acc_pointer_green",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
    };
        class 105_CRCKT_HE_Loaded: 105_CRCKT_HE
        {
            scope = 2;
            scopeArsenal = 2;
            baseWeapon = "105_CRCKT_HE_Loaded";
            magazines[]= {"CRCKT_HE"};
            mass=95;
        };
        class 105_CRCKT_HE_Used: 105_CRCKT_HE
        {
            scope = 1;
            scopeArsenal = 1;
            baseWeapon = "105_CRCKT_HE_Used";
            displayName = "Used M48B Tube";
            weaponPoolAvailable = 0;
            mass=90;
        };
    };