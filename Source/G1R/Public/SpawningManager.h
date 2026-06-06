#pragma once
#include "CoreMinimal.h"
#include "GothicSingletonManager.h"
#include "SpawningManager.generated.h"

class ASpawningManager;
class UObject;
class USpawningRequest;

UCLASS()
class G1R_API ASpawningManager : public AGothicSingletonManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<USpawningRequest*> m_SpawningRequests;
    
public:
    ASpawningManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASpawningManager* GetInstance(UObject* WorldContextObject);
    
};

