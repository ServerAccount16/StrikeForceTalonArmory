class Kimi_HMD_Common
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0-user2";
		
		class Units_Text_Imperial
		{
			type="group";
			condition="user1";
			class Units_Metric
			{
				type="text";
				source="static";
				text="I";
				align="right";
				scale=1;
				pos[]=	{{0.95	,0.10	},1};
				right[]={{0.98	,0.10	},1};
				down[]=	{{0.95	,0.13	},1};
			};
		};
		class Units_Text_Metric
		{
			type="group";
			condition="1-user1";
			class Units_Metric
			{
				type="text";
				source="static";
				text="M";
				align="right";
				scale=1;
				pos[]=	{{0.95	,0.10	},1};
				right[]={{0.98	,0.10	},1};
				down[]=	{{0.95	,0.13	},1};
			};
		};
		class Heading_Indexer
		{
			type="line";
			width=7;
			points[]=
			{
				{{"0.5","0.128 + 0.03"},1},
				{{0.5,0.128},1}
			};
		};
		class HeadingScale_LEFT
		{
			clipTL[]={0,0};
			clipBR[]={0.45,1};
			class Heading_group
			{
				type="scale";
				horizontal=1;
				source="heading";
				sourceScale=0.1;
				//sourceLength=2;
				NeverEatSeaWeed = 1;
				width=4;
				//top=	0.15;
				//center=	0.50;
				//bottom=	0.85;
				top=	0.20;
				center=	0.50;
				bottom=	0.80;
				lineXleft=		"0.03 + 0.085";
				lineYright=		"0.02 + 0.085";
				lineXleftMajor=	"0.04 + 0.085";
				lineYrightMajor="0.02 + 0.085";
				majorLineEach=3;
				numberEach=3;
				step=1;
				//stepSize="0.05";
				stepSize="0.03";
				align="center";
				scale=1;
				pos[]=	{ "0.1975 + 0.000", "0.060 + 0.000"};
				right[]={ "0.1975 + 0.040", "0.060 + 0.000"};
				down[]=	{ "0.1975 + 0.000", "0.060 + 0.040"};
			};
		};
		class HeadingScale_RIGHT
		{
			clipTL[]={0.55,0};
			clipBR[]={1,1};
			class Heading_group
			{
				type="scale";
				horizontal=1;
				source="heading";
				sourceScale=0.1;
				//sourceLength=2;
				NeverEatSeaWeed = 1;
				width=4;
				//top=	0.15;
				//center=	0.50;
				//bottom=	0.85;
				top=	0.20;
				center=	0.50;
				bottom=	0.80;
				lineXleft=		"0.03 + 0.085";
				lineYright=		"0.02 + 0.085";
				lineXleftMajor=	"0.04 + 0.085";
				lineYrightMajor="0.02 + 0.085";
				majorLineEach=3;
				numberEach=3;
				step=1;
				//stepSize="0.05";
				stepSize="0.03";
				align="center";
				scale=1;
				pos[]=	{ "0.1975 + 0.000", "0.060 + 0.000"};
				right[]={ "0.1975 + 0.040", "0.060 + 0.000"};
				down[]=	{ "0.1975 + 0.000", "0.060 + 0.040"};
			};
		};
		class HeadingScale_BOTTOM
		{
			clipTL[]={0.45			,"0.02 + 0.085"	};
			clipBR[]={"0.45 + 0.10"	,1				};
			class Heading_group
			{
				type="scale";
				horizontal=1;
				source="heading";
				sourceScale=0.1;
				//sourceLength=2;
				NeverEatSeaWeed = 1;
				width=4;
				//top=	0.15;
				//center=	0.50;
				//bottom=	0.85;
				top=	0.20;
				center=	0.50;
				bottom=	0.80;
				lineXleft=		"0.03 + 0.085";
				lineYright=		"0.02 + 0.085";
				lineXleftMajor=	"0.04 + 0.085";
				lineYrightMajor="0.02 + 0.085";
				majorLineEach=3;
				numberEach=3;
				step=1;
				//stepSize="0.05";
				stepSize="0.03";
				align="center";
				scale=1;
				pos[]=	{ "0.1975 + 0.000", "0.060 + 0.000"};
				right[]={ "0.1975 + 0.040", "0.060 + 0.000"};
				down[]=	{ "0.1975 + 0.000", "0.060 + 0.040"};
			};
		};
		class WYPT_indexer
		{
			type="group";
			condition="WPvalid";
			class WYPT_tape
			{
				type="line";
				width=4;
				points[]=
				{
					{"WYPT_Tape_Bone",1,"Tape_Limit",1,{-0.010, 0.015},1},
					{"WYPT_Tape_Bone",1,"Tape_Limit",1,{ 0.000, 0.000},1},
					{"WYPT_Tape_Bone",1,"Tape_Limit",1,{ 0.010, 0.015},1}
				};					
			};				
		};
	};
};