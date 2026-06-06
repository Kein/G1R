#pragma once
#include "CoreMinimal.h"
#include "ENavigationAgent.h"
#include "GothicAIMoveRequest.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGothicAIMoveRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<ENavigationAgent> NavigationAgents;
    
public:
    FGothicAIMoveRequest();
};

