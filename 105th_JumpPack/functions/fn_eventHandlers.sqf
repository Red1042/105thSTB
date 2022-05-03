

// Strafe Control EventHandler

if(isNil "v105_JumpPack_keyDownEH") then {
    v105_JumpPack_keyDownEH = findDisplay 46 displayAddEventHandler ["KeyDown", {
        _addDir = -1;
        switch (_this select 1) do {
            case 17: /* W */
                {_addDir = 0;};
            case 31: /* S */
                {_addDir = 180;};
            case 30: /* A */
                {_addDir = 270;};
            case 32: /* D */
                {_addDir = 90;};
        };
        if(_addDir == -1) exitWith {};
        _dir = getDir player;
        _dir = _dir + _addDir;
        if(_dir > 360) then {
            _dir = _dir - 360;
        };
        _vel = velocity (vehicle player);
        _yInc = (_vel select 2);
        _speed = 0.08;
        if(_yInc <= 0) then {
            _speed = 0.035;
        };
        player setVelocity [
            (_vel select 0) + (sin _dir * _speed),
            (_vel select 1) + (cos _dir * _speed),
            (_vel select 2)
        ];
    }];
};


// GetInVehicle EventHandler
// TODO: SETUP THIS

/*
if(isNil "v105_JumpPack_getInEH") then {
    v105_JumpPack_getInEH = player addEventHandler ["GetInMan", {

    }];
};
*/