#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityTargetData_Speak.h"
#include "SpeakingQueueEntry.generated.h"

class UAbilityTask_SayVoiceline;

USTRUCT(BlueprintType)
struct FSpeakingQueueEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag SoundTag;
    
    UPROPERTY()
    FGameplayAbilityTargetData_Speak TargetData;
    
    UPROPERTY()
    UAbilityTask_SayVoiceline* SayVoiceline;
    
    G1R_API FSpeakingQueueEntry();
};

