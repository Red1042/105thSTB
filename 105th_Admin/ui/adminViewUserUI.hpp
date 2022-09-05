class v105_Admin_ViewUser_UI
{
	name = "Admin_viewUser";
	idd = 49201;
	movingEnable = false;
    onLoad = "v105_Admin_Change = false; uiNamespace setVariable ['v105_Admin_ViewUser_UI',_this select 0];";
    onUnload = "if(v105_Admin_Change) then {[] remoteExec [""v105_Admin_fnc_SaveData"",2]};";

	class controls
	{
	    ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by WO1. P. Luke, v1.063, #Xykyxu)
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
        class RscCombo_PlayerName: RscCombo
        {
        	idc = 2000;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	onLBSelChanged = "if(uiNamespace getVariable [""v105_Admin_loadingMenu"",false]) exitWith {}; _display = ((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 2000); [(_display lbText lbCurSel _display)] call V105_Admin_fnc_ShowAdminViewUserUI;";
	    	x = 0.365937 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.268125 * safezoneW;
        	h = 0.044 * safezoneH;
        	sizeEx = 1.5 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscButton_MainMenu: RscButton
        {
        	idc = 1600;
        	action = "[] spawn V105_Admin_fnc_ShowAdminMainUI;";
        	text = "Main Menu";
	    	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_Next: RscButton
        {
        	idc = 1600;
        	action = "_display = ((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 2000); [(_display lbText (uiNamespace getVariable [""v105_Admin_nextTargetIndex"",0]))] call V105_Admin_fnc_ShowAdminViewUserUI;";
        	// ToDo: Setup

        	text = "Next";
        	x = 0.644375 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscListbox_Mods: RscListBox
        {
        	idc = 1500;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.33 * safezoneH;
        };
        class RscText_Mods: RscText
        {
        	idc = 1001;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	text = "Mods";
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.313 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.033 * safezoneH;
        	sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscButton_Whitelist_Mod: RscButton
        {
        	idc = 1602;
        	action = "[((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1500),""Mods"",false] call v105_Admin_fnc_ButtonWhitelistBlacklist;";
        	text = "Whitelist";
        	x = 0.314375 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,0.5,0,1};
        };
        class RscButton_Blacklist_Mod: RscButton
        {
        	idc = 1603;
        	action = "[((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1500),""Mods"",true] call v105_Admin_fnc_ButtonWhitelistBlacklist;";
        	text = "Blacklist";
        	x = 0.386562 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0.5,0,0,1};
        };
        class RscListbox_Items: RscListBox
        {
        	idc = 1501;
        	x = 0.45875 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.33 * safezoneH;
        };
        class RscText_Items: RscText
        {
        	idc = 1001;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	text = "Items";
        	x = 0.45875 * safezoneW + safezoneX;
        	y = 0.313 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.033 * safezoneH;
        	sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscButton_Whitelist_Items: RscButton
        {
        	idc = 1604;
        	action = "[((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1501),""Items"",false] call v105_Admin_fnc_ButtonWhitelistBlacklist;";
        	text = "Whitelist";
        	x = 0.469062 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,0.5,0,1};
        };
        class RscButton_Blacklist_Items: RscButton
        {
        	idc = 1605;
        	action = "[((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1501),""Items"",true] call v105_Admin_fnc_ButtonWhitelistBlacklist;";
        	text = "Blacklist";
        	x = 0.54125 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0.5,0,0,1};
        };
        class RscButton_OPBan: RscButton
        {
        	idc = 1606;
        	text = "OP Ban [WIP]";
	    	x = 0.628906 * safezoneW + safezoneX;
        	y = 0.533 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0.5,0,0,1};
        };
        class RscListbox_ActiveBans: RscListBox
        {
        	idc = 1502;

	    	x = 0.618594 * safezoneW + safezoneX;
        	y = 0.599 * safezoneH + safezoneY;
        	w = 0.0721875 * safezoneW;
        	h = 0.088 * safezoneH;
        };
        class RscButton_OPPardon: RscButton
        {
        	idc = 1602;

        	text = "OP Pardon [WIP]";
	    	x = 0.628906 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,0.5,0,1};
        };
        class RscButton_Kick: RscButton
        {
        	idc = 1607;
        	action = "";//"_display = ((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 2000); [format [""#kick %1"",(_display lbText lbCurSel _display)]] remoteExec [""serverCommand"",2];";
        	text = "Kick [WIP]";
        	x = 0.628906 * safezoneW + safezoneX;
        	y = 0.467 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {1,0.65,0,1};
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
	};
};