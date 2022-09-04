/*
	Author: 105th | S-4 Logistics (Luke)

	Description:
	Checks if the vehicle pad is blocked and attempts to remove anything blocking it

	Parameter(s):
	_this select 0: OBJECT or ARRAY - vehicle pad (Object, PositionAGL or Position2D)

	Returns:
	BOOL - If pad is still blocked
*/

private ["_pad","_notBlocked","_notBlocked"];
params ["_pad"];

_notBlocked = true;

{
    _vicInfo = _x getVariable ["v105_vicInfo","none"];
    if(!(_vicInfo isEqualTo "none")) then {
        if((count crew _x) >= 1) exitWith {
            hint "Vehicle on pad is occupied";
            _notBlocked = false;
        };
        hideObject _x;
        {
          hideObject _x;
        } forEach attachedObjects _x;
        deleteVehicle _x;
    };
} forEach (_pad nearEntities [["Air", "Car", "Motorcycle", "Tank", "Slingload_01_Base_F"], 10]);

_notBlocked