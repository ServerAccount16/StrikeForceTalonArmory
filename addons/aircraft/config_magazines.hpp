class cfgMagazines
{
  class autocannon_40mm_CTWS;
  class SFT_2000Rnd_40mm_HE : autocannon_40mm_CTWS
  {
    author = "Weber";
    displayName = "[SFT] 2000Rnd 40mm HE";
    count = 2000;
    mass = 100;
    tracersEvery=3;
  };

  class OPTRE_2000Rnd_20mm_HEIAP;
  class SFT_2000rnd_20mm: OPTRE_2000Rnd_20mm_HEIAP
  {
    ammo = "SFT_20mm_HEIAP";
  };

};