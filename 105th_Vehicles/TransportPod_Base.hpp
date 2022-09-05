class Land_Pod_Heli_Transport_04_covered_F;
class Land_Pod_Heli_Transport_04_medevac_F;

class v105_Land_Transport_Covered_Pod: Land_Pod_Heli_Transport_04_covered_F
{
    scopeCurator= 2;
    scope= 2;
    side= 1;
    author= "S-4 Logistics";
    displayName= "[105th] Passenger Compartment";
    editorCategory= "v105_EdCat_105th";
    editorSubCategory= "v105_EdSubCat_Supply";
    armor= 150;
    class TransportMagazines{};
    class TransportWeapons{};
    hiddenSelectionsTextures[]=
    {
        "105th_Vehicles\textures\TransportPod\taru_1_retexture.paa",
        "105th_Vehicles\textures\TransportPod\taru_2_retexture.paa"
    };
    transportMaxMagazines= 150;
    transportMaxWeapons= 50;
    maximumLoad= 4000;
    class TransportItems
    {
        #include "cfg\VehicleGearFalcon.hpp"
    };
};

class v105_Land_Medical_Covered_Pod: Land_Pod_Heli_Transport_04_medevac_F
{
    scopeCurator= 2;
    scope= 2;
    side= 1;
    author= "S-4 Logistics";
    displayName= "[105th] Medevac Compartment";
    editorCategory= "v105_EdCat_105th";
    editorSubCategory= "v105_EdSubCat_Supply";
    armor= 150;
    class TransportMagazines{};
    class TransportWeapons{};
    hiddenSelectionsTextures[]=
    {
        "105th_Vehicles\textures\TransportPod\taru_med_retexture.paa",
        "105th_Vehicles\textures\TransportPod\taru_2_retexture.paa"
    };
    transportMaxMagazines= 150;
    transportMaxWeapons= 50;
    maximumLoad= 2000;
    class TransportItems
    {
        #include "cfg\VehicleGearMedical.hpp"
    };
};
