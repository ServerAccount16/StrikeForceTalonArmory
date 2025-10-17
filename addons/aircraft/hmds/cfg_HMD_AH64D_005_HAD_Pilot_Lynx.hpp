class Kimi_HMD_HAD_Pilot_Lynx
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={-1};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
		class WeaponName
		{
			type="group";
			condition="1-mgun";
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
		class WeaponName_Gun
		{
			type="group";
			condition="mgun";
			class weaponG
			{
				type="text";
				align="right";
				source="static";
				text="GUN";
				scale=1;
				pos[]=	{{0.61,0.86},1};
				right[]={{0.65,0.86},1};
				down[]=	{{0.61,0.90},1};
			};
		};
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
		class Laser_Toggle_On
		{
			type="group";
			condition="laseron";
			class Laser_On
			{
				type="text";
				text="LRFD ON"; //or LRFD Laser Range Finder/Designator
				source="static";
				align="right";
				scale=1;
				pos[]=	{{0.61,0.83},1};
				right[]={{0.65,0.83},1};
				down[]=	{{0.61,0.87},1};
			};
		};
	};
};
class Kimi_HMD_HAD_Pilot_Lynx_2
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	class Bones {};
	turret[]={0};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
		class Laser_Toggle_On
		{
			type="group";
			condition="laseron";
			class Laser_On
			{
				type="text";
				text="LRFD ON"; //or LRFD Laser Range Finder/Designator
				source="static";
				align="right";
				scale=1;
				pos[]=	{{0.61,0.83},1};
				right[]={{0.65,0.83},1};
				down[]=	{{0.61,0.87},1};
			};
		};
	};
};