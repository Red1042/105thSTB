class CargoTurret_01: CargoTurret
{
	gunnerAction="passenger_inside_2";
	gunnerCompartments="Compartment2";
	memoryPointsGetInGunner="pos_cargo_l";
	memoryPointsGetInGunnerDir="pos_cargo_l_dir";
	gunnerName="Passenger (Left door)";
	proxyIndex=1;
	maxElev=15;
	minElev=-25;
	maxTurn=10;
	minTurn=-50;
	isPersonTurret=1;
	ejectDeadGunner=0;
	enabledByAnimationSource="cargoDoors";
	memoryPointGunnerOptics="";
};
class CargoTurret_02: CargoTurret_01
{
	gunnerAction="passenger_inside_2";
	gunnerCompartments="Compartment2";
	memoryPointsGetInGunner="pos_cargo_r";
	memoryPointsGetInGunnerDir="pos_cargo_r_dir";
	gunnerName="Passenger (Right door)";
	proxyIndex=2;
	maxElev=15;
	minElev=-25;
	maxTurn=50;
	minTurn=-10;
	isPersonTurret=1;
	ejectDeadGunner=0;
	enabledByAnimationSource="cargoDoors";
	memoryPointGunnerOptics="";
};