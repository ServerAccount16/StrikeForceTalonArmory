class CfgAmmo
{

   class B_40mm_GPR_Tracer_Red;
   class SFT_40mmHE: B_40mm_GPR_Tracer_Red
   {
      hit = 110;
      cartridge = "";
   };

   class B_40mm_APFSDS_Tracer_Red;
   class SFT_40mmAP: B_40mm_APFSDS_Tracer_Red
   {
      hit = 180;
      cartridge = "";
   };

   class OPTRE_B_20mm_HEIAP;
   class SFT_20mm_HEIAP: OPTRE_B_20mm_HEIAP
   {
      hit = 55;
      CraterEffects = "";
   };

   class ammo_Penetrator_Titan_AT;
   class SFT_heat_penetrator: ammo_Penetrator_Titan_AT
   {
      hit = 750;
   };

   class Rocket_04_HE_F;
   class SFT_ammo_Anvil1_HE: Rocket_04_HE_F
   {
   	maverickweapon		= 0;

   	hit					= 220;
   	indirectHit			= 50;
   	indirectHitRange	= 10;

   	cost				= 75;

   	maxSpeed			= 740;
   	thrustTime			= 1.1;
   	thrust				= 800;
   	//lower the sideAirFriction is, the bigger drop there is
   	sideAirFriction	= 0.004;
   	timeToLive		= 60;
   	fuseDistance	= 40;
   	whistleDist		= 24;

      ace_frag_charge = 1040;
      ace_frag_classes [] = {
         "ace_frag_medium",
         "ace_frag_medium_HD"
      };
      ace_frag_gurney_c = 2700;
      ace_frag_gurney_k = 0.5;
      ace_frag_metal = 3850;
      ace_frag_skip = 0;
   };

   class SFT_ammo_Anvil1_HEAT: SFT_ammo_Anvil1_HE
   {
      indirectHit = 20;
      indirectHitRange = 5;

      warheadName = "TandemHEAT";
		submunitionAmmo="SFT_heat_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;	

      ace_frag_gurney_c = 2700;
      ace_frag_gurney_k = 0.5;
      ace_frag_metal = 3850;
      ace_frag_classes [] = {
         "ACE_frag_tiny",
         "ACE_frag_tiny_HD",
         "ACE_frag_small",
         "ACE_frag_small_HD",         
      };
      ace_frag_skip = 0;      
   };

};