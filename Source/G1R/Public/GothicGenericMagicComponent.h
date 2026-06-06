#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "GothicGenericMagicComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicGenericMagicComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UGothicGenericMagicComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

