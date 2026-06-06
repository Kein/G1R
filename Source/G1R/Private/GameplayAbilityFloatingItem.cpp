#include "GameplayAbilityFloatingItem.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilityFloatingItem::UGameplayAbilityFloatingItem() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_HasRequestedRecoveredItem = false;
    this->m_GothicCharacter = NULL;
    this->m_GothicMagicComponent = NULL;
    this->m_FloatingItemComponent = NULL;
    this->m_RecoverItemTimeoutDelay = 1.00f;
    this->m_IgnoreFirstThrowRuneNotify = false;
}

void UGameplayAbilityFloatingItem::WaitUntilRecoverFloatingItem() {
}

bool UGameplayAbilityFloatingItem::ShouldRestartVisualsOnThrowRuneWhileRunning_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilityFloatingItem::OnSyncEnd() {
}




void UGameplayAbilityFloatingItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityFloatingItem, m_HasRequestedRecoveredItem);
}


