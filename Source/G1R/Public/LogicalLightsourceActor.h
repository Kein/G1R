#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LogicalLightsourceActor.generated.h"

class ULogicalLightsourceComponent;

UCLASS()
class G1R_API ALogicalLightsourceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    ULogicalLightsourceComponent* LogicalLightsourceComponent;
    
    ALogicalLightsourceActor(const FObjectInitializer& ObjectInitializer);

};

