#include "config_macros.hpp"
#include "config_weapons.hpp"
#include "config_magazines.hpp"
#include "config_ammo.hpp"
#include "HMD.hpp"

class CfgPatches {
  class SFT_aircraft {
    units[] = {
      "SFT_MH144_S_Falcon", "SFT_AH144_Falcon", "SFT_UH144_M_Falcon", "SFT_AV14_Hornet"
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
    class UserActions;
    class ViewPilot;
  };

  /// MH144 ///
  class SFT_MH144_S_Falcon : OPTRE_UNSC_MH_144S_Falcon
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] MH-144S 'Falcon' [Transport]";
    crew = "SFT_B_UNSCMarines_Helicopter_Pilot_Woodland_01";
    weapons[] = 
    {
      "SFT_40mm",
      "CMFlareLauncher",
      "Laserdesignator_pilotCamera"
    };
    magazines[] = 
    {
      "SFT_60Rnd_40mm_HE",
      "SFT_60Rnd_40mm_HE",
      "SFT_60Rnd_40mm_HE",
      "SFT_60Rnd_40mm_AP",
      "SFT_60Rnd_40mm_AP",
      "SFT_60Rnd_40mm_AP",
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

    class ViewPilot: ViewPilot
    {
      initAngleX = 0;
      minMoveZ = -0.2;
    };

    FALCON_FLIGHTMODEL

    PILOTCAMERA_FALCON

    HMD

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
    class Components;
    class TransportPylonsComponent;
    class WingPylonLeft;
    class WingPylonRight;
    class UserActions;
    class ViewPilot;
  };

  class SFT_AH144_Falcon : OPTRE_UNSC_falcon_armed
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] AH-144 'Falcon' [DAP]";
    weapons[] = 
    {
      "SFT_40mm_Chingun",
      "CMFlareLauncher",
      "Laserdesignator_pilotCamera"
    };
    magazines[] = 
    {
      "SFT_60Rnd_40mm_HE",
      "SFT_60Rnd_40mm_HE",
      "SFT_60Rnd_40mm_HE",
      "SFT_60Rnd_40mm_AP",
      "SFT_60Rnd_40mm_AP",
      "SFT_60Rnd_40mm_AP",
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

    class ViewPilot: ViewPilot
    {
      initAngleX = 0;
      minMoveZ = -0.2;
    };

    FALCON_FLIGHTMODEL

    PILOTCAMERA_FALCON

    class Components: Components
    {
      class TransportPylonsComponent: TransportPylonsComponent
      {
        class pylons
        {
          class WingPylonRight
          {
            attachment = "SFT_16rnd_Anvil1_HE";
            hardpoints [] = 
            {
              "OPAEX_Hardpoint_UH144",
              "SFT_Anvil"
            };          
            bay=-1;
						priority = 4; 
            // UI position values simplified
            UIposition[]={0.35,0.1};
						turret[]={};
          };
          class WingPylonLeft: WingPylonRight
          {
            attachment = "SFT_16rnd_Anvil1_HE";
            hardpoints [] = 
            {
              "OPAEX_Hardpoint_UH144",
              "SFT_Anvil"
            };
            priority = 5;
						mirroredMissilePos=1;
            // UI position values simplified
            UIposition[]={0.35,0.467};
          };
        };
      };  
    }; 

    HMD

  };
  

  /// UH144 Medevac ///

  class OPTRE_UNSC_falcon_medical; 
  
  // TODO

  // set up inheritance for ViewPilot and UserActions classes

  class SFT_UH144_M_Falcon : OPTRE_UNSC_falcon_medical
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] UH-144M 'Falcon' [Medevac]";
    //FALCON_HIDDENSELECTIONSTEXTURES_MEDICAL

    //class ViewPilot: ViewPilot
    //{
    //  initAngleX = 0;
    //  minMoveZ = -0.2;
    //};

    FALCON_FLIGHTMODEL

    PILOTCAMERA_FALCON

    //HMD
  };

  // AV-14 Hornet
  class OPTRE_Hornet_base;
  class OPTRE_UNSC_hornet_CAP: OPTRE_Hornet_base
  {
    class Components;
    class UserActions;
    class TransportPylonsComponent;
    class ViewPilot;
  };
  class SFT_AV14_Hornet: OPTRE_UNSC_hornet_CAP
  {
    author = "Weber";
    displayName = "[SFT] AV-14 Hornet";
    faction = "SFT_BLUE_SFT_F";

		weapons[]=
		{
			"SFT_GAU23A",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS"
		};
		magazines[]=
		{
			"SFT_2000rnd_20mm",
			"SFT_2000rnd_20mm",
			"168Rnd_CMFlare_Chaff_Magazine",
			"168Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_8Rnd_C2GMLS_missiles"
		};

    scope = 2;
    scopeCurator = 2;
    vehicleClass = "Air";

		maxSpeed=300;
		liftForceCoef=1.95;
		cyclicAsideForceCoef=3.85;
		cyclicForwardForceCoef=1.6;
		backrotorforcecoef=1.8;
    // Simplified body friction coefficient
    bodyFrictionCoef=0.3;

    hiddenSelectionsTextures [] =
    {
      HORNET_HIDDENSELECTIONS_TEXTURES
    };
    textureList [] =
    {
      "standard", 1
    };
    class textureSources 
    {
      class standard
      {
        displayName = "Standard";
        author = "Waylen ";
        textures [] =
        {
          HORNET_HIDDENSELECTIONS_TEXTURES
        };
      };
    };

    PILOTCAMERA_HORNET

    class Components: Components
    {
      class TransportPylonsComponent: TransportPylonsComponent
      {
        class pylons
        {
          class pylons1
          {
            attachment = "OPTRE_missiles_C2GMLS";
            hardpoints [] = 
            {
              "OPAEX_Hardpoint_AV14",
              "SFT_Anvil"
            };          
            bay=-1;
						priority = 5; 
            // UI position values simplified
            UIposition[]={0.35,0.1};
						turret[]={};
          };
          class pylons2: pylons1
          {
            attachment = "OPTRE_missiles_C2GMLS";
            hardpoints [] = 
            {
              "OPAEX_Hardpoint_AV14",
              "SFT_Anvil"
            };
            priority = 4;
						mirroredMissilePos=1;
            // UI position values simplified
            UIposition[]={0.35,0.467};
          };
        };
      };  
    }; 

    HMD

  };

};