/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Post-Init file for the HUD Expansion

	Parameter(s):
	NONE

	Returns:
	NONE
*/

#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["105th HUD", "v105_HUD_toggle", ["Toggle HUD", "Press to toggle HUD on/off"], {
    [true] call v105_HUD_fnc_ToggleHUD;
}, {
    [false] call v105_HUD_fnc_ToggleHUD;
}, [DIK_APPS, [true, false, false]]] call CBA_fnc_addKeybind;