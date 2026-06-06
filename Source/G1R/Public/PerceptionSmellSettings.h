#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PerceptionSmellSettings.generated.h"

USTRUCT(BlueprintType)
struct FPerceptionSmellSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmellRange;
    
    UPROPERTY(EditAnywhere)
    float WeatherModifier[5];
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> TargetOwnedTagModifiers;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, float> SensingOwnedTagModifiers;
    
    UPROPERTY(EditAnywhere)
    float OnScreenSkillModifier;
    
    UPROPERTY(EditAnywhere)
    float OffScreenSkillModifier;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ExcludingTags;
    
    UPROPERTY(EditAnywhere)
    bool LoseAwarenessWithExcludingTags;
    
    UPROPERTY(EditAnywhere)
    bool bUseLowerOffscreenSkill;
    
    UPROPERTY(EditAnywhere)
    float AwarenessWearoffFactor;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAwarenessWearOffWithSensorTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockAwarenessWearOffWithSensedTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreObstacles;
    
    G1R_API FPerceptionSmellSettings();
};

