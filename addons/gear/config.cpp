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
    requiredAddons[] = {"CTGCY_Weapons", "TCP_Weapons", "OPTRE_Weapons"}; 
        /*
        IMPORTANT: If you rely on additional external mods,
        add them here so the game loads them before ours.
      */
  };
};


class CfgWeapons
{
  class VestItem;
  class HeadgearItem;
  class UniformItem;
  class ItemInfo;
	class TCP_V_M43D_ODST_4_Black;
	class SFT_V_M43D_ODST_4_Black : TCP_V_M43D_ODST_4_Black
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
    displayName   = "[SFT] M43/D CBBAS Var 2 (Black)";
		hiddenSelectionsTextures[] = {"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa","\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa","\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3","decals"};
			containerClass="Supply200";
		};
		VEST_HITPOINT_INFO
	};
	class SFT_V_M43D_ODST_TEST : SFT_V_M43D_ODST_4_Black
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
    displayName   = "[SFT] M43/D TEST";
		hiddenSelectionsTextures[] = 
		{
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa",
			"\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\vest_Shoulders_ODST_CO.paa",// Test Shoulders
			"\x\strikeforcetalon_armory\addons\sft_gear\armor\vest\base\vest_M43D_ODST_CO.paa",// Test Chestplate
			"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_02_CO.paa",
			"\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"
		};
	};
	class TCP_V_M43D_ODST_1_Black;
	class SFT_V_M43D_ODST_1_Black : TCP_V_M43D_ODST_1_Black
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
    displayName   = "[SFT] M43/D CBBAS Var 1 (Black)";
		hiddenSelectionsTextures[] = {"\TCP\characters\BLUFOR\UNSC\Army\Vests\M43A\data\camo\Black\vest_M43A_01_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_Shoulders_ODST_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Vests\M43D\data\camo\Black\vest_M43D_ODST_CO.paa","\TCP\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\white\vest_M43_DecalSheet_CA.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply200";
		};
		VEST_HITPOINT_INFO
	};
	class TCP_H_Helmet_ECH55D_Black_Silver;
	class SFT_H_Helmet_ECH55D_Black_Silver : TCP_H_Helmet_ECH55D_Black_Silver
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
		displayName   = "[SFT] ECH55/D Helmet Black (Silver)";
		ctab_camera = 1;
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Black_Silver","SFT_H_Helmet_ECH55D_Black_Silver_DP"};
		hiddenSelectionsTextures[] = {"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa","tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\h_helmet_ECH55D_Silver.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class SFT_H_Helmet_ECH55D_TEST_Silver : SFT_H_Helmet_ECH55D_Black_Silver
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
		displayName   = "[SFT] ECH55/D Helmet TEST (Silver)";
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_TEST_Silver","SFT_H_Helmet_ECH55D_TEST_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\helmet_ECH55D_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
	};
	class TCP_H_Helmet_ECH55D_Black_Black_DP;
	class SFT_H_Helmet_ECH55D_Black_Silver_DP : TCP_H_Helmet_ECH55D_Black_Black_DP
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 1;
    scopeArsenal  = 1;
		displayName   = "[SFT] ECH55/D Helmet Black (Silver)";
		ctab_camera = 1;
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Black_Silver","SFT_H_Helmet_ECH55D_Black_Silver_DP"};
		hiddenSelectionsTextures[] = {"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_CO.paa","\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa","tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\h_helmet_ECH55D_DP.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class SFT_H_Helmet_ECH55D_TEST_Silver_DP : SFT_H_Helmet_ECH55D_Black_Silver_DP
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 1;
    scopeArsenal  = 1;
		displayName   = "[SFT] ECH55/D Helmet TEST (Silver)";
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_TEST_Silver","SFT_H_Helmet_ECH55D_TEST_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\helmet_ECH55D_CO.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
	};
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black;
	class SFT_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black: TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] CBUU Unzipped (Black)";
		hiddenSelectionsTextures[] = {"\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_TacShirt_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SFT_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black";
			containerClass="Supply150";
		};
	};
	class TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Black;
	class SFT_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Black: TCP_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Black
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] CBUU Zipped (Black)";
		hiddenSelectionsTextures[] = {"\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_TacShirt_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SFT_B_CBUU_TacShirt_SlimSleeve_Gloves_Black";
			containerClass="Supply150";
		};
	};
	class TCP_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive;
	class SFT_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive: TCP_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] CBUU Unzipped (Olive)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SFT_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive";
			containerClass="Supply150";
		};
	};
	class TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive;
	class SFT_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive: TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] CBUU Unzipped (Olive)";
		class ItemInfo: ItemInfo
		{
			uniformClass = "SFT_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive";
			containerClass="Supply150";
		};
	};
};

class CfgVehicles
{
	class TCP_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black;
	class SFT_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black: TCP_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black
	{
		author = "Weber";
		dlc = "SFT";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "SFT_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Unzipped_Black";
		hiddenSelectionsTextures[] = {"\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_TacShirt_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_Pants_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_Gloves_CO.paa"};
	};
	class TCP_B_CBUU_TacShirt_SlimSleeve_Gloves_Black;
	class SFT_B_CBUU_TacShirt_SlimSleeve_Gloves_Black: TCP_B_CBUU_TacShirt_SlimSleeve_Gloves_Black
	{
		author = "Weber";
		dlc = "TCP";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "SFT_U_B_CBUU_TacShirt_SlimSleeve_Gloves_Black";
		hiddenSelectionsTextures[] = {"\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_TacShirt_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_Pants_CO.paa","\TCP\Characters\BLUFOR\UNSC\Army\Uniforms\CBUU\data\camo\Black\CBUU_Gloves_CO.paa"};
	};
	class TCP_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive;
	class SFT_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive: TCP_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive
	{
		author = "Weber";
		dlc = "TCP";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "SFT_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_Olive";
	};
	class TCP_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive;
	class SFT_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive: TCP_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive
	{
		author = "Weber";
		dlc = "TCP";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "SFT_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Olive";
	};
};