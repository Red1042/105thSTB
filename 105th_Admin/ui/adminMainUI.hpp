class v105_Admin_Main_UI
{
	name = "Admin_main";
	idd = 49200;
	movingEnable = false;
	onLoad = "uiNamespace setVariable ['v105_Admin_Main_UI',_this select 0];";

	class controls
	{
	    ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by CWO2. P. Luke, v1.063, #Kisybi)
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

        class RscText_Main: RscText
        {
        	idc = 1000;

        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	text = "Admin Menu"; //--- ToDo: Localize;
        	x = 0.37625 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.2475 * safezoneW;
        	h = 0.044 * safezoneH;
        	sizeEx = 1.5 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };

        class RscEdit_PrivateMessage: RscEdit
        {
        	idc = 1400;
        	style = 16;
        	lineSpacing = 1;
        	canModify = 1;
 	    	x = 0.479375 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.216563 * safezoneW;
        	h = 0.33 * safezoneH;
        };
        class RscListbox_Undefined: RscListBox
        {
        	idc = 1500;

        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.33 * safezoneH;
        };

        class RscButton_Close: RscButton
        {
        	idc = 1600;
        	action = "closeDialog 0;";
        	text = "Close"; //--- ToDo: Localize;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.061875 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_PrivateMessage: RscButton
        {
        	idc = 1601;
        	action = "_control = ((uiNamespace getVariable ""v105_Admin_Main_UI"") displayCtrl 1400); _targetControl = ((uiNamespace getVariable ""v105_Admin_Main_UI"") displayCtrl 2100); [(_targetControl lbText lbCurSel _targetControl),(ctrlText _control)] call v105_Admin_fnc_privateMessage;  _control ctrlSetText """";"
        	text = "Send Private Message"; //--- ToDo: Localize;
	    	x = 0.530937 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.12375 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_ViewUsers: RscButton
        {
        	idc = 1602;
        	action = "_name = (name player); [_name] spawn V105_Admin_fnc_ShowAdminViewUserUI;";
        	text = "View Users"; //--- ToDo: Localize;
        	x = 0.634062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.061875 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_Undefined_Whitelist: RscButton
        {
        	idc = 1603;
        	action = "[((uiNamespace getVariable ""v105_Admin_Main_UI"") displayCtrl 1500),lbCurSel ((uiNamespace getVariable ""v105_Admin_Main_UI"") displayCtrl 2101),false] call v105_Admin_fnc_ButtonWhitelistBlacklist;";
        	text = "Whitelist"; //--- ToDo: Localize;
        	x = 0.314375 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,0.5,0,1};
        };

        class RscButton_Undefined_Blacklist: RscButton
        {
        	idc = 1604;
        	action = "[((uiNamespace getVariable ""v105_Admin_Main_UI"") displayCtrl 1500),lbCurSel ((uiNamespace getVariable ""v105_Admin_Main_UI"") displayCtrl 2101),true] call v105_Admin_fnc_ButtonWhitelistBlacklist;";
        	text = "Blacklist"; //--- ToDo: Localize;
        	x = 0.386562 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0.5,0,0,1};
        };

        class RscCombo_PrivateMessage: RscCombo
        {
        	idc = 2100;

        	align = "CENTER";
        	style = 2;
        	valign = "top";
	    	x = 0.479375 * safezoneW + safezoneX;
        	y = 0.313 * safezoneH + safezoneY;
        	w = 0.216563 * safezoneW;
        	h = 0.033 * safezoneH;
        	sizeEx = 1.5 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscCombo_Undefined: RscCombo
        {
        	idc = 2101;

        	align = "CENTER";
        	style = 2;
        	valign = "top";
            x = 0.304062 * safezoneW + safezoneX;
            y = 0.313 * safezoneH + safezoneY;
            w = 0.144375 * safezoneW;
            h = 0.033 * safezoneH;
        	sizeEx = 1.5 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
	};
};