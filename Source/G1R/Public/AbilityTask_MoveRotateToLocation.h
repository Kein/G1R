#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskGeneric.h"
#include "AbilityTaskGeneric.h"
#include "EGenericTaskResult.h"
#include "AbilityTask_MoveRotateToLocation.generated.h"

class AActor;
class AGothicCharacter;
class UAbilityTask_AlignCharacterAtLocation;
class UAbilityTask_MoveRotateToLocation;
class UAbilityTask_TurnTo;
class UGameplayAbility;
class UPathFollowingComponent;

UCLASS()
class G1R_API UAbilityTask_MoveRotateToLocation : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    UAbilityTaskGeneric::FAbilityTaskEndedAnyResultDelegate OnPositionReached;
    
protected:
    UPROPERTY(Replicated)
    float m_TimeMoveStarted;
    
    UPROPERTY(Replicated)
    float m_TimeMoveWillEnd;
    
    UPROPERTY()
    AActor* m_ActorToIgnore;
    
    UPROPERTY(Replicated)
    bool m_IsMovementDone;
    
    UPROPERTY()
    bool bUseDirectMoveInstead;
    
    UPROPERTY(Replicated)
    bool m_IsRotationDone;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced)
    UPathFollowingComponent* m_PathfollowingComponent;
    
    UPROPERTY()
    UAbilityTask_TurnTo* m_TurnToTask;
    
    UPROPERTY()
    UAbilityTask_AlignCharacterAtLocation* m_AlignTask;
    
public:
    UAbilityTask_MoveRotateToLocation();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void StartFinalAlignTask(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
protected:
    UFUNCTION()
    void OnSignalCallback();
    
private:
    UFUNCTION()
    void OnAlignTaskFinished(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MoveRotateToLocation* MoveRotateToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FTransform Transform, bool bSetRotation, float PosFixDuration, AActor* ActorToIgnore, float ReachRadius);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_MoveRotateToLocation* MoveRotateToInteractiveObject(UGameplayAbility* OwningAbility, FName TaskInstanceName, FTransform InteractiveAnchorTransform, float PosFixDuration, AActor* ActorToIgnore, float ReachRadius);
    
};

