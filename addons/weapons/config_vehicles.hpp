class CfgVehicles
{
  class TCP_Weapon_throw_M9R;
  class StaticMGWeapon;
  class OPTRE_Static_M247H_Shielded_Tripod: StaticMGWeapon
  {
    class ace_csw;
    class assembleInfo;
    class Turrets; // not used atm but may be in the future
    class MainTurret; //
  };
  class OPTRE_Static_M247H_Tripod: OPTRE_Static_M247H_Shielded_Tripod
  {
    class ace_csw;
    class assembleInfo;
    class Turrets; // not used atm but may be in the future
    class MainTurret; //
  };
  class OPTRE_CSW_M247H_Tripod;


  /// Base Classes

  class SFT_Weapon_throw_M9R : TCP_Weapon_throw_M9R
  {
    author = "Weber";
    dlc = "SFT";
    displayName = "[SFT] M9R Fragmentation Grenade";
    class TransportItems
    {
      class _xx_SFT_M9R_Frag
      {
        name = "SFT_M9R_Frag";
        count = 1;
      };
    };
  };

  ///// M247H

  class SFT_CSW_M247H_Tripod: OPTRE_CSW_M247H_Tripod
  {
    displayName = "[SFT] M247H Tripod";    
    faction = "SFT_BLUE_SFT_F";
    class ace_csw
    {
      disassembleTo = "SFT_M247H_Carry_Tripod";
    };
  };

  class SFT_Static_M247H_Shield_Tripod: OPTRE_Static_M247H_Shielded_Tripod
  {
    displayName = "[SFT] M247H Turret w/ Shield";    
    faction = "SFT_BLUE_SFT_F";
    class ace_csw: ace_csw
    {
      disassembleTurret = "SFT_CSW_M247H_Tripod";
      disassembleWeapon = "SFT_M247H_Shield_Weapon";
    };
  };

  class SFT_Static_M247H_Tripod: OPTRE_Static_M247H_Tripod
  {
    displayName = "[SFT] M247H Turret";    
    faction = "SFT_BLUE_SFT_F";
    class ace_csw: ace_csw
    {
      disassembleTurret = "SFT_CSW_M247H_Tripod";
      disassembleWeapon = "SFT_M247H_Weapon";
    };
  };

};