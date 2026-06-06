#pragma once
#include "CoreMinimal.h"
#include "MemorizedEvent.h"
#include "CharacterStateSaveGameData_LongTermMemory.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_LongTermMemory {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FMemorizedEvent> MemorizedEvents;
    
    G1R_API FCharacterStateSaveGameData_LongTermMemory();
};

