#include "config_macros.hpp"
class CfgPatches
{
	class SFT_Misc
	{
 		units[] = {};	
 		weapons[] = {};
 		requiredAddons[] = {};	
		author="Weber";
 	};
};

class CfgMovesFatigue
{
	staminaDuration = 180;
	staminaRestoration = 30;
	staminaCooldown = 15;
	aimPrecisionSpeedCoef = 5;
	terrainDrainSprint = -1;
	terrainDrainRun = 0;
	terrainSpeedCoef = 0.9;
};