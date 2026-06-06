#include "GameplayAbilityAttackLoop.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityAttackLoop::UGameplayAbilityAttackLoop() {
    this->m_PlayMontageTask = NULL;
    this->m_MaxTimeLoopTask = NULL;
    this->m_WaitEndTask = NULL;
    this->m_CollisionComponent = NULL;
}


void UGameplayAbilityAttackLoop::OnRequestedEnd(FGameplayEventData Payload) {
}

void UGameplayAbilityAttackLoop::OnNotifyEnd_Scriptable_Implementation() {
}

void UGameplayAbilityAttackLoop::OnNotifyBegin_Scriptable_Implementation() {
}


void UGameplayAbilityAttackLoop::OnEndTime() {
}

bool UGameplayAbilityAttackLoop::NeedCalculateSourceDirection_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilityAttackLoop::K2_OnOverlapExit(const AActor* Actor) {
}

void UGameplayAbilityAttackLoop::K2_OnOverlapEnterDamage(UPrimitiveComponent* HitComp, FHitResult Hit) {
}

bool UGameplayAbilityAttackLoop::IsValidTarget_Scriptable_Implementation(AActor* Target) {
    return false;
}

bool UGameplayAbilityAttackLoop::IsTargetValid_Scriptable_Implementation(AActor* TargetActor) {
    return false;
}

void UGameplayAbilityAttackLoop::InitializeCollisionComponent_Implementation(UPrimitiveComponent* CollisionComp, const UAttackLoopConfig* configAttack) {
}

TArray<AActor*> UGameplayAbilityAttackLoop::GetOverlappingActorsFromHitTask(TSubclassOf<AActor> ClassFilter) {
    return TArray<AActor*>();
}

FGameplayTag UGameplayAbilityAttackLoop::GetCombatHitType_Scriptable_Implementation() {
    return FGameplayTag{};
}

UPrimitiveComponent* UGameplayAbilityAttackLoop::GetCollisionComponentByName(const FString& CollisionCompName) {
    return NULL;
}


