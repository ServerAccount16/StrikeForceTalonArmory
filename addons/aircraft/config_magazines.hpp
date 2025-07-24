class cfgMagazines
{
  class 60Rnd_40mm_GPR_Tracer_Red_shells;
  class SFT_60Rnd_40mm_HE : 60Rnd_40mm_GPR_Tracer_Red_shells
  {
    author = "Weber";
    displayName = "[SFT] 60Rnd 40mm SAPHE";
    displayNameShort = "40mm SAPHE";
    count = 60;
    mass = 100;
    tracersEvery=3;
    ammo = "SFT_40mmHE";
  };

  class 40Rnd_40mm_APFSDS_Tracer_Red_shells;
  class SFT_60Rnd_40mm_AP : 40Rnd_40mm_APFSDS_Tracer_Red_shells
  {
    author = "Weber";
    displayName = "[SFT] 60Rnd 40mm APFSDS";
    displayNameShort = "40mm APFSDS";
    count = 60;
    mass = 100;
    tracersEvery=3;
    ammo = "SFT_40mmAP";
  };

  class OPTRE_2000Rnd_20mm_HEIAP;
  class SFT_2000rnd_20mm: OPTRE_2000Rnd_20mm_HEIAP
  {
    ammo = "SFT_20mm_HEIAP";
  };

  class 12Rnd_missiles;
  class SFT_16rnd_Anvil1_HE: 12Rnd_missiles
  {
		scope	= 2;
		displayName	= "'ANVIL I' HE Rocket Pod";
		displayNameShort = "HE Rocket";
    descriptionShort = "[SFT] Unguided 16x HE 'Anvil 1' Rocket Pod";

		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect	= "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		reloadSound[]	= {"",0.000316228,1,20};
		nameSound	= "rockets";
		
		initSpeed	= 44;
		maxLeadSpeed = 200;

		pylonWeapon	= "SFT_Anvil_1";
    ammo = "SFT_ammo_Anvil1_HE";
    count = 16;
    mirrorMissilesIndexes[] = { 1,2 };

    hardpoints[] = 
    {
      "SFT_Anvil"
    };
  };

  class SFT_16rnd_Anvil1_HEAT: SFT_16rnd_Anvil1_HE
  {
		displayName	= "'ANVIL I' HEAT Rocket Pod";
		displayNameShort = "HEAT Rocket";
    descriptionShort = "[SFT] Unguided 16x HEAT 'Anvil 1' Rocket Pod";

    ammo = "SFT_ammo_Anvil1_HEAT";
  };

};