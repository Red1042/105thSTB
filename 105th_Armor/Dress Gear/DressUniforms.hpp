/*
	If you are wanting to modify this I'd suggest talking to Bman
*/

/*
    Marine Uniforms
*/

class v105_mar_dress_Base: OPTRE_UNSC_Army_Soldier_DressGray
{ 
    author="Bman";
    scope = 2;
    scopeArsenal = 2;
    mass=40;
    displayName="[105th] Dress Uniform [Enlisted]";
    picture="\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
    model="\OPTRE_UNSC_Units\Army\officer.p3d";
    class ItemInfo: UniformItem
    {
        containerClass="Supply100";
        uniformClass="r105_dress_mar_base";
        uniformModel="-";
    };
};

class v105_mar_dress_Corpsman: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Corpsman]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_corpsman";
    };
};

class v105_mar_dress_NCO: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [NCO]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_nco";
    };
};

class v105_mar_dress_NCOCorpsman: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [NCO Corpsman]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_ncocorpsman";
    };
};

class v105_mar_dress_Command: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Command]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_command";
    };
};

class v105_mar_dress_GWelFun: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Aqua]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_GWelFun";
    };
};

class v105_mar_dress_DMur: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Murk]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_DMur";
    };
};

class v105_mar_dress_CVar: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Varner]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_CVar";
    };
}

class v105_mar_dress_MHoe: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Hoefer]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_MHoe";
    };
}

class v105_mar_dress_EAsp: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Aspari]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_EAsp";
    };
}

class v105_mar_dress_LSky: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Skynyrd]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_LSky";
    };
}

    class v105_mar_dress_TMai: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Mailwind]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_TMai";
    };
};
class v105_mar_dress_BCra: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Craig]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_BCra";
    };
};

class v105_mar_dress_ENun: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Nungester]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_ENun";
    };
};

class v105_mar_dress_ENunfun: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Smiley]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_ENunfun";
    };
};

class v105_mar_dress_GArc: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Archer]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_GArc";
    };
};

class v105_mar_dress_JShe: v105_mar_dress_Base
{
    displayName="[105th] Dress Uniform [Shepard]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_mar_JShe";
    };
};

/*
    ODST Uniforms
*/

class v105_odst_dress_Base: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Base]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_base";
    };
};

class v105_odst_dress_SARC: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [SARC]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_sarc";
    };
};

class v105_odst_dress_Command: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Command]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_command";
    };
};

class v105_odst_dress_ABma: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Bman]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_ABma";
    };
};

class v105_odst_dress_MSev: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Sevarach]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_MSev";
    };
};

class v105_odst_dress_AVir: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Virus]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_AVir";
    };
};

class v105_odst_dress_BBar: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Barkley]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_BBar";
    };
};

class v105_odst_dress_GCru: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Cruz]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_GCru";
    };
};

class v105_odst_dress_JVar: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Vargas]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_JVar";
    };
};

class v105_odst_dress_JNos: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Nostra]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_JNos";
    };
};

class v105_odst_dress_GWel: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Wells]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_GWel";
    };
};

class v105_odst_dress_CMcD: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [McDaniel]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_CMcD";
    };
}

class v105_odst_dress_CBar: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Barrier]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_CBar";
    };
}

    class v105_odst_dress_JRam: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Ramos]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_JRam";
    };
}

    class v105_odst_dress_PLuk: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Luke]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_PLuk";
    };
}

class v105_odst_dress_BSmi: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [B. Smith]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_BSmi";
    };
};

class v105_odst_dress_RCan: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Canley]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_RCan";
    };
};

class v105_odst_dress_BRon: v105_mar_dress_Base
{
    displayName="[ODST] Dress Uniform [Ronin]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_odst_BRon";
    };
};
/*
    VC-497 Uniforms
*/

class v105_vc497_dress_Base: v105_mar_dress_Base
{
    displayName="[VC-497] Dress Uniform [Standard]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_vc497_base";
    };
};

class v105_vc497_dress_JCha: v105_mar_dress_Base
{
    displayName="[VC-497] Dress Uniform [Chapman]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_vc497_JCha";
    };
};

class v105_vc497_dress_JCol: v105_mar_dress_Base
{
    displayName="[VC-497] Dress Uniform [Collins]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_vc497_JCol";
    };
};

class v105_vc497_dress_GStu: v105_mar_dress_Base
{
    displayName="[VC-497] Dress Uniform [Sturmischer]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_vc497_GStu";
    };
};

class v105_vc497_dress_CFlu: v105_mar_dress_Base
{
    displayName="[VC-497] Dress Uniform [Flux]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_vc497_CFlu";
    };
};

class v105_vc497_dress_KBul: v105_mar_dress_Base
{
    displayName="[VC-497] Dress Uniform [Bulck]";
    class ItemInfo: ItemInfo
    {
        uniformClass="v105_dress_vc497_KBul";
    };
};