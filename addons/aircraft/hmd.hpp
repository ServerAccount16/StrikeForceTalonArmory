
#define HMD	\
		class MFD	\
		{	\
			class Kimi_HMD_Weapons	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							0.7165,	\
							0.7165	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							0.537,	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							0.537,	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							0.6,	\
							0.84	\
						};	\
						maxPos[]=	\
						{	\
							0.4,	\
							0.84	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							0.7165,	\
							0.7165	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={0};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class Turret_Tape_Symbol	\
					{	\
						type="group";	\
						condition="1-user2";	\
						class Turret_Tape_Triangle	\
						{	\
							type="polygon";	\
							points[]=	\
							{	\
									\
								{	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{-0.0070000002,0.0099999998},	\
										1	\
									},	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{0,0},	\
										1	\
									},	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{0.0070000002,0.0099999998},	\
										1	\
									}	\
								}	\
							};	\
						};	\
						class Turret_Tape_Square	\
						{	\
							type="polygon";	\
							points[]=	\
							{	\
									\
								{	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{-0.0070000002,0.0099999998},	\
										1	\
									},	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{0.0070000002,0.0099999998},	\
										1	\
									},	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{0.0070000002,0.02},	\
										1	\
									},	\
										\
									{	\
										"Turret_Tape_Bone",	\
										1,	\
										"Tape_Limit",	\
										1,	\
										{-0.0070000002,0.02},	\
										1	\
									}	\
								}	\
							};	\
						};	\
					};	\
					class Gun_Cross	\
					{	\
						condition="mgun";	\
						type="group";	\
						class GUN_X	\
						{	\
							type="line";	\
							width=9;	\
							points[]=	\
							{	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,-0.050000001},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,-0.015},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,0.015},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,0.050000001},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{-0.050000001,0},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{-0.015,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0.015,0},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0.050000001,0},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class Gunner_AIM	\
					{	\
						type="group";	\
						condition="(1-mgun)*(2-(abs(cameraHeadingDiffY)<=3)-(abs(cameraHeadingDiffX)<=3))*(1-(abs(weaponHeading-HEADING)<=3))";	\
						class CPG_X_Group	\
						{	\
							type="group";	\
							class CPG_X	\
							{	\
								type="line";	\
								width=6;	\
								points[]=	\
								{	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,-0.015},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,-0.029999999},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,-0.032499999},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,-0.047499999},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,0.015},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,0.029999999},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,0.032499999},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0,0.047499999},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{-0.015,0},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{-0.029999999,0},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{-0.032499999,0},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{-0.047499999,0},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0.015,0},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0.029999999,0},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0.032499999,0},	\
										1	\
									},	\
										\
									{	\
										"TurretAimToView",	\
										1,	\
										{0.047499999,0},	\
										1	\
									}	\
								};	\
							};	\
						};	\
					};	\
					class TargetACQ	\
					{	\
						type="group";	\
						condition="1";	\
						class ACQgun	\
						{	\
							type="line";	\
							width=2;	\
							points[]=	\
							{	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.059999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.055},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.050000001},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.045000002},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.039999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.035},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.025},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.02},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.015},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.0099999998},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,-0.0049999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.059999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.055},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.050000001},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.045000002},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.039999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.035},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.029999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.025},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.02},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.015},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.0099999998},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0,0.0049999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.059999999,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.055,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.050000001,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.045000002,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.039999999,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.035,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.029999999,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.025,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.02,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.015,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.0099999998,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{-0.0049999999,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.059999999,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.055,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.050000001,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.045000002,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.039999999,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.035,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.029999999,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.025,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.02,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.015,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.0099999998,0},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
									"Limit0109",	\
									1,	\
									{0.0049999999,0},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class TargetACQ_AGM	\
					{	\
						condition="ATmissile-missilelocked";	\
						type="group";	\
						class ACQbox	\
						{	\
							type="line";	\
							width=2;	\
							points[]=	\
							{	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.064999998,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.059999999,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.050000001,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.045000002,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.035,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.029999999,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.02,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.015,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.0049999999,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.064999998,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.059999999,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.050000001,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.045000002,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.035,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.029999999,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.02,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.015,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.0049999999,-0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.064999998,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.059999999,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.050000001,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.045000002,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.035,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.029999999,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.02,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.015,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.0049999999,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.064999998,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.059999999,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.050000001,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.045000002,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.035,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.029999999,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.02,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.015,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.0049999999,0.075000003},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.064999998},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.059999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.050000001},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.045000002},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.035},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.02},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.015},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.0049999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.064999998},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.059999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.050000001},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.045000002},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.035},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.029999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.02},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.015},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.0049999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.064999998},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.059999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.050000001},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.045000002},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.035},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.02},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.015},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.0049999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.064999998},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.059999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.050000001},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.045000002},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.035},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.029999999},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.02},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.015},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.0049999999},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class TargetACQ_AAM	\
					{	\
						condition="AAmissile-missilelocked";	\
						type="group";	\
						class Circle	\
						{	\
							type="line";	\
							width=2.5;	\
							points[]=	\
							{	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										0,	\
										-0.029828273	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										0.005208208,	\
										-0.029374895	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										0.0150006,	\
										-0.025831273	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										0.019284772,	\
										-0.022848434	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										0.025981039,	\
										-0.014914197	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										0.028192128,	\
										-0.010201272	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.25 / 8.333",	\
										"0 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.2462 / 8.333",	\
										"0.0431499 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.2165 / 8.333",	\
										"0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.1915 / 8.333",	\
										"0.159774 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.125 / 8.333",	\
										"0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.0855 / 8.333",	\
										"0.233571 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0 / 8.333",	\
										"0.248559 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.0434 / 8.333",	\
										"0.244781 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.125 / 8.333",	\
										"0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.1607 / 8.333",	\
										"0.190396 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.2165 / 8.333",	\
										"0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.234925 / 8.333",	\
										"0.0850072 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.25 / 8.333",	\
										"0 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.2462 / 8.333",	\
										"-0.0431499 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.2165 / 8.333",	\
										"-0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.1915 / 8.333",	\
										"-0.159774 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.125 / 8.333",	\
										"-0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.0855 / 8.333",	\
										"-0.233571 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0 / 4.167",	\
										"-0.248559 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.0434 / 4.167",	\
										"-0.244781 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.125 / 4.167",	\
										"-0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.1607 / 4.167",	\
										"-0.190396 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.2165 / 4.167",	\
										"-0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.234925 / 4.167",	\
										"-0.0850072 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.25 / 4.167",	\
										"0 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.2462 / 4.167",	\
										"0.0431499 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.2165 / 4.167",	\
										"0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.1915 / 4.167",	\
										"0.159774 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.125 / 4.167",	\
										"0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0.0855 / 4.167",	\
										"0.233571 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"0 / 4.167",	\
										"0.248559 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.0434 / 4.167",	\
										"0.244781 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.125 / 4.167",	\
										"0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.1607 / 4.167",	\
										"0.190396 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.2165 / 4.167",	\
										"0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.234925 / 4.167",	\
										"0.0850072 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.25 / 4.167",	\
										"0 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.2462 / 4.167",	\
										"-0.0431499 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.2165 / 4.167",	\
										"-0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.1915 / 4.167",	\
										"-0.159774 / 4.167"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.125 / 4.167",	\
										"-0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									1,	\
										\
									{	\
										"-0.0855 / 4.167",	\
										"-0.233571 / 4.167"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class AAM_Lock	\
					{	\
						condition="(missilelocked*AAmissile)";	\
						type="group";	\
						class LockCircle	\
						{	\
							type="line";	\
							width=2.5;	\
							points[]=	\
							{	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0 / 8.333",	\
										"-0.248559 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0434 / 8.333",	\
										"-0.244781 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0855 / 8.333",	\
										"-0.233571 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.125 / 8.333",	\
										"-0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1607 / 8.333",	\
										"-0.190396 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1915 / 8.333",	\
										"-0.159774 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2165 / 8.333",	\
										"-0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.234925 / 8.333",	\
										"-0.0850072 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2462 / 8.333",	\
										"-0.0431499 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.25 / 8.333",	\
										"0 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2462 / 8.333",	\
										"0.0431499 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.234925 / 8.333",	\
										"0.0850072 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2165 / 8.333",	\
										"0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1915 / 8.333",	\
										"0.159774 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1607 / 8.333",	\
										"0.190396 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.125 / 8.333",	\
										"0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0855 / 8.333",	\
										"0.233571 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0434 / 8.333",	\
										"0.244781 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0 / 8.333",	\
										"0.248559 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0434 / 8.333",	\
										"0.244781 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0855 / 8.333",	\
										"0.233571 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.125 / 8.333",	\
										"0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1607 / 8.333",	\
										"0.190396 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1915 / 8.333",	\
										"0.159774 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2165 / 8.333",	\
										"0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.234925 / 8.333",	\
										"0.0850072 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2462 / 8.333",	\
										"0.0431499 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.25 / 8.333",	\
										"0 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2462 / 8.333",	\
										"-0.0431499 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.234925 / 8.333",	\
										"-0.0850072 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2165 / 8.333",	\
										"-0.12428 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1915 / 8.333",	\
										"-0.159774 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1607 / 8.333",	\
										"-0.190396 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.125 / 8.333",	\
										"-0.215252 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0855 / 8.333",	\
										"-0.233571 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0434 / 8.333",	\
										"-0.244781 / 8.333"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0 / 8.333",	\
										"-0.248559 / 8.333"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0 / 4.167",	\
										"-0.248559 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0434 / 4.167",	\
										"-0.244781 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0855 / 4.167",	\
										"-0.233571 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.125 / 4.167",	\
										"-0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1607 / 4.167",	\
										"-0.190396 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1915 / 4.167",	\
										"-0.159774 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2165 / 4.167",	\
										"-0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.234925 / 4.167",	\
										"-0.0850072 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2462 / 4.167",	\
										"-0.0431499 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.25 / 4.167",	\
										"0 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2462 / 4.167",	\
										"0.0431499 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.234925 / 4.167",	\
										"0.0850072 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.2165 / 4.167",	\
										"0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1915 / 4.167",	\
										"0.159774 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.1607 / 4.167",	\
										"0.190396 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.125 / 4.167",	\
										"0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0855 / 4.167",	\
										"0.233571 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0.0434 / 4.167",	\
										"0.244781 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0 / 4.167",	\
										"0.248559 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0434 / 4.167",	\
										"0.244781 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0855 / 4.167",	\
										"0.233571 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.125 / 4.167",	\
										"0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1607 / 4.167",	\
										"0.190396 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1915 / 4.167",	\
										"0.159774 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2165 / 4.167",	\
										"0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.234925 / 4.167",	\
										"0.0850072 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2462 / 4.167",	\
										"0.0431499 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.25 / 4.167",	\
										"0 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2462 / 4.167",	\
										"-0.0431499 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.234925 / 4.167",	\
										"-0.0850072 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.2165 / 4.167",	\
										"-0.12428 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1915 / 4.167",	\
										"-0.159774 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.1607 / 4.167",	\
										"-0.190396 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.125 / 4.167",	\
										"-0.215252 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0855 / 4.167",	\
										"-0.233571 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"-0.0434 / 4.167",	\
										"-0.244781 / 4.167"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
										\
									{	\
										"0 / 4.167",	\
										"-0.248559 / 4.167"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class AGM_Lock	\
					{	\
						condition="(missilelocked*ATmissile)";	\
						type="group";	\
						class LockBox	\
						{	\
							type="line";	\
							width=2;	\
							points[]=	\
							{	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,-0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{0.075000003,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,0.075000003},	\
									1	\
								},	\
									\
								{	\
									"Target2View",	\
									{-0.075000003,-0.075000003},	\
									1	\
								}	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_RKT_P	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={-1};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class Rocket_I_LLW	\
					{	\
						condition="rocket";	\
						type="group";	\
						class RocketSight	\
						{	\
							type="line";	\
							width=5.5;	\
							points[]=	\
							{	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0.022,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{-0.022,-0.029999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0,0.029999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0.022,0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{-0.022,0.029999999},	\
									1	\
								}	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_RKT_C	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={0};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class Rocket_I_LLW	\
					{	\
						condition="rocket";	\
						type="group";	\
						class RocketSight	\
						{	\
							type="line";	\
							width=5.5;	\
							points[]=	\
							{	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0.022,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{-0.022,-0.029999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0,0.029999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{0.022,0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									1,	\
									{-0.022,0.029999999},	\
									1	\
								}	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_Common	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0-user2";	\
					class Units_Text_Imperial	\
					{	\
						type="group";	\
						condition="user1";	\
						class Units_Metric	\
						{	\
							type="text";	\
							source="static";	\
							text="I";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.94999999,0.1},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.98000002,0.1},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.94999999,0.13},	\
								1	\
							};	\
						};	\
					};	\
					class Units_Text_Metric	\
					{	\
						type="group";	\
						condition="1-user1";	\
						class Units_Metric	\
						{	\
							type="text";	\
							source="static";	\
							text="M";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.94999999,0.1},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.98000002,0.1},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.94999999,0.13},	\
								1	\
							};	\
						};	\
					};	\
					class Heading_Indexer	\
					{	\
						type="line";	\
						width=7;	\
						points[]=	\
						{	\
								\
							{	\
									\
								{	\
									"0.5",	\
									"0.128 + 0.03"	\
								},	\
								1	\
							},	\
								\
							{	\
								{0.5,0.12800001},	\
								1	\
							}	\
						};	\
					};	\
					class HeadingScale_LEFT	\
					{	\
						clipTL[]={0,0};	\
						clipBR[]={0.44999999,1};	\
						class Heading_group	\
						{	\
							type="scale";	\
							horizontal=1;	\
							source="heading";	\
							sourceScale=0.1;	\
							NeverEatSeaWeed=1;	\
							width=4;	\
							top=0.2;	\
							center=0.5;	\
							bottom=0.80000001;	\
							lineXleft="0.03 + 0.085";	\
							lineYright="0.02 + 0.085";	\
							lineXleftMajor="0.04 + 0.085";	\
							lineYrightMajor="0.02 + 0.085";	\
							majorLineEach=3;	\
							numberEach=3;	\
							step=1;	\
							stepSize="0.03";	\
							align="center";	\
							scale=1;	\
							pos[]=	\
							{	\
								"0.1975 + 0.000",	\
								"0.060 + 0.000"	\
							};	\
							right[]=	\
							{	\
								"0.1975 + 0.040",	\
								"0.060 + 0.000"	\
							};	\
							down[]=	\
							{	\
								"0.1975 + 0.000",	\
								"0.060 + 0.040"	\
							};	\
						};	\
					};	\
					class HeadingScale_RIGHT	\
					{	\
						clipTL[]={0.55000001,0};	\
						clipBR[]={1,1};	\
						class Heading_group	\
						{	\
							type="scale";	\
							horizontal=1;	\
							source="heading";	\
							sourceScale=0.1;	\
							NeverEatSeaWeed=1;	\
							width=4;	\
							top=0.2;	\
							center=0.5;	\
							bottom=0.80000001;	\
							lineXleft="0.03 + 0.085";	\
							lineYright="0.02 + 0.085";	\
							lineXleftMajor="0.04 + 0.085";	\
							lineYrightMajor="0.02 + 0.085";	\
							majorLineEach=3;	\
							numberEach=3;	\
							step=1;	\
							stepSize="0.03";	\
							align="center";	\
							scale=1;	\
							pos[]=	\
							{	\
								"0.1975 + 0.000",	\
								"0.060 + 0.000"	\
							};	\
							right[]=	\
							{	\
								"0.1975 + 0.040",	\
								"0.060 + 0.000"	\
							};	\
							down[]=	\
							{	\
								"0.1975 + 0.000",	\
								"0.060 + 0.040"	\
							};	\
						};	\
					};	\
					class HeadingScale_BOTTOM	\
					{	\
						clipTL[]=	\
						{	\
							0.44999999,	\
							"0.02 + 0.085"	\
						};	\
						clipBR[]=	\
						{	\
							"0.45 + 0.10",	\
							1	\
						};	\
						class Heading_group	\
						{	\
							type="scale";	\
							horizontal=1;	\
							source="heading";	\
							sourceScale=0.1;	\
							NeverEatSeaWeed=1;	\
							width=4;	\
							top=0.2;	\
							center=0.5;	\
							bottom=0.80000001;	\
							lineXleft="0.03 + 0.085";	\
							lineYright="0.02 + 0.085";	\
							lineXleftMajor="0.04 + 0.085";	\
							lineYrightMajor="0.02 + 0.085";	\
							majorLineEach=3;	\
							numberEach=3;	\
							step=1;	\
							stepSize="0.03";	\
							align="center";	\
							scale=1;	\
							pos[]=	\
							{	\
								"0.1975 + 0.000",	\
								"0.060 + 0.000"	\
							};	\
							right[]=	\
							{	\
								"0.1975 + 0.040",	\
								"0.060 + 0.000"	\
							};	\
							down[]=	\
							{	\
								"0.1975 + 0.000",	\
								"0.060 + 0.040"	\
							};	\
						};	\
					};	\
					class WYPT_indexer	\
					{	\
						type="group";	\
						condition="WPvalid";	\
						class WYPT_tape	\
						{	\
							type="line";	\
							width=4;	\
							points[]=	\
							{	\
									\
								{	\
									"WYPT_Tape_Bone",	\
									1,	\
									"Tape_Limit",	\
									1,	\
									{-0.0099999998,0.015},	\
									1	\
								},	\
									\
								{	\
									"WYPT_Tape_Bone",	\
									1,	\
									"Tape_Limit",	\
									1,	\
									{0,0},	\
									1	\
								},	\
									\
								{	\
									"WYPT_Tape_Bone",	\
									1,	\
									"Tape_Limit",	\
									1,	\
									{0.0099999998,0.015},	\
									1	\
								}	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_Decluttered	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class HeadingNumber	\
					{	\
						type="text";	\
						scale=1;	\
						source="heading";	\
						sourceScale=1;	\
						sourceLength=3;	\
						align="center";	\
						pos[]=	\
						{	\
							{0.495,0.045000002},	\
							1	\
						};	\
						right[]=	\
						{	\
							{0.55500001,0.045000002},	\
							1	\
						};	\
						down[]=	\
						{	\
								\
							{	\
								0.495,	\
								"0.045+ 0.06"	\
							},	\
							1	\
						};	\
					};	\
					class Airspeed_Number_Imperial	\
					{	\
						type="group";	\
						condition="user1";	\
						class Airspeed_Imperial	\
						{	\
							type="text";	\
							align="right";	\
							scale=1;	\
							source="speed";	\
							sourceScale=1.94384;	\
							pos[]=	\
							{	\
								{0.029999999,0.47499999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.079999998,0.47499999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.029999999,0.52499998},	\
								1	\
							};	\
						};	\
					};	\
					class Airspeed_Number_Metric	\
					{	\
						type="group";	\
						condition="1-user1";	\
						class Airspeed_Metric	\
						{	\
							type="text";	\
							align="right";	\
							scale=1;	\
							source="speed";	\
							sourceScale=3.5999999;	\
							pos[]=	\
							{	\
								{0.029999999,0.47499999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.079999998,0.47499999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.029999999,0.52499998},	\
								1	\
							};	\
						};	\
					};	\
					class AltNumber_Imperial	\
					{	\
						type="group";	\
						condition="user1";	\
						class Alt_Imperial	\
						{	\
							type="text";	\
							scale=1;	\
							align="right";	\
							source="altitudeAGL";	\
							sourceScale=3.2808399;	\
							sourceOffset=-6;	\
							pos[]=	\
							{	\
								{0.82999998,0.47499999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.88,0.47499999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.82999998,0.52499998},	\
								1	\
							};	\
						};	\
					};	\
					class AltNumber_Metric	\
					{	\
						type="group";	\
						condition="1-user1";	\
						class Alt_Metric	\
						{	\
							type="text";	\
							scale=1;	\
							align="right";	\
							source="altitudeAGL";	\
							sourceScale=1;	\
							sourceOffset=-2;	\
							pos[]=	\
							{	\
								{0.82999998,0.47499999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.88,0.47499999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.82999998,0.52499998},	\
								1	\
							};	\
						};	\
					};	\
					class AC_Centerline	\
					{	\
						type="line";	\
						width=1;	\
						points[]=	\
						{	\
								\
							{	\
								"ForwardVec",	\
								1,	\
									\
								{	\
									" -0.004 + 0.5",	\
									"0 + 0.5"	\
								},	\
								1	\
							},	\
								\
							{	\
								"ForwardVec",	\
								1,	\
									\
								{	\
									" 0.004 + 0.5",	\
									"0 + 0.5"	\
								},	\
								1	\
							},	\
							{},	\
								\
							{	\
								"ForwardVec",	\
								1,	\
									\
								{	\
									" -0.0 + 0.5",	\
									"0.004 + 0.5"	\
								},	\
								1	\
							},	\
								\
							{	\
								"ForwardVec",	\
								1,	\
									\
								{	\
									" 0.0 + 0.5",	\
									"-0.004 + 0.5"	\
								},	\
								1	\
							}	\
						};	\
					};	\
					class FPM	\
					{	\
						type="group";	\
						condition="speed - 3.(6*1.852/3.6)+1.94384";	\
						class FPM_Cue	\
						{	\
							type="line";	\
							width=5;	\
							points[]=	\
							{	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0*0.75",	\
										"-0.02*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.0099999998*0.75",	\
										"-0.01732*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.01732*0.75",	\
										"-0.0099999998*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.02*0.75",	\
										"0*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.01732*0.75",	\
										"0.0099999998*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.0099999998*0.75",	\
										"0.01732*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0*0.75",	\
										"0.02*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.0099999998*0.75",	\
										"0.01732*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.01732*0.75",	\
										"0.0099999998*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.02*0.75",	\
										"0*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.01732*0.75",	\
										"-0.0099999998*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.0099999998*0.75",	\
										"-0.01732*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0*0.75",	\
										"-0.02*0.75"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.039999999*0.75",	\
										"0*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0.02*0.75",	\
										"0*0.75"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.039999999*0.75",	\
										"0*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"-0.02*0.75",	\
										"0*0.75"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0*0.75",	\
										"-0.039999999*0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Velocity",	\
									1,	\
										\
									{	\
										"0*0.75",	\
										"-0.02*0.75"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class WYPT_Group	\
					{	\
						type="group";	\
						condition="WPvalid";	\
						class WYPT_Block	\
						{	\
							type="group";	\
							class WYPT_Fly_2_Cue	\
							{	\
								type="line";	\
								width=3;	\
								points[]=	\
								{	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0 * 0.075",	\
											"-0.02 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0.0099999998 * 0.075",	\
											"-0.01732 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0.01732 * 0.075",	\
											"-0.0099999998 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0.02 * 0.075",	\
											"0 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0.01732 * 0.075",	\
											"0.0099999998 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0.0099999998 * 0.075",	\
											"0.01732 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0 * 0.075",	\
											"0.02 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"-0.0099999998 * 0.075",	\
											"0.01732 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"-0.01732 * 0.075",	\
											"0.0099999998 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"-0.02 * 0.075",	\
											"0 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"-0.01732 * 0.075",	\
											"-0.0099999998 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"-0.0099999998 * 0.075",	\
											"-0.01732 * 0.075"	\
										},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
											\
										{	\
											"0 * 0.075",	\
											"-0.02 * 0.075"	\
										},	\
										1	\
									},	\
									{},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
										{-0.029999999,0},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
										{0,-0.029999999},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
										{0.029999999,0},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
										{0.017999999,0.015},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
										{-0.017999999,0.015},	\
										1	\
									},	\
										\
									{	\
										"WYPT_2_VIEW",	\
										1,	\
										{-0.029999999,0},	\
										1	\
									}	\
								};	\
							};	\
						};	\
					};	\
					class Cruise_Altitude_ASL_Imperial	\
					{	\
						type="group";	\
						condition="user1";	\
						class Cruise_Alt_Imperial	\
						{	\
							type="text";	\
							source="altitudeASL";	\
							sourceScale=3.2808399;	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.82999998,0.18000001},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.88,0.18000001},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.82999998,0.23},	\
								1	\
							};	\
						};	\
					};	\
					class Cruise_Altitude_ASL_Metric	\
					{	\
						type="group";	\
						condition="1-user1";	\
						class Cruise_Alt_Metric	\
						{	\
							type="text";	\
							source="altitudeASL";	\
							sourceScale=1;	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.82999998,0.18000001},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.88,0.18000001},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.82999998,0.23},	\
								1	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_HAD_Common	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class Laser_Toggle_On	\
					{	\
						type="group";	\
						condition="laseron";	\
						class Laser_On	\
						{	\
							type="text";	\
							text="LRFD ON";	\
							source="static";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.82999998},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.82999998},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.87},	\
								1	\
							};	\
						};	\
					};	\
					class Static_HAD_BOX	\
					{	\
						clipTL[]={0,1};	\
						clipBR[]={1,0};	\
						type="line";	\
						width=2;	\
						points[]=	\
						{	\
								\
							{	\
									\
								{	\
									"0.5-0.1",	\
									"0.9-0.04"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									"0.5-0.1",	\
									"0.9+0.04"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									"0.5+0.1",	\
									"0.9+0.04"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									"0.5+0.1",	\
									"0.9-0.04"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									"0.5-0.1",	\
									"0.9-0.04"	\
								},	\
								1	\
							},	\
							{},	\
								\
							{	\
									\
								{	\
									"0.5-0.1",	\
									"0.9-0.04+0.02667"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									"0.5-0.092",	\
									"0.9-0.04+0.02667"	\
								},	\
								1	\
							},	\
							{},	\
								\
							{	\
									\
								{	\
									"0.5+0.1",	\
									"0.9-0.04+0.02667"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									"0.5+0.092",	\
									"0.9-0.04+0.02667"	\
								},	\
								1	\
							},	\
							{},	\
								\
							{	\
									\
								{	\
									0.5,	\
									"0.9-0.040"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									0.5,	\
									"0.9-0.032"	\
								},	\
								1	\
							},	\
							{},	\
								\
							{	\
									\
								{	\
									0.5,	\
									"0.9+0.040"	\
								},	\
								1	\
							},	\
								\
							{	\
									\
								{	\
									0.5,	\
									"0.9+0.032"	\
								},	\
								1	\
							}	\
						};	\
					};	\
					class Missile_limits	\
					{	\
						type="group";	\
						condition="missile";	\
						class Missile_lines	\
						{	\
							type="line";	\
							width=1;	\
							points[]=	\
							{	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00000"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*2"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*3"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*4"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*5"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*6"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*7"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*8"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0167",	\
										"0.9-0.04+0.00889*9"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00000"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*2"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*3"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*4"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*5"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*6"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*7"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*8"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0167",	\
										"0.9-0.04+0.00889*9"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class Gun_limits	\
					{	\
						type="group";	\
						condition="mgun";	\
						class Missile_lines	\
						{	\
							type="line";	\
							width=1;	\
							points[]=	\
							{	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00000"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*2"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*3"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*4"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*5"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*6"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*7"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*8"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.0717",	\
										"0.9-0.04+0.00889*9"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00000"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*2"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*3"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*4"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*5"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*6"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*7"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*8"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.0717",	\
										"0.9-0.04+0.00889*9"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class Gunner_Aim_Box	\
					{	\
						type="line";	\
						width=2;	\
						points[]=	\
						{	\
								\
							{	\
								"GunnerAim",	\
								{0.48500001,0.89200002},	\
								1	\
							},	\
								\
							{	\
								"GunnerAim",	\
								{0.48500001,0.90799999},	\
								1	\
							},	\
								\
							{	\
								"GunnerAim",	\
								{0.51499999,0.90799999},	\
								1	\
							},	\
								\
							{	\
								"GunnerAim",	\
								{0.51499999,0.89200002},	\
								1	\
							},	\
								\
							{	\
								"GunnerAim",	\
								{0.48500001,0.89200002},	\
								1	\
							}	\
						};	\
					};	\
					class AGM_TOF	\
					{	\
						condition="ATmissile*missilelocked";	\
						type="group";	\
						class TOFtext	\
						{	\
							type="text";	\
							align="right";	\
							source="static";	\
							text="TOF=";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.92000002},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.92000002},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.95999998},	\
								1	\
							};	\
						};	\
						class TOFnumber	\
						{	\
							type="text";	\
							source="targetDist";	\
							sourcescale=0.0024999999;	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.69,0.92000002},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.73000002,0.92000002},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.69,0.95999998},	\
								1	\
							};	\
						};	\
					};	\
					class Range_group	\
					{	\
						type="group";	\
						condition="targetDist";	\
						class RangeText	\
						{	\
							type="text";	\
							source="static";	\
							text="R";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.30000001,0.86000001},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.34,0.86000001},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.30000001,0.89999998},	\
								1	\
							};	\
						};	\
						class RangeNumber	\
						{	\
							type="text";	\
							source="targetDist";	\
							sourceprecision=2;	\
							sourceScale=0.001;	\
							align="left";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.37,0.86000001},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.41,0.86000001},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.37,0.89999998},	\
								1	\
							};	\
						};	\
					};	\
					class ACQ_TADS_Source	\
					{	\
						type="group";	\
						condition="1-activeSensorsOn";	\
						class ACQ_TADS	\
						{	\
							type="text";	\
							source="static";	\
							text="TADS";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.30000001,0.88999999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.34,0.88999999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.30000001,0.93000001},	\
								1	\
							};	\
						};	\
					};	\
					class ACQ_FCRG_Source	\
					{	\
						type="group";	\
						condition="activeSensorsOn-AAmissile";	\
						class ACQ_FCRG	\
						{	\
							type="text";	\
							source="static";	\
							text="FCR/G";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.30000001,0.88999999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.34,0.88999999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.30000001,0.93000001},	\
								1	\
							};	\
						};	\
					};	\
					class ACQ_FCRA_Source	\
					{	\
						type="group";	\
						condition="(activeSensorsOn*AAmissile)";	\
						class ACQ_FCRA	\
						{	\
							type="text";	\
							source="static";	\
							text="FCR/A";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.30000001,0.88999999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.34,0.88999999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.30000001,0.93000001},	\
								1	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_HAD_Pilot_Lynx	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={-1};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class WeaponName	\
					{	\
						type="group";	\
						condition="1-mgun";	\
						class weaponN	\
						{	\
							type="text";	\
							source="weapon";	\
							sourceScale=1;	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.86000001},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.86000001},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.89999998},	\
								1	\
							};	\
						};	\
					};	\
					class WeaponName_Gun	\
					{	\
						type="group";	\
						condition="mgun";	\
						class weaponG	\
						{	\
							type="text";	\
							align="right";	\
							source="static";	\
							text="GUN";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.86000001},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.86000001},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.89999998},	\
								1	\
							};	\
						};	\
					};	\
					class AmmoCount	\
					{	\
						type="group";	\
						condition="rocket+bomb+missile+mgun";	\
						class AmmoC	\
						{	\
							type="text";	\
							source="ammo";	\
							sourceScale=1;	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.88999999},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.88999999},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.93000001},	\
								1	\
							};	\
						};	\
					};	\
					class Laser_Toggle_On	\
					{	\
						type="group";	\
						condition="laseron";	\
						class Laser_On	\
						{	\
							type="text";	\
							text="LRFD ON";	\
							source="static";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.82999998},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.82999998},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.87},	\
								1	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_HAD_Pilot_Lynx_2	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
				};	\
				turret[]={0};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class Laser_Toggle_On	\
					{	\
						type="group";	\
						condition="laseron";	\
						class Laser_On	\
						{	\
							type="text";	\
							text="LRFD ON";	\
							source="static";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.61000001,0.82999998},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.64999998,0.82999998},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.61000001,0.87},	\
								1	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_Weapons_Lynx_P	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={-1};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0";	\
					class Gun_Cross	\
					{	\
						condition="mgun";	\
						type="group";	\
						class GUN_X	\
						{	\
							type="line";	\
							width=7;	\
							points[]=	\
							{	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,-0.029999999},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,-0.012},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,0.012},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0,0.029999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{-0.029999999,0},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{-0.012,0},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0.012,0},	\
									1	\
								},	\
									\
								{	\
									"CCIP_2_VIEW",	\
									{0.029999999,0},	\
									1	\
								}	\
							};	\
						};	\
						class Distance	\
						{	\
							type="text";	\
							source="ImpactDistance";	\
							sourceScale=0.001;	\
							sourcePrecision=1;	\
							max=15;	\
							align="center";	\
							scale=1;	\
							pos[]=	\
							{	\
								"CCIP_2_VIEW",	\
								{-0.0020000001,0.035},	\
								1	\
							};	\
							right[]=	\
							{	\
								"CCIP_2_VIEW",	\
								{0.028000001,0.035},	\
								1	\
							};	\
							down[]=	\
							{	\
								"CCIP_2_VIEW",	\
								{-0.0020000001,0.064999998},	\
								1	\
							};	\
						};	\
					};	\
					class Rocket_I_LLW	\
					{	\
						condition="rocket";	\
						type="group";	\
						class Distance	\
						{	\
							type="text";	\
							source="ImpactDistance";	\
							sourceScale=0.001;	\
							sourcePrecision=1;	\
							max=15;	\
							align="center";	\
							scale=1;	\
							pos[]=	\
							{	\
								"CCIP_2_VIEW",	\
								{-0.0020000001,0.035},	\
								1	\
							};	\
							right[]=	\
							{	\
								"CCIP_2_VIEW",	\
								{0.028000001,0.035},	\
								1	\
							};	\
							down[]=	\
							{	\
								"CCIP_2_VIEW",	\
								{-0.0020000001,0.064999998},	\
								1	\
							};	\
						};	\
					};	\
				};	\
			};	\
			class AirplaneHUD	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={1,1,1,1};	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.037500001,0.037500001,0.1};	\
				helmetRight[]={0.075000003,0,0};	\
				helmetDown[]={0,-0.075000003,0};	\
				font="LucidaConsoleB";	\
				turret[]={-2};	\
				class Bones	\
				{	\
				};	\
				class Draw	\
				{	\
				};	\
			};	\
			class Kimi_HMD_Pilot	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				turret[]={-1};	\
				class Draw	\
				{	\
					condition="on*user0-user2";	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					class Aiming_X_Static	\
					{	\
						type="group";	\
						condition="(2-(abs(cameraHeadingDiffY)<=3)-(abs(cameraHeadingDiffX)<=3))+(1-rocket-mgun)";	\
						class aim_X	\
						{	\
							type="line";	\
							width=5;	\
							points[]=	\
							{	\
									\
								{	\
									{0.5,0.47999999},	\
									1	\
								},	\
									\
								{	\
									{0.5,0.44999999},	\
									1	\
								},	\
								{},	\
									\
								{	\
									{0.5,0.51999998},	\
									1	\
								},	\
									\
								{	\
									{0.5,0.55000001},	\
									1	\
								},	\
								{},	\
									\
								{	\
									{0.47999999,0.5},	\
									1	\
								},	\
									\
								{	\
									{0.44999999,0.5},	\
									1	\
								},	\
								{},	\
									\
								{	\
									{0.51999998,0.5},	\
									1	\
								},	\
									\
								{	\
									{0.55000001,0.5},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class Slip_ball_group	\
					{	\
						type="group";	\
						condition="1-user2";	\
						class Slip_bars	\
						{	\
							type="line";	\
							width=2;	\
							points[]=	\
							{	\
									\
								{	\
										\
									{	\
										"0.5-0.018",	\
										"0.9-0.04"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5-0.018",	\
										"0.9-0.075"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
										\
									{	\
										"0.5+0.018",	\
										"0.9-0.04"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.5+0.018",	\
										"0.9-0.075"	\
									},	\
									1	\
								}	\
							};	\
						};	\
						class Slip_ball	\
						{	\
							type="line";	\
							width=6;	\
							points[]=	\
							{	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.75",	\
										"-0.02 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.75",	\
										"-0.01732 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.75",	\
										"-0.0099999998 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.75",	\
										"0 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.75",	\
										"0.0099999998 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.75",	\
										"0.01732 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.75",	\
										"0.02 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.75",	\
										"0.01732 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.75",	\
										"0.0099999998 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.75",	\
										"0 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.75",	\
										"-0.0099999998 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.75",	\
										"-0.01732 * 0.75"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.75",	\
										"-0.02 * 0.75"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.6",	\
										"-0.02 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.6",	\
										"-0.01732 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.6",	\
										"-0.0099999998 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.6",	\
										"0 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.6",	\
										"0.0099999998 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.6",	\
										"0.01732 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.6",	\
										"0.02 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.6",	\
										"0.01732 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.6",	\
										"0.0099999998 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.6",	\
										"0 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.6",	\
										"-0.0099999998 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.6",	\
										"-0.01732 * 0.6"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.6",	\
										"-0.02 * 0.6"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.5",	\
										"-0.02 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.5",	\
										"-0.01732 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.5",	\
										"-0.0099999998 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.5",	\
										"0 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.5",	\
										"0.0099999998 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.5",	\
										"0.01732 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.5",	\
										"0.02 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.5",	\
										"0.01732 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.5",	\
										"0.0099999998 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.5",	\
										"0 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.5",	\
										"-0.0099999998 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.5",	\
										"-0.01732 * 0.5"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.5",	\
										"-0.02 * 0.5"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.4",	\
										"-0.02 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.4",	\
										"-0.01732 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.4",	\
										"-0.0099999998 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.4",	\
										"0 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.4",	\
										"0.0099999998 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.4",	\
										"0.01732 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.4",	\
										"0.02 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.4",	\
										"0.01732 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.4",	\
										"0.0099999998 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.4",	\
										"0 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.4",	\
										"-0.0099999998 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.4",	\
										"-0.01732 * 0.4"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.4",	\
										"-0.02 * 0.4"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.30",	\
										"-0.02 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.30",	\
										"-0.01732 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.30",	\
										"-0.0099999998 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.30",	\
										"0 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.30",	\
										"0.0099999998 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.30",	\
										"0.01732 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.30",	\
										"0.02 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.30",	\
										"0.01732 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.30",	\
										"0.0099999998 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.30",	\
										"0 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.30",	\
										"-0.0099999998 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.30",	\
										"-0.01732 * 0.30"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.30",	\
										"-0.02 * 0.30"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.20",	\
										"-0.02 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.20",	\
										"-0.01732 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.20",	\
										"-0.0099999998 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.20",	\
										"0 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.20",	\
										"0.0099999998 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.20",	\
										"0.01732 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.20",	\
										"0.02 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.20",	\
										"0.01732 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.20",	\
										"0.0099999998 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.20",	\
										"0 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.20",	\
										"-0.0099999998 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.20",	\
										"-0.01732 * 0.20"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.20",	\
										"-0.02 * 0.20"	\
									},	\
									1	\
								},	\
								{},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.1",	\
										"-0.02 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.1",	\
										"-0.01732 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.1",	\
										"-0.0099999998 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.02 * 0.1",	\
										"0 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.01732 * 0.1",	\
										"0.0099999998 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0.0099999998 * 0.1",	\
										"0.01732 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.1",	\
										"0.02 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.1",	\
										"0.01732 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.1",	\
										"0.0099999998 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.02 * 0.1",	\
										"0 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.01732 * 0.1",	\
										"-0.0099999998 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"-0.0099999998 * 0.1",	\
										"-0.01732 * 0.1"	\
									},	\
									1	\
								},	\
									\
								{	\
									"Slip_Ball_X",	\
									1,	\
										\
									{	\
										"0 * 0.1",	\
										"-0.02 * 0.1"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class Torque_Group	\
					{	\
						condition="simulRTD";	\
						class Torque_number	\
						{	\
							type="text";	\
							align="left";	\
							scale=1;	\
							source="rtdRotorTorque";	\
							sourceScale=227;	\
							pos[]=	\
							{	\
								{0.064999998,0.175},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.115,0.175},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.064999998,0.22499999},	\
								1	\
							};	\
						};	\
						class Torquetext	\
						{	\
							type="text";	\
							source="static";	\
							text="%";	\
							align="right";	\
							scale=1;	\
							pos[]=	\
							{	\
								{0.07,0.175},	\
								1	\
							};	\
							right[]=	\
							{	\
								{0.12,0.175},	\
								1	\
							};	\
							down[]=	\
							{	\
								{0.07,0.22499999},	\
								1	\
							};	\
						};	\
						class Torque_box	\
						{	\
							type="group";	\
							condition="rtdRotorTorque+(1-112.5/120)";	\
							class Torque_box_D	\
							{	\
								type="line";	\
								width=3;	\
								points[]=	\
								{	\
										\
									{	\
											\
										{	\
											"0.010 + 0.000",	\
											"0.50 - 0.025 - 0.300"	\
										},	\
										1	\
									},	\
										\
									{	\
											\
										{	\
											"0.010 + 0.092",	\
											"0.50 - 0.025 - 0.300"	\
										},	\
										1	\
									},	\
										\
									{	\
											\
										{	\
											"0.010 + 0.092",	\
											"0.50 + 0.025 - 0.300"	\
										},	\
										1	\
									},	\
										\
									{	\
											\
										{	\
											"0.010 + 0.000",	\
											"0.50 + 0.025 - 0.300"	\
										},	\
										1	\
									},	\
										\
									{	\
											\
										{	\
											"0.010 + 0.000",	\
											"0.50 - 0.025 - 0.300"	\
										},	\
										1	\
									}	\
								};	\
							};	\
						};	\
					};	\
					class Vspeed_Scale	\
					{	\
						type="line";	\
						width=5;	\
						points[]=	\
						{	\
								\
							{	\
								{0.98000002,0.2},	\
								1	\
							},	\
								\
							{	\
								{1,0.2},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.93000001,0.2},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.2},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.98000002,0.34999999},	\
								1	\
							},	\
								\
							{	\
								{1,0.34999999},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.93000001,0.34999999},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.34999999},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.38},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.38},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.41},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.41},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.44},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.44},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.47},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.47},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.98000002,0.5},	\
								1	\
							},	\
								\
							{	\
								{1,0.5},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.93000001,0.5},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.5},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.52999997},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.52999997},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.56},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.56},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.58999997},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.58999997},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.94,0.62},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.62},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.98000002,0.64999998},	\
								1	\
							},	\
								\
							{	\
								{1,0.64999998},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.93000001,0.64999998},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.64999998},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.99000001,0.68000001},	\
								1	\
							},	\
								\
							{	\
								{0.98000002,0.68000001},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.99000001,0.70999998},	\
								1	\
							},	\
								\
							{	\
								{0.98000002,0.70999998},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.99000001,0.74000001},	\
								1	\
							},	\
								\
							{	\
								{0.98000002,0.74000001},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.99000001,0.76999998},	\
								1	\
							},	\
								\
							{	\
								{0.98000002,0.76999998},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.98000002,0.80000001},	\
								1	\
							},	\
								\
							{	\
								{1,0.80000001},	\
								1	\
							},	\
							{},	\
								\
							{	\
								{0.93000001,0.80000001},	\
								1	\
							},	\
								\
							{	\
								{0.94999999,0.80000001},	\
								1	\
							}	\
						};	\
					};	\
					class RadarAltitudeBand	\
					{	\
						clipTL[]={0,0.2};	\
						clipBR[]={1,0.80000001};	\
						condition="(208/3.28084) - altitudeAGL";	\
						class radarbanda	\
						{	\
							type="line";	\
							width=18;	\
							points[]=	\
							{	\
									\
								{	\
									"RadarAltitudeBone",	\
									{0,0},	\
									1	\
								},	\
									\
								{	\
									"RadarAltitudeBone",	\
									{0,0.60000002},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class VspeedBand	\
					{	\
						type="polygon";	\
						points[]=	\
						{	\
								\
							{	\
									\
								{	\
									"VspeedBone",	\
									{-0.0099999998,0},	\
									1	\
								},	\
									\
								{	\
									"VspeedBone",	\
									{-0.025,-0.015},	\
									1	\
								},	\
									\
								{	\
									"VspeedBone",	\
									{-0.025,0.015},	\
									1	\
								},	\
									\
								{	\
									"VspeedBone",	\
									{-0.0099999998,0},	\
									1	\
								}	\
							}	\
						};	\
					};	\
					class Fuel_Text	\
					{	\
						type="text";	\
						source="static";	\
						text="F";	\
						align="right";	\
						scale=1;	\
						pos[]=	\
						{	\
							{0.029999999,0.88999999},	\
							1	\
						};	\
						right[]=	\
						{	\
							{0.07,0.88999999},	\
							1	\
						};	\
						down[]=	\
						{	\
							{0.029999999,0.93000001},	\
							1	\
						};	\
					};	\
					class Fuel_Number	\
					{	\
						type="text";	\
						source="fuel";	\
						sourceScale=100;	\
						align="right";	\
						scale=1;	\
						pos[]=	\
						{	\
							{0.059999999,0.88999999},	\
							1	\
						};	\
						right[]=	\
						{	\
							{0.1,0.88999999},	\
							1	\
						};	\
						down[]=	\
						{	\
							{0.059999999,0.93000001},	\
							1	\
						};	\
					};	\
				};	\
			};	\
			class Kimi_HMD_Modes_Pilot	\
			{	\
				topLeft="HUD_top_left";	\
				topRight="HUD_top_right";	\
				bottomLeft="HUD_bottom_left";	\
				borderLeft=0;	\
				borderRight=0;	\
				borderTop=0;	\
				borderBottom=0;	\
				color[]={0.212,0.76899999,0.204,0.2};	\
				enableParallax=0;	\
				helmetMountedDisplay=1;	\
				helmetPosition[]={-0.039999999,0.039999999,0.1};	\
				helmetRight[]={0.079999998,0,0};	\
				helmetDown[]={0,-0.079999998,0};	\
				class Bones	\
				{	\
					class PlaneOrientation	\
					{	\
						type="fixed";	\
						pos[]={0.5,0.5};	\
					};	\
					class Limit0109	\
					{	\
						type="limit";	\
						limits[]={0.1,0.1,0.89999998,0.89999998};	\
					};	\
					class ForwardVec	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={0.21600001,0.21600001};	\
					};	\
					class ForwardVec_Center	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class ForwardVecPNVS	\
					{	\
						type="vector";	\
						source="forward";	\
						pos0[]={0,0};	\
						pos10[]={-0.055,-0.055};	\
					};	\
					class VspeedBone	\
					{	\
						type="linear";	\
						source="vspeed";	\
						sourceScale=1.9685;	\
						min=-20;	\
						max=20;	\
						minPos[]={0.93000001,0.2};	\
						maxPos[]={0.93000001,0.80000001};	\
					};	\
					class RadarAltitudeBone	\
					{	\
						type="linear";	\
						source="altitudeAGL";	\
						sourceOffset=-6;	\
						sourceScale=3.2808399;	\
						min=0;	\
						max=200;	\
						minPos[]={0.96499997,0.2};	\
						maxPos[]={0.96499997,0.80000001};	\
					};	\
					class WYPT_Tape_Bone	\
					{	\
						type="vector";	\
						source="wppoint";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
					};	\
					class Tape_Limit	\
					{	\
						type="limit";	\
						limits[]={0.2,0,0.80000001,1};	\
					};	\
					class Turret_Tape_Bone	\
					{	\
						type="vector";	\
						source="Turret";	\
						pos0[]={0.5,0.12800001};	\
						pos10[]=	\
						{	\
							"0.500 + 0.037",	\
							0.12800001	\
						};	\
						projection=1;	\
					};	\
					class GunnerAim	\
					{	\
						type="vector";	\
						source="turret";	\
						pos0[]={0,-2};	\
						pos10[]={0.0071700001,-0.0099999998};	\
						projection=0;	\
					};	\
					class Gunner_HAD_Limit	\
					{	\
						type="limit";	\
						limits[]={0.40000001,0.86000001,0.60000002,0.94};	\
					};	\
					class Slip_Ball_X	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0.5,0.84299999};	\
						pos10[]={0.51499999,0.84299999};	\
					};	\
					class GforceX_Slip	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						sourceScale=1;	\
						max=0.15000001;	\
						min=-0.15000001;	\
						minPos[]=	\
						{	\
							"0.5+0.1",	\
							"0.9-0.04-0.02"	\
						};	\
						maxPos[]=	\
						{	\
							"0.5-0.1",	\
							"0.9-0.04-0.02"	\
						};	\
					};	\
					class WeaponAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class TurretAimToView	\
					{	\
						type="vector";	\
						source="weapontoview";	\
						pos0[]={0.5,0.5};	\
						pos10[]=	\
						{	\
							"0.500 + 0.2165",	\
							"0.500 + 0.2165"	\
						};	\
					};	\
					class CCIP: ForwardVec_Center	\
					{	\
						source="impactpoint";	\
					};	\
					class CCIP_2_VIEW: CCIP	\
					{	\
						source="impactpointtoview";	\
					};	\
					class RocketAim: ForwardVec_Center	\
					{	\
						source="weapon";	\
					};	\
					class Target: ForwardVec_Center	\
					{	\
						source="target";	\
					};	\
					class Target2View: Target	\
					{	\
						source="targetToView";	\
					};	\
					class WYPT_2_VIEW: ForwardVec_Center	\
					{	\
						source="wppointtoview";	\
					};	\
					class Velocity: ForwardVec_Center	\
					{	\
						source="velocityToView";	\
					};	\
					class HorizonBankRot	\
					{	\
						type="rotational";	\
						source="horizonBank";	\
						center[]={0.5,0.5};	\
						min=-3.1415999;	\
						max=3.1415999;	\
						minAngle=-180;	\
						maxAngle=180;	\
						aspectRatio=1;	\
					};	\
					class Speed_X_Hover_P	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_X_Hover_N	\
					{	\
						type="vector";	\
						source="velocityToView";	\
						sourcescale="1";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0.02};	\
					};	\
					class Speed_Z_Hover	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=20;	\
						min=-20;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class Speed_X_Transition	\
					{	\
						type="vector";	\
						source="velocity";	\
						pos0[]={0,0};	\
						pos10[]={0.02,0};	\
					};	\
					class Speed_Z_Transition	\
					{	\
						type="linear";	\
						source="speed";	\
						sourcescale="1.94384";	\
						max=60;	\
						min=-60;	\
						minPos[]={0.5,0.25};	\
						maxPos[]={0.5,0.75};	\
					};	\
					class GforceX_Hover	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.25,0};	\
						maxPos[]={-0.25,0};	\
					};	\
					class GforceZ_Hover	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.25};	\
						maxPos[]={0,0.25};	\
					};	\
					class GforceX_Transition	\
					{	\
						type="linear";	\
						source="gmeterX";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0.1,0};	\
						maxPos[]={-0.1,0};	\
					};	\
					class GforceZ_Transition	\
					{	\
						type="linear";	\
						source="gmeterZ";	\
						Sourcescale=1;	\
						max=7;	\
						min=-7;	\
						minPos[]={0,-0.1};	\
						maxPos[]={0,0.1};	\
					};	\
					class Level0_Transition	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.64999998,0.64999998};	\
						angle=0;	\
					};	\
					class Level0	\
					{	\
						type="horizon";	\
						pos0[]={0.5,0.5};	\
						pos10[]={0.77999997,0.77999997};	\
						angle=0;	\
					};	\
					class LevelP5: Level0	\
					{	\
						angle=5;	\
					};	\
					class LevelM5: Level0	\
					{	\
						angle=-5;	\
					};	\
					class LevelP10: Level0	\
					{	\
						angle=10;	\
					};	\
					class LevelM10: Level0	\
					{	\
						angle=-10;	\
					};	\
					class LevelP15: Level0	\
					{	\
						angle=15;	\
					};	\
					class LevelM15: Level0	\
					{	\
						angle=-15;	\
					};	\
					class LevelP20: Level0	\
					{	\
						angle=20;	\
					};	\
					class LevelM20: Level0	\
					{	\
						angle=-20;	\
					};	\
					class LevelP25: Level0	\
					{	\
						angle=25;	\
					};	\
					class LevelM25: Level0	\
					{	\
						angle=-25;	\
					};	\
					class LevelP30: Level0	\
					{	\
						angle=30;	\
					};	\
					class LevelM30: Level0	\
					{	\
						angle=-30;	\
					};	\
					class LevelP35: Level0	\
					{	\
						angle=35;	\
					};	\
					class LevelM35: Level0	\
					{	\
						angle=-35;	\
					};	\
					class LevelP40: Level0	\
					{	\
						angle=40;	\
					};	\
					class LevelM40: Level0	\
					{	\
						angle=-40;	\
					};	\
					class LevelP45: Level0	\
					{	\
						angle=45;	\
					};	\
					class LevelM45: Level0	\
					{	\
						angle=-45;	\
					};	\
					class LevelP50: Level0	\
					{	\
						angle=50;	\
					};	\
					class LevelM50: Level0	\
					{	\
						angle=-50;	\
					};	\
				};	\
				class Draw	\
				{	\
					color[]=	\
					{	\
						"user3",	\
						"user4",	\
						"user5"	\
					};	\
					alpha="user6";	\
					condition="on*user0-user2";	\
					class WYPT_Group	\
					{	\
						type="group";	\
						condition="WPvalid";	\
						class WYPT_Block	\
						{	\
							type="group";	\
							condition="speed - (6*1.852/3.6)+1.94384";	\
							class WYPT_Text	\
							{	\
								type="text";	\
								source="static";	\
								text="W";	\
								align="left";	\
								scale=1;	\
								pos[]=	\
								{	\
									{0.029999999,0.75},	\
									1	\
								};	\
								right[]=	\
								{	\
									{0.07,0.75},	\
									1	\
								};	\
								down[]=	\
								{	\
									{0.029999999,0.79000002},	\
									1	\
								};	\
							};	\
							class WYPT_Index	\
							{	\
								type="text";	\
								source="WPIndex";	\
								sourceScale=1;	\
								align="right";	\
								scale=1;	\
								pos[]=	\
								{	\
									{0.039999999,0.75},	\
									1	\
								};	\
								right[]=	\
								{	\
									{0.079999998,0.75},	\
									1	\
								};	\
								down[]=	\
								{	\
									{0.039999999,0.79000002},	\
									1	\
								};	\
							};	\
							class WYPT_Distance	\
							{	\
								type="text";	\
								source="WPDist";	\
								sourceScale=0.001;	\
								sourceprecision=2;	\
								align="right";	\
								scale=1;	\
								pos[]=	\
								{	\
									{0.12,0.75},	\
									1	\
								};	\
								right[]=	\
								{	\
									{0.16,0.75},	\
									1	\
								};	\
								down[]=	\
								{	\
									{0.12,0.79000002},	\
									1	\
								};	\
							};	\
							class WYPT_KM	\
							{	\
								type="text";	\
								source="static";	\
								text="KM";	\
								align="left";	\
								scale=1;	\
								pos[]=	\
								{	\
									{0.22,0.75},	\
									1	\
								};	\
								right[]=	\
								{	\
									{0.25999999,0.75},	\
									1	\
								};	\
								down[]=	\
								{	\
									{0.22,0.79000002},	\
									1	\
								};	\
							};	\
							class Ground_Speed_M	\
							{	\
								type="group";	\
								condition="1-user1";	\
								class GS_M	\
								{	\
									type="text";	\
									source="Speed";	\
									sourceScale=3.5999999;	\
									align="center";	\
									scale=1;	\
									pos[]=	\
									{	\
										{0.029999999,0.79000002},	\
										1	\
									};	\
									right[]=	\
									{	\
										{0.07,0.79000002},	\
										1	\
									};	\
									down[]=	\
									{	\
										{0.029999999,0.82999998},	\
										1	\
									};	\
								};	\
							};	\
							class Ground_Speed_I	\
							{	\
								type="group";	\
								condition="user1";	\
								class GS_I	\
								{	\
									type="text";	\
									source="Speed";	\
									sourceScale=1.94384;	\
									align="center";	\
									scale=1;	\
									pos[]=	\
									{	\
										{0.029999999,0.79000002},	\
										1	\
									};	\
									right[]=	\
									{	\
										{0.07,0.79000002},	\
										1	\
									};	\
									down[]=	\
									{	\
										{0.029999999,0.82999998},	\
										1	\
									};	\
								};	\
							};	\
							class WYPT_TTG_6	\
							{	\
								type="group";	\
								condition="(6*1.852/3.6) - speed";	\
								class TTG_6	\
								{	\
									type="text";	\
									source="WPDist";	\
									sourceScale="1/(6*1.852/3.6)";	\
									align="right";	\
									scale=1;	\
									pos[]=	\
									{	\
										{0.13,0.79000002},	\
										1	\
									};	\
									right[]=	\
									{	\
										{0.17,0.79000002},	\
										1	\
									};	\
									down[]=	\
									{	\
										{0.13,0.82999998},	\
										1	\
									};	\
								};	\
							};	\
							class WYPT_TTG_10	\
							{	\
								type="group";	\
								condition="speed- ((10-6)*1.852/3.6)+1";	\
								class TTG_10	\
								{	\
									type="group";	\
									condition="(10*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(10*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_20	\
							{	\
								type="group";	\
								condition="speed- ((20-10)*1.852/3.6)+1";	\
								class TTG_20	\
								{	\
									type="group";	\
									condition="(20*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(20*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_30	\
							{	\
								type="group";	\
								condition="speed- ((30-10)*1.852/3.6)+1";	\
								class TTG_30	\
								{	\
									type="group";	\
									condition="(30*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(30*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_40	\
							{	\
								type="group";	\
								condition="speed- ((40-10)*1.852/3.6)+1";	\
								class TTG_40	\
								{	\
									type="group";	\
									condition="(40*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(40*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_50	\
							{	\
								type="group";	\
								condition="speed- ((50-10)*1.852/3.6)+1";	\
								class TTG_50	\
								{	\
									type="group";	\
									condition="(50*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(50*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_60	\
							{	\
								type="group";	\
								condition="speed- ((60-10)*1.852/3.6)+1";	\
								class TTG_60	\
								{	\
									type="group";	\
									condition="(60*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(60*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_70	\
							{	\
								type="group";	\
								condition="speed- ((70-10)*1.852/3.6)+1";	\
								class TTG_70	\
								{	\
									type="group";	\
									condition="(70*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(70*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_80	\
							{	\
								type="group";	\
								condition="speed- ((80-10)*1.852/3.6)+1";	\
								class TTG_80	\
								{	\
									type="group";	\
									condition="(80*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(80*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_90	\
							{	\
								type="group";	\
								condition="speed- ((90-10)*1.852/3.6)+1";	\
								class TTG_90	\
								{	\
									type="group";	\
									condition="(90*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(90*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_100	\
							{	\
								type="group";	\
								condition="speed- ((100-10)*1.852/3.6)+1";	\
								class TTG_100	\
								{	\
									type="group";	\
									condition="(100*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(100*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_110	\
							{	\
								type="group";	\
								condition="speed- ((110-10)*1.852/3.6)+1";	\
								class TTG_110	\
								{	\
									type="group";	\
									condition="(110*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(110*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_120	\
							{	\
								type="group";	\
								condition="speed- ((120-10)*1.852/3.6)+1";	\
								class TTG_120	\
								{	\
									type="group";	\
									condition="(120*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(120*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_130	\
							{	\
								type="group";	\
								condition="speed- ((130-10)*1.852/3.6)+1";	\
								class TTG_130	\
								{	\
									type="group";	\
									condition="(130*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(130*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_140	\
							{	\
								type="group";	\
								condition="speed- ((140-10)*1.852/3.6)+1";	\
								class TTG_140	\
								{	\
									type="group";	\
									condition="(140*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(140*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_150	\
							{	\
								type="group";	\
								condition="speed- ((150-10)*1.852/3.6)+1";	\
								class TTG_150	\
								{	\
									type="group";	\
									condition="(150*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(150*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_160	\
							{	\
								type="group";	\
								condition="speed- ((160-10)*1.852/3.6)+1";	\
								class TTG_160	\
								{	\
									type="group";	\
									condition="(160*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(160*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_170	\
							{	\
								type="group";	\
								condition="speed- ((170-10)*1.852/3.6)+1";	\
								class TTG_170	\
								{	\
									type="group";	\
									condition="(170*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(170*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_180	\
							{	\
								type="group";	\
								condition="speed- ((180-10)*1.852/3.6)+1";	\
								class TTG_180	\
								{	\
									type="group";	\
									condition="(180*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(180*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_190	\
							{	\
								type="group";	\
								condition="speed- ((190-10)*1.852/3.6)+1";	\
								class TTG_190	\
								{	\
									type="group";	\
									condition="(190*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(190*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_200	\
							{	\
								type="group";	\
								condition="speed- ((200-10)*1.852/3.6)+1";	\
								class TTG_200	\
								{	\
									type="group";	\
									condition="(200*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(200*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_210	\
							{	\
								type="group";	\
								condition="speed- ((210-10)*1.852/3.6)+1";	\
								class TTG_210	\
								{	\
									type="group";	\
									condition="(210*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(210*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_220	\
							{	\
								type="group";	\
								condition="speed- ((220-10)*1.852/3.6)+1";	\
								class TTG_220	\
								{	\
									type="group";	\
									condition="(220*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(220*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_230	\
							{	\
								type="group";	\
								condition="speed- ((230-10)*1.852/3.6)+1";	\
								class TTG_230	\
								{	\
									type="group";	\
									condition="(230*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(230*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_240	\
							{	\
								type="group";	\
								condition="speed- ((240-10)*1.852/3.6)+1";	\
								class TTG_240	\
								{	\
									type="group";	\
									condition="(240*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(240*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_250	\
							{	\
								type="group";	\
								condition="speed- ((250-10)*1.852/3.6)+1";	\
								class TTG_250	\
								{	\
									type="group";	\
									condition="(250*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(250*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_260	\
							{	\
								type="group";	\
								condition="speed- ((260-10)*1.852/3.6)+1";	\
								class TTG_260	\
								{	\
									type="group";	\
									condition="(260*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(260*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_270	\
							{	\
								type="group";	\
								condition="speed- ((270-10)*1.852/3.6)+1";	\
								class TTG_270	\
								{	\
									type="group";	\
									condition="(270*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(270*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_280	\
							{	\
								type="group";	\
								condition="speed- ((280-10)*1.852/3.6)+1";	\
								class TTG_280	\
								{	\
									type="group";	\
									condition="(280*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(280*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_290	\
							{	\
								type="group";	\
								condition="speed- ((290-10)*1.852/3.6)+1";	\
								class TTG_290	\
								{	\
									type="group";	\
									condition="(290*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(290*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
							class WYPT_TTG_300	\
							{	\
								type="group";	\
								condition="speed- ((300-10)*1.852/3.6)+1";	\
								class TTG_300	\
								{	\
									type="group";	\
									condition="(300*1.852/3.6) - speed";	\
									class TTG	\
									{	\
										type="text";	\
										source="WPDist";	\
										sourceScale="1/(300*1.852/3.6)";	\
										align="right";	\
										scale=1;	\
										pos[]=	\
										{	\
											{0.13,0.79000002},	\
											1	\
										};	\
										right[]=	\
										{	\
											{0.17,0.79000002},	\
											1	\
										};	\
										down[]=	\
										{	\
											{0.13,0.82999998},	\
											1	\
										};	\
									};	\
								};	\
							};	\
						};	\
					};	\
					class Hover_Box	\
					{	\
						type="group";	\
						condition="autohover";	\
						class Hover_box_box	\
						{	\
							type="line";	\
							width=3;	\
							points[]=	\
							{	\
									\
								{	\
										\
									{	\
										"0.02 + 0.00",	\
										"0.50 - 0.015"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.010",	\
										"0.50 - 0.025"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.065",	\
										"0.50 - 0.025"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.075",	\
										"0.50 - 0.015"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.075",	\
										"0.50 + 0.015"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.065",	\
										"0.50 + 0.025"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.010",	\
										"0.50 + 0.025"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.00",	\
										"0.50 + 0.015"	\
									},	\
									1	\
								},	\
									\
								{	\
										\
									{	\
										"0.02 + 0.00",	\
										"0.50 - 0.015"	\
									},	\
									1	\
								}	\
							};	\
						};	\
					};	\
					class Transition_Mode	\
					{	\
						type="group";	\
						condition="1-autohover";	\
						class Transition	\
						{	\
							type="group";	\
							condition="speed - (6*1.852/3.6)+1";	\
							class Transition_VV	\
							{	\
								type="group";	\
								condition="(60*1.852/3.6) - speed";	\
								class Velocity_Vector	\
								{	\
									type="line";	\
									width=2;	\
									points[]=	\
									{	\
											\
										{	\
											{0.5,0.5},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0 * 0.075",	\
												"-0.02 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0.0099999998 * 0.075",	\
												"-0.01732 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0.01732 * 0.075",	\
												"-0.0099999998 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0.02 * 0.075",	\
												"0 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0.01732 * 0.075",	\
												"0.0099999998 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0.0099999998 * 0.075",	\
												"0.01732 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0 * 0.075",	\
												"0.02 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"-0.0099999998 * 0.075",	\
												"0.01732 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"-0.01732 * 0.075",	\
												"0.0099999998 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"-0.02 * 0.075",	\
												"0 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"-0.01732 * 0.075",	\
												"-0.0099999998 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"-0.0099999998 * 0.075",	\
												"-0.01732 * 0.075"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
												\
											{	\
												"0 * 0.075",	\
												"-0.02 * 0.075"	\
											},	\
											1	\
										}	\
									};	\
								};	\
							};	\
							class Transition_Acceleration_ball	\
							{	\
								type="group";	\
								condition="(60*1.852/3.6) - speed";	\
								class Acceleration_ball	\
								{	\
									type="line";	\
									width=3;	\
									points[]=	\
									{	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0 * 0.50",	\
												"-0.02 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0.0099999998 * 0.50",	\
												"-0.01732 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0.01732 * 0.50",	\
												"-0.0099999998 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0.02 * 0.50",	\
												"0 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0.01732 * 0.50",	\
												"0.0099999998 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0.0099999998 * 0.50",	\
												"0.01732 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0 * 0.50",	\
												"0.02 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"-0.0099999998 * 0.50",	\
												"0.01732 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"-0.01732 * 0.50",	\
												"0.0099999998 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"-0.02 * 0.50",	\
												"0 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"-0.01732 * 0.50",	\
												"-0.0099999998 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"-0.0099999998 * 0.50",	\
												"-0.01732 * 0.50"	\
											},	\
											1	\
										},	\
											\
										{	\
											"Speed_Z_Transition",	\
											1,	\
											"Speed_X_Transition",	\
											1,	\
											"GforceZ_Transition",	\
											1,	\
											"GforceX_Transition",	\
											1,	\
												\
											{	\
												"0 * 0.50",	\
												"-0.02 * 0.50"	\
											},	\
											1	\
										}	\
									};	\
								};	\
							};	\
							class Transition_Horizon	\
							{	\
								clipTL[]={0.15000001,0.15000001};	\
								clipBR[]={0.85000002,0.85000002};	\
								type="group";	\
								class Horizon	\
								{	\
									class Level0	\
									{	\
										type="line";	\
										width=4;	\
										points[]=	\
										{	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*9",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*8",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*7",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*6",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*5",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*4",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*3",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"-0.05*2",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*9",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*8",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*7",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*6",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*5",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*4",	\
													0	\
												},	\
												1	\
											},	\
											{},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*3",	\
													0	\
												},	\
												1	\
											},	\
												\
											{	\
												"Level0_Transition",	\
													\
												{	\
													"0.05*2",	\
													0	\
												},	\
												1	\
											}	\
										};	\
									};	\
								};	\
							};	\
							class Transition_Bank	\
							{	\
								type="group";	\
								class Transition_Bank_Cue	\
								{	\
									type="polygon";	\
									points[]=	\
									{	\
											\
										{	\
												\
											{	\
												"HorizonBankRot",	\
												{0,0.25},	\
												1	\
											},	\
												\
											{	\
												"HorizonBankRot",	\
												{-0.0099999998,0.23},	\
												1	\
											},	\
												\
											{	\
												"HorizonBankRot",	\
												{0.0099999998,0.23},	\
												1	\
											}	\
										}	\
									};	\
								};	\
							};	\
						};	\
					};	\
					class Cruise_Mode	\
					{	\
						type="group";	\
						condition="1-autohover";	\
						class Cruise	\
						{	\
							type="group";	\
							condition="speed - (60*1.852/3.6)+1";	\
						};	\
					};	\
				};	\
			};	\
		};	\
		defaultUserMFDvalues[]={0,1,0,0,1,0,0.2};	\
		class UserActions: UserActions	\
		{	\
			class HMDs_Kimi_UserAction_0_ON	\
			{	\
				displayName="<t color='#26ff00'>HMD ON</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [0,1]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-1;	\
			};	\
			class HMDs_Kimi_UserAction_0_OFF	\
			{	\
				displayName="<t color='#ffff00'>HMD OFF</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [0,0]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-2;	\
			};	\
			class HMDs_Kimi_UserAction_1_IMPERIAL	\
			{	\
				displayName="<t color='#26ff00'>HMD IMPERIAL</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [1,1]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-3;	\
			};	\
			class HMDs_Kimi_UserAction_1_METRIC	\
			{	\
				displayName="<t color='#ffff00'>HMD METRIC</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [1,0]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-4;	\
			};	\
			class HMDs_Kimi_UserAction_2_FULL	\
			{	\
				displayName="<t color='#26ff00'>HMD FULL</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [2,0]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-5;	\
			};	\
			class HMDs_Kimi_UserAction_2_DECLUTTER	\
			{	\
				displayName="<t color='#ffff00'>HMD DECLUTTER</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [2,1]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-6;	\
			};	\
			class HMDs_Kimi_UserAction_345_COLOR_GREEN	\
			{	\
				displayName="<t color='#00ff00'>HMD GREEN</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [3,0];this SetUserMFDvalue [4,1];this SetUserMFDvalue [5,0];";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-7;	\
			};	\
			class HMDs_Kimi_UserAction_345_COLOR_YELLOW	\
			{	\
				displayName="<t color='#ffff00'>HMD YELLOW</t>";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [3,1];this SetUserMFDvalue [4,0.65];this SetUserMFDvalue [5,0];";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-8;	\
			};	\
			class HMDs_Kimi_UserAction_6_ALPHA_HIGH	\
			{	\
				displayName="HMD BRT HIGH";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [6,0.5]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-9;	\
			};	\
			class HMDs_Kimi_UserAction_6_ALPHA_MED	\
			{	\
				displayName="HMD BRT MED";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [6,0.2]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-10;	\
			};	\
			class HMDs_Kimi_UserAction_6_ALPHA_LOW	\
			{	\
				displayName="HMD BRT LOW";	\
				condition="(player in [driver this, this turretUnit [0]]) && (alive this)";	\
				statement="this SetUserMFDvalue [6,0.05]";	\
				position="pilotcontrol";	\
				radius=20;	\
				onlyforplayer=1;	\
				showWindow=1;	\
				hideOnUse=1;	\
				priority=-11;	\
			};	\
		};	\


