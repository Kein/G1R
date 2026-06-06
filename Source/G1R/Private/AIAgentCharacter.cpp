#include "AIAgentCharacter.h"
#include "Engine/EngineTypes.h"
#include "CarryComponent.h"
#include "CharacterTrinketsComponent.h"
#include "CharacterVisualsComponent.h"
#include "GothicMagicComponent.h"
#include "NPCTalkBalloonComponent.h"
#include "Net/UnrealNetwork.h"
#include "QuiverComponent.h"

AAIAgentCharacter::AAIAgentCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->m_CarryComponent = CreateDefaultSubobject<UCarryComponent>(TEXT("CarryComponent"));
    this->m_MagicComponent = CreateDefaultSubobject<UGothicMagicComponent>(TEXT("MagicComponent"));
    this->m_CharacterVisualsComponent = CreateDefaultSubobject<UCharacterVisualsComponent>(TEXT("CharacterVisualsComponent"));
    this->m_CharacterTrinketsComponent = CreateDefaultSubobject<UCharacterTrinketsComponent>(TEXT("CharacterTrinketsComponent"));
    this->m_QuiverComponent = CreateDefaultSubobject<UQuiverComponent>(TEXT("QuiverComponent"));
    this->ReplicatedMesh = NULL;
    this->DefaultAIAgentConfig = NULL;
    this->m_TalkBalloonComponent = CreateDefaultSubobject<UNPCTalkBalloonComponent>(TEXT("TalkBalloon"));
    this->m_TalkBalloonComponent->SetupAttachment(RootComponent);
}

void AAIAgentCharacter::OnRep_ReplicatedMesh() {
}

void AAIAgentCharacter::HandleDefeated_Implementation(AActor* DefeatingCharacterActor) {
}


void AAIAgentCharacter::HandleDeath_Implementation(AActor* DyingCharacterActor) {
}

void AAIAgentCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAIAgentCharacter, ReplicatedMesh);
}


