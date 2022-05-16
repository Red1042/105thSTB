if(isNil "v105_Wingsuit_keyDownEH") then {
    v105_Wingsuit_keyDownEH = findDisplay 46 displayAddEventHandler ["KeyDown", {
        _addDir = -1;
        _speed = 0;
        _yChange = 0;
        switch (_this select 1) do {
            case 17:
                {_addDir = 0;_speed = 5;_yChange = -1.5;};
            case 31:
                {_addDir = 180;_speed = -0.75;_yChange = 0.5;};
        };
        if(_addDir == -1) exitWith {};
        _oldDir = getDir player;
        _dir = _oldDir + _addDir;
        if(_dir > 360) then {
            _dir = _dir - 360;
        };
        _vel = velocity player;
        player setVelocity [
            (_vel select 0) + (sin _dir * _speed),
            (_vel select 0) + (cos _dir * _speed),
            (_vel select 2) + _yChange
        ];
    }];
};

v105_Wingsuit_oldDir = getDir player;

[] spawn {

if(isNil "v105_Wingsuit_ON") then {
    v105_Wingsuit_ON = false;
};
if(v105_Wingsuit_ON) exitWith {};
v105_Wingsuit_ON = true;

while {v105_Wingsuit_ON} do {
    _dir = getDir player;
    _changeDir = abs(v105_Wingsuit_oldDir - _dir)/90;

    hint str(_changeDir);

    _speedLoss = 1 - _changeDir;
    _vel = velocity player;
    _speed = (((abs(_vel select 0) ^ 2) + (abs(_vel select 1) ^ 2))  ^ 0.5) * _speedLoss;
    systemChat ("Speed: " + str(_speed) + "(" + str(_speedLoss) + ")");
    player setVelocity [
        (sin _dir * _speed),
        (cos _dir * _speed),
        -2
    ];

    v105_Wingsuit_oldDir = _dir;
    uiSleep .2;
};
};