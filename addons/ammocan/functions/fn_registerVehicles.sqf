/*
    AMMOCAN_COMPAT_fnc_registerVehicles

    For each vehicle you support, push one entry of the form:
    [
      _vehicleClass,                   // e.g., "rhsusf_m1151_m2_v3_usarmy_d"
      [
        // one or more turret mappings:
        // [ turretPath, weaponClass, [magClassnames...], ammocanItemClass ]
        // turretPath uses the usual nested indices, [] for main turret
        [ [], "HMG_M2", ["100Rnd_127x99_mag"], "ammocan_127x99_100" ],
        // example: a commander or secondary turret:
        [ [0], "LMG_coax", ["2000Rnd_762x51_Belt"], "ammocan_762x51_200" ]
      ]
    ]
*/

private _maps = [];

// ==== EXAMPLES — replace with the vehicles you want ====
// Example 1: Vanilla Hunter HMG
_maps pushBack [
    "TCP_B_UNSC_A_M12A_LAAG_M41",
    [
        [ [], "HMG_127_MBT", ["200Rnd_127x99_mag_Tracer_Red"], "ammocan_127x99_200" ]
    ]
];

// Example 2: RHS HMMWV M2 (change to your exact RHS classname)
_maps pushBack [
    "rhsusf_m1025_w_m2",
    [
        [ [], "rhs_weap_m2", ["rhsusf_100Rnd_127x99"], "ammocan_127x99_100" ]
    ]
];

// =======================================================

// --- Hand off to Ammocan ---
// The mod exposes an init that scans vehicles and converts turret mags into cans.
// Two common patterns exist in mods like this:
//  1) A public function to register mappings (ideal).
//  2) Global arrays/settings that the init reads (fallback).
//
// We try the function first; if missing, we fall back to setting a global and calling the scan.

{
    _x params ["_vehClass", "_turretDefs"];

    // Preferred: a public API function, e.g., Ammocan_fnc_registerMapping
    if (!isNil "Ammocan_fnc_registerMapping") then {
        [_vehClass, _turretDefs] call Ammocan_fnc_registerMapping;

    } else {
        // Fallback: append to a known global read on init (common in CBA addons)
        if (isNil "Ammocan_supportedVehicles") then { Ammocan_supportedVehicles = []; };
        Ammocan_supportedVehicles pushBack [_vehClass, _turretDefs];

        // If Ammocan exposes a rescan, call it so editor-placed vehicles update:
        if (!isNil "Ammocan_fnc_rescan") then {
            [] call Ammocan_fnc_rescan;
        };
    };
} forEach _maps;
