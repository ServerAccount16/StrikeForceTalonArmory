#include "config_xtdgearmodels.hpp"
#include "config_macros.hpp"

// Big Comment

class CfgPatches
{
  class SFT_gear
  {
    units[] = {}; // Currently no placeable units are defined by this config.
                  // If you add a placeable object\vehicle that belongs to this mod,
                  // you should list that class name here.
    weapons[] = {"SFT_M52_Vest_Base", "SFT_M52_Vest_Standard", "SFT_CH252D_Helmet", 
                  "SFT_CH252D_Helmet_dp", "SFT_BDU_ODST_HJ", "SFT_ODST_BDU_HJ", 
                  "SFT_M52D_Rucksack", "SFT_M52D_Rucksack_Corpsman"
                };
    ammo[] = {};
    magazines[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"CTGCY_Weapons", "A3_Weapons_F_TCP", "OPTRE_Weapons", "MA_Armor"}; 
        /*
        IMPORTANT: If you rely on additional external mods,
        add them here so the game loads them before ours.
      */
  };
};


class CfgWeapons
{
  class VestItem;
  class M52_ODST_Vest_Base;
  class HeadgearItem;
  class MA_Marine_BDU_ODST_HJ;
  class MA_Marine_BDU_ODST_HJ_NC;
  class UniformItem;
  class ItemInfo;
  class CH252D_Helmet;
  class CH252D_Helmet_dp;
  class SFT_M52_Vest_Base: M52_ODST_Vest_Base
	{
		scope=1;
		scopeArsenal=1;
		author="Weber";
		displayName="[SFT] M52D (Base)";
		model="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
		picture="";
		hiddenSelectionsTextures[]=
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_cqbShoulder_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_cqbShoulder_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_marksmanShoulder_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_marksmanShoulder_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\SFT_Standard_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\SFT_Standard_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\SFT_Standard_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_standardShoulder_M52D_co.paa",
      "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_standardShoulder_M52D_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
			"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
		};
		class ItemInfo: VestItem
		{
			vestType="Rebreather";
			hiddenSelectionsTextures[]=
			{
				"\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_cqbShoulder_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_cqbShoulder_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_marksmanShoulder_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_marksmanShoulder_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\SFT_Standard_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\SFT_Standard_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\SFT_Standard_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_standardShoulder_M52D_co.paa",
        "\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\EAGLE\shoulders\SFT_standardShoulder_M52D_co.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
				"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
				"MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
			};
			uniformModel="MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
			containerClass="Supply200";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=25;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=20;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=30;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	// THIS IS ONLY HERE SO PEOPLE CAN SWAP OVER LOADOUTS
	class SFT_M52_Vest_StandardV1: SFT_M52_Vest_Base
	{
		scope=2;
		scopeArsenal=2;
		author="Weber";
		displayName="[SFT] M56D Vest (Rifleman V1)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7",
			"Camo8",
			"Camo9",
			"Camo10",
			"Camo11",
			"Camo12",
			"Camo13",
			"Camo14",
			"Camo15",
			"Camo16",
			"Camo17",
			"Camo18",
			"Camo19",
			"Camo20",
			"Camo21",
			"Camo22",
			"Camo23",
			"Camo24",
			"Camo25",
			"Camo26",
			"Camo27",
			"Camo28",
			"Camo29",
			"ChestPouch",
			"StomachPouch",
			"ChestPMLeft",
			"ChestPMRight",
			"Marksman_Left",
			"Marksman_Right",
			"CQB_Left",
			"CQB_Right",
			"LShoulderRadio",
			"RShoulderRadio",
			"TorsoPMRight",
			"TorsoPouch",
			"WaistGRight",
			"WaistPLeft",
			"WaistPRight",
			"WaistRLeft",
			"WaistRRight",
			"WaistSLeft",
			"LegPouchL",
			"LegPouchR"
		};
		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5",
				"Camo6",
				"Camo7",
				"Camo8",
				"Camo9",
				"Camo10",
				"Camo11",
				"Camo12",
				"Camo13",
				"Camo14",
				"Camo15",
				"Camo16",
				"Camo17",
				"Camo18",
				"Camo19",
				"Camo20",
				"Camo21",
				"Camo22",
				"Camo23",
				"Camo24",
				"Camo25",
				"Camo26",
				"Camo27",
				"Camo28",
				"Camo29",
				"ChestPouch",
				"StomachPouch",
				"ChestPMLeft",
				"ChestPMRight",
				"Marksman_Left",
				"Marksman_Right",
				"CQB_Left",
				"CQB_Right",
				"LShoulderRadio",
				"RShoulderRadio",
				"TorsoPMRight",
				"TorsoPouch",
				"WaistGRight",
				"WaistPLeft",
				"WaistPRight",
				"WaistRLeft",
				"WaistRRight",
				"WaistSLeft",
				"LegPouchL",
				"LegPouchR"
			};
		};
	};
	Unit_Vest_Macro(Eagle)
	Unit_Vest_Macro(Vulture)
	Unit_Vest_Macro(Osprey)
	Unit_Vest_Macro(Cardinal)
	Unit_Vest_Macro(Auxiliary)
	DEFINE_SFT_VEST(Pilot,"[SFT] M52D Vest (Pilot)",SLOTS_PILOT_STD,CrewmanRecruit,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Crewman,"[SFT] M52D Vest (Crewman)",SLOTS_CREWMAN_STD,CrewmanRecruit,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Pilot,"[SFT] M52D Vest (Pilot)",SLOTS_PILOT_STD,PO3,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Crewman,"[SFT] M52D Vest (Crewman)",SLOTS_CREWMAN_STD,PO3,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Pilot,"[SFT] M52D Vest (Pilot)",SLOTS_PILOT_STD,PO2,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Crewman,"[SFT] M52D Vest (Crewman)",SLOTS_CREWMAN_STD,PO2,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Pilot,"[SFT] M52D Vest (Pilot)",SLOTS_PILOT_STD,PO1,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Crewman,"[SFT] M52D Vest (Crewman)",SLOTS_CREWMAN_STD,PO1,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Pilot,"[SFT] M52D Vest (Pilot)",SLOTS_PILOT_STD,CPO,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Crewman,"[SFT] M52D Vest (Crewman)",SLOTS_CREWMAN_STD,CPO,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Pilot,"[SFT] M52D Vest (Pilot)",SLOTS_PILOT_STD,SCPO,Canary,SFT_Vests_Logistics) \
	DEFINE_SFT_VEST(Crewman,"[SFT] M52D Vest (Crewman)",SLOTS_CREWMAN_STD,SCPO,Canary,SFT_Vests_Logistics) \
  class SFT_CH252D_Helmet: CH252D_Helmet
  {
    scope         = 2;
    scopeArsenal  = 2;
    displayName   = "[SFT] CH252D Helmet";
		tcp_visrRscTitlesClass="RscTCPVisrODST";
		tcp_visrActivatedClass="TCP_H_Helmet_ECH252D";
		tcp_visrDeactivatedClass="TCP_H_Helmet_ECH252D_Transparent";
    hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
    hiddenSelectionsTextures[] = {
      "\x\strikeforcetalon_armory\addons\sft_gear\helmets\SFT_Standard_CH252D_CO.paa",
      "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa",
      "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
      hiddenSelectionsTextures[] = {
        "\x\strikeforcetalon_armory\addons\sft_gear\helmets\SFT_Standard_CH252D_CO.paa",
        "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Visor_CO.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
      };
    };
  };
  class SFT_BDU_ODST_HJ: MA_Marine_BDU_ODST_HJ
	{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[SFT] M56D Combat Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SFT_ODST_BDU_HJ";
			containerClass="Supply150";
			mass=10;
			uniformType="Neopren";
			modelSides[]={6};
		};
	};
  class SFT_BDU_ODST_HJ_NC: MA_Marine_BDU_ODST_HJ_NC
	{
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[SFT] M56D Combat Uniform [NC]";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SFT_ODST_BDU_HJ_NC";
			containerClass="Supply150";
			mass=10;
			uniformType="Neopren";
			modelSides[]={6};
		};
	};
};

class CfgVehicles
{
  class MA_Marine_ODST_BDU_HJ;
  class MA_Marine_ODST_BDU_HJ_NC;
  class MA_M52D_Rucksack;
  class SFT_ODST_BDU_HJ: MA_Marine_ODST_BDU_HJ
  {
    scope=2;
    scopeArsenal=2;
    UniformClass="SFT_BDU_ODST_HJ";
    model="\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
    picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
    hiddenSelections[]=
    {
      "Camo1",
      "Camo2",
      "Camo3",
      "Camo4",
      "Camo5",
      "Camo6",
      "Camo7",
      "Camo8",
      "Camo9",
      "Camo10",
      "Shoulders_Lower1",
      "Shoulders_Lower2",
      "Shoulders_Upper"
    };
    hiddenSelectionsTextures[]=
    {
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTUpperBDU_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTLowerBDU_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperUpperArmor_CO.paa",
      "\x\strikeforcetalon_armory\addons\SFT_gear\bdu\SFT_bduLowerArmor_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
      "MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
    };
  };
  class SFT_ODST_BDU_HJ_NC: MA_Marine_ODST_BDU_HJ_NC
	{
		scope=2;
		scopeArsenal=2;
		UniformClass="SFT_BDU_ODST_HJ_NC";
		model="\MA_Armor\data\Uniforms\M52_ODST_Uniform\M52_ODST_Uniform.p3d";
		picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7",
			"Camo8",
			"Camo9",
			"Camo10",
			"Uni_Collar",
			"Shoulders_Lower1",
			"Shoulders_Lower2",
			"Shoulders_Upper"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTUpperBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODSTLowerBDU_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperUpperArmor_CO.paa",
			"\x\strikeforcetalon_armory\addons\SFT_gear\bdu\SFT_bduLowerArmor_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa",
			"MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa"
		};
	};
  class SFT_M52D_Rucksack: MA_M52D_Rucksack
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MA] M52D Rucksack";
		model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
		picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad=350;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\strikeforcetalon_armory\addons\SFT_gear\backpack\SFT_rucksack_CO.paa",
			"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
		};
	};
  class SFT_M52D_Rucksack_Corpsman: MA_M52D_Rucksack
	{
		scope=2;
		scopeArsenal=2;
		displayName="[MA] M52D Rucksack [Corpsman]";
		model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
		picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad=400;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\strikeforcetalon_armory\addons\SFT_gear\backpack\SFT_rucksackCorpsman_CO.paa",
			"MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
		};
	};
};