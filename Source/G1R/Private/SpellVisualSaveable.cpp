#include "SpellVisualSaveable.h"

ASpellVisualSaveable::ASpellVisualSaveable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ItemDefinition = NULL;
    this->m_ComesFromLoadingData = false;
}



FString ASpellVisualSaveable::GetDataFrom(const FReplicatedStringMap& Map, const FName& Key) const {
    return TEXT("");
}

bool ASpellVisualSaveable::ContainsData(const FReplicatedStringMap& Map, const FName& Key) const {
    return false;
}

bool ASpellVisualSaveable::ComesFromLoadingData() const {
    return false;
}

void ASpellVisualSaveable::AddDataInto(FReplicatedStringMap& Map, const FName& Key, const FString& Value) {
}


