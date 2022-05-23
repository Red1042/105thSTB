removeAllActions player;
player addAction ["Activate Wingsuit", {
if(isNil "v105_Wingsuit_keyDownEH") then {
    v105_Wingsuit_keyDownEH = findDisplay 46 displayAddEventHandler ["KeyDown", {
        _addDir = -1;
        _speed = 0;
        _yChange = 0;
        _vel = velocity player;
       _reduceSpeed = false;
        _velY = (_vel select 2);
        switch (_this select 1) do {
            case 17:
                {
                    if(_velY >= -40) then {
                        _addDir = 0; _speed = 1; _yChange = -0.5;
                    };
                };
            case 31:
                {
                    if(_velY <= -20) then {
                    _addDir = 180; _speed = 1; _yChange = 0.15; _reduceSpeed = true;
                    };
                };
        };
        if(_addDir == -1) exitWith {};
        _oldDir = getDir player;
        _dir = _oldDir + _addDir;
        if(_dir > 360) then {
            _dir = _dir - 360;
        };
        if(_speed == 0 and _yChange == 0) exitWith {};
        if(_reduceSpeed) then {
            player setVelocity [
                (_vel select 0) - (cos _dir * _speed),
                (_vel select 1) - (sin _dir * _speed),
                (_velY + _yChange)
            ];
        } else {y
            player setVelocity [
                (_vel select 0) + (sin _dir * _speed),
                (_vel select 1) + (cos _dir * _speed),
                (_velY + _yChange)
            ];
        };
    }];
};

[] spawn {

if(isNil "v105_Wingsuit_ON") then {
    v105_Wingsuit_ON = false;
};
if(v105_Wingsuit_ON) exitWith {};
v105_Wingsuit_ON = true;

while {v105_Wingsuit_ON && !(isTouchingGround player) && (vehicle player == player)} do {
    _dir = getDir player;

    _vel = velocity player;
    _speed = (((abs(_vel select 0) ^ 2) + (abs(_vel select 1) ^ 2))  ^ 0.5) + 8;
    systemChat ("Speed: " + str(_speed));
    player setVelocity [
        (sin _dir * _speed),
        (cos _dir * _speed),
        (_vel select 2) + 0.85
    ];
    uiSleep .1;
};
v105_Wingsuit_ON = false;
if (!isNil "v105_Wingsuit_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",v105_Wingsuit_keyDownEH]; v105_Wingsuit_keyDownEH = nil;};
};
}];