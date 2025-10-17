class MFD
{
	#include "cfg_HMD_AH64D_001_Common.hpp"
	
	#include "cfg_HMD_AH64D_003_HAD_Common.hpp"	
	//#include "cfg_HMD_AH64D_004_HAD_Pilot.hpp"	
	#include "cfg_HMD_AH64D_006_Weapons.hpp"
	
	//#include "cfg_HMD_AH64D_002_Transport.hpp" // for helos without HAD
	//#include "cfg_HMD_AH64D_007_Weapons_LB.hpp"

	//#include "cfg_HMD_AH64D_005_HAD_Pilot_Lynx.hpp"
	#include "cfg_HMD_AH64D_008_Weapons_Lynx.hpp"
	
	//#include "cfg_HMD_AH64D_027_Radar.hpp"
	
	//#include "cfg_HMD_RAH66_901_Vanilla_Pilot.hpp"
	//#include "cfg_HMD_RAH66_902_Vanilla_CPG.hpp"
	
	//-------------------------------------------------////////////////////////////////////
	class Kimi_HMD_CPG
	{
		#include "cfg_HMD_AH64D_011_Parameters.hpp"
		#include "cfg_HMD_AH64D_012_Bones.hpp"
		class Draw
		{
			#include "cfg_HMD_AH64D_013_Color.hpp"
			condition="on*user0-user2";
			class Clock_Text
			{
				type = "text";
				source = "time";
				text = "%X";
				sourceScale = 1;
				align = "right";
				scale = 1;
				pos[]=	{{0.110,0.175},1};
				right[]={{0.150,0.175},1};
				down[]=	{{0.110,0.225},1};
			};
			class WYPT_Group
			{
				type="group";
				condition="WPvalid";
				class WYPT_Block
				{
					type="group";
					condition="speed - (6*1.852/3.6)+1.94384"; // 6kts = 3,1m/s
					class WYPT_Fly_2_Cue
					{
						type="line";
						width=3;
						points[]=
						{
							{"WYPT_2_VIEW",1,{"0 * 0.075","-0.02 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0.0099999998 * 0.075","-0.01732 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0.01732 * 0.075","-0.0099999998 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0.02 * 0.075","0 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0.01732 * 0.075","0.0099999998 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0.0099999998 * 0.075","0.01732 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0 * 0.075","0.02 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"-0.0099999998 * 0.075","0.01732 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"-0.01732 * 0.075","0.0099999998 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"-0.02 * 0.075","0 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"-0.01732 * 0.075","-0.0099999998 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"-0.0099999998 * 0.075","-0.01732 * 0.075"},1},
							{"WYPT_2_VIEW",1,{"0 * 0.075","-0.02 * 0.075"},1},
							{},
							{"WYPT_2_VIEW",1,{-0.030, 0.000},1},
							{"WYPT_2_VIEW",1,{0.000, -0.030},1},
							{"WYPT_2_VIEW",1,{0.030, 0.000},1},
							{"WYPT_2_VIEW",1,{0.018, 0.015},1},
							{"WYPT_2_VIEW",1,{-0.018, 0.015},1},
							{"WYPT_2_VIEW",1,{-0.030, 0.000},1}
						};
					};
				};
			};
			class TADS_LOS
			{
				type="line";
				width=2;
				points[]=
				{
					{{"0.35-0.05","0.45-0.05"},1},
					{{"0.35-0.05","0.40-0.05"},1},
					{{"0.40-0.05","0.40-0.05"},1},
					{},
					{{"0.60+0.05","0.40-0.05"},1},
					{{"0.65+0.05","0.40-0.05"},1},
					{{"0.65+0.05","0.45-0.05"},1},
					{},
					{{"0.65+0.05","0.55+0.05"},1},
					{{"0.65+0.05","0.60+0.05"},1},
					{{"0.60+0.05","0.60+0.05"},1},
					{},
					{{"0.40-0.05","0.60+0.05"},1},
					{{"0.35-0.05","0.60+0.05"},1},
					{{"0.35-0.05","0.55+0.05"},1}
				};
			};
			class TADS_X
			{
				type="group";
				class Aiming_TADS_X
				{
					type="line";
					width=5;
					points[]=
					{
						{{0.500,0.420},1},
						{{0.500,0.480},1},
						{},
						{{0.500,0.520},1},
						{{0.500,0.580},1},
						{},
						{{0.480,0.500},1},
						{{0.390,0.500},1},
						{},
						{{0.520,0.500},1},
						{{0.610,0.500},1}
					};
				};
				class Aiming_TADS_Dash
				{
					type="line";
					width=4;
					points[]=
					{
						{{"0.50-0.0075",0.415},1},
						{{"0.50+0.0075",0.415},1},
						{},
						{{"0.50-0.0075",0.585},1},
						{{"0.50+0.0075",0.585},1},
						{},
						{{0.385,"0.50-0.0075"},1},
						{{0.385,"0.50+0.0075"},1},
						{},
						{{0.615,"0.50-0.0075"},1},
						{{0.615,"0.50+0.0075"},1}
					};
				};
				class Aiming_TADS_Laser
				{
					condition = "laseron";
					type="group";
					class TADS_Laser_On_X
					{
						type="line";
						width=2;
						points[]=
						{
							{{0.435,0.435},1},
							{{0.475,0.475},1},
							{},
							{{0.435,0.565},1},
							{{0.475,0.525},1},
							{},
							{{0.525,0.525},1},
							{{0.565,0.565},1},
							{},
							{{0.525,0.475},1},
							{{0.565,0.435},1}
						};
					};
				};
			};
		};
	};
	class Kimi_HMD_HAD_CPG
	{
		#include "cfg_HMD_AH64D_011_Parameters.hpp"
		#include "cfg_HMD_AH64D_012_Bones.hpp"
		turret[]={0};
		class Draw
		{
			#include "cfg_HMD_AH64D_013_Color.hpp"
			condition="on*user0-user2";
			class SpeedNumber_Imperial
			{
				type="group";
				condition="user1";
				class Speed_Imperial
				{
					type="text";
					align="right";
					scale=1;
					source="speed";
					sourceScale=1.94384; // knots
					pos[]=	{{0.37,0.81},1};
					right[]={{0.41,0.81},1};
					down[]=	{{0.37,0.85},1};
				};
			};
			class SpeedNumber_Metric
			{
				type="group";
				condition="1-user1";
				class Speed_Metric
				{
					type="text";
					align="right";
					scale=1;
					source="speed";
					sourceScale=3.6; // kph
					pos[]=	{{0.37,0.81},1};
					right[]={{0.41,0.81},1};
					down[]=	{{0.37,0.85},1};
				};
			};
			class AltNumber_Imperial
			{
				type="group";
				condition="user1";
				class Alt_Imperial
				{
					type="text";
					scale=1;
					align="right";
					source="altitudeAGL";
					sourceScale=3.28084; // feet
					sourceOffset = -6;
					pos[]=	{{0.61,0.81},1};
					right[]={{0.65,0.81},1};
					down[]=	{{0.61,0.85},1};
				};
			};
			class AltNumber_Metric
			{
				type="group";
				condition="1-user1";
				class Alt_Metric
				{
					type="text";
					scale=1;
					align="right";
					source="altitudeAGL";
					sourceScale=1; // meters
					sourceOffset = -2;
					pos[]=	{{0.61,0.81},1};
					right[]={{0.65,0.81},1};
					down[]=	{{0.61,0.85},1};
				};
			};
			class Static_HAD_BOX_CPG_Add
			{
				clipTL[]={0,1};
				clipBR[]={1,0};
				type="line";
				width=2;
				points[]=
				{
					{{"0.5-0.075","0.9-0.040"},1},
					{{"0.5-0.075","0.9-0.032"},1},
					{},
					{{"0.5+0.075","0.9-0.040"},1},
					{{"0.5+0.075","0.9-0.032"},1},
					{},
					{{"0.5-0.075","0.9+0.040"},1},
					{{"0.5-0.075","0.9+0.032"},1},
					{},
					{{"0.5+0.075","0.9+0.040"},1},
					{{"0.5+0.075","0.9+0.032"},1}
				};
			};
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
					text="CGUN";
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
		};
	};
};

