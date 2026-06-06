#include "SpikePuzzle.h"

ASpikePuzzle::ASpikePuzzle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_DamageTimeInterval = 3.00f;
    this->m_DisabledTimer = 30.00f;
    this->m_FirstStageName = TEXT("Blood_Spike_Button_01_Stage");
    this->m_FirstButtonName = TEXT("Blood_Spike_Button_01");
    this->m_SecondButtonName = TEXT("Blood_Spike_Door_02");
    this->m_FinalLeverName = TEXT("SpikeFinishLever");
    this->m_FinalBlueprint = NULL;
    this->m_ButtonResetName = TEXT("Blood_Spike_Button_Reset_01");
    this->m_DamageEventDelay = 0.50f;
}

void ASpikePuzzle::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASpikePuzzle::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASpikePuzzle::BP_DoDamage_Implementation(AGothicCharacter* Character) {
}


