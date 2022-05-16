

// Strafe Control EventHandler

if(isNil "v105_Wingsuit_keyDownEH") then {
    v105_Wingsuit_keyDownEH = findDisplay 46 displayAddEventHandler ["KeyDown", {
        _addDir = -1;
        _heldKey = "";
        switch (_this select 1) do {
            case 17: /* W */
                {_addDir = 0;_speed = 2;_yChange = -1.5};
            case 31: /* S */
                {_addDir = 180;_speed = -.75;_yChange = 0.5};
        };
        if(_addDir == -1) exitWith {};
        _oldDir = getDir player;
        _dir = _oldDir + _addDir;
        if(_dir > 360) then {
            _dir = _dir - 360;
        };
        _vel = velocity player;
        player setVelocity [
            (sin _dir * _speed),
            (cos _dir * _speed),
            (_vel select 2)
        ];
    }];
};