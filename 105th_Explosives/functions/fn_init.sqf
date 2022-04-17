#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["105th Utility", "v105_Detonate_All", ["Detonate All", "Press this keybind to detonate all ace explosives"], {
    [] spawn v105_explosives_fnc_DetonateAll;
}, {
}, [DIK_NUMPADMINUS, [false, true, false]]] call CBA_fnc_addKeybind;


[] spawn {
    waitUntil {time > 2};
    if (hasInterface) then {
        /*
        ["ace_firedPlayer", {
            _this spawn v105_explosives_fnc_Throwable;
        }] call CBA_fnc_addEventHandler;
        */
    };
};

/*  THIS IS ALL INACTIVE TESTING CODE */

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

/*hint (str(_y) + " : " + str(_p) + " : " + str(_r));*/
/*
_explosive setVectorDirAndUp [
    [sin _y * cos _p, cos _y * cos _p, sin _p],
    [[sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D
];
*/