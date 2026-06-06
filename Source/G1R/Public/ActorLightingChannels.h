#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ActorLightingChannels.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FActorLightingChannels {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* OwningActor;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FLightingChannels> OriginalLightingChannels;
    
    G1R_API FActorLightingChannels();
};

