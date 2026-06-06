#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_AIValueStorage.generated.h"

class UAIValueSet;

USTRUCT()
struct FCharacterStateSaveGameData_AIValueStorage {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, SaveGame)
    TArray<UAIValueSet*> SpawnedStorage;
    
    UPROPERTY(Instanced, SaveGame)
    TArray<UAIValueSet*> PersistantStorage;
    
    G1R_API FCharacterStateSaveGameData_AIValueStorage();
};

