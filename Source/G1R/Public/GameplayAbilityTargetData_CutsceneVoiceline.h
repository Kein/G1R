#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_CutsceneVoiceline.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct G1R_API FGameplayAbilityTargetData_CutsceneVoiceline : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    FGameplayAbilityTargetData_CutsceneVoiceline();
};

