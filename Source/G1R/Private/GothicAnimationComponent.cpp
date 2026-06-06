#include "GothicAnimationComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGothicAnimationComponent::UGothicAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentAnimInstance = NULL;
    this->m_UseMotionMatching = false;
}

void UGothicAnimationComponent::SetDesiredUseMotionMatching(bool UseMotionMatching) {
}

void UGothicAnimationComponent::Server_ResetPivot_Implementation() {
}

void UGothicAnimationComponent::Server_DoTurnInPlace_Implementation(const UTurnOnSpotAssetConfig* Anim, float PlayRateScale, float ScaleTurnAngle, float StartTime) {
}

void UGothicAnimationComponent::Server_DoStop_Implementation(const FDynamicMontage& Anim) {
}

void UGothicAnimationComponent::Server_DoPivot_Implementation(const FDynamicMontage& Anim, EPivotTrigger PivotType, bool isPivot) {
}

void UGothicAnimationComponent::RefreshUseMotionMatching() {
}

void UGothicAnimationComponent::OnRep_ChangeLinkedAnimInstances(TArray<FLinkedInstances> NewM_LinkedAnimInstances) {
}

void UGothicAnimationComponent::OnRep_ChangeAnimationInstance() {
}

void UGothicAnimationComponent::Multicast_ResetPivot_Implementation(bool locallyPredicted) {
}

void UGothicAnimationComponent::Multicast_DoTurnInPlace_Implementation(const UTurnOnSpotAssetConfig* Anim, float PlayRateScale, float ScaleTurnAngle, float StartTime, bool locallyPredicted) {
}

void UGothicAnimationComponent::Multicast_DoStop_Implementation(const FDynamicMontage& Anim, bool locallyPredicted) {
}

void UGothicAnimationComponent::Multicast_DoPivot_Implementation(const FDynamicMontage& Anim, EPivotTrigger PivotType, bool isPivot, bool locallyPredicted) {
}

bool UGothicAnimationComponent::GetUseMotionMatching() const {
    return false;
}

TSubclassOf<UAnimInstance> UGothicAnimationComponent::GetLinkedInstance(FName Group) {
    return NULL;
}

void UGothicAnimationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGothicAnimationComponent, m_currentAnimInstance);
    DOREPLIFETIME(UGothicAnimationComponent, m_LinkedAnimInstances);
    DOREPLIFETIME(UGothicAnimationComponent, m_UseMotionMatching);
}


