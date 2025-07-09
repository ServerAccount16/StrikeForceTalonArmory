class CfgMagazines
{
	//	Rifle
	class TCP_32Rnd_762x51_Mag;
	class SFT_32Rnd_762x51_Mag : TCP_32Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 32Rnd 7.62x51mm Magazine";
		ammo="OPTRE_B_762x51_Ball";
		count=32;
	};
	class SFT_32Rnd_762x51_Mag_Tracer : TCP_32Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 32Rnd 7.62x51mm Magazine [Tracer]";
		ammo="OPTRE_B_762x51_Tracer";
		tracersEvery=3;
		count=32;
	};
	class SFT_32Rnd_762x51_Mag_UW : TCP_32Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 32Rnd 7.62x51mm Magazine [UW]";
		ammo="OPTRE_B_762x51_UW";
		count=32;
	};
	//	AutoRifle
	class TCP_100Rnd_762x51_Mag;
	class SFT_100Rnd_762x51_mag : TCP_100Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 100Rnd 7.62x51mm Box Magazine [Tracer]";
		ammo="OPTRE_B_762x51_Tracer";
		count=100;
		mass=44.094;
		tracersEvery=3;
		ACE_isBelt = 1; 
	};
	class TCP_200Rnd_762x51_Mag;
	class SFT_200Rnd_762x51_Mag : TCP_200Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 200Rnd 7.62x51mm Box Magazine [Tracer]";
		ammo="OPTRE_B_762x51_Tracer";
		count=200;
		mass=88.188;
		tracersEvery=3;
		ACE_isBelt = 1;
	};
	class OPTRE_200Rnd_762x51_M118_M247A1_Box;
	class SFT_200Rnd_762x51_M247A1_Box : OPTRE_200Rnd_762x51_M118_M247A1_Box
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 200Rnd 7.62x51mm M247A1 Box Magazine [Tracer]";
		ammo="OPTRE_B_762x51_Tracer";
		count=200;
		mass=40;
		tracersEvery=3;
		ACE_isBelt = 1;
	};
	class OPTRE_50Rnd_127x99_M250_Box;
	class SFT_50Rnd_127x99_M250_Box : OPTRE_50Rnd_127x99_M250_Box
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 50Rnd 12.7x99mm Box Magazine [Tracer]";
		ammo="OPTRE_B_127x99_Ball_White";
		count=50;
		tracersEvery=3;
		ACE_isBelt = 1;
	};
	class OPTRE_M739_SAW_192rnd_Box;
	class SFT_762x51_M739_Box : OPTRE_M739_SAW_192rnd_Box
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 192Rnd 7.62x51mm Box Magazine [Tracer]";
		ammo="OPTRE_B_762x51_Tracer";
		count=192;
		tracersEvery=3;
		ACE_isBelt = 1;
	};
	// DMR
	class TCP_15Rnd_762x51_Mag;
	class SFT_15Rnd_762x51_Mag : TCP_15Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 15Rnd 7.62x51mm Armor Piercing Magazine";
		ammo="OPTRE_B_762x51_AP";
		count=15;
		tracersEvery=0;
	};
	class SFT_15Rnd_762x51_Mag_Tracer : TCP_15Rnd_762x51_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 15Rnd 7.62x51mm Armor Piercing Magazine [Tracer]";
		ammo="OPTRE_B_762x51_AP";
		count=15;
		tracersEvery=3;
	};
	// VK78
	class TCP_20Rnd_65x57_Mag;
	class SFT_20Rnd_65x57_Mag : TCP_20Rnd_65x57_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 20Rnd 6.5x57mm Magazine";
		ammo="OPTRE_65_Creedmoor";
		count=20;
		tracersEvery=0;
	};
	class SFT_20Rnd_65x57_Mag_Tracer : TCP_20Rnd_65x57_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 20Rnd 6.5x57mm Magazine [Tracer]";
		ammo="OPTRE_65_Tracer_R";
		count=20;
		tracersEvery=3;
	};
	// M6J
	class TCP_24Rnd_127x30_Mag;
	class SFT_24Rnd_127x30_46_Mag : TCP_24Rnd_127x30_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 24Rnd 12.7x30mm Magazine";
		ammo="OPTRE_B_127x40_Ball";
		count=24;
		tracersEvery=0;
	};
	class SFT_24Rnd_127x30_46_Mag_Tracer : TCP_24Rnd_127x30_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 24Rnd 12.7x30mm Magazine [Tracer]";
		ammo="OPTRE_B_127x40_Tracer";
		count=24;
		tracersEvery=0;
	};
	class TCP_12Rnd_127x30_46_Mag;
	class SFT_12Rnd_127x30_46_Mag : TCP_12Rnd_127x30_46_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 12Rnd 12.7x30mm Magazine";
		ammo="OPTRE_B_127x40_Ball";
		count=12;
		tracersEvery=0;
	};
	class SFT_12Rnd_127x30_46_Mag_Tracer : TCP_12Rnd_127x30_46_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 12Rnd 12.7x30mm Magazine [Tracer]";
		ammo="OPTRE_B_127x40_Tracer";
		count=12;
		tracersEvery=3;
	};
	class TCP_12Rnd_127x30_52_Mag;
	class SFT_12Rnd_127x30_52_Mag : TCP_12Rnd_127x30_52_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 12Rnd 12.7x30mm Magazine [SOCOM]";
		ammo="OPTRE_B_127x40_Tracer";
		count=12;
		tracersEvery=0;
	};
	class TCP_2Rnd_102mm_Mag_HEAT;
	class SFT_2Rnd_102mm_Mag_HEAT : TCP_2Rnd_102mm_Mag_HEAT
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 2Rnd 102mm HEAT Unguided Rocket Pod";
		ammo="OPTRE_M41_Rocket_HEAT";
		count=2;
		tracersEvery=0;
	};
	class SFT_2Rnd_102mm_Mag_HEAP : TCP_2Rnd_102mm_Mag_HEAT
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 2Rnd 102mm HEAP Unguided Rocket Pod";
		ammo="OPTRE_M41_Rocket_HEAP";
		count=2;
		tracersEvery=0;
	};
	class SFT_2Rnd_102mm_Mag_HEAT_G : TCP_2Rnd_102mm_Mag_HEAT
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 2Rnd 102mm HEAT Guided Rocket Pod";
		ammo="OPTRE_M41_Rocket_HEAT_G";
		count=2;
		tracersEvery=0;
	};
	class SFT_2Rnd_102mm_Mag_HEAT_SACLOS : TCP_2Rnd_102mm_Mag_HEAT
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 2Rnd 102mm HEAT SACLOS Rocket Pod";
		ammo="OPTRE_M41_Rocket_HEAT_SACLOS";
		count=2;
		tracersEvery=0;
	};
	class SFT_2Rnd_102mm_Mag_HEAT_G_AA : TCP_2Rnd_102mm_Mag_HEAT
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 2Rnd 102mm HEAT Guided AA Rocket Pod";
		ammo="OPTRE_M41_Rocket_HEAT_G_AA";
		count=2;
		tracersEvery=0;
	};
	class SFT_2Rnd_102mm_Mag_HEAT_SALH : TCP_2Rnd_102mm_Mag_HEAT
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 2Rnd 102mm HEAT SALH Rocket Pod";
		ammo="OPTRE_M41_Rocket_HEAT_Laser";
		count=2;
		tracersEvery=0;
	};
	class M319_HEDP_Grenade_Shell;
	class SFT_M319_HEDP_Grenade_Shell : M319_HEDP_Grenade_Shell
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd M319 HEDP";
		count=3;
	};
	class M319_HE_Grenade_Shell;
	class SFT_M319_HE_Grenade_Shell : M319_HE_Grenade_Shell
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd M319 HE";
		count=3;
	};
	class M319_HEAT_Grenade_Shell;
	class SFT_M319_HEAT_Grenade_Shell : M319_HEAT_Grenade_Shell
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd M319 HEAT";
		count=3;
	};
	class OPTRE_signalSmokeB;
	class SFT_signalSmokeB : OPTRE_signalSmokeB
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd Flare Smoke Blue";
		count=3;
	};
	class OPTRE_signalSmokeG;
	class SFT_signalSmokeG : OPTRE_signalSmokeG
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd Flare Smoke Green";
		count=3;
	};
	class OPTRE_signalSmokeO;
	class SFT_signalSmokeO : OPTRE_signalSmokeO
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd Flare Smoke Orange";
		count=3;
	};
	class OPTRE_signalSmokeP;
	class SFT_signalSmokeP : OPTRE_signalSmokeP
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd Flare Smoke Purple";
		count=3;
	};
	class OPTRE_signalSmokeR;
	class SFT_signalSmokeR : OPTRE_signalSmokeR
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd Flare Smoke Red";
		count=3;
	};
	class OPTRE_signalSmokeY;
	class SFT_signalSmokeY : OPTRE_signalSmokeY
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 3Rnd Flare Smoke Yellow";
		count=3;
	};
	// 12g
	class TCP_1Rnd_12Gauge_Pellets;
	class SFT_1Rnd_12Gauge_Pellets : TCP_1Rnd_12Gauge_Pellets
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 1Rnd 12g Pellet Shell";
		ammo="OPTRE_8Gauge_Pellets";
		count=1;
	};
	class SFT_6Rnd_12Gauge_Pellets : SFT_1Rnd_12Gauge_Pellets
	{
		displayName="REMOVE!";
	};
	class TCP_6Rnd_Internal_Mag;
	class SFT_6Rnd_Internal_Mag : TCP_6Rnd_Internal_Mag
	{
		author="Weber";
		dlc="SFT";
		scope=1;
		displayName="Internal Magazine";
		ammo="OPTRE_8Gauge_Pellets";
		count=6;
	};
	class TCP_1Rnd_12Gauge_Slug;
	class SFT_1Rnd_12Gauge_Slug : TCP_1Rnd_12Gauge_Slug
	{
		author="Weber";
		dlc="SFT";
		scope=2;
		displayName="[SFT] 1Rnd 12g Slug Shell";
		ammo="OPTRE_8Gauge_Slugs";
		count=1;
	};
	class SFT_6Rnd_12Gauge_Slug : SFT_1Rnd_12Gauge_Slug
	{
		displayName="REMOVE!";
	};
};