#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "G1RGameQueryComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UG1RGameQueryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UG1RGameQueryComponent(const FObjectInitializer& ObjectInitializer);

};

