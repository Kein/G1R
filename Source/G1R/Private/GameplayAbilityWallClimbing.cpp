#include "GameplayAbilityWallClimbing.h"

UGameplayAbilityWallClimbing::UGameplayAbilityWallClimbing() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_PlayMontageTask = NULL;
    this->m_UpdateTraverseTask = NULL;
    this->m_wallClimbingUpdateTask = NULL;
    this->m_isJumping = false;
    this->m_ClimbingConfig = NULL;
    this->m_ClimbableWall = NULL;
}

void UGameplayAbilityWallClimbing::Server_MoveToPoint_Implementation(const UAnimNotifyState_Base* Notify, AActor* Owner, bool locallyPredicted) {
}

void UGameplayAbilityWallClimbing::Server_Drop_Implementation() {
}

void UGameplayAbilityWallClimbing::Server_DoWallJump_Implementation(FName Section) {
}

void UGameplayAbilityWallClimbing::Server_DoTraverse_Implementation(FName Section, bool Entering, FTraversalInfo TraversalInfo) {
}

void UGameplayAbilityWallClimbing::OnWallJumpEnd() {
}

void UGameplayAbilityWallClimbing::OnTraverseExit() {
}

void UGameplayAbilityWallClimbing::OnTraverseEnterInterrumped() {
}

void UGameplayAbilityWallClimbing::OnTraverseEnterEnd() {
}

void UGameplayAbilityWallClimbing::OnTopReached(FHitResult HitResult, FTraversalInfo TraversalInfo) {
}

void UGameplayAbilityWallClimbing::OnRagdoll(const FGameplayTag CallbackTag, int32 NewCount) {
}

void UGameplayAbilityWallClimbing::OnFloorReached(FHitResult HitResult) {
}

void UGameplayAbilityWallClimbing::OnExitSync() {
}

void UGameplayAbilityWallClimbing::OnEntranceSync() {
}

void UGameplayAbilityWallClimbing::InputMoveLeftRight(const FInputActionInstance& Instance) {
}

void UGameplayAbilityWallClimbing::InputMoveForwardBackwards(const FInputActionInstance& Instance) {
}


