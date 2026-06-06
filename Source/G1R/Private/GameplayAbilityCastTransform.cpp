#include "GameplayAbilityCastTransform.h"

UGameplayAbilityCastTransform::UGameplayAbilityCastTransform() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_SpawnCreatureDistance = 100.00f;
    this->m_SpawnDefinition = NULL;
    this->m_ScrollComponent = NULL;
    this->m_Creature = NULL;
}

void UGameplayAbilityCastTransform::PlayScrollAnimationSyncWithMulticast(UAnimMontage* followerAnimMontage, const UAnimMontage* targetAnimMontage) {
}

void UGameplayAbilityCastTransform::PlayScrollAnimationSyncWith(UAnimMontage* followerAnimMontage, const UAnimMontage* targetAnimMontage) {
}

void UGameplayAbilityCastTransform::PlayScrollAnimationMulticast(UAnimMontage* AnimMontage) {
}

void UGameplayAbilityCastTransform::PlayScrollAnimation(UAnimMontage* AnimMontage) {
}

UScrollComponent* UGameplayAbilityCastTransform::GetScrollComponent() const {
    return NULL;
}


