// 1) Core hidden-selection sets:
#define VEST_HIDE_BASE_SLOTS \
    "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10", \
    "Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20", \
    "Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29", \
    "ChestPouch", "StomachPouch", "ChestPMLeft", "ChestPMRight"

#define SHOW_AUTORIFLE_SLOTS \
    "ChestPMLeft","ChestPMRight", \
    "TorsoPMLeft","TorsoPMRight", \
    "WaistBack","WaistGLeft", "WaistPLeft","WaistPRight", \
    "WaistSRight", "LegPouchL"

#define SHOW_RIFLEMAN_VAR1_SLOTS \
    "LShoulderRadio", "RShoulderRadio", "TorsoPMRight", \
    "TorsoPouch", "WaistGRight", "WaistPLeft", "WaistPRight", \
	"WaistRLeft", "WaistRRight","WaistSLeft", "LegPouchL", "LegPouchR"
    

#define SHOW_CQB_SHOULDERS \
    "Marksman_Left","Marksman_Right", "ODST_Left","ODST_Right"
#define SHOW_MARKSMAN_SHOULDERS \
    "CQB_Left","CQB_Right", "ODST_Left","ODST_Right"
#define SHOW_ODST_SHOULDERS \
    "Marksman_Left","Marksman_Right", "CQB_Left","CQB_Right"

// 1) Core slot‐set:
#define SLOTS_BASE            VEST_HIDE_BASE_SLOTS 

// 2) MOS–specific slot combinations:
#define SLOTS_RIFLEMAN_VAR1_STD   { SLOTS_BASE, SHOW_ODST_SHOULDERS, SHOW_RIFLEMAN_VAR1_SLOTS }
#define SLOTS_RIFLEMAN_VAR1_CMS   { SLOTS_BASE }
#define SLOTS_RIFLEMAN_VAR2_STD   { SLOTS_BASE, SHOW_CQB_SHOULDERS }
#define SLOTS_RIFLEMAN_VAR3_STD   { SLOTS_BASE, SHOW_MARKSMAN_SHOULDERS }
#define SLOTS_AUTORIFLE_STD       { SLOTS_BASE, SHOW_ODST_SHOULDERS,  SHOW_AUTORIFLE_SLOTS}
#define SLOTS_MARKSMAN_STD        { SLOTS_BASE, SHOW_MARKSMAN_SHOULDERS }
#define SLOTS_COMBAT_ENG_STD      { SLOTS_BASE }
#define SLOTS_BREACHER_STD        { SLOTS_BASE, SHOW_CQB_SHOULDERS }
#define SLOTS_PILOT_STD           { SLOTS_BASE }
#define SLOTS_HELLBRINGER_STD     { SLOTS_BASE }
#define SLOTS_SNIPER_STD          { SLOTS_BASE, SHOW_MARKSMAN_SHOULDERS }
#define SLOTS_CREWMAN_STD         { SLOTS_BASE }

#define DEFINE_SFT_VEST(MOS, LABEL, SLOTS)          \
class SFT_M52_Vest_##MOS: SFT_M52_Vest_Base {       \
    scope = 2;                                      \
    scopeArsenal =2;                                \
    author = "Weber";                               \
    displayName = LABEL;        \
    hiddenSelections[] = SLOTS;                     \
    class ItemInfo: ItemInfo                        \
    {                                               \
        vestType="Rebreather";                      \
        hiddenSelections[] = SLOTS;                 \
    };                                              \
};