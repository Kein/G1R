#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GothicSmartLinkOwner.generated.h"

class UDetailBillboardComponent;

UCLASS()
class G1R_API AGothicSmartLinkOwner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UDetailBillboardComponent* SpriteComponent;
    
public:
    AGothicSmartLinkOwner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ToggleLinksEnabled();
    
};

