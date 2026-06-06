#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "Templates/SubclassOf.h"
#include "SpawnSlot.generated.h"

class ACarriableWorldItem;

USTRUCT(BlueprintType)
struct FSpawnSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACarriableWorldItem> SpawnItem;
    
    UPROPERTY()
    ACarriableWorldItem* ActiveItem;
    
    UPROPERTY(EditAnywhere)
    FTransform RelativeTransform;
    
    UPROPERTY()
    FTimerHandle RefillTimerHandle;
    
    UPROPERTY(EditAnywhere)
    float RefillTimerSeconds;
    
    G1R_API FSpawnSlot();
};

