#pragma once
#include "CoreMinimal.h"
#include "InitialAttributeValues.generated.h"

USTRUCT(BlueprintType)
struct FInitialAttributeValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FString, float> m_InitialValues;
    
    G1R_API FInitialAttributeValues();
};

