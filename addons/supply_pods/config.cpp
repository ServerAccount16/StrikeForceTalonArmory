#include "config_macros.hpp"

#include "config_macros.hpp"

class CfgPatches {
  class SFT_supply_pods {
    units[] = {
      ""
    };
    requiredVersion = 0.1;
  };
};

class CfgVehicles
{
  class OPTRE_Ammo_SupplyPod_Empty;
  class SFT_sp_empty: OPTRE_Ammo_SupplyPod_Empty
  {
    author = "Weber";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "[SFT] Supply Pod (Empty)";
    faction = "SFT";
    editorCategory = "SFT";
    editorSubcategory = "SFT_supplies";
    transportMaxWeapons = 25;
    transportMaxMagazines = 100;
    hiddenSelections[] = {"camo"};
    /*hiddenSelectionsTextures[] = 
    {
      ""
    };*/
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
  };

  // ---------------------------------------------------------------------------
  //  Medical Supply Pod
  // ---------------------------------------------------------------------------
  class SFT_sp_medical: SFT_sp_empty 
  {
    displayName = "[SFT] Supply Pod (Medical)";
    /*hiddenSelectionsTextures[] = 
    {
      ""
    };*/
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems 
    {
      class _xx_kat_IV_16 { name = "kat_IV_16"; count = 25; };
      class _xx_kat_naloxone { name = "kat_naloxone"; count = 25; };
      class _xx_kat_AFAK { name = "kat_AFAK"; count = 10; };
      class _xx_kat_IFAK { name = "kat_IFAK"; count = 60; };
      class _xx_kat_MFAK { name = "kat_MFAK"; count = 10; };
      class _xx_kat_Painkiller { name = "kat_Painkiller"; count = 25; };
      class _xx_kat_Carbonate { name = "kat_Carbonate"; count = 25; };
      class _xx_kat_IO_FAST { name = "kat_IO_FAST"; count = 25; };
      class _xx_kat_phenylephrine_inject { name = "kat_phenylephrine_inject"; count = 25; };
      class _xx_kat_TXA { name = "kat_TXA"; count = 25; };
      class _xx_ACE_elasticBandage { name = "ACE_elasticBandage"; count = 100; };
      class _xx_DMNS_Biofoam { name = "DMNS_Biofoam"; count = 100; };
      class _xx_ACE_tourniquet { name = "ACE_tourniquet"; count = 30; };
      class _xx_ACE_splint { name = "ACE_splint"; count = 30; };
      class _xx_ACE_morphine { name = "ACE_morphine"; count = 25; };
      class _xx_ACE_adenosine { name = "ACE_adenosine"; count = 25; };
      class _xx_ACE_epinephrine { name = "ACE_epinephrine"; count = 25; };
      class _xx_ACE_salineIV { name = "ACE_salineIV"; count = 20; };
      class _xx_ACE_salineIV_500 { name = "ACE_salineIV_500"; count = 20; };
      class _xx_ACE_bodyBag { name = "ACE_bodyBag"; count = 20; };
      class _xx_ACE_plasmaIV { name = "ACE_plasmaIV"; count = 20; };
      class _xx_ACE_plasmaIV_500 { name = "ACE_plasmaIV_500"; count = 20; };
      class _xx_kat_EACA { name = "kat_EACA"; count = 25; };
      class _xx_kat_norepinephrine { name = "kat_norepinephrine"; count = 25; };
      class _xx_kat_nitroglycerin { name = "kat_nitroglycerin"; count = 25; };
    };
  };

  // ---------------------------------------------------------------------------
  //  Explosives Supply Pod
  // ---------------------------------------------------------------------------
  class SFT_sp_ex: SFT_sp_empty 
  {
    displayName = "[SFT] Supply Pod (Explosives)";
    /*hiddenSelectionsTextures[] = {
      ""
    };*/
    class TransportMagazines 
    {
      class _xx_1Rnd_HE_Grenade_shell { magazine = "1Rnd_HE_Grenade_shell"; count = 40; };
      class _xx_1Rnd_Smoke_Grenade_shell { magazine = "1Rnd_Smoke_Grenade_shell"; count = 20; };
      class _xx_1Rnd_SmokeRed_Grenade_shell { magazine = "1Rnd_SmokeRed_Grenade_shell"; count = 10; };
      class _xx_1Rnd_SmokePurple_Grenade_shell { magazine = "1Rnd_SmokePurple_Grenade_shell"; count = 10; };
      class _xx_1Rnd_SmokeBlue_Grenade_shell { magazine = "1Rnd_SmokeBlue_Grenade_shell"; count = 10; };
      class _xx_ACE_HuntIR_M203 { magazine = "ACE_HuntIR_M203"; count = 10; };
      class _xx_C7_Remote_Mag { magazine = "C7_Remote_Mag"; count = 20; };
      class _xx_C12_Remote_Mag { magazine = "C12_Remote_Mag"; count = 10; };
      class _xx_M168_Remote_Mag { magazine = "M168_Remote_Mag"; count = 5; };
      class _xx_tsp_breach_block_mag { magazine = "tsp_breach_block_mag"; count = 20; };
      class _xx_tsp_breach_linear_mag { magazine = "tsp_breach_linear_mag"; count = 20; };
      class _xx_tsp_breach_popper_mag { magazine = "tsp_breach_popper_mag"; count = 40; };
      class _xx_tsp_breach_silhouette_mag { magazine = "tsp_breach_silhouette_mag"; count = 10; };
      class _xx_tsp_breach_package_mag { magazine = "tsp_breach_package_mag"; count = 10; };
      class _xx_tsp_breach_stick_mag { magazine = "tsp_breach_stick_mag"; count = 20; };
      class _xx_DemoCharge_Remote_Mag { magazine = "DemoCharge_Remote_Mag"; count = 10; };
      class _xx_M319_HEDP_Grenade_Shell { magazine = "M319_HEDP_Grenade_Shell"; count = 20; };
    };
    class TransportWeapons {};
    class TransportItems 
    {
      class _xx_ACE_IR_Strobe_Item { name = "ACE_IR_Strobe_Item"; count = 30; };
      class _xx_OPTRE_M9_Frag { name = "OPTRE_M9_Frag"; count = 20; };
      class _xx_OPTRE_M2_Smoke { name = "OPTRE_M2_Smoke"; count = 20; };
      class _xx_OPTRE_M2_Smoke_Blue { name = "OPTRE_M2_Smoke_Blue"; count = 10; };
      class _xx_OPTRE_M2_Smoke_Red { name = "OPTRE_M2_Smoke_Red"; count = 10; };
      class _xx_OPTRE_M2_Smoke_Green { name = "OPTRE_M2_Smoke_Green"; count = 10; };
      class _xx_OPTRE_M2_Smoke_Purple { name = "OPTRE_M2_Smoke_Purple"; count = 10; };
      class _xx_OPTRE_ELB47_Strobe { name = "OPTRE_ELB47_Strobe"; count = 5; };
      class _xx_ACE_M84 { name = "ACE_M84"; count = 10; };
      class _xx_ACRE_M26_Clacker { name = "ACRE_M26_Clacker"; count = 10; };
    };
  };


  // ---------------------------------------------------------------------------
  //  Launcher Supply Pod
  // ---------------------------------------------------------------------------
  class SFT_sp_at: SFT_sp_empty 
  {
    displayName = "[SFT] Supply Pod (Launchers)";
    /*hiddenSelectionsTextures[] = 
    {
      ""
    };*/
    class TransportMagazines 
    {
      class _xx_OPTRE_M41_Twin_HEAT_SACLOS { magazine = "OPTRE_M41_Twin_HEAT_SACLOS"; count = 4; };
      class _xx_OPTRE_M41_Twin_HEAT_SALH { magazine = "OPTRE_M41_Twin_HEAT_SALH"; count = 4; };
      class _xx_OPTRE_M41_Twin_HEAT_Thermal { magazine = "OPTRE_M41_Twin_HEAT_Thermal"; count = 4; };
      class _xx_TCF_2Rnd_50x137_SALH { magazine = "TCF_2Rnd_50x137_SALH"; count = 4; };
      class _xx_TCF_2Rnd_50x137_AA { magazine = "TCF_2Rnd_50x137_AA"; count = 4; };
      class _xx_TCF_2Rnd_50x137_PEN { magazine = "TCF_2Rnd_50x137_PEN"; count = 4; };
      class _xx_TCF_2Rnd_50x137_THERMO { magazine = "TCF_2Rnd_50x137_THERMO"; count = 4; };
      class _xx_TCF_2Rnd_50x137_SACLOS { magazine = "TCF_2Rnd_50x137_SACLOS"; count = 4; };
    };
    class TransportWeapons 
    {
      class _xx_twelfth_m96 { weapon = "twelfth_m96"; count = 10; };
    };
    class TransportItems {};
  };

  // ---------------------------------------------------------------------------
  //  Rifle Ammo Supply Pod
  // ---------------------------------------------------------------------------
  class SFT_sp_rifle: SFT_sp_empty 
  {
    displayName = "[SFT] Supply Pod (Rifle Ammo)";
    /*hiddenSelectionsTextures[] = 
    {
      ""
    };*/
    class TransportMagazines 
    {
      class _xx_OPTRE_32Rnd_762x51_Mag { magazine = "OPTRE_32Rnd_762x51_Mag"; count = 75; };
      class _xx_OPTRE_32Rnd_762x51_Mag_Tracer { magazine = "OPTRE_32Rnd_762x51_Mag_Tracer"; count = 75; };
      class _xx_OPTRE_36Rnd_95x40_Mag { magazine = "OPTRE_36Rnd_95x40_Mag"; count = 25; };
      class _xx_OPTRE_36Rnd_95x40_Mag_Tracer { magazine = "OPTRE_36Rnd_95x40_Mag_Tracer"; count = 25; };
      class _xx_OPTRE_60Rnd_5x23mm_Mag { magazine = "OPTRE_60Rnd_5x23mm_Mag"; count = 25; };
      class _xx_12Rnd_8Gauge { magazine = "12Rnd_8Gauge"; count = 25; };
      class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag { magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag"; count = 10; };
    };
    class TransportWeapons {};
    class TransportItems {};
  };

  // ---------------------------------------------------------------------------
  //  MG Ammo Supply Pod
  // ---------------------------------------------------------------------------
  class SFT_sp_mg: SFT_sp_empty {
    displayName = "[SFT] Supply Pod (MG Ammo)";
    /*hiddenSelectionsTextures[] = 
    {
      ""
    };*/
    class TransportMagazines 
    {
      class _xx_twelfth_95x40_100rnd { magazine = "twelfth_95x40_100rnd"; count = 10; };
      class _xx_twelfth_95x40_100rnd_T { magazine = "twelfth_95x40_100rnd_T"; count = 10; };
      class _xx_twelfth_762x51_200rnd { magazine = "twelfth_762x51_200rnd"; count = 10; };
      class _xx_twelfth_762x51_200rnd_T { magazine = "twelfth_762x51_200rnd_T"; count = 10; };
      class _xx_twelfth_762x51_400rnd_T { magazine = "OPTRE_400Rnd_762x51_Box_Tracer"; count = 5; };
      class _xx_ACE_SpareBarrel { magazine = "ACE_SpareBarrel"; count = 5; };
    };
    class TransportWeapons {};
    class TransportItems 
    {
      class _xx_ACE_WaterBottle { name = "ACE_WaterBottle"; count = 10; };
    };
  };

  // ---------------------------------------------------------------------------
  //  Equipment Supply Pod
  // ---------------------------------------------------------------------------
  class SFT_sp_eq: SFT_sp_empty {
    displayName = "[SFT] Supply Pod (Equipment)";
    /*hiddenSelectionsTextures[] = {
      ""
    };*/
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems 
    {
      class _xx_ToolKit { name = "ToolKit"; count = 5; };
      class _xx_ACE_DefusalKit { name = "ACE_DefusalKit"; count = 5; };
      class _xx_ACE_wirecutter { name = "ACE_wirecutter"; count = 5; };
      class _xx_ItemcTab { name = "ItemcTab"; count = 10; };
      class _xx_ItemAndroid { name = "ItemAndroid"; count = 10; };
      class _xx_ItemMicroDAGR { name = "ItemMicroDAGR"; count = 10; };
      class _xx_ACRE_PRC343 { name = "ACRE_PRC343"; count = 10; };
      class _xx_ACRE_PRC148 { name = "ACRE_PRC148"; count = 10; };
      class _xx_ACRE_PRC117F { name = "ACRE_PRC117F"; count = 2; };
      class _xx_ACRE_VHF30108SPIKE { name = "ACRE_VHF30108SPIKE"; count = 2; };
      class _xx_ACRE_VHF30108MAST { name = "ACRE_VHF30108MAST"; count = 2; };
      class _xx_Laserbatteries { name = "Laserbatteries"; count = 2; };
    };
  };

  // ---------------------------------------------------------------------------
  //  Module Logic for Pelican Supply Drop
  // ---------------------------------------------------------------------------
  class Logic;
  class Module_F: Logic {
    class Arguments {};
    class ModuleDescription {};
  };

  class Module_OPTRE_PelicanSupplyDrop: Module_F {
    class Arguments {
      class box1 {
        displayName = "Supply Pod 1";
        description = "Type of box required.";
        defaultValue = "rdm";
        typeName = "STRING";
        /*
          The 'values' array enumerates all possible supply pod classes 
          for the drop-down. We add references to our 12th supply pods at
          the bottom, letting you pick them in Eden's module interface.
        */
        class values {
          class n1 { name = "none"; value = "none"; };
          class n2 { name = "Random Supply Pod"; value = "rdm"; default = 1; };
          class n3 { name = "Sniper [OLD] Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Sniper"; };
          class n4 { name = "Medical Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Medical"; };
          class n5 { name = "MA5B Supply Pod"; value = "OPTRE_Ammo_SupplyPod_AR"; };
          class n6 { name = "LMG Supply Pod"; value = "OPTRE_Ammo_SupplyPod_LMG"; };
          class n7 { name = "SMG Supply Pod"; value = "OPTRE_Ammo_SupplyPod_SMG"; };
          class n8 { name = "Pistol Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Pistol"; };
          class n9 { name = "Shotgun Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Shotgun"; };
          class n10 { name = "Launcher Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Launcher"; };
          class n11 { name = "DMR Supply Pod"; value = "OPTRE_Ammo_SupplyPod_DMR"; };
          class n12 { name = "BR Supply Pod"; value = "OPTRE_Ammo_SupplyPod_BR"; };
          class n13 { name = "MA5K Supply Pod"; value = "OPTRE_Ammo_SupplyPod_MA5K"; };
          class n14 { name = "SRS99C Supply Pod"; value = "OPTRE_Ammo_SupplyPod_SRS99C"; };
          class n15 { name = "MA5BAC Supply Pod"; value = "OPTRE_Ammo_SupplyPod_ARC"; };
          class n16 { name = "MA5BAC Supply Pod"; value = "OPTRE_Ammo_SupplyPod_ARC_GL"; };
          class n17 { name = "M37 Supply Pod"; value = "OPTRE_Ammo_SupplyPod_37"; };
          class n18 { name = "M37GL Supply Pod"; value = "OPTRE_Ammo_SupplyPod_37_GL"; };
          class n19 { name = "MA5BGL Supply Pod"; value = "OPTRE_Ammo_SupplyPod_AR_GL"; };
          class n20 { name = "CUSTOM Supply Pod"; value = "OPTRE_Ammo_SupplyPod_Empty"; };
          class n21 { name = "[SFT] Medical Supply Pod"; value = "SFT_sp_medical"; };
          class n23 { name = "[SFT] Explosives Supply Pod"; value = "SFT_sp_ex"; };
          class n25 { name = "[SFT] Launcher Supply Pod"; value = "SFT_sp_at"; };
          class n26 { name = "[SFT] Mortar Supply Pod"; value = "SFT_sp_mortar"; };
          class n27 { name = "[SFT] Rifle Supply Pod"; value = "SFT_sp_rifle"; };
          class n28 { name = "[SFT] Machine Gun Supply Pod"; value = "SFT_sp_mg"; };
          class n29 { name = "[SFT] Equipment Supply Pod"; value = "SFT_sp_eq"; };
        };
      };
    };
  };
};
