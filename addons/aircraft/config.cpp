#include "config_macros.hpp"
#include "config_weapons.hpp"
#include "config_magazines.hpp"
#include "config_ammo.hpp"

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

    bodyFrictionCoef=0.7;
    cyclicAsideForceCoef=3.4;
    cyclicForwardForceCoef=1.35;
    liftForceCoef=1.9;
    maxSpeed=280;

    PILOTCAMERA_FALCON
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

    bodyFrictionCoef=0.7;
    cyclicAsideForceCoef=3.4;
    cyclicForwardForceCoef=1.35;
    liftForceCoef=1.9;
    maxSpeed=280;

    PILOTCAMERA_FALCON

  };

  /// UH144 Medevac ///

  class OPTRE_UNSC_falcon_medical;
  class SFT_UH144_M_Falcon : OPTRE_UNSC_falcon_medical
  {
    author = "Weber";
    faction = "SFT_BLUE_SFT_F";
    displayName = "[SFT] UH-144M 'Falcon' [Medevac]";
    //FALCON_HIDDENSELECTIONSTEXTURES_MEDICAL

    bodyFrictionCoef=0.7;
    cyclicAsideForceCoef=3.4;
    cyclicForwardForceCoef=1.35;
    liftForceCoef=1.9;
    maxSpeed=280;

    PILOTCAMERA_FALCON
  };

  // AV-14 Hornet
  class OPTRE_UNSC_hornet_CAP;
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
		bodyFrictionCoef=0.3000001;

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

    class pilotCamera                                                                                   
		{                                                                                                   
			class OpticsIn                                                                                    
			{                                                                                                 
				class Wide                                                                                      
				{                                                                                               
					opticsDisplayName="WFOV";                                                                     
					initAngleX=0;                                                                                 
					minAngleX=-140;                                                                               
					maxAngleX=140;                                                                                
					initAngleY=0;                                                                                 
					minAngleY=-30;                                                                                
					maxAngleY=90;                                                                                 
					initFov="(30 / 120)";                                                                         
					minFov="(30 / 120)";                                                                          
					maxFov="(30 / 120)";                                                                          
					directionStabilized=1;                                                                        
					visionMode[]=                                                                                 
					{                                                                                             
						"Normal",                                                                                   
						"NVG",                                                                                      
						"Ti"                                                                                        
					};                                                                                            
					thermalMode[]={0,1};                                                                          
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";        
					opticsPPEffects[]=                                                                            
					{                                                                                             
						"OpticsCHAbera2",                                                                           
						"OpticsBlur2"                                                                               
					};                                                                                            
				};                                                                                              
				class Medium: Wide                                                                              
				{                                                                                               
					opticsDisplayName="MFOV";                                                                     
					initFov="(6 / 120)";                                                                          
					minFov="(6 / 120)";                                                                           
					maxFov="(6 / 120)";                                                                           
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";      
				};                                                                                              
				class Narrow: Wide                                                                              
				{                                                                                               
					opticsDisplayName="NFOV";                                                                     
					initFov="(2 / 120)";                                                                          
					minFov="(2 / 120)";                                                                           
					maxFov="(2 / 120)";                                                                           
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";      
				};                                                                                              
				showMiniMapInOptics=0;                                                                          
				showUAVViewInOptics=0;                                                                          
				showSlingLoadManagerInOptics=0;                                                                 
			};                                                                                                
			minTurn=-140;                                                                                     
			maxTurn=140;                                                                                      
			initTurn=0;                                                                                       
			minElev=-30;                                                                                      
			maxElev=90;                                                                                       
			initElev=0;                                                                                       
			maxXRotSpeed=1;                                                                                   
			maxYRotSpeed=1;                                                                                   
			maxMouseXRotSpeed=0.5;                                                                            
			maxMouseYRotSpeed=0.5;                                                                            
			pilotOpticsShowCursor=1;                                                                          
			controllable=1;                                                                                   
                                                                                                        
		};                                                                                                  
  };

};