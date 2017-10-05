// Function to handle ending the mission on all clients
switch (toLower (_this select 0)) do {
	case "majorvictory": {["majorVictory", true] remoteExec ["BIS_fnc_endMission", 0];};
	case "minorvictory": {["minorVictory", true] remoteExec ["BIS_fnc_endMission", 0];};
	case "missionfailed": {["missionFailed", false] remoteExec ["BIS_fnc_endMission", 0];};
};