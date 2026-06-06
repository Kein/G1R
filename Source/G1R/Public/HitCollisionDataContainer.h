#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "HitCollisionDataContainer.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct G1R_API FHitCollisionDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHitResult> m_OutOverlapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UPrimitiveComponent*> m_OverlapComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UPrimitiveComponent*, FHitResult> m_OverlappingMapComponent;
    
    FHitCollisionDataContainer();
};

