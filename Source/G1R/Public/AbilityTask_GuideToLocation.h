#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "AbilityTask_GotoPosition.h"
#include "EGuideState.h"
#include "AbilityTask_GuideToLocation.generated.h"

class AActor;
class AGothicCharacterState;
class UAbilityTask_GuideToLocation;
class UAbilityTask_TurnTo;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_GuideToLocation : public UAbilityTask_GotoPosition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacterState* FollowCharacterState;
    
    UPROPERTY()
    EGuideState GuideState;
    
    UPROPERTY()
    FTimerHandle ContinueMoveAfterTurnToInterruptHandle;
    
    UPROPERTY()
    FTimerHandle WaitBeforeTurnToHandle;
    
    UPROPERTY()
    UAbilityTask_TurnTo* TurnToTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeedChangeNoticeDelay;
    
public:
    UAbilityTask_GuideToLocation();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GuideToLocation* TaskGuideToLocation(UGameplayAbility* OwningAbility, const FVector& Location, AGothicCharacterState* CharacterStateToGuide, float AcceptanceDistance, float InCloseDistance, float InWaitingDistance, float InAbandonDistance);
    
    UFUNCTION(BlueprintPure)
    bool IsGuiding(AActor* Actor) const;
    
};

