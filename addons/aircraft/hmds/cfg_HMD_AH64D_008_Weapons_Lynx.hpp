/*class Kimi_HMD_Weapons_Lynx
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={};
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
			condition="1-mgun";
			class CPG_X
			{
				type = "line";
				width = 6.0;
				points[] = 
				{
					{"WeaponAimToView",{ 0,-0.015 },1 },
					{"WeaponAimToView",{ 0,-0.030 },1 },
					{},
					{"WeaponAimToView",{ 0,-0.0325 },1 },
					{"WeaponAimToView",{ 0,-0.0475 },1 },
					{},
					{"WeaponAimToView",{ 0,0.015 },1 },
					{"WeaponAimToView",{ 0,0.030 },1 },
					{},
					{"WeaponAimToView",{ 0,0.0325 },1 },
					{"WeaponAimToView",{ 0,0.0475 },1 },
					{},
					{"WeaponAimToView",{ -0.015,0 },1 },
					{"WeaponAimToView",{ -0.030,0 },1 },
					{},
					{"WeaponAimToView",{ -0.0325,0 },1 },
					{"WeaponAimToView",{ -0.0475,0 },1 },
					{},
					{"WeaponAimToView",{ 0.015,0 },1 },
					{"WeaponAimToView",{ 0.030,0 },1 },
					{},
					{"WeaponAimToView",{ 0.0325,0 },1 },
					{"WeaponAimToView",{ 0.0475,0 },1 }
				};
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
		class TargetACQ_AGM
		{
			condition="ATmissile";
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
			condition = "AAmissile";
			type="group";
			class Circle
			{
				type = "line";
				width = 2.5;
				points[] = 
				{
					{ "Target2View",1,{ "0 / 4","-0.248559 / 4" },1 },
					{ "Target2View",1,{ "0.0434 / 4","-0.244781 / 4" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 4","-0.215252 / 4" },1 },
					{ "Target2View",1,{ "0.1607 / 4","-0.190396 / 4" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 4","-0.12428 / 4" },1 },
					{ "Target2View",1,{ "0.234925 / 4","-0.0850072 / 4" },1 },
					{},
					{ "Target2View",1,{ "0.25 / 4","0 / 4" },1 },
					{ "Target2View",1,{ "0.2462 / 4","0.0431499 / 4" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 4","0.12428 / 4" },1 },
					{ "Target2View",1,{ "0.1915 / 4","0.159774 / 4" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 4","0.215252 / 4" },1 },
					{ "Target2View",1,{ "0.0855 / 4","0.233571 / 4" },1 },
					{},
					{ "Target2View",1,{ "0 / 4","0.248559 / 4" },1 },
					{ "Target2View",1,{ "-0.0434 / 4","0.244781 / 4" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 4","0.215252 / 4" },1 },
					{ "Target2View",1,{ "-0.1607 / 4","0.190396 / 4" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 4","0.12428 / 4" },1 },
					{ "Target2View",1,{ "-0.234925 / 4","0.0850072 / 4" },1 },
					{},
					{ "Target2View",1,{ "-0.25 / 4","0 / 4" },1 },
					{ "Target2View",1,{ "-0.2462 / 4","-0.0431499 / 4" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 4","-0.12428 / 4" },1 },
					{ "Target2View",1,{ "-0.1915 / 4","-0.159774 / 4" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 4","-0.215252 / 4" },1 },
					{ "Target2View",1,{ "-0.0855 / 4","-0.233571 / 4" },1 },
					{},
					{ "Target2View",1,{ "0 / 2","-0.248559 / 2" },1 },
					{ "Target2View",1,{ "0.0434 / 2","-0.244781 / 2" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 2","-0.215252 / 2" },1 },
					{ "Target2View",1,{ "0.1607 / 2","-0.190396 / 2" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 2","-0.12428 / 2" },1 },
					{ "Target2View",1,{ "0.234925 / 2","-0.0850072 / 2" },1 },
					{},
					{ "Target2View",1,{ "0.25 / 2","0 / 2" },1 },
					{ "Target2View",1,{ "0.2462 / 2","0.0431499 / 2" },1 },
					{},
					{ "Target2View",1,{ "0.2165 / 2","0.12428 / 2" },1 },
					{ "Target2View",1,{ "0.1915 / 2","0.159774 / 2" },1 },
					{},
					{ "Target2View",1,{ "0.125 / 2","0.215252 / 2" },1 },
					{ "Target2View",1,{ "0.0855 / 2","0.233571 / 2" },1 },
					{},
					{ "Target2View",1,{ "0 / 2","0.248559 / 2" },1 },
					{ "Target2View",1,{ "-0.0434 / 2","0.244781 / 2" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 2","0.215252 / 2" },1 },
					{ "Target2View",1,{ "-0.1607 / 2","0.190396 / 2" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 2","0.12428 / 2" },1 },
					{ "Target2View",1,{ "-0.234925 / 2","0.0850072 / 2" },1 },
					{},
					{ "Target2View",1,{ "-0.25 / 2","0 / 2" },1 },
					{ "Target2View",1,{ "-0.2462 / 2","-0.0431499 / 2" },1 },
					{},
					{ "Target2View",1,{ "-0.2165 / 2","-0.12428 / 2" },1 },
					{ "Target2View",1,{ "-0.1915 / 2","-0.159774 / 2" },1 },
					{},
					{ "Target2View",1,{ "-0.125 / 2","-0.215252 / 2" },1 },
					{ "Target2View",1,{ "-0.0855 / 2","-0.233571 / 2" },1 }
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
					{"Target2View",{ "0 / 4","-0.248559 / 4" },1 },
					{"Target2View",{ "0.0434 / 4","-0.244781 / 4" },1 },
					{"Target2View",{ "0.0855 / 4","-0.233571 / 4" },1 },
					{"Target2View",{ "0.125 / 4","-0.215252 / 4" },1 },
					{"Target2View",{ "0.1607 / 4","-0.190396 / 4" },1 },
					{"Target2View",{ "0.1915 / 4","-0.159774 / 4" },1 },
					{"Target2View",{ "0.2165 / 4","-0.12428 / 4" },1 },
					{"Target2View",{ "0.234925 / 4","-0.0850072 / 4" },1 },
					{"Target2View",{ "0.2462 / 4","-0.0431499 / 4" },1 },
					{"Target2View",{ "0.25 / 4","0 / 4" },1 },
					{"Target2View",{ "0.2462 / 4","0.0431499 / 4" },1 },
					{"Target2View",{ "0.234925 / 4","0.0850072 / 4" },1 },
					{"Target2View",{ "0.2165 / 4","0.12428 / 4" },1 },
					{"Target2View",{ "0.1915 / 4","0.159774 / 4" },1 },
					{"Target2View",{ "0.1607 / 4","0.190396 / 4" },1 },
					{"Target2View",{ "0.125 / 4","0.215252 / 4" },1 },
					{"Target2View",{ "0.0855 / 4","0.233571 / 4" },1 },
					{"Target2View",{ "0.0434 / 4","0.244781 / 4" },1 },
					{"Target2View",{ "0 / 4","0.248559 / 4" },1 },
					{"Target2View",{ "-0.0434 / 4","0.244781 / 4" },1 },
					{"Target2View",{ "-0.0855 / 4","0.233571 / 4" },1 },
					{"Target2View",{ "-0.125 / 4","0.215252 / 4" },1 },
					{"Target2View",{ "-0.1607 / 4","0.190396 / 4" },1 },
					{"Target2View",{ "-0.1915 / 4","0.159774 / 4" },1 },
					{"Target2View",{ "-0.2165 / 4","0.12428 / 4" },1 },
					{"Target2View",{ "-0.234925 / 4","0.0850072 / 4" },1 },
					{"Target2View",{ "-0.2462 / 4","0.0431499 / 4" },1 },
					{"Target2View",{ "-0.25 / 4","0 / 4" },1 },
					{"Target2View",{ "-0.2462 / 4","-0.0431499 / 4" },1 },
					{"Target2View",{ "-0.234925 / 4","-0.0850072 / 4" },1 },
					{"Target2View",{ "-0.2165 / 4","-0.12428 / 4" },1 },
					{"Target2View",{ "-0.1915 / 4","-0.159774 / 4" },1 },
					{"Target2View",{ "-0.1607 / 4","-0.190396 / 4" },1 },
					{"Target2View",{ "-0.125 / 4","-0.215252 / 4" },1 },
					{"Target2View",{ "-0.0855 / 4","-0.233571 / 4" },1 },
					{"Target2View",{ "-0.0434 / 4","-0.244781 / 4" },1 },
					{"Target2View",{ "0 / 4","-0.248559 / 4" },1 },
					{ },
					{"Target2View",{ "0 / 2","-0.248559 / 2" },1 },
					{"Target2View",{ "0.0434 / 2","-0.244781 / 2" },1 },
					{"Target2View",{ "0.0855 / 2","-0.233571 / 2" },1 },
					{"Target2View",{ "0.125 / 2","-0.215252 / 2" },1 },
					{"Target2View",{ "0.1607 / 2","-0.190396 / 2" },1 },
					{"Target2View",{ "0.1915 / 2","-0.159774 / 2" },1 },
					{"Target2View",{ "0.2165 / 2","-0.12428 / 2" },1 },
					{"Target2View",{ "0.234925 / 2","-0.0850072 / 2" },1 },
					{"Target2View",{ "0.2462 / 2","-0.0431499 / 2" },1 },
					{"Target2View",{ "0.25 / 2","0 / 2" },1 },
					{"Target2View",{ "0.2462 / 2","0.0431499 / 2" },1 },
					{"Target2View",{ "0.234925 / 2","0.0850072 / 2" },1 },
					{"Target2View",{ "0.2165 / 2","0.12428 / 2" },1 },
					{"Target2View",{ "0.1915 / 2","0.159774 / 2" },1 },
					{"Target2View",{ "0.1607 / 2","0.190396 / 2" },1 },
					{"Target2View",{ "0.125 / 2","0.215252 / 2" },1 },
					{"Target2View",{ "0.0855 / 2","0.233571 / 2" },1 },
					{"Target2View",{ "0.0434 / 2","0.244781 / 2" },1 },
					{"Target2View",{ "0 / 2","0.248559 / 2" },1 },
					{"Target2View",{ "-0.0434 / 2","0.244781 / 2" },1 },
					{"Target2View",{ "-0.0855 / 2","0.233571 / 2" },1 },
					{"Target2View",{ "-0.125 / 2","0.215252 / 2" },1 },
					{"Target2View",{ "-0.1607 / 2","0.190396 / 2" },1 },
					{"Target2View",{ "-0.1915 / 2","0.159774 / 2" },1 },
					{"Target2View",{ "-0.2165 / 2","0.12428 / 2" },1 },
					{"Target2View",{ "-0.234925 / 2","0.0850072 / 2" },1 },
					{"Target2View",{ "-0.2462 / 2","0.0431499 / 2" },1 },
					{"Target2View",{ "-0.25 / 2","0 / 2" },1 },
					{"Target2View",{ "-0.2462 / 2","-0.0431499 / 2" },1 },
					{"Target2View",{ "-0.234925 / 2","-0.0850072 / 2" },1 },
					{"Target2View",{ "-0.2165 / 2","-0.12428 / 2" },1 },
					{"Target2View",{ "-0.1915 / 2","-0.159774 / 2" },1 },
					{"Target2View",{ "-0.1607 / 2","-0.190396 / 2" },1 },
					{"Target2View",{ "-0.125 / 2","-0.215252 / 2" },1 },
					{"Target2View",{ "-0.0855 / 2","-0.233571 / 2" },1 },
					{"Target2View",{ "-0.0434 / 2","-0.244781 / 2" },1 },
					{"Target2View",{ "0 / 2","-0.248559 / 2" },1 }
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
};*/
class Kimi_HMD_Weapons_Lynx_P
{
	#include "cfg_HMD_AH64D_011_Parameters.hpp"
	#include "cfg_HMD_AH64D_012_Bones.hpp"
	turret[]={-1};
	class Draw
	{
		#include "cfg_HMD_AH64D_013_Color.hpp"
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
	};
};
/*class Kimi_HMD_RKT_Lynx_C
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
					{ "CCIP_2_VIEW",1,{ 0,0.030 },1 },
					{},
					{ "CCIP_2_VIEW",1,{ 0.022,0.030 },1 },
					{ "CCIP_2_VIEW",1,{ -0.022,0.030 },1 }
				};
			};
		};
	};
};*/