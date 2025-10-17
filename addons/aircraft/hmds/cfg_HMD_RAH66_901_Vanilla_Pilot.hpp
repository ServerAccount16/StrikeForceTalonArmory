class AirplaneHUD
{
	topLeft = "HUD_top_left";
	topRight = "HUD_top_right";
	bottomLeft = "HUD_bottom_left";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1.0,1.0,1.0,1.0};
	helmetMountedDisplay = 1;
	helmetPosition[] = {-0.0375,0.0375,0.1};
	helmetRight[] = {0.075,0.0,0.0};
	helmetDown[] = {0.0,-0.075,0.0};
	font = "LucidaConsoleB";
	turret[] = {-2};
	class Bones{};
	class Draw{};
};
class HMD_CMPilot: AirplaneHUD
{
	turret[] = {-1};
	class Draw{};
};
//delete AirplaneHUD
//delete HMD_CMPilot
class MFD_Pilot_1
{
	topLeft = "MFD_1_TL";
	topRight = "MFD_1_TR";
	bottomLeft = "MFD_1_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1.0,1.0,1.0,1.0};
	helmetMountedDisplay = 0;
	helmetPosition[] = {-0.0375,0.0375,0.1};
	helmetRight[] = {0.075,0.0,0.0};
	helmetDown[] = {0.0,-0.075,0.0};
	font = "LucidaConsoleB";
	turret[] = {0};
	class Bones{};
	class Draw
	{
		alpha = 1.0;
		color[] = {0.25,1.0,0.25};
		condition = "on";
		class ReticleGroup
		{
			color[] = {1.0,1.0,1.0};
			class Reticle
			{
				type = "line";
				width = 4.0;
				points[] = {{{0.501429,0.492766},1},{{0.505,0.492766},1},{{0.505,0.497802},1},{{0.501429,0.497802},1},{{0.501429,0.492766},1},{},{{0.509286,0.495788},1},{{0.587143,0.495788},1},{},{{0.502857,0.502839},1},{{0.502857,0.597528},1},{},{{0.498571,0.495788},1},{{0.42,0.495788},1},{},{{0.502857,0.394048},1},{{0.502857,0.486722},1},{},{{0.62,0.339652},1},{{0.652857,0.339652},1},{{0.652857,0.382967},1},{},{{0.652857,0.615659},1},{{0.652857,0.659982},1},{{0.620714,0.659982},1},{},{{0.384286,0.659982},1},{{0.351429,0.659982},1},{{0.351429,0.615659},1},{},{{0.384286,0.339652},1},{{0.351429,0.339652},1},{{0.351429,0.382967},1}};
			};
			class ModeText
			{
				type = "text";
				source = "static";
				text = "Mode: TI WHOT";
				scale = 1;
				sourceScale = 1;
				align = "right";
				pos[] = {{0.04,0.32},1};
				right[] = {{0.07,0.32},1};
				down[] = {{0.04,0.345},1};
			};
			class RangeText
			{
				type = "text";
				source = "static";
				text = "Range:";
				scale = 1;
				sourceScale = 1;
				align = "right";
				pos[] = {{0.33,0.81},1};
				right[] = {{0.37,0.81},1};
				down[] = {{0.33,0.845},1};
			};
			class Fuel
			{
				type = "text";
				source = "impactDistance";
				sourceScale = 1;
				sourceLength = 4;
				align = "right";
				scale = 1;
				pos[] = {{0.48,0.81},1};
				right[] = {{0.52,0.81},1};
				down[] = {{0.48,0.845},1};
			};
		};
	};
};
class MFD_Pilot_2
{
	topLeft = "MFD_2_TL";
	topRight = "MFD_2_TR";
	bottomLeft = "MFD_2_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1.0,1.0,1.0,1.0};
	helmetMountedDisplay = 0;
	helmetPosition[] = {-0.0375,0.0375,0.1};
	helmetRight[] = {0.075,0.0,0.0};
	helmetDown[] = {0.0,-0.075,0.0};
	font = "LucidaConsoleB";
	turret[] = {-2};
	class Bones{};
	class Draw
	{
		alpha = 1.0;
		color[] = {0,0.12,0};
		condition = "on";
		class Time
		{
			type = "text";
			source = "time";
			text = "%X";
			sourceScale = 1;
			align = "right";
			scale = 1;
			pos[] = {{0.03,0.11},1};
			right[] = {{0.13,0.11},1};
			down[] = {{0.03,0.2},1};
		};
		class Fuel
		{
			type = "text";
			source = "fuel";
			text = "%X";
			sourceScale = 2517;
			sourceLength = 4;
			align = "right";
			scale = 1;
			pos[] = {{0.03,0.31},1};
			right[] = {{0.13,0.31},1};
			down[] = {{0.03,0.4},1};
		};
		class LBSText
		{
			type = "text";
			source = "static";
			text = "LBS";
			scale = 1;
			sourceScale = 1;
			align = "right";
			pos[] = {{0.3,0.31},1};
			right[] = {{0.4,0.31},1};
			down[] = {{0.3,0.4},1};
		};
		class GridX
		{
			type = "text";
			source = "coordinateX";
			sourceScale = 0.01;
			sourceOffset = -0.5;
			sourceLength = 3;
			align = "right";
			scale = 1;
			pos[] = {{0.03,0.61},1};
			right[] = {{0.13,0.61},1};
			down[] = {{0.03,0.7},1};
		};
		class GridY: GridX
		{
			source = "coordinateY";
			pos[] = {{0.24,0.61},1};
			right[] = {{0.34,0.61},1};
			down[] = {{0.24,0.7},1};
		};
		class GridText
		{
			type = "text";
			source = "static";
			text = "GRID:";
			scale = 1;
			sourceScale = 1;
			align = "right";
			pos[] = {{0.03,0.51},1};
			right[] = {{0.13,0.51},1};
			down[] = {{0.03,0.6},1};
		};
	};
};
class MFD_Pilot_3
{
	topLeft = "MFD_3_TL";
	topRight = "MFD_3_TR";
	bottomLeft = "MFD_3_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1.0,1.0,1.0,1.0};
	helmetMountedDisplay = 0;
	helmetPosition[] = {-0.0375,0.0375,0.1};
	helmetRight[] = {0.075,0.0,0.0};
	helmetDown[] = {0.0,-0.075,0.0};
	font = "LucidaConsoleB";
	turret[] = {-2};
	class Bones{};
	class Draw
	{
		alpha = 1.0;
		color[] = {0,0.12,0};
		condition = "on";
		class CollectiveGroup
		{
			condition = "simulRTD";
			class CollectiveText
			{
				type = "text";
				source = "static";
				text = "%";
				align = "right";
				scale = 1;
				pos[] = {{0.22,0.2},1};
				right[] = {{0.28,0.2},1};
				down[] = {{0.22,0.24},1};
			};
			class CollectiveNumber
			{
				type = "text";
				source = "rtdCollective";
				sourceScale = 100;
				align = "left";
				scale = 1;
				pos[] = {{0.22,0.2},1};
				right[] = {{0.28,0.2},1};
				down[] = {{0.22,0.24},1};
			};
		};
		class SpeedNumber
		{
			type = "text";
			source = "speed";
			sourceScale = 3.6;
			align = "left";
			scale = 1;
			pos[] = {{0.28,0.452},1};
			right[] = {{0.32,0.452},1};
			down[] = {{0.28,0.492},1};
		};
		class AltNumber
		{
			type = "text";
			source = "altitudeAGL";
			sourceScale = 1;
			sourceOffset = -2;
			align = "left";
			scale = 1;
			pos[] = {{0.75,0.452},1};
			right[] = {{0.79,0.452},1};
			down[] = {{0.75,0.492},1};
		};
		class CruiseMode
		{
			condition = "1+((altitudeASL-27) min 1) - autohover";
			class AltNumberASL
			{
				type = "text";
				source = "altitudeASL";
				sourceScale = 1;
				align = "left";
				scale = 1;
				pos[] = {{0.81,0.16},1};
				right[] = {{0.85,0.16},1};
				down[] = {{0.81,0.2},1};
			};
		};
	};
};
class MFD_Pilot_5: MFD_Pilot_1
{
	topLeft = "MFD_5_TL";
	topRight = "MFD_5_TR";
	bottomLeft = "MFD_5_BL";
	turret[] = {0};
	class Draw
	{
		color[] = {0,0.12,0};
		condition = "on";
		class BlackBackgroundGroup
		{
			color[] = {0.0,0.0,0.0};
			class BlackBackground
			{
				type = "polygon";
				points[] = {{{{0,0.1},1},{{1,0.1},1},{{1,1},1},{{0,1},1}}};
			};
		};
		class ReticleGroup
		{
			color[] = {0,0.12,0};
			class Reticle
			{
				type = "line";
				width = 4.0;
				points[] = {{{0.43,0.490598},1},{{0.164,0.490598},1},{{0.164,0.490598},1},{{0.164,0.630171},1},{{0.164,0.630171},1},{{0.438,0.630171},1},{{0.438,0.630171},1},{{0.438,0.732393},1},{{0.622,0.732393},1},{{0.622,0.630171},1},{{0.622,0.630171},1},{{0.898,0.630171},1},{{0.898,0.630171},1},{{0.898,0.490598},1},{{0.63,0.490598},1},{{0.63,0.490598},1},{{0.616,0.482735},1},{{0.616,0.297949},1},{{0.592,0.297949},1},{{0.558,0.286154},1},{{0.558,0.272393},1},{{0.5,0.272393},1},{{0.5,0.286154},1},{{0.468,0.297949},1},{{0.446,0.297949},1},{{0.446,0.482735},1},{{0.43,0.490598},1},{},{{0.46,0.6},1},{{0.6,0.6},1},{{0.6,0.72},1},{{0.46,0.72},1},{{0.46,0.6},1},{},{{0.04,0.8},1},{{0.24,0.8},1},{{0.24,0.86},1},{{0.04,0.86},1},{{0.04,0.8},1},{},{{-0.06,0.83},1},{{0.04,0.83},1},{},{{0.04,0.93},1},{{0.24,0.93},1},{{0.24,0.99},1},{{0.04,0.99},1},{{0.04,0.93},1},{},{{-0.06,0.96},1},{{0.04,0.96},1},{},{{0.27,0.86},1},{{0.83,0.86},1},{{0.83,0.98},1},{{0.27,0.98},1},{{0.27,0.86},1},{},{{0.23,0.18},1},{{0.37,0.18},1},{{0.37,0.26},1},{{0.23,0.26},1},{{0.23,0.18},1},{},{{0.7,0.18},1},{{0.84,0.18},1},{{0.84,0.26},1},{{0.7,0.26},1},{{0.7,0.18},1},{},{{0.24,0.29},1},{{0.36,0.29},1},{{0.36,0.37},1},{{0.24,0.37},1},{{0.24,0.29},1},{},{{0.71,0.29},1},{{0.83,0.29},1},{{0.83,0.37},1},{{0.71,0.37},1},{{0.71,0.29},1}};
			};
			class SightSelect1
			{
				type = "text";
				source = "static";
				text = "SIGHT";
				scale = 1;
				sourceScale = 1;
				align = "right";
				pos[] = {{"0.53-0.29",0.187},1};
				right[] = {{0.28,0.187},1};
				down[] = {{"0.53-0.29",0.222},1};
			};
			class SightSelect2
			{
				type = "text";
				source = "static";
				text = "FCR";
				scale = 1;
				sourceScale = 1;
				align = "right";
				pos[] = {{"0.53-0.29",0.227},1};
				right[] = {{0.28,0.227},1};
				down[] = {{"0.53-0.29",0.262},1};
			};
			class AcqSelect1
			{
				type = "text";
				source = "static";
				text = "ACQ";
				scale = 1;
				sourceScale = 1;
				align = "left";
				pos[] = {{"0.53+0.29",0.187},1};
				right[] = {{0.86,0.187},1};
				down[] = {{"0.53+0.29",0.222},1};
			};
			class AcqSelect2
			{
				type = "text";
				source = "static";
				text = "FCR";
				scale = 1;
				sourceScale = 1;
				align = "left";
				pos[] = {{"0.53+0.29",0.227},1};
				right[] = {{0.86,0.227},1};
				down[] = {{"0.53+0.29",0.262},1};
			};
			class LSTSelect1
			{
				type = "text";
				source = "static";
				text = "LST";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53-0.23",0.297},1};
				right[] = {{0.34,0.297},1};
				down[] = {{"0.53-0.23",0.332},1};
			};
			class LSTSelect2
			{
				type = "text";
				source = "static";
				text = "A";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53-0.23",0.337},1};
				right[] = {{0.34,0.337},1};
				down[] = {{"0.53-0.23",0.372},1};
			};
			class LRFDSelect1
			{
				type = "text";
				source = "static";
				text = "LRFD";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53+0.24",0.297},1};
				right[] = {{0.81,0.297},1};
				down[] = {{"0.53+0.24",0.332},1};
			};
			class LRFDSelect2
			{
				type = "text";
				source = "static";
				text = "B";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53+0.24",0.337},1};
				right[] = {{0.81,0.337},1};
				down[] = {{"0.53+0.24",0.372},1};
			};
			class PilotText
			{
				type = "text";
				source = "static";
				text = "PILOT";
				scale = 1;
				sourceScale = 1;
				align = "right";
				pos[] = {{"0.53-0.48",0.815},1};
				right[] = {{0.09,0.815},1};
				down[] = {{"0.53-0.48",0.85},1};
			};
			class CopilotText
			{
				type = "text";
				source = "static";
				text = "COPILOT";
				scale = 1;
				sourceScale = 1;
				align = "right";
				pos[] = {{"0.53-0.48",0.945},1};
				right[] = {{0.09,0.945},1};
				down[] = {{"0.53-0.48",0.98},1};
			};
			class PylonText6
			{
				type = "text";
				source = "static";
				text = "#6";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53-0.31 + 0.00",0.55},1};
				right[] = {{0.26,0.55},1};
				down[] = {{"0.53-0.31 + 0.00",0.585},1};
			};
			class PylonText5
			{
				type = "text";
				source = "static";
				text = "#5";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53-0.31 + 0.09",0.55},1};
				right[] = {{0.35,0.55},1};
				down[] = {{"0.53-0.31 + 0.09",0.585},1};
			};
			class PylonText4
			{
				type = "text";
				source = "static";
				text = "#4";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53-0.31 + 0.09*2",0.55},1};
				right[] = {{0.44,0.55},1};
				down[] = {{"0.53-0.31 + 0.09*2",0.585},1};
			};
			class PylonText3
			{
				type = "text";
				source = "static";
				text = "#3";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53+0.31 - 0.09*2",0.55},1};
				right[] = {{0.7,0.55},1};
				down[] = {{"0.53+0.31 - 0.09*2",0.585},1};
			};
			class PylonText2
			{
				type = "text";
				source = "static";
				text = "#2";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53+0.31 - 0.09",0.55},1};
				right[] = {{0.79,0.55},1};
				down[] = {{"0.53+0.31 - 0.09",0.585},1};
			};
			class PylonText1
			{
				type = "text";
				source = "static";
				text = "#1";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{"0.53+0.31 - 0.00",0.55},1};
				right[] = {{0.88,0.55},1};
				down[] = {{"0.53+0.31 - 0.00",0.585},1};
			};
			class CurrentWeaponText
			{
				type = "text";
				source = "static";
				text = "CURRENT WEAPON";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{0.55,0.82},1};
				right[] = {{0.59,0.82},1};
				down[] = {{0.55,0.855},1};
			};
			class Weapons
			{
				type = "text";
				source = "weapon";
				sourceScale = 1;
				align = "center";
				scale = 1;
				pos[] = {{0.55,0.87},1};
				right[] = {{0.59,0.87},1};
				down[] = {{0.55,0.905},1};
			};
			class Ammo
			{
				type = "text";
				source = "ammo";
				sourceScale = 1;
				align = "center";
				scale = 1;
				pos[] = {{0.55,0.92},1};
				right[] = {{0.59,0.92},1};
				down[] = {{0.55,0.955},1};
			};
		};
		class MGun
		{
			class Default
			{
				condition = "ammo0 > 0";
				color[] = {0,0.12,0};
				class Shape
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.556,0.38641},1},{{0.502,0.38641},1},{{0.458,0.38641},1},{{0.458,0.449316},1},{{0.6,0.449316},1},{{0.6,0.38641},1},{{0.556,0.38641},1},{},{{0.502,0.38641},1},{{0.502,0.32547},1},{{0.522,0.32547},1},{{0.522,0.284188},1},{{0.54,0.284188},1},{{0.54,0.327436},1},{{0.556,0.327436},1},{{0.556,0.38641},1},{{0.502,0.38641},1}};
				};
				class Ammo
				{
					type = "text";
					source = "ammo";
					sourceIndex = 0;
					sourceScale = 1;
					sourceLength = 4;
					align = "center";
					scale = 1;
					pos[] = {{0.53,0.41},1};
					right[] = {{0.57,0.41},1};
					down[] = {{0.53,0.445},1};
				};
			};
			class Selected: Default
			{
				condition = "(mgun +  (ammo0 min 1))/2";
				color[] = {0.99,0.94,0.59};
				class Shape: Shape{};
				class Ammo: Ammo{};
			};
			class Empty: Default
			{
				condition = "ammo0 <= 0";
				color[] = {1.0,0.0,0.0,1.0};
				class Shape: Shape{};
				class Ammo: Ammo
				{
					source = "static";
					text = "EMPTY";
				};
			};
		};
		class Pylon1
		{
			type = "pylonicon";
			pos[] = {{0.82,0.5},1};
			pylon = 1;
			name = "Heli_Attack_01";
		};
		class Pylon2: Pylon1
		{
			pos[] = {{0.73,0.5},1};
			pylon = 2;
		};
		class Pylon3: Pylon1
		{
			pos[] = {{0.64,0.5},1};
			pylon = 3;
		};
		class Pylon4: Pylon1
		{
			pos[] = {{0.36,0.5},1};
			pylon = 4;
		};
		class Pylon5: Pylon1
		{
			pos[] = {{0.27,0.5},1};
			pylon = 5;
		};
		class Pylon6: Pylon1
		{
			pos[] = {{0.18,0.5},1};
			pylon = 6;
		};
		class ArmBackground
		{
			color[] = {0.19,0.04,0};
			class BlackBackground
			{
				type = "polygon";
				points[] = {{{{"0.0+0.48","0.0+0.14"},1},{{"0.1+0.48","0.0+0.14"},1},{{"0.1+0.48","0.1+0.14"},1},{{"0.0+0.48","0.1+0.14"},1}}};
			};
		};
		class BlackText
		{
			color[] = {0.15,0.01,0};
			class CMText
			{
				type = "text";
				source = "static";
				text = "ARM";
				scale = 1;
				sourceScale = 1;
				align = "center";
				pos[] = {{0.53,0.17},1};
				right[] = {{0.57,0.17},1};
				down[] = {{0.53,0.205},1};
			};
		};
	};
};
class MFD_Pilot_5_CM: MFD_Pilot_5
{
	topLeft = "MFD_5_TL";
	topRight = "MFD_5_TR";
	bottomLeft = "MFD_5_BL";
	turret[] = {-1};
	class Draw
	{
		color[] = {0,0.12,0};
		condition = "on";
		class CMText
		{
			type = "text";
			source = "static";
			text = "CM";
			scale = 1;
			sourceScale = 1;
			align = "center";
			pos[] = {{0.53,0.61},1};
			right[] = {{0.57,0.61},1};
			down[] = {{0.53,0.645},1};
		};
		class CMAmmo
		{
			type = "text";
			source = "cmammo";
			sourceScale = 1;
			sourceLength = 3;
			align = "center";
			scale = 1;
			pos[] = {{0.53,0.66},1};
			right[] = {{0.57,0.66},1};
			down[] = {{0.53,0.695},1};
		};
	};
};