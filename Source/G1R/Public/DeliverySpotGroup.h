#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AddsStaticInteractionSpots.h"
#include "DeliverySpot.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotOwner.h"
#include "WaynetRelevantInterface.h"
#include "DeliverySpotGroup.generated.h"

class UStaticMeshComponent;

UCLASS()
class G1R_API ADeliverySpotGroup : public AActor, public IAddsStaticInteractionSpots, public IWaynetRelevantInterface, public IInteractionSpotOwner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsFinalDestination;
    
    UPROPERTY(EditAnywhere)
    bool bShowPreviewItems;
    
    UPROPERTY(BlueprintReadOnly)
    FInteractionSpotHandle NavigationSpotHandle;
    
    UPROPERTY(EditAnywhere)
    bool bAdjustItemOnPutDown;
    
protected:
    UPROPERTY(EditAnywhere)
    FName Spotname;
    
    UPROPERTY(EditAnywhere)
    TArray<FDeliverySpot> DeliverySpots;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* StaticMesh;
    
public:
    ADeliverySpotGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpotItem(FInteractionSpotHandle SpotHandle, AActor* Item);
    
    UFUNCTION(BlueprintPure)
    bool HasSpotsLeft() const;
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<FInteractionSpotHandle> GetOwnedInteractionSpots() const;
    

    // Fix for true pure virtual functions not being implemented
};

