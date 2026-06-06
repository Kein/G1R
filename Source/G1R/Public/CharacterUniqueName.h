#pragma once
#include "CoreMinimal.h"
#include "CharacterUniqueName.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FCharacterUniqueName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    FCharacterUniqueName();
};

