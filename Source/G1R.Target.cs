using UnrealBuildTool;
using System.Collections.Generic;

public class G1RTarget : TargetRules
{
    public G1RTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        ExtraModuleNames.AddRange( new string[] { "G1R", "GothicModLoader" } );
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    }
}
