# G1R
UProject SDK for Gothic 1 Remake

# Engine changes
This project was made to be compatible with Launcher UE, therefore, a few shortcuts
were used. Source Engine changes will/*may* come later, for now just base project.

For now, search for "FIXME" if you want to see these changes/workarounds

# Usage and building
## Unreal Engine AS setup
1. Fetch/clone AngelScript UE repo: https://github.com/Hazelight/UnrealEngine-Angelscript
2. Switch the cloned repo to revision `1318414eb930dd0fa9c22744f3efea55ac043790` or `3d21e34009e78e1d7bc5cab1a29b709814d1cefb`:  
   `git checkout 1318414eb930dd0fa9c22744f3efea55ac043790`
3. Install UE build requirements as per [UE readme](https://github.com/EpicGames/UnrealEngine/blob/5.4.3-release/README.md) - you need build tools 14.36.32532 and WinSDK 10.0.19041.0 minimum
4. Run `Setup.bat`
5. Run `GenerateProjectFiles.bat`

## G1R SDK project
1. Clone this repo into Unreal Engine installation/repo folder (so it is near `Engine/`folder)
2. Install FMODStudio 2.02.26 plugin for Unreal for G1R project:  
   a) https://www.fmod.com/download  
   b) Select FMOD for Unreal  
   c) Select 2.02  
   d) Select 2.02.26  
   e) Download the one that says for 5.4  
   f) Extract into `G1R\Plugins\` (or `Plugins` relative to this repo structure)  
3. Run `GenerateProjectFiles.bat`
4. Build UE and project with MSVC


# Gothic 1 Remake native mods
G1R comes with its own modloader and mod system but it is currentl not used. In order to package mod
in compaible format you can use my [AlpakitSO](https://github.com/Kein/AlpakitSO)
The only thing you will have to do manually is add gothic mod descriptor (documentation pending)
