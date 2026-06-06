#pragma once
#include "CoreMinimal.h"
#include "ReplicatedStringMap.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FReplicatedStringMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FName> m_Keys;
    
    UPROPERTY()
    TArray<FString> m_Values;
    
public:
    FReplicatedStringMap();
};

