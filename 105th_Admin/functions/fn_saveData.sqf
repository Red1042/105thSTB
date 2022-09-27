/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Save the current data to the inidbi database to save it persistently

	Parameter(s):
	NONE

	Returns:
	NONE
*/
params ["_saver"];
[("[Admin Menu] Saving Data")] remoteExec ["hintSilent",_saver];

["write",["v105_Admin","blacklistedMods", v105_Admin_blacklistedMods]] call v105_Admin_inidbi;
["write",["v105_Admin","whitelistedMods", v105_Admin_whitelistedMods]] call v105_Admin_inidbi;


["write",["v105_Admin","blacklistedItems", v105_Admin_blacklistedItems]] call v105_Admin_inidbi;
["write",["v105_Admin","whitelistedItems", v105_Admin_whitelistedItems]] call v105_Admin_inidbi;

[("[Admin Menu] Saved Data")] remoteExec ["hint",_saver];