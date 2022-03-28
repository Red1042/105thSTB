params ["_held"];
private ["_held","_velC","_vel","_pos","_height","_arrayDir","_dir","_addDir"];


_backpack = backpack player;
if ((_backpack != "v105_JumpPack_on"  AND _backpack != "v105_JumpPack")) exitWith {};


if (not _held) exitWith {
    v105_JumpPack_ON = false;
    playSound "OPTRE_Sounds_Jetpack_End";
    removeBackpack player;
    player addBackpack "v105_JumpPack";
    {deleteVehicle _x;} forEach v105_JumpPack_Effects;
    if(not (isNil "v105_JumpPackWaiting")) then {
        if(v105_JumpPackWaiting) exitWith {};
    };
    _velC = velocity (vehicle player);
    if(
       ((_velC select 2) == -0.4) or
       (abs(_velC select 0) < 0.001) and
       (abs(_velC select 1) < 0.001) and
       (abs(_velC select 2) < 0.001)) exitWith {
            if (!isNil "v105_JumpPack_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",v105_JumpPack_keyDownEH];};
            v105_JumpPack_keyDownEH = nil;
            player switchMove "";
    };
    v105_JumpPackWaiting = true;
    waitUntil {
        sleep 0.25;
        _velC = velocity (vehicle player);
        ((_velC select 2) == -0.4) or
        (abs(_velC select 0) < 0.001) and
        (abs(_velC select 1) < 0.001) and
        (abs(_velC select 2) < 0.001);
    };
    v105_JumpPackWaiting = false;
    if (!isNil "v105_JumpPack_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",v105_JumpPack_keyDownEH];};
    v105_JumpPack_keyDownEH = nil;
    player switchMove "";
};


if(isNil "v105_JumpPack_ON") then {
    v105_JumpPack_ON = false;
};
if(v105_JumpPack_ON) exitWith {};
playSound "OPTRE_Sounds_Jetpack_StartUp";
player playMove "AsdvPercMstpSnonWrflDnon";
v105_JumpPack_ON = true;

removeBackpack player;
player addBackpack "v105_JumpPack_on";

_fireSparks1 = "#particlesource" createVehicleLocal [0,0,0];
_fireSparks1 setParticleClass "LaptopSparks";
_fireSparks1 attachto [vehicle player,[0.225,-0.1,1.5]];
_fireSparks2 = "#particlesource" createVehicleLocal [0,0,0];
_fireSparks2 setParticleClass "LaptopSparks";
_fireSparks2 attachto [vehicle player,[-0.225,-0.1,1.5]];

v105_JumpPack_Effects = [_fireSparks1,_fireSparks2];

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
        _arrayDir = player weaponDirection currentWeapon player;
        _dir = (_arrayDir select 0) atan2 (_arrayDir select 1);
        _dir = _dir + _addDir;
        if(_dir > 360) then {
            _dir = _dir - 360;
        };
        _vel = velocity (vehicle player);
        _speed = 0.075;
        player setVelocity [
    	    (_vel select 0) + (sin _dir * _speed),
    	    (_vel select 1) + (cos _dir * _speed),
    	    (_vel select 2)
        ];
    }];
};

while {v105_JumpPack_ON} do {
    _pos = getPosATL player;
    _height = _pos select 2;
    if (_height < 90) then {
        _vel = velocity player;
        _yInc = (_vel select 2);
        if(_yInc < 0) then {
            if(_yInc < -1.5) then {
                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
            } else {
                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1];
            };
        } else {
            if(_yInc > 4) then {
                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
            } else {
	            player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 2];
	        };
	    };
    };
    playSound "OPTRE_Sounds_Jetpack_LoopShort";
    sleep .1;
};