#include "GothicPlayerCharacter.h"
#include "Engine/EngineTypes.h"
#include "CarryComponent.h"
#include "CharacterTrinketsComponent.h"
#include "CharacterVisualsComponent.h"
#include "GothicMagicComponent.h"
#include "NPCTalkBalloonComponent.h"
#include "QuiverComponent.h"

AGothicPlayerCharacter::AGothicPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME this->bNeverApplyTickOptimizations = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->m_CarryComponent = CreateDefaultSubobject<UCarryComponent>(TEXT("CarryComponent"));
    this->m_MagicComponent = CreateDefaultSubobject<UGothicMagicComponent>(TEXT("MagicComponent"));
    this->m_CharacterVisualsComponent = CreateDefaultSubobject<UCharacterVisualsComponent>(TEXT("CharacterVisualsComponent"));
    this->m_CharacterTrinketsComponent = CreateDefaultSubobject<UCharacterTrinketsComponent>(TEXT("CharacterTrinketsComponent"));
    this->m_QuiverComponent = CreateDefaultSubobject<UQuiverComponent>(TEXT("QuiverComponent"));
    this->m_TalkBalloonComponent = CreateDefaultSubobject<UNPCTalkBalloonComponent>(TEXT("TalkBalloon"));
    this->m_TalkBalloonComponent->SetupAttachment(RootComponent);
}

void AGothicPlayerCharacter::Server_PlayerProperlySync_Implementation(const FString& Name) {
}


