class AMS_LiteOpen
{
    displayName="<t color='#739eff'>Open AMS Lite</t>";
    position="pos cano";
    radius=15;
    shortcut="User3";
    condition="player in this and (speed this < 1)";
    statement="this execVM ""\FIR_AirWeaponSystem_US\Script\AMS\AMS_Lite\AMS_Lite_GUI_Open.sqf""";
    onlyForPlayer=0;
    priority=6;
    hideOnUse=1;
};

class I_TGT_Open
{
    animPeriod=5;
    condition="((driver this) isEqualTo player) AND (isEngineOn this)";
    displayName="<t color='#FFD700'>Open I-TGT System";
    displayNameDefault="<t color='#FFD700'>Open I-TGT System";
    onlyForPlayer=0;
    priority=6;
    radius=15;
    showWindow=0;
    statement="this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf"";";
    textToolTip="<t color='#FFD700'>Open I-TGT System";
    userActionID=80;
};