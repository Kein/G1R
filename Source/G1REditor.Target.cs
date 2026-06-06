using UnrealBuildTool;
using System.Collections.Generic;

public class G1REditorTarget : TargetRules
{
    public G1REditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        ExtraModuleNames.AddRange( new string[] { "G1R", "GothicModLoader" } );
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
    }
}
