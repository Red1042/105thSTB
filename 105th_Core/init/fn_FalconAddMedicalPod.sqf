_falcon = _this select 0;

// Falcon ACTION

_falcon addAction ["Get in Medical Pod", {   
    _falcon = _this select 0; 
    _caller = _this select 1; 
    _gun = attachedObjects _falcon select 0; 
    _caller moveInAny _gun; 
}, [], 5.2, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget))", 5, false];

// ATTACH
if((isDedicated) OR (hasInterface && isServer)) then
{
	_falcon = _this select 0;
	[] spawn {sleep 3;};

  _MedicalPod = "v105_Land_Medical_Covered_Pod" createVehicle position _falcon;
  
  _MedicalPod attachTo [_falcon, [-0.035,-1.1,-0.43]];
  _MedicalPod setObjectScale 0.82;



  // MOVE OR DEATH

  _falcon addEventHandler ["Killed", 
  {
      params ["_unit", "_killer", "_instigator", "_useEffects"];
      {
      _x setDamage 1;
    } forEach attachedObjects _unit;
  }];

  _falcon addEventHandler ["Deleted", 
  {
      params ["_entity"];
      {
      deleteVehicle _x;
    } forEach attachedObjects _entity;
  }];
};