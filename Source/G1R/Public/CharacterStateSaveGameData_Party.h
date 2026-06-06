#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_Party.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_Party {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSet<FName> InPartyWith;
    
    G1R_API FCharacterStateSaveGameData_Party();
};

