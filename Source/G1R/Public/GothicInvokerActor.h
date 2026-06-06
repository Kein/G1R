#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GothicInvokerActor.generated.h"

class AGothicInvokerActor;
class UAIAgentConfig_Navigation;
class UGothicNavigationInvokerComponent;
class UObject;
class USpawnAIAgentDefinition;

UCLASS()
class G1R_API AGothicInvokerActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UGothicNavigationInvokerComponent* GothicNavigationInvokerComponent;
    
    UPROPERTY(Instanced)
    UAIAgentConfig_Navigation* NavigationConfigDefaultObject;
    
public:
    AGothicInvokerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasFinishedNavMeshGeneration() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static AGothicInvokerActor* CreateInvokerActor(const UObject* WorldContext, const FVector& SpawnLocation, const USpawnAIAgentDefinition* AIAgentSpawnDefinition, float InCustomInvokerGenerationRadius, bool bInOnlyUsedPreferredNavType);
    
};

