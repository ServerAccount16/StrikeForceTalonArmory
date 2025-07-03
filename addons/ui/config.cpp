#include "config_macros.hpp"

class CfgPatches
{
    class HReachMenu
    {
        units[]            = {};
        weapons[]          = {};
        requiredVersion    = 0.1;
        requiredAddons[]   = {"A3_Data_F_Enoch_Loadorder", "1st_MEU_patch_main_loadingScreens", "OPTRE_Core"};
        author             = "Weber";
    };
};

/* -------------------------------------------------------------------------- */
/*                       BASE CLASS FORWARD DECLARATIONS                      */
/* -------------------------------------------------------------------------- */
class Attributes;
class RscStandardDisplay;
class RscProgress;
class RscStructuredText;
class RscPicture;
class RscButton;
class RscShortcutButton;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscText;
class RscVignette;
class RscDisplayGetReady;
class RscActiveText;
class RscListBox;
class RscListNBox;
class RscCombo;
class RscXListBox;
class RscHTML;
class RscPictureKeepAspect;
class RscActivePicture;
class RscMapControl;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscFrame;
class RscTitle;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class RscControlsGroup;
class RscTextCheckbox;
class RscDisplayInventory_DLCTemplate;
class RscEdit;
class RscCheckBox;
class RscIGProgress;
class RscHitZones;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsValue;
class RscOpticsText;
class Scrollbar;
class RscIGUIShortcutButton;
class RscActivePictureKeepAspect;
class RscTree;
class RscXSliderH;
class RscObject;
class ctrlMenu;
class ctrlStaticPicture;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscMainMenuSpotlight;

/* -------------------------------------------------------------------------- */
/*                      HALO‑REACH‑STYLE MAIN MENU LAYOUT                      */
/* -------------------------------------------------------------------------- */

class RscTitles
{
	class SplashNoise
	{
		delete BackgroundNoise;
	};
};

class controls;
class controlsBackground;
class RscDisplayMain: RscStandardDisplay
{
    /* --- 1st‑MEU DISABLES THE MENU; SWITCH IT BACK ON -------------------- */
    enableDisplay = 1;
    /* --- PRIMARY CONTROL LAYER ------------------------------------------ */
    class controls: controls
    {
        /* Hide BIS spotlight widgets so our cinematic scene remains clean. */
        class BackgroundSpotlight:      RscPicture                 { show = 0; onLoad = ""; };
        class BackgroundSpotlightLeft:  BackgroundSpotlight        { };
        class BackgroundSpotlightRight: BackgroundSpotlight        { };

        class Spotlight1:  RscMainMenuSpotlight { idc = 1021; show = 0; onLoad = ""; };
        class Spotlight2:  RscText              { idc = 1020; show = 0; onLoad = ""; };
        class Spotlight3:  RscMainMenuSpotlight { idc = 1022; show = 0; onLoad = ""; };
        class SpotlightPrev: RscActivePictureKeepAspect { idc = 1060; show = 0; onLoad = ""; };
        class SpotlightNext: SpotlightPrev { };

        /* Custom logo (optional) */
        class logo: RscActivePicture
        {
            text         = "\x\strikeforcetalon_armory\addons\ui\images\logo.paa";
            tooltip      = "Tutorial";
            url          = "";
            onButtonClick= "";
            onLoad       = "";
        };

        /* Disable extra DLC / News panels */
        class logoApex:    logo                        { show = 0; onLoad = ""; };
        class infomods:    RscControlsGroupNoHScrollbars{ show = 0; };
        class infoDLCsOwned: infomods                  { };
        class infoDLCs:      infoDLCsOwned             { };
        class infoNews:      infomods                  { };
        class infoVersion:   infoNews                  { };
    };

    /* --- Strip out the static background image injected by 1st‑MEU ------- */
    class controlsBackground: controlsBackground
    {
        delete LoadingPic;      // Ensures the video scene is visible.
    };
};