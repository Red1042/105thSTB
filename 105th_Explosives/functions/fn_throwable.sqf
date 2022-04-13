params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if(not (_unit isEqualTo player) or _weapon != "throw" or typeOf _projectile != "INACTIVE") exitWith {};


sleep .5;
_lastVectorMag = (vectorMagnitude velocity _projectile);

waitUntil{
   sleep .05;
   _vectorMag = (vectorMagnitude velocity _projectile);
   if (_vectorMag < 1.8 or (abs(_vectorMag - _lastVectorMag) > 4)) then {
        true;
   } else {
       _lastVectorMag = _vectorMag;
       false;
   };
};

_pos = getPosATL _projectile;
_isWater = surfaceIsWater _pos;
if(_isWater) then {
    _pos = getPosASL _projectile;
} else {
    if(_pos select 2 < 0.25) then {
        _pos = [_pos select 0,_pos select 1,0];
    };
};

deleteVehicle _projectile;
_unsorted = _pos nearEntities [["Air", "Car", "Motorcycle", "Tank"], 10];
_closest = nil;
_intersectPos = nil;

if((count _unsorted) >= 1) then {
    _closest = _unsorted select 0;
    {if ((getPos _x distance _pos) < (getPos _closest distance _pos)) then {_closest = _x}} forEach _unsorted;

    if(not _isWater) then {
        _pos = (ATLToASL _pos);
    };
    _intersection = (lineIntersectsSurfaces [_pos, getPosASL _closest, player, objNull, true, 1]) select 0;
    _intersectPos =  _intersection select 0;
};

private _explosive = "C7_Remote_Ammo" createVehicle _pos;
if(not (isNil "_closest")) then {
    _explosive setPosASL _intersectPos;
    [_explosive, _closest] call BIS_fnc_attachToRelative;
} else {
    hint "not-attached";
};
[player, _explosive, "ACE_M26_Clacker"] call ace_explosives_fnc_connectExplosive;