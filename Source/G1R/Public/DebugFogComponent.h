#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugFogComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UDebugFogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDebugFogComponent(const FObjectInitializer& ObjectInitializer);

};

