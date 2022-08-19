/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Sets up the variables for a vehicle to use thrusters modes with hotkeys

	Parameter(s):
	_this select 0: OBJECT - vehicle for the selected thrusters modes to be enabled for
	_this select 1: BOOL - Should forward thrusters be activatable
	_this select 2: BOOL - Should afterburners be activatable

	Returns:
	NONE
*/
private ["_vic", "_thrusters", "_afterBurners"];
params ["_vic", "_thrusters", "_afterBurners"];

_vic setVariable ["OPTRE_Thruster_Usable",_thrusters];
_vic setVariable ["OPTRE_Afterburners_Usable",_afterBurners];