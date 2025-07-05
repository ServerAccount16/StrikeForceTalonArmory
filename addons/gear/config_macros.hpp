#define HIDDENSELECTIONSTEXTURES_REMAINING \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", \
    "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", \
    "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", \
    "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", \
    "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", \
    "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"

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
#define SLOTS_CORPSMAN_VAR1_STD   { SLOTS_BASE }
#define SLOTS_CORPSMAN_VAR2_STD   { SLOTS_BASE }

#define P(PATH) \x\strikeforcetalon_armory\addons\sft_gear\armor\vest\##PATH
#define QP(PATH) #P(PATH)
#define GLUE(A,B) A##B

//SFT_VEST Macro
#define DEFINE_SFT_VEST(SLOT, DISPLAY, SLOTS, RANK, SQUAD, XTD) \
class SFT_M52_Vest_##SQUAD##_##RANK##_##SLOT: SFT_M52_Vest_Base { \
    scope = 2; \
    scopeArsenal = 2; \
    displayName = DISPLAY; \
    class XtdGearInfo \
    { \
        model = #XTD; \
        MOS = #SLOT; \
        Rank = #RANK; \
        Unit = #SQUAD; \
    }; \
    hiddenSelections[] = SLOTS; \
    hiddenSelectionsTextures[] = { \
        QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
        QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
        QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
        QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
        QP(base\##RANK##_SFT_Standard_M52D_co.paa), \
        QP(base\##RANK##_SFT_Standard_M52D_co.paa), \
        QP(base\##RANK##_SFT_Standard_M52D_co.paa), \
        QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
        QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
        HIDDENSELECTIONSTEXTURES_REMAINING \
    }; \
    class ItemInfo: ItemInfo { \
        hiddenSelections[] = SLOTS; \
        hiddenSelectionsTextures[] = { \
            QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
            QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
            QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
            QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
            QP(base\##RANK##_SFT_Standard_M52D_co.paa), \
            QP(base\##RANK##_SFT_Standard_M52D_co.paa), \
            QP(base\##RANK##_SFT_Standard_M52D_co.paa), \
            QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
            QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
            HIDDENSELECTIONSTEXTURES_REMAINING \
        }; \
    }; \
};

#define DEFINE_SFT_VEST_CORPSMAN(SLOT, DISPLAY, SLOTS, RANK, SQUAD, XTD) \
class SFT_M52_Vest_##SQUAD##_##RANK##_##SLOT: SFT_M52_Vest_Base { \
    scope = 2; \
    scopeArsenal = 2; \
    displayName = DISPLAY; \
    class XtdGearInfo \
    { \
        model = #XTD; \
        MOS = #SLOT; \
        Rank = #RANK; \
    }; \
    hiddenSelections[] = SLOTS; \
    hiddenSelectionsTextures[] = { \
        QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
        QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
        QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
        QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
        QP(base\##RANK##_SFT_Standard_M52D_Corpsman_co.paa), \
        QP(base\##RANK##_SFT_Standard_M52D_Corpsman_co.paa), \
        QP(base\##RANK##_SFT_Standard_M52D_Corpsman_co.paa), \
        QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
        QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
        HIDDENSELECTIONSTEXTURES_REMAINING \
    }; \
    class ItemInfo: ItemInfo { \
        hiddenSelections[] = SLOTS; \
        hiddenSelectionsTextures[] = { \
            QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
            QP(##SQUAD\shoulders\SFT_cqbShoulder_M52d_co.paa), \
            QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
            QP(##SQUAD\shoulders\SFT_marksmanShoulder_M52D_co.paa), \
            QP(base\##RANK##_SFT_Standard_M52D_Corpsman_co.paa), \
            QP(base\##RANK##_SFT_Standard_M52D_Corpsman_co.paa), \
            QP(base\##RANK##_SFT_Standard_M52D_Corpsman_co.paa), \
            QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
            QP(##SQUAD\shoulders\SFT_standardShoulder_M52D_co.paa), \
            HIDDENSELECTIONSTEXTURES_REMAINING \
        }; \
    }; \
};

// Unit Macro
#define Unit_Vest_Maco(SQUAD) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,Recruit,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,Recruit,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,Recruit,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,Recruit,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Autorifleman,"[SFT] M52D Vest (Autorifleman)",SLOTS_AUTORIFLE_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Marksman,"[SFT] M52D Vest (Marksman)",SLOTS_MARKSMAN_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Combat_Engineer,"[SFT] M52D Vest (Comat Engineer)",SLOTS_COMBAT_ENG_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Breacher,"[SFT] M52D Vest (Breacher)",SLOTS_BREACHER_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Hellbringer,"[SFT] M52D Vest (Hellbringer)",SLOTS_HELLBRINGER_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Sniper,"[SFT] M52D Vest (Sniper)",SLOTS_SNIPER_STD,Private,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Autorifleman,"[SFT] M52D Vest (Autorifleman)",SLOTS_AUTORIFLE_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Marksman,"[SFT] M52D Vest (Marksman)",SLOTS_MARKSMAN_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Combat_Engineer,"[SFT] M52D Vest (Comat Engineer)",SLOTS_COMBAT_ENG_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Breacher,"[SFT] M52D Vest (Breacher)",SLOTS_BREACHER_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Hellbringer,"[SFT] M52D Vest (Hellbringer)",SLOTS_HELLBRINGER_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Sniper,"[SFT] M52D Vest (Sniper)",SLOTS_SNIPER_STD,PFC,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Autorifleman,"[SFT] M52D Vest (Autorifleman)",SLOTS_AUTORIFLE_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Marksman,"[SFT] M52D Vest (Marksman)",SLOTS_MARKSMAN_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Combat_Engineer,"[SFT] M52D Vest (Comat Engineer)",SLOTS_COMBAT_ENG_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Breacher,"[SFT] M52D Vest (Breacher)",SLOTS_BREACHER_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Hellbringer,"[SFT] M52D Vest (Hellbringer)",SLOTS_HELLBRINGER_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Sniper,"[SFT] M52D Vest (Sniper)",SLOTS_SNIPER_STD,LCpl,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Autorifleman,"[SFT] M52D Vest (Autorifleman)",SLOTS_AUTORIFLE_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Marksman,"[SFT] M52D Vest (Marksman)",SLOTS_MARKSMAN_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Combat_Engineer,"[SFT] M52D Vest (Comat Engineer)",SLOTS_COMBAT_ENG_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Breacher,"[SFT] M52D Vest (Breacher)",SLOTS_BREACHER_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Hellbringer,"[SFT] M52D Vest (Hellbringer)",SLOTS_HELLBRINGER_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Sniper,"[SFT] M52D Vest (Sniper)",SLOTS_SNIPER_STD,Corporal,SQUAD,SFT_Vests_Enlisted) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,Sergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,Sergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,Sergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,Sergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Autorifleman,"[SFT] M52D Vest (Autorifleman)",SLOTS_AUTORIFLE_STD,Sergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Marksman,"[SFT] M52D Vest (Marksman)",SLOTS_MARKSMAN_STD,Sergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,StaffSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman1CLS,"[SFT] M52D Vest (Combat Life Saver)",SLOTS_RIFLEMAN_VAR1_STD,StaffSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,StaffSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,StaffSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Autorifleman,"[SFT] M52D Vest (Autorifleman)",SLOTS_AUTORIFLE_STD,StaffSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Marksman,"[SFT] M52D Vest (Marksman)",SLOTS_MARKSMAN_STD,StaffSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,GunnerySergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,GunnerySergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,GunnerySergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,MasterSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,MasterSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,MasterSergeant,SQUAD,SFT_Vests_NCO) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,SecondLieutenant,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,SecondLieutenant,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,SecondLieutenant,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,FirstLieutenant,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,FirstLieutenant,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,FirstLieutenant,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman1,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR1_STD,Captain,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman2,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR2_STD,Captain,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST(Rifleman3,"[SFT] M52D Vest (Rifleman)",SLOTS_RIFLEMAN_VAR3_STD,Captain,SQUAD,SFT_Vests_CO) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman1,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR1_STD,HR,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman2,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR2_STD,HR,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman1,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR1_STD,HM3,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman2,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR2_STD,HM3,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman1,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR1_STD,HM2,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman2,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR2_STD,HM2,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman1,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR1_STD,HM1,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman2,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR2_STD,HM1,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman1,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR1_STD,HMC,SQUAD,SFT_Vests_Corpsman) \
	DEFINE_SFT_VEST_CORPSMAN(Corpsman2,"[SFT] M52D Vest (Corpsman)",SLOTS_CORPSMAN_VAR2_STD,HMC,SQUAD,SFT_Vests_Corpsman)