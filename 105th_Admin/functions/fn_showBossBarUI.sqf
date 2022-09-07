/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Loads the boss bar overview (RscTitle) and sets it up

	Parameter(s):
	NONE

	Returns:
	NONE
*/

82 cutRsc ["v105_BossBar_UI","PLAIN"];
_dialog = uiNamespace getVariable "v105_BossBar_UI";
uiNamespace setVariable ["v105_BossBar_UI_Name",(_dialog displayCtrl 1000)];
uiNamespace setVariable ["v105_BossBar_UI_Progress",(_dialog displayCtrl 2500)];

(uiNamespace getVariable "v105_BossBar_UI_Progress") progressSetPosition 1;