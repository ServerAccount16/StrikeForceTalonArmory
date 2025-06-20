class XtdGearModels
{
    class CfgWeapons
    {
        /*
            ODST Generated Custom Gear
        */
        class M56_CustomVests
        {
            label = "[MA] M56 Custom";
            author = "Misriah Armoury";
            options[] = {"Chestplate","LegArmour","LeftPauldron","RightPauldron","ForearmLeft","ForearmRight","ThighPouch","Canisters"};
            class Chestplate
            {
                values[] = {"Halo 3","Reach"};
            };
            class LegArmour
            {
                values[] = {"Halo 3","Reach"};
            };
            class LeftPauldron
            {
                values[] = {"Halo 3","Reach","Reach Radio","CQB","Sniper","None"};
            };
            class RightPauldron
            {
                values[] = {"Halo 3","Reach","Reach Radio","CQB","Sniper","None"};
            };
            class ForearmLeft
            {
                values[] = {"Halo 3","Halo 3 Vent","Reach","Reach Vent","None"};
            };
            class ForearmRight
            {
                values[] = {"Halo 3","Halo 3 Vent","Reach","Reach Vent","None"};
            };
            class ThighPouch
            {
                values[] = {"Yes","No"};
            };
            class Canisters
            {
                values[] = {"Yes","No"};
            };
        };

        class MA_Standard_Vests
        {
            label="[MA] M56 Standard Variants";
            author="Misriah Armory";
            options[]=
            {
                "Variant"
            };
            class Variant
            {
                values[]=
                {
                    "M56S",
                    "M56S_Medic",
                    "M56S_Recon",
                    "M56S_Light",
                    "M56R",
                    "M56R_Medic",
                    "M56R_Recon",
                    "M56R_Light",
                    "M56R_Radio",
                    "M56R_ODST_Radio",
                    "M56R_CQB",
                    "M56R_Sniper"
                };

                class M56S_Medic
                {
                    label="M56S (Medic)";
                };
                class M56S_Recon
                {
                    label="M56S (Recon)";
                };
                class M56S_Light
                {
                    label="M56S (Light)";
                };
                class M56R_Medic
                {
                    label="M56R (Medic)";
                };
                class M56R_Recon
                {
                    label="M56R (Recon)";
                };
                class M56R_Light
                {
                    label="M56R (Light)";
                };
                class M56R_Radio
                {
                    label="M56R (Radio)";
                };
                class M56R_ODST_Radio
                {
                    label="M56R (ODST Radio)";
                };
                class M56R_CQB
                {
                    label="M56R (CQB)";
                };
                class M56R_Sniper
                {
                    label="M56R (Sniper)";
                };
            }
        };
    };
};

