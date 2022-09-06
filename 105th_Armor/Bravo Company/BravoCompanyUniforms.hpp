
// Initial Commit taken from config.cpp


class r105_uniform_ODST: VES_BDU_Evolved_Slim
{
    author="N-4 Logistics";
    displayName="[ODST] Combat Uniform (Tempest)";
    class ItemInfo: UniformItem
    {
        containerClass="Supply150";
        mass=40;
        uniformType="Neopren";
        uniformModel="";
        uniformClass="r105_uniform_base";
    };
    class XtdGearInfo
    {
        model="BComp_Uniforms";
        camo="Tempest";
    };
};

class v105_uniform_UTiger_CO: VES_BDU_Evolved_Slim
{
    author="N-4 Logistics";
    displayName="[ODST] Combat Uniform (Tigerstripe)";
    class ItemInfo: UniformItem
    {
        containerClass="Supply150";
        mass=40;
        uniformType="Neopren";
        uniformModel="";
        uniformClass="v105_BDU_UTiger_CO";
    };
    class XtdGearInfo
    {
        model="BComp_Uniforms";
        camo="Tiger";
    };
};