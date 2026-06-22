# G1R
UProject SDK for Gothic 1 Remake

# Engine changes
This project was made to be compatible with Launcher UE, therefore, a few shortcuts
were used. Source Engine changes will/*may* come later, for now just base project.

For now, search for "FIXME" if you want to see these changes/workarounds

# Usage and building
0. It is assumed you have [UE5.4.3 AngelScript source](https://github.com/Hazelight/UnrealEngine-Angelscript) ((rev: `1318414eb930dd0fa9c22744f3efea55ac043790`) and the [UE build toolchain as well](https://github.com/EpicGames/UnrealEngine/blob/5.4.3-release/README.md) ( 14.36.32532 build tools and WinSDK 10.0.19041.0)
1. Clone this project  
2. Install FMODStudio 2.02.26 plugin for Unreal:  
   a) https://www.fmod.com/download  
   b) Select FMOD for Unreal  
   c) Select 2.02  
   d) Select 2.02.26  
   e) Download the one that says for 5.4  
   f) Extract into `G1R\Plugins\` (or `Plugins` relative to this repo structure)  
4. Build the UE game project  


# Gothic 1 Remake native mods
G1R comes with its own modloader and mod system but it is currentl not used. In order to package mod
in compaible format you can use my [AlpakitSO](https://github.com/Kein/AlpakitSO)
The only thing you will have to do manually is add gothic mod descriptor (documentation pending)
