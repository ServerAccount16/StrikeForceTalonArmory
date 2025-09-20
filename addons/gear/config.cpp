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
	// Base Enlisted
	M43D_BASIC_VESTS(1,"[SFT] M43/D CBBAS Var 1 (Black)",basic)
	M43D_BASIC_VESTS(2,"[SFT] M43/D CBBAS Var 2 (Black)",basic)
	M43D_BASIC_VESTS(3,"[SFT] M43/D CBBAS Var 3 (Black)",basic)
	M43D_BASIC_VESTS(4,"[SFT] M43/D CBBAS Var 4 (Black)",basic)
	// Corpsman
	M43D_BASIC_VESTS(1,"[SFT] M43/D CBBAS Corpsman Var 1 (Black)",Corpsman)
	M43D_BASIC_VESTS(2,"[SFT] M43/D CBBAS Corpsman Var 2 (Black)",Corpsman)
	M43D_BASIC_VESTS(3,"[SFT] M43/D CBBAS Corpsman Var 3 (Black)",Corpsman)
	M43D_BASIC_VESTS(4,"[SFT] M43/D CBBAS Corpsman Var 4 (Black)",Corpsman)
	// NCO
	M43D_NCO_VESTS(1,"[SFT] M43/D CBBAS NCO Var 1 (Black)",orange)
	class TCP_H_Helmet_ECH55D_Black_Silver;
	/*M43D_BASIC_HELMETS(1,"[SFT] ECH55/D Helmet Var 1 (Silver)")
	M43D_BASIC_HELMETS(2,"[SFT] ECH55/D Helmet Var 2 (Silver)")
	M43D_BASIC_HELMETS(3,"[SFT] ECH55/D Helmet Var 3 (Silver)")
	M43D_BASIC_HELMETS(4,"[SFT] ECH55/D Helmet Var 4 (Silver)")
	// NCO
	M43D_NCO_HELMETS(1,"[SFT] ECH55/D Helmet NCO Var 1 (Silver)")*/
	class TCP_H_Helmet_ECH55D_Black_Black_DP;
	class SFT_H_Helmet_ECH55D_Var1_Silver : TCP_H_Helmet_ECH55D_Black_Silver
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
		ctab_camera = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 1 (Silver)";
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var1_Silver","SFT_H_Helmet_ECH55D_Black_Var1_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v1_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	class SFT_H_Helmet_ECH55D_Black_Var1_Silver_DP : TCP_H_Helmet_ECH55D_Black_Black_DP
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 1;
    scopeArsenal  = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 1 (Silver)";
		ctab_camera = 1;
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var1_Silver","SFT_H_Helmet_ECH55D_Black_Var1_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v1_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	// Var 2
	class SFT_H_Helmet_ECH55D_Var2_Silver : TCP_H_Helmet_ECH55D_Black_Silver
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
		ctab_camera = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 2 (Silver)";
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var2_Silver","SFT_H_Helmet_ECH55D_Black_Var2_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v2_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	class SFT_H_Helmet_ECH55D_Black_Var2_Silver_DP : TCP_H_Helmet_ECH55D_Black_Black_DP
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 1;
    scopeArsenal  = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 2 (Silver)";
		ctab_camera = 1;
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var2_Silver","SFT_H_Helmet_ECH55D_Black_Var2_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v2_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	// Var 3
	class SFT_H_Helmet_ECH55D_Var3_Silver : TCP_H_Helmet_ECH55D_Black_Silver
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
		ctab_camera = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 3 (Silver)";
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var3_Silver","SFT_H_Helmet_ECH55D_Black_Var3_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v3_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	class SFT_H_Helmet_ECH55D_Black_Var3_Silver_DP : TCP_H_Helmet_ECH55D_Black_Black_DP
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 1;
    scopeArsenal  = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 3 (Silver)";
		ctab_camera = 1;
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var3_Silver","SFT_H_Helmet_ECH55D_Black_Var3_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v3_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	// Var 4
	class SFT_H_Helmet_ECH55D_Var4_Silver : TCP_H_Helmet_ECH55D_Black_Silver
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 2;
    scopeArsenal  = 2;
		ctab_camera = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 4 (Silver)";
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var4_Silver","SFT_H_Helmet_ECH55D_Black_Var4_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v4_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\silver\helmet_ECH55D_Visor_CO.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	class SFT_H_Helmet_ECH55D_Black_Var4_Silver_DP : TCP_H_Helmet_ECH55D_Black_Black_DP
	{
		author 				= "Weber";
		dlc 					= "SFT";
		scope         = 1;
    scopeArsenal  = 1;
		displayName   = "[SFT] ECH55/D Helmet Var 4 (Silver)";
		ctab_camera = 1;
		TCP_visrClasses[] = {"SFT_H_Helmet_ECH55D_Var4_Silver","SFT_H_Helmet_ECH55D_Black_Var4_Silver_DP"};
		hiddenSelectionsTextures[] = 
		{
			"\x\strikeforcetalon_armory\addons\sft_gear\helmets\base\basic_v4_helmet.paa",
			"\TCP\Characters\BLUFOR\UNSC\Marines\Headgear\helmet_ECH55D\data\camo\default\helmet_ECH55D_Visor_CA.paa",
			"tcp\characters\BLUFOR\UNSC\ARMY\Vests\M43A\data\camo\White\vest_M43_DecalSheet_CA.paa"
		};
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
	class OPTRE_ILCS_Rucksack_Black;
	class SFT_ILCS_Rucksack_Black : OPTRE_ILCS_Rucksack_Black
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] ILCS Rucksack (Black)";
		maximumLoad = 350;
	};
	class OPTRE_ILCS_Rucksack_Medical;
	class SFT_ILCS_Rucksack_Medical : OPTRE_ILCS_Rucksack_Medical
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] ILCS Rucksack (Medic)";
		maximumLoad = 400;
	};
	class OPTRE_ILCS_Rucksack_Heavy;
	class SFT_ILCS_Rucksack_Heavy : OPTRE_ILCS_Rucksack_Heavy
	{
		author = "Weber";
		dlc = "SFT";
		scope = 2;
		displayName = "[SFT] ILCS Rucksack (Heavy)";
		maximumLoad = 450;
	};
};