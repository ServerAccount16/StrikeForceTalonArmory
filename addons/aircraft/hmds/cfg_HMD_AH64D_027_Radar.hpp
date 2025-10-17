class Kimi_HMD_Radar
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	//#include "cfg_HMD_AH64D_012_Bones.hpp"
	class Bones {};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0-user2";
		class Radar_Contacts
		{
			condition = "activeSensorsOn";
			class Radar_Contact_Boxes
			{
				width = 2;
				type = "radartoview";
				pos0[] = 	{0.5,0.5};
				pos10[] = 	{"0.5+0.2165","0.5+0.2165"};
				points[] = 
				{
					{{-0.005,-0.005},1},
					{{ 0.005,-0.005},1},
					{{ 0.005, 0.005},1},
					{{-0.005, 0.005},1},
					{{-0.005,-0.005},1}
				};
			};
		};
	};
};