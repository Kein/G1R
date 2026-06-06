#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAreaBoundMemoryContainerType.h"
#include "LocationMemoryCrimeDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FLocationMemoryCrimeDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag AssociatedGuild;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag LocationTag;
    
    UPROPERTY(BlueprintReadWrite)
    EAreaBoundMemoryContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> KnownCrimeIDs;
    
    G1R_API FLocationMemoryCrimeDataEntry();
};

