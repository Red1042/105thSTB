#include "\a3\ui_f\hpp\definecommongrids.inc"

class v105_Vehicle_VehicleSpawner_UI
{
	name = "v105_Vehicle_VehicleSpawner";
	idd = 49222;
	movingEnable = false;
    onLoad = "uiNamespace setVariable ['v105_Vehicle_VehicleSpawner_UI',_this select 0];";

	class controls
	{
	    ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT START (by CWO2. P. Luke, v1.063, #Suzuba)
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
        class RscButton_Close: RscButton
        {
        	idc = 1600;
        	text = "Close";
        	action = "closeDialog 0;";
        	x = 0.634062 * safezoneW + safezoneX;
        	y = 0.247 * safezoneH + safezoneY;
        	w = 0.061875 * safezoneW;
        	h = 0.066 * safezoneH;
        };
        class RscButton_Logs: RscButton
        {
        	idc = 1601;
        	text = "Logs";
        	action = ""; // ToDo: Setup
 	        x = 0.304062 * safezoneW + safezoneX;
 	        y = 0.247 * safezoneH + safezoneY;
 	        w = 0.061875 * safezoneW;
 	        h = 0.066 * safezoneH;
        };
         class RscButton_Spawn: RscButton
        {
	        idc = 1602;
	        text = "Spawn";
	        action = "[] spawn v105_Vehicles_fnc_SpawnVehicle;";
    	    x = 0.634062 * safezoneW + safezoneX;
    	    y = 0.599 * safezoneH + safezoneY;
    	    w = 0.061875 * safezoneW;
    	    h = 0.066 * safezoneH;
	        colorBackground[] = {0,0.5,0,1};
        };
        class RscButton_Despawn: RscButton
        {
	        idc = 1603;
    	    text = "Despawn";
    	    action = "[if(!((uiNamespace getVariable ['v105_Vehicle_VehicleSpawner_Pad',nil])] call v105_Vehicles_fnc_DespawnVehicle;)) exitWith {}; ((uiNamespace getVariable ""v105_Vehicle_VehicleSpawner_UI"") displayCtrl 1003) ctrlSetText ""None"";";
    	    x = 0.634062 * safezoneW + safezoneX;
            y = 0.687 * safezoneH + safezoneY;
    	    w = 0.061875 * safezoneW;
    	    h = 0.066 * safezoneH;
	        colorBackground[] = {0.5,0,0,1};
        };
        class RscListBox_Vehicles: RscListBox
        {
	        idc = 1500;
	        onLBSelChanged = "_this call V105_Vehicles_fnc_ShowTypesAndLiveries;"
	        colorPicture[] = {1,1,1,1};
	        colorPictureSelected[] = {0,0,0,1};
	        colorSelect2[] = {0,0,0,1};
    	    x = 0.304062 * safezoneW + safezoneX;
    	    y = 0.599 * safezoneH + safezoneY;
        	w = 0.103125 * safezoneW;
        	h = 0.154 * safezoneH;
        };
        class RscListBox_Types: RscListBox
        {
        	idc = 1501;
        	colorSelect2[] = {1,1,1,1};
    	    x = 0.4175 * safezoneW + safezoneX;
    	    y = 0.599 * safezoneH + safezoneY;
    	    w = 0.0928125 * safezoneW;
    	    h = 0.154 * safezoneH;
        };
        class RscListBox_Liveries: RscListBox
        {
	        idc = 1502;
	        colorSelect2[] = {1,1,1,1};
    	    x = 0.520625 * safezoneW + safezoneX;
    	    y = 0.599 * safezoneH + safezoneY;
    	    w = 0.0928125 * safezoneW;
    	    h = 0.154 * safezoneH;
        };
        class RscText_Vehicle: RscText
        {
    	    idc = 1000;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	text = "Vehicle";
    	    x = 0.319531 * safezoneW + safezoneX;
    	    y = 0.544 * safezoneH + safezoneY;
    	    w = 0.07425 * safezoneW;
    	    h = 0.055 * safezoneH;
    	    sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscText_Type: RscText
        {
	        idc = 1001;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
    	    text = "Type";
    	    x = 0.427812 * safezoneW + safezoneX;
    	    y = 0.544 * safezoneH + safezoneY;
    	    w = 0.07425 * safezoneW;
    	    h = 0.055 * safezoneH;
	        sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscText_Livery: RscText
        {
	        idc = 1002;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
    	    text = "Livery";
    	    x = 0.54125 * safezoneW + safezoneX;
    	    y = 0.544 * safezoneH + safezoneY;
    	    w = 0.0556875 * safezoneW;
    	    h = 0.055 * safezoneH;
	        sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscText_ActiveName: RscText
        {
        	idc = 1003;
        	align = "CENTER";
        	style = 2;
        	valign = "top";
        	text = "None";
	        x = 0.365937 * safezoneW + safezoneX;
	        y = 0.247 * safezoneH + safezoneY;
	        w = 0.268125 * safezoneW;
	        h = 0.066 * safezoneH;
	        sizeEx = 2 *(((safezoneW / safezoneH) min 1.2) / 1.2) / 25) *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
        };
        class RscPicture_ActiveView: RscPicture
        {
        	idc = 1201;
	        x = 0.37625 * safezoneW + safezoneX;
	        y = 0.313 * safezoneH + safezoneY;
	        w = 0.2475 * safezoneW;
	        h = 0.242 * safezoneH;
        	colorBackground[] = {1,0,0,1};
        	colorActive[] = {1,0,0,1};
        };

        ////////////////////////////////////////////////////////
        // GUI EDITOR OUTPUT END
        ////////////////////////////////////////////////////////
    };
};
