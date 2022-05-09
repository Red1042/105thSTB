params ["_posASL","_vel"];

_currentY = _posASL select 2;
if(_currentY == 0 or _vel select 2 <= 0 or isTouchingGround player or (stance player) == "UNDEFINED") exitWith {false};

if(abs(_currentY - v105_JumpPack_lastY) <= 0.02) then {
    if(v105_JumpPack_stuckCount >= 3) exitWith {
        player setVelocity [_vel select 0,_vel select 1,-0.5];
        v105_JumpPack_timesStuck = v105_JumpPack_timesStuck + 1;
        hint ("[JumpPack] Detected stuck (" + str (v105_JumpPack_timesStuck) + ")");
        true
    };
    v105_JumpPack_stuckCount = v105_JumpPack_stuckCount + 1;
    false
} else {
    v105_JumpPack_stuckCount = 0;
    v105_JumpPack_lastY = _currentY;
    false
};