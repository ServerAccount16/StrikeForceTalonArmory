

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
};