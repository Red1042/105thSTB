#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["105th Utility", "v105_JumpPack_Use", ["Jump Pack Use", "Hold this key to activate JumpPack"], {
    [true] spawn v105_JumpPack_fnc_JumpPack;
}, {
    [false] spawn v105_JumpPack_fnc_JumpPack;
}, [DIK_SPACE, [true, false, false]]] call CBA_fnc_addKeybind;

// Removing fall damage

[] spawn {
    waitUntil {time > 5};
    if (hasInterface) then {
        waitUntil {sleep 1; player == player};
        waitUntil {sleep 1; alive player};
        player removeAllEventHandlers "HandleDamage";
        player addEventHandler ["HandleDamage", {
            _damage = _this select 2;
            _type = _this select 4;
            _backpack = backpack player;
            if (_type == "") then {
                if(_damage > 0.1) then {
                    [_this select 0,_this select 1,(_damage - 0.1),_this select 3,_this select 4,_this select 5,_this select 6,_this select 7] call ACE_medical_engine_fnc_handleDamage;
                } else {
                    0;
                };
            } else {
                _this call ACE_medical_engine_fnc_handleDamage;
            };
        }];
    };
};