#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "DeliverySpot.generated.h"

class ACarriableWorldItem;
class UChildActorComponent;

USTRUCT(BlueprintType)
struct FDeliverySpot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform SpotTransform;
    
    UPROPERTY(EditAnywhere)
    FName Spotname;
    
    UPROPERTY()
    ACarriableWorldItem* BlockingItem;
    
    UPROPERTY(Instanced)
    UChildActorComponent* PreviewActorComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACarriableWorldItem> PreviewItemClass;
    
    G1R_API FDeliverySpot();
};

