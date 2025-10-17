class Bones
{
	class PlaneOrientation
	{
		type="fixed";
		pos[]={0.5,0.5};
	};
	/*class Radar_2_View
	{
		type = "vector";
		source = "RadarToView";
		pos0[] = {0.5,0.5};
		pos10[] = {"0.5+0.2165","0.5+0.2165"};
	};*/
	class Limit0109
	{
		type = "limit";
		limits[] = {0.1,0.1,0.9,0.9};
	};	
	class ForwardVec
	{
		type = "vector";
		source = "forward";
		pos0[] = {0,0};
		pos10[] = {0.216,0.216};
		//+ 224 222 220 218
		//= 216
		//- 215
	};
	class ForwardVec_Center
	{
		type = "vector";
		source = "forward";
		pos0[] = 	{0.500		 		,0.500			};
		pos10[] = 	{"0.500 + 0.2165"	,"0.500 + 0.2165"};
		//+ 240 230 220 217.5
		//=
		//- 210 215 216
	};
	class ForwardVecPNVS
	{
		type = "vector";
		source = "forward";
		pos0[] = {0,0};
		pos10[] = {-0.055,-0.055};
	};
	// -------------------------------------------------------- HUD_Common
	class VspeedBone
	{
		type="linear";
		source="vspeed";
		sourceScale=1.9685; // 100xft per min
		min=-20;
		max=20;
		minPos[]={0.93,0.20};
		maxPos[]={0.93,0.80};
	};
	class RadarAltitudeBone
	{
		type="linear";
		source="altitudeAGL";
		sourceOffset = -6;
		sourceScale=3.28084; //ft
		min=0;
		max=200;
		minPos[]={0.965,0.20};
		maxPos[]={0.965,0.80};
	};
	class WYPT_Tape_Bone
	{
		type="vector";
		source="wppoint";
		pos0[] = 	{0.500		 		,0.128};
		pos10[] = 	{"0.500 + 0.037"		,0.128}; // stepSize="0.03";
	};
	class Tape_Limit
	{
		type="limit";
		limits[] = {0.20,0.00,0.80,1.00};
	};
	class Turret_Tape_Bone
	{
		type="vector";
		source="Turret";
		pos0[] = 	{0.500		 		,0.128};
		pos10[] = 	{"0.500 + 0.037"		,0.128}; //(27/700)
		projection = 1;
	};
	// -------------------------------------------------------- HUD_HAD
	class GunnerAim
	{
		type="vector";
		source = "turret";
		//pos0[]=	{ 0.5			,"0.9 - 0.04 + 0.02667			"};
		//pos10[]={"0.5 + 0.0083"	,"0.9 - 0.04 + 0.02667 + 0.0089	"};
		
		//pos0[] = 	{0			,"-(0.9 - 0.04 + 0.02667)"	};
		//pos10[] = 	{0.0083		,-0.01					};
		
		//pos0[] = {0,-2.0};  			// vanilla
		//pos10[] = {0.0068,-0.01};		// vanilla
		
		pos0[] = 	{0		,-2.00};
		pos10[] = 	{0.00717,-0.01};
		
		projection = 0;
		
		
		
		
		/*source="weaponAim";
		pos0[]={0.5,"0.9 - 0.04 + 0.02667"};
		pos10[]={"0.5 + 0.0083","0.9 - 0.04 + 0.02667 + 0.0089"};*/
		//pos0[]=	{0		,-0.6		}; // WTFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFf
		//pos10[]={0.0083	,-0.0089	};
		/*pos0[] = {0,-0.6};
		pos10[] = {0.0068,-0.012};
		projection = 0;*/
	};
	class Gunner_HAD_Limit
	{
		type="limit";
		limits[] = {0.40,0.86,0.60,0.94};
	};
	class Slip_Ball_X
	{
		type="vector";
		source="velocity";
		pos0[]=	{0.500,0.843};
		pos10[]={0.515,0.843};
	};
	class GforceX_Slip
	{
		type="linear";
		source="gmeterX";
		sourceScale=1;
		max=0.15;
		min=-0.15;
		minPos[]={"0.5+0.1","0.9-0.04-0.02"};
		maxPos[]={"0.5-0.1","0.9-0.04-0.02"};						
	};
	// -------------------------------------------------------- HUD_Weapons
	class WeaponAim: ForwardVec_Center
	{
		source = "weapon";
	};
	class TurretAimToView
	{
		type = "vector";
		source = "weapontoview";
		pos0[] = 	{0.500		 		,0.500			};
		pos10[] = 	{"0.500 + 0.2165"	,"0.500 + 0.2165"};
		/*source = "TurretToView";
		pos0[] = 	{0		 		,-0.000			};
		pos10[] = 	{"-0.000 + 0.008"	,"-0.000 + 0.008"};
		projection =0;*/
	};
	class CCIP: ForwardVec_Center
	{
		source = "impactpoint";
	};
	class CCIP_2_VIEW: CCIP
	{
		source = "impactpointtoview";
	};
	class RocketAim: ForwardVec_Center
	{
		source = "weapon";
	};
	class Target: ForwardVec_Center
	{
		source="target";
	};
	class Target2View: Target
	{
		source="targetToView";
	};
	// -------------------------------------------------------- HUD_Modes
	class WYPT_2_VIEW: ForwardVec_Center
	{
		source="wppointtoview";
	};
	class Velocity: ForwardVec_Center
	{
		source="velocityToView";
	};
	class HorizonBankRot
	{
		type="rotational";
		source="horizonBank";
		center[]={0.5,0.5};
		min=-3.1416;
		max=3.1416;
		minAngle=-180;
		maxAngle=180;
		aspectRatio=1;
	};
	class Speed_X_Hover_P
	{
		type="vector";
		source="velocity";
		//source="velocityToView";
		pos0[]=	{0.000,0.000};
		pos10[]={0.020,0.000};
	};
	class Speed_X_Hover_N
	{
		type="vector";
		//source="velocity";
		source="velocityToView";
		sourcescale="1";
		pos0[]=	{0.000,0.000};
		pos10[]={0.020,0.020};
	};
	class Speed_Z_Hover
	{
		type="linear";
		source="speed";
		sourcescale="1.94384";
		max=20;
		min=-20;
		minPos[]={0.5,0.25};
		maxPos[]={0.5,0.75};
	};
	class Speed_X_Transition
	{
		type="vector";
		source="velocity";
		//source="velocityToView";
		pos0[]=	{0.000,0.000};
		pos10[]={0.020,0.000};
	};
	class Speed_Z_Transition
	{
		type="linear";
		source="speed";
		sourcescale="1.94384";
		max=60;
		min=-60;
		minPos[]={0.5,0.25};
		maxPos[]={0.5,0.75};
	};
	class GforceX_Hover
	{
		type="linear";
		source="gmeterX";
		Sourcescale=1;
		max=7;
		min=-7;
		minPos[]={0.25,0.00};
		maxPos[]={-0.25,0.00};						
	};
	class GforceZ_Hover
	{
		type="linear";
		source="gmeterZ";
		Sourcescale=1;
		max=7;
		min=-7;
		minPos[]={0.00,-0.25};
		maxPos[]={0.00,0.25};						
	};
	class GforceX_Transition
	{
		type="linear";
		source="gmeterX";
		Sourcescale=1;
		max=7;
		min=-7;
		minPos[]={0.10,0.00};
		maxPos[]={-0.10,0.00};						
	};
	class GforceZ_Transition
	{
		type="linear";
		source="gmeterZ";
		Sourcescale=1;
		max=7;
		min=-7;
		minPos[]={0.00,-0.10};
		maxPos[]={0.00,0.10};						
	};
	class Level0_Transition
	{
		type="horizon";
		pos0[]={0.5,0.5};
		pos10[]={0.65,0.65};
		angle=0;
	};
	class Level0
	{
		type="horizon";
		pos0[]={0.5,0.5};
		pos10[]={0.78,0.78};
		angle=0;
	};
	class LevelP5: Level0
	{
		angle=5;
	};
	class LevelM5: Level0
	{
		angle=-5;
	};
	class LevelP10: Level0
	{
		angle=10;
	};
	class LevelM10: Level0
	{
		angle=-10;
	};
	class LevelP15: Level0
	{
		angle=15;
	};
	class LevelM15: Level0
	{
		angle=-15;
	};
	class LevelP20: Level0
	{
		angle=20;
	};
	class LevelM20: Level0
	{
		angle=-20;
	};
	class LevelP25: Level0
	{
		angle=25;
	};
	class LevelM25: Level0
	{
		angle=-25;
	};
	class LevelP30: Level0
	{
		angle=30;
	};
	class LevelM30: Level0
	{
		angle=-30;
	};
	class LevelP35: Level0
	{
		angle=35;
	};
	class LevelM35: Level0
	{
		angle=-35;
	};
	class LevelP40: Level0
	{
		angle=40;
	};
	class LevelM40: Level0
	{
		angle=-40;
	};
	class LevelP45: Level0
	{
		angle=45;
	};
	class LevelM45: Level0
	{
		angle=-45;
	};
	class LevelP50: Level0
	{
		angle=50;
	};
	class LevelM50: Level0
	{
		angle=-50;
	};
};