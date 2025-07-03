#include "config_macros.hpp"

class CfgPatches 
{
  class SFT_factions 
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"A3_Characters_F_BLUFOR"};
  };
};

class CfgFactionClasses 
{
  class SFT 
  {
    displayName = "SFT Assets";
    icon="";
    author="Weber";
    priority=99;
    side=1;
  };
  class SFT_innie 
  {
    displayName="SFT Innie Assets";
    icon="";
    author="Weber";
    priority=99;
    side=2;
  };
  /*class SFT_CMA 
  {
    displayName="";
    icon="";
    author="Weber";
    priority=99;
    side=3;
  };*/
};

class CfgEditorCategories 
{
  class SFT 
  {
    displayName = "SFT Assets";
    priority=99;
    side=1;
  };
  class SFT_innie 
  {
    displayName="SFT Innie Assets";
    priority=99;
    side=2;
  };
  /*class SFT_CMA 
  {
    displayName="";
    priority=99;
    side=3;
  };*/
};

class CfgEditorSubcategories 
{
  class SFT_rotary 
  {
    displayName="Rotary Aircraft";
  };
  class SFT_cars 
  {
    displayName="Cars";
  };
  class SFT_motorized 
  {
    displayName="Armor";
  };
  class SFT_mechanized 
  {
    displayName="Mechanized";
  };
  class SFT_Drones 
  {
    displayName="Drones";
  };
  class SFT_supplies 
  {
    displayName="Supplies";
  };
  class SFT_fixedWing 
  {
    displayName="Fixed Wing Aircraft";
  };
  class SFT_turrets 
  {
    displayName="Turrets";
  };
  class SFT_innie_turrets 
  {
    displayName="Turrets";
  };
  class SFT_CMA_turrets 
  {
    displayName="Turrets";
  };
};
