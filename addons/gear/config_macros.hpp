#define P(PATH) \x\strikeforcetalon_armory\addons\sft_gear\armor\vest\##PATH
#define Ph(PATH) \x\strikeforcetalon_armory\addons\sft_gear\helmets\##PATH
#define QP(PATH) #P(PATH)
#define QPh(PATH) #Ph(PATH)
#define GLUE(A,B) A##B

#define HITPROT(CLASS,HITPOINT,ARMOR,PASS) \
class CLASS { hitpointName=#HITPOINT; armor=ARMOR; passThrough=PASS; };

#define VEST_HITPOINT_INFO \
class HitpointsProtectionInfo { \
  HITPROT(Neck,HitNeck,30,0.5) \
  HITPROT(Legs,HitLegs,30,0.5) \
  HITPROT(Arms,HitArms,30,0.1) \
  HITPROT(Hands,HitHands,30,0.1) \
  HITPROT(Chest,HitChest,30,0.1) \
  HITPROT(Diaphragm,HitDiaphragm,30,0.1) \
  HITPROT(Abdomen,HitAbdomen,30,0.1) \
  HITPROT(Pelvis,HitPelvis,30,0.1) \
  class Body { hitpointName="HitBody"; passThrough=0.1; }; \
};

#define HELMET_HITPOINT_INFO \
class HitpointsProtectionInfo \
{ \
  class Head \
  { \
    hitpointName="HitHead"; \
    armor=25; \
    passThrough=0.1; \
  }; \
  class Face \
  { \
    hitpointName="HitFace"; \
    armor=25; \
    passThrough=0.1; \
  }; \
  class Neck \
  { \
    hitpointName="HitNeck"; \
    armor=20; \
    passThrough=0.1; \
  }; \
}; 

#define M43D_BASIC_VESTS(VAR,DISPLAY,SHOULDER) \
class SFT_V_M43D_ODST_##VAR##_##SHOULDER : TCP_V_M43D_ODST_4_Black \
{ \
  author 				= "Weber"; \
  dlc 					= "SFT"; \
  scope         = 2; \
  scopeArsenal  = 2; \
  displayName   = DISPLAY; \
  hiddenSelectionsTextures[] =  \
  { \
    "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa", \
    QP(base\##SHOULDER##_shoulder.paa), \
    QP(base\basic_v##VAR##_chest.paa), \
    "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa", \
    "\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa" \
  }; \
  class ItemInfo: ItemInfo \
  { \
    hiddenSelections[] = {"camo","camo1","camo2","camo3","decals"}; \
    containerClass="Supply200"; \
    VEST_HITPOINT_INFO \
  }; \
};

#define M43D_NCO_VESTS(VAR,DISPLAY,SHOULDER) \
class SFT_V_M43D_ODST_##VAR##_##SHOULDER : TCP_V_M43D_ODST_4_Black \
{ \
  author 				= "Weber"; \
  dlc 					= "SFT"; \
  scope         = 2; \
  scopeArsenal  = 2; \
  displayName   = DISPLAY; \
  hiddenSelectionsTextures[] =  \
  { \
    "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa", \
    QP(base\##SHOULDER##_shoulder.paa), \
    QP(base\nco_v##VAR##_chest.paa), \
    "\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa", \
    "\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa" \
  }; \
  class ItemInfo: ItemInfo \
  { \
    hiddenSelections[] = {"camo","camo1","camo2","camo3","decals"}; \
    containerClass="Supply200"; \
    VEST_HITPOINT_INFO \
  }; \
};

#define M43D_BASIC_HELMETS(VAR,DISPLAY) \
class SFT_H_Helmet_ECH55D_##VAR##_Black_Silver : TCP_H_Helmet_ECH55D_Black_Silver \
{ \
  author 				= "Weber"; \
  dlc 					= "SFT"; \
  scope         = 2; \
  scopeArsenal  = 2; \
  displayName   = DISPLAY; \
  ctab_camera = 1; \
  TCP_visrClasses[] = \
  {  \
    CAT3(SFT_H_Helmet_ECH55D_Black_,VAR,_Silver),  \
    CAT3(SFT_H_Helmet_ECH55D_Black_,VAR,_Silver_DP)  \
  };  \
  hiddenSelectionsTextures[] =  \
  { \
    QPh(base\basic_v##VAR##_helmet.paa), \
    "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa", \
    "tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" \
  }; \
  class ItemInfo: ItemInfo \
  { \
    uniformModel = "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\h_helmet_ECH55D_Silver.p3d"; \
    HELMET_HITPOINT_INFO \
  }; \
};

#define M43D_NCO_HELMETS(VAR,DISPLAY) \
class SFT_H_Helmet_ECH55D_##VAR##_NCO_Black_Silver : TCP_H_Helmet_ECH55D_Black_Silver \
{ \
  author 				= "Weber"; \
  dlc 					= "SFT"; \
  scope         = 2; \
  scopeArsenal  = 2; \
  displayName   = DISPLAY; \
  ctab_camera = 1; \
  TCP_visrClasses[] = \
  {  \
    CAT3(SFT_H_Helmet_ECH55D_Black_,VAR,_Silver),  \
    CAT3(SFT_H_Helmet_ECH55D_Black_,VAR,_Silver_DP)  \
  };  \
  hiddenSelectionsTextures[] =  \
  { \
    QPh(base\nco_v##VAR##_helmet.paa), \
    "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa", \
    "tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa" \
  }; \
  class ItemInfo: ItemInfo \
  { \
    uniformModel = "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\h_helmet_ECH55D_Silver.p3d"; \
    HELMET_HITPOINT_INFO \
  }; \
};