	/*class WYPT_TTG_TEST
	{
		type="group";
		//condition="(6*1.852/3.6) - speed";
		class TTG_6
		{								
			type="text";
			source="WPDist";
			sourceScale="1/(6*1.852*60/3.6)";
			sourceOffset="WPDist/(6*1.852/3.6)";
			sourcePrecision=0;
			align="right";
			scale=1;
			pos[]=	{{0.4,0.59},1};
			right[]={{0.44,0.59},1};
			down[]=	{{0.4,0.63},1};
		};
	};*/
	class WYPT_TTG_6
	{
		type="group";
		condition="(6*1.852/3.6) - speed";
		class TTG_6
		{								
			type="text";
			source="WPDist";
			sourceScale="1/(6*1.852/3.6)";
			align="right";
			scale=1;
			pos[]=	{{0.13,0.79},1};
			right[]={{0.17,0.79},1};
			down[]=	{{0.13,0.83},1};
		};
	};
	/*class WYPT_TTG_XXX
	{
		type="group";
		condition="speed- ((XXX-10)*1.852/3.6)";
		class TTG_XXX
		{								
			type="group";
			condition="(XXX*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(XXX*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};*/
	class WYPT_TTG_10
	{
		type="group";
		condition="speed- ((10-6)*1.852/3.6)+1";
		class TTG_10
		{								
			type="group";
			condition="(10*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(10*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_20
	{
		type="group";
		condition="speed- ((20-10)*1.852/3.6)+1";
		class TTG_20
		{								
			type="group";
			condition="(20*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(20*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_30
	{
		type="group";
		condition="speed- ((30-10)*1.852/3.6)+1";
		class TTG_30
		{								
			type="group";
			condition="(30*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(30*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_40
	{
		type="group";
		condition="speed- ((40-10)*1.852/3.6)+1";
		class TTG_40
		{								
			type="group";
			condition="(40*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(40*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_50
	{
		type="group";
		condition="speed- ((50-10)*1.852/3.6)+1";
		class TTG_50
		{								
			type="group";
			condition="(50*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(50*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_60
	{
		type="group";
		condition="speed- ((60-10)*1.852/3.6)+1";
		class TTG_60
		{								
			type="group";
			condition="(60*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(60*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_70
	{
		type="group";
		condition="speed- ((70-10)*1.852/3.6)+1";
		class TTG_70
		{								
			type="group";
			condition="(70*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(70*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_80
	{
		type="group";
		condition="speed- ((80-10)*1.852/3.6)+1";
		class TTG_80
		{								
			type="group";
			condition="(80*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(80*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_90
	{
		type="group";
		condition="speed- ((90-10)*1.852/3.6)+1";
		class TTG_90
		{								
			type="group";
			condition="(90*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(90*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_100
	{
		type="group";
		condition="speed- ((100-10)*1.852/3.6)+1";
		class TTG_100
		{								
			type="group";
			condition="(100*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(100*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_110
	{
		type="group";
		condition="speed- ((110-10)*1.852/3.6)+1";
		class TTG_110
		{								
			type="group";
			condition="(110*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(110*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_120
	{
		type="group";
		condition="speed- ((120-10)*1.852/3.6)+1";
		class TTG_120
		{								
			type="group";
			condition="(120*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(120*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_130
	{
		type="group";
		condition="speed- ((130-10)*1.852/3.6)+1";
		class TTG_130
		{								
			type="group";
			condition="(130*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(130*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_140
	{
		type="group";
		condition="speed- ((140-10)*1.852/3.6)+1";
		class TTG_140
		{								
			type="group";
			condition="(140*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(140*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_150
	{
		type="group";
		condition="speed- ((150-10)*1.852/3.6)+1";
		class TTG_150
		{								
			type="group";
			condition="(150*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(150*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_160
	{
		type="group";
		condition="speed- ((160-10)*1.852/3.6)+1";
		class TTG_160
		{								
			type="group";
			condition="(160*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(160*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_170
	{
		type="group";
		condition="speed- ((170-10)*1.852/3.6)+1";
		class TTG_170
		{								
			type="group";
			condition="(170*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(170*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_180
	{
		type="group";
		condition="speed- ((180-10)*1.852/3.6)+1";
		class TTG_180
		{								
			type="group";
			condition="(180*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(180*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_190
	{
		type="group";
		condition="speed- ((190-10)*1.852/3.6)+1";
		class TTG_190
		{								
			type="group";
			condition="(190*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(190*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_200
	{
		type="group";
		condition="speed- ((200-10)*1.852/3.6)+1";
		class TTG_200
		{								
			type="group";
			condition="(200*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(200*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_210
	{
		type="group";
		condition="speed- ((210-10)*1.852/3.6)+1";
		class TTG_210
		{								
			type="group";
			condition="(210*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(210*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_220
	{
		type="group";
		condition="speed- ((220-10)*1.852/3.6)+1";
		class TTG_220
		{								
			type="group";
			condition="(220*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(220*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_230
	{
		type="group";
		condition="speed- ((230-10)*1.852/3.6)+1";
		class TTG_230
		{								
			type="group";
			condition="(230*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(230*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_240
	{
		type="group";
		condition="speed- ((240-10)*1.852/3.6)+1";
		class TTG_240
		{								
			type="group";
			condition="(240*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(240*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_250
	{
		type="group";
		condition="speed- ((250-10)*1.852/3.6)+1";
		class TTG_250
		{								
			type="group";
			condition="(250*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(250*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_260
	{
		type="group";
		condition="speed- ((260-10)*1.852/3.6)+1";
		class TTG_260
		{								
			type="group";
			condition="(260*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(260*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_270
	{
		type="group";
		condition="speed- ((270-10)*1.852/3.6)+1";
		class TTG_270
		{								
			type="group";
			condition="(270*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(270*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_280
	{
		type="group";
		condition="speed- ((280-10)*1.852/3.6)+1";
		class TTG_280
		{								
			type="group";
			condition="(280*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(280*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_290
	{
		type="group";
		condition="speed- ((290-10)*1.852/3.6)+1";
		class TTG_290
		{								
			type="group";
			condition="(290*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(290*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
	class WYPT_TTG_300
	{
		type="group";
		condition="speed- ((300-10)*1.852/3.6)+1";
		class TTG_300
		{								
			type="group";
			condition="(300*1.852/3.6) - speed";
			class TTG
			{
				type="text";
				source="WPDist";
				sourceScale="1/(300*1.852/3.6)";
				align="right";
				scale=1;
				pos[]=	{{0.13,0.79},1};
				right[]={{0.17,0.79},1};
				down[]=	{{0.13,0.83},1};
			};
		};
	};
