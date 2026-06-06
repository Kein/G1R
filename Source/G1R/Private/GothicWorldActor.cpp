#include "GothicWorldActor.h"

AGothicWorldActor::AGothicWorldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WorldPointManagerConfig = NULL;
    this->m_WorldItemSpawnConfig = NULL;
    this->m_IsGothicWorldActorEnabled = true;
}

void AGothicWorldActor::OnGameMapLoadedComplete(bool isNewGame) {
}


