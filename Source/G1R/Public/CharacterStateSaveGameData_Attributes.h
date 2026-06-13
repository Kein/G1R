#pragma once
#include "CoreMinimal.h"
#include "CharacterStateSaveGameData_AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "CharacterStateSaveGameData_Attributes.generated.h"

class UAttributeSet;

USTRUCT(BlueprintType)
struct FCharacterStateSaveGameData_Attributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame)
    TMap<TSubclassOf<UAttributeSet>, FCharacterStateSaveGameData_AttributeSet> AttributeSetsByClass;
    
    G1R_API FCharacterStateSaveGameData_Attributes();
};

