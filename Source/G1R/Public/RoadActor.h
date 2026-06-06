#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaynetRelevantInterface.h"
#include "RoadActor.generated.h"

class USplineNavAreaModifierComponent;

UCLASS()
class G1R_API ARoadActor : public AActor, public IWaynetRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    USplineNavAreaModifierComponent* SplineComponent;
    
    ARoadActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

