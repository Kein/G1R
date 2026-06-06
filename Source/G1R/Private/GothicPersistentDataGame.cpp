#include "GothicPersistentDataGame.h"

UGothicPersistentDataGame::UGothicPersistentDataGame() {
    this->m_SaveVersionNumber = -1;
}

bool UGothicPersistentDataGame::GetGenericData(const FString& idToSave, FInstancedStruct& dataToLoad) {
    return false;
}

void UGothicPersistentDataGame::AddGenericData(const FString& idToSave, const FInstancedStruct& dataToSave) {
}


