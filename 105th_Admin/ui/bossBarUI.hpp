class RscProgressBar
{
	type = 8;
	style = 0;
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "";
	shadow = 2;
	colorFrame[] = {0, 0, 0, 1};
	colorBackground[] = {0,0,0,0.7};
	colorBar[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
};

class v105_BossBar_UI
{
	name = "v105_BossBar_UI";
	idd = 49202;
	duration = 99999999999;
	movingEnable = false;
    onLoad = "uiNamespace setVariable ['v105_BossBar_UI',_this select 0];";

	class controls
	{
        class RscText_Name: RscText
        {
        	idc = 1000;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	text = "Giant Jimmy"; //--- ToDo: Localize;
        	x = 0.438125 * safezoneW + safezoneX;
        	y = 0.016 * safezoneH + safezoneY;
        	w = 0.12375 * safezoneW;
        	h = 0.044 * safezoneH;
        	sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
		class ProgressBar_Health: RscProgressBar
		{
			idc = 2500;
        	x = 0.438125 * safezoneW + safezoneX;
        	y = 0.016 * safezoneH + safezoneY;
        	w = 0.12375 * safezoneW;
        	h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			texture = "#(argb,8,8,3)color(1,0,0,1)";
		};
	};
};