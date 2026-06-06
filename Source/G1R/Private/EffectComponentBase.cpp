#include "EffectComponentBase.h"
#include "Net/UnrealNetwork.h"

UEffectComponentBase::UEffectComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Target = NULL;
    this->m_EffectActor = NULL;
    this->m_EffectActorClassPtr = NULL;
    this->m_DoingRemoveEffect = false;
    this->m_IsLoadedFromFile = false;
}

void UEffectComponentBase::OnRemoveEffectCompleted() {
}

void UEffectComponentBase::OnGameplayEffectRemoved_Scriptable_Implementation(FActiveGameplayEffectHandle ActiveGameplayEffectHandle, const FGameplayEffectContextHandle& GameplayEffectContextHandle) {
}

void UEffectComponentBase::OnGameplayEffectApplied_Scriptable_Implementation(FActiveGameplayEffectHandle ActiveGameplayEffectHandle, const FGameplayEffectContextHandle& GetContext) {
}

void UEffectComponentBase::Initialize(AActor* Target, UClass* EffectActorClass) {
}

void UEffectComponentBase::DoRemoveEffect_Scriptable_Implementation(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo) {
}

void UEffectComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEffectComponentBase, m_Target);
    DOREPLIFETIME(UEffectComponentBase, m_EffectActor);
    DOREPLIFETIME(UEffectComponentBase, m_EffectActorClassPtr);
    DOREPLIFETIME(UEffectComponentBase, m_DoingRemoveEffect);
}


