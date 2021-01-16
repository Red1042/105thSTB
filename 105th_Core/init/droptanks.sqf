/*Jettison Fueltank Script By Firewill*/

_f16 = _this select 0;


_f16_pylon = GetPylonMagazines _f16;

_leftwing = _f16_pylon select 3;
_centerline = _f16_pylon select 4; 
_rightwing = _f16_pylon select 6;

if (fuel _f16 <= 0.5) then
{
_f16 animate ["fuelswitch",0];
}
else
{
_f16 setfuel 0.5;
_f16 animate ["fuelswitch",0];
};

_f16 say "FIR_ReleaseSound";

sleep 0.01;

_tankvel =[0,0,0];

if (_leftwing == "FIR_F16C_Fueltank_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\F16_Fueltank.p3d","","SpaceObject",1,100,[-1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f16];
	_f16 setPylonLoadOut [4, "FIR_Empty_P_1rnd_M", false, []];
	_f16 animateSource ["sms_4_rot",1,true]; 	
};

if (_rightwing == "FIR_F16C_Fueltank_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\F16_Fueltank.p3d","","SpaceObject",1,100,[1,-1,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f16];
	_f16 setPylonLoadOut [7, "FIR_Empty_P_1rnd_M", false, []];
	_f16 animateSource ["sms_6_rot",1,true]; 	
};

if (_centerline == "FIR_F16C_center_Fueltank_P_1rnd_M" ) then
{
	drop["\FIR_AirweaponSystem_US\data\fueltank\F16_center_Fueltank.p3d","","SpaceObject",1,100,[0,0,-1],_tankvel,0.2,10,1,0.05,[1],[[1,1,1,1]],[0],2,0,"","",_f16];
	_f16 setPylonLoadOut [5, "FIR_Empty_P_1rnd_M", false, []];
	_f16 animateSource ["sms_5_rot",1,true]; 		
};
sleep 0.1;

