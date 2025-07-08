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
class asdg_MuzzleSlot_762;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
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
          discreteinitIndex=0;
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
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          distanceZoomMin = 50;
          distanceZoomMax = 500;
          discreteinitIndex=0;
          opticsPPEffects[] = { "Default" };
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
          discreteinitIndex=0;
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
    displayName = "[SFT] Oracle Scope";
    weaponInfoType = "CTGCY_SRS_Display_Info";
    ace_scopeZeroRange=100;
		ace_scopeHeightAboveRail=3.4579;
		ace_scopeAdjust_vertical[]={-5,35};
		ace_scopeAdjust_horizontal[]={-10,10};
		ace_scopeAdjust_verticalIncrement=0.1;
		ace_scopeAdjust_horizontalIncrement=0.1;
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
						"\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_5",
						"\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_10",
						"\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_25"
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
    ACE_barrelTwist=152.39999;
		ACE_barrelLength=1016;
		ACE_overheating_mrbs=4000;
		ACE_overheating_slowdownFactor=1.25;
		ACE_overheating_allowSwapBarrel=0;
		ACE_overheating_dispersion=4.9999999e-006;
		ACE_arsenal_hide=0;
		ACE_twistDirection=1;
		ace_overheating_closedBolt=1;
		ACE_overheating_barrelMass=62.610001;
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
    magazineWell[]   = {"SFT_762x51_30"};
    reloadMagazineSound[] =
    {
      "\OPTRE_Wbk_WeaponImprovements\reload\mb5_reload.ogg",
      2,
      1,
      25
    };
    reloadAction = "GestureReloadMA5";
    class SemiAuto;
    class FullAuto;
    modes[]=
		{
			"MA37_FullAuto",
			"FullAuto_Close_Optics",
			"MA37_Single",
			"Single_Close_Optics",
			"Single_Medium_Optics"
		};
    class MA37_Single : Mode_SemiAuto
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
        class SilencedSound: BaseSoundModeType
        {
          soundSetShot[]=
          {
            "Msbs65_01_Shot_Silencer_SoundSet",
            "Msbs65_01_Tail_Int_Silencer_SoundSet"
          };
        };
      };
      class MA37_FullAuto : FullAuto
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
        class SilencedSound: BaseSoundModeType
        {
          soundSetShot[]=
          {
            "Msbs65_01_Shot_Silencer_SoundSet",
            "Msbs65_01_Tail_Int_Silencer_SoundSet"
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
    magazineWell[]   = {"SFT_762x51_30"};
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
      reloadAction="GestureReloadMSBS_UGL";
      discreteDistanceCameraPoint[] =
          {
              "op_eye_25",
              "op_eye_50",
              "op_eye_75",
              "op_eye_100",
              "op_eye_150",
              "op_eye_200"};
      magazines[] = UGL_magazines;
      magazineWell[]   = {"SFT_762x51_30"};
    };
    class SemiAuto;
    class FullAuto;
    modes[]=
		{
			"MA37GL_FullAuto",
			"FullAuto_Close_Optics",
			"MA37GL_Single",
			"Single_Close_Optics",
			"Single_Medium_Optics"
		};
    class MA37GL_Single : Mode_SemiAuto
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
        class SilencedSound: BaseSoundModeType
        {
          soundSetShot[]=
          {
            "Msbs65_01_Shot_Silencer_SoundSet",
            "Msbs65_01_Tail_Int_Silencer_SoundSet"
          };
        };
      };
      class MA37GL_FullAuto : FullAuto
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
        class SilencedSound: BaseSoundModeType
        {
          soundSetShot[]=
          {
            "Msbs65_01_Shot_Silencer_SoundSet",
            "Msbs65_01_Tail_Int_Silencer_SoundSet"
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
    baseWeapon = "SFT_M731";
    displayName = "[SFT] M731 LMG";
    reloadAction = "GestureReloadM200";
    magazines[] = M731_magazines;
    magazineWell[]   =
    {
      "SFT_762x51_30",
      "SFT_762x51_100",
      "SFT_762x51_200"
    };
    recoil = "recoil_rpk12";
    class FullAuto;
    class StandardSound;
    class SilencedSound;
    modes[]=
    {
        "M731_FullAuto",
        "FullAuto_Medium",
        "FullAuto_Close_Optics",
        "FullAuto_Far_Optics",
        "FullAutoFast",
        "FullAuto_Close",
        "FullAuto_Short"
    };
    class M731_FullAuto: FullAuto
    {
        sounds[]=
        {
            "StandardSound",
            "SilencedSound"
        };
        class StandardSound: StandardSound
            {
            soundSetShot[] =
            {
                "WBK_TKE_MAWV2_SoundSet",
                "DMR03_tail_SoundSet",
                "DMR03_InteriorTail_SoundSet"
            };
        };
        class SilencedSound: SilencedSound
        {
            soundSetShot[] =
            {
                "WBK_TKE_ARBSilenced_SoundSet",
                "SPAR02_silencerTail_SoundSet",
                "SPAR02_silencerInteriorTail_SoundSet"
            };
        };
    };
    class FullAuto_Medium: M731_FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			burst=7;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class FullAuto_Close_Optics: M731_FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			burst=3;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
			requiredOpticType=1;
		};
		class FullAuto_Far_Optics: FullAuto_Close_Optics
		{
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			burst=3;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
			requiredOpticType=1;
		};
		class FullAutoFast: M731_FullAuto
		{
			textureType="fastAuto";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			reloadTime=0.06666667;
			dispersion=0.00087266468;
		};
		class FullAuto_Close: FullAutoFast
		{
			showToPlayer=0;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			burst=10;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
		};
		class FullAuto_Short: FullAuto_Close
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			burst=8;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
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
    magazineWell[]   = {"SFT_762x51_15"};
    reloadAction = "GestureReloadBR55";
    class SemiAuto;
    class FullAuto;
    reloadMagazineSound[] =
    {
      "\OPTRE_Wbk_WeaponImprovements\reload\battleRifle_reload.ogg",
      2,
      1,
      25
    };
    modes[]=
		{
			"M392_FullAuto",
			"FullAuto_Close_Optics",
			"M392_Single",
			"Single_Close_Optics",
			"Single_Medium_Optics"
		};
		class M392_Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"OPTRE_DMR_SoundSet",
					"SyndikatLMG_Tail_SoundSet",
					"SyndikatLMG_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR06_silencerShot_SoundSet",
					"DMR06_silencerTail_SoundSet",
					"DMR06_silencerInteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
			reloadTime=0.33333334;
			dispersion=0.00043633234;
		};
		class Single_Close_Optics: M392_Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			requiredOpticType=1;
		};
		class Single_Medium_Optics: Single_Close_Optics
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=700;
			maxRangeProbab=0.050000001;
			requiredOpticType=1;
		};
		class M392_FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"OPTRE_DMR_SoundSet",
					"SyndikatLMG_Tail_SoundSet",
					"SyndikatLMG_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			reloadTime=0.16666667;
			dispersion=0.00043633234;
		};
		class FullAuto_Close_Optics: M392_FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			requiredOpticType=1;
		};
  };
  class TCP_srifle_VK78_F;
  class SFT_VK78 : TCP_srifle_VK78_F
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] VK78 Commando";
    baseWeapon = "SFT_VK78";
    magazines[] = VK78_magazines;
    magazineWell[]   = {"SFT_65x67_20"};
    reloadAction = "WBK_Commando_Reload";
    class FullAuto;
    class SemiAuto;
    model="\TCP\Weapons_F_TCP\LongRangeRifles\VK78\VK78_Gray.p3d";
		picture="\TCP\Weapons_F_TCP\LongRangeRifles\VK78\data\ui\icon_srifle_VK78_Gray_F_X_ca.paa";
    hiddenSelectionsTextures[]=
		{
			"\TCP\Weapons_F_TCP\LongRangeRifles\VK78\data\camo\gray\VK78_01_CO.paa",
			"\TCP\Weapons_F_TCP\LongRangeRifles\VK78\data\camo\gray\VK78_02_CO.paa"
		};
    reloadMagazineSound[] =
    {
      "\OPTRE_Wbk_WeaponImprovements\reload\srs99_reload.ogg",
      2,
      1,
      25
    };
    modes[]=
		{
			"VK78_FullAuto",
			"FullAuto_Close_Optics",
			"VK78_Single",
			"Single_Close_Optics",
			"Single_Medium_Optics",
			"Single_Far_Optics"
		};
		class VK78_Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR_Shot_Soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.2;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.5;
			reloadTime=0.15000001;
			dispersion=0.00058177643;
		};
		class Single_Close_Optics: VK78_Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=250;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=250;
			midRangeProbab=0.80000001;
			maxRange=400;
			maxRangeProbab=0.0099999998;
			requiredOpticType=1;
		};
		class Single_Medium_Optics: Single_Close_Optics
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=450;
			minRange=250;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			requiredOpticType=1;
		};
		class Single_Far_Optics: Single_Close_Optics
		{
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.5;
			maxRange=800;
			maxRangeProbab=0.050000001;
			requiredOpticType=2;
		};
		class VK78_FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR_Shot_Soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MMG02_silencerShot_SoundSet",
					"MMG02_silencerTail_SoundSet",
					"MMG02_silencerInteriorTail_SoundSet"
				};
			};
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			reloadTime=0.15000001;
			dispersion=0.00058177643;
		};
		class FullAuto_Close_Optics: VK78_FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			requiredOpticType=1;
		};
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
    magazineWell[]   =
    {
      "SFT_127x30_46_12",
      "SFT_127x30_46_24"
    };
    class SemiAuto;
    class FullAuto;
    modes[]=
		{
			"M6J_FullAuto",
			"FullAuto_Close_Optics",
			"M6J_Single",
			"Single_Close_Optics",
			"Single_Medium_Optics"
		};
		class M6J_Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"OPTRE_M6_Pistol_Shot_SoundSet",
					"4Five_Tail_SoundSet",
					"4Five_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"4Five_silencerShot_SoundSet",
					"4Five_silencerTail_SoundSet",
					"4Five_silencerInteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
			reloadTime=0.1;
			dispersion=0.00058177643;
		};
		class Single_Close_Optics: M6J_Single
		{
			showToPlayer=0;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
			requiredOpticType=1;
		};
		class Single_Medium_Optics: Single_Close_Optics
		{
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
			minRange=100;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
			requiredOpticType=1;
		};
		class M6J_FullAuto: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"OPTRE_M6_Pistol_Shot_SoundSet",
					"4Five_Tail_SoundSet",
					"4Five_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"4Five_silencerShot_SoundSet",
					"4Five_silencerTail_SoundSet",
					"4Five_silencerInteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			reloadTime=0.1;
			dispersion=0.00058177643;
		};
		class FullAuto_Close_Optics: M6J_FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			burst=2;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			requiredOpticType=1;
		};
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
    magazineWell[]   =
    {
      "SFT_127x30_46_12",
      "SFT_127x30_46_24"
    };
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
    magazineWell[]   = {"SFT_102mm_2"};
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
    class SemiAuto;
    modes[]=
		{
			"Single",
			"TopDown"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			maxRange=3450;
			maxRangeProbab=0.85000002;
			midRange=150;
			midRangeProbab=0.85000002;
			minRange=70;
			minRangeProbab=0.60000002;
			reloadTime=0.80000001;
			dispersion=0;
		};
		class TopDown: Single
		{
			aIRateOfFire=7;
			aiRateOfFireDistance=1500;
			displayName="Top-down Attack";
			maxRange=2000;
			maxRangeProbab=0.94999999;
			midRange=500;
			midRangeProbab=0.94999999;
			minRange=150;
			minRangeProbab=0.80000001;
			textureType="topDown";
		};
		value=20;
		weaponLockDelay=3;
		weaponLockSystem=12;
		canLock=2;
		lockAcquire=0;
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.316228,
			2.5
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.316228,
			1
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
    magazineWell[]   = {"SFT_5g_6"};
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
    magazineWell[]   = {"SFT_flare12g_1"};
    modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR06_silencerShot_SoundSet",
					"DMR06_silencerTail_SoundSet",
					"DMR06_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=1;
			dispersion=0.0029088822;
		};
  };
  class 19_UNSC_M7;
  class WeaponSlotsInfo;
  class MuzzleSlot;
  class CowsSlot;
  class PointerSlot;
  class SFT_M7: 19_UNSC_M7
  {
    author="Weber";
    baseWeapon="SFT_M7";
    scope=2;
    displayName="[SFT] M7 Caseless Submachine Gun";
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
  class UnderBarrelSlot;
  class SFT_SRS99AM: 19_UNSC_SRS99AM
  {
    author="Weber";
    baseWeapon="SFT_SRS99AM";
    scope=2;
    displayName="[SFT] SRS99 Anti-Material Sniper Rifle";
    muzzles[]=
    {
      "this"
    };
    modelOptics[]=
    {
      "\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_5",
      "\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_10",
      "\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_25"
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      mass=300;
      class MuzzleSlot: MuzzleSlot
      {
        inkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
        displayName="Muzzle Slot";
        compatibleItems[]={};
        iconPosition[]={0,0.40000001};
      };
      class CowsSlot: CowsSlot
      {
        linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
        displayName="$STR_A3_CowsSlot0";
        compatibleitems[]=
        {
          "SFT_optic_SRS99AM",
        };
        iconPosition[]={0.5,0.30000001};
      };
      class PointerSlot: PointerSlot
      {
        compatibleitems[]={};
      };
      class UnderBarrelSlot: UnderBarrelSlot
      {
        compatibleitems[]={};
      };
    };
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
    useModelOptics 				 =  0;
		useExternalOptic 			 =  0;
		memoryPointCamera			 =  "OP_eye"; 
		cameraDir 					 = "eye_gl_look";
		discreteDistance[] = {50,75,100,150,200,250,300,350,400}; //
		discreteDistanceCameraPoint[]  = {
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300",
			"OP_eye_350",
			"OP_eye_400"

		}; /// the angle of gun changes with zeroing "OP_eye"
    magazines[] = M319N_magazines;
    magazineWell[]   = {"SFT_40mmigl_1", "SFT_762x51_30"};
    class SemiAuto;
    reloadAction =  "WBK_HaloGL_Reload";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.31622776,1,5};
		reloadMagazineSound[] = {"\OPTRE_Wbk_WeaponImprovements\reload\gl_reload.ogg",2,1,25};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.56234133,1,10};
		modes[]={"Single"};
    class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
					1,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Ugl_Shot_SoundSet","Msbs65_01_Ugl_Tail_SoundSet","Msbs65_01_Ugl_InteriorTail_SoundSet"};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",
					0.70794576,
					1,
					200
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",
					0.70794576,
					1,
					200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
  };
  class OPTRE_M247A1;
  class SFT_M247A1 : OPTRE_M247A1
  {
    author="Weber";
    baseWeapon="SFT_M247A1";
    displayName="[SFT] M247A1";
    magazines[]={"SFT_200Rnd_762x51_M247A1_Box"};
    magazineWell[]={"SFT_762_51_200_A1"};
    class WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=170;
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
  };
  class OPTRE_M247A1_Stripped;
  class SFT_M247A1_Stripped : OPTRE_M247A1_Stripped
  {
    author="Weber";
    baseWeapon="SFT_M247A1_Stripped";
    displayName="[SFT] M247A1 Stripped";
    magazines[]={"SFT_200Rnd_762x51_M247A1_Box"};
    magazineWell[]={"SFT_762_51_200_A1"};
    class WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=170;
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
  };
  class OPTRE_M250;
  class SFT_M250 : OPTRE_M250
  {
    author="Weber";
    baseWeapon="SFT_M250";
    displayName="[SFT] M250 GPMG";
    magazines[]={"SFT_50Rnd_127x99_M250_Box"};
    magazineWell[]={"SFT_50Rnd_127x99"};
    class WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=170;
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
  };
  class OPTRE_M739_SAW_Foregrip_Black_F;
  class SFT_M739 : OPTRE_M739_SAW_Foregrip_Black_F
  {
    author="Weber";
    baseWeapon="SFT_M739";
    displayName="[SFT] M739 SAW";
    magazines[]={"SFT_762x51_M739_Box"};
    magazineWell[]={"SFT_762_51_192"};
    class WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=170;
			class CowsSlot: asdg_OpticRail1913 {};
			class MuzzleSlot: asdg_MuzzleSlot_762 {};
			class PointerSlot: asdg_FrontSideRail {};
			class UnderBarrelSlot: asdg_UnderSlot {};
		};
  };
};