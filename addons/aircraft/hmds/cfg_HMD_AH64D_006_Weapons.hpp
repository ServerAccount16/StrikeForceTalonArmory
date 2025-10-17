class Kimi_HMD_Weapons
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={0};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
		#include "cfg_HMD_AH64D_028_Hdg_Tape_Turret.hpp" // crashes if no turret is available
		class Gun_Cross
		{
			condition = "mgun";
			type="group";
			class GUN_X
			{
				type = "line";
				width = 9.0;
				points[] = 
				{
					{"CCIP_2_VIEW",{ 0,-0.05 },1 },
					{"CCIP_2_VIEW",{ 0,-0.015 },1 },
					{},
					{"CCIP_2_VIEW",{ 0,0.015 },1 },
					{"CCIP_2_VIEW",{ 0,0.05 },1 },
					{},
					{"CCIP_2_VIEW",{ -0.05,0 },1 },
					{"CCIP_2_VIEW",{ -0.015,0 },1 },
					{},
					{"CCIP_2_VIEW",{ 0.015,0 },1 },
					{"CCIP_2_VIEW",{ 0.05,0 },1 }
				};
			};
		};
		class Gunner_AIM
		{
			type="group";
			condition="(1-mgun)*(2-(abs(cameraHeadingDiffY)<=3)-(abs(cameraHeadingDiffX)<=3))*(1-(abs(weaponHeading-HEADING)<=3))";
			class CPG_X_Group
			{
				type="group";
				//clipTL[]={0.000,0.000};
				//clipBR[]={0.450,1.000};
				class CPG_X
				{
					type = "line";
					width = 6.0;
					//pos0[] = 	{0.500		 		,0.500			};
					//pos10[] = 	{"0.500 + 0.2165"	,"0.500 + 0.2165"};
					//projection=0;
					points[] = 
					{
						{"TurretAimToView",1,{ 0,-0.015 },1 },
						{"TurretAimToView",1,{ 0,-0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,-0.0325 },1 },
						{"TurretAimToView",1,{ 0,-0.0475 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.015 },1 },
						{"TurretAimToView",1,{ 0,0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.0325 },1 },
						{"TurretAimToView",1,{ 0,0.0475 },1 },
						{},
						{"TurretAimToView",1,{ -0.015,0 },1 },
						{"TurretAimToView",1,{ -0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ -0.0325,0 },1 },
						{"TurretAimToView",1,{ -0.0475,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.015,0 },1 },
						{"TurretAimToView",1,{ 0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.0325,0 },1 },
						{"TurretAimToView",1,{ 0.0475,0 },1 }
					};
				};
			};
			/*class CPG_X_Group_LEFT
			{
				type="group";
				clipTL[]={0.000,0.000};
				clipBR[]={0.450,1.000};
				class CPG_X_LEFT
				{
					type = "line";
					width = 6.0;
					//pos0[] = 	{0.500		 		,0.500			};
					//pos10[] = 	{"0.500 + 0.2165"	,"0.500 + 0.2165"};
					//projection=0;
					points[] = 
					{
						{"TurretAimToView",1,{ 0,-0.015 },1 },
						{"TurretAimToView",1,{ 0,-0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,-0.0325 },1 },
						{"TurretAimToView",1,{ 0,-0.0475 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.015 },1 },
						{"TurretAimToView",1,{ 0,0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.0325 },1 },
						{"TurretAimToView",1,{ 0,0.0475 },1 },
						{},
						{"TurretAimToView",1,{ -0.015,0 },1 },
						{"TurretAimToView",1,{ -0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ -0.0325,0 },1 },
						{"TurretAimToView",1,{ -0.0475,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.015,0 },1 },
						{"TurretAimToView",1,{ 0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.0325,0 },1 },
						{"TurretAimToView",1,{ 0.0475,0 },1 }
					};
				};
			};
			class CPG_X_Group_RIGHT
			{
				type="group";
				clipTL[]={0.550,0.000};
				clipBR[]={1.000,1.000};
				class CPG_X_RIGHT
				{
					type = "line";
					width = 6.0;
					points[] = 
					{
						{"TurretAimToView",1,{ 0,-0.015 },1 },
						{"TurretAimToView",1,{ 0,-0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,-0.0325 },1 },
						{"TurretAimToView",1,{ 0,-0.0475 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.015 },1 },
						{"TurretAimToView",1,{ 0,0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.0325 },1 },
						{"TurretAimToView",1,{ 0,0.0475 },1 },
						{},
						{"TurretAimToView",1,{ -0.015,0 },1 },
						{"TurretAimToView",1,{ -0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ -0.0325,0 },1 },
						{"TurretAimToView",1,{ -0.0475,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.015,0 },1 },
						{"TurretAimToView",1,{ 0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.0325,0 },1 },
						{"TurretAimToView",1,{ 0.0475,0 },1 }
					};
				};
			};
			class CPG_X_Group_TOP
			{
				type="group";
				clipTL[]={0.450,0.000};
				clipBR[]={0.550,0.450};
				class CPG_X_TOP
				{
					type = "line";
					width = 6.0;
					points[] = 
					{
						{"TurretAimToView",1,{ 0,-0.015 },1 },
						{"TurretAimToView",1,{ 0,-0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,-0.0325 },1 },
						{"TurretAimToView",1,{ 0,-0.0475 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.015 },1 },
						{"TurretAimToView",1,{ 0,0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.0325 },1 },
						{"TurretAimToView",1,{ 0,0.0475 },1 },
						{},
						{"TurretAimToView",1,{ -0.015,0 },1 },
						{"TurretAimToView",1,{ -0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ -0.0325,0 },1 },
						{"TurretAimToView",1,{ -0.0475,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.015,0 },1 },
						{"TurretAimToView",1,{ 0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.0325,0 },1 },
						{"TurretAimToView",1,{ 0.0475,0 },1 }
					};
				};
			};
			class CPG_X_Group_BOTTOM
			{
				type="group";
				clipTL[]={0.450,0.550};
				clipBR[]={0.550,1.000};
				class CPG_X_BOTTOM
				{
					type = "line";
					width = 6.0;
					points[] = 
					{
						{"TurretAimToView",1,{ 0,-0.015 },1 },
						{"TurretAimToView",1,{ 0,-0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,-0.0325 },1 },
						{"TurretAimToView",1,{ 0,-0.0475 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.015 },1 },
						{"TurretAimToView",1,{ 0,0.030 },1 },
						{},
						{"TurretAimToView",1,{ 0,0.0325 },1 },
						{"TurretAimToView",1,{ 0,0.0475 },1 },
						{},
						{"TurretAimToView",1,{ -0.015,0 },1 },
						{"TurretAimToView",1,{ -0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ -0.0325,0 },1 },
						{"TurretAimToView",1,{ -0.0475,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.015,0 },1 },
						{"TurretAimToView",1,{ 0.030,0 },1 },
						{},
						{"TurretAimToView",1,{ 0.0325,0 },1 },
						{"TurretAimToView",1,{ 0.0475,0 },1 }
					};
				};
			};*/
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
		class TargetACQ_AGM
		{
			condition="ATmissile-missilelocked";
			type="group";
			class ACQbox
			{
				type="line";
				width=2;
				points[]=
				{
					// Arriba
					{"Target2View",{ -0.075,-0.075 },1 },
					{"Target2View",{ -0.065,-0.075 },1 },
					{},
					{"Target2View",{ -0.060,-0.075 },1 },
					{"Target2View",{ -0.050,-0.075 },1 },
					{},
					{"Target2View",{ -0.045,-0.075 },1 },
					{"Target2View",{ -0.035,-0.075 },1 },
					{},
					{"Target2View",{ -0.030,-0.075 },1 },
					{"Target2View",{ -0.020,-0.075 },1 },
					{},
					{"Target2View",{ -0.015,-0.075 },1 },
					{"Target2View",{ -0.005,-0.075 },1 },
					{},
					{"Target2View",{ 0.075,-0.075 },1 },
					{"Target2View",{ 0.065,-0.075 },1 },
					{},
					{"Target2View",{ 0.060,-0.075 },1 },
					{"Target2View",{ 0.050,-0.075 },1 },
					{},
					{"Target2View",{ 0.045,-0.075 },1 },
					{"Target2View",{ 0.035,-0.075 },1 },
					{},
					{"Target2View",{ 0.030,-0.075 },1 },
					{"Target2View",{ 0.020,-0.075 },1 },
					{},
					{"Target2View",{ 0.015,-0.075 },1 },
					{"Target2View",{ 0.005,-0.075 },1 },
					{},
					// Abajo
					{"Target2View",{ -0.075,0.075 },1 },
					{"Target2View",{ -0.065,0.075 },1 },
					{},
					{"Target2View",{ -0.060,0.075 },1 },
					{"Target2View",{ -0.050,0.075 },1 },
					{},
					{"Target2View",{ -0.045,0.075 },1 },
					{"Target2View",{ -0.035,0.075 },1 },
					{},
					{"Target2View",{ -0.030,0.075 },1 },
					{"Target2View",{ -0.020,0.075 },1 },
					{},
					{"Target2View",{ -0.015,0.075 },1 },
					{"Target2View",{ -0.005,0.075 },1 },
					{},
					{"Target2View",{ 0.075,0.075 },1 },
					{"Target2View",{ 0.065,0.075 },1 },
					{},
					{"Target2View",{ 0.060,0.075 },1 },
					{"Target2View",{ 0.050,0.075 },1 },
					{},
					{"Target2View",{ 0.045,0.075 },1 },
					{"Target2View",{ 0.035,0.075 },1 },
					{},
					{"Target2View",{ 0.030,0.075 },1 },
					{"Target2View",{ 0.020,0.075 },1 },
					{},
					{"Target2View",{ 0.015,0.075 },1 },
					{"Target2View",{ 0.005,0.075 },1 },
					{},
					// Derecha
					{"Target2View",{ 0.075,-0.075 },1 },
					{"Target2View",{ 0.075,-0.065 },1 },
					{},
					{"Target2View",{ 0.075,-0.060 },1 },
					{"Target2View",{ 0.075,-0.050 },1 },
					{},
					{"Target2View",{ 0.075,-0.045 },1 },
					{"Target2View",{ 0.075,-0.035 },1 },
					{},
					{"Target2View",{ 0.075,-0.030 },1 },
					{"Target2View",{ 0.075,-0.020 },1 },
					{},
					{"Target2View",{ 0.075,-0.015 },1 },
					{"Target2View",{ 0.075,-0.005 },1 },
					{},
					{"Target2View",{ 0.075,0.075 },1 },
					{"Target2View",{ 0.075,0.065 },1 },
					{},
					{"Target2View",{ 0.075,0.060 },1 },
					{"Target2View",{ 0.075,0.050 },1 },
					{},
					{"Target2View",{ 0.075,0.045 },1 },
					{"Target2View",{ 0.075,0.035 },1 },
					{},
					{"Target2View",{ 0.075,0.030 },1 },
					{"Target2View",{ 0.075,0.020 },1 },
					{},
					{"Target2View",{ 0.075,0.015 },1 },
					{"Target2View",{ 0.075,0.005 },1 },
					{},
					// Izquierda
					{"Target2View",{ -0.075,-0.075 },1 },
					{"Target2View",{ -0.075,-0.065 },1 },
					{},
					{"Target2View",{ -0.075,-0.060 },1 },
					{"Target2View",{ -0.075,-0.050 },1 },
					{},
					{"Target2View",{ -0.075,-0.045 },1 },
					{"Target2View",{ -0.075,-0.035 },1 },
					{},
					{"Target2View",{ -0.075,-0.030 },1 },
					{"Target2View",{ -0.075,-0.020 },1 },
					{},
					{"Target2View",{ -0.075,-0.015 },1 },
					{"Target2View",{ -0.075,-0.005 },1 },
					{},
					{"Target2View",{ -0.075,0.075 },1 },
					{"Target2View",{ -0.075,0.065 },1 },
					{},
					{"Target2View",{ -0.075,0.060 },1 },
					{"Target2View",{ -0.075,0.050 },1 },
					{},
					{"Target2View",{ -0.075,0.045 },1 },
					{"Target2View",{ -0.075,0.035 },1 },
					{},
					{"Target2View",{ -0.075,0.030 },1 },
					{"Target2View",{ -0.075,0.020 },1 },
					{},
					{"Target2View",{ -0.075,0.015 },1 },
					{"Target2View",{ -0.075,0.005 },1 }
				};
			};
		};
		class TargetACQ_AAM
		{
			condition = "AAmissile-missilelocked";
			type="group";
			class Circle
			{
				type = "line";
				width = 2.5;
				points[] = 
				{
					{ "Target2View",1,{ "0 / 8.333","-0.248559 / 8.333" },1 },
					{ "Target2View",1,{ "0.0434 / 8.333","-0.244781 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 8.333","-0.215252 / 8.333" },1 },
					{ "Target2View",1,{ "0.1607 / 8.333","-0.190396 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 8.333","-0.12428 / 8.333" },1 },
					{ "Target2View",1,{ "0.234925 / 8.333","-0.0850072 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0.25 / 8.333","0 / 8.333" },1 },
					{ "Target2View",1,{ "0.2462 / 8.333","0.0431499 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 8.333","0.12428 / 8.333" },1 },
					{ "Target2View",1,{ "0.1915 / 8.333","0.159774 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 8.333","0.215252 / 8.333" },1 },
					{ "Target2View",1,{ "0.0855 / 8.333","0.233571 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0 / 8.333","0.248559 / 8.333" },1 },
					{ "Target2View",1,{ "-0.0434 / 8.333","0.244781 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 8.333","0.215252 / 8.333" },1 },
					{ "Target2View",1,{ "-0.1607 / 8.333","0.190396 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 8.333","0.12428 / 8.333" },1 },
					{ "Target2View",1,{ "-0.234925 / 8.333","0.0850072 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "-0.25 / 8.333","0 / 8.333" },1 },
					{ "Target2View",1,{ "-0.2462 / 8.333","-0.0431499 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 8.333","-0.12428 / 8.333" },1 },
					{ "Target2View",1,{ "-0.1915 / 8.333","-0.159774 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 8.333","-0.215252 / 8.333" },1 },
					{ "Target2View",1,{ "-0.0855 / 8.333","-0.233571 / 8.333" },1 },
					{},
					{ "Target2View",1,{ "0 / 4.167","-0.248559 / 4.167" },1 },
					{ "Target2View",1,{ "0.0434 / 4.167","-0.244781 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 4.167","-0.215252 / 4.167" },1 },
					{ "Target2View",1,{ "0.1607 / 4.167","-0.190396 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 4.167","-0.12428 / 4.167" },1 },
					{ "Target2View",1,{ "0.234925 / 4.167","-0.0850072 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "0.25 / 4.167","0 / 4.167" },1 },
					{ "Target2View",1,{ "0.2462 / 4.167","0.0431499 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 4.167","0.12428 / 4.167" },1 },
					{ "Target2View",1,{ "0.1915 / 4.167","0.159774 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 4.167","0.215252 / 4.167" },1 },
					{ "Target2View",1,{ "0.0855 / 4.167","0.233571 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "0 / 4.167","0.248559 / 4.167" },1 },
					{ "Target2View",1,{ "-0.0434 / 4.167","0.244781 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 4.167","0.215252 / 4.167" },1 },
					{ "Target2View",1,{ "-0.1607 / 4.167","0.190396 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 4.167","0.12428 / 4.167" },1 },
					{ "Target2View",1,{ "-0.234925 / 4.167","0.0850072 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "-0.25 / 4.167","0 / 4.167" },1 },
					{ "Target2View",1,{ "-0.2462 / 4.167","-0.0431499 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 4.167","-0.12428 / 4.167" },1 },
					{ "Target2View",1,{ "-0.1915 / 4.167","-0.159774 / 4.167" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 4.167","-0.215252 / 4.167" },1 },
					{ "Target2View",1,{ "-0.0855 / 4.167","-0.233571 / 4.167" },1 }
				};
			};
		};
		class AAM_Lock
		{
			condition = "(missilelocked*AAmissile)";
			type="group";
			class LockCircle
			{
				type = "line";
				width = 2.5;
				points[] = 
				{
					{"Target2View",{ "0 / 8.333","-0.248559 / 8.333" },1 },
					{"Target2View",{ "0.0434 / 8.333","-0.244781 / 8.333" },1 },
					{"Target2View",{ "0.0855 / 8.333","-0.233571 / 8.333" },1 },
					{"Target2View",{ "0.125 / 8.333","-0.215252 / 8.333" },1 },
					{"Target2View",{ "0.1607 / 8.333","-0.190396 / 8.333" },1 },
					{"Target2View",{ "0.1915 / 8.333","-0.159774 / 8.333" },1 },
					{"Target2View",{ "0.2165 / 8.333","-0.12428 / 8.333" },1 },
					{"Target2View",{ "0.234925 / 8.333","-0.0850072 / 8.333" },1 },
					{"Target2View",{ "0.2462 / 8.333","-0.0431499 / 8.333" },1 },
					{"Target2View",{ "0.25 / 8.333","0 / 8.333" },1 },
					{"Target2View",{ "0.2462 / 8.333","0.0431499 / 8.333" },1 },
					{"Target2View",{ "0.234925 / 8.333","0.0850072 / 8.333" },1 },
					{"Target2View",{ "0.2165 / 8.333","0.12428 / 8.333" },1 },
					{"Target2View",{ "0.1915 / 8.333","0.159774 / 8.333" },1 },
					{"Target2View",{ "0.1607 / 8.333","0.190396 / 8.333" },1 },
					{"Target2View",{ "0.125 / 8.333","0.215252 / 8.333" },1 },
					{"Target2View",{ "0.0855 / 8.333","0.233571 / 8.333" },1 },
					{"Target2View",{ "0.0434 / 8.333","0.244781 / 8.333" },1 },
					{"Target2View",{ "0 / 8.333","0.248559 / 8.333" },1 },
					{"Target2View",{ "-0.0434 / 8.333","0.244781 / 8.333" },1 },
					{"Target2View",{ "-0.0855 / 8.333","0.233571 / 8.333" },1 },
					{"Target2View",{ "-0.125 / 8.333","0.215252 / 8.333" },1 },
					{"Target2View",{ "-0.1607 / 8.333","0.190396 / 8.333" },1 },
					{"Target2View",{ "-0.1915 / 8.333","0.159774 / 8.333" },1 },
					{"Target2View",{ "-0.2165 / 8.333","0.12428 / 8.333" },1 },
					{"Target2View",{ "-0.234925 / 8.333","0.0850072 / 8.333" },1 },
					{"Target2View",{ "-0.2462 / 8.333","0.0431499 / 8.333" },1 },
					{"Target2View",{ "-0.25 / 8.333","0 / 8.333" },1 },
					{"Target2View",{ "-0.2462 / 8.333","-0.0431499 / 8.333" },1 },
					{"Target2View",{ "-0.234925 / 8.333","-0.0850072 / 8.333" },1 },
					{"Target2View",{ "-0.2165 / 8.333","-0.12428 / 8.333" },1 },
					{"Target2View",{ "-0.1915 / 8.333","-0.159774 / 8.333" },1 },
					{"Target2View",{ "-0.1607 / 8.333","-0.190396 / 8.333" },1 },
					{"Target2View",{ "-0.125 / 8.333","-0.215252 / 8.333" },1 },
					{"Target2View",{ "-0.0855 / 8.333","-0.233571 / 8.333" },1 },
					{"Target2View",{ "-0.0434 / 8.333","-0.244781 / 8.333" },1 },
					{"Target2View",{ "0 / 8.333","-0.248559 / 8.333" },1 },
					{ },
					{"Target2View",{ "0 / 4.167","-0.248559 / 4.167" },1 },
					{"Target2View",{ "0.0434 / 4.167","-0.244781 / 4.167" },1 },
					{"Target2View",{ "0.0855 / 4.167","-0.233571 / 4.167" },1 },
					{"Target2View",{ "0.125 / 4.167","-0.215252 / 4.167" },1 },
					{"Target2View",{ "0.1607 / 4.167","-0.190396 / 4.167" },1 },
					{"Target2View",{ "0.1915 / 4.167","-0.159774 / 4.167" },1 },
					{"Target2View",{ "0.2165 / 4.167","-0.12428 / 4.167" },1 },
					{"Target2View",{ "0.234925 / 4.167","-0.0850072 / 4.167" },1 },
					{"Target2View",{ "0.2462 / 4.167","-0.0431499 / 4.167" },1 },
					{"Target2View",{ "0.25 / 4.167","0 / 4.167" },1 },
					{"Target2View",{ "0.2462 / 4.167","0.0431499 / 4.167" },1 },
					{"Target2View",{ "0.234925 / 4.167","0.0850072 / 4.167" },1 },
					{"Target2View",{ "0.2165 / 4.167","0.12428 / 4.167" },1 },
					{"Target2View",{ "0.1915 / 4.167","0.159774 / 4.167" },1 },
					{"Target2View",{ "0.1607 / 4.167","0.190396 / 4.167" },1 },
					{"Target2View",{ "0.125 / 4.167","0.215252 / 4.167" },1 },
					{"Target2View",{ "0.0855 / 4.167","0.233571 / 4.167" },1 },
					{"Target2View",{ "0.0434 / 4.167","0.244781 / 4.167" },1 },
					{"Target2View",{ "0 / 4.167","0.248559 / 4.167" },1 },
					{"Target2View",{ "-0.0434 / 4.167","0.244781 / 4.167" },1 },
					{"Target2View",{ "-0.0855 / 4.167","0.233571 / 4.167" },1 },
					{"Target2View",{ "-0.125 / 4.167","0.215252 / 4.167" },1 },
					{"Target2View",{ "-0.1607 / 4.167","0.190396 / 4.167" },1 },
					{"Target2View",{ "-0.1915 / 4.167","0.159774 / 4.167" },1 },
					{"Target2View",{ "-0.2165 / 4.167","0.12428 / 4.167" },1 },
					{"Target2View",{ "-0.234925 / 4.167","0.0850072 / 4.167" },1 },
					{"Target2View",{ "-0.2462 / 4.167","0.0431499 / 4.167" },1 },
					{"Target2View",{ "-0.25 / 4.167","0 / 4.167" },1 },
					{"Target2View",{ "-0.2462 / 4.167","-0.0431499 / 4.167" },1 },
					{"Target2View",{ "-0.234925 / 4.167","-0.0850072 / 4.167" },1 },
					{"Target2View",{ "-0.2165 / 4.167","-0.12428 / 4.167" },1 },
					{"Target2View",{ "-0.1915 / 4.167","-0.159774 / 4.167" },1 },
					{"Target2View",{ "-0.1607 / 4.167","-0.190396 / 4.167" },1 },
					{"Target2View",{ "-0.125 / 4.167","-0.215252 / 4.167" },1 },
					{"Target2View",{ "-0.0855 / 4.167","-0.233571 / 4.167" },1 },
					{"Target2View",{ "-0.0434 / 4.167","-0.244781 / 4.167" },1 },
					{"Target2View",{ "0 / 4.167","-0.248559 / 4.167" },1 }
				};
			};
		};
		class AGM_Lock
		{
			condition = "(missilelocked*ATmissile)";
			type="group";
			class LockBox
			{
				type = "line";
				width = 2.0;
				points[] = 
				{
					{"Target2View",{ -0.075,-0.075 },1 },
					{"Target2View",{ 0.075,-0.075 },1 },
					{"Target2View",{ 0.075,0.075 },1 },
					{"Target2View",{ -0.075,0.075 },1 },
					{"Target2View",{ -0.075,-0.075 },1 }
				};
			};
		};
	};
};
class Kimi_HMD_RKT_P
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={-1};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
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
		};
	};
};
class Kimi_HMD_RKT_C
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={0};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
		condition="on*user0";
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
		};
	};
};