#pragma once
#include "CoreMinimal.h"
#include "PointItems.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPointItems {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_Actor;
    
    UPROPERTY()
    FName m_Name;
    
    G1R_API FPointItems();
};

