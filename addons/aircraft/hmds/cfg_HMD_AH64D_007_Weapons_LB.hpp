class Kimi_HMD_Weapons_LB
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={-1};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		//condition="on*user0";
		condition="on*user0";
		class Gun_Cross
		{
			condition = "mgun";
			type="group";
			class GUN_X
			{
				type = "line";
				width = 7.0;
				points[] = 
				{
					{"CCIP_2_VIEW",{ 0,-0.030 },1 },
					{"CCIP_2_VIEW",{ 0,-0.012 },1 },
					{},
					{"CCIP_2_VIEW",{ 0,0.012 },1 },
					{"CCIP_2_VIEW",{ 0,0.030 },1 },
					{},
					{"CCIP_2_VIEW",{ -0.030,0 },1 },
					{"CCIP_2_VIEW",{ -0.012,0 },1 },
					{},
					{"CCIP_2_VIEW",{ 0.012,0 },1 },
					{"CCIP_2_VIEW",{ 0.030,0 },1 }
				};
			};
			class Distance
			{
				type = "text";
				source = "ImpactDistance";
				//sourceScale=0.00054; // nm
				sourceScale=0.001; // km
				sourcePrecision = 1;
				max = 15;
				align = "center";
				scale = 1;
				pos[] = 	{"CCIP_2_VIEW",{-0.002,0.035},1};
				right[] = 	{"CCIP_2_VIEW",{0.028,0.035},1};
				down[] = 	{"CCIP_2_VIEW",{-0.002,0.065},1};
			};
		};
		class Rocket_I_LLW
		{
			condition="rocket";
			type="group";
			class RocketSight
			{
				type="line";
				width=5.5;
				points[]=
				{
					{ "CCIP_2_VIEW",1,{ 0.022,-0.030 },1 },
					{ "CCIP_2_VIEW",1,{ -0.022,-0.030 },1 },
					{},
					{ "CCIP_2_VIEW",1,{ 0,-0.030 },1 },
					/*{ "CCIP_2_VIEW",1,{ 0,-0.005 },1 },
					{},
					{ "CCIP_2_VIEW",1,{ 0,0.001 },1 },
					{ "CCIP_2_VIEW",1,{ 0,-0.001 },1 },
					{},
					{ "CCIP_2_VIEW",1,{ 0.001,0 },1 },
					{ "CCIP_2_VIEW",1,{ -0.001,0 },1 },
					{},
					{ "CCIP_2_VIEW",1,{ 0,0.005 },1 },*/
					{ "CCIP_2_VIEW",1,{ 0,0.030 },1 },
					{},
					{ "CCIP_2_VIEW",1,{ 0.022,0.030 },1 },
					{ "CCIP_2_VIEW",1,{ -0.022,0.030 },1 }
				};
			};
			class Distance
			{
				type = "text";
				source = "ImpactDistance";
				//sourceScale=0.00054; // nm
				sourceScale=0.001; // km
				sourcePrecision = 1;
				max = 15;
				align = "center";
				scale = 1;
				pos[] = 	{"CCIP_2_VIEW",{-0.002,0.035},1};
				right[] = 	{"CCIP_2_VIEW",{0.028,0.035},1};
				down[] = 	{"CCIP_2_VIEW",{-0.002,0.065},1};
			};
		};
		class TargetACQ
		{
			type = "group";
			condition = "1";
			class ACQgun
			{
				type="line";
				width=2;
				points[]=
				{
					//////////////////////////////////////////////// UP
					{"Target2View",1,"Limit0109",1,{ 0,-0.060 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,-0.055 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,-0.050 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,-0.045 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,-0.040 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,-0.035 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,-0.030 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,-0.025 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,-0.020 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,-0.015 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,-0.010 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,-0.005 },1 },
					{},
					//////////////////////////////////////////////// center
					{"Target2View",1,"Limit0109",1,{ 0,0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0 },1 },
					{},
					/////////////////////////////////////////////// DOWN
					{"Target2View",1,"Limit0109",1,{ 0,0.060 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0.055 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,0.050 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0.045 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,0.040 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0.035 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,0.030 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0.025 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,0.020 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0.015 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0,0.010 },1 },
					{"Target2View",1,"Limit0109",1,{ 0,0.005 },1 },
					{},
					/////////////////////////////////////////////// LEFT
					{"Target2View",1,"Limit0109",1,{ -0.060, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ -0.055, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ -0.050, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ -0.045, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ -0.040, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ -0.035, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ -0.030, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ -0.025, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ -0.020, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ -0.015, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ -0.010, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ -0.005, 0 },1 },
					{},
					/////////////////////////////////////////////// RIGHT
					{"Target2View",1,"Limit0109",1,{ 0.060, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0.055, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0.050, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0.045, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0.040, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0.035, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0.030, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0.025, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0.020, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0.015, 0 },1 },
					{},
					{"Target2View",1,"Limit0109",1,{ 0.010, 0 },1 },
					{"Target2View",1,"Limit0109",1,{ 0.005, 0 },1 }
				};
			};
		};
		class Weapon_Name_LB
		{
			type="text";
			source="weapon";
			sourceScale=1;
			align="right";
			scale=1;
			pos[]=	{{"0.03+0.7",0.86},1};
			right[]={{"0.07+0.7",0.86},1};
			down[]=	{{"0.03+0.7",0.90},1};
		};
		class Ammo_Count_LB
		{
			type="group";
			condition="(mgun+rocket+ATmissile+AAmissile)";
			class Ammo_count_GUN
			{
				type="text";
				source="ammo";
				sourceScale=1;
				align="right";
				scale=1;
				pos[]=	{{"0.03+0.7",0.89},1};
				right[]={{"0.07+0.7",0.89},1};
				down[]=	{{"0.03+0.7",0.93},1};
			};
		};
		class Range_Number_LB
		{
			type="group";
			condition="targetDist";
			class Range_Number_LB
			{
				type="text";
				source="targetDist";
				sourceScale=0.001;
				sourcePrecision=1;
				align="right";
				scale=1;
				pos[]=	{{0.51,0.94},1};
				right[]={{0.55,0.94},1};
				down[]=	{{0.51,0.98},1};
			};
		};
		class Range_Text_LB
		{
			type="group";
			condition="targetDist";
			class Range_Text_LB
			{
				type="text";
				source="static";
				text="RNG";
				align="left";
				scale=1;
				pos[]=	{{0.49,0.94},1};
				right[]={{0.53,0.94},1};
				down[]=	{{0.49,0.98},1};
			};
		};
	};
};