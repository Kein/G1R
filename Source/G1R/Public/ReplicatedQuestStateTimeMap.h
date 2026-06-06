#pragma once
#include "CoreMinimal.h"
#include "EQuestState.h"
#include "InGameTime.h"
#include "ReplicatedQuestStateTimeMap.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedQuestStateTimeMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    TMap<EQuestState, FInGameTime> Times;
    
    G1R_API FReplicatedQuestStateTimeMap();
};

