#include "config_macros.hpp"

class CfgPatches {
  class SFT_motorized {
    units[] = {
      "SFT_M12_LRV", "SFT_M12_LRV_M41"
    };
    requiredVersion = 0.1;
  };
};
/*
class CfgVehicles
{
	class TCP_B_M12_F;
  class SFT_M12_LRV : TCP_B_M12_F
  {
    author = "Weber";
    displayName = "[SFT] M12 LRV";
    icon = "OPTRE_Vehicles\Warthog\Data\icon.paa";
    faction = "SFT_BLUE_SFT_F";
    //crew = "SFT";
    class AcreRacks {
      class Rack_1 {
        displayName = "Dash";
        shortName = "Dash";
        componentName = "ACRE_VRC103";
        allowedPositions[] = {"driver", "commander"};
        disabledPositions[] = {};
        defaultComponents[] = {};
        mountedRadio = "ACRE_PRC117F";
        isRadioRemovable = 0;
        intercom[] = {"intercom_1"};
      };
    };
    class Sounds
		{
			class Idle_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_idle.ogg",0.3981072,1,150};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low2.ogg",0.4566836,1,250};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low1.ogg",0.5623413,1,300};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_high.ogg",0.7179458,1,350};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_mid.ogg",1.2,1,400};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_exhaust_idle.ogg",0.5523413,1,200};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low2.ogg",0.7179458,1,350};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low1.ogg",0.9012509,1,400};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_high.ogg",1.222018,1,425};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_mid.ogg",1.268925,1,450};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_idle.ogg",0.2511886,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low2.ogg",0.3262278,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low1.ogg",0.3981072,1};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_high.ogg",0.5111872,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_mid.ogg",0.6409574,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_idle.ogg",0.3548134,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low2.ogg",0.4566836,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low1.ogg",0.5623413,1};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_high.ogg",0.7179458,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_mid.ogg",0.8043282,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.412538,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.412538,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.258925,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.122018,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.258925,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.122018,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.122018,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5623413,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Siren_int
			{
				sound[] = {"a3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_Int_Loop",0.3981072,1};
				frequency = 1;
				volume = "1  * 1 * CustomSoundController1";
			};
			class Siren_ext
			{
				sound[] = {"a3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_Ext_Loop",0.5623413,1,550};
				frequency = 1;
				volume = "1  * 0.7 * CustomSoundController1";
			};
		};
  };
	class TCP_M12_LAAG_M41_base;
	class TCP_B_M12_LAAG_M41 : TCP_M12_LAAG_M41_base
	{
		class Turrets;
		class CargoTurret_01;
		class MainTurret;
	};
	class SFT_M12_LRV_M41 : TCP_B_M12_LAAG_M41
	{
		author = "Weber";
		displayName = "[SFT] M12 LRV M41";
		icon = "OPTRE_Vehicles\Warthog\Data\icon.paa";
		faction = "SFT_BLUE_SFT_F";
		//crew = "SFT";
		class AcreRacks {
			class Rack_1 {
				displayName = "Dash";
				shortName = "Dash";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"driver", "commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01{};
			class MainTurret : MainTurret
			{
				weapons[] = {"OPTRE_M41_LAAG"};
				magazines[] = {"OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41"};
			};
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_idle.ogg",0.3981072,1,150};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low2.ogg",0.4566836,1,250};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low1.ogg",0.5623413,1,300};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_high.ogg",0.7179458,1,350};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_mid.ogg",1.2,1,400};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_ext_exhaust_idle.ogg",0.5523413,1,200};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low2.ogg",0.7179458,1,350};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low1.ogg",0.9012509,1,400};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_high.ogg",1.222018,1,425};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_mid.ogg",1.268925,1,450};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_idle.ogg",0.2511886,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low2.ogg",0.3262278,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_low1.ogg",0.3981072,1};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_high.ogg",0.5111872,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_mid.ogg",0.6409574,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_idle.ogg",0.3548134,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low2.ogg",0.4566836,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_low1.ogg",0.5623413,1};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_high.ogg",0.7179458,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\OPTRE_Vehicles\Warthog\data\sound\warthog_h3_int_exhaust_mid.ogg",0.8043282,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.412538,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.412538,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.258925,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.122018,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.258925,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.122018,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.122018,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.7079458,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5623413,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Siren_int
			{
				sound[] = {"a3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_Int_Loop",0.3981072,1};
				frequency = 1;
				volume = "1  * 1 * CustomSoundController1";
			};
			class Siren_ext
			{
				sound[] = {"a3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_Ext_Loop",0.5623413,1,550};
				frequency = 1;
				volume = "1  * 0.7 * CustomSoundController1";
			};
		};
	};
};*/