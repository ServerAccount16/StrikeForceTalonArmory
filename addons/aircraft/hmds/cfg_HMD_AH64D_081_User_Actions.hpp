//defaultUserMFDvalues[] = {0,1,0,0,1,0,0.2};
class HMDs_Kimi_UserAction_0_ON
{
	displayName = "<t color='#26ff00'>HMD ON</t>";
	//shortcut = "user10";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [0,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -1;
};
class HMDs_Kimi_UserAction_0_OFF
{
	displayName = "<t color='#ffff00'>HMD OFF</t>";
	//shortcut = "user11";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [0,0]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -2;
};
class HMDs_Kimi_UserAction_1_IMPERIAL
{
	displayName = "<t color='#26ff00'>HMD IMPERIAL</t>";
	//shortcut = "user12";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [1,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -3;
};
class HMDs_Kimi_UserAction_1_METRIC
{
	displayName = "<t color='#ffff00'>HMD METRIC</t>";
	//shortcut = "user13";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [1,0]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -4;
};
class HMDs_Kimi_UserAction_2_FULL
{
	displayName = "<t color='#26ff00'>HMD FULL</t>";
	//shortcut = "user14";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [2,0]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -5;
};
class HMDs_Kimi_UserAction_2_DECLUTTER
{
	displayName = "<t color='#ffff00'>HMD DECLUTTER</t>";
	//shortcut = "user15";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [2,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -6;
};
class HMDs_Kimi_UserAction_345_COLOR_GREEN
{
	displayName = "<t color='#00ff00'>HMD GREEN</t>";
	//shortcut = "user16";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [3,0];this SetUserMFDvalue [4,1];this SetUserMFDvalue [5,0];";
	//3 RED - 4 GREEN - 5 BLUE
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -7;
};
class HMDs_Kimi_UserAction_345_COLOR_YELLOW
{
	displayName = "<t color='#ffff00'>HMD YELLOW</t>";
	//shortcut = "user17";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];";
	//statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,1];this SetUserMFDvalue [5,0];";
	//3 RED - 4 GREEN - 5 BLUE
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -8;
};
/*class HMDs_Kimi_UserAction_345_COLOR_BLUE
{
	displayName = "<t color='#0011ff'>HMD BLUE</t>";
	shortcut = "";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [3,0];this SetUserMFDvalue [4,0];this SetUserMFDvalue [5,1];";
	//3 RED - 4 GREEN - 5 BLUE
	position = "pilotcontrol";
	radius = 1;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = 0.005;
};
class HMDs_Kimi_UserAction_345_COLOR_RED
{
	displayName = "<t color='#ff0000'>HMD RED</t>";
	shortcut = "";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0];this SetUserMFDvalue [5,0];";
	//3 RED - 4 GREEN - 5 BLUE
	position = "pilotcontrol";
	radius = 1;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = 0.004;
};*/
class HMDs_Kimi_UserAction_6_ALPHA_HIGH
{
	displayName = "HMD BRT HIGH";
	//shortcut = "user18";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [6,0.5]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -9;
};
class HMDs_Kimi_UserAction_6_ALPHA_MED
{
	displayName = "HMD BRT MED";
	//shortcut = "user19";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [6,0.2]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -10;
};
class HMDs_Kimi_UserAction_6_ALPHA_LOW
{
	displayName = "HMD BRT LOW";
	//shortcut = "user20";
	condition = "(player in [driver this, this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [6,0.05]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = -11;
};
/*class HMDs_Kimi_UserAction_7_NOT_PILOT
{
	displayName = "HMD BRT LOW";
	shortcut = "";
	condition = "(player in [this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [7,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = 0.001;
};
class HMDs_Kimi_UserAction_7_NOT_PILOT
{
	displayName = "HMD BRT LOW";
	shortcut = "";
	condition = "(player in [this turretUnit [0]]) && (alive this)";
	statement = "this SetUserMFDvalue [7,1]";
	position = "pilotcontrol";
	radius = 20;
	onlyforplayer = 1;
	showWindow = 1;
	hideOnUse = 1;
	priority = 0.001;
};*/