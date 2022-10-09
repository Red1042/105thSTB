//THIS IS INSIDE OF CFGVEHICLES
//	Inital Commit
/*
	class VES_BDU_V_Evolved;
	class VES_BDU_SS_V_Evolved;
	class VES_BDU_R_V_Evolved;
	class VES_BDU_V_Evolved_Slim;
	class VES_BDU_SS_V_Evolved_Slim;
	class VES_BDU_R_V_Evolved_Slim;
*/

class v105_Uniform_Base: B_Soldier_base_F
{
    scope=1;
    faceType="Man_A3";
    model="\OPTRE_UNSC_Units\Army\uniform.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo2",
        "insignia",
        "clan",
        "A_Slimleg"
    };
};

class v105_Uniform_Slim_Base: B_Soldier_base_F
{
    scope=1;
    faceType="Man_A3";
    model="\OPTRE_UNSC_Units\Army\uniform.p3d";
    hiddenSelections[]=
    {
        "camo",
        "camo2",
        "insignia",
        "clan",
        "A_Baseleg"
    };
};

class v105_BDU_Woodland: v105_Uniform_Base
{
    displayName="Woodland Uniform";
    uniformclass="v105_uniform_Woodland";
    hiddenSelectionsTextures[]=
    {
        "LM_OPCAN3.0\BLU\UNSC\U\UNSC-MC-INF.paa",
        "LM_OPCAN3.0\BLU\UNSC\U\UNSC-MC-INF.paa"
    };
};

class v105_BDU_Woodland_Slim: v105_Uniform_Slim_Base
{
    displayName="Woodland Uniform [Slim]";
    uniformclass="v105_uniform_Woodland_Slim";
    hiddenSelectionsTextures[]=
    {
        "LM_OPCAN3.0\BLU\UNSC\U\UNSC-MC-INF.paa",
        "LM_OPCAN3.0\BLU\UNSC\U\UNSC-MC-INF.paa"
    };
};

class v105_BDU_DigiWoodland: VES_BDU_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa"
    };
};

class v105_BDU_DigiWoodland_SS: VES_BDU_SS_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa"
    };
};
class v105_BDU_DigiWoodland_R: VES_BDU_R_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa"
    };
};
class v105_BDU_DigiWoodland_Slim: VES_BDU_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa"
    };
};

class v105_BDU_DigiWoodland_SS_Slim: VES_BDU_SS_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa"
    };
};
class v105_BDU_DigiWoodland_R_Slim: VES_BDU_R_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_DigiWoodland.paa"
    };
};



class v105_BDU_WMARPAT: VES_BDU_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa"
    };
};

class v105_BDU_WMARPAT_SS: VES_BDU_SS_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa"
    };
};
class v105_BDU_WMARPAT_R: VES_BDU_R_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa"
    };
};
class v105_BDU_WMARPAT_Slim: VES_BDU_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa"
    };
};
class v105_BDU_WMARPAT_SS_Slim: VES_BDU_SS_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa"
    };
};
class v105_BDU_WMARPAT_R_Slim: VES_BDU_R_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_WMARPAT.paa"
    };
};

class v105_BDU_M81: VES_BDU_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa"
    };
};

class v105_BDU_M81_SS: VES_BDU_SS_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa"
    };
};
class v105_BDU_M81_R: VES_BDU_R_V_Evolved
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa"
    };
};
class v105_BDU_M81_Slim: VES_BDU_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa"
    };
};
class v105_BDU_M81_SS_Slim: VES_BDU_SS_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa"
    };
};
class v105_BDU_M81_R_Slim: VES_BDU_R_V_Evolved_Slim
{
    hiddenSelectionsTextures[]=
    {
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa",
        "105th_Armor\Alpha Company\data\Uniforms\v105_BDU_M81.paa"
    };
};