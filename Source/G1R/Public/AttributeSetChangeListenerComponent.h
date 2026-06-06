#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "AttributeSetChangeListenerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UAttributeSetChangeListenerComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UAttributeSetChangeListenerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

