class ProgressBaseTextHUD
{
	access = 0;
	type = CT_STATIC;
	style = ST_CENTER;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,0.8};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	shadow = 2;
	font = "puristaMedium";
	sizeEx = "0.035";
};
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
class JumpPackUI
{
	name = "JumpPackUI";
	idd = 49200;
	fadein=0;
	duration = 99999999999;
	fadeout=0;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['v105_JumpPack_UI',_this select 0];";
	class Controls
	{
		class background_heat: ProgressBaseTextHUD
		{
			idc = 37201;

			x = (0.01 * safezoneW) + safezoneX;
			y = (0.01 * safezoneH) + safezoneY;
			w = 0.3; h = 0.03;
			colorBackground[] = {0,0,0,0};
		};
		class Progress_heat: RscProgressBar
		{
			idc = 37202;

			x = (0.01 * safezoneW) + safezoneX;
			y = (0.01 * safezoneH) + safezoneY;
			w = 0.3; h = 0.03;
			texture = "#(argb,8,8,3)color(1,0,0,1)";
		};
		class background_fuel: ProgressBaseTextHUD
		{
			idc = 37203;

			x = (0.01 * safezoneW) + safezoneX;
			y = (0.03 * safezoneH) + safezoneY;
			w = 0.3; h = 0.03;
			colorBackground[] = {0,0,0,0};
		};
		class Progress_fuel: RscProgressBar
		{
			idc = 37204;

			x = (0.01 * safezoneW) + safezoneX;
			y = (0.03 * safezoneH) + safezoneY;
			w = 0.3; h = 0.03;
		};
		class background_heat2: ProgressBaseTextHUD
		{
			idc = 37205;

			x = (0.01 * safezoneW) + safezoneX;
			y = (0.05 * safezoneH) + safezoneY;
			w = 0.3; h = 0.03;
			colorBackground[] = {0,0,0,0};
		};
		class Progress_heat2: RscProgressBar
		{
			idc = 37206;

			x = (0.01 * safezoneW) + safezoneX;
			y = (0.05 * safezoneH) + safezoneY;
			w = 0.3; h = 0.03;
			texture = "#(argb,8,8,3)color(1,0,0,1)";
		};
	};
};