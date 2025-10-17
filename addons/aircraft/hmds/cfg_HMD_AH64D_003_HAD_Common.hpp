class Kimi_HMD_HAD_Common
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={};
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
		class Static_HAD_BOX
		{
			clipTL[]={0,1};
			clipBR[]={1,0};
			type="line";
			width=2;
			points[]=
			{
				{{"0.5-0.1","0.9-0.04"},1},
				{{"0.5-0.1","0.9+0.04"},1},
				{{"0.5+0.1","0.9+0.04"},1},
				{{"0.5+0.1","0.9-0.04"},1},
				{{"0.5-0.1","0.9-0.04"},1},
				{},
				{{"0.5-0.1","0.9-0.04+0.02667"},1},
				{{"0.5-0.092","0.9-0.04+0.02667"},1},
				{},
				{{"0.5+0.1","0.9-0.04+0.02667"},1},
				{{"0.5+0.092","0.9-0.04+0.02667"},1},
				{},
				{{0.5,"0.9-0.040"},1},
				{{0.5,"0.9-0.032"},1},
				{},
				{{0.5,"0.9+0.040"},1},
				{{0.5,"0.9+0.032"},1}
			};
		};
		class Missile_limits
		{
			type="group";
			condition="missile";
			class Missile_lines
			{
				type="line";
				width=1;
				points[]=
				{
					{{"0.5-0.0167","0.9-0.04+0.00000"},1},
					{{"0.5-0.0167","0.9-0.04+0.00889"},1},
					{},
					{{"0.5-0.0167","0.9-0.04+0.00889*2"},1},
					{{"0.5-0.0167","0.9-0.04+0.00889*3"},1},
					{},
					{{"0.5-0.0167","0.9-0.04+0.00889*4"},1},
					{{"0.5-0.0167","0.9-0.04+0.00889*5"},1},
					{},
					{{"0.5-0.0167","0.9-0.04+0.00889*6"},1},
					{{"0.5-0.0167","0.9-0.04+0.00889*7"},1},
					{},
					{{"0.5-0.0167","0.9-0.04+0.00889*8"},1},
					{{"0.5-0.0167","0.9-0.04+0.00889*9"},1},
					{},
					{{"0.5+0.0167","0.9-0.04+0.00000"},1},
					{{"0.5+0.0167","0.9-0.04+0.00889"},1},
					{},
					{{"0.5+0.0167","0.9-0.04+0.00889*2"},1},
					{{"0.5+0.0167","0.9-0.04+0.00889*3"},1},
					{},
					{{"0.5+0.0167","0.9-0.04+0.00889*4"},1},
					{{"0.5+0.0167","0.9-0.04+0.00889*5"},1},
					{},
					{{"0.5+0.0167","0.9-0.04+0.00889*6"},1},
					{{"0.5+0.0167","0.9-0.04+0.00889*7"},1},
					{},
					{{"0.5+0.0167","0.9-0.04+0.00889*8"},1},
					{{"0.5+0.0167","0.9-0.04+0.00889*9"},1}
				};
			};
		};
		class Gun_limits
		{
			type="group";
			condition="mgun";
			class Missile_lines
			{
				type="line";
				width=1;
				points[]=
				{
					{{"0.5-0.0717","0.9-0.04+0.00000"},1},
					{{"0.5-0.0717","0.9-0.04+0.00889"},1},
					{},
					{{"0.5-0.0717","0.9-0.04+0.00889*2"},1},
					{{"0.5-0.0717","0.9-0.04+0.00889*3"},1},
					{},
					{{"0.5-0.0717","0.9-0.04+0.00889*4"},1},
					{{"0.5-0.0717","0.9-0.04+0.00889*5"},1},
					{},
					{{"0.5-0.0717","0.9-0.04+0.00889*6"},1},
					{{"0.5-0.0717","0.9-0.04+0.00889*7"},1},
					{},
					{{"0.5-0.0717","0.9-0.04+0.00889*8"},1},
					{{"0.5-0.0717","0.9-0.04+0.00889*9"},1},
					{},
					{{"0.5+0.0717","0.9-0.04+0.00000"},1},
					{{"0.5+0.0717","0.9-0.04+0.00889"},1},
					{},
					{{"0.5+0.0717","0.9-0.04+0.00889*2"},1},
					{{"0.5+0.0717","0.9-0.04+0.00889*3"},1},
					{},
					{{"0.5+0.0717","0.9-0.04+0.00889*4"},1},
					{{"0.5+0.0717","0.9-0.04+0.00889*5"},1},
					{},
					{{"0.5+0.0717","0.9-0.04+0.00889*6"},1},
					{{"0.5+0.0717","0.9-0.04+0.00889*7"},1},
					{},
					{{"0.5+0.0717","0.9-0.04+0.00889*8"},1},
					{{"0.5+0.0717","0.9-0.04+0.00889*9"},1}
				};
			};
		};
		class Gunner_Aim_Box
		{
			type="line";
			width=2;
			//type="Turret";
			//pos0[]=	{0.5,"0.9 - 0.04 + 0.02667"};
			//pos10[]={"0.5 + 0.0083","0.9 - 0.04 + 0.02667 + 0.0089"};
			/*points[]=
			{
				{"Gunner_HAD_Limit",1,{-0.015,-0.008},1},
				{"Gunner_HAD_Limit",1,{-0.015,0.008},1},
				{"Gunner_HAD_Limit",1,{0.015,0.008},1},
				{"Gunner_HAD_Limit",1,{0.015,-0.008},1},
				{"Gunner_HAD_Limit",1,{-0.015,-0.008},1}
			};*/
			//projection=0;
			//pos0[]=	{"Gunner_HAD_Limit",1,{0.5				,"0.9 - 0.04 + 0.02667"			},1};
			//pos10[]={"Gunner_HAD_Limit",1,{"0.5 + 0.0083"	,"0.9 - 0.04 + 0.02667 + 0.0089"},1};
			points[]=
			{
				/*{"GunnerAim",1,"Gunner_HAD_Limit",1,{-0.015,-0.008},1},
				{"GunnerAim",1,"Gunner_HAD_Limit",1,{-0.015,0.008},1},
				{"GunnerAim",1,"Gunner_HAD_Limit",1,{0.015,0.008},1},
				{"GunnerAim",1,"Gunner_HAD_Limit",1,{0.015,-0.008},1},
				{"GunnerAim",1,"Gunner_HAD_Limit",1,{-0.015,-0.008},1}*/
								
				{"GunnerAim",{0.485,0.892},1},
				{"GunnerAim",{0.485,0.908},1},
				{"GunnerAim",{0.515,0.908},1},
				{"GunnerAim",{0.515,0.892},1},
				{"GunnerAim",{0.485,0.892},1}
				
				/*{"GunnerAim",{0.485,"0.9-0.04+0.02667-0.008"},1},
				{"GunnerAim",{0.485,"0.9-0.04+0.02667+0.008"},1},
				{"GunnerAim",{0.515,"0.9-0.04+0.02667+0.008"},1},
				{"GunnerAim",{0.515,"0.9-0.04+0.02667-0.008"},1},
				{"GunnerAim",{0.485,"0.9-0.04+0.02667-0.008"},1}*/
			};
		};
		class AGM_TOF
		{
			condition="ATmissile*missilelocked";
			type="group";
			class TOFtext
			{
				type="text";
				align="right";
				source="static";
				text="TOF=";
				scale=1;
				pos[]=	{{0.61,0.92},1};
				right[]={{0.65,0.92},1};
				down[]=	{{0.61,0.96},1};
			};
			class TOFnumber
			{
				type="text";
				//source="MissileFlightTime";
				source="targetDist";
				sourcescale = 0.0025;
				align="right";
				scale=1;
				pos[]=	{{0.69,0.92},1};
				right[]={{0.73,0.92},1};
				down[]=	{{0.69,0.96},1};
			};
		};
		class Range_group
		{
			type="group";
			condition="targetDist";
			class RangeText
			{
				type="text";
				source="static";
				text="R";
				align="right";
				scale=1;
				pos[]=	{{0.30,0.86},1};
				right[]={{0.34,0.86},1};
				down[]=	{{0.30,0.90},1};
			};
			class RangeNumber
			{
				type="text";
				source="targetDist";
				sourceprecision=2;
				sourceScale=0.001;
				align="left";
				scale=1;
				pos[]=	{{0.37,0.86},1};
				right[]={{0.41,0.86},1};
				down[]=	{{0.37,0.90},1};
			};
		};
		class ACQ_TADS_Source
		{
			type="group";
			condition="1-activeSensorsOn";
			class ACQ_TADS
			{
				type="text";
				source="static";
				text="TADS";
				align="right";
				scale=1;
				pos[]=	{{0.30,0.89},1};
				right[]={{0.34,0.89},1};
				down[]=	{{0.30,0.93},1};
			};
		};
		class ACQ_FCRG_Source
		{
			type="group";
			condition="activeSensorsOn-AAmissile";
			class ACQ_FCRG
			{
				type="text";
				source="static";
				text="FCR/G";
				align="right";
				scale=1;
				pos[]=	{{0.30,0.89},1};
				right[]={{0.34,0.89},1};
				down[]=	{{0.30,0.93},1};
			};
		};
		class ACQ_FCRA_Source
		{
			type="group";
			condition="(activeSensorsOn*AAmissile)";
			class ACQ_FCRA
			{
				type="text";
				source="static";
				text="FCR/A";
				align="right";
				scale=1;
				pos[]=	{{0.30,0.89},1};
				right[]={{0.34,0.89},1};
				down[]=	{{0.30,0.93},1};
			};
		};
	};
};
