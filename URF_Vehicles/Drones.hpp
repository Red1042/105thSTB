class UAV_06_antimine_base_F;
class v105_URF_antimine_UAV: UAV_06_antimine_base_F
{
		side=0;
		scope=2;
		scopeCurator=2;
		forceInGarage=0;
		displayName="UAV-23 Drone (Armed)";
		editorCategory="HOW_EdCat_URF";
		editorSubcategory="HOW_URF_EdSubCat_Aircraft";
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Orange\UAV_06\Data\C_IDAP_UAV_06_antimine_CO.paa"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\a3\Air_F_Orange\UAV_06\Data\UI\UAV_06_Demining_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=200;
						hardpoints[]=
						{
							"ANTIMINE_DRONE_PYLON","v105_UnguidedRockets","v105_Drones"
						};
						attachment="PylonRack_4Rnd_BombDemine_01_F";
						bay=-1;
						priority=1;
						UIposition[]={0.31999999,0.28};
						turret[]={};
						mirroredMissilePos=0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
						range=50;
						resource="RscCustomInfoMineDetect";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
						range=50;
						resource="RscCustomInfoMineDetect";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
				};
			};
		};
};