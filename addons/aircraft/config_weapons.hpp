class Mode_FullAuto;

class CfgWeapons
{

  // Falcon sideguns //

  class OPTRE_M247T_Coax;
  class OPTRE_M247H_SideGun: OPTRE_M247T_Coax
  {
    class FullAuto;
  };
  class SFT_247H_Sidegun : OPTRE_M247H_SideGun
  {
    author = "Weber";
    displayName = "[SFT] M247H Sidegun";
    magazines[] = {"OPTRE_2000Rnd_20mm_HE"};
    class FullAuto: FullAuto
    {
      reloadTime = 0.25;
    };
  };
  class OPTRE_M247H_SideGun2: OPTRE_M247T_Coax
  {
    class FullAuto;
  };
  class SFT_247H_Sidegun2: OPTRE_M247H_SideGun2
  {

    author = "Weber";
    displayName = "[SFT] M247H Sidegun";
    magazines[] = {"OPTRE_2000Rnd_20mm_HE"};
    class FullAuto: FullAuto
    {
      reloadTime = 0.25;
    };
  };

  // Falcon nosegun //

  class autocannon_Base_F;
  class autocannon_40mm_CTWS: autocannon_Base_F
  {
    class AP;
    class HE;
  };
  class SFT_40mm_Chingun : autocannon_40mm_CTWS
  {
    author = "Weber";
    displayName = "M750 40mm Chaingun";

    class AP: AP
    {
      displayName = "M750 40mm Chaingun";
      magazines [] =
      {
        "SFT_60Rnd_40mm_AP"
      };
    };
    class HE: HE
    {
      displayName = "M750 40mm Chaingun";
      magazines [] = 
      {
        "SFT_60Rnd_40mm_HE"
      };
    };
  };

  // Hornet autocannons //

  class M134_minigun;
  class OPTRE_GUA23A: M134_minigun
  {
    class LowROF;
  };
  class SFT_GAU23A: OPTRE_GUA23A
  {
    magazines[] = 
    {
      "SFT_2000rnd_20mm"
    };    
    reloadTime = 0.0625;
    showCursorAimInternal = 0;
    class LowROF: Mode_FullAuto 
    {
      displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
      reloadTime = 0.0625;
      sounds[] = {
        "StandardSound"
      };
      class StandardSound {
        begin1[] = {
          "A3\Sounds_F\weapons\30mm\30mm_st_01",
          1,
          1,
          2000
        };
        soundBegin[] = {
          "begin1",
          1
        };
      };
      soundContinuous = 0;
      flash = "gunfire";
      flashSize = 0.5;
      recoil = "Empty";
      aiDispersionCoefX = 8;
      aiDispersionCoefY = 8;
      ffMagnitude = 0.5;
      ffFrequency = 11;
      ffCount = 6;
      minRange = 50;
      minRangeProbab = 0.6;
      midRange = 800;
      midRangeProbab = 0.6;
      maxRange = 1800;
      dispersion = 0.005;
      showToPlayer = 1;    
    };
  };

  // Anvil rework //

  class RocketPods;
  class missiles_DAR:RocketPods
  {
    class Burst;
  };

  class SFT_Anvil_1: missiles_DAR
  {
    displayName = "[SFT] 'ANVIL I' Rocket";
    descriptionShort = "'Anvil-I' Rocket";
    magazines [] = 
    {
      "SFT_16rnd_Anvil1_HE",
      "SFT_16rnd_Anvil1_HEAT"
    };
    showCursorAimInteral = 0;
    reloadTime = 1;
    magazineReloadTime = 5;
    cursor = "EmptyCursor";
    cursorAim = "EmptyCursor";
    canlock = 0;
    ballisticsComputer = 4;
    modes [] =
    {
      "Far_AI",
      "Medium_AI",
      "Single",
      "Salvo",
      "Auto"
    };
    class Auto: Burst
    {
      displayName = "AUTO";
    };
    class Salvo: Burst
    {
			displayName	= "BURST";
			autoFire	= 0;
			burst		= 6;
			textureType	= "dual";      
    };
    class Single: Burst
    {
			displayName	= "SNGL";
			autoFire	= 0;
			burst		= 2;
			textureType	= "semi";
    };
  };

};