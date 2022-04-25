class v105_Admin_ViewUser_UI
{
	name = "Admin_viewUser";
	idd = 49201;
	movingEnable = false;
    onLoad = "uiNamespace setVariable ['v105_Admin_ViewUser_UI',_this select 0];";

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
        class RscButton_Previous: RscButton
        {
        	idc = 1600;
        
        	text = "Main Menu"; //--- ToDo: Localize;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        };
        class RscButton_Next: RscButton
        {
        	idc = 1601;
        	action = "_display = ((uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 2000); [(_display lbText lbCurSel _display)] spawn V105_Admin_fnc_ShowAdminViewUserUI;";
        	text = "Search"; //--- ToDo: Localize;
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
        	text = "Mods"; //--- ToDo: Localize;
        	x = 0.304062 * safezoneW + safezoneX;
        	y = 0.313 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.033 * safezoneH;
        	sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscCombo_PlayerName: RscCombo
        {
        	idc = 2000;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	x = 0.37625 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.2475 * safezoneW;
        	h = 0.055 * safezoneH;
        	sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscButton_Whitelist_Mod: RscButton
        {
        	idc = 1602;
        	action = "_listCtrl = (uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1500; _index = lbCurSel _listCtrl; if(_index == -1) exitWith {}; _listCtrl lbSetColor [_index,[0,1,0,1]]; v105_Admin_whitelistedMods pushBackUnique (_listCtrl lbText _index);";
        
        	text = "Whitelist"; //--- ToDo: Localize;
        	x = 0.314375 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,1,0,1};
        };
        class RscButton_Blacklist_Mod: RscButton
        {
        	idc = 1603;
        	action = "_listCtrl = (uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1500; _index = lbCurSel _listCtrl; if(_index == -1) exitWith {}; _listCtrl lbSetColor [_index,[1,0,0,1]]; v105_Admin_blacklistedMods pushBackUnique (_listCtrl lbText _index);";
        
        	text = "Blacklist"; //--- ToDo: Localize;
        	x = 0.386562 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {1,0,0,1};
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
        
        	text = "Items"; //--- ToDo: Localize;
        	x = 0.45875 * safezoneW + safezoneX;
        	y = 0.313 * safezoneH + safezoneY;
        	w = 0.144375 * safezoneW;
        	h = 0.033 * safezoneH;
        	sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscButton_Whitelist_Items: RscButton
        {
        	idc = 1604;
        	action = "_listCtrl = (uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1501; _index = lbCurSel _listCtrl; if(_index == -1) exitWith {}; _listCtrl lbSetColor [_index,[0,1,0,1]]; v105_Admin_whitelistedItems pushBackUnique (((_listCtrl lbText _index) regexReplace ["" \[[0-9][0-9]]"",""""] ) regexReplace ["" \[[0-9]]"",""""]);";
        
        	text = "Whitelist"; //--- ToDo: Localize;
        	x = 0.469062 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,1,0,1};
        };
        class RscButton_Blacklist_Items: RscButton
        {
        	idc = 1605;
        	action = "_listCtrl = (uiNamespace getVariable ""v105_Admin_ViewUser_UI"") displayCtrl 1501; _index = lbCurSel _listCtrl; if(_index == -1) exitWith {}; _listCtrl lbSetColor [_index,[1,0,0,1]]; v105_Admin_blacklistedItems pushBackUnique (((_listCtrl lbText _index) regexReplace ["" \[[0-9][0-9]]"",""""]) regexReplace ["" \[[0-9]]"",""""]);";
        
        	text = "Blacklist"; //--- ToDo: Localize;
        	x = 0.54125 * safezoneW + safezoneX;
        	y = 0.709 * safezoneH + safezoneY;
        	w = 0.0515625 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {1,0,0,1};
        };
        class RscButton_OPBan: RscButton
        {
        	idc = 1606;
        
        	text = "OP Ban"; //--- ToDo: Localize;
        	x = 0.62375 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.061875 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {1,0,0,1};
        };
        class RscButton_OPPardon: RscButton
        {
        	idc = 1607;
        
        	text = "OP Pardon"; //--- ToDo: Localize;
        	x = 0.62375 * safezoneW + safezoneX;
        	y = 0.423 * safezoneH + safezoneY;
        	w = 0.061875 * safezoneW;
        	h = 0.044 * safezoneH;
        	colorBackground[] = {0,1,0,1};
        };
        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
	};
};

