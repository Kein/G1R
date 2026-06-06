using UnrealBuildTool;

public class G1R : ModuleRules {
    public G1R(ReadOnlyTargetRules Target) : base(Target) {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            // === Game === //
            "AIModule",
            "AlkimiaStoryFileImport",
            "AngelscriptCode",
            "AngelscriptGAS",
            "AnimationBudgetAllocator",
            "BFGLightweightRenderer",
            "CinematicCamera",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "CustomizableObject",
            "DeveloperSettings",
            "Engine",
            "EnhancedInput",
            "FMODStudio",
            "GameStateSubsystem",
            "GameplayAbilities",
            "GameplayCameras",
            "GameplayMessageRuntime",
            "GameplayTags",
            "GameplayTasks",
            "GateShadow",
            "GothicModLoader",
            "InputCore",
            "LevelSequence",
            "MassEntity",
            "MassLOD",
            "MassSpawner",
            "MotionSymphony",
            "MotionWarping",
            "MovieScene",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraAnimNotifies",
            "ProceduralAnimationTKRuntime",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "StructUtils",
            "TemplateSequence",
            "UMG"
        });
    }
}
