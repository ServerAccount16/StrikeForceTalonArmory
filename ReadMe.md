# 12th Marine Expeditionary Unit Assets

## Git Description

This repository is for the 12th MEU ArmA unit.

## This Mods Contains:

### `./addons/` Folder

The `./addons/` folder contains all of the folders used in the building process. Each folder within /addons can be thought of as an unpacked PBO file.

`12th_vests`: Contains any and all customized vests.
`12th_backpacks`: Contains any and all customized backpacks.
`12th_custom_helms`: Contains all individually customized helmets.
`12th_armor`: Contains any and all customized uniforms, including non-custom helmets.
`12th_tagging`: Contains a set of spray cans with 12th-specific tags programmed in.
`12th_weapons`: Contains any and all customized weapons.
`12th_aircraft`: Contains any and all customized aircraft.
`12th_vehicles`: Contains any and all customized ground vehicles.
`12th_supply_pods`: Contains all of our supply pod re-textures and custom configurations.
`12th_music`: Contains all of the custom music that is in use.
`12th_misc`: Contains all other relevant assets (if needed).
`12th_ui`: Contains a set of loading screens and splash screens. This is made to be a separate PBO specifically to allow people to use our other PBOs without seeing the 12th's branding.

### `./pbo_include` Folder

The ./pbo_include folder contains all of our 3rd party PBOs that are to be included in the mod. The currently included PBOs are listed here: https://pastebin.com/RPFdREG3

## How to Build the Mod

### Windows

To build a development version, follow these steps:

1. Run the build.ps1 script by right-clicking the file and selecting the Run With Powershell option.

2. This script will produce a folder labeled `.hemttout/build`. You can load this folder as a mod directly into ArmA 3 for testing purposes.

To build a release version, follow these steps:

1. Run the release.ps1 script.

2. This will produce a zip file in the `./releases` directory and a folder in .hemttout/release.

# 12th Marine Expeditionary Unit Assets
This repository contains all assets and custom configurations for the 12th MEU ArmA unit. It includes re-textures, custom items, and other modded content. The primary build tool used here is HEMTT, which manages packing and building all of our PBOs for both testing and release.

## Table of Contents
1. Overview
2. Requirements
3. Folder Structure
4. What is HEMTT?
5. How to Build the Mod
6. Windows - Development Build
7. Windows - Release Build
8. Contributing
9. Credits

## Overview
The 12th MEU Assets mod is designed for the 12th Marine Expeditionary Unit ArmA clan. It contains custom gear, uniforms, vehicles, and other assets used during operations. This repository is structured to make it easy to identify, customize, and build each component as a PBO.

## Requirements
1. Arma 3 Tools installed (optional but recommended if you want to do any manual packing, binarizing, or debugging).
2. PowerShell (on Windows) for executing the provided build scripts.
3. HEMTT (High-End Modding Tool for Arma 3) is bundled with this repository in ./tools/hemtt.
Note: If you prefer, you can install HEMTT separately. Visit the official HEMTT GitHub page for more details. We currently bundle a working version in the tools folder, so no additional setup is necessary as long as you use the provided scripts.

12thMEU_Assets/
├── addons/
│   ├── 12th_vests
│   ├── 12th_backpacks
│   ├── 12th_custom_helms
│   ├── 12th_armor
│   ├── 12th_tagging
│   ├── 12th_weapons
│   ├── 12th_aircraft
│   ├── 12th_vehicles
│   ├── 12th_supply_pods
│   ├── 12th_music
│   └── 12th_misc
├── pbo_include/
│   └── [3rd Party PBO Files...]
├── releases/
│   └── [Zipped release builds will be placed here]
├── tools/
│   └── hemtt     (HEMTT binary)
├── .hemttout/
│   ├── build/
│   └── release/
├── build.ps1
├── release.ps1
└── README.md

## ./addons/ Folder
Each subfolder in ./addons/ represents an “unpacked PBO” with its own config.cpp, model files, textures, and scripts. These are the in-house assets for the 12th MEU mod:

- 12th_vests: Custom vests.
- 12th_backpacks: Custom backpacks.
- 12th_custom_helms: Individually customized helmets.
- 12th_armor: Customized uniforms and non-custom helmets.
- 12th_tagging: Spray cans with 12th-specific tags.
- 12th_weapons: Custom weapons.
- 12th_aircraft: Customized aircraft.
- 12th_vehicles: Customized ground vehicles.
- 12th_supply_pods: Supply pod re-textures and configurations.
- 12th_music: Custom music.
- 12th_misc: Miscellaneous assets.
- 12th_ui: Loading/splash screens (separate PBO for optional branding).

## ./pbo_include/ Folder
Contains third-party PBOs for inclusion in our mod. Currently included files are listed in this Pastebin: https://pastebin.com/RPFdREG3

## What is HEMTT?
HEMTT is an open-source build tool designed specifically for Arma 3 mod creators. It helps automate:

1. PBO Packing: Takes each folder in ./addons/ and packs it into a PBO (the standard format for Arma addons).
2. Versioning/Release: Creates a structured output for both development and release builds.
3. Dependency Management: Streamlines referencing third-party assets.
We include a working version of HEMTT in the ./tools/ folder to ensure consistent builds across the team.

## How to Build the Mod
We provide two PowerShell scripts for building the mod: build.ps1 (for development) and release.ps1 (for final releases). Both scripts rely on HEMTT for the main packing process.

## Windows - Development Build
1. Right-click on build.ps1 and select Run with PowerShell.
2. The script will invoke HEMTT in a development mode to pack the addon folders in ./addons/ and output them to .hemttout/build/addons.
3. It will then copy the third-party PBOs from ./pbo_include/ into the build folder.
Once the script completes, you’ll have a folder named .hemttout/build/ that you can load as a local mod in the Arma 3 Launcher.

## Windows - Release Build
1. Right-click on release.ps1 and select Run with PowerShell.
2. The script will invoke HEMTT in release mode, packing and binarizing everything for a final release.
3. It will place a zipped build in the ./releases folder and also create a folder structure under .hemttout/release/ for direct usage.

## Contributing
1. Pull Requests: If you have changes to scripts or configs, please submit a PR.
2. Naming Conventions: Keep PBO/Addon folder names consistent (e.g., 12th_vests, 12th_weapons, etc.) and lowercase.
3. Testing: Always run a quick test in Arma 3 to ensure everything is working before merging to the main branch.

## Credits
- Current and Past 12th MEU Development Team for creating and maintaining these assets.
- HEMTT Developers for providing a powerful Arma 3 modding tool.
- Arma 3 Community for contributing third-party PBOs and resources.
For any questions or troubleshooting, please contact a 12th MEU Development Team member or refer to the official HEMTT documentation for more detailed usage instructions.