#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "ReachableTargetIndicatorForProjectilesComponent.generated.h"

class AItemVisual;
class UHUDAmmoLeftController;
class UHUDCrosshairController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UReachableTargetIndicatorForProjectilesComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AItemVisual* m_ItemVisual;
    
    UPROPERTY()
    UHUDCrosshairController* m_HUDCrosshairController;
    
    UPROPERTY()
    UHUDAmmoLeftController* m_HUDAmmoLeftController;
    
public:
    UReachableTargetIndicatorForProjectilesComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

