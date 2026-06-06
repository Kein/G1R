#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PerceptionHearingRangeSetting.h"
#include "PerceptionHearingSettings.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionHearingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPerceptionHearingRangeSetting HearingRangeSettings[3];
    
    UPROPERTY(EditAnywhere)
    float WeatherModifier[5];
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> TargetOwnedTagModifiers;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> SensingOwnedTagModifiers;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ExcludingTags;
    
    UPROPERTY(EditAnywhere)
    bool LoseAwarenessWithExcludingTags;
    
    UPROPERTY(EditAnywhere)
    float OnScreenSkillModifier;
    
    UPROPERTY(EditAnywhere)
    float OffScreenSkillModifier;
    
    UPROPERTY(EditAnywhere)
    bool bUseLowerOffscreenSkill;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAwarenessWearOffWithSensorTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAwarenessWearOffWithSensedTags;
    
    UPROPERTY(EditAnywhere)
    float AwarenessWearoffFactor;
    
    G1R_API FPerceptionHearingSettings();
};

