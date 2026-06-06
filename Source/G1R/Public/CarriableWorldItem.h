#pragma once
#include "CoreMinimal.h"
#include "EWorldItemState.h"
#include "ItemVisualWorld.h"
#include "CarriableWorldItem.generated.h"

UCLASS()
class G1R_API ACarriableWorldItem : public AItemVisualWorld {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsClickable;
    
    UPROPERTY(EditAnywhere)
    bool bCustomCollision;
    
protected:
    UPROPERTY(EditAnywhere)
    float DestructionCheckIntervall;
    
    UPROPERTY(SaveGame)
    EWorldItemState State;
    
public:
    ACarriableWorldItem(const FObjectInitializer& ObjectInitializer);

};

