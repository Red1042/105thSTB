_vdir = eyeDirection player;
_adir= round(_vdir # 0 atan2 _vdir # 1);
if(_adir < 0) then {
    _adir = _adir + 360;
};