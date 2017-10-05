// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

player createDiaryRecord ["Diary", ["Assets", "Your available assets for this mission are:<br/>
	- 1x HMMWV (Command Vehicle)<br/>
	- 12x MTVR Transport<br/>
	- 1x MTVR Repair<br/>
	- 1x MTVR Fuel<br/>
	- 1x MTVR Ammo<br/>
	- 1x C-47 Skytrain<br/>
	- 2x UH-1D Huey<br/>
	- 1x AC-47 Spooky<br/>
	- 20x Air-Droppable ammo crates<br/>
	<br/>
	Yes I know they didn't have Hummvees in Vietnam, I'm doing the best with what I have available to use."]];

player createDiaryRecord ["Diary", ["Mission", "The remainder of the strike force (Echo Team) is currently located in the town of Vagalala, deep in Soviet territory; Soviet forces are closing in on their position.<br/>
Unfortunately, there's a mountain in between Echo Team and the response force. We can't go around the mountain, as heavy Soviet defenses are present on both the east and west sides; we'll have to go over the top.<br/>
Luckily for us, there's an old hiking path that goes right over the top and ends right at the south side of Vagalala. We're expecting to find enemy contact on the mountain itself; however, it's still a safer option than going around.<br/>
In addition to moving to rescue Echo Team, the response force is also tasked with eliminating a few key objectives within the area: four anti-air emplacements, and two ammo dumps.<br/><br/>
The strike force had 4 M113A3s and a single M163 VADS, all of which have been disabled within Vagalala. Reports indicate the vehicles are disabled, but not destroyed. If we were able to get an engineering team out there, we may be able to restore the vehicles to working condition.
This could prove useful for completing our objectives."]];

player createDiaryRecord ["Diary", ["Situation", "Night is falling. An American strike force has been hit hard in Soviet territory, and requires immediate assistance.
Most of the force has already been wiped out, and all of their vehicles have been disabled. An American response force has been mobilized to assist the remains of the strike force."]];

waitUntil {!isNull player};
if (player isKindOf "VirtualMan_F") then {
	player createDiarySubject ["zeusmenu", "Zeus Menu"];
	player createDiaryRecord ["zeusmenu", ["Zeus Actions",
		"<br/>
		<executeClose expression='[""fortunate_son""] remoteExec [""SXP_fnc_playMusic"", 0]'>Play Music: It ain't me</execute><br/>
		<br/>
		<executeClose expression='[""majorVictory""] call SXP_fnc_endMission'>End Mission: Major Victory</execute><br/>
		<executeClose expression='[""minorVictory""] call SXP_fnc_endMission'>End Mission: Minor Victory</execute><br/>
		<executeClose expression='[""missionFailed""] call SXP_fnc_endMission'>End Mission: Mission Failed</execute><br/>
		<br/>
		<executeClose expression='[zeus_Unit, zeus_Module] remoteExec [""SXP_fnc_fixCurator"", 2]'>Fix Curator Module</execute><br/>"
	]];	
};