// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Initialize our headless client variables
sxp_hc_clientID = 0;
sxp_hc_enabled = false;
sxp_hc_zeusEnabled = true;

// Push the HC variables to all clients
{
	publicVariable _x;
} forEach ["sxp_hc_clientID", "sxp_hc_enabled", "sxp_hc_zeusEnabled"];

// Add the event handler for handling HC disconnects
addMissionEventHandler ["PlayerDisconnected", {_this call SXP_fnc_hcDisconnect;}];

// Create a list of mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [
	laptop_1,
	laptop_2,
	laptop_3,
	device
];

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

// Call the script to handle initial task setup
[] execVM "scripts\tasks.sqf";

// Add any mission specific code after this point

// Create our intel and task arrays
missionNamespace setVariable ["taskArray", ["secure_fob", "secure_hospital", "secure_castle"], true];
missionNamespace setVariable ["intelArray", [laptop_1, laptop_2, laptop_3], true];

// Set the initial device status
missionNamespace setVariable ["deviceState", 0, true];
// 0 = Not activated
// 1 = Activated
// 2 = Disarmed

// Set up the command APC
cmd_marid animate ["HideTurret", 1];
cmd_marid lockTurret [[0], true];

// Add respawn locations
respawn_base = [missionNamespace, "csat_fob_marker", "CSAT FOB"] call BIS_fnc_addRespawnPosition;
respawn_apc = [missionNamespace, cmd_marid, "Command APC"] call BIS_fnc_addRespawnPosition;
respawnLocations = [respawn_apc, respawn_base];

// Set the fog to dissipate as the mission goes on
3600 setFog [0,12,25];
3600 setOvercast 0;