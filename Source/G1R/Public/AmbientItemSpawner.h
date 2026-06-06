#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AddsStaticInteractionSpots.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotOwner.h"
#include "SpawnSlot.h"
#include "WaynetRelevantInterface.h"
#include "AmbientItemSpawner.generated.h"

class UStaticMeshComponent;

UCLASS()
class G1R_API AAmbientItemSpawner : public AActor, public IAddsStaticInteractionSpots, public IWaynetRelevantInterface, public IInteractionSpotOwner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAllowRefillWhilePlayerIsLooking;
    
    UPROPERTY(EditAnywhere)
    bool bShowPreviewActors;
    
    UPROPERTY(BlueprintReadOnly)
    FInteractionSpotHandle NavigationSpotHandle;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnSlot> ItemSlots;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(EditAnywhere)
    FVector NavSpotRelativePosition;
    
    UPROPERTY(EditAnywhere)
    FName NavSpotName;
    
public:
    AAmbientItemSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void HandleItemDestroyed(AActor* DestroyedItem);
    

    // Fix for true pure virtual functions not being implemented
};

