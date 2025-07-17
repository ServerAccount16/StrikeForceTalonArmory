#include "config_macros.hpp"

class CfgPatches {
  class SFT_sft_faction {
    units[] = {
      ""
    };
    requiredVersion = 0.1;
  };
};

class CfgFactionClasses
{
	class SFT_BLUE_SFT_F
	{
		displayName = "[SFT] Blufor Assets";
		priority = 1;
		side = 1;
		icon = "\tcp\data_f_tcp\FactionIcons\icon_UNSC_CA.paa";
		flag = "\tcp\data_f_tcp\Flags\flag_UNSC_CO.paa";
	};
};