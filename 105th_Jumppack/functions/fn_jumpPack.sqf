params ["_held"];
private ["_held","_velC","_vel","_pos","_height","_arrayDir","_dir","_addDir"];


_backpack = backpack player;
if ((_backpack != "v105_JumpPack_on"  AND _backpack != "v105_JumpPack")) exitWith {};
if ((player getVariable ["ACE_isUnconscious", false]) or (not (alive player)) or (vehicle player != player)) exitWith {};


if (not _held) exitWith {
    v105_JumpPack_ON = false;
    WMO_Enabled = true;
    playSound "OPTRE_Sounds_Jetpack_End";
    _backpackItems = backpackItems player;
    removeBackpack player;
    player addBackpack "v105_JumpPack";
    {player addItemToBackpack _x;} forEach _backpackItems;
    if(not (isNil "v105_JumpPack_Effects")) then {
        {deleteVehicle _x;} forEach v105_JumpPack_Effects;
    };
    v105_JumpPack_Effects = nil;
    if(not (isNil "v105_JumpPackWaiting")) then {
        if(v105_JumpPackWaiting) exitWith {};
    };
    /*
    _velC = velocity (vehicle player);
    if(
       ((_velC select 2) == -0.4) or
       (abs(_velC select 0) < 0.001) and
       (abs(_velC select 1) < 0.001) and
       (abs(_velC select 2) < 0.001)) exitWith {
            if (!isNil "v105_JumpPack_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",v105_JumpPack_keyDownEH];};
            v105_JumpPack_keyDownEH = nil;
            //player switchMove "";
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
    */
    if(not isTouchingGround player) then {
        waitUntil{
            sleep 0.2;
            (isTouchingGround player);
        };
    };
    v105_JumpPackWaiting = false;
    if (!isNil "v105_JumpPack_keyDownEH") then {(findDisplay 46) displayRemoveEventHandler ["KeyDown",v105_JumpPack_keyDownEH];};
    v105_JumpPack_keyDownEH = nil;
    //player switchMove "";
};

_heat = player getVariable ["v105_JumpPack_heat",0];
_fuel = player getVariable ["v105_JumpPack_fuel",1];
if(_heat >= 1 and _fuel <= 0) exitWith {};

if(isNil "v105_JumpPack_UI") then {
    // Control Variables
    82 cutRsc ["JumpPackUI","PLAIN"];
    _dialog = uiNamespace getVariable "v105_JumpPack_UI";
     uiNamespace setVariable ["v105_JumpPack_UI_heat",(_dialog displayCtrl 37202)];
     uiNamespace setVariable ["v105_JumpPack_UI_fuel",(_dialog displayCtrl 37204)];
     uiNamespace setVariable ["v105_JumpPack_UI_heat2",(_dialog displayCtrl 37206)];

    // Fuel Variables
    _heat = player getVariable ["v105_JumpPack_heat",0];
    _fuel = player getVariable ["v105_JumpPack_fuel",1];

    (uiNamespace getVariable "v105_JumpPack_UI_heat") progressSetPosition _heat;
    (uiNamespace getVariable "v105_JumpPack_UI_heat2") progressSetPosition _heat;
    (uiNamespace getVariable "v105_JumpPack_UI_fuel")  progressSetPosition _fuel;

    player setVariable ["v105_JumpPack_heat",_heat,false];
    player setVariable ["v105_JumpPack_fuel",_fuel,false];
};

if(isNil "v105_JumpPack_ON") then {
    v105_JumpPack_ON = false;
};
if(v105_JumpPack_ON) exitWith {};
playSound "OPTRE_Sounds_Jetpack_StartUp";
player playMoveNow "PlayerStand";
v105_JumpPack_ON = true;
WMO_Enabled = false;

_backpackItems = backpackItems player;
removeBackpack player;
player addBackpack "v105_JumpPack_on";
{player addItemToBackpack _x;} forEach _backpackItems;

if(isNil "v105_JumpPack_Effects") then {
    _fireSparks1 = "#particlesource" createVehicleLocal [0,0,0];
    _fireSparks1 setParticleClass "LaptopSparks";
    _fireSparks1 attachto [vehicle player,[0.225,-0.1,1.5]];
    _fireSparks2 = "#particlesource" createVehicleLocal [0,0,0];
    _fireSparks2 setParticleClass "LaptopSparks";
    _fireSparks2 attachto [vehicle player,[-0.225,-0.1,1.5]];

    v105_JumpPack_Effects = [_fireSparks1,_fireSparks2];
};

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

_stop = false;

while {v105_JumpPack_ON and (not _stop)} do {
	_heat = player getVariable ["v105_JumpPack_heat",0];
	_fuel = player getVariable ["v105_JumpPack_fuel",1];

	// Normal Fuel & Heat Changes
	_newHeat = _heat + 0.035;
    _newFuel = _fuel - 0.01;

    _pos = getPosATL player;
    _height = _pos select 2;
    if (_height < 90) then {
        _vel = velocity player;
        _yInc = (_vel select 2);
        if (not (isTouchingGround player)) then {
        if(_yInc < 0) then {
            // Half Fuel & Heat Changes
	        _newHeat = _heat + 0.01;
	        _newFuel = _fuel - 0.0035;
            if(_yInc < -1.5) then {
                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
            } else {
                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 0.8];
            };
        } else {
            if(_yInc > 4) then {
                player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 1.6];
            } else {
	            player setVelocity [_vel select 0,_vel select 1,(_vel select 2) + 2];
	        };
	    };
	    } else {
	        player setVelocity [_vel select 0,_vel select 1,1.6];
	    }
    };

    player setVariable ["v105_JumpPack_heat",_newHeat,false];
	player setVariable ["v105_JumpPack_fuel",_newFuel,false];

	(uiNamespace getVariable "v105_JumpPack_UI_heat") progressSetPosition _newHeat;
    (uiNamespace getVariable "v105_JumpPack_UI_heat2") progressSetPosition _newHeat;
    (uiNamespace getVariable "v105_JumpPack_UI_fuel") progressSetPosition _newFuel;

    if(_newFuel <= 0 or _newHeat >= 1) then {
       _stop = true;
        v105_JumpPack_ON = false;
        playSound "OPTRE_Sounds_Jetpack_End";
        _backpackItems = backpackItems player;
        removeBackpack player;
        player addBackpack "v105_JumpPack";
        {player addItemToBackpack _x;} forEach _backpackItems;
        if(not (isNil "v105_JumpPack_Effects")) then {
            {deleteVehicle _x;} forEach v105_JumpPack_Effects;
        };
        v105_JumpPack_Effects = nil;
    };

    playSound "OPTRE_Sounds_Jetpack_LoopShort";
    sleep .1;
};

sleep 1;
_change = true;
if(player getVariable ["v105_JumpPack_Refuelling",false]) exitWith {};
player setVariable ["v105_JumpPack_Refuelling",true];
while {(not v105_JumpPack_ON) and _change} do {
	_heat = player getVariable ["v105_JumpPack_heat",0];
	_fuel = player getVariable ["v105_JumpPack_fuel",1];
    _change = false;
    if(_heat > 0) then {
        _change = true;
        _newHeat = _heat - 0.035;
        player setVariable ["v105_JumpPack_heat",_newHeat,false];
	    (uiNamespace getVariable "v105_JumpPack_UI_heat") progressSetPosition _newHeat;
        (uiNamespace getVariable "v105_JumpPack_UI_heat2") progressSetPosition _newHeat;
    };
    if(_fuel < 1) then {
        _change = true;
        _newFuel = _fuel + 0.002;
        player setVariable ["v105_JumpPack_fuel",_newFuel,false];
        (uiNamespace getVariable "v105_JumpPack_UI_fuel") progressSetPosition _newFuel;
    };
    sleep .1;
};
player setVariable ["v105_JumpPack_Refuelling",false];

_heat = player getVariable ["v105_JumpPack_heat",0];
_fuel = player getVariable ["v105_JumpPack_fuel",1];
if(_heat <= 0 and _fuel >= 1) then {
    82 cutText ["", "PLAIN",0];
}