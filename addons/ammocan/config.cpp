#include "config_macros.hpp"

class CfgPatches
{
  class SFT_Ammocans
  {
    author="Strike Force Talon";
    name="SFT Ammocans";
    url="";
    requiredAddons[]=
    {
      "cba_main",
      "Fat_Lurch_Ammocan",
      "SFT_Weapons"
    };
    requiredVersion=0.1;
    units[]=
    {
      ""
    };
    weapons[]={};
  };
};

class cfgFunctions
{
  class ammocan_Compat
  {
    tag = "ammocan_Compat";
    class init
    {
      file = "\x\strikeforcetalon_armory\addons\sft_ammocan\functions";
      class registerVehicles {};
    };
  };
};

class Extended_PostInit_EventHandlers {
    class ammocan_compat_myvehicles_postInit {
        // Only run if Ammocan is loaded
        init = "if (isClass (configFile >> 'CfgPatches' >> 'Ammocan')) then { [] call ammocan_Compat_fnc_registerVehicles; };";
    };
};