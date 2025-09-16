#define P(PATH) \x\strikeforcetalon_armory\addons\sft_gear\armor\vest\##PATH
#define QP(PATH) #P(PATH)
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
