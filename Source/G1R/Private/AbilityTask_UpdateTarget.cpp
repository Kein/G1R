#include "AbilityTask_UpdateTarget.h"

UAbilityTask_UpdateTarget::UAbilityTask_UpdateTarget() {
    this->m_Target = NULL;
    this->m_TargetConfig = NULL;
}

void UAbilityTask_UpdateTarget::OnTargetVisionLost() {
}

void UAbilityTask_UpdateTarget::OnTargetDestroyed(AActor* Target) {
}

UAbilityTask_UpdateTarget* UAbilityTask_UpdateTarget::CreateUpdateTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* Target, float SphereTraceRadius) {
    return NULL;
}

void UAbilityTask_UpdateTarget::CheckVisibilityTarget() {
}


