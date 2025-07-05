class XtdGearModels
{
  class CfgWeapons 
  {
    class SFT_Vests_Enlisted
    {
      label = "[SFT] M52D Vests Enlisted";
      author = "Weber";
      options[] = {"MOS","Rank", "Unit"};
      class MOS // coventional name
      {
        values[] = 
        {
          "Rifleman1",
          "Rifleman1CLS",
          "Rifleman2",
          "Rifleman3",
          "Autorifleman",
          "Marksman",
          "Combat_Engineer",
          "Breacher",
          "Hellbringer",
          "Sniper"
        };
      };
      class Rank
      {
        label = "Rank";
        values[] = 
        {
          "Recruit",
          "Private",
          "PFC",
          "LCpl",
          "Corporal"
        };
        changeingame = 1;
        alwaysSelectable = 1; // allows the selection of the values even if there isn't an item with a complete match of options available, falling back to a weak match with this single value (optional)
        // changedelay = 2; If can changeingame, wait delay before change is effective (can be 0, 0.1, or more)
        // icon = "xxx"; If can changeingame, action group icon in ACE menu
      };
      class Unit
      {
        values[] = 
        {
          "Eagle",
          "Vulture",
          "Osprey",
          "Cardinal",
          "Auxiliary"
        };
      };
    };
    class SFT_Vests_NCO
    {
      label = "[SFT] M52D Vests NCO";
      author = "Weber";
      options[] = {"MOS","Rank", "Unit"};
      class MOS
      {
        values[] = 
        {
          "Rifleman1",
          "Rifleman1CLS",
          "Rifleman2",
          "Rifleman3",
          "Autorifleman",
          "Marksman",
        };
      };
      class Rank
      {
        label = "Rank";
        values[] = 
        {
          "Sergeant",
          "StaffSergeant",
          "GunnerySergeant",
          "MasterSergeant",
        };
        changeingame = 1;
        alwaysSelectable = 1;
      };
      class Unit
      {
        values[] = 
        {
          "Eagle",
          "Vulture",
          "Osprey",
          "Cardinal",
          "Auxiliary"
        };
      };
    };
    class SFT_Vests_CO
    {
      label = "[SFT] M52D Vests CO";
      author = "Weber";
      options[] = {"MOS","Rank", "Unit"};
      class MOS
      {
        values[] = 
        {
          "Rifleman1",
          "Rifleman1CLS",
          "Rifleman2",
          "Rifleman3"
        };
      };
      class Rank
      {
        label = "Rank";
        values[] = 
        {
          "Sergeant",
          "StaffSergeant",
          "GunnerySergeant",
          "MasterSergeant",
        };
        changeingame = 1;
        alwaysSelectable = 1;
      };
      class Unit
      {
        values[] = 
        {
          "Eagle",
          "Vulture",
          "Osprey",
          "Cardinal",
          "Auxiliary"
        };
      };
    };
    class SFT_Vests_Corpsman
    {
      label = "[SFT] M52D Vests Corpsman";
      author = "Weber";
      options[] = {"MOS","Rank", "Unit"};
      class MOS
      {
        values[] = 
        {
          "Corpsman1",
          "Corpsman2"
        };
      };
      class Rank
      {
        label = "Rank";
        values[] = 
        {
          "HR",
          "HM3",
          "HM2",
          "HM1",
          "HMC"
        };
        changeingame = 1;
        alwaysSelectable = 1;
      };
      class Unit
      {
        values[] = 
        {
          "Eagle",
          "Vulture",
          "Osprey",
          "Cardinal",
          "Auxiliary"
        };
      };
    };
    class SFT_Vests_Logistics
    {
      label = "[SFT] M52D Vests Logistics";
      author = "Weber";
      options[] = {"MOS","Rank", "Unit"};
      class MOS
      {
        values[] = 
        {
          "Crewman",
          "Pilot"
        };
      };
      class Rank
      {
        label = "Rank";
        values[] = 
        {
          "CrewmanRecruit",
          "PO3",
          "PO2",
          "PPO1",
          "CPO",
          "SCPO"
        };
        changeingame = 1;
        alwaysSelectable = 1;
      };
      class Unit
      {
        values[] = 
        {
          "Canary"
        };
      };
    };
  };
};