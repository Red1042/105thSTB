/* Start of Base level Radio Load changes */

class OPTRE_ANPRC_515: OPTRE_ILCS_Rucksack_Black
{
    maximumLoad=350;
};
class OPTRE_ANPRC_515_Spartan: OPTRE_ILCS_Rucksack_Black_Spartan
{
	maximumLoad=350;
};
/* Green ANPRC_521 is handled in Overrides/LongRangeOverrides.hpp */
class OPTRE_ANPRC_521_Green_Spartan: OPTRE_UNSC_Rucksack_Spartan
{
	maximumLoad=400;
};

class OPTRE_ANPRC_521_Green: OPTRE_UNSC_Rucksack
{
    maximumLoad=400;
    /*
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Green";
        stripe="None";
    };
    */
};

/* End of Base level Radio changes */

/* Start of Sub Level changes of radios */

class OPTRE_ANPRC_521_Black: OPTRE_ANPRC_521_Green
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Black";
        stripe="None";
    };
};

class OPTRE_ANPRC_521_Snow: OPTRE_ANPRC_521_Green
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Snow";
        stripe="None";
    };
};

class OPTRE_ANPRC_521_Tan: OPTRE_ANPRC_521_Green
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Tan";
        stripe="None";
    };
};

/* MatGrp LRs */

class MatGrp_ANPRC_521A1_black: OPTRE_ANPRC_521_black
{
    maximumLoad=300;
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Black";
        stripe="None";
    };
};

class MatGrp_ANPRC_521A1_black_yellow: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Black";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521A1_black_green: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Black";
        stripe="Green";
    };
};
class MatGrp_ANPRC_521A1_black_white: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Black";
        stripe="White";
    };
};
class MatGrp_ANPRC_521A1_black_red: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Black";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521A1_black_blue: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Black";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521A1_Snow: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Snow";
        stripe="None";
    };
};
class MatGrp_ANPRC_521A1_Snow_yellow: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Snow";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521A1_Snow_green: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Snow";
        stripe="Green";
    };
};
class MatGrp_ANPRC_521A1_Snow_black: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Snow";
        stripe="Black";
    };
};
class MatGrp_ANPRC_521A1_Snow_red: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Snow";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521A1_Snow_blue: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Snow";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521A1_Green: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Green";
        stripe="None";
    };
};
class MatGrp_ANPRC_521A1_Green_yellow: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Green";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521A1_Green_white: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Green";
        stripe="White";
    };
};
class MatGrp_ANPRC_521A1_Green_black: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Green";
        stripe="Black";
    };
};
class MatGrp_ANPRC_521A1_Green_red: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Green";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521A1_Green_blue: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Green";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521A1_Tan: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Tan";
        stripe="None";
    };
};
class MatGrp_ANPRC_521A1_Tan_yellow: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Tan";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521A1_Tan_white: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Tan";
        stripe="White";
    };
};
class MatGrp_ANPRC_521A1_Tan_black: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Tan";
        stripe="Black";
    };
};
class MatGrp_ANPRC_521A1_Tan_red: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Tan";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521A1_Tan_blue: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="40k";
        base="Tan";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521_black_yellow: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Black";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521_black_green: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Black";
        stripe="Green";
    };
};
class MatGrp_ANPRC_521_black_white: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Black";
        stripe="White";
    };
};
class MatGrp_ANPRC_521_black_red: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Black";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521_black_blue: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Black";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521_Snow_yellow: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Snow";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521_Snow_green: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Snow";
        stripe="Green";
    };
};
class MatGrp_ANPRC_521_Snow_black: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Snow";
        stripe="Black";
    };
};
class MatGrp_ANPRC_521_Snow_red: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Snow";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521_Snow_blue: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Snow";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521_Green_yellow: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Green";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521_Green_white: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Green";
        stripe="White";
    };
};
class MatGrp_ANPRC_521_Green_black: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Green";
        stripe="Black";
    };
};
class MatGrp_ANPRC_521_Green_red: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Green";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521_Green_blue: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Green";
        stripe="Blue";
    };
};
class MatGrp_ANPRC_521_Tan_yellow: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Tan";
        stripe="Yellow";
    };
};
class MatGrp_ANPRC_521_Tan_white: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Tan";
        stripe="White";
    };
};
class MatGrp_ANPRC_521_Tan_black: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Tan";
        stripe="Black";
    };
};
class MatGrp_ANPRC_521_Tan_red: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Tan";
        stripe="Red";
    };
};
class MatGrp_ANPRC_521_Tan_blue: OPTRE_ANPRC_521_black
{
    class XtdGearInfo
    {
        model="v105_Long_Ranges";
        range="25k";
        base="Tan";
        stripe="Blue";
    };
};

/*
    Overriding to remove sub-backpacks
*/

class MatGrp_ANPRC_521A2_black: MatGrp_ANPRC_521A1_black
{
    class XtdGearInfo
    {
    };
};
