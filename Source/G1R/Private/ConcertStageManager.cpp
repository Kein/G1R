#include "ConcertStageManager.h"

AConcertStageManager::AConcertStageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    //FIXME this->bNeverApplyTickOptimizations = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_AudioTrack = NULL;
    this->m_WasPaused = false;
    this->m_ActivateSequenceOnLoad = false;
    this->m_ActivateAudioTrackOnLoad = false;
    this->m_IsAudioTrackSyncEnabled = true;
    this->m_IsPlayerOutOfRange = false;
    this->m_PC = NULL;
    this->m_SequenceActor = NULL;
    this->m_AudioTrackTime = 0;
    this->m_MaxUnsyncFrames = 10;
    this->m_AudioStartEventFrame = 0;
}


void AConcertStageManager::ResetAll() {
}

void AConcertStageManager::PlaySequence() {
}

void AConcertStageManager::Play() {
}

void AConcertStageManager::OnSequenceStopped() {
}


void AConcertStageManager::OnSequenceFinished() {
}



void AConcertStageManager::OnAudioTrackStart() {
}

void AConcertStageManager::OnAudioTrackEnds() {
}

bool AConcertStageManager::IsSequenceStarted() {
    return false;
}

bool AConcertStageManager::IsSequenceCompleted() {
    return false;
}

void AConcertStageManager::ForceSaveSequenceFinished() {
}




