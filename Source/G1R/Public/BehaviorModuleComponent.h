#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "BehaviorModuleComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UBehaviorModuleComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* m_ControlledActor;
    
public:
    UBehaviorModuleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

