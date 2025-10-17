class Cruise_Horizon
{
	clipTL[] = {0.15,0.15};
	clipBR[] = {0.85,0.85};
	type="group";
	//condition = "ils";
	condition="speed - (60*1.852/3.6)+1"; // 60kts = 31m/s
	class Climb_Ladder
	{
		class Level0
		{
			type = "line";
			width=5;
			points[] = 
			{
				{ "Level0",{ -0.40,0 },1 },
				/*{ "Level0",{ -0.06,0 },1 },
				{  },
				{ "Level0",{ 0.42,0 },1 },*/
				{ "Level0",{ 0.40,0 },1 }
			};
		};
		class LevelM10: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelM10",{ -0.150	,-0.020 },1 },
				{ "LevelM10",{ -0.150	,0 		},1 },
				{ "LevelM10",{ -0.130	,0 		},1 },
				{  },
				{ "LevelM10",{ -0.110	,0 		},1 },
				{ "LevelM10",{ -0.090	,0 		},1 },
				{  },
				{ "LevelM10",{ -0.070	,0 		},1 },
				{ "LevelM10",{ -0.050	,0 		},1 },
				{  },
				{ "LevelM10",{ 0.050	,0 		},1 },
				{ "LevelM10",{ 0.070	,0 		},1 },
				{  },
				{ "LevelM10",{ 0.090	,0 		},1 },
				{ "LevelM10",{ 0.110	,0 		},1 },
				{  },
				{ "LevelM10",{ 0.130	,0 		},1 },
				{ "LevelM10",{ 0.150	,0 		},1 },
				{ "LevelM10",{ 0.150	,-0.020 },1 }
			};
		};
		class VALM_1_10
		{
			type = "text";
			source = "static";
			text = 10;
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelM10",{ -0.157,-0.03500 	},1};
			right[] = 	{"LevelM10",{ -0.097,-0.03500 	},1};
			down[] = 	{"LevelM10",{ -0.157,0.02500	},1};
		};
		class VALM_2_10: VALM_1_10
		{
			align = "right";
			pos[] = 	{"LevelM10",{ 0.155,-0.03500 	},1};
			right[] = 	{"LevelM10",{ 0.215,-0.03500 	},1};
			down[] = 	{"LevelM10",{ 0.155,0.02500 	},1};
		};
		class LevelP10: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelP10",{ -0.150,0.02 	},1 },
				{ "LevelP10",{ -0.150,0 	},1 },
				{ "LevelP10",{ -0.050,0 	},1 },
				{  },
				{ "LevelP10",{ 0.050,0 		},1 },
				{ "LevelP10",{ 0.150,0 		},1 },
				{ "LevelP10",{ 0.150,0.02 	},1 }
			};
		};
		class VALP_1_10
		{
			type = "text";
			source = "static";
			text = "10";
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelP10",{ -0.157,-0.03000 },1};
			right[] = 	{"LevelP10",{ -0.097,-0.03000 },1};
			down[] = 	{"LevelP10",{ -0.157,0.03000  },1};
		};
		class VALP_2_10: VALP_1_10
		{
			align = "right";
			pos[] = 	{"LevelP10",{ 0.155,-0.03000 },1};
			right[] = 	{"LevelP10",{ 0.215,-0.03000 },1};
			down[] = 	{"LevelP10",{ 0.155,0.03000 },1};
		};
		class LevelM20: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelM20",{ -0.150	,-0.020 },1 },
				{ "LevelM20",{ -0.150	,0 		},1 },
				{ "LevelM20",{ -0.130	,0 		},1 },
				{  },
				{ "LevelM20",{ -0.110	,0 		},1 },
				{ "LevelM20",{ -0.090	,0 		},1 },
				{  },
				{ "LevelM20",{ -0.070	,0 		},1 },
				{ "LevelM20",{ -0.050	,0 		},1 },
				{  },
				{ "LevelM20",{ 0.050	,0 		},1 },
				{ "LevelM20",{ 0.070	,0 		},1 },
				{  },
				{ "LevelM20",{ 0.090	,0 		},1 },
				{ "LevelM20",{ 0.110	,0 		},1 },
				{  },
				{ "LevelM20",{ 0.130	,0 		},1 },
				{ "LevelM20",{ 0.150	,0 		},1 },
				{ "LevelM20",{ 0.150	,-0.020 },1 }
			};
		};
		class VALM_1_20
		{
			type = "text";
			source = "static";
			text = 20;
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelM20",{ -0.157,-0.03500 	},1};
			right[] = 	{"LevelM20",{ -0.097,-0.03500 	},1};
			down[] = 	{"LevelM20",{ -0.157,0.02500	},1};
		};
		class VALM_2_20: VALM_1_20
		{
			align = "right";
			pos[] = 	{"LevelM20",{ 0.155,-0.03500 	},1};
			right[] = 	{"LevelM20",{ 0.215,-0.03500 	},1};
			down[] = 	{"LevelM20",{ 0.155,0.02500 	},1};
		};
		class LevelP20: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelP20",{ -0.150,0.02 	},1 },
				{ "LevelP20",{ -0.150,0 	},1 },
				{ "LevelP20",{ -0.050,0 	},1 },
				{  },
				{ "LevelP20",{ 0.050,0 		},1 },
				{ "LevelP20",{ 0.150,0 		},1 },
				{ "LevelP20",{ 0.150,0.02 	},1 }
			};
		};
		class VALP_1_20
		{
			type = "text";
			source = "static";
			text = "20";
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelP20",{ -0.157,-0.03000 },1};
			right[] = 	{"LevelP20",{ -0.097,-0.03000 },1};
			down[] = 	{"LevelP20",{ -0.157,0.03000  },1};
		};
		class VALP_2_20: VALP_1_20
		{
			align = "right";
			pos[] = 	{"LevelP20",{ 0.155,-0.03000 },1};
			right[] = 	{"LevelP20",{ 0.215,-0.03000 },1};
			down[] = 	{"LevelP20",{ 0.155,0.03000 },1};
		};
		class LevelM30: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelM30",{ -0.150	,-0.020 },1 },
				{ "LevelM30",{ -0.150	,0 		},1 },
				{ "LevelM30",{ -0.130	,0 		},1 },
				{  },
				{ "LevelM30",{ -0.110	,0 		},1 },
				{ "LevelM30",{ -0.090	,0 		},1 },
				{  },
				{ "LevelM30",{ -0.070	,0 		},1 },
				{ "LevelM30",{ -0.050	,0 		},1 },
				{  },
				{ "LevelM30",{ 0.050	,0 		},1 },
				{ "LevelM30",{ 0.070	,0 		},1 },
				{  },
				{ "LevelM30",{ 0.090	,0 		},1 },
				{ "LevelM30",{ 0.110	,0 		},1 },
				{  },
				{ "LevelM30",{ 0.130	,0 		},1 },
				{ "LevelM30",{ 0.150	,0 		},1 },
				{ "LevelM30",{ 0.150	,-0.020 },1 }
			};
		};
		class VALM_1_30
		{
			type = "text";
			source = "static";
			text = 30;
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelM30",{ -0.157,-0.03500 	},1};
			right[] = 	{"LevelM30",{ -0.097,-0.03500 	},1};
			down[] = 	{"LevelM30",{ -0.157,0.02500	},1};
		};
		class VALM_2_30: VALM_1_30
		{
			align = "right";
			pos[] = 	{"LevelM30",{ 0.155,-0.03500 	},1};
			right[] = 	{"LevelM30",{ 0.215,-0.03500 	},1};
			down[] = 	{"LevelM30",{ 0.155,0.02500 	},1};
		};
		class LevelP30: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelP30",{ -0.150,0.02 	},1 },
				{ "LevelP30",{ -0.150,0 	},1 },
				{ "LevelP30",{ -0.050,0 	},1 },
				{  },
				{ "LevelP30",{ 0.050,0 		},1 },
				{ "LevelP30",{ 0.150,0 		},1 },
				{ "LevelP30",{ 0.150,0.02 	},1 }
			};
		};
		class VALP_1_30
		{
			type = "text";
			source = "static";
			text = "30";
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelP30",{ -0.157,-0.03000 },1};
			right[] = 	{"LevelP30",{ -0.097,-0.03000 },1};
			down[] = 	{"LevelP30",{ -0.157,0.03000  },1};
		};
		class VALP_2_30: VALP_1_30
		{
			align = "right";
			pos[] = 	{"LevelP30",{ 0.155,-0.03000 },1};
			right[] = 	{"LevelP30",{ 0.215,-0.03000 },1};
			down[] = 	{"LevelP30",{ 0.155,0.03000 },1};
		};
		class LevelM40: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelM40",{ -0.150	,-0.020 },1 },
				{ "LevelM40",{ -0.150	,0 		},1 },
				{ "LevelM40",{ -0.130	,0 		},1 },
				{  },
				{ "LevelM40",{ -0.110	,0 		},1 },
				{ "LevelM40",{ -0.090	,0 		},1 },
				{  },
				{ "LevelM40",{ -0.070	,0 		},1 },
				{ "LevelM40",{ -0.050	,0 		},1 },
				{  },
				{ "LevelM40",{ 0.050	,0 		},1 },
				{ "LevelM40",{ 0.070	,0 		},1 },
				{  },
				{ "LevelM40",{ 0.090	,0 		},1 },
				{ "LevelM40",{ 0.110	,0 		},1 },
				{  },
				{ "LevelM40",{ 0.130	,0 		},1 },
				{ "LevelM40",{ 0.150	,0 		},1 },
				{ "LevelM40",{ 0.150	,-0.020 },1 }
			};		
		};
		class VALM_1_40
		{
			type = "text";
			source = "static";
			text = 40;
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelM40",{ -0.157,-0.03500 	},1};
			right[] = 	{"LevelM40",{ -0.097,-0.03500 	},1};
			down[] = 	{"LevelM40",{ -0.157,0.02500	},1};
		};
		class VALM_2_40: VALM_1_40
		{
			align = "right";
			pos[] = 	{"LevelM40",{ 0.155,-0.03500 	},1};
			right[] = 	{"LevelM40",{ 0.215,-0.03500 	},1};
			down[] = 	{"LevelM40",{ 0.155,0.02500 	},1};
		};
		class LevelP40: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelP40",{ -0.150,0.02 	},1 },
				{ "LevelP40",{ -0.150,0 	},1 },
				{ "LevelP40",{ -0.050,0 	},1 },
				{  },
				{ "LevelP40",{ 0.050,0 		},1 },
				{ "LevelP40",{ 0.150,0 		},1 },
				{ "LevelP40",{ 0.150,0.02 	},1 }
			};
		};
		class VALP_1_40
		{
			type = "text";
			source = "static";
			text = "40";
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelP40",{ -0.157,-0.03000 },1};
			right[] = 	{"LevelP40",{ -0.097,-0.03000 },1};
			down[] = 	{"LevelP40",{ -0.157,0.03000  },1};
		};
		class VALP_2_40: VALP_1_40
		{
			align = "right";
			pos[] = 	{"LevelP40",{ 0.155,-0.03000 },1};
			right[] = 	{"LevelP40",{ 0.215,-0.03000 },1};
			down[] = 	{"LevelP40",{ 0.155,0.03000 },1};
		};
		class LevelM50: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelM50",{ -0.150	,-0.020 },1 },
				{ "LevelM50",{ -0.150	,0 		},1 },
				{ "LevelM50",{ -0.130	,0 		},1 },
				{  },
				{ "LevelM50",{ -0.110	,0 		},1 },
				{ "LevelM50",{ -0.090	,0 		},1 },
				{  },
				{ "LevelM50",{ -0.070	,0 		},1 },
				{ "LevelM50",{ -0.050	,0 		},1 },
				{  },
				{ "LevelM50",{ 0.050	,0 		},1 },
				{ "LevelM50",{ 0.070	,0 		},1 },
				{  },
				{ "LevelM50",{ 0.090	,0 		},1 },
				{ "LevelM50",{ 0.110	,0 		},1 },
				{  },
				{ "LevelM50",{ 0.130	,0 		},1 },
				{ "LevelM50",{ 0.150	,0 		},1 },
				{ "LevelM50",{ 0.150	,-0.020 },1 }
			};
		};
		class VALM_1_50
		{
			type = "text";
			source = "static";
			text = 50;
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelM50",{ -0.157,-0.03500 	},1};
			right[] = 	{"LevelM50",{ -0.097,-0.03500 	},1};
			down[] = 	{"LevelM50",{ -0.157,0.02500	},1};
		};
		class VALM_2_50: VALM_1_50
		{
			align = "right";
			pos[] = 	{"LevelM50",{ 0.155,-0.03500 	},1};
			right[] = 	{"LevelM50",{ 0.215,-0.03500 	},1};
			down[] = 	{"LevelM50",{ 0.155,0.02500 	},1};
		};
		class LevelP50: Level0
		{
			type = "line";
			width = 3;
			points[] = 
			{
				{ "LevelP50",{ -0.150,0.02 	},1 },
				{ "LevelP50",{ -0.150,0 	},1 },
				{ "LevelP50",{ -0.050,0 	},1 },
				{  },
				{ "LevelP50",{ 0.050,0 		},1 },
				{ "LevelP50",{ 0.150,0 		},1 },
				{ "LevelP50",{ 0.150,0.02 	},1 }
			};
		};
		class VALP_1_50
		{
			type = "text";
			source = "static";
			text = "50";
			align = "left";
			scale = 1;
			sourceScale = 1;
			pos[] = 	{"LevelP50",{ -0.157,-0.03000 },1};
			right[] = 	{"LevelP50",{ -0.097,-0.03000 },1};
			down[] = 	{"LevelP50",{ -0.157,0.03000  },1};
		};
		class VALP_2_50: VALP_1_50
		{
			align = "right";
			pos[] = 	{"LevelP50",{ 0.155,-0.03000 },1};
			right[] = 	{"LevelP50",{ 0.215,-0.03000 },1};
			down[] = 	{"LevelP50",{ 0.155,0.03000 },1};
		};
	};
};