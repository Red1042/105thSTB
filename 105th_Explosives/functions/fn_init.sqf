#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["105th Utility", "v105_Detonate_All", ["Detonate All", "Press this keybind to detonate all ace explosives"], {
    [] spawn v105_explosives_fnc_DetonateAll;
}, {
}, [DIK_NUMPADMINUS, [false, true, false]]] call CBA_fnc_addKeybind;


[] spawn {
    waitUntil {time > 2};
    if (hasInterface) then {
        ["ace_firedPlayer", {
            params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
            if(not (_unit isEqualTo player) or _weapon != "throw" or typeOf _projectile != "DISABLED") exitWith {};
            [_projectile] spawn {
                params["_projectile"];
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
                /*_y = 0; _p = 0; _r = 0;*/
                if((count _unsorted) >= 1) then {
                    _closest = _unsorted select 0;
                    {if ((getPos _x distance _pos) < (getPos _closest distance _pos)) then {_closest = _x}} forEach _unsorted;
                    if(not _isWater) then {
                        _pos = (ATLToASL _pos);
                    };
                    _intersection = (lineIntersectsSurfaces [_pos, getPosASL _closest, player, objNull, true, 1]) select 0;
                    _intersectPos =  _intersection select 0;
                    /*
                    _intersectionsDown = (lineIntersectsSurfaces [_pos,[_pos select 0, _pos select 1, (_pos select 2) - 0.2], player, player, true, 1]);
                    if(count _intersectionsDown <= 0) then {
                        _intersectionsUp = (lineIntersectsSurfaces [_pos,[_pos select 0, _pos select 1, (_pos select 2) + 0.2], player, player, true, 1]);
                        if(count _intersectionsUp <= 0) then {
                            _dir = (getPosASL _closest) getDir _intersectPos;
                            if(_dir > 45 and _dir <= 135) then {
                                _p = 90;
                            };
                            if(_dir > 135 and _dir <= 225) then {
                                _p = 180;
                            };
                            if(_dir > 225 and _dir <= 315) then {
                                _p = 270;
                            };
                        } else {
                            _r = 180;
                        };
                    };
                    */
                    systemChat str (_intersection);
                    systemChat str (_closest);
                };
                private _explosive = "C7_Remote_Ammo" createVehicle _pos;
                if(not (isNil "_closest")) then {
                    _explosive setPosASL _intersectPos;
                    /*hint (str(_y) + " : " + str(_p) + " : " + str(_r));*/
                    /*
                    _explosive setVectorDirAndUp [
                    	 [sin _y * cos _p, cos _y * cos _p, sin _p],
                    	 [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D
                    ];
                    */
                    [_explosive, _closest] call BIS_fnc_attachToRelative;
                } else {
                    hint "not-attached";
                };
                [player, _explosive, "ACE_M26_Clacker"] call ace_explosives_fnc_connectExplosive;
            };
        }] call CBA_fnc_addEventHandler;
    };
};