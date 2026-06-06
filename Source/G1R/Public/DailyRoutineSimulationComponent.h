#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "InGameTime.h"
#include "InteractionSpotClaimToken.h"
#include "SimulatedByDailyRoutine.h"
#include "DailyRoutineSimulationComponent.generated.h"

class USkeletalMesh;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicNPCState, meta=(BlueprintSpawnableComponent))
class G1R_API UDailyRoutineSimulationComponent : public UActorComponent, public ISimulatedByDailyRoutine {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInGameTime LastUpdateAtTime;
    
    UPROPERTY()
    FInGameTime TimeNow;
    
    UPROPERTY()
    USkeletalMesh* SimulationMeshOverride;
    
    UDailyRoutineSimulationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestUpdate();
    
    UFUNCTION(BlueprintCallable)
    void NotifyIdleUntil(const FInGameTime& IdleUntil);
    
    UFUNCTION(BlueprintCallable)
    void NotifyIdleForRealtimeSeconds(float IdleForRealtimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDoneWithAction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDoingInteractionUntil(const FGameplayTag& Action, FInteractionSpotClaimToken SpotClaimToken, const FInGameTime& InteractingUntil);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDoingInteractionForRealtimeSeconds(const FGameplayTag& Action, FInteractionSpotClaimToken SpotClaimToken, float InteractingForRealtimeSeconds);
    
    UFUNCTION(BlueprintPure)
    bool IsDoingStateThatCanBeSimulated() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDailyRoutineSimulationActive() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate();
    
    UFUNCTION(BlueprintCallable)
    void EnableLightsource(FName LightPreset);
    
    UFUNCTION(BlueprintCallable)
    void DisableLightsource();
    

    // Fix for true pure virtual functions not being implemented
};

