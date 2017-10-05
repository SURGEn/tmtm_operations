// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Create a list of mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [];

// Make all initial mission objects editable by all curators
{
	private "_curator";
	_curator = _x;
	{
		// Make sure object is not already in editable objects and is not black listed
		if !(_x in curatorEditableObjects _curator) then {
			_curator addCuratorEditableObjects [[_x], true];
		};
	} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";
} forEach allCurators;

// Set the time to half-speed
setTimeMultiplier 0.5;

// Create our tasks
if (isNil "zeus_unit") then {
	[true, "destroy_aa", ["Neutralize the enemy Anti-Air network by destroying or disabling the anti-air guns.", "Destroy AA Net", ""], objNull, "ASSIGNED", 100, true, "target", true] call BIS_fnc_taskCreate;
	[true, ["destroy_aa1", "destroy_aa"], ["Destroy the Anti-Air gun south of Vagalala.", "Destroy Anti-Air Gun", ""], aa1, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[true, ["destroy_aa2", "destroy_aa"], ["Destroy the Anti-Air gun north of the Red Spring surface mine.", "Destroy Anti-Air Gun", ""], aa2, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[true, ["destroy_aa3", "destroy_aa"], ["Destroy the Anti-Air gun south of Imone.", "Destroy Anti-Air Gun", ""], aa3, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[true, ["destroy_aa4", "destroy_aa"], ["Destroy the Anti-Air guns at the Red Spring surface mine.", "Destroy Anti-Air Guns", ""], aa4, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[true, "destroy_ammo", ["Destroy the enemy ammo caches.", "Destroy Ammo Caches", ""], objNull, "CREATED", 70, true, "destroy", true] call BIS_fnc_taskCreate;
	[true, ["destroy_ammo1", "destroy_ammo"], ["Destroy the enemy ammo cache located in the town of Imone.", "Destroy Ammo Cache", ""], ammo1, "CREATED", 0, true, "destroy", true] call BIS_fnc_taskCreate;
	[true, ["destroy_ammo2", "destroy_ammo"], ["Destroy the enemy ammo cache located at Comms Bravo.", "Destroy Ammo Cache", ""], ammo2, "CREATED", 0, true, "destroy", true] call BIS_fnc_taskCreate;
} else {
	[[true, zeus_unit], "destroy_aa", ["Neutralize the enemy Anti-Air network by destroying or disabling the anti-air guns.", "Destroy AA Net", ""], objNull, "ASSIGNED", 100, true, "target", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], ["destroy_aa1", "destroy_aa"], ["Destroy the Anti-Air gun south of Vagalala.", "Destroy Anti-Air Gun", ""], aa1, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], ["destroy_aa2", "destroy_aa"], ["Destroy the Anti-Air gun north of the Red Spring surface mine.", "Destroy Anti-Air Gun", ""], aa2, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], ["destroy_aa3", "destroy_aa"], ["Destroy the Anti-Air gun south of Imone.", "Destroy Anti-Air Gun", ""], aa3, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], ["destroy_aa4", "destroy_aa"], ["Destroy the Anti-Air guns at the Red Spring surface mine.", "Destroy Anti-Air Guns", ""], aa4, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], "destroy_ammo", ["Destroy the enemy ammo caches.", "Destroy Ammo Caches", ""], objNull, "CREATED", 70, true, "destroy", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], ["destroy_ammo1", "destroy_ammo"], ["Destroy the enemy ammo cache located in the town of Imone.", "Destroy Ammo Cache", ""], ammo1, "CREATED", 0, true, "destroy", true] call BIS_fnc_taskCreate;
	[[true, zeus_unit], ["destroy_ammo2", "destroy_ammo"], ["Destroy the enemy ammo cache located at Comms Bravo.", "Destroy Ammo Cache", ""], ammo2, "CREATED", 0, true, "destroy", true] call BIS_fnc_taskCreate;
};

// Add the respawn positions
[missionNamespace, "respawn_stgeorge", "Saint-George Airbase"] call BIS_fnc_addRespawnPosition;
[missionNamespace, cmd_veh, "Command Vehicle"] call BIS_fnc_addRespawnPosition;
