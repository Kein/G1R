#include "EffectActorBase.h"
#include "Net/UnrealNetwork.h"

AEffectActorBase::AEffectActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME this->bNeverApplyTickOptimizations = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_Target = NULL;
    this->m_OwnerComponent = NULL;
    this->m_IsActive = false;
    this->m_VisualGameplayEffect = NULL;
    this->m_DebuffEffectGameplayAbility = NULL;
}

void AEffectActorBase::SetIsActive(bool Value) {
}


void AEffectActorBase::RemoveVisualEffect() {
}

void AEffectActorBase::ReActivateEffect_Implementation() {
}

void AEffectActorBase::OnPrematureRemoval_Implementation() {
}


void AEffectActorBase::OnDieMeBefore(const FGameplayEventData GameplayEventData) {
}

void AEffectActorBase::OnDeactivateEffectEvent_Multicast_Implementation(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) {
}

void AEffectActorBase::OnDeactivateEffectCompleted() {
}

void AEffectActorBase::OnActivateEffectEvent_Multicast_Implementation() {
}

bool AEffectActorBase::HasDuration(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) {
    return false;
}

AActor* AEffectActorBase::GetTarget() {
    return NULL;
}

UEffectComponentBase* AEffectActorBase::GetOwnerComponent() {
    return NULL;
}

bool AEffectActorBase::GetIsActive() {
    return false;
}

UGothicAbilitySystemComponent* AEffectActorBase::GetGothicAbilitySystemComponent() {
    return NULL;
}

void AEffectActorBase::DeactivateEffect_Implementation(const FGameplayEffectRemovalInfo& FGameplayEffectRemovalInfo) {
}

void AEffectActorBase::ClearDelegates() {
}

void AEffectActorBase::BindDelegates() {
}

void AEffectActorBase::ApplyVisualEffect() {
}

void AEffectActorBase::ActivateEffect_Implementation() {
}

void AEffectActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEffectActorBase, m_Target);
    DOREPLIFETIME(AEffectActorBase, m_OwnerComponent);
    DOREPLIFETIME(AEffectActorBase, m_IsActive);
}


