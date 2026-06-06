#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "EPerceptionNoiseLoudness.h"
#include "GenericVoicelineRequestContext.h"
#include "GameplayAbilityTargetData_Speak.generated.h"

class AGothicCharacterState;

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_Speak : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ForceSubtitleLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Expression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Posture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag GenericVoiceline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGenericVoicelineRequestContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnskippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<AGothicCharacterState> Other;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPerceptionNoiseLoudness Loudness;
    
    FGameplayAbilityTargetData_Speak();
};

