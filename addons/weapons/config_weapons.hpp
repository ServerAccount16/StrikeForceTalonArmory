class CfgWeapons
{
  class TCP_optic_EVOSJ;
  class InventoryOpticsItem_Base_F;
  class ItemInfo;
  class OpticsModes;
  class EVOSJ;
  class TCP_OpticsMode_Base_3D_F;
  //--------------------------------------------------------------------
  //  Optics
  //--------------------------------------------------------------------
  class SFT_OpticsMode_Base : TCP_OpticsMode_Base_3D_F
  {
    opticsID = 1;
    useModelOptics = 0;
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    memoryPointCamera = "eye";
    opticsFlare = 0;
    opticsDisablePeripherialVision = 0;
    distanceZoomMin = 50;
    distanceZoomMax = 500;
    cameraDir = "";
    visionMode[] =
        {
            "Normal",
            "NVG",
            "TI"};
    opticsPPEffects[] =
        {
            "Default"};
    thermalMode[] = {0};
  };
  class SFT_optic_EVOSJ_SL : TCP_optic_EVOSJ
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] EVOSJ SmartLink (1-4x)";
    picture = "\TCP\Weapons_F_TCP\Acc\Optic\EVOSJ\data\ui\icon_optic_EVOSJ_ca.paa";
    weaponInfoType = "CTGCY_Smartlink_AR";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVOSJ : SFT_OpticsMode_Base
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 2;
          useModelOptics = 1;
          memoryPointCamera = "opticView";
          opticsZoomMin = 0.18;
          opticsZoomMax = 0.09;
          opticsZoomInit = 0.18;
          discretefov[] = {0.18, 0.09};
          modelOptics[] =
              {
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_AR_SmartLink_1-4",
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_AR_SmartLink_2-8"};
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
        };
      };
    };
  };
  class TCP_optic_EVOSM;
  class SFT_optic_EVOSM_SL : TCP_optic_EVOSM
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] EVOSM SmartLink (1-4x)";
    picture = "\TCP\Weapons_F_TCP\Acc\Optic\EVOSM\data\ui\icon_optic_EVOSM_ca.paa";
    weaponInfoType = "CTGCY_Smartlink_LMG";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVOSM : SFT_OpticsMode_Base
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 2;
          useModelOptics = 1;
          memoryPointCamera = "opticView2";
          opticsZoomMin = 0.18000001;
          opticsZoomMax = 0.090000004;
          opticsZoomInit = 0.18000001;
          discretefov[] = {0.18000001, 0.090000004};
          modelOptics[] =
              {
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_LMG_SmartLink_1-4",
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_LMG_SmartLink_2-8"};
        };
      };
    };
  };
  class TCP_optic_EVOSD;
  class SFT_optic_EVOSD_SL : TCP_optic_EVOSD
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] EVOSD SmartLink (1-8x)";
    picture = "\TCP\Weapons_F_TCP\Acc\Optic\EVOSD\data\ui\icon_optic_EVOSD_ca.paa";
    weaponInfoType = "CTGCY_DMR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.125;
          opticsZoomMax = 0.03125;
          opticsZoomInit = 0.125;
          discreteInitIndex = 0;
          discretefov[] = {0.125, 0.063000001, 0.03125};
          discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000};
          discreteDistanceInitIndex = 1;
          distanceZoomMin = 50;
          distanceZoomMax = 2000;
          opticsPPEffects[] =
              {
                  ""};
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          memoryPointCamera = "opticView";
          modelOptics[] =
              {
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_DMR_Scope_2",
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_DMR_Scope_4",
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_DMR_Scope_8"};
          visionMode[] =
              {
                  "Normal",
                  "NVG",
                  "TI"};
          thermalMode[] = {0};
          cameraDir = "";
        };
      };
    };
  };
  class TCP_optic_ERO;
  class TCP_optic_ERO_Blue;
  class SFT_optic_ERO : TCP_optic_ERO
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] EVO SmartLink Red (1-3x)";
    picture = "\TCP\Weapons_F_TCP\Acc\Optic\ERO\data\ui\icon_optic_ERO_Red_ca.paa";
    weaponInfoType = "CTGCY_DMR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVO : SFT_OpticsMode_Base
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.25;
          opticsZoomMax = 0.082000002;
          opticsZoomInit = 0.25;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] =
              {
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_VK78_Scope_1",
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_VK78_Scope_3"};
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          discreteInitIndex = 0;
          discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000};
          discreteDistanceInitIndex = 1;
          distanceZoomMin = 50;
          distanceZoomMax = 2000;
          cameraDir = "";
          visionMode[] =
              {
                  "Normal",
                  "NVG",
                  "TI"};
          thermalMode[] = {0};
          opticsPPEffects[] =
              {
                  ""};
        };
      };
    };
  };
  class SFT_optic_ERO_Blue : TCP_optic_ERO_Blue
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] EVO SmartLink Blue (1-3x)";
    picture = "\TCP\Weapons_F_TCP\Acc\Optic\ERO\data\ui\icon_optic_ERO_Red_ca.paa";
    weaponInfoType = "CTGCY_DMR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVO : SFT_OpticsMode_Base
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.25;
          opticsZoomMax = 0.082000002;
          opticsZoomInit = 0.25;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] =
              {
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_VK78_Scope_1",
                  "\CTGCY_Weapons\data\scopes\UI\CTGCY_VK78_Scope_3"};
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          discreteInitIndex = 0;
          discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1550, 1600, 1650, 1700, 1750, 1800, 1850, 1900, 1950, 2000};
          discreteDistanceInitIndex = 1;
          distanceZoomMin = 50;
          distanceZoomMax = 2000;
          cameraDir = "";
          visionMode[] =
              {
                  "Normal",
                  "NVG",
                  "TI"};
          thermalMode[] = {0};
          opticsPPEffects[] =
              {
                  ""};
        };
      };
    };
  };
  class 19_UNSC_M7_optic;
  class SFT_optic_M7 : 19_UNSC_M7_optic
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M7 Red-Dot SmartLink";
    model = "\UNSC_F_Weapons\weapons\m7_data\attachments\m7_scope.p3d";
    weaponInfoType = "CTGCY_Smartlink_SMG";
    class ItemInfo : ItemInfo
    {
      mass = 2;
      opticType=1;
      optics=1;
      modelOptics = "\UNSC_F_Weapons\weapons\m7_data\attachments\m7_scope.p3d";
      class OpticsModes : OpticsModes
      {
        class M7_optic
        {
          opticsID=1;
          useModelOptics=0;
          opticsPPEffects[]=
          {
            ""
          };
          opticsDisablePeripherialVision=0;
          opticsZoomMin=0.375;
          opticsZoomMax=1.25;
          opticsZoomInit=0.75;
          memoryPointCamera="eye";
          visionMode[]=
          {
            "Normal",
            "NVG"
          };
          discreteDistance[]={200};
          discreteDistanceInitIndex=1;
          distanceZoomMin=200;
          distanceZoomMax=200;
          distanceZoominit=00;
          cameraDir="";
        };
        class SmartLink : EVOSJ
        {
          opticsID=2;
					useModelOptics=1;
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discretefov[]={0.125};
					distanceZoomMin=50;
					distanceZoomMax=300;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\CTGCY_Weapons\data\scopes\UI\CTGCY_SMG_Scope_2"
					};
        };
      };
    };
  };
  class 19_UNSC_SRS99AM_scope;
  class SFT_optic_SRS99AM : 19_UNSC_SRS99AM_scope
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M7 Red-Dot SmartLink";
    picture = "\TCP\Weapons_F_TCP\Acc\Optic\ERO\data\ui\icon_optic_ERO_Red_ca.paa";
    weaponInfoType = "CTGCY_SRS_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class SRS99AM : SFT_OpticsMode_Base
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID=2;
          opticsDisablePeripherialVision=0;
          useModelOptics=1;
          opticsPPEffects[]=
          {
            "OpticsCHAbera1",
            "OpticsBlur1"
          };
          opticsZoomMin=0.0099999998;
          opticsZoomMax=0.25;
          opticsZoomInit=0.25;
          discretefov[]={0.25,0.050000001,0.025,0.0099999998};
          discreteinitIndex=0;
          discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
          discreteDistanceInitIndex=1;
          distanceZoomMin=100;
          distanceZoomMax=2000;
          memoryPointCamera="opticView";
          modelOptics[]=
          {
            "\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"
          };
            visionMode[]=
          {
            "Normal",
            "NVG",
            "TI"
          };
          thermalMode[]={0};
        };
      };
    };
  };
  //------------------------------------------------------------------//
  //  Arsenal inventory object
  //------------------------------------------------------------------//
  class Item_Base_F;
  class SFT_Item_optic_EVOSJ_SL : Item_Base_F
  {
    scope = 2;
    scopeCurator = 2;
    dlc = "SFT";
    displayName = "[SFT] EVOSJ SmartLink (1-4x)";
    editorCategory = "EdCat_WeaponAttachments_TCP";
    editorSubcategory = "EdSubcat_TopSlot_Optics";
    class TransportItems
    {
      class _xx_SFT_optic_EVOSJ_SL
      {
        name = "SFT_optic_EVOSJ_SL";
        count = 1;
      };
    };
  };
  //--------------------------------------------------------------------
  //  Weapons
  //--------------------------------------------------------------------
  //  MA37
  class TCP_arifle_MA37_F;
  class Mode_SemiAuto;
  class Mode_FullAuto;
  class TCP_arifle_MA37_GL_F;
  class TCP_launcher_M301_F;
  class BaseSoundModeType;
  class SFT_MA37 : TCP_arifle_MA37_F
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    dlc = "SFT";
    displayName = "[SFT] MA37 ICWS";
    baseWeapon = "SFT_MA37";
    magazines[] = MA37_magazines;
    magazineWell[]   = MA37_magazines;
    reloadMagazineSound[] =
    {
      "\OPTRE_Wbk_WeaponImprovements\reload\mb5_reload.ogg",
      2,
      1,
      25
    };
    reloadAction = "GestureReloadMA5";
    class Single : Mode_SemiAuto
      {
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] =
            {
                "OPTRE_MA5C_SoundSet",
                "Rogue9_Tail_SoundSet",
                "Rogue9_InteriorTail_SoundSet"
            };
        };
      };
      class FullAuto : Mode_FullAuto
      {
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] =
            {
                "OPTRE_MA5C_SoundSet",
                "Rogue9_Tail_SoundSet",
                "Rogue9_InteriorTail_SoundSet"
            };
        };
      };
  };
  class SFT_MA37GL : TCP_arifle_MA37_GL_F
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    dlc = "SFT";
    displayName = "[SFT] MA37 + M301 ICWS";
    baseWeapon = "SFT_MA37GL";
    magazines[] = MA37_magazines;
    magazineWell[]   = MA37_magazines;
    reloadMagazineSound[] =
        {
            "\OPTRE_Wbk_WeaponImprovements\reload\mb5_reload.ogg",
            2,
            1,
            25};
    reloadAction = "GestureReloadMA5";
    muzzles[] =
        {
            "this",
            "M301"};
    class M301 : TCP_launcher_M301_F
    {
      useModelOptics = 0;
      useExternalOptic = 0;
      cameraDir = "op_look";
      discreteDistance[] = {25, 50, 75, 100, 150, 200};
      discreteDistanceCameraPoint[] =
          {
              "op_eye_25",
              "op_eye_50",
              "op_eye_75",
              "op_eye_100",
              "op_eye_150",
              "op_eye_200"};
      magazines[] = UGL_magazines;
      magazineWell[]   = UGL_magazines;
    };
    class Single : Mode_SemiAuto
      {
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] =
            {
                "OPTRE_MA5C_SoundSet",
                "Rogue9_Tail_SoundSet",
                "Rogue9_InteriorTail_SoundSet"
            };
        };
      };
      class FullAuto : Mode_FullAuto
      {
        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] =
            {
                "OPTRE_MA5C_SoundSet",
                "Rogue9_Tail_SoundSet",
                "Rogue9_InteriorTail_SoundSet"
            };
        };
      };
  };
  //  M731
  class TCP_LMG_M731_F;
  class SFT_M731 : TCP_LMG_M731_F
  {
    author = "Weber";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M731 LMG";
    reloadAction = "GestureReloadM200";
    magazines[] = M731_magazines;
    magazineWell[]   = M731_magazines;
    recoil = "recoil_rpk12";
  };
  //  M392
  class TCP_srifle_M392_F;
  class SFT_M392 : TCP_srifle_M392_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M392 DMR";
    baseWeapon = "SFT_M392";
    magazines[] = M392_magazines;
    magazineWell[]   = M392_magazines;
    reloadAction = "GestureReloadBR55";
    reloadMagazineSound[] =
        {
            "\OPTRE_Wbk_WeaponImprovements\reload\battleRifle_reload.ogg",
            2,
            1,
            25};
  };
  class TCP_Weapon_srifle_VK78_Gray_F;
  class SFT_VK78 : TCP_Weapon_srifle_VK78_Gray_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] VK78 Commando";
    baseWeapon = "SFT_VK78";
    magazines[] = VK78_magazines;
    magazineWell[]   = VK78_magazines;
    reloadAction = "WBK_Commando_Reload";
    reloadMagazineSound[] =
        {
            "\OPTRE_Wbk_WeaponImprovements\reload\srs99_reload.ogg",
            2,
            1,
            25};
  };
  class TCP_arifle_M6J_F;
  class SFT_M6J : TCP_arifle_M6J_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M6J Pistol Carbine";
    baseWeapon = "SFT_M6J";
    magazines[] = M6J_magazines;
    magazineWell[]   = M6J_magazines;
  };
  class TCP_hgun_Pistol_M6C2_F;
  class SFT_M6C :TCP_hgun_Pistol_M6C2_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M6C SOCOM";
    baseWeapon = "SFT_M6C";
    magazines[] = {"SFT_12Rnd_127x30_52_Mag"};
    magazineWell[]   = {"SFT_12Rnd_127x30_52_Mag"};
	};
  class TCP_launch_M41_F;
  class SFT_M41 : TCP_launch_M41_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M41 SPNKr";
    baseWeapon = "SFT_M41";
    magazines[] = M41_magazines;
    magazineWell[]   = M41_magazines;
    modelOptics[]=
		{
			"\CTGCY_Weapons\data\scopes\UI\CTGCY_SPNKR_Scope_2.p3d",
			"\CTGCY_Weapons\data\scopes\UI\CTGCY_SPNKR_Scope_4.p3d",
			"\CTGCY_Weapons\data\scopes\UI\CTGCY_SPNKR_Scope_6.p3d"
		};
		weaponInfoType="CTGCY_SPNKR_Display_Info";
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.125;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.125;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.125,0.052499998,0.041999999};
				discreteInitIndex=0;
			};
		};
  };
  class OPTRE_M45TAC;
  class SFT_M45TAC : OPTRE_M45TAC
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M45 Combat Shotgun";
    baseWeapon = "SFT_M45TAC";
    magazines[] = M45TAC_magazines;
    magazineWell[]   = M45TAC_magazines;
  };
  class TCP_hgun_Pistol_FlareGun_Black_F;
  class SFT_FlareGun : TCP_hgun_Pistol_FlareGun_Black_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M8 12G Flare Gun";
    baseWeapon = "SFT_FlareGun";
    magazines[] = FlareGun_magazines;
    magazineWell[]   = FlareGun_magazines;
  };
  class 19_UNSC_M7;
  class WeaponSlotsInfo;
  class SFT_M7 : 19_UNSC_M7
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M7 Caseless Submachine Gun";
    baseWeapon = "SFT_M7";
    magazines[] = M7_magazines;
    magazineWell[]   = M7_magazines;
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      class MuzzleSlot : MuzzleSlot {};
      class CowsSlot : CowsSlot
      {
        compatibleitems[]=
        {
          "SFT_optic_M7",
        };
      };
      class PointerSlot : PointerSlot {};
    };
  };
  class TEST: 19_UNSC_M7
  {
    author="19th Fleet Mod Team - Crazy & Split Jaw";
    _generalMacro="19_UNSC_M7";
    baseWeapon="19_UNSC_M7";
    scope=2;
    displayName="[19 - UNSC] M7";
    model="\UNSC_F_Weapons\weapons\UNSC_M7.p3d";
    mass=20;
    reloadAction="OPTRE_GestureReloadM7";
    //reloadAction="GestureReloadBR55";
    picture="\UNSC_F_Weapons\weapons\UI\M7_UI.paa";
    UiPicture="\UNSC_F_Weapons\weapons\UI\M7_UI.paa";
  handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\smg\data\anim\m7_handpos.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\smg_handanim_Spartan.rtm"};
    muzzles[]=
    {
      "this"
    };

    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      holsterOffset = "";	// name of a memory point in weapon to serve as zero of the model
      holsterScale = .75;
      mass=20;
      class MuzzleSlot: MuzzleSlot
      {
        inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
        displayName="Muzzle Slot";
        compatibleItems[]=
        {
          "19_UNSC_m7_Suppressor"
        };
        iconPosition[]={0,0.40000001};
      };
      class CowsSlot: CowsSlot
      {
        linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
        displayName="$STR_A3_CowsSlot0";
        compatibleitems[]=
        {
          "SFT_optic_M7",
        };
        iconPosition[]={0.5,0.30000001};
      };
      class PointerSlot: PointerSlot
      {
        compatibleItems[]=
        {
          "19_UNSC_M7_LAM"
        };
        iconPosition[]={0.2,0.40000001};
      };
    };
  };
  class 19_UNSC_SRS99AM;
  class SFT_SRS99AM : 19_UNSC_SRS99AM
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] SRS99 Anti-Material Sniper Rifle";
    baseWeapon = "SFT_SRS99AM";
    //magazines[] = SRS99_magazines;
    //magazineWell[]   =;
  };
  class OPTRE_M319N;
  class SFT_M319N : OPTRE_M319N
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M319 Individual Grenade Launcher";
    baseWeapon = "SFT_M319N";
    magazines[] = M319N_magazines;
    magazineWell[]   = M319N_magazines;
  };
};

class asdg_OpticRail1913 // defined by CBA/ASDG
{
  class compatibleItems
  {
    SFT_optic_EVOSJ_SL = 1;
    SFT_optic_EVOSM_SL = 1;
    SFT_optic_EVOSD_SL = 1;
    SFT_optic_ERO = 1;
    SFT_optic_ERO_blue = 1;
    SFT_optic_M7 = 1;
    SFT_optic_SRS99AM = 1;
  };
};