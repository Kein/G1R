#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "ReplicatedQuestNameTimeMap.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedQuestNameTimeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    TMap<FName, FInGameTime> Times;
    
    G1R_API FReplicatedQuestNameTimeMap();
};

