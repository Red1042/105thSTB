/* ----------------------------------------------------------------------------
Function: OPTRE_fnc_HEVRoom

Description:
	Opens/creates the dialog used for selecting the drop parameters for HEVs
	
	Modifications: Optimized code, updated commands, changed for support of Frigate and Corvette, removed manual control selection, added comments

Parameters:
	0: _console <OBJECT> - The control panel
	1: _highestCard <NUMBER> - Clearance level in OPTRE

Returns:
	Nothing

Examples:
    (begin example)

		[myConsole,10] call OPTRE_fnc_HEVRoom;

    (end)

Author:
	Big_Wilk,
	Modified by: Ansible2 // Cipher
---------------------------------------------------------------------------- */
disableSerialization;

params [
	"_console",
	"_highestCard"
];
	
createDialog "OPTRE_HEVPanel";

private _dialog = findDisplay 5600;

private _HEVMenuList = _dialog displayCtrl 1500;
private _controlMenuList = _dialog displayCtrl 1501;
(_dialog displayCtrl 1) ctrlSetStructuredText parseText ("<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa'/> "+"Logged In: "+(name player));
(_dialog displayCtrl 2) ctrlSetText (format ["%1",_highestCard]); 
private _10 = (_dialog displayCtrl 10);
private _11 = (_dialog displayCtrl 11);
private _12 = (_dialog displayCtrl 12);
private _13 = (_dialog displayCtrl 13);
private _14 = (_dialog displayCtrl 14);
private _15 = (_dialog displayCtrl 15);
private _16 = (_dialog displayCtrl 16);
private _info = (_dialog displayCtrl 1000);


OPTRE_UNSC_Console_MenusAllowed apply {
	private _menuName = getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "MenuName");
	private _function = getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "Function");
	private _securityValue = getNumber (configfile >> "cfgOptreUNSCmenus" >> _x >> "Security");
	private _i = _controlMenuList lbAdd _menuName;
	_controlMenuList lbSetData [_i, _function];
	_controlMenuList lbSetValue [_i, _securityValue];
	_controlMenuList lbSetPicture [_i,(getText (configfile >> "cfgOptreUNSCmenus" >> _x >> "icon"))];
	if (_x == "OPTRE_HEV") then {
		_controlMenuList lbSetCurSel _i;
	};
};

private _count = 0;
private _linkedPods =  _console getVariable ["OPTRE_PodsLinkedToConsole",[]];

_linkedPods apply {
	_count = _count + 1; 
	_i = _HEVMenuList lbAdd (format ["Human Entry Vehicle %1",(if (_count < 10) then {("0" + str (_count))} else {(_count)})]);
	_HEVMenuList lbSetPicture [_i, "OPTRE_Vehicles\hev\Data\icon2.paa"];
};

[5000,4500,4000] apply {
	_i = _10 lbAdd (format ["Start Height: %1m",_x]);
	_10 lbSetValue [_i, _x];
};

[3000] apply {
	_i = _11 lbAdd (format ["Atmosphere Start: %1m",_x]);
	_11 lbSetValue [_i, _x];
};

[2000] apply {
	_i = _12 lbAdd (format ["Atmosphere End: %1m",_x]);
	_12 lbSetValue [_i, _x];
};

[1000,500,300] apply {
	_i = _13 lbAdd (format ["Chute Open: %1m",_x]);
	_13 lbSetValue [_i, _x];
};

[500,200,100] apply {
	_i = _14 lbAdd (format ["Chute Detach: %1m",_x]);
	_14 lbSetValue [_i, _x];
};

[0,1] apply {
	_i = _15 lbAdd (format ["Delete Chutes On Detach: %1",
		(switch _x do {
				case 0: {"Yes"};
				case 1: {"No"}; 
			}
		)]);

	_15 lbSetValue [_i, _x];
};

[0,1] apply {
	_i = _16 lbAdd (format ["Deployment: %1",
		(switch _x do {
				case 0: {"Corvette"};
				case 1: {"Frigate"}; 
			}
		)]);

	_16 lbSetValue [_i, _x];
};

[_10,_11,_12,_13,_14,_15,_16] apply {
	_x lbSetCurSel 0;
};


(_dialog displayCtrl 1201) ctrlAddEventHandler ["Draw","
	if (getMarkerColor 'OPTRE_Local_HEVConsolePosMarker' != '') then {
		(_this select 0) drawLine [([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 0] call BIS_fnc_relPos), ([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 180] call BIS_fnc_relPos), [1,0,0,1]];
		(_this select 0) drawLine [([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 90] call BIS_fnc_relPos), ([(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 20000, 270] call BIS_fnc_relPos), [1,0,0,1]];
		_this select 0 drawEllipse [(getMarkerPos 'OPTRE_Local_HEVConsolePosMarker'), 150, 150, 0, [1, 0, 0, 0.5], '#(rgb,8,8,3)color(1,0.6,0,1)'];
	};
"];

private _countHEVs = (count _linkedPods) - 1;
While {str (findDisplay 5600) != "No display"} do {

	for "_i" from 0 to _countHEVs do {
		private _hev = _console getVariable ["OPTRE_PodsLinkedToConsole",[]] select _i;

		if (isNull (gunner _hev)) then {
			_HEVMenuList lbSetPictureColor [_i, [1, 0, 0, 1]]; 
			_HEVMenuList lbSetPictureColorSelected [_i, [1, 0, 0, 1]];
		} else {
			_HEVMenuList lbSetPictureColor [_i, [1, 1, 1, 1]];
			_HEVMenuList lbSetPictureColorSelected [_i, [0, 0, 0, 1]];
		};
	};
	
	switch (_console getVariable ["OPTRE_PodsLaunchIn",-1]) do {
		case -1: {
			_info ctrlSetStructuredText parseText "Ready To Launch<br />Now!";
			_info ctrlSetTextColor [1,1,1,1];	
		};
		case -2: {
			_info ctrlSetStructuredText parseText "Cool Down In Progress Cool Downs Lasts 60s Seconds";
			_info ctrlSetTextColor [1,0,0,1];			
		};
		default {
			_info ctrlSetText format ["HEVs Launch In: %1seconds",(_console getVariable ["OPTRE_PodsLaunchIn",-1])];
			_info ctrlSetTextColor [1,1,1,1];			
		};
		
	};

	uiSleep 0.01;
};