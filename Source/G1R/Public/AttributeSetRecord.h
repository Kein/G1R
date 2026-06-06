#pragma once
#include "CoreMinimal.h"
#include "AttributeSetRecord.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FAttributeSetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UClass* m_Class;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FString, float> m_ComponentData;
    
    FAttributeSetRecord();
};

