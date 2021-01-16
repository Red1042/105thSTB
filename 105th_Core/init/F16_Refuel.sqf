/*Loadout Refuel by Firewill*/
if (not Local player) Exitwith {};
_f16 = vehicle Player;

_fuelcount = {_x == "FIR_f16C_Fueltank_1rnd_M"} count magazines _f16;

_f16 vehiclechat "Refueling..";

sleep 5;

_f16_pylon = GetPylonMagazines _f16;


_fuelcount = {_x == "FIR_F16C_Fueltank_P_1rnd_M"} count _f16_pylon;
_fuelcount2 = {_x == "FIR_F16C_center_Fueltank_P_1rnd_M"} count _f16_pylon;

switch (_fuelcount) do
{
    case 2:
    {
		if (_fuelcount2 == 1) then
		{
			_f16 setfuel 1;
			_f16 animate ["fuelswitch",1];		
		}
		else
		{
			_f16 setfuel 0.9;
			_f16 animate ["fuelswitch",1];			
		};
    };
    case 1:
    {
		if (_fuelcount2 == 1) then
		{
			_f16 setfuel 0.8;
			_f16 animate ["fuelswitch",1];		
		}
		else
		{
			_f16 setfuel 0.7;
			_f16 animate ["fuelswitch",1];			
		};
    };
    case 0:
    {
		if (_fuelcount2 == 1) then
		{
			_f16 setfuel 0.6;
			_f16 animate ["fuelswitch",1];		
		}
		else
		{
			_f16 setfuel 0.5;
			_f16 animate ["fuelswitch",0];			
		};
    };
};

_f16 vehiclechat "Refuel is Completed!";