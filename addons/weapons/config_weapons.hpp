class asdg_OpticRail1913 // defined by CBA/ASDG
{
  class compatibleItems
  {
    SFT_optic_EVOSJ_SL = 1;
    SFT_optic_EVOSM_SL = 1;
    SFT_optic_EVOSD_SL = 1;
    SFT_optic_ERO = 1;
    SFT_optic_ERO_blue = 1;
    SFT_optic_M27RCO = 1;
    SFT_optic_M5BSLSV = 1;
    SFT_optic_M5BSLSV_Blue = 1;
    SFT_optic_SRS99AM = 1;
    SFT_optic_M43RCO = 1;
    SFT_optic_M43RCO_CRS = 1;
    SFT_optic_M43RCO_CRS_CUP = 1;
    SFT_optic_M43RCO_CUP = 1;
    SFT_optic_M81ERO = 1;
    SFT_optic_M81ERO_Blue = 1;
  };
};
class asdg_MuzzleSlot_762;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
  class TCP_optic_EVOSJ;
  class InventoryOpticsItem_Base_F;
  class ItemInfo;
  class OpticsModes;
  class EVOSJ;
  class TCP_OpticsMode_Base_3D_F;
  class Launcher_Base_F;
  class ace_csw_staticM2ShieldCarry;

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
    displayName = "[SFT] M882 WSD 'EVOS-J' SmartLink (1.4-2.8x)";
    picture = "\TCP\Weapons\Acc\Optic\EVOSJ\data\ui\icon_optic_EVOSJ_ca.paa";
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
    displayName = "[SFT] M1022 WSD 'EVOS-M' SmartLink (1.4-2.8x)";
    picture = "\TCP\Weapons\Acc\Optic\EVOSM\data\ui\icon_optic_EVOSM_ca.paa";
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
    displayName = "[SFT] M45 DMO 'EVOS-D' SmartLink (1-8x)";
    picture = "\TCP\Weapons\Acc\Optic\EVOSD\data\ui\icon_optic_EVOSD_ca.paa";
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
  class TCP_optic_M11VERO;
  class TCP_optic_M11VERO_Blue;
  class SFT_optic_ERO : TCP_optic_M11VERO
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M11V ERO SmartLink Red (1-3x)";
    picture = "\TCP\Weapons\Acc\Optic\M11VERO\data\ui\icon_optic_M11VERO_Red_ca.paa";
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
  class SFT_optic_ERO_Blue : TCP_optic_M11VERO_Blue
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M11V ERO SmartLink Blue (1-3x)";
    picture = "\TCP\Weapons\Acc\Optic\M11VERO\data\ui\icon_optic_M11VERO_Red_ca.paa";
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
  class TCP_optic_M27RCO;
  class TCP_OpticsMode_Base_Irons;
  class SFT_optic_M27RCO : TCP_optic_M27RCO
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M27 RCO SmartLink (1-4x)";
    weaponInfoType = "CTGCY_BR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVO : TCP_OpticsMode_Base_Irons
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.125;
					opticsZoomMax = 0.063;
					opticsZoomInit = 0.125;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] = {"\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_2","\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_4"};
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
  class TCP_optic_M5BSLSV;
  class SFT_optic_M5BSLSV : TCP_optic_M5BSLSV
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    opticsFlare = 0;
    opticsDisablePeripherialVision = 0;
    displayName = "[SFT] M7 M5B SLS/V (Red)";
    weaponInfoType = "CTGCY_Smartlink_SMG";
    class ItemInfo : ItemInfo
    {
      mass = 2;
      opticType=1;
      optics=1;
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
          opticsZoomMin=0.375;
          opticsZoomMax=1.25;
          opticsZoomInit=0.75;
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          discreteInitIndex = 0;
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
          opticsPPEffects[]=
          {
            ""
          };
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          discreteInitIndex = 0;
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
  class TCP_optic_M5BSLSV_Blue;
  class SFT_optic_M5BSLSV_Blue : TCP_optic_M5BSLSV_Blue
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    opticsFlare = 0;
    opticsDisablePeripherialVision = 0;
    displayName = "[SFT] M7 M5B SLS/V (Blue)";
    weaponInfoType = "CTGCY_Smartlink_SMG";
    class ItemInfo : ItemInfo
    {
      mass = 2;
      opticType=1;
      optics=1;
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
          opticsZoomMin=0.375;
          opticsZoomMax=1.25;
          opticsZoomInit=0.75;
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          discreteInitIndex = 0;
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
          opticsPPEffects[]=
          {
            ""
          };
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
          discreteInitIndex = 0;
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
  class TCP_optic_Oracle_N;
  class SFT_optic_SRS99AM : TCP_optic_Oracle_N
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M128 ASRO 'Oracle-N' Sniper Scope (5-25x)";
    weaponInfoType = "CTGCY_SRS_Display_Info";
    ace_scopeZeroRange=100;
    opticsFlare = 0;
    opticsDisablePeripherialVision = 0;
    discreteInitIndex = 0;
		ace_scopeHeightAboveRail=3.4579;
		ace_scopeAdjust_vertical[]={-5,35};
		ace_scopeAdjust_horizontal[]={-10,10};
		ace_scopeAdjust_verticalIncrement=0.1;
		ace_scopeAdjust_horizontalIncrement=0.1;
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class R2T
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					opticsZoomMin = 0.75;
					opticsZoomMax = 0.75;
					opticsZoomInit = 0.75;
					opticsFlare = 1;
					opticsDisablePeripherialVision = 0;
					memoryPointCamera = "opticView";
				};
        class SmartLink : EVOSJ
        {
          opticsID=2;
          useModelOptics=1;
          opticsPPEffects[]=
          {
            "OpticsCHAbera1",
            "OpticsBlur1"
          };
          opticsZoomMin=0.0099999998;
          opticsZoomMax=0.25;
          opticsZoomInit=0.25;
          opticsFlare = 0;
          opticsDisablePeripherialVision = 0;
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
  class TCP_optic_M43RCO;
  class SFT_optic_M43RCO : TCP_optic_M43RCO
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M43 RCO SmartLink (1-4x)";
    weaponInfoType = "CTGCY_BR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVO : TCP_OpticsMode_Base_Irons
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.125;
					opticsZoomMax = 0.063;
					opticsZoomInit = 0.125;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] = {"\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_2","\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_4"};
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
  class TCP_optic_M43RCO_CRS;
  class SFT_optic_M43RCO_CRS : TCP_optic_M43RCO_CRS
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M43 RCO (CRS) SmartLink (1-4x)";
    weaponInfoType = "CTGCY_BR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVO : TCP_OpticsMode_Base_Irons
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.125;
					opticsZoomMax = 0.063;
					opticsZoomInit = 0.125;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] = {"\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_2","\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_4"};
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
  class TCP_optic_M43RCO_CRS_CUP;
  class SFT_optic_M43RCO_CRS_CUP : TCP_optic_M43RCO_CRS_CUP
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M43 RCO (CRS, Eyecup) SmartLink (1-4x)";
    weaponInfoType = "CTGCY_BR_Display_Info";
    class ItemInfo : ItemInfo
    {
      class OpticsModes : OpticsModes
      {
        class EVO : TCP_OpticsMode_Base_Irons
        {
        };
        class SmartLink : EVOSJ
        {
          opticsID = 1;
          useModelOptics = 1;
          opticsZoomMin = 0.125;
					opticsZoomMax = 0.063;
					opticsZoomInit = 0.125;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] = {"\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_2","\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_4"};
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
  class TCP_optic_M43RCO_CUP;
  class SFT_optic_M43RCO_CUP : TCP_optic_M43RCO_CUP
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M43 RCO (Eyecup) SmartLink (1-4x)";
    weaponInfoType = "CTGCY_BR_Display_Info";
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
          opticsZoomMin = 0.125;
					opticsZoomMax = 0.063;
					opticsZoomInit = 0.125;
          discretefov[] = {0.25, 0.082000002};
          memoryPointCamera = "opticView";
          modelOptics[] = {"\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_2","\CTGCY_Weapons\data\scopes\UI\CTGCY_BR_Scope_4"};
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
  class TCP_optic_M81ERO;
  class SFT_optic_M81ERO : TCP_optic_M81ERO
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M81 ERO SmartLink Red (1-2x)";
    picture = "\TCP\Weapons\Acc\Optic\M81ERO\data\ui\icon_acco_M81ERO_Red_CA.paa";
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
  class TCP_optic_M81ERO_Blue;
  class SFT_optic_M81ERO_Blue : TCP_optic_M81ERO_Blue
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    displayName = "[SFT] M81 ERO SmartLink Blue (1-2x)";
    picture = "\TCP\Weapons\Acc\Optic\M81ERO\data\ui\icon_acco_M81ERO_Red_CA.paa";
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
  class TCP_arifle_MA37;
  class TCP_arifle_MA37_GL;
  class TCP_launch_M301;
  class BaseSoundModeType;
  class SFT_MA37 : TCP_arifle_MA37
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
  class SFT_MA37GL : TCP_arifle_MA37_GL
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
    class Flashlight{};
		muzzles[] = {"this","M301"};
    class M301 : TCP_launch_M301
    {
      useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "op_look";
			discreteDistance[] = {50,75,100,150,200,300,400};
			discreteDistanceCameraPoint[] = {"op_eye_50","op_eye_75","op_eye_100","op_eye_150","op_eye_200","op_eye_300","op_eye_400"};
			discreteDistanceInitIndex = 3;
			reloadAction = "GestureReloadMSBS_UGL";
			reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",1,1,10};
			magazineReloadSwitchPhase = 1;
      magazines[] = UGL_magazines;
      magazineWell[]   = {"SFT_40mmugl_1"};
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
  class TCP_LMG_M731;
  class SFT_M731 : TCP_LMG_M731
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
  class TCP_srifle_M392;
  class SFT_M392 : TCP_srifle_M392
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
  class TCP_srifle_VK78_Gray;
  class SFT_VK78 : TCP_srifle_VK78_Gray
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
  class TCP_arifle_M6J;
  class SFT_M6J : TCP_arifle_M6J
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
  class TCP_hgun_Pistol_M6C2;
  class SFT_M6C :TCP_hgun_Pistol_M6C2
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
  class TCP_launch_M41;
  class SFT_M41 : TCP_launch_M41
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
  class TCP_hgun_Pistol_FlareGun_Black;
  class SFT_FlareGun : TCP_hgun_Pistol_FlareGun_Black
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
  class TCP_SMG_M7;
  class WeaponSlotsInfo;
  class MuzzleSlot;
  class CowsSlot;
  class PointerSlot;
  class SFT_M7: TCP_SMG_M7
  {
    author="Weber";
    baseWeapon="SFT_M7";
    scope=2;
    displayName="[SFT] M7 Caseless Submachine Gun";
    magazines[] = {M7_magazines};
		magazineWell[] = {"SFT_5x23_60","SFT_5x23_48"};
    reloadMagazineSound[] = {"wep_f_improve\animsounds\M7_Reload.ogg",5,1,30};
    class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"M7_Shot_Soundset"};
			};
      class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			reloadTime = 0.06666667;
			dispersion = 0.0008726647;
		};
    class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"M7_Shot_Soundset"};
			};
      class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"SMGVermin_silencerShot_SoundSet","SMGVermin_silencerTail_SoundSet","SMGVermin_silencerInteriorTail_SoundSet"};
			};
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			reloadTime = 0.06666667;
			dispersion = 0.0008726647;
		};
  };
  class TCP_srifle_SRS99;
  class UnderBarrelSlot;
  class SFT_SRS99AM: TCP_srifle_SRS99
  {
    author="Weber";
    baseWeapon="SFT_SRS99AM";
    scope=2;
    displayName="[SFT] SRS99 Anti-Material Sniper Rifle";
    modelOptics[]=
    {
      "\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_5",
      "\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_10",
      "\CTGCY_Weapons\data\scopes\UI\CTGCY_SRS_Scope_25"
    };
    reloadAction = "WBK_SRS99C_Reload";
    // reloadAction = "WBK_GestureReloadDMR04"; We'll see if we need this one
    reloadMagazineSound[] = {"wep_f_improve\animsounds\SRS_Reload.ogg",5,1,30};
    magazines[] = SRS99AM_magazines;
    magazineWell[]   = {"SFT_127x99_4"};
    modes[] = {"Single","Single_Close_Optics","Single_Medium_Optics","Single_Far_Optics"};
    class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\Foundries\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_1.ogg","db10",1,2000};
        begin2[] = {"\Foundries\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_3.ogg","db10.5",1,2000};
        begin3[] = {"\Foundries\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_4.ogg","db10",1,2000};
        begin4[] = {"\Foundries\UNSC_F_Weapons\weapons\SRS99_data\Sounds\UNSC_SRS99_2.ogg","db10.5",1,200};
        soundBegin[] = {"begin1",0.14,"begin2",0.14,"begin3",0.14,"begin4",0.14};
        class SoundTails
        {
          class TailForest
          {
            sound[]=
            {
              "A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
              1,
              1,
              2000
            };
            frequency=1;
            volume="(1-interior/1.4)*forest";
          };
          class TailHouses
          {
            sound[]=
            {
              "A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
              5,
              1,
              2000
            };
            frequency=1;
            volume="(1-interior/1.4)*houses";
          };
          class TailInterior
          {
            sound[]=
            {
              "A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
              7,
              1,
              2000
            };
            frequency=1;
            volume="interior";
          };
          class TailMeadows
          {
            sound[]=
            {
              "A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
              6,
              1,
              2000
            };
            frequency=1;
            volume="(1-interior/1.4)*(meadows/2 max sea/2)";
          };
          class TailTrees
          {
            sound[]=
            {
              "A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
              6,
              1,
              2000
            };
            frequency=1;
            volume="(1-interior/1.4)*trees";
          };
        };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Msbs65_01_Shot_Silencer_SoundSet","Msbs65_01_Tail_Int_Silencer_SoundSet"};
        begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
        begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
        begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
        soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
        class SoundTails
        {
          class TailTrees
          {
            sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
            frequency = 1;
            volume = "(1-interior/1.4)*trees";
          };
          class TailForest
          {
            sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
            frequency = 1;
            volume = "(1-interior/1.4)*forest";
          };
          class TailInterior
          {
            sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
            frequency = 1;
            volume = "interior";
          };
          class TailMeadows
          {
            sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
            frequency = 1;
            volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
          };
          class TailHouses
          {
            sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
            frequency = 1;
            volume = "(1-interior/1.4)*houses";
          };
        };
      aiRateOfFire = 3;
      aiRateOfFireDistance = 500;
      minRange = 2;
      minRangeProbab = 0.5;
      midRange = 150;
      midRangeProbab = 0.7;
      maxRange = 450;
      maxRangeProbab = 0.3;
      reloadTime = 0.76666665;
      dispersion = 0.00023271058;
      };
    };
    class Single_Close_Optics: Single
    {
      showToPlayer = 0;
      aiRateOfFire = 3;
      aiRateOfFireDistance = 500;
      minRange = 150;
      minRangeProbab = 0.2;
      midRange = 500;
      midRangeProbab = 0.7;
      maxRange = 1500;
      maxRangeProbab = 0.4;
      requiredOpticType = 2;
    };
    class Single_Medium_Optics: Single_Close_Optics
    {
      aiRateOfFire = 5;
      aiRateOfFireDistance = 1000;
      minRange = 250;
      minRangeProbab = 0.2;
      midRange = 750;
      midRangeProbab = 0.7;
      maxRange = 1000;
      maxRangeProbab = 0.4;
      requiredOpticType = 1;
    };
    class Single_Far_Optics: Single_Medium_Optics
    {
      aiRateOfFire = 7;
      aiRateOfFireDistance = 1000;
      minRange = 500;
      minRangeProbab = 0.2;
      midRange = 1200;
      midRangeProbab = 0.7;
      maxRange = 2100;
      maxRangeProbab = 0.3;
      requiredOpticType = 2;
    };
  };
  class TCP_launch_M319;
  class SFT_M319 : TCP_launch_M319
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M319 Individual Grenade Launcher";
    baseWeapon = "SFT_M319";
    useModelOptics 				 =  0;
		useExternalOptic 			 =  0;
    magazines[] = M319N_magazines;
    magazineWell[]   = {"SFT_40mmigl_1"};
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
  class TCP_sgun_M45;
  class EventHandlers;
  class InternalMagazine;
  class SFT_M45 : TCP_sgun_M45
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M45 Combat Shotgun";
    baseWeapon = "SFT_M45";
    class InternalMagazine: InternalMagazine
		{
			displayName="$STR_TCP_Weapons_Shotguns_M45_displayName";
			cursor="TCP_sgun_M45";
			magazines[]=
			{
				"SFT_1Rnd_12Gauge_Pellets"
			};
			magazineWell[]=
			{
				"SFT_12Gauge_1"
			};
			magazineReloadSwitchPhase=0.4;
			reloadAction="TCP_GestureM45Reload";
			submunitionConeCoef="0f";
			class EventHandlers: EventHandlers
			{
				reloaded = "_this call TCP_fnc_internalMagReloaded;";
				magazineUnloaded = "_this call TCP_fnc_internalMagUnloaded;";
				weaponChanged = "_this call TCP_fnc_internalMagWeaponChanged; _this spawn TCP_fnc_hideMuzzleWeaponChanged;";
			};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				showToPlayer=1;
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
				class StandardSound: BaseSoundModeType
				{
					soundsetshot[]=
          {
            "OPTRE_Shotgun_SoundSet",
            "M320_Tail_SoundSet",
            "M320_InteriorTail_SoundSet"
          };
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"HunterShotgun_01_Shot_SoundSet",
						"HunterShotgun_01_Tail_SoundSet"
					};
				};
				minRange=1;
				minRangeProbab=0.89999998;
				midRange=30;
				midRangeProbab=0.69999999;
				maxRange=80;
				maxRangeProbab=0.2;
				reloadTime=1;
				dispersion=0.0014544411;
			};
		};
    magazines[] = {"SFT_6Rnd_Internal_Mag"};
    magazineWell[] = {};
    modes[]=
		{
			"Single",
			"Single_Close_Optics"
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
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
        {
          "OPTRE_Shotgun_SoundSet",
          "M320_Tail_SoundSet",
          "M320_InteriorTail_SoundSet"
        };
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"HunterShotgun_01_Shot_SoundSet",
					"HunterShotgun_01_Tail_SoundSet"
				};
			};
			reloadTime=1;
			dispersion=0.0014544411;
		};
		class Single_Close_Optics: Single
		{
			showToPlayer=0;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.1;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=250;
			maxRangeProbab=0.15000001;
			requiredOpticType=1;
		};
  };
  class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		muzzles[] += {"SFT_M9R_FragMuzzle"};
		class SFT_M9R_FragMuzzle: ThrowMuzzle
		{
			magazines[] = {"SFT_M9R_Frag"};
		};
	};
  class TCP_arifle_BR55;
  class SFT_BR55: TCP_arifle_BR55
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] BR55";
    baseWeapon = "SFT_BR55";
    magazines[] = {BR55_magazines};
    magazineWell[] = {"SFT_95x40_36"};
    reloadAction = "GestureReloadBR55";
    reloadMagazineSound[] = {"wep_f_improve\animsounds\BR55_Reload.ogg",5,1,30};
    modes[] = {"Burst","Burst_Close_Optics","Single","Single_Close_Optics","Single_Medium_Optics"};
    class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"BR_Shot_Soundset"};
			};
      class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			reloadTime = 0.06666667;
			dispersion = 0.0008726647;
		};
    class Single_Close_Optics: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			requiredOpticType = 1;
		};
		class Single_Medium_Optics: Single_Close_Optics
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			requiredOpticType = 1;
		};
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"BR_Shot_Soundset"};
			};
      class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"CAR_95_silencerShot_SoundSet","CAR_95_silencerTail_SoundSet","CAR_95_silencerInteriorTail_SoundSet"};
			};
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			reloadTime = 0.06666667;
			dispersion = 0.0008726647;
		};
    class Burst_Close_Optics: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			requiredOpticType = 1;
		};
  };
  class TCP_arifle_MA5K;
  class SFT_MA5K: TCP_arifle_MA5K
  {
    author = "Weber";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] MA5K ICWS";
    baseWeapon = "SFT_SFT_MA5KBR55";
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
  //--------------------------------------------------------------------
  //  ACE CSW Weapons
  //--------------------------------------------------------------------
  

  // 247H
  class OPTRE_CSW_M247H_Carry_Tripod: Launcher_Base_F
  {
    class ace_csw;
    class WeaponSlotsInfo;
  };
  class OPTRE_CSW_M247H_Weapon: ace_csw_staticM2ShieldCarry
  {
    class ace_csw;
    class WeaponSlotsInfo;
  };
  class OPTRE_CSW_M247H_Shield_Weapon: OPTRE_CSW_M247H_Weapon
  {
    class ace_csw;
    class WeaponSlotsInfo;
  };

  class SFT_M247H_Carry_Tripod: OPTRE_CSW_M247H_Carry_Tripod
  {
    author = "Waylen";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M247H Tripod";    
    class ace_csw: ace_csw
    {
      deploy = "SFT_CSW_M247H_Tripod";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      mass = 218;
    };
  };

  class SFT_M247H_Weapon: OPTRE_CSW_M247H_Weapon
  {
    author = "Waylen";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M247H Gun";    
    class ace_csw: ace_csw
    {
      class assembleTo
      {
        SFT_CSW_M247H_Tripod = "SFT_Static_M247H_Tripod";
      };
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      mass = 300;
    };
  };

  class SFT_M247H_Shield_Weapon: OPTRE_CSW_M247H_Weapon
  {
    author = "Waylen";
    dlc = "SFT";
    scope = 2;
    scopeArsenal = 2;
    displayName = "[SFT] M247H Gun w/ Shield";    
    class ace_csw: ace_csw
    {
      class assembleTo
      {
        SFT_CSW_M247H_Tripod = "SFT_Static_M247H_Shield_Tripod";
      };
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      mass = 300;
    };
  };

};