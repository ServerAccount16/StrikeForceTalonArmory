// ============================================================================
// SFT Weapons Configuration
// ============================================================================

#include "config_macros.hpp"
#include "config_ammo.hpp"
#include "config_magazines.hpp"
#include "config_weapons.hpp"

class CfgPatches
{
    class SFT_Weapons
    {
        units[] =
        {
            "SFT_Item_optic_EVOSJ_SL"
        }; // If you add a placeable object/vehicle that belongs to this mod, add its classname here
        weapons[] =
        {
            "SFT_optic_EVOSJ_SL",
            "SFT_MA37",
            "SFT_MA37GL",
            "SFT_M731",
            "SFT_M392",
            "SFT_VK78",
            "SFT_M6J",
            "SFT_M6C",
            "SFT_M41",
            "SFT_M45TAC",
            "SFT_FlareGun",
            "SFT_optic_M7",
            "SFT_M7",
            "SFT_optic_SRS99AM",
            "SFT_SRS99AM"
        }; // Ensure any newly created weapon class is listed above.
        ammo[] = {}; // Please add your new ammo types to this list.
        magazines[] =
        {
            "SFT_100Rnd_762x51_mag",
            "SFT_200Rnd_762x51_Mag",
            "SFT_32Rnd_762x51_Mag",
            "SFT_32Rnd_762x51_Mag_Tracer",
            "SFT_32Rnd_762x51_Mag_UW",
            "SFT_15Rnd_762x51_Mag",
            "SFT_15Rnd_762x51_Mag_Tracer",
            "SFT_24Rnd_127x30_46_Mag",
            "SFT_24Rnd_127x30_46_Mag_Tracer",
            "SFT_12Rnd_127x30_46_Mag",
            "SFT_12Rnd_127x30_46_Mag_Tracer",
            "SFT_M319_HEDP_Grenade_Shell",
            "SFT_M319_HE_Grenade_Shell",
            "SFT_M319_HEAT_Grenade_Shell"
        }; // Add new magazines here.
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "CTGCY_Weapons",
            "Weapons_F_TCP",
            "OPTRE_Weapons",
            "CBA_A3",
            "A3_Weapons_F",
            "TKE_Weapons"
        }; // IMPORTANT: If you rely on additional external mods, add them here so the game loads them before ours.
    };
};
