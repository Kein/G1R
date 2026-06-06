#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GothicSingletonManager.generated.h"

UCLASS(Abstract)
class AGothicSingletonManager : public AInfo {
    GENERATED_BODY()
public:
    AGothicSingletonManager(const FObjectInitializer& ObjectInitializer);

};

