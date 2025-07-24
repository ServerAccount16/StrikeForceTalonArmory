#define FALCON_HIDDENSELECTIONSTEXTURES_STANDARD \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_main_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_attachments_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_interior_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_glass_ca.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_glass_ca.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_decal_ca.paa" \

#define FALCON_HIDDENSELECTIONSTEXTURES_DAP \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\dap\falcon_main_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_attachments_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_interior_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_glass_ca.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_glass_ca.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_decal_ca.paa" \


#define FALCON_HIDDENSELECTIONSTEXTURES_MEDICAL \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_main_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_attachments_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_interior_co.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_glass_ca.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\standard\falcon_glass_ca.paa", \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\falcon\data\medical\falcon_decal_ca.paa" \

#define HORNET_HIDDENSELECTIONS_TEXTURES \
  "\x\strikeforcetalon_armory\addons\sft_aircraft\hornet\data\standard\hornet_hull.paa"

#define PILOTCAMERA_FALCON \
		class pilotCamera                                                                                   \
		{                                                                                                   \
			class OpticsIn                                                                                    \
			{                                                                                                 \
				class Wide                                                                                      \
				{                                                                                               \
					opticsDisplayName="WFOV";                                                                     \
					initAngleX=0;                                                                                 \
					minAngleX=-105;                                                                               \
					maxAngleX=105;                                                                                \
					initAngleY=0;                                                                                 \
					minAngleY=-30;                                                                                \
					maxAngleY=90;                                                                                 \
					initFov="(30 / 120)";                                                                         \
					minFov="(30 / 120)";                                                                          \
					maxFov="(30 / 120)";                                                                          \
					directionStabilized=1;                                                                        \
					visionMode[]=                                                                                 \
					{                                                                                             \
						"Normal",                                                                                   \
						"NVG",                                                                                      \
						"Ti"                                                                                        \
					};                                                                                            \
					thermalMode[]={0,1};                                                                          \
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";        \
					opticsPPEffects[]=                                                                            \
					{                                                                                             \
						"OpticsCHAbera2",                                                                           \
						"OpticsBlur2"                                                                               \
					};                                                                                            \
				};                                                                                              \
				class Medium: Wide                                                                              \
				{                                                                                               \
					opticsDisplayName="MFOV";                                                                     \
					initFov="(6 / 120)";                                                                          \
					minFov="(6 / 120)";                                                                           \
					maxFov="(6 / 120)";                                                                           \
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";      \
				};                                                                                              \
				class Narrow: Wide                                                                              \
				{                                                                                               \
					opticsDisplayName="NFOV";                                                                     \
					initFov="(2 / 120)";                                                                          \
					minFov="(2 / 120)";                                                                           \
					maxFov="(2 / 120)";                                                                           \
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";      \
				};                                                                                              \
				showMiniMapInOptics=0;                                                                          \
				showUAVViewInOptics=0;                                                                          \
				showSlingLoadManagerInOptics=0;                                                                 \
			};                                                                                                \
			minTurn=-105;                                                                                     \
			maxTurn=105;                                                                                      \
			initTurn=0;                                                                                       \
			minElev=-30;                                                                                      \
			maxElev=90;                                                                                       \
			initElev=0;                                                                                       \
			maxXRotSpeed=1;                                                                                   \
			maxYRotSpeed=1;                                                                                   \
			maxMouseXRotSpeed=0.5;                                                                            \
			maxMouseYRotSpeed=0.5;                                                                            \
			pilotOpticsShowCursor=1;                                                                          \
			controllable=1;                                                                                   \
		};                                                                                                  


#define PILOTCAMERA_HORNET																					\
    class pilotCamera                                                                                  		 \
		{                                                                                                   \
			class OpticsIn                                                                                    \
			{                                                                                                 \
				class Wide                                                                                      \
				{                                                                                               \
					opticsDisplayName="WFOV";                                                                     \
					initAngleX=0;                                                                                 \
					minAngleX=-140;                                                                               \
					maxAngleX=140;                                                                                \
					initAngleY=0;                                                                                 \
					minAngleY=-30;                                                                                \
					maxAngleY=90;                                                                                 \
					initFov="(30 / 120)";                                                                         \
					minFov="(30 / 120)";                                                                          \
					maxFov="(30 / 120)";                                                                          \
					directionStabilized=1;                                                                        \
					visionMode[]=                                                                                 \
					{                                                                                             \
						"Normal",                                                                                   \
						"NVG",                                                                                      \
						"Ti"                                                                                        \
					};                                                                                            \
					thermalMode[]={0,1};                                                                          \
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";        \
					opticsPPEffects[]=                                                                            \
					{                                                                                             \
						"OpticsCHAbera2",                                                                           \
						"OpticsBlur2"                                                                               \
					};                                                                                            \
				};                                                                                              \
				class Medium: Wide                                                                              \
				{                                                                                               \
					opticsDisplayName="MFOV";                                                                     \
					initFov="(6 / 120)";                                                                          \
					minFov="(6 / 120)";                                                                           \
					maxFov="(6 / 120)";                                                                           \
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";      \
				};                                                                                              \
				class Narrow: Wide                                                                              \
				{                                                                                               \
					opticsDisplayName="NFOV";                                                                     \
					initFov="(2 / 120)";                                                                          \
					minFov="(2 / 120)";                                                                           \
					maxFov="(2 / 120)";                                                                           \
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";      \
				};                                                                                              \
				showMiniMapInOptics=0;                                                                          \
				showUAVViewInOptics=0;                                                                          \
				showSlingLoadManagerInOptics=0;                                                                 \
			};                                                                                                \
			minTurn=-140;                                                                                     \
			maxTurn=140;                                                                                      \
			initTurn=0;                                                                                       \
			minElev=-30;                                                                                      \
			maxElev=90;                                                                                       \
			initElev=0;                                                                                       \
			maxXRotSpeed=1;                                                                                   \
			maxYRotSpeed=1;                                                                                   \
			maxMouseXRotSpeed=0.5;                                                                            \
			maxMouseYRotSpeed=0.5;                                                                            \
			pilotOpticsShowCursor=1;                                                                          \
			controllable=1;                                                                                   \
		};                                                                                                  \


#define FALCON_FLIGHTMODEL         \
    bodyFrictionCoef=0.7;          \
    cyclicAsideForceCoef=3.4;      \
    cyclicForwardForceCoef=1.35;   \
    liftForceCoef=1.9;             \
    maxSpeed=280;                  
