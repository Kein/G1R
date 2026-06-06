#include "TeleportGameplayCue.h"

ATeleportGameplayCue::ATeleportGameplayCue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TeleportVFXClass = NULL;
    this->m_VFXActor = NULL;
}


