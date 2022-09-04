/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Gets item data from config crawl and makes them available for use later by being a uiNamespace variable

	Parameter(s):
	NONE

	Returns:
	NONE
*/

// ToDo: Config crawl for the data and remove already existing data that will be stored in whitelist/blacklist lists

_undefinedItems = _undefinedItems call BIS_fnc_sortAlphabetically;

// Set the data crawled items sorted
uiNamespace setVariable ["v105_Admin_UndefinedConfigItems", _undefinedItems];