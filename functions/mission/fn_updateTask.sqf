// Function for updating mission tasks when objectives are completed.
if (!isServer) exitWith {};
switch (toLower (_this select 0)) do {
	case "aa1_complete": {
		["destroy_aa1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "aa2_complete": {
		["destroy_aa2", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "aa3_complete": {
		["destroy_aa3", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "aa4_complete": {
		["destroy_aa4", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "aa_complete": {
		["destroy_aa", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		sxp_aa_destroyed = true;
	};
	case "ammo1_complete": {
		["destroy_ammo1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "ammo2_complete": {
		["destroy_ammo2", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "ammo_complete": {
		["destroy_ammo", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		sxp_ammo_destroyed = true;
	};
	case "start_evac": {
		if (isNil "zeus_unit") then {
			[true, "evac", ["Evacuate from Comms Bravo and return to the Saint-George Airbase.", "Evac", ""], task_evac_location, "ASSIGNED", 150, true, "run", true] call BIS_fnc_taskCreate;
		} else {
			[[true, zeus_unit], "evac", ["Evacuate from Comms Bravo and return to the Saint-George Airbase.", "Evac", ""], task_evac_location, "ASSIGNED", 150, true, "run", true] call BIS_fnc_taskCreate;
		};
	};
};