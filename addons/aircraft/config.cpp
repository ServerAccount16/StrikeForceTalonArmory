#include "config_macros.hpp"

class CfgPatches {
  class SFT_aircraft {
    units[] = {
      "SFT_MH144_S_Falcon", "SFT_AH144_Falcon", "SFT_UH144_M_Falcon"
    };
    requiredVersion = 0.1;
  };
};

class CfgVehicles
{
  class OPTRE_UNSC_MH_144S_Falcon;
  class SFT_MH144_S_Falcon : OPTRE_UNSC_MH_144S_Falcon
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] MH-144S 'Falcon' [Transport]";
    hiddenSelectionsTextures[] =
    {
      FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Agony and SUFFERING";
        textures [] =
        {
          FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
        };
      };
    };
  };
  class OPTRE_UNSC_falcon_armed;
  class SFT_AH144_Falcon : OPTRE_UNSC_falcon_armed
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] AH-144 'Falcon' [DAP]";
    hiddenSelectionsTextures[] =
    {
      FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Agony and SUFFERING";
        textures [] =
        {
          FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
        };
      };
    };
  };
  class OPTRE_UNSC_falcon_medical;
  class SFT_UH144_M_Falcon : OPTRE_UNSC_falcon_medical
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] UH-144M 'Falcon' [Medivac]";
    //FALCON_HIDDENSELECTIONSTEXTURES_MEDICAL
  };
};