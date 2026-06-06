#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OwnsRegionTraits.h"
#include "RegionShape.generated.h"

class URegionTrait;
class UShapeComponent;

UCLASS(Abstract)
class G1R_API ARegionShape : public AActor, public IOwnsRegionTraits {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UShapeComponent* RegionShapeComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<URegionTrait*> RegionTraits;
    
    ARegionShape(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

