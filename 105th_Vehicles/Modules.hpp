class Logic;
class Module_F: Logic
{
	class AttributesBase
	{
		class Default;
		class Edit;					// Default edit box (i.e., text input field)
		class Combo;				// Default combo box (i.e., drop-down menu)
		class Checkbox;				// Default checkbox (returned value is Boolean)
		class CheckboxNumber;		// Default checkbox (returned value is Number)
		class ModuleDescription;	// Module description
		class Units;				// Selection of units on which the module is applied
	};
	// Description base classes, for more information see below
	class ModuleDescription
	{
		class AnyBrain;
	};
};



class v105_vehicleSpawnerModule: Module_F
{
	scope = 2;
	author = "105th | S-4 Logistics";
	category = "v105_functions";
	displayName = "Vehicle Spawner";
	function = "v105_Vehicles_fnc_VehicleSpawnerModule";
	//icon = "105th_Vehicles\textures\Icons\vehicleSpawner.paa";
	//picture = "105th_Vehicles\textures\Icons\vehicleSpawner.paa";
	functionPriority = 10;
	isGlobal = 1;

	class Attributes: AttributesBase
	{
		class SpawnPad: Edit
		{
		    property = "v105_VehicleSpawner_SpawnPad";
			displayName = "Spawn Pad";
			tooltip = "Object variable name of where vehicles should be spawned";
			defaultValue = """""";
		};
	};
    class ModuleDescription: ModuleDescription
	{
		description[] = {
			"Enables players to spawn vehicles on the object defined ""SpawnPad"".",
			"",
            "Usage: Sync an object to this module to add the vehicle spawner action to them."
        };
	};
};