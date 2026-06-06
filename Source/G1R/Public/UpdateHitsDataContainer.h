#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "UpdateHitsDataContainer.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct G1R_API FUpdateHitsDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* m_OverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitResult m_HitResult;
    
    FUpdateHitsDataContainer();
};

