#include "AbilityTask_MoveRotateToLocation.h"
#include "Net/UnrealNetwork.h"

UAbilityTask_MoveRotateToLocation::UAbilityTask_MoveRotateToLocation() {
    this->m_TimeMoveStarted = 0.00f;
    this->m_TimeMoveWillEnd = 0.00f;
    this->m_ActorToIgnore = NULL;
    this->m_IsMovementDone = false;
    this->bUseDirectMoveInstead = false;
    this->m_IsRotationDone = false;
    this->m_Character = NULL;
    this->m_PathfollowingComponent = NULL;
    this->m_TurnToTask = NULL;
    this->m_AlignTask = NULL;
}

void UAbilityTask_MoveRotateToLocation::StartFinalAlignTask(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

void UAbilityTask_MoveRotateToLocation::OnSignalCallback() {
}

void UAbilityTask_MoveRotateToLocation::OnAlignTaskFinished(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}

UAbilityTask_MoveRotateToLocation* UAbilityTask_MoveRotateToLocation::MoveRotateToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FTransform Transform, bool bSetRotation, float PosFixDuration, AActor* ActorToIgnore, float ReachRadius) {
    return NULL;
}

UAbilityTask_MoveRotateToLocation* UAbilityTask_MoveRotateToLocation::MoveRotateToInteractiveObject(UGameplayAbility* OwningAbility, FName TaskInstanceName, FTransform InteractiveAnchorTransform, float PosFixDuration, AActor* ActorToIgnore, float ReachRadius) {
    return NULL;
}

void UAbilityTask_MoveRotateToLocation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityTask_MoveRotateToLocation, m_TimeMoveStarted);
    DOREPLIFETIME(UAbilityTask_MoveRotateToLocation, m_TimeMoveWillEnd);
    DOREPLIFETIME(UAbilityTask_MoveRotateToLocation, m_IsMovementDone);
    DOREPLIFETIME(UAbilityTask_MoveRotateToLocation, m_IsRotationDone);
}


