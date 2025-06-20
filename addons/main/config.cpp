#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        authors[] = {"Weber"};
        author = "Weber";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@StrikeForceTalon_Armory";
        name = "Strike Force Talon Armory";
        
        author = "Weber";

        picture         = "title_co.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "Temp"; // Website URL, that can accessed from the expansions menu 
        actionName      = "Discord";              // label of button/tooltip in extension menu
        description     = "Temp"; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] = {1, 0.0, 0.86, 1};
    };
};
