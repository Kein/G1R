#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "PersonalBelongingsComponent.generated.h"

class AActor;
class ARegionVolume;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPersonalBelongingsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<TSoftObjectPtr<AActor>> OwnedActors;
    
    UPROPERTY(BlueprintReadOnly)
    ARegionVolume* StartingRegion;
    
    UPersonalBelongingsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsOwningActor(TSoftObjectPtr<AActor> Actor) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetOwnedActorsOfClass(TSubclassOf<AActor> Class) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwnedActorOfClass(TSubclassOf<AActor> Class) const;
    
};

