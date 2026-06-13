#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterStateSaveGameData_ActiveEffects.h"
#include "CharacterStateSaveGameData_Attributes.h"
#include "CharacterStateSaveGameData_LongTermMemory.h"
#include "CharacterStateSaveGameData_Party.h"
#include "CharacterStateSaveGameData_AnyCharacterType.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData_AnyCharacterType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Attributes> AttributesByGlobalId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FCharacterStateSaveGameData_LongTermMemory> LongTermMemoryByGlobalId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FCharacterStateSaveGameData_ActiveEffects> ActiveEffectsByGlobalId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FCharacterStateSaveGameData_Party> PartyInfoByGlobalId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<FName, FGameplayTagContainer> LooseTagsByGlobalId;
    
    G1R_API FCharacterStateSaveGameData_AnyCharacterType();
};

