class v105_Admin_Main_UI
{
	name = "Admin_main";
	idd = 49200;
	movingEnable = false;
	onLoad = "uiNamespace setVariable ['v105_Admin_Main_UI',_this select 0];";

	class controls
	{
	    ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by CWO2. P. Luke, v1.063, #Maqive)
        ////////////////////////////////////////////////////////

        class RscPicture_Background: RscPicture
        {
        	idc = 1200;

        	text = "#(argb,8,8,3)color(0,0,0,0.7)";
        	x = 0.29375 * safezoneW + safezoneX;
        	y = 0.225 * safezoneH + safezoneY;
        	w = 0.4125 * safezoneW;
        	h = 0.55 * safezoneH;
        };
        class RscButton_Previous: RscButton
        {
        	idc = 1600;

        	text = "Close"; //--- ToDo: Localize;
        	x = 0.634062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.061875 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_PrivateMessage: RscButton
        {
        	idc = 1601;

        	text = "Send Private Message"; //--- ToDo: Localize;
        	x = 0.314375 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.103125 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_OPPardon: RscButton
        {
        	idc = 1602;

        	text = "OP Pardon"; //--- ToDo: Localize;
        	x = 0.613437 * safezoneW + safezoneX;
        	y = 0.665 * safezoneH + safezoneY;
        	w = 0.0721875 * safezoneW;
        	h = 0.066 * safezoneH;
        	colorBackground[] = {0,0.5,0,1};
        };
        class RscListbox_ActiveBans: RscListbox
        {
        	idc = 1500;
        	x = 0.448438 * safezoneW + safezoneX;
        	y = 0.555 * safezoneH + safezoneY;
        	w = 0.0825 * safezoneW;
        	h = 0.132 * safezoneH;
        };
        class RscText_1000: RscText
        {
        	idc = 1000;
        	text = "105th Admin"; //--- ToDo: Localize;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.319688 * safezoneW;
        	h = 0.055 * safezoneH;
        };
        class RscCombo_2100: RscCombo
        {
        	idc = 2100;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.489 * safezoneH + safezoneY;
        	w = 0.12375 * safezoneW;
        	h = 0.022 * safezoneH;
        };

        class RscEdit_1400: RscEdit
        {
        	idc = 1400;
        	style = 16;
            lineSpacing = 1;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.533 * safezoneH + safezoneY;
        	w = 0.12375 * safezoneW;
        	h = 0.154 * safezoneH;
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
	};
};