#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_NavigationRequest.h"
#include "AbilityTask_Follow.generated.h"

class AActor;
class AGothicCharacter;
class AGothicNPCState;
class APawn;
class UAbilityTask_Follow;
class UAbilityTask_GotoPositionOutOfWay;
class UAbilityTask_Speak;
class UAbilityTask_TurnTo;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_Follow : public UAbilityTask_NavigationRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_TurnTo* TurnToTask;
    
    UPROPERTY()
    UAbilityTask_Speak* SpeakTask;
    
    UPROPERTY()
    UAbilityTask_GotoPositionOutOfWay* MoveOutOfTheWayTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMatchTargetWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintWhenFurtherAwayThan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeedChangeNoticeDelay;
    
    UPROPERTY(BlueprintReadOnly)
    float LastTimeWalkSpeedChanged;
    
public:
    UAbilityTask_Follow();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Follow* TaskFollowWithWorldOffset(UGameplayAbility* OwningAbility, AActor* Actor, const FVector& WorldOffsetLocation, float ReachDistance, bool bCanStrafe, bool bShouldMoveOutOfTheWay);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Follow* TaskFollowWithRelativeOffset(UGameplayAbility* OwningAbility, AActor* Actor, const FVector& InBasedOffsetLocation, float ReachDistance, bool bCanStrafe, bool bShouldMoveOutOfTheWay);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_Follow* TaskFollow(UGameplayAbility* OwningAbility, AActor* Actor, float ReachDistance, bool bCanStrafe, bool bShouldMoveOutOfTheWay);
    
protected:
    UFUNCTION()
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION(BlueprintPure)
    bool IsFollowing(AActor* Actor) const;
    
    UFUNCTION()
    void HandleGoalActorSpawned(AGothicNPCState* GothicNPCState, AGothicCharacter* Character);
    
    UFUNCTION()
    void HandleGoalActorDespawned(AGothicNPCState* GothicNPCState);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool CanFollow(const AGothicCharacter* Character, AActor* Actor, float ReachDistance);
    
};

