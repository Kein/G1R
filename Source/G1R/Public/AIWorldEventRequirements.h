#pragma once
#include "CoreMinimal.h"
#include "InteractionSpotRequirements.h"
#include "Templates/SubclassOf.h"
#include "AIWorldEventRequirements.generated.h"

class UAIWorldEvent;

USTRUCT(BlueprintType)
struct G1R_API FAIWorldEventRequirements : public FInteractionSpotRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIWorldEvent> WorldEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowWhenPending;
    
    FAIWorldEventRequirements();
};

