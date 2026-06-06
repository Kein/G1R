#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_ActiveGameplayEffect.h"
#include "CharacterStateSaveGameData_ActiveEffects.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_ActiveEffects {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FCharacterStateSaveGameData_ActiveGameplayEffect> ActiveEffects;
    
    G1R_API FCharacterStateSaveGameData_ActiveEffects();
};

