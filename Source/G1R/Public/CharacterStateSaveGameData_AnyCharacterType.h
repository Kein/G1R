#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterStateSaveGameData_ActiveEffects.h"
#include "CharacterStateSaveGameData_Attributes.h"
#include "CharacterStateSaveGameData_LongTermMemory.h"
#include "CharacterStateSaveGameData_Party.h"
#include "CharacterStateSaveGameData_AnyCharacterType.generated.h"

USTRUCT()
struct FCharacterStateSaveGameData_AnyCharacterType {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Attributes> AttributesByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_LongTermMemory> LongTermMemoryByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_ActiveEffects> ActiveEffectsByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Party> PartyInfoByGlobalId;
    
    UPROPERTY(SaveGame)
    TMap<FName, FGameplayTagContainer> LooseTagsByGlobalId;
    
    G1R_API FCharacterStateSaveGameData_AnyCharacterType();
};

