class Mode_FullAuto;

class CfgWeapons
{
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
  //class autocannon_40mm_CTWS;
  //class SFT_40mm_Chingun : autocannon_40mm_CTWS
  //{
  //  author = "Weber";
  //  displayName = "[SFT] 40mm Chingun";
  //};

  class M134_minigun;
  class OPTRE_GUA23A: M134_minigun
  {
    class LowROF;
  };
  class SFT_GAU23A: OPTRE_GUA23A
  {
    magazines[] = {
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

};