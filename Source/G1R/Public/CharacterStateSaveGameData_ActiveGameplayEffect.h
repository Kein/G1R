#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "CharacterStateSaveGameData_ActiveGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData_ActiveGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    FGameplayEffectSpec EffectSpec;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FGameplayTag, float> SetByCallerTagMagnitudes;
    
    G1R_API FCharacterStateSaveGameData_ActiveGameplayEffect();
};

