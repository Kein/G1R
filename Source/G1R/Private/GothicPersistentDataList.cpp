#include "GothicPersistentDataList.h"
#include "Templates/SubclassOf.h"

UGothicPersistentDataList::UGothicPersistentDataList() {
    this->m_OwningPlayer = NULL;
    this->m_SaveVersionNumber = -1;
    this->m_ScreenshotSave = NULL;
    this->m_ScreenshotSaveId = -1;
}

UGothicPersistentDataList* UGothicPersistentDataList::LoadOrCreateSettings(const UGothicLocalPlayer* LocalPlayer, TSubclassOf<ULocalPlayerSaveGame> SaveGameClass) {
    return NULL;
}


