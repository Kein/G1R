#pragma once
#include "CoreMinimal.h"
#include "GothicSingletonManager.h"
#include "FreepointManager.generated.h"

class AFreepointManager;
class UObject;

UCLASS()
class G1R_API AFreepointManager : public AGothicSingletonManager {
    GENERATED_BODY()
public:
    AFreepointManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFreepointManager* GetInstance(UObject* WorldContextObject);
    
};

