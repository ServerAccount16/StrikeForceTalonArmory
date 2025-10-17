class Kimi_HMD_Decluttered
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
		class HeadingNumber
		{
			type="text";
			scale=1.0;
			source="heading";
			sourceScale=1;
			sourceLength=3;
			align="center";
			pos[]=	{{0.495	,0.045			},1};
			right[]={{0.555	,0.045			},1};
			down[]=	{{0.495	,"0.045+ 0.06"	},1};
		};
		class Airspeed_Number_Imperial
		{
			type="group";
			condition="user1";
			class Airspeed_Imperial
			{
				type="text";
				align="right";
				scale=1;
				source="speed";
				sourceScale=1.94384; // knots
				pos[]=	{{0.03,0.475},1};
				right[]={{0.08,0.475},1};
				down[]=	{{0.03,0.525},1};
			};
		};
		class Airspeed_Number_Metric
		{
			type="group";
			condition="1-user1";
			class Airspeed_Metric
			{
				type="text";
				align="right";
				scale=1;
				source="speed";
				sourceScale=3.6; // kph
				pos[]=	{{0.03,0.475},1};
				right[]={{0.08,0.475},1};
				down[]=	{{0.03,0.525},1};
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
				sourceScale=3.28084; 	// feet
				sourceOffset = -6;
				pos[]=	{{0.83,0.475},1};
				right[]={{0.88,0.475},1};
				down[]=	{{0.83,0.525},1};
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
				sourceScale=1; 	// meters
				sourceOffset = -2;
				pos[]=	{{0.83,0.475},1};
				right[]={{0.88,0.475},1};
				down[]=	{{0.83,0.525},1};
			};
		};
		class AC_Centerline
		{
			type="line";
			width=1.0;
			points[]=
			{
				{"ForwardVec",1,{" -0.004 + 0.5" , "0 + 0.5" },1},
				{"ForwardVec",1,{" 0.004 + 0.5" , "0 + 0.5" },1},
				{ },
				{"ForwardVec",1,{" -0.0 + 0.5" , "0.004 + 0.5" },1},
				{"ForwardVec",1,{" 0.0 + 0.5" , "-0.004 + 0.5" },1}
			};
		};
		class FPM
		{
			type="group";
			condition="speed - 3.(6*1.852/3.6)+1.94384"; // activates in Transition Mode
			class FPM_Cue
			{
				type="line";
				width=5;
				points[]=
				{
					{"Velocity",1,{0*0.75				,-0.02*0.75			},1},
					{"Velocity",1,{0.0099999998*0.75	,-0.01732*0.75		},1},
					{"Velocity",1,{0.01732*0.75			,-0.0099999998*0.75	},1},
					{"Velocity",1,{0.02*0.75			,0*0.75				},1},
					{"Velocity",1,{0.01732*0.75			,0.0099999998*0.75	},1},
					{"Velocity",1,{0.0099999998*0.75	,0.01732*0.75		},1},
					{"Velocity",1,{0*0.75				,0.02*0.75			},1},
					{"Velocity",1,{-0.0099999998*0.75	,0.01732*0.75		},1},
					{"Velocity",1,{-0.01732*0.75		,0.0099999998*0.75	},1},
					{"Velocity",1,{-0.02*0.75			,0*0.75				},1},
					{"Velocity",1,{-0.01732*0.75		,-0.0099999998*0.75	},1},
					{"Velocity",1,{-0.0099999998*0.75	,-0.01732*0.75		},1},
					{"Velocity",1,{0*0.75				,-0.02*0.75			},1},
					{},
					{"Velocity",1,{0.039999999*0.75		,0*0.75				},1},
					{"Velocity",1,{0.02*0.75			,0*0.75				},1},
					{},
					{"Velocity",1,{-0.039999999*0.75	,0*0.75				},1},
					{"Velocity",1,{-0.02*0.75			,0*0.75				},1},
					{},
					{"Velocity",1,{0*0.75				,-0.039999999*0.75	},1},
					{"Velocity",1,{0*0.75				,-0.02*0.75			},1}
				};
			};
		};
		class WYPT_Group
		{
			type="group";
			condition="WPvalid";
			class WYPT_Block
			{
				type="group";
				//condition="speed - (6*1.852/3.6)+1.94384"; // 6kts = 3,1m/s
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
		class Cruise_Altitude_ASL_Imperial
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
		};
					
	};
};