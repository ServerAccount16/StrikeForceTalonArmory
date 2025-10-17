class MFD
{
	#include "cfg_HMD_AH64D_001_Common.hpp"	
	#include "cfg_HMD_AH64D_009_Decluttered.hpp"
	
	//#include "cfg_HMD_AH64D_003_HAD_Common.hpp"	
	//#include "cfg_HMD_AH64D_004_HAD_Pilot.hpp"	
	//#include "cfg_HMD_AH64D_006_Weapons.hpp"
	
	#include "cfg_HMD_AH64D_002_Transport.hpp" // for helos without HAD
	//#include "cfg_HMD_AH64D_007_Weapons_LB.hpp"

	//#include "cfg_HMD_AH64D_005_HAD_Pilot_Lynx.hpp"
	//#include "cfg_HMD_AH64D_008_Weapons_Lynx.hpp"
	
	//#include "cfg_HMD_AH64D_027_Radar.hpp"
	
	//#include "cfg_HMD_RAH66_901_Vanilla_Pilot.hpp"
	
	
	//-------------------------------------------------////////////////////////////////////
	class Kimi_HMD_Pilot // select waterline or X, gear down/up, static bank!
	{
		#include "cfg_HMD_AH64D_011_Parameters.hpp"
		#include "cfg_HMD_AH64D_012_Bones.hpp"
		turret[]={-1};
		class Draw
		{
			condition="on*user0-user2";
			#include "cfg_HMD_AH64D_013_Color.hpp"
			
			//#include "cfg_HMD_AH64D_025_Aiming_X.hpp"
			#include "cfg_HMD_AH64D_026_Waterline.hpp"
			
			#include "cfg_HMD_AH64D_029_Static_Bank.hpp"
			#include "cfg_HMD_AH64D_030_Landing_Gear.hpp"
			
			//#include "cfg_HMD_AH64D_031_Slip_Ball_HAD.hpp"
			
			//--------------------------------------------------------------------------------
			
			class Torque_Group // with RTD
			{
				condition = "simulRTD";
				class Torque_number // each a/c has a different torque output
				{
					type="text";
					align="left";
					scale=1;
					source="rtdRotorTorque";
					//sourceScale=227;
					#include "cfg_HMD_AH64D_022_Torque.hpp"
					pos[]=	{{0.065,0.175},1};
					right[]={{0.115,0.175},1};
					down[]=	{{0.065,0.225},1};
				};
				class Torquetext
				{
					type="text";
					source="static";
					text="%";
					align="right";
					scale=1;
					pos[]=	{{0.07,0.175},1};
					right[]={{0.12,0.175},1};
					down[]=	{{0.07,0.225},1};
				};
				class Torque_box // each a/c has a different torque output
				{
					type="group";
					condition="rtdRotorTorque+(1-112.5/120)";
					class Torque_box_D
					{
						type="line";
						width=3;
						points[]=
						{
							{{ "0.010 + 0.000", "0.50 - 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.092", "0.50 - 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.092", "0.50 + 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.000", "0.50 + 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.000", "0.50 - 0.025 - 0.300"	},1 }
						};
					};
				};
			};
			/*class Collective_Group // without RTD??
			{
				condition = "1-simulRTD";
				class Torque_number // each a/c has a different torque output
				{
					type="text";
					align="left";
					scale=1;
					//source="rtdCollective";
					source="throttle";
					sourceScale=100;
					//#include "cfg_HMD_AH64D_6_Torque.hpp"
					pos[]=	{{0.065,0.175},1};
					right[]={{0.115,0.175},1};
					down[]=	{{0.065,0.225},1};
				};
				class Torquetext
				{
					type="text";
					source="static";
					text="%";
					align="right";
					scale=1;
					pos[]=	{{0.07,0.175},1};
					right[]={{0.12,0.175},1};
					down[]=	{{0.07,0.225},1};
				};
				class Torque_box // each a/c has a different torque output
				{
					type="group";
					condition="(rtdCollective*100-95)";
					class Torque_box_D
					{
						type="line";
						width=3;
						points[]=
						{
							{{ "0.010 + 0.000", "0.50 - 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.092", "0.50 - 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.092", "0.50 + 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.000", "0.50 + 0.025 - 0.300"	},1 },
							{{ "0.010 + 0.000", "0.50 - 0.025 - 0.300"	},1 }
						};
					};
				};
			};*/
			class Vspeed_Scale
			{
				type="line";
				width=5;
				points[]= 
				{
					{ { 0.98,0.20 },1 },	// 1G
					{ { 1.00,0.20 },1 },
					{},
					{ { 0.93,0.20 },1 },	//
					{ { 0.95,0.20 },1 },
					{},
					{ { 0.98,0.35 },1 },	// 2G
					{ { 1.00,0.35 },1 },
					{},
					{ { 0.93,0.35 },1 },	//
					{ { 0.95,0.35 },1 },
					{},
					{ { 0.94,0.38 },1 },  
					{ { 0.95,0.38 },1 },
					{},
					{ { 0.94,0.41 },1 },  
					{ { 0.95,0.41 },1 },
					{},
					{ { 0.94,0.44 },1 },  
					{ { 0.95,0.44 },1 },
					{},
					{ { 0.94,0.47 },1 },  
					{ { 0.95,0.47 },1 },
					{},
					{ { 0.98,0.50 },1 },	// 3G
					{ { 1.00,0.50 },1 },
					{},
					{ { 0.93,0.50 },1 },	//
					{ { 0.95,0.50 },1 },
					{},
					{ { 0.94,0.53 },1 },  
					{ { 0.95,0.53 },1 },
					{},
					{ { 0.94,0.56 },1 },  
					{ { 0.95,0.56 },1 },
					{},
					{ { 0.94,0.59 },1 },  
					{ { 0.95,0.59 },1 },
					{},
					{ { 0.94,0.62 },1 },  
					{ { 0.95,0.62 },1 },
					{},
					{ { 0.98,0.65 },1 },	// 4G
					{ { 1.00,0.65 },1 },
					{},
					{ { 0.93,0.65 },1 },	//
					{ { 0.95,0.65 },1 },
					{},
					{ { 0.99,0.68 },1 },  
					{ { 0.98,0.68 },1 },
					{},
					{ { 0.99,0.71 },1 },  
					{ { 0.98,0.71 },1 },
					{},
					{ { 0.99,0.74 },1 },  
					{ { 0.98,0.74 },1 },
					{},
					{ { 0.99,0.77 },1 },  
					{ { 0.98,0.77 },1 },
					{},
					{ { 0.98,0.80 },1 },	// 5G
					{ { 1.00,0.80 },1 },
					{},
					{ { 0.93,0.80 },1 },	//
					{ { 0.95,0.80 },1 }
				};
			};
			class RadarAltitudeBand
			{
				clipTL[]={0,0.2};
				clipBR[]={1,0.8};
				condition="(208/3.28084) - altitudeAGL";
				class radarbanda
				{
					type="line";
					width=18;
					points[]=
					{
						{"RadarAltitudeBone",{0,0},1},
						{"RadarAltitudeBone",{0,0.60},1}
					};
				};
			};
			class VspeedBand
			{
				type="polygon";
				//width=3;
				points[]=
				{
					{
						{"VspeedBone",{-0.010, 0.000},1},
						{"VspeedBone",{-0.025,-0.015},1},
						{"VspeedBone",{-0.025, 0.015},1},
						{"VspeedBone",{-0.010, 0.000},1}
					}
				};
			};
			class Fuel_Text
			{
				type="text";
				source="static";
				text="F";
				align="right";
				scale=1;
				pos[]=	{{0.03,0.89},1};
				right[]={{0.07,0.89},1};
				down[]=	{{0.03,0.93},1};
			};
			class Fuel_Number
			{
				type="text";
				source="fuel";
				sourceScale=100;
				align="right";
				scale=1;
				pos[]=	{{0.06,0.89},1};
				right[]={{0.10,0.89},1};
				down[]=	{{0.06,0.93},1};
			};
		};
	};
	//-------------------------------------------------////////////////////////////////////
	
	class Kimi_HMD_Modes_Pilot
	{
		#include "cfg_HMD_AH64D_011_Parameters.hpp"
		#include "cfg_HMD_AH64D_012_Bones.hpp"
		class Draw
		{
			#include "cfg_HMD_AH64D_013_Color.hpp"
			condition="on*user0-user2";
			//#include "cfg_HMD_AH64D_024_PNVS.hpp"
			class WYPT_Group
			{
				type="group";
				condition="WPvalid";
				class WYPT_Block
				{
					type="group";
					condition="speed - (6*1.852/3.6)+1.94384"; // 6kts = 3,1m/s
					class WYPT_Text
					{
						type="text";
						source="static";
						text="W";
						align="left";
						scale=1;
						pos[]=	{{0.03,0.75},1};
						right[]={{0.07,0.75},1};
						down[]=	{{0.03,0.79},1};
					};
					class WYPT_Index
					{
						type="text";
						source="WPIndex";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=	{{0.04,0.75},1};
						right[]={{0.08,0.75},1};
						down[]=	{{0.04,0.79},1};
					};
					class WYPT_Distance
					{
						type="text";
						source="WPDist";
						sourceScale=0.001;
						sourceprecision=2;
						align="right";
						scale=1;
						pos[]=	{{0.12,0.75},1};
						right[]={{0.16,0.75},1};
						down[]=	{{0.12,0.79},1};
					};
					class WYPT_KM
					{
						type="text";
						source="static";
						text="KM";
						align="left";
						scale=1;
						pos[]=	{{0.22,0.75},1};
						right[]={{0.26,0.75},1};
						down[]=	{{0.22,0.79},1};
					};
					class Ground_Speed_M
					{
						type="group";
						condition="1-user1";
						class GS_M
						{
							type="text";
							source="Speed";
							sourceScale=3.6;
							align="center";
							scale=1;
							pos[]=	{{0.03,0.79},1};
							right[]={{0.07,0.79},1};
							down[]=	{{0.03,0.83},1};
						};
					};
					class Ground_Speed_I
					{
						type="group";
						condition="user1";
						class GS_I
						{
							type="text";
							source="Speed";
							sourceScale=1.94384;
							align="center";
							scale=1;
							pos[]=	{{0.03,0.79},1};
							right[]={{0.07,0.79},1};
							down[]=	{{0.03,0.83},1};
						};
					};
					#include "cfg_HMD_AH64D_023_TTG.hpp"
				};
			};
			class Hover_Mode 		// 0-6 kts
			{
				type="group";
				condition="(6*1.852/3.6) - speed"; // 6kts = 3,1m/s
				class Hover_VV_P
				{
					class Acceleration_ball_Line
					{
						type = "line";
						width = 2.0;
						points[]=
						{
							{{0.5,0.5},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0 * 0.075","-0.02 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.0099999998 * 0.075","-0.01732 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.01732 * 0.075","-0.0099999998 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.02 * 0.075","0 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.01732 * 0.075","0.0099999998 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.0099999998 * 0.075","0.01732 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0 * 0.075","0.02 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.0099999998 * 0.075","0.01732 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.01732 * 0.075","0.0099999998 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.02 * 0.075","0 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.01732 * 0.075","-0.0099999998 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.0099999998 * 0.075","-0.01732 * 0.075"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0 * 0.075","-0.02 * 0.075"},1}
						};
					};
					class Acceleration_ball
					{
						type = "line";
						width = 3.0;
						points[]=
						{
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0 * 0.50","-0.02 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.0099999998 * 0.50","-0.01732 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.01732 * 0.50","-0.0099999998 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.02 * 0.50","0 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.01732 * 0.50","0.0099999998 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0.0099999998 * 0.50","0.01732 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0 * 0.50","0.02 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.0099999998 * 0.50","0.01732 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.01732 * 0.50","0.0099999998 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.02 * 0.50","0 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.01732 * 0.50","-0.0099999998 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"-0.0099999998 * 0.50","-0.01732 * 0.50"},1},
							{"Speed_Z_Hover",1,"GforceZ_Hover",1,"GforceX_Hover",1,{"0 * 0.50","-0.02 * 0.50"},1}
						};
					};
				};
			};
			class Hover_Box
			{
				type="group";
				condition="autohover";
				class Hover_box_box
				{
					type="line";
					width=3;
					points[]=
					{
						{{ "0.02 + 0.00", "0.50 - 0.015"	},1 },
						{{ "0.02 + 0.010", "0.50 - 0.025"	},1 },
						{{ "0.02 + 0.065", "0.50 - 0.025"	},1 },
						{{ "0.02 + 0.075", "0.50 - 0.015"	},1 },
						{{ "0.02 + 0.075", "0.50 + 0.015"	},1 },
						{{ "0.02 + 0.065", "0.50 + 0.025"	},1 },
						{{ "0.02 + 0.010", "0.50 + 0.025"	},1 },
						{{ "0.02 + 0.00", "0.50 + 0.015"	},1 },
						{{ "0.02 + 0.00", "0.50 - 0.015"	},1 }
					};
				};
			};
			class Transition_Mode 	// 6-60 kts
			{
				type="group";
				condition="1-autohover";
				class Transition
				{
					type="group";
					condition="speed - (6*1.852/3.6)+1"; // 6kts = 3,1m/s
					class Transition_VV
					{
						type="group";
						condition="(60*1.852/3.6) - speed";
						class Velocity_Vector
						{
							type="line";
							width=2;
							points[]=
							{
								{{ 0.500, 0.500},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0 * 0.075","-0.02 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0.0099999998 * 0.075","-0.01732 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0.01732 * 0.075","-0.0099999998 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0.02 * 0.075","0 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0.01732 * 0.075","0.0099999998 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0.0099999998 * 0.075","0.01732 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0 * 0.075","0.02 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"-0.0099999998 * 0.075","0.01732 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"-0.01732 * 0.075","0.0099999998 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"-0.02 * 0.075","0 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"-0.01732 * 0.075","-0.0099999998 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"-0.0099999998 * 0.075","-0.01732 * 0.075"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,{"0 * 0.075","-0.02 * 0.075"},1}
							};
						};
					};
					class Transition_Acceleration_ball
					{
						type="group";
						condition="(60*1.852/3.6) - speed";
						class Acceleration_ball
						{
							type = "line";
							width = 3.0;
							points[]=
							{
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0 * 0.50","-0.02 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0.0099999998 * 0.50","-0.01732 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0.01732 * 0.50","-0.0099999998 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0.02 * 0.50","0 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0.01732 * 0.50","0.0099999998 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0.0099999998 * 0.50","0.01732 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0 * 0.50","0.02 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"-0.0099999998 * 0.50","0.01732 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"-0.01732 * 0.50","0.0099999998 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"-0.02 * 0.50","0 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"-0.01732 * 0.50","-0.0099999998 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"-0.0099999998 * 0.50","-0.01732 * 0.50"},1},
								{"Speed_Z_Transition",1,"Speed_X_Transition",1,"GforceZ_Transition",1,"GforceX_Transition",1,{"0 * 0.50","-0.02 * 0.50"},1}
							};
						};
					};
					class Transition_Horizon
					{
						clipTL[]={0.15,0.15};
						clipBR[]={0.85,0.85};
						type="group";
						condition="(60*1.852/3.6) - speed";
						class Horizon
						{
							class Level0
							{
								type="line";
								width=4;
								points[]=
								{
									{"Level0_Transition",{-0.05*9,0},1},
									{"Level0_Transition",{-0.05*8,0},1},
									{},
									{"Level0_Transition",{-0.05*7,0},1},
									{"Level0_Transition",{-0.05*6,0},1},
									{},
									{"Level0_Transition",{-0.05*5,0},1},
									{"Level0_Transition",{-0.05*4,0},1},
									{},
									{"Level0_Transition",{-0.05*3,0},1},
									{"Level0_Transition",{-0.05*2,0},1},
									{},
									///////////////////////////////
									{"Level0_Transition",{0.05*9,0},1},
									{"Level0_Transition",{0.05*8,0},1},
									{},
									{"Level0_Transition",{0.05*7,0},1},
									{"Level0_Transition",{0.05*6,0},1},
									{},
									{"Level0_Transition",{0.05*5,0},1},
									{"Level0_Transition",{0.05*4,0},1},
									{},
									{"Level0_Transition",{0.05*3,0},1},
									{"Level0_Transition",{0.05*2,0},1}
								};
							};
						};
					};
					class Transition_Bank
					{
						type="group";
						//condition="31 - speed";
						class Transition_Bank_Cue
						{
							//type="line";
							//width=3;
							type="polygon";
							points[]=
							{
								{
									{"HorizonBankRot",{0	,0.25},1},
									{"HorizonBankRot",{-0.01,0.23},1},
									{"HorizonBankRot",{0.01	,0.23},1}
								}
							};
						};
					};
				};
			};
			class Cruise_Mode 		// 60+ kts
			{
				type="group";
				condition="1-autohover";
				class Cruise
				{
					type="group";
					condition="speed - (60*1.852/3.6)+1"; // 60kts = 31m/s
					#include "cfg_HMD_AH64D_021_Horizon.hpp"
					/*class Cruise_Altitude_ASL_Imperial
					{
						type="group";
						condition="user1";
						class Cruise_Alt_Imperial
						{
							type="text";
							source="altitudeASL";
							sourceScale=3.28084; 	// feet
							align="right";
							scale=1;
							pos[]=	{{0.83,0.18},1};
							right[]={{0.88,0.18},1};
							down[]=	{{0.83,0.23},1};
						};
					};
					class Cruise_Altitude_ASL_Metric
					{
						type="group";
						condition="1-user1";
						class Cruise_Alt_Metric
						{
							type="text";
							source="altitudeASL";
							sourceScale=1; // meters
							align="right";
							scale=1;
							pos[]=	{{0.83,0.18},1};
							right[]={{0.88,0.18},1};
							down[]=	{{0.83,0.23},1};
						};
					};*/
					/*class Cruise_Box
					{
						type="line";
						width=3;
						points[]=
						{
							{{ "0.02 + 0.00", "0.50 - 0.015"	},1 },
							{{ "0.02 + 0.010", "0.50 - 0.025"	},1 },
							{{ "0.02 + 0.065", "0.50 - 0.025"	},1 },
							{{ "0.02 + 0.075", "0.50 - 0.015"	},1 },
							{{ "0.02 + 0.075", "0.50 + 0.015"	},1 },
							{{ "0.02 + 0.065", "0.50 + 0.025"	},1 },
							{{ "0.02 + 0.010", "0.50 + 0.025"	},1 },
							{{ "0.02 + 0.00", "0.50 + 0.015"	},1 },
							{{ "0.02 + 0.00", "0.50 - 0.015"	},1 }
						};
					};*/
				};
			};
		};
	};	
};