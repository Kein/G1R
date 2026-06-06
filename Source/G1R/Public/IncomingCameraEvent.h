#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "IncomingCameraEvent.generated.h"

USTRUCT(BlueprintType)
struct FIncomingCameraEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag EventTag;
    
    UPROPERTY()
    FGameplayEventData EventData;
    
    UPROPERTY()
    uint64 AtFrame;
    
    G1R_API FIncomingCameraEvent();
};

