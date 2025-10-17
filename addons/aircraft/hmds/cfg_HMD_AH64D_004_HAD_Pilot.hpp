class Kimi_HMD_HAD_Pilot
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
		class WeaponName
		{
			type="group";
			//condition="1-mgun";
			class weaponN
			{
				type="text";
				source="weapon";
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=	{{0.61,0.86},1};
				right[]={{0.65,0.86},1};
				down[]=	{{0.61,0.90},1};
			};
		};
		/*class WeaponName_Gun
		{
			type="group";
			condition="mgun";
			class weaponG
			{
				type="text";
				align="right";
				source="static";
				text="CGUN";
				scale=1;
				pos[]=	{{0.61,0.86},1};
				right[]={{0.65,0.86},1};
				down[]=	{{0.61,0.90},1};
			};
		};*/
		class AmmoCount
		{
			type="group";
			condition="rocket+bomb+missile+mgun";
			class AmmoC
			{
				type="text";
				source="ammo";
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=	{{0.61,0.89},1};
				right[]={{0.65,0.89},1};
				down[]=	{{0.61,0.93},1};
			};
		};
	};
};