#pragma once
#include "CoreMinimal.h"
#include "SpawnItemList.h"
#include "SpawnItemEvent.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FSpawnItemEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnItemList> m_Items;
    
    FSpawnItemEvent();
};

