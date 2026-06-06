#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PreInitializableComponentsActor.generated.h"

UCLASS()
class G1R_API APreInitializableComponentsActor : public AActor {
    GENERATED_BODY()
public:
    APreInitializableComponentsActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_PreInitializeComponents();
    
};

