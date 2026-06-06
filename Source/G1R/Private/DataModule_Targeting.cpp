#include "DataModule_Targeting.h"
#include "CharacterTargetConfig.h"
#include "Net/UnrealNetwork.h"

UDataModule_Targeting::UDataModule_Targeting() {
    this->m_IsCameraRelevant = true;
    this->m_TargetConfigClass = UCharacterTargetConfig::StaticClass();
}

void UDataModule_Targeting::OnRep_TargetComp() {
}

int32 UDataModule_Targeting::GetTargetedByCount() const {
    return 0;
}

TArray<ACharacter*> UDataModule_Targeting::GetTargetedBy() const {
    return TArray<ACharacter*>();
}

USceneComponent* UDataModule_Targeting::GetTargetComp() const {
    return NULL;
}

AActor* UDataModule_Targeting::GetTarget() const {
    return NULL;
}

void UDataModule_Targeting::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModule_Targeting, m_Target);
    DOREPLIFETIME(UDataModule_Targeting, m_IsCameraRelevant);
    DOREPLIFETIME(UDataModule_Targeting, m_TargetComp);
    DOREPLIFETIME(UDataModule_Targeting, m_TargetedBy);
}


