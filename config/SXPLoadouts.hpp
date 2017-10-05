// SXPloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
class loadouts
{
	class example
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"Titan_AP"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"9Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Officer_F
	{
		displayName = "Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2_GL", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "H_MilCap_gry";
		facewearClass = "G_Aviator";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 10}, {"CUP_1Rnd_StarFlare_Green_M203", 4}, {"CUP_1Rnd_StarFlare_Red_M203", 4}, {"CUP_1Rnd_StarFlare_White_M203", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class cmd_medic
	{
		displayName = "Command Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_quikclot", 80}, {"ACE_epinephrine", 20}, {"ACE_morphine", 20}, {"ACE_bloodIV", 5}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_F
	{
		displayName = "Rifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_SL_F
	{
		displayName = "Squad Leader"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2_GL", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "G_Aviator";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 10}, {"CUP_1Rnd_StarFlare_Green_M203", 4}, {"CUP_1Rnd_StarFlare_Red_M203", 4}, {"CUP_1Rnd_StarFlare_White_M203", 4}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_AT_F
	{
		displayName = "Anti-Tank Specialist"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_launch_M47", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"CUP_Dragon_EP1_M"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_AAT_F
	{
		displayName = "Assistant Anti-Tank Specialist"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_Carryall_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_Dragon_EP1_M", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_A_F
	{
		displayName = "Ammo Bearer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_Carryall_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"CUP_30Rnd_556x45_Stanag", 24}, {"hlc_20Rnd_762x51_B_M14", 2}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Medic_F
	{
		displayName = "Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_TacticalPack_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ACE_quikclot", 80}, {"ACE_epinephrine", 20}, {"ACE_morphine", 20}, {"ACE_bloodIV", 5}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_M_F
	{
		displayName = "Marksman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_M14_Bipod", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"20Rnd_762x51_Mag", "hlc_optic_artel_m14"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_FR_BandanaGreen";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"20Rnd_762x51_Mag", 6}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Soldier_AR_F
	{
		displayName = "Autorifleman"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_lmg_m60", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_100Rnd_762x51_M_M60E4"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_100Rnd_762x51_M_M60E4", 3}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Pilot_F
	{
		displayName = "Pilot"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a3", "hgun_Pistol_Signal_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_acc_Surefiregrip"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"6Rnd_RedSignal_F"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_HeliPilotCoveralls";
		headgearClass = "CUP_H_USMC_Helmet_Pilot";
		facewearClass = "G_Aviator";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_AssaultPack_sgg";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "tf_anprc152"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"6Rnd_GreenSignal_F", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_30Rnd_9x19_B_MP5", 6}, {"MiniGrenade", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 2}, {"CUP_1Rnd_StarFlare_Red_M203", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}, {"CUP_glaunch_M79", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class cmd_engineer
	{
		displayName = "Combat Engineer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_acc_Surefiregrip"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_30Rnd_9x19_B_MP5", 6}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_SpraypaintGreen", 1}}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Engineer_F
	{
		displayName = "Combat Engineer"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_smg_mp5a2", "CUP_hgun_Colt1911", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_acc_Surefiregrip"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_AssaultPack_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}, {"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"hlc_30Rnd_9x19_B_MP5", 6}, {"MiniGrenade", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"ToolKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_SpraypaintGreen", 1}}; // Items to place in backpack. Includes weapon magazines
	};
};