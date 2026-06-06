#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "CharacterStateSaveGameData_ActiveGameplayEffect.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_ActiveGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGameplayEffectSpec EffectSpec;
    
    UPROPERTY(SaveGame)
    TMap<FGameplayTag, float> SetByCallerTagMagnitudes;
    
    G1R_API FCharacterStateSaveGameData_ActiveGameplayEffect();
};

