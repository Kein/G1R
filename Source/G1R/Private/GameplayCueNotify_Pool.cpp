#include "GameplayCueNotify_Pool.h"

AGameplayCueNotify_Pool::AGameplayCueNotify_Pool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cueClass = NULL;
}

bool AGameplayCueNotify_Pool::HasOpenCues() const {
    return false;
}

AVFXCue* AGameplayCueNotify_Pool::GetOpenCueByIndex(int32 Index) {
    return NULL;
}


