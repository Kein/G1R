#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenericLever_Component.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGenericLever_Component : public UActorComponent {
    GENERATED_BODY()
public:
    UGenericLever_Component(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void LeverCalled() const;
    
};

