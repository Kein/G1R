#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "PerceptionSoundArea.generated.h"

USTRUCT()
struct FPerceptionSoundArea {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPerceptionNoiseLoudness Loudness;
    
    UPROPERTY()
    FVector CenterLocation;
    
    UPROPERTY()
    float LifeUntilTime;
    
    UPROPERTY()
    float StartedAtTime;
    
    UPROPERTY()
    float SoundDuration;
    
    UPROPERTY()
    FGameplayTag PerceptionTag;
    
    UPROPERTY()
    bool bIsInstantSound;
    
    UPROPERTY()
    bool IsBoundToOriginActor;
    
    G1R_API FPerceptionSoundArea();
};

