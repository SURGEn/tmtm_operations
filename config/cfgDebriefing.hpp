// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class cfgDebriefing
{
	class example
	{
		title = "Example Ending"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "The mission maker should change this"; // Subtitle below the title when the closing shot is triggered
		description = "This should be changed before the mission is finished"; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class majorVictory
	{
		title = "Major Victory"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "All tasks complete. Congratulations!"; // Subtitle below the title when the closing shot is triggered
		description = "American forces managed to eliminate all four Anti-Air emplacements as well as the Russian ammo cache. In addition, all American forces have safely returned back to friendly territory."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class minorVictory
	{
		title = "Minor Victory"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "All targets destroyed"; // Subtitle below the title when the closing shot is triggered
		description = "American forces managed to eliminate all four Anti-Air emplacements as well as the Russian ammo cache. Unfortunately however, despite their accomplishments, we have lost contact with the American task force."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class missionFailed
	{
		title = "Mission Failed"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "Get good next time"; // Subtitle below the title when the closing shot is triggered
		description = "All American forces in the area have been eliminated. Russian forces begin to move towards Saint-George airbase to secure control of Tanoa."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
};