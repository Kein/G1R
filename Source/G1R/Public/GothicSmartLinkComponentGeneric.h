#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "NavLinkCustomComponent.h"
#include "EWalkSpeed.h"
#include "WaynetRelevantInterface.h"
#include "GothicSmartLinkComponentGeneric.generated.h"

class AActor;
class UAbilityTaskGeneric;
class UAbilityTask_DirectMove;
class UGothicPathFollowingComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentGeneric : public UNavLinkCustomComponent, public IWaynetRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseTraverseTask;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag TraverseTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TraversalAllowedSpecies;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockPathfindingIfAgentHasAnyOf;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireAnyForPathfinding;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockAbilitiesWithTagsWhileUsing;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer CancelAbilitiesWithTagsWhileUsing;
    
    UPROPERTY(EditAnywhere)
    float CooldownWaitingAgents;
    
    UPROPERTY(EditAnywhere)
    bool bBlockPathfindingWhenLinkHasUser;
    
    UPROPERTY(EditAnywhere)
    float SnapRadius;
    
    UPROPERTY(EditAnywhere)
    float SnapHeight;
    
    UPROPERTY(EditAnywhere)
    bool bAddToWaynet;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UGothicPathFollowingComponent>> WaitingAgents;
    
    UPROPERTY()
    UAbilityTaskGeneric* MoveOverLinkTask;
    
    UPROPERTY()
    UAbilityTask_DirectMove* FinishLinkMoveTask;
    
    UPROPERTY(Instanced)
    UGothicPathFollowingComponent* CurrentPathFollowingComponent;
    
    UPROPERTY()
    bool bIsCharacterTraversingWithTask;
    
    UPROPERTY()
    EWalkSpeed requestedWalkSpeed;
    
    UPROPERTY()
    TMap<UGothicPathFollowingComponent*, float> TraversalFailedPathfollowingComponentsToTime;
    
public:
    UGothicSmartLinkComponentGeneric(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void HandleCurrentUserDespawns(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    

    // Fix for true pure virtual functions not being implemented
};

