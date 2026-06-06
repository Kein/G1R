#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorModuleOwner.h"
#include "AIAgentController.generated.h"

UCLASS()
class G1R_API AAIAgentController : public AAIController, public IBehaviorModuleOwner {
    GENERATED_BODY()
public:
    AAIAgentController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

