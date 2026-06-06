#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodCharacterData.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FBloodCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor Color;
    
    FBloodCharacterData();
};

