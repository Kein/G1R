#pragma once
#include "CoreMinimal.h"
#include "BloodCharacterContainer.generated.h"

class AGothicCharacter;

USTRUCT(BlueprintType)
struct G1R_API FBloodCharacterContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<AGothicCharacter>> Characters;
    
public:
    FBloodCharacterContainer();
};

