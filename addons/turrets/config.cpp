#include "config_macros.hpp"

/*
  Copied from SFT MEU config.cpp as I am the original author.
  Mod: SFT MEU (SFT Marine Expeditionary Unit)
  ==============================================================================
  config.cpp

  This file configures all custom turret assets for the SFT MEU mod. 
  We use a macro (DEFINE_TURRET) to reduce repetitive definitions for multiple
  turret variants (UNSC, Insurrectionist, CMA, etc.).

  Key Points:
    - CfgPatches: Identifies this addon, lists requiredAddons, and enumerates 
      the units it introduces.
    - Turret base classes: We reference OPTRE turret classes (e.g., OPTRE_Static_M41).
      Make sure your requiredAddons[] includes the mod that provides these base classes.
    - DEFINE_TURRET macro: Simplifies creation of new turret classes. It sets scope, 
      displayName, faction, etc.

  Macro usage example:
    DEFINE_TURRET(SFT_Static_M41, 
                  OPTRE_Static_M41, 
                  "[SFT] M41 LAAG Turret", 
                  "SFT", 
                  "SFT", 
                  "SFT_Turrets")

  expands to:
    class SFT_Static_M41 : OPTRE_Static_M41 {
      scope = 2;
      scopeCurator = 2;
      author = "Weber";
      displayName = "[SFT] M41 LAAG Turret";
      faction = "SFT";
      editorCategory = "SFT";
      editorSubcategory = "SFT_Turrets";
      armor = 200;
    };
  ==============================================================================
*/

class CfgPatches {
  class SFT_Weapons_Turrets {
    /*
      units[]: This lists all classes recognized as units by the game (placeable
               in editor). If you add or remove turret classes, update them here.
    */
    units[] = {
      "SFT_Static_M41",
      "SFT_Static_Gauss",
      "SFT_Static_ATGM",
      "SFT_Static_AA",
      "SFT_Static_Base_Turret", // If you plan on referencing a custom base
      "SFT_Static_M41_Ins",
      "SFT_Static_AA_Ins",
      "SFT_Static_ATGM_Ins",
      "SFT_Static_Gauss_CMA",
      "SFT_Static_M41_CMA",
      "SFT_Static_AA_CMA",
      "SFT_Static_ATGM_CMA"
    };
    weapons[] = {};
    ammo[] = {};
    magazines[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
      "OPTRE_Weapons_Turrets",
      "A3_Weapons_F",
      "A3_Weapons_F_Exp"
    /*
      requiredAddons: The mod will not load unless these are present.
      - OPTRE_Weapons_Turrets: Contains the base turret classes 
        (OPTRE_Static_M41, etc.)
      - A3_Weapons_F, A3_Weapons_F_Exp: Typically needed for certain inherited
        parameters or references in Arma 3.
    */
    };
  };
};

// -----------------------------------------------------------------------------
//  Pre-declare base classes from OPTRE so we can inherit from them
// -----------------------------------------------------------------------------
class OPTRE_Static_M41;
class OPTRE_Static_Gauss;
class OPTRE_Static_ATGM;
class OPTRE_Static_AA;
class OPTRE_Static_Base_Turret;
class OPTRE_Static_M41_Ins;
class OPTRE_Static_AA_Ins;
class OPTRE_Static_ATGM_Ins;
class OPTRE_Static_Gauss_Ins;
class OPTRE_Static_Gauss_CMA;
class OPTRE_Static_M41_CMA;
class OPTRE_Static_AA_CMA;
class OPTRE_Static_ATGM_CMA;

// -----------------------------------------------------------------------------
//  Macro: DEFINE_TURRET
//  Creates a new turret class inheriting from a base class, with scope, display, 
//  faction, and armor set.
// -----------------------------------------------------------------------------
#define DEFINE_TURRET(CLASSNAME, BASECLASS, DISPLAY, FACTION, CATEGORY, SUBCATEGORY) \
  class CLASSNAME : BASECLASS { \
    scope = 2; \
    scopeCurator = 2; \
    author = "Weber"; \
    displayName = DISPLAY; \
    faction = FACTION; \
    editorCategory = CATEGORY; \
    editorSubcategory = SUBCATEGORY; \
    armor = 200; \
  };
  
// -----------------------------------------------------------------------------
//  CfgVehicles
//  Where we define actual turret classes using our macro. 
// -----------------------------------------------------------------------------
class CfgVehicles {
  // -------------------- UNSC Turrets --------------------
  DEFINE_TURRET(SFT_Static_M41, OPTRE_Static_M41, "[SFT] M41 LAAG Turret", "SFT", "SFT", "SFT_Turrets")
  DEFINE_TURRET(SFT_Static_Gauss, OPTRE_Static_Gauss, "[SFT] M41 Gauss Turret", "SFT", "SFT", "SFT_Turrets")
  DEFINE_TURRET(SFT_Static_ATGM, OPTRE_Static_ATGM, "[SFT] M41 ATGM Turret", "SFT", "SFT", "SFT_Turrets")
  DEFINE_TURRET(SFT_Static_AA, OPTRE_Static_AA, "[SFT] M41 AA Turret", "SFT", "SFT", "SFT_Turrets")

  // ----------------- Insurrectionist Turrets -----------------
  DEFINE_TURRET(SFT_Static_M41_Ins, OPTRE_Static_M41_Ins, "[SFT] M41 LAAG Turret (Insurrectionist)", "SFT_Ins", "SFT_Ins", "SFT_INS_Turrets")
  DEFINE_TURRET(SFT_Static_Gauss_Ins, OPTRE_Static_Gauss_Ins, "[SFT] M41 Gauss Turret (Insurrectionist)", "SFT_Ins", "SFT_Ins", "SFT_INS_Turrets")
  DEFINE_TURRET(SFT_Static_ATGM_Ins, OPTRE_Static_ATGM_Ins, "[SFT] M41 ATGM Turret (Insurrectionist)", "SFT_Ins", "SFT_Ins", "SFT_INS_Turrets")
  DEFINE_TURRET(SFT_Static_AA_Ins, OPTRE_Static_AA_Ins, "[SFT] M41 AA Turret (Insurrectionist)", "SFT_Ins", "SFT_Ins", "SFT_INS_Turrets")

  // -------------------- CMA Turrets --------------------
  DEFINE_TURRET(SFT_Static_M41_CMA, OPTRE_Static_M41_CMA, "[SFT] M41 LAAG Turret (CMA)", "SFT_CMA", "SFT_CMA", "SFT_CMA_Turrets")
  DEFINE_TURRET(SFT_Static_Gauss_CMA, OPTRE_Static_Gauss_CMA, "[SFT] M41 Gauss Turret (CMA)", "SFT_CMA", "SFT_CMA", "SFT_CMA_Turrets")
  DEFINE_TURRET(SFT_Static_ATGM_CMA, OPTRE_Static_ATGM_CMA, "[SFT] M41 ATGM Turret (CMA)", "SFT_CMA", "SFT_CMA", "SFT_CMA_Turrets")
  DEFINE_TURRET(SFT_Static_AA_CMA, OPTRE_Static_AA_CMA, "[SFT] M41 AA Turret (CMA)", "SFT_CMA", "SFT_CMA", "SFT_CMA_Turrets")
};