#include "config_macros.hpp"
#include "config_weapons.hpp"
#include "config_magazines.hpp"

class CfgPatches {
  class SFT_aircraft {
    units[] = {
      "SFT_MH144_S_Falcon", "SFT_AH144_Falcon", "SFT_UH144_M_Falcon"
    };
    requiredVersion = 0.1;
    requiredAddons[] = {
      "OPTRE_Vehicles_Air"
    };
  };
};

class CfgVehicles
{

  class OPTRE_UNSC_falcon_armed_S;
  class OPTRE_UNSC_MH_144S_Falcon : OPTRE_UNSC_falcon_armed_S
  {
    class Turrets;
    class LeftDoorGun;
    class RightDoorGun;
    class CargoTurret_01;
    class CargoTurret_02;
    class CargoTurret_03;
    class CargoTurret_04;
    class CargoTurret_05;
    class CargoTurret_06;
    class CargoTurret_07;
  };

  /// MH144 ///
  class SFT_MH144_S_Falcon : OPTRE_UNSC_MH_144S_Falcon
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] MH-144S 'Falcon' [Transport]";
    weapons[] = 
    {
      "autocannon_40mm_CTWS",
      "CMFlareLauncher",
      "Laserdesignator_pilotCamera"
    };
    magazines[] = 
    {
      "60Rnd_40mm_GPR_Tracer_Red_shells",
      "60Rnd_40mm_GPR_Tracer_Red_shells",
      "60Rnd_40mm_GPR_Tracer_Red_shells",
      "40Rnd_40mm_APFSDS_Tracer_Red_shells",
      "40Rnd_40mm_APFSDS_Tracer_Red_shells",
      "40Rnd_40mm_APFSDS_Tracer_Red_shells",
      "168Rnd_CMFlare_Chaff_Magazine",
      "168Rnd_CMFlare_Chaff_Magazine",
      "Laserbatteries"
    };

    hiddenSelectionsTextures[] =
    {
      FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Waylen";
        textures [] =
        {
          FALCON_HIDDENSELECTIONSTEXTURES_STANDARD
        };
      };
    };


    class Turrets : Turrets
    {
      class LeftDoorGun  : LeftDoorGun
      {
        weapons[] = {"SFT_247H_Sidegun"};
				magazines[] = {"OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE"};
      };
      class RightDoorGun : RightDoorGun
      {
        weapons[] = {"SFT_247H_Sidegun2"};
        magazines[] = {"OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE"};
      };
      class CargoTurret_01 : CargoTurret_01{};
      class CargoTurret_02 : CargoTurret_02{};
      class CargoTurret_03 : CargoTurret_03{};
      class CargoTurret_04 : CargoTurret_04{};
      class CargoTurret_05 : CargoTurret_05{};
      class CargoTurret_06 : CargoTurret_06{};
      class CargoTurret_07 : CargoTurret_07{};
    };

    bodyFrictionCoef=0.55;
    cyclicAsideForceCoef=3.4;
    cyclicForwardForceCoef=1.35;
    liftForceCoef=1.8;
    maxSpeed=300;

  };

    // AH144 DAP ///

  class OPTRE_UNSC_MH_144_Falcon;
  class OPTRE_UNSC_falcon_armed : OPTRE_UNSC_MH_144_Falcon
  {
    class Turrets;
    class LeftDoorGun;
    class RightDoorGun;
    class CargoTurret_01;
    class CargoTurret_02;
    class CargoTurret_03;
    class CargoTurret_04;
    class CargoTurret_05;
    class CargoTurret_06;
    class CargoTurret_07;
    class CargoTurret_08;
    class CargoTurret_09;
    class RotorLibHelicopterProperties;
  };

  class SFT_AH144_Falcon : OPTRE_UNSC_falcon_armed
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] AH-144 'Falcon' [DAP]";
    weapons[] = 
    {
      "autocannon_40mm_CTWS",
      "CMFlareLauncher",
      "Laserdesignator_pilotCamera"
    };
    magazines[] = 
    {
      "60Rnd_40mm_GPR_Tracer_Red_shells",
      "60Rnd_40mm_GPR_Tracer_Red_shells",
      "60Rnd_40mm_GPR_Tracer_Red_shells",
      "40Rnd_40mm_APFSDS_Tracer_Red_shells",
      "40Rnd_40mm_APFSDS_Tracer_Red_shells",
      "40Rnd_40mm_APFSDS_Tracer_Red_shells",
      "168Rnd_CMFlare_Chaff_Magazine",
      "168Rnd_CMFlare_Chaff_Magazine",
      "Laserbatteries"
    };
    hiddenSelectionsTextures[] =
    {
      FALCON_HIDDENSELECTIONSTEXTURES_DAP
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Waylen ";
        textures [] =
        {
          FALCON_HIDDENSELECTIONSTEXTURES_DAP
        };
      };
    };
    class Turrets : Turrets
    {
      class CargoTurret_01 : CargoTurret_01{};
      class CargoTurret_02 : CargoTurret_02{};
      class CargoTurret_03 : CargoTurret_03{};
      class CargoTurret_04 : CargoTurret_04{};
      class CargoTurret_05 : CargoTurret_05{};
      class CargoTurret_06 : CargoTurret_06{};
      class CargoTurret_07 : CargoTurret_07{};
      class CargoTurret_08 : CargoTurret_08{};
      class CargoTurret_09 : CargoTurret_09{};
    };

    bodyFrictionCoef=0.55;
    cyclicAsideForceCoef=3.4;
    cyclicForwardForceCoef=1.35;
    liftForceCoef=1.8;
    maxSpeed=300;
  };

  /// UH144 Medevac ///

  class OPTRE_UNSC_falcon_medical;
  class SFT_UH144_M_Falcon : OPTRE_UNSC_falcon_medical
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] UH-144M 'Falcon' [Medevac]";
    //FALCON_HIDDENSELECTIONSTEXTURES_MEDICAL

    bodyFrictionCoef=0.55;
    cyclicAsideForceCoef=3.4;
    cyclicForwardForceCoef=1.35;
    liftForceCoef=1.8;
    maxSpeed=300;
  };
};