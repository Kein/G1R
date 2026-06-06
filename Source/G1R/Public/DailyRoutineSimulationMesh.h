#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "DailyRoutineSimulatedLightSource.h"
#include "DailyRoutineSimulationMesh.generated.h"

class UAnimSequence;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FDailyRoutineSimulationMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float SelectionPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SelectIfHasAllOf;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform OffsetTransform;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform CustomOffsetTransform;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> WalkingAnimationLoop;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimSequence> IdleAnimationLoop;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FDailyRoutineSimulatedLightSource> SimulatedLightPresets;
    
    G1R_API FDailyRoutineSimulationMesh();
};

