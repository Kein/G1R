#include "GothicMountComponent.h"
#include "Net/UnrealNetwork.h"

UGothicMountComponent::UGothicMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SaddleSocket = TEXT("SaddleSocket");
    this->m_AlcoholEffect = NULL;
    this->m_SwampWeedEffect = NULL;
    this->m_IsUnmounting = false;
}

bool UGothicMountComponent::ValidGEClassToTarget_Implementation(AGothicCharacter* TargetCharacter, const UGameplayEffect* GameplayEffect) {
    return false;
}

void UGothicMountComponent::OnGameplayEffectAppliedToSelfRider(UAbilitySystemComponent* TargetAbilitySystemComponent, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle) {
}

void UGothicMountComponent::OnGameplayEffectAppliedToSelfMount(UAbilitySystemComponent* Source, const FGameplayEffectSpec& GameplayEffectSpec, FActiveGameplayEffectHandle ActiveGameplayEffectHandle) {
}

FName UGothicMountComponent::GetSaddleSocketName() const {
    return NAME_None;
}

AGothicCharacter* UGothicMountComponent::GetRiderCharacter() const {
    return NULL;
}

AGothicCharacter* UGothicMountComponent::GetMountCharacter() const {
    return NULL;
}

bool UGothicMountComponent::CanBeTransferedToRiderWhenMount_Implementation(const UGameplayEffect* GameplayEffect) {
    return false;
}

void UGothicMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicMountComponent, m_PlayerController);
    DOREPLIFETIME(UGothicMountComponent, m_mountCharacter);
    DOREPLIFETIME(UGothicMountComponent, m_riderCharacter);
}


